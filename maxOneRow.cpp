//  given a boolean 2D Array where each row is sorted ? find the row with Maximum no of ones ? 
#include<iostream>
#include<vector>
using namespace std;

// function to find row present with max no of ones 

int maxOneRow(vector <vector <int> > &v)
{

// inatilizing variable to store max no of one and a row with maximum no of ones

int maxOnes = 0;
int maxOneRow = -1;

// loop to find row with maximum no of ones

for(int i = 0 ; i < v.size(); i++)
{
    for(int j = 0 ; j < v.size(); j++)
    {  
        // condition to find row with max no of ones

        if(v[i][j] == 1){
            int OneNums;
            OneNums = v.size() - j;
            if(OneNums > maxOnes){
                maxOnes = OneNums;
                maxOneRow = i;   
            }
            break;
        }
    }

}

return maxOneRow;
}

int main(){
    // integer to take input of no of rows and column in array  

    int n;
    cout << "Enter rows and column of a  matrix " << endl ;
    cin >> n;
    cout << "Enter elements of a matrix " << endl;

    //  declaring 2D vector array of size nxn

    vector <vector <int> > vec(n , vector<int>(n));

    // taking elements fromm user 


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++)
        {
            cin >> vec[i][j] ;
        }
    }

    // cout a function which return in which row maximum no of one is present 

    cout << "Maximum no of one is present in " << maxOneRow(vec)+1 << " row " <<  endl;

    



    return 0;
}