#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> input;
    input.push(1);
    input.push(2);
    input.push(3);
    input.push(4);
    input.push(5);

    stack<int> temp;

    while (!input.empty())
    {
        temp.push(input.front());
        input.pop();
    }
    while (!temp.empty())
    {
        input.push(temp.top());
        temp.pop();
    }

    while (!input.empty())
    {
        cout << input.front() << " ";
        input.pop();
    }
}