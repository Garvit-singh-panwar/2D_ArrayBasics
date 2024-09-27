// Given a squarre matrix turn it by 90deg in a clockwise direction without using any extra space ?

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate90deg(vector <vector <int> > &vec)
{
    //  loop to make transpose of a matrix 
    for(int i = 0 ; i < vec.size() ; i++)
    {
        for(int j = 0 ; j <= i; j++){
            swap(vec[i][j] , vec[j][i]);
        }
    }

    // loop to make matrix rotate 90 deg

    for(int i = 0 ; i < vec.size() ; i++){
        reverse(vec[i].begin() , vec[i].end());
    }

}    

int main(){
    // taking size of matrix
    int n;
    cout << " Enter no of rows and column of a matrix " << endl;
    cin >> n;

    //  declaring matrix of size nxn
    vector < vector < int > > v(n , vector <int > (n));

    // take elements of a matrix  
    cout << " Enter elements of a matrix " << endl;
    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j < n ; j++){
            cin >> v[i] [j];
        }
    }
     
    //   calling rotate 90 deg function 
    rotate90deg(v);
    cout << endl; 

    cout << "Matrix after rotateing 90deg" << endl;

    // printing 90deg turned matrix 
    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j < n ; j++){
            cout <<  v[i] [j] << " ";
        }
        cout << endl;
    }



    return 0;
}