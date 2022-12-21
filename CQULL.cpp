#include <iostream>
using namespace std;

class node
{
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
    node *front = NULL;
    node *rear = NULL;

    void enqueue(int x)
    {
        }
};

int main()
{

    return 0;
}