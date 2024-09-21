#include <iostream>
using namespace std;
int main()
{
    //  arrays are a group of homogenious items which are stored in a memory contiguously

    // arrays are of two types 1. unidimensional and 2. multidimensional

// Multidimensional :- multidimensional array is nothing but array of arrays ;
// Syntax : - datatype arrayName [size1][size2].....[sizeN];

// for 2D Arrays our dimension = 2
// syntac datatype array_name [row] [column];
// if you want to imagin a 2D array imagin it in the forn of table 
//  if i declare int array[4][6]
// so here our rows are 4 and columns are 3 
//  means we are making 4 1D array of size 4

// if i made a 3D array e.g. int array[3][2][4] 
// means we are making 3 2D array of size 2 x 4 means 2 rows and 3 column

//  how to take inputs in 2D Array 

// in 1D array we take inputs through loops 
// e.g.  int arrayName[9];  int arraySize = 9;
//  for(int i = 0 ; i < arraySize ; i++)
// {
//      cin >> arrayName[i];
//
// } it is oneDimensional so we are using only one loop

//  but in 2D array we have 2 dimensions so here we use nested loops one is for rows and one is for column 
// E.g.  int arrayName[4][3]
//      int row = 4 ;  int column = 3;
//    for(int i = 0 ; i < row ; i++)
//          {
//              for(int j = 0 ; j < column ; j++)
//               {
//                  cin >> arrayName[i][j];
//               }
//          }



//  why multidimensional arrays are important ?
//  They are used for representing grids
// faster and simpler access
//  predefine size
// e.g. if i am selling apples and 1 want to store the Data of how many kg's of apple i sell for upto 7 weeks 
// so i can make a 2d array of AppleSales[7][7];
// here i store how many apples i selled every Day of the week

// if i am selling apples 5 hours daily and want to add another thing for ek i want in 1 hour how many apples a selled in 2 hour ... for upto 5 hours daily and also  want this data wit my previous one of seven weeks 
// so i can make a 3D array of AppleSells[7][7][5]
//  this is because in in 1 week we have seven Days , in 1 day i sell apples for 5 hours  



    return 0;
}