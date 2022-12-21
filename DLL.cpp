#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class dll
{

public:
    node *head = NULL;
    // node *tail = NULL;

    void insertatHead(int val)
    {
        node *n = new node(val);

        if (head == NULL)
        {
            head = n;
            return;
        }
        n->next = head;
        head->prev = n;
        head = n;
    }

    void insertAtTail(int val)
    {
        if (head == NULL)
        {
            insertatHead(val);
            return;
        }
        node *n = new node(val);

        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }

    void insertatindex(int val, int index)
    {
        int i = 1;
        if (index == i)
        {
            insertatHead(val);
            return;
        }
        node *n = new node(val);
        node *temp = head;
        while (i != index - 1)
        {
            temp = temp->next;
            i++;
        }
        n->next = temp->next;
        n->prev = temp;
        if (temp->next != NULL)
        {
            temp->next->prev = n;
        }
        temp->next = n;
    }

    void delathead()
    {
        if (head == NULL)
        {
            cout << "ESLL" << endl;
            return;
        }
        node *todel = head;
        head->next->prev = NULL;
        head = head->next;
        delete todel;
    }

    void delatTail()
    {
        if (head == NULL)
        {
            cout << "ESLL" << endl;
            return;
        }
        if (head->next == NULL)
        {
            delathead();
            return;
        }
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node *todel = temp->next;
        temp->next = NULL;
        delete todel;
    }

    void delatpos(int index)
    {
        if (head == NULL)
        {
            cout << "Empty LL";
            return;
        }
        int i = 1;
        if (i == index)
        {
            delathead();
            return;
        }
        node *temp = head;
        while (i != index)
        {
            temp = temp->next;
            i++;
        }
        node *todel = temp;
        temp->prev->next = temp->next;
        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }
        delete todel;
    }

    void search(int key)
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Found" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "not Found" << endl;
    }

    void display()
    {
        node *temp = head;
        cout << "NULL<-";
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    dll l1;
    l1.insertAtTail(2);
    l1.insertAtTail(3);
    l1.insertAtTail(4);
    l1.insertAtTail(5);
    l1.insertatHead(1);
    l1.display();
    // l1.insertatindex(6, 3);
    // l1.insertatindex(7, 1);
    // l1.insertatindex(8, 6);
    // l1.delathead();
    // l1.delatTail();
    // l1.delatpos(1);
    // l1.delatpos(3);
    // l1.delatpos(5);
    l1.display();
    // l1.search(1);
    // l1.search(3);
    // l1.search(5);
    // l1.search(7);

    return 0;
}