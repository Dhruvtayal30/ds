#include <iostream>
using namespace std;

// #define size 100

class Queue
{

protected:
    int *arr;
    int front, rear, size;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }

    void enQueue(int x)
    {
        if (is_Full())
        {
            cout << "Queue Overflow" << endl;
        }

        else
        {
            arr[++rear] = x;
            if (is_Empty())
            {
                front = 0;
            }
        }
    }

    void deQueue()
    {
        if (is_Empty())
        {
            cout << "Queue Empty" << endl;
        }
        else if (front == rear)
        {
            clear();
        }
        else
        {
            front++;
        }
    }

    bool is_Full()
    {
        return rear == size - 1;
    }

    void frontEl()
    {
        if (is_Empty())
        {
            cout << "Queue Empty" << endl;
            return;
        }
        cout << arr[front] << endl;
    }

    bool is_Empty()
    {
        // if (front == -1)
        // {
        //     return true;
        // }
        // return false;
        return front == -1;
    }

    void clear()
    {
        front = rear = -1;
    }

    void display()
    {
        if (is_Empty())
        {
            cout << "Queue Empty" << endl;
        }

        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the Size of Queue: ";
    cin >> n;
    Queue Q1(n);
    Q1.enQueue(1);
    Q1.enQueue(2);
    Q1.enQueue(3);
    Q1.enQueue(4);
    Q1.enQueue(5);
    Q1.clear();
    Q1.frontEl();
    /*
    if (Q1.is_Full())
    {
        cout << "Queue Full" << endl;
    }
    else
    {
        cout << "Queue Not Full" << endl;
    }
    Q1.display();
    if (Q1.is_Empty())
    {
        cout << "Queue Empty" << endl;
    }
    else
    {
        cout << "Queue Not Empty" << endl;
    }
*/
    return 0;
}