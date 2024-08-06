#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    int V[5] = {10,
                 20,
                 30,
                 40,
                 50};

    for (int i = 0; i < 5; i++)
    {
        st.push(V[i]);
    }

    stack<int> newst;

    cout << " Normal Stack: ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        newst.push(st.top());
        st.pop();
    }

    cout << endl
         << endl;

    cout << " Reversed Stack: ";
    while (!newst.empty())
    {
        cout << newst.top() << " ";
        newst.pop();
    }

    cout << endl
         << endl;
}
