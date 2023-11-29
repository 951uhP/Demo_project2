#include<iostream>
using namespace std;
int main() {
  int N;
  double A;
  A = 0;
    cout<<"N =  ";
    cin>>N;

  for(int i = 2; i <= N; i++){
    A = A + (float)(i-1)/i;
  }
  cout<<"A = "<< A;
}
