#include <iostream>
#include <string.h>

using namespace std;

int main(){
    //declaration of variables
    int i,r,c;

    // definition of matrix - 2D array.
//    int mat[5][4] = {{  1,   2,   3,4},
//                   {  5,   6,   7, 8},
//                   {  9, 10, 11},
//                   {13, 14, 15, 16},
//                   {17, 18, 19},
//                   };
    // n =5;
    // Dynamic Input:
    cout << "Enter row size:";
    cin >> r;

    cout << "enter column size:";
    cin >> c;

    int** matt = new int*[r];
    for(int k =0; k<r; k++){
        matt[k] = new int[c];
    }

    cout << "Enter your elements:";
    for(int a=0; a<r; a++){
        for(int b=0; b<c; b++){
            cin >> matt[a][b];
        }
    }

    int n = r;
    int d = c;
    //Display:
    for(int i=0; i<d ;i++){ // this for-loops if for columns
        // checking whether even or odd
        if(i%2 == 0){
        for(int j=0; j<n; j++){ // this for-loops if for rows
            cout << matt[j][i] << " ";
        }
      }
        else{
            for(int j=0; j<n; j++){ // this for-loops if for rows
                cout << matt[(n-1)-j][i] << " ";
        }
    }
}
}
