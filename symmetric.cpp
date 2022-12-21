#include <iostream>
using namespace std;

class sysm
{
private:
    int n;
    int *arr;

public:
    sysm(int n)
    {
        this->n = n;
        arr = new int[(n * (n + 1)) / 2];
    }

    void store(int x, int i, int j)
    {
        if (i < 1 || j < 1 || i > n || j > n)
        {
            cout << "ofb";
        }
        else if (i >= j)
        {
            int k = (i * (i - 1)) / 2 + j - 1;
            cout << "Index: " << k << endl;
            arr[k] = x;
        }
    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i >= j)
                {
                    cout << arr[(i * (i - 1)) / 2 + j - 1] << "\t";
                }
                else
                {
                    cout << arr[(j * (j - 1)) / 2 + i - 1] << "\t";
                }
            }
            cout << endl;
        }
    }

    void retrive(int i, int j)
    {
        if (i < 1 || j < 1 || i > n || j > n)
        {
            cout << "ofb";
        }
        else if (i >= j)
        {
            cout << arr[(i * (i - 1)) / 2 + j - 1] << endl;
        }
        else
        {
            cout << arr[(j * (j - 1)) / 2 + i - 1] << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;
    sysm dm(n);
    int x;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "enter data: ";
            cin >> x;
            dm.store(x, i, j);
        }
    }
    dm.display();
    dm.retrive(3, 3);
    return 0;
}