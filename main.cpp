#include <iostream>
using namespace std;

int fibonacci(int n) {
    int i=0, p=i, s=1, f=1;
    for(int i=0; i<n; i++) {
        f=p+s; 
        p=s;
        s=f;
    }

return f;

}
int main() {
    int n=0;
    cin>> n;
    while(n>=0) {
        cout<<fibonacci(n)<<endl;
        n=n-1;
    }
}
