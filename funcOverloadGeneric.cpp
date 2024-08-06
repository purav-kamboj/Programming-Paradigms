#include <iostream>
using namespace std;


template <typename T>
T sum(T a, T b)
{
    cout<<"The sum of A and B is: "<<a+b<<endl;
    
}

int sum(int a, int b){
        cout<<"The sum of Integers, A and B is: "<<a+b<<endl;

}


// template <typename T, typename X>
// T sum(T a, X b)
// {
//     cout<<"The sum of A and B is: "<<a+b<<endl;
// }


// template <typename D>
// D sum(D a, D b)
// {
//     cout<<"The sum of Integers, A and B is: "<<a+b<<endl;
// }

int main()
{
    cout << endl;

    sum(3.44, 6.77);
    cout << endl;
    sum(3.666, 6.44);
    cout << endl;
    sum(3, 6);
    cout << endl;

    // sum<int>(5,5);
    // cout << endl;

    return 0;
}
