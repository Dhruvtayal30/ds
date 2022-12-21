#include <iostream>
using namespace std;

class DM
{
private:
    int n;
    int *arr;

public:
    DM(int n)
    {
        this->n = n;
        arr = new int[n];
    }
    ~DM()
    {
        delete[] arr;
    }
    void store(int i, int j, int k)
    {
        if (j < 1 || k < 1 || j > n || k > n)
        {
            cout << "ofb";
            // break;
        }
        else if (j == k)
        {
            arr[j] = i;
        }
        else
        {
            arr[i] = 0;
        }
    }

    void display()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i != j)
                {
                    cout << "0\t";
                }
                else
                {
                    cout << arr[i] << "\t";
                }
            }
            cout << endl;
        }
    }

    void get(int j, int k)
    {
        if (j < 1 || k < 1 || j > n || k > n)
        {
            cout << "ofb";
            // break;
        }
        else if (j == k)
        {
            cout << arr[j] << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter: ";
    cin >> n;
    DM dm(n);
    int i, j, k;
    for (int x = 1; x <= n; x++)
    {
        cout << "enter data: ";
        cin >> i;
        cout << "Enter Dim: ";
        cin >> j >> k;
        if (j != k)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            dm.store(i, j, k);
        }
    }
    dm.display();
    dm.get(1, 1);
    return 0;
}