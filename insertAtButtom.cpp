#include <iostream>
#include <stack>
using namespace std;

// naive  T.C---O(n):: S.C---O(n)
void insertAtButtom(stack<int> &input, int x)
{
    stack<int> temp;
    while (!input.empty())
    {
        temp.push(input.top());
        input.pop();
    }
    input.push(x);

    while (!temp.empty())
    {
        input.push(temp.top());
        temp.pop();
    }
}

// recursion  T.C---O(n):: S.C---O(n)
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

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    recursively_insert_At_Buttom(st, 100);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}