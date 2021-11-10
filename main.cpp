#include <iostream>
using namespace std;
int main(){                                                     
   int n=0, i=0, a=i, b=1, f=0;
          cin>>n;
 if(n>=2) {
     cout << "1" << endl;
     for (int i = 0; i<=n; i++){
         f = a + b;
     a = b;
     b = f;
     cout << f << endl;
 }
 }else{
     cout<<"errore"<<endl;
 }
 return 0;
}
