#include<iostream>
#include<vector>
using namespace std;

void spiralPrinting(vector <vector <int> > &matrix)
{
    int left = 0 ;
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;
    
    int direction = 0;

    while(left <= right && top <= bottom )
    {
        if(direction == 0 && left <= right && top <= bottom)
        {
            for(int col = left ; col <= right ; col++ )
            {
                cout << matrix[top][col] << " ";
            }top++;
            direction++;
        }

        if(direction == 1 && left <= right && top <= bottom)
        {
            for(int row = top ; row <=bottom ; row++ )
            {
                cout << matrix[row][right] << " ";
            }right--;
            direction++;
        }
        
        if(direction == 2 && left <= right && top <= bottom)
        {
            for(int col = right ; col >= left ; col-- )
            {
                cout << matrix[bottom][col] << " ";
            }bottom--;
            direction++;
        }
        
        if(direction == 3 && left <= right && top <= bottom)
        {
            for(int row = bottom ; row >= top ; row-- )
            {
                cout << matrix[row][left] << " ";
            }left++;
            direction = 0;
        }


    }


return;
}


int main()
{

int n , m ;
// taking no of rows and cloumn from the user 

cout << "Enter no of rows in a matrix : " ;
cin >> n;
cout << "Enter no of column in a matrix : " ;
cin >> m;

vector <vector <int > > matrix(n , vector <int> (m));

cout << " Enter  elements of a matrix " << endl ; 
for(int i = 0 ; i < n ; i ++)
{
    for(int j = 0 ; j < m ; j++)
    {
        cin >> matrix[i][j];
    }
  
} 

spiralPrinting(matrix);


    return 0;
}