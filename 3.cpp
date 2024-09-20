
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter row for  matrix:";
    cin >> m;
    cout << "Enter column for matrix:";
    cin >> n;
    int arr[m][n];
    cout << "enter elements for array:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]); // transpose
        }
    }

    for (int i = 0; i < m; i++)
    {
        int min = 0;
        int max = n - 1;
        if (i % 2 == 0)
        {
            while (min < max)
            {
                swap(arr[i][min], arr[i][max]);
                min++;
                max--;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}