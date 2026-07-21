class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (string token : tokens) {
            if (token != "+" && token != "-" &&
                token != "*" && token != "/") {

                s.push(stoi(token));
            } else {
                int x = s.top();
                s.pop();
                int y = s.top();
                s.pop();

                if (token == "+")
                    s.push(y + x);
                else if (token == "-")
                    s.push(y - x);
                else if (token == "*")
                    s.push(y * x);
                else
                    s.push(y / x);
            }
        }

        return s.top();
    }
};