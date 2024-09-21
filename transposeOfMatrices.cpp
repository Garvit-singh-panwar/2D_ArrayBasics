#include <iostream>
using namespace std;
int main(){
int r1 , c1 ;
cout << "Enter no of rows in a matrices" << endl;
cin >> r1 ;
cout << "Enter no of column in a matrices" << endl;
cin >> c1 ;

int A[r1][c1];
cout << "Enter elements of a matrices " << endl ;
for (int i = 0 ; i < r1 ; i++){
for(int j = 0 ; j < c1 ; j++){
    cin >> A[i][j];
}

}

int TOfA[c1][r1];

for(int i = 0 ; i < r1 ; i ++){
    for(int j = 0 ; j < c1 ; j++){
        TOfA[j][i] = A[i][j];
    }
} 
cout << " matrices A is : " << endl;

for(int i = 0; i < r1 ; i++){
    for(int j = 0 ; j < c1 ; j++){
        cout << A[i][j] << " ";
    } 
    cout << endl;
}

cout << " Transpase of matrices A : " << endl;

for(int i = 0 ; i < c1 ; i++){
for(int j = 0 ; j < r1 ; j++){
    cout << TOfA[i][j] << " ";
}
cout << endl;

}


    return 0;
}