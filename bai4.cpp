#include<iostream>
 using namespace std;
 int main(){
    int n,i,a[1000];
    do{
    	cout<<"N = ";cin>>n;
	}while(n<=0);
	for(i=1;i<=n;i++){
	   cout<<"a["<<i<<"] = ";
	   cin>>a[i];
	}
	cout<<"Day A sau khi xoa cac so le: ";
	for(i=1;i<=n;i++){
	   if(a[i]%2==0)
	     cout<<a[i]<<" ";
	}
 return 0;
 }
