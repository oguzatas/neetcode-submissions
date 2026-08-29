class LRUCache {
public:

    list<pair<int,int>> dlist;

    unordered_map<int,list<pair<int,int>>::iterator> cache;
    
    int cap;

    LRUCache(int capacity) : cap(capacity) {} 
    
    
    int get(int key) {
        auto it = cache.find(key);
        if (it == cache.end()) return -1;
        dlist.splice(dlist.begin(), dlist, it->second);
        return it->second->second; 
    }
    
    void put(int key, int value) {
        auto it = cache.find(key);
        if (it != cache.end()) {
            it->second->second = value;
            dlist.splice(dlist.begin(), dlist, it->second);
            return;
        }
        if (dlist.size() == cap) {
            int lrukey = dlist.back().first;
            cache.erase(lrukey);
            dlist.pop_back();
        }
        dlist.push_front({key, value});
        cache[key] = dlist.begin(); 
    }
};
