#include <iostream>
#include <conio.h>
using namespace std;

int arr[100], n, top = -1;

void Push()
{

    int item;
    cout << "Enter a Element for Push Operation: ";
    cin >> item;

    if (top >= n - 1)
    {
        cout << "Stack Overflow..." << endl;
        return;
    }
    else
    {
        top++;
        arr[top] = item;
        cout << "Element Push Done..." << endl;
    }
}

void Pop()
{
    if (top <= -1)
    {
        cout << "Stack Underflow..." << endl;
        return;
    }
    else
    {
        top--;
        cout << "Element Pop Done..." << endl;
    }
}

int peek()
{
    if (top <= -1)
    {
        return -1;
    }
    else
    {
        return arr[top];
    }
}

string Isfull()
{
    if (top == n - 1)
    {
        return "Yes, Stack is full... \n";
    }
    else
    {
        return "No, Stack is not full... \n";
    }
}

string IsEmpty()
{
    if (top == -1)
    {
        return "Yes, Stack is Empty... \n";
    }
    else
    {
        return "No, Stack is Not Empty... \n";
    }
}

void Display()
{
    if (top >= 0)
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
    else
    {
        cout << "No Element to Display (Stack Empty)... \n";
    }
}

int main()
{
    cout << "Enter Stack Size: ";
    cin >> n;

    int op;

    cout << "1 -> Push \n2 -> Pop \n3 -> Peek \n4 -> Isfull \n5 -> IsEmpty \n6 -> Display \n0 -> Exit\n";

    while (1)
    {

        cout << "\nEnter Stack Operation Number: ";
        cin >> op;
        switch (op)
        {
        case 1:
            Push();
            break;

        case 2:
            Pop();
            break;

        case 3:
            cout << peek() << endl;
            break;

        case 4:
            cout << Isfull();
            break;

        case 5:
            cout << IsEmpty();
            break;

        case 6:
            Display();
            break;

        case 0:
            cout << "\nNo Operation Peformed Program Exit...";
            return 0;

        default:
            cout << "Invalid Operation (Enter Operation Number Again)... \n";
        }
    }
    getch();
}