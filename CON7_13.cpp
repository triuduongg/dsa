#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string ts = "+-*/";
bool check(char c)
{
    for (int i = 0; i < ts.size(); i++)
        if (ts[i] == c)
            return 1;
    return 0;
}
bool Var(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s, k1, k2;
        cin >> s;
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (check(s[i]))
            {
                k1 = st.top();
                st.pop();
                k2 = st.top();
                st.pop();
                st.push(k1 + k2 + s[i]);
            }
            else
                st.push(string(1, s[i]));
        }
        cout << st.top() << endl;
    }
}
