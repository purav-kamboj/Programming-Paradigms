#include <iostream>
using namespace std;

#define N 5
int stack[N];
int top = -1;
void push()
{
    int x;
    cout << "Enter the element to be pushed: ";
    cin >> x;
    if (top == N - 1)
    {
        cout << "OVERFLOW";
    }
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        cout << "UNDERFLOW";
    }
    else
    {
        item = stack[top];
        top--;
        cout << "Item REMOVED: " << item << endl;
    }
}

void disp()
{
    int i;
    for (i = 0; i >= 0; i--)
    {
        cout << "Element " << i <<": "<<stack[i] << endl;
    }
}

int main()
{
    push();
    push();
    push();
    push();
    pop();
    disp();
}
