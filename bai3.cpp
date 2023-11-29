#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,i,dem=0,S=0;
do{
	cout<<"N = ";cin>>n;
}while(n<=0);
cout<<"Cac uoc so: ";
for(i=n;i>0;i--){
   if(n%i==0){
     cout<<i<<" ";
     S=S+i;
     dem++;
    }
}
cout<<"\nTrung binh cong cac uoc so = "<<1.0*S/dem;
return 0;
}
