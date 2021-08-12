#include <iostream>
using namespace std;
int fibonacci(int number){
    if(number<=1)
        return number;
    return fibonacci(number-1)+fibonacci(number-2);
}
int main() {
    int n;
   cout<<"Enter number to get fibonacci  : ";
   cin>>n;
   cout<<fibonacci(n);
    return 0;
}
