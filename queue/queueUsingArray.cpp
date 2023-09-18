#include <bits/stdc++.h>
using namespace std;
class Queue
{
    int front;
    int back;
    vector<int> v;

public:
    Queue()
    {
        this->front = -1;
        this->back = -1;
    }

    void enqueue(int data)
    {

        this->v.push_back(data);
        this->back++;
        if (this->back == 0)
            this->front = 0;
    }

    void deque()
    {
        if (this->front == this->back)
        {
            this->front = -1;
            this->back = -1;
            this->v.clear();
        }
        else
            this->front++;
    }

    int get_front()
    {
        if (this->front == -1)
            return -1;
        return this->v[this->front];
    }

    bool isEmpty()
    {
        return this->front == -1;
    }

public:
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
        cout << q.get_front() << " ";
        q.deque();
    }
    cout << endl;
}