#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter row for  matrix:";
    cin >> m;
    int arr[m][m];
    cout << "enter elements for array:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || (i + j) % 2 == 0)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout << endl;
    }
}