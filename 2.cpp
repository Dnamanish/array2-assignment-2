#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int m;
    cout << "Enter row for  matrix:";
    cin >> m;  
    vector<vector<int>> arr(m, vector<int>(m));
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
        for (int j = i + 1; j < m; j++)  // transpose
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << endl;
    for (int c = 0; c < m; c++)
    {
        int i = 0;
        int j = m - 1; // c is used for column as its constant but i and j both refer to row here!!
        while (i < j)
        {
            swap(arr[i][c], arr[j][c]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}