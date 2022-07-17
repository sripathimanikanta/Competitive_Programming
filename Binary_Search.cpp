#include <iostream>
#include <string.h>

using namespace std;

int BinarySearch(int a[], int n, int k){
    int start, ends, mid, key;
    start = 0;
    ends = n;
    while(start <= ends){
    mid = (start+ends)/2;
    if(a[mid] == k){
        return mid;
    }
    else if(a[mid] < k){
            start = mid + 1;
    }
    else{
        ends = mid - 1;
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

    cout << "The value is present at the index:" << BinarySearch(arr, n, key) << endl;

}
