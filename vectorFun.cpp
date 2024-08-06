#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class vectorFun
{
private:
    /* data */
public:
    vector<int> vec1;
    int vectorFunction()
    {

        vec1.push_back(455);
        vec1.push_back(34);
        vec1.push_back(53);
        vec1.push_back(455);
        vec1.push_back(765);
        vec1.push_back(455);
        vec1.push_back(973);
        vec1.push_back(455);

        cout << endl
             << endl;
        cout << "Size of Vector: " << vec1.size() << endl;
        cout << "Capacity of Vector: " << vec1.capacity() << endl;
        cout << "Vector1 NORMAL: ";
        for (int i = 0; i < vec1.size(); i++)
        {
            cout << vec1[i] << " ";
        }

        cout << endl
             << endl;
    }
    int removeSame()
    {
        int removeValue = 455;
        for (int i = 0; i < vec1.size(); i++)
        {
            vector<int>::iterator it;

            it = vec1.begin() + i;
            if (vec1[i] == removeValue)
            {
                vec1.erase(it);
            }
        }

        cout << "Vector1 after REMOVAL: ";
        for (int i = 0; i < vec1.size(); i++)
        {
            cout << vec1[i] << " ";
        }
        cout << endl
             << endl
             << endl;
    }
};

int main()
{
    vectorFun obj;
    obj.vectorFunction();
    obj.removeSame();

    return 0;
}
