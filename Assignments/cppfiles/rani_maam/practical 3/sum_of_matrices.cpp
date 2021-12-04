#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int matrix1[3][3];
    int matrix2[3][3];
    int sum[3][3];
    cout << "Enter the value for the first 3x3 matrix::\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the value for the second 3x3 matrix::\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "The sum of the two matrices is:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}
