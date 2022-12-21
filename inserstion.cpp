#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {5, 4, 3, 2, 1};

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] > curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}