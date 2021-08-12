#include <iostream>
using namespace std;
int binarySearch(int array[],int left,int right,int element){
    while(left<=right){
        int middle=left+(right-1)/2;
        if(array[middle]==element)
            return element;
        if(array[middle]<element)
            return binarySearch(array,middle+1,right,element);
        return binarySearch(array,left,middle-1,element);
    }
    return -1;
}
int main() {
    int arr[5];  int element;
    cout<<"enter element of array : ";
    for(int i=0;i<5;i++)cin>>arr[i];
    cout<<"Enter element u want to search : ";
    cin>>element;
    int result = binarySearch(arr, 0, 4, element);//4=size-1
    if(result == -1)
        cout<<"Element is not present in array";
    else
        cout<<"Element is present at index "<< result;
    return 0;
}
