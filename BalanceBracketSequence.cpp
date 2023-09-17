#include <bits/stdc++.h>
using namespace std;

// TC----->O(n),   SC---> O(n)
bool isBalanced(string s)
{
    stack<char> c;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i]; // current character store
        if (ch == '[' || ch == '{' || ch == '(')
        {
            c.push(ch);
        }
        else
        {
            // closing bracket check
            if (ch == ')' && !c.empty() && c.top() == '(')
            {
                c.pop();
            }
            else if ((ch == '}' && !c.empty() && c.top() == '{'))
            {
                c.pop();
            }
            else if ((ch == ']' && !c.empty() && c.top() == '['))
            {
                c.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return c.empty();
}
int main()
{
    string st = "())";
    cout << isBalanced(st) << endl;
}