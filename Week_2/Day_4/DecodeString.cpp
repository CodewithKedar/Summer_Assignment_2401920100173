class Solution {
public:
    string decodeString(string s) {
        stack<int> st;
        stack<string> stac;

        int num = 0;

        for (char ch : s) {

            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            else if (ch == '[') {
                st.push(num);
                num = 0;
                stac.push("[");
            }

            else if (ch != ']') {
                stac.push(string(1, ch));
            }

            else {

                int k = st.top();
                st.pop();

                string str = "";

                while (stac.top() != "[") {
                    str = stac.top() + str;
                    stac.pop();
                }

                stac.pop(); 

                string ans = "";

                for (int i = 0; i < k; i++) {
                    ans += str;
                }

                stac.push(ans);
            }
        }

        string res = "";

        while (!stac.empty()) {
            res = stac.top() + res;
            stac.pop();
        }

        return res;
    }
};
