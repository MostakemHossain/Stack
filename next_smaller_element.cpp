#include <bits/stdc++.h>
using namespace std;

vector<int> next_smaller_elememt(vector<int> &arr)
{
    int n = arr.size();
    vector<int> output(n, -1);
    stack<int> st; // index base
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[i] < arr[st.top()])
        {
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return output;
}
int main()
{

    // 10
    // 4 6 3 1 0 9 5 6 7 3
    // 3 3 1 0 -1 5 3 3 3 -1
    int n;
    cin >> n;
    vector<int> v;

    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> result = next_smaller_elememt(v);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << '\n';
}