#include <iostream>
#include <string.h>

using namespace std;

int main(){
    cout << "Enter the number of elements you want to store";
    int n;
    cin>>n;

    cout << "Enter the elements by spacing beside one another";
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){
//        cout << "the value of i" << i << endl;
//        cout << "the value of arr["<< i << "]" << arr[i]<< endl;
        int minum = i;
        for(int j=i+1; j<n; j++){
//            cout << "the value of j" << j << endl;
//            cout << "the value of arr["<< j << "]" << arr[j] <<endl;
//            cout << endl;
//            cout << "Before Swapping:";
//            cout << "the value of arr["<< i << "]" << arr[i] << "and the value of a["<< j << "]" << arr[j] <<endl;
//            cout << endl;
//            cout << "the value of a[j]" << arr[j] << " < a[i]" << arr[i] << endl;
            if(arr[j] < arr[minum]){
                minum = j;
            }
        }
        int temp;
        temp = arr[i];
        arr[i] = arr[minum];
        arr[minum] = temp;

//        cout << endl;
//        cout << "After Swapping:";
//        cout << "the value of arr["<< i << "]" << arr[i] << "and the value of a["<< minum << "]" << arr[minum] <<endl;
//        cout << endl;
    }

    cout << "the Sorted list is:" ;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
