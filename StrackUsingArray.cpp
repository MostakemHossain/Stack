#include <bits/stdc++.h>
using namespace std;
class Stack
{

    int capacity;
    int *arr;
    int top;

public:
    Stack(int c)
    {
        this->capacity = c;
        arr = new int(c);
        this->top = -1;
    }

    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop()
    {
        if (this->top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return this->top--;
    }

    int Top()
    {
        if (this->top == -1)
        {
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return arr[this->top];
    }

    bool empty()
    {
        return this->top == -1;
    }

    int size()
    {
        return this->top + 1;
    }

    bool isFull()
    {
        return this->top == this->capacity - 1;
    }
};
int main()
{

    Stack st(6);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.Top() << endl;
    st.push(1);
    cout << st.Top() << endl;

    st.push(2);
    cout << st.Top() << endl;
    st.push(3);
    cout << st.Top() << endl;
}