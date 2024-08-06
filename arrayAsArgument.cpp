#include <iostream>
using namespace std;
// class arrayAs
// {
// private:
// public:
//     void fun(int arr[])
//     {
//         int i;
//         for (i = 0; i < 3; i++)
//         {
//             cout << arr[i];
//         }
//     }
// };

template <typename T>
T argument(T arr[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << arr[i];
    }
}

int main()
{

    // int a[5], i;
    // for (i = 0; i < 3; i++)
    // {
    //     cin >> a[i];
    // }
    // arrayAs ob;
    // ob.fun(a);

    int j, aa[5];
    for (j = 0; j < 3; j++)
    {
        cin >> aa[j];
    }
    argument(aa);
    return 0;
}
