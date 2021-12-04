#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int matrix[3][3];
    cout << "Enter the value for the 3x3 matrix::\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "The transpose of the matrix is:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}
