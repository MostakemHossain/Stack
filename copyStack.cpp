#include <iostream>
#include <stack>
using namespace std;

// naive
stack<int> copyStack(stack<int> &input)
{
    stack<int> temp;
    while (!input.empty())
    {
        temp.push(input.top());
        input.pop();
    }

    while (!temp.empty())
    {
        input.push(temp.top());
        temp.pop();
    }
    return input;
}

// recursion
void recursiveCopy(stack<int> &st, stack<int> &input)
{
    if (st.empty())
        return;

    int curr = st.top();
    st.pop();
    recursiveCopy(st, input);
    input.push(curr);
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> result;
    recursiveCopy(st, result);
    while (!result.empty())
    {
        cout << result.top() << " ";
        result.pop();
    }
    cout << endl;
}