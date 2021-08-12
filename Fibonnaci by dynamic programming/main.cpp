#include <iostream>
using namespace std;
class Fibonacci{
public:
    int fibonacci(int number) {
        int f[number + 2];//case number=0
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i <= number; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }
        return f[number];
    }
};
int main() {
     Fibonacci F;
    int n;
    cout<<"Enter number to get fibonacci  : ";
    cin>>n;
    cout<<F.fibonacci(n);
    return 0;
}
