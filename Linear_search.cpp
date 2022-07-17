#include <iostream>
#include <string.h>

using namespace std;

int linearSearch(int a[], int n, int k){
    for(int i=0;i<n;i++){
        if(k == a[i]){
            return i;
        }
    }
    return -1;
}


int main(){
    cout << "Enter the number of elements you want to store";
    int n;
    cin>>n;

    cout << "Enter the elements by spacing beside one another";
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Enter your number that you want to find from the sequence";
    int key;
    cin >> key;

    cout << "The value is present at the index:" << linearSearch(arr, n, key) << endl;

}
