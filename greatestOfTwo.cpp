#include <iostream>
using namespace std;

class greatestOfTwo
{
private:
public:
    int greater(int num1, int num2)
    {
        if (num1 > num2)
        {
            cout << num1 << " is Greater";
        }
        else
        {
            cout << num2 << " is Greater";
        }
    }
    void greater(double num1, double num2)
    {
        if (num1 > num2)
        {
            cout << num1 << " is Greater";
        }
        else
        {
            cout << num2 << " is Greater";
        }
    }
    void greater(char num1, char num2)
    {
        if (num1 > num2)
        {
            cout << num1 << " is Greater";
        }
        else
        {
            cout << num2 << " is Greater";
        }
    }
};

template <typename T, typename X>
T great(T a, X b)
{
    if (a > b)
    {
        cout << a << " is Greater";
    }
    else
    {
        cout << b << " is Greater";
    }
}

int main()
{
    greatestOfTwo ob;

    ob.greater(2, 5);
    cout << endl;
    ob.greater(1.4, 6.9);
    cout << endl;
    ob.greater('o', 'h');

    cout << endl;
    cout << endl;

    great(3, 6.55);
    cout << endl;
    great(3.666, 6);
    cout << endl;
    great('d', 'g');

    return 0;
}
