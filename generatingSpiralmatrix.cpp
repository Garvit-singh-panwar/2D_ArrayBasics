//  Given a positive integer n , generate as nxn matrix filled with elements from 1 to n2 in spiral order 


#include<iostream>
#include<vector>
using namespace std;

// function to print matrix in spiral order
void generatingSpiral(vector <vector <int> > &matrix)
{
    // initialing pointers for spiral pattern 
    int left = 0 ;
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;
    
    // initialing direction of element 
    int direction = 0;

//  initialing value for spiral matrix element
    int value = 1;

// loop for creating spiral 
    while(left <= right && top <= bottom )
    {

        //  condition for deriction 0

        if(direction == 0 )
        {
            // loop traverse left to right

            for(int col = left ; col <= right ; col++ )
            {
                matrix[top][col] = value++;
            }top++;
           
        }

        //  condition for deriction 0 

        else if(direction == 1)
        {
            // loop traverse top to bottom

            for(int row = top ; row <=bottom ; row++ )
            {
                 matrix[row][right] = value++;
            }right--;
           
        }
        //  condition for deriction 2

        else if(direction == 2 )
        {
            // loop traverse  right to left 

            for(int col = right ; col >= left ; col-- )
            {
                matrix[bottom][col]  = value++ ;
            }bottom--;
            
        }

        // condition for direction 3

        else 
        {
             // loop traverse bottom to top

            for(int row = bottom ; row >= top ; row-- )
            {
                 matrix[row][left] = value++ ;
            }left++;
          
        }

            direction = direction + 1 % 4 ;
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



generatingSpiral(matrix);
cout << " generated spiral matrix is  " << endl ; 
for(int i = 0 ; i < n ; i ++)
{
    for(int j = 0 ; j < m ; j++)
    {
        cout << matrix[i][j] << " ";
    } cout << endl;
  
} 

    return 0;
}