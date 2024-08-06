#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};

    // cout << v.back() << endl;
    // v.pop_back();
    // cout << v.back() << endl << endl;

    cout << "Size of Vector: " << v.size() << endl
         << endl;

    auto vecBegin = v.begin();
    auto vecEnd = v.end();
    cout << "Vector Begin: " << *vecBegin << endl;
    cout << "Vector End: " << *vecEnd << endl
         << endl;

    auto vecCRBegin = v.crbegin();
    auto vecCREnd = v.crend();
    cout << "Vector CRBegin: " << *vecCRBegin << endl;
    cout << "Vector CREnd: " << *vecCREnd << endl
         << endl;

    for (auto i = v.begin();
         i != v.end(); ++i)
    {
        cout << *i << ' ';
    }
    cout << endl;

    cout << "Vector: ";
    while (!v.empty())
    {
        cout << v.back() << " ";
        v.pop_back();
    }
    cout << endl;

    return 0;
}
