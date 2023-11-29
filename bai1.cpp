#include<iostream>
#include<cmath>

using namespace std;
int main(){
	double a;
	cout<<"A = ";
	cin>>a;
	if(a >= 0){
		cout<<"Gia tri can tim = "<<(double)pow(a, 1.0 / 4);
	}
	else if(a < 0){
		cout<<"Gia tri can tim = "<<(double)cbrt(a);
	}
	return 0;
}
