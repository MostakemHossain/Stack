#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    Node *head;
    int capacity;
    int currSize;

public:
    Stack(int c)
    {
        this->capacity = c;
        this->currSize = 0;
        head = NULL;
    }

    bool empty()
    {
        return this->head == NULL;
    }

    bool isFULL()
    {
        return this->capacity == this->currSize;
    }

    void push(int data)
    {

        if (this->capacity == this->currSize)
        {
            cout << "Overflow\n";
            return;
        }

        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->currSize++;
    }

    int pop()
    {
        if (this->head == NULL)
        {
            cout << "Underflow\n";
            return INT_MIN;
        }

        Node *newNode = this->head->next;
        this->head->next = NULL;
        Node *toberemove = this->head;
        int result = toberemove->data;
        delete toberemove;
        this->head = newNode;
        return result;
    }
    int size()
    {
        return this->currSize;
    }

    int getTop()
    {
        if (this->head == NULL)
        {
            cout << "Underflow\n";
            return INT_MIN;
        }
        return this->head->data;
    }
};
int main()
{

    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(4);
    st.push(4);
    cout << st.getTop() << endl;
}