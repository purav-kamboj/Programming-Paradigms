// EXPERIMENT 1 - Write down a program to sort an array using Function Templates.
// ========>>>>

#include <iostream>
using namespace std;

template <typename B>
B bubbleTemp(B arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename P>
P printTemp(P arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {52, 613, 45, 22, 36, 69};
    double arrDouble[] = {5.2, 61.3, 4.5, 2.2, 3.6, 6.9};
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << "Name - Purav Kamboj" << endl
         << "Roll no. - 2310997227" << endl
         << endl;

    bubbleTemp(arr, N);
    cout << "Bubble Sorted array:" << endl;
    printTemp(arr, N);
    cout << endl;
    cout << endl;

    bubbleTemp(arrDouble, N);
    cout << "Bubble Sorted array:" << endl;
    printTemp(arrDouble, N);
    return 0;
}