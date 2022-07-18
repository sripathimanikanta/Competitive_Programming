#include <iostream>

using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1,2,0,7,2};
    int x,y;
    x=0;
    y=0;
    for(int k=0; k<n; k++){
        for(int j=k; j<n;j++){
            cout << "Inside second loop: ";
            cout << "j: " << j << endl;
            cout << endl;
            for(int i=k; i<=j; i++){
                cout << "Inside third loop: ";
                cout << "i: " << i << endl;
                x += arr[i];
                cout << "x: " << x << endl;
                cout << endl;
            }
        }
        y += x;
        cout << "y: " << y << endl;
        x = 0;
}

}
