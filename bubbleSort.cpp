#include <iostream>
using namespace std;

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }


template <typename B>
B bubbleTemp(B arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename P>
P printTemp(P arr[], int size){
     for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {52, 613, 45, 22, 36,69};
    int N = sizeof(arr) / sizeof(arr[0]);

    // bubbleSort(arr, N);
    // cout << "Sorted array:" << endl;
    // printArray(arr, N);

    bubbleTemp(arr,N);
    cout << "Bubble Sorted array:" << endl;
    printTemp(arr,N);
    return 0;
}