// Write a program to display multiplication of two matrices entered by the user
#include <iostream>
using namespace std;
int main()
{

    // here first we have to understand how to multiplly matrices
    // ___   ___    ___   ___    ___                __
    // |  1 2   |   |  5 6  |    | 1x5+2x7  1x6+2x8   |
    // |  3 4   | x |  7 8  |  = | 3x5+4x7  3x6+4x8   |
    // |__   ___|   |__   __|    |__                __|

    // for matrics multiplication we want no of rows in A = no of column in B Always

    // ___  A ___    ____ B ___      ___ C ____
    // | A00 A01 |   | B00 B11 |     | C00 C01 |
    // | A10 A11 | x | B10 B11 |  =  | C10 C11 |
    // |__    ___|   |___   ___|     |__   ____|

    // C00 = A00 x B00 + A01 x B10
    // here in A our row no is fixed we are travers in column
    // and in B our column no is fixed we are traversing in rows

    int r1, c1;
    cout << "Enter no of Row's in matrices A" << endl;
    cin >> r1;
    cout << "Enter no of column's in matrices A" << endl;
    cin >> c1;
    cout << "Enter elements in A " << endl;
    int A[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    int r2, c2;
    cout << "Enter no of Row's in matrices B" << endl;
    cin >> r2;
    cout << "Enter no of column's in matrices B" << endl;
    cin >> c2;
    cout << "Enter elements in B " << endl;
    int B[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    int C[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; i++)
        {
            int value = 0;
            for (int k = 0; k < r2; k++)
            {
                value += (A[i][k] * B[k][j]);
            }
            C[i][j] = value;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}