// Q. given a matrix 'a' of dimension nxm and 2 cordinate L1,R1 and L2,R2 . return the sum of rectangle from L1,R1 to L2,R2 ?

#include<iostream>
#include<vector>
using namespace std;
int rangeMatrixSum(vector < vector <int > > &matrix , int l1 , int r1 , int l2 , int r2 )
{
    //  initialing sum variable 
int sum = 0;


//  loop to calculate sum of elements between l1 r1  and l1 r2 
for(int i = l1 ; i <= l2 ; i++)
{
    for(int j = r1 ; j <= r2 ; j++) 
    {
        sum += matrix[i][j];
    }

}

// returning sum 
return sum;

}

int main()
{
    int n , m ;

    cout << "Enter row of matrix : " ;
    cin >> n;
    cout << "Enter column of matrix : " ;
    cin >> m;

    vector <vector <int > > matrix(n , vector <int > (m) );

    cout << "Enter elements of a matrix " << endl;
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0 ; j < m ; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Enter range of row from or between 0 to " << n-1 << endl ; 
    cout << "Enter range of column from or between 0 to " << m-1 << endl ; 
    int L1 , R1 , L2 , R2 ;
    cout << "Enter cordinates L1 R1 : ";
    cin >> L1 >> R1;
    cout << "Enter cordinates L2 R2 : ";
    cin >> L2 >> R2 ;
    int result = rangeMatrixSum(matrix , L1 , R1 , L2  ,R2);
    cout << "Sum of elements between cordinates L1,R1 and L2, R2 : " << result ;

    return 0;
}