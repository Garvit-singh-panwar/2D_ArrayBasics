//  Given a matrix 'a' of dimension n x m and 2 cordinate (l1 ,r1) and (l2,r2) .
// return the sum of the rectangle from (l1 , r1) to (l2,r2).
#include<iostream>
#include<vector>
using namespace std;

int cordinateMatrixsum(vector <vector<int> > &matrix ,  int l1 , int r1 , int l2 , int r2)
{
int sum = 0;
int n = matrix.size();
int m = matrix[0].size();
vector <vector <int> > prefix(n , vector<int> (m));
for(int i = 0; i < n ; i++)
{
    for(int j = 0; j < m; j++)
    {
        sum = sum + matrix[i][j];
        prefix[i][j] = sum ;
    }
    sum = 0;
}

for(int i = l1; i<= l2 ; i++ )
{
    sum += (prefix[i][r2] - prefix[i][r1-1]);
}


return sum;

}

int main()
{


int n,m;
 
cout << "Enter no of rows in a matrix " << endl;
cin >> n;
cout << "Enter no of column in a matrix " << endl;
cin >> m;


vector < vector <int> > matrix(n , vector < int> (m)) ;
cout << "Enter elements of a matrix  " << endl;
for(int i = 0 ; i < n ; i++)
{
    for(int j =0 ; j < m ; j++)
    {
        cin >> matrix[i][j];
    }
}

cout << "cordinates of L1 and L2 is  between 0 and " << n-1  << endl;
cout << "cordinates of R1 and R2 is  between 0 and " << m-1  << endl << endl; 

int L1 , L2 , R1 , R2;
cout << "Enter cordinate L1 R1 " << endl;
cin >> L1 >>R1 ;
cout << "Enter cordinate L2 R2 " << endl;
cin >> L2 >>R2 ;

cout << endl ;
cout << "Sum of elements between cordinate L1 R1 and L2 R2 : " << cordinateMatrixsum(matrix , L1 , R1 , L2 , R2)  << endl;
    return 0;
}