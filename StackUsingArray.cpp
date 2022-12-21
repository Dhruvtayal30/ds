#include <iostream>
using namespace std;

#define n 100

class stack
{
protected:
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {

        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop()
    {

        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return;
        }

        top--;
    }

    int topel()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return -1;
        }

        return arr[top];
    }

    void is_empty()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return;
        }
        else
        {
            cout << "Stack not Empty" << endl;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return;
        }

        cout << "Stack: ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void clear()
    {
        top = -1;
    }
};

int main()
{
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.display();
    cout << "Top Elemet: " << s1.topel() << endl;
    s1.pop();
    cout << "Top Elemet: " << s1.topel() << endl;
    s1.clear();
    s1.display();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.pop();
    // s1.is_empty();
    return 0;
}