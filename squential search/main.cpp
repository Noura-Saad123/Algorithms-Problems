#include <iostream>
using namespace std;
int sequentialSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++) {
        if (arr[i] == element)
            return i;
    }
    return -1;
}
int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;
    cout<<"Enter element you want to search : ";
    cin>>element;
    int result = sequentialSearch(arr, n, element);
    if(result==-1)
        cout<<"Element not found\n";
    else
        cout<<"Element found at index "<<result;
    return 0;
}
