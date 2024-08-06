#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> li{23, 756, 5644, 45};

    cout << "Output for .front(): ";
    cout << li.front() << endl
         << endl;
    cout << "Output for .back(): ";
    cout << li.back() << endl
         << endl;

    li.push_front(100);
    li.push_back(200);

    auto i = li.begin();
    li.insert(i, 2, 3);
    cout << "Output for .insert(i,4,6): ";
    for (int ii : li)
        cout << ii << endl;
    cout << endl
         << endl;

    cout << "Output for .insert(j,687687687): ";
    auto j = li.begin();
    li.insert(j, 2345);
    for (int ii : li)
        cout << ii << endl;
    cout << endl
         << endl;

    cout << "Output for .size(): ";
    cout << li.size();
    cout << endl
         << endl;

    advance(j, 4);
    li.erase(j);
    cout << "Output for .erase(j): ";
    for (int ii : li)
        cout << ii << endl;
    cout << endl
         << endl;

    li.erase(li.begin(), li.end());
    cout << "Output for .erase(li.begin(), li.end()): ";
    for (int ii : li)
        cout << ii << endl;
    cout << endl
         << endl;
}