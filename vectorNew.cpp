#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec1;

    vec1.push_back(34);
    vec1.push_back(53);
    vec1.push_back(765);
    vec1.push_back(64);
    vec1.push_back(973);

    cout << "Size of Vector: " << vec1.size() << endl;
    cout << "Capacity of Vector: " << vec1.capacity() << endl;
    cout << "Vector1 NORMAL: ";
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }

    cout << endl << endl;

    vec1.insert(vec1.begin() + 2, 455);
    vec1.insert(vec1.begin() + 2, 6, 455);

    // vec1.push_back(23);
    cout << "Size of Vector: " << vec1.size() << endl;
    cout << "Capacity of Vector: " << vec1.capacity() << endl;
    cout << "Vector1 after INSERT: ";
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl << endl;

    vec1.erase(vec1.begin() + 1);
    cout << "Size of Vector: " << vec1.size() << endl;
    cout << "Capacity of Vector: " << vec1.capacity() << endl;
    cout << "Vector1 after ERASE: ";
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }

    // cout << endl << endl;
    // vec1.clear();
    // cout << "Vector1 after CLEAR: ";
    // for (int i = 0; i < vec1.size(); i++)
    // {
    //     cout << vec1[i] << " ";
    // }

    cout << endl << endl;
    vec1.assign(3, 56);
    cout << "Size of Vector: " << vec1.size() << endl;
    cout << "Capacity of Vector: " << vec1.capacity() << endl;
    cout << "Vector1 after ASSIGN: ";
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }


    cout << endl << endl;
    vec1.shrink_to_fit();
    cout << "Size of Vector: " << vec1.size() << endl;
    cout << "Capacity of Vector: " << vec1.capacity() << endl;
    cout << "Vector1 after ASSIGN: ";
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }

    return 0;
}
