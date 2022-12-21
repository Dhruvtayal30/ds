#include <iostream>
using namespace std;

class upper
{
private:
    int n;
    int *arr;

public:
    upper(int n)
    {
        this->n = n;
        arr = new int[(n * (n + 1) / 2)];
    }
    ~upper()
    {
        delete[] arr;
    }
    void store(int x, int i, int j)
    {
        if (i < 1 || j < 1 || i > n || j > n)
        {
            cout << "ofb" << endl;
        }
        else if (i <= j)
        {
            arr[(i * (i - 1)) / 2 + j - 1] = x;
        }
        else
        {
            cout << "must be zero";
        }
    }
    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i > j)
                {
                    cout << "0\t";
                }
                else
                {
                    cout << arr[(i * (i - 1)) / 2 + j - 1] << "\t";
                }
            }
            cout << endl;
        }
    }

    void retrive(int i, int j)
    {

        if (i < 1 || j < 1 || i > n || j > n)
        {
            cout << "ofb" << endl;
        }
        else if (i <= j)
        {
            cout << arr[(i * (i - 1)) / 2 + j - 1];
        }
        else
        {
            cout << 0;
        }
    }
};

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;
    upper dm(n);
    int x, j, i;
    for (int k = 1; k <= (n * (n + 1)) / 2; k++)
    {
        cout << "enter data: ";
        cin >> x;
        cout << "Enter Dim: ";
        cin >> i >> j;
        dm.store(x, i, j);
    }
    dm.display();
    dm.retrive(2, 2);
    return 0;
}