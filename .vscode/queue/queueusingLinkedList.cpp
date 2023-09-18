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

// enque---> add to tail
// deque----> remove from head
class Queue
{
    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }
    void enqueue(int data)

    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            // ll is empty
            this->head = this->tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        this->size++;
    }

    void deque()
    {
        if (this->head == NULL)
        {
            // ll is empty
            return;
        }
        else
        {
            Node *oldHead = this->head;
            Node *newhead = this->head->next;
            this->head = newhead;
            if (this->head == NULL)
                this->tail = NULL;
            oldHead->next = NULL;
            free(oldHead);
            this->size--;
        }
    }

    int get_size()
    {
        return this->size;
    }

    bool isEmpty()
    {
        return this->head == NULL;
    }

    int front()
    {
        if (this->head == NULL)
            return -1;
        return this->head->data;
    }
};
int main()
{

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.deque();
    q.enqueue(50);
    while (!q.isEmpty())
    {
        cout << q.front() << " ";
        q.deque();
    }
    cout << endl;
}