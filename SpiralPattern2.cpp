//  Given an n x m matrix 'a' , return all elements in spiral order 


#include<iostream>
#include<vector>
using namespace std;

// function to print matrix in spiral order
void spiralPrinting(vector <vector <int> > &matrix)
{
    // initialing pointers for spiral pattern 
    int left = 0 ;
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;
    
    // initialing direction of printing
    int direction = 0;


// loop for printing spiral 
    while(left <= right && top <= bottom )
    {

        //  condition for deriction 0

        if(direction == 0 && left <= right && top <= bottom)
        {
            // loop traverse left to right

            for(int col = left ; col <= right ; col++ )
            {
                cout << matrix[top][col] << " ";
            }top++;
           
        }

        //  condition for deriction 0 

        else if(direction == 1)
        {
            // loop traverse top to bottom

            for(int row = top ; row <=bottom ; row++ )
            {
                cout << matrix[row][right] << " ";
            }right--;
            direction++;
        }
        //  condition for deriction 2

        else if(direction == 2 )
        {
            // loop traverse  right to left 

            for(int col = right ; col >= left ; col-- )
            {
                cout << matrix[bottom][col] << " ";
            }bottom--;
            
        }

        // condition for direction 3

        else 
        {
             // loop traverse bottom to top

            for(int row = bottom ; row >= top ; row-- )
            {
                cout << matrix[row][left] << " ";
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