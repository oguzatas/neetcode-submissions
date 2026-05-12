class Solution {
public:
  int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (auto &tok : tokens) {
            if (tok == "+" || tok == "-" || tok == "*" || tok == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int res = 0;

                if (tok == "+") res = a + b;
                else if (tok == "-") res = a - b;
                else if (tok == "*") res = a * b;
                else if (tok == "/") res = a / b; 

                st.push(res);
            } else {
                st.push(stoi(tok));
            }
        }

        return st.top();
    }
};
