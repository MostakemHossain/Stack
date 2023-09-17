#include <iostream>
#include <stack>
using namespace std;
void remove_At_buttom(stack<int> &st)
{
    stack<int> temp;
    while (st.size() != 1)
    {
        temp.push(st.top());
        st.pop();
    }
    st.pop();

    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}

// recursive
void f(stack<int> &st)
{
    if (st.size() == 1)
    {
        st.pop();
        return;
    }
    int curr = st.top();
    st.pop();
    f(st);
    st.push(curr);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    f(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}