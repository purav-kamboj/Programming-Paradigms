#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    int R;
    cout << " Enter size of array: ";
    cin >> R;
    int V[R];

    cout << endl
         << " ------Enter Values for Array------ " << endl;
    for (int i = 0; i < R; i++)
    {
        cout << "Value " << i + 1 << " = ";
        cin >> V[i];
        st.push(V[i]);
    }

    stack<int> newst;

    cout << endl
         << " Normal Stack: ";
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
