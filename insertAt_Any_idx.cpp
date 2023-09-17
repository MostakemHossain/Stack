#include <bits/stdc++.h>
using namespace std;
void insert_At_Any_idx(stack<int> &st, int x, int idx)
{
    stack<int> temp;
    int n = st.size();
    int count = 0;
    while (count < n - idx)
    {
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insert_At_Any_idx(st, 100, 1);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}