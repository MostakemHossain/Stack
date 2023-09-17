#include <bits/stdc++.h>
using namespace std;

// naive approch
void reverse_stack(stack<int> &st)
{
    stack<int> s1, s2;
    while (!st.empty())

    {
        s1.push(st.top());
        st.pop();
    }
    while (!s1.empty())

    {
        s2.push(s1.top());
        s1.pop();
    }
    while (!s2.empty())

    {
        st.push(s2.top());
        s2.pop();
    }
}

// recursive approch T.C---> O(n^2) S.C----> O(n)

void recursively_insert_At_Buttom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int curr = st.top();
    st.pop();
    recursively_insert_At_Buttom(st, x);
    st.push(curr);
}

void f(stack<int> st)
{
    if (st.empty())
        return;

    int curr = st.top();
    st.pop();
    f(st);

    recursively_insert_At_Buttom(st, curr);
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    f(st);
    while (!st.empty())
    {
        cout << " "
             << st.top();
        st.pop();
    }
}