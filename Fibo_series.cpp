#include <iostream>
using namespace std;
int main() {
    int n;
    int t1=0;
    int t2=1;
    int nxt_number;
    cout<< "The number of terms:";
    cin>>n;
   cout<<"F Series ";
   for(int i=1; i<=n; ++i){
       if(i==1){
           cout<<t1<<"";
           continue;
       }
       if(i==2){
           cout<<t2<<"";
           continue;
       }
       nxt_number= t1+t2;
       t1=t2;
       t2=nxt_number;
       
       cout<<nxt_number<<"";
       
   }
cout<<endl<<"The "<<n<<"th term of the series is:";
if(n==1){
    cout<<t1;
    
}
if(n==2){
    cout<<t2;
}
else{
    cout<<nxt_number;
}
    return 0;
}
