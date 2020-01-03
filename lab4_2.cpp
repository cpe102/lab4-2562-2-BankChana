#include<iostream>
#include<cmath>
using namespace std;
double findDistance (double u,double a,double t){
  double A=(u*t)+(0.5*a*t*t);
  return A;
}
int main(){
  double u,a,t;
	cout <<"Enter u = ";
	cin>>u ;
  cout <<"\nEnter a = ";
	cin>>a ;
  cout <<"\nEnter t = ";
	cin>>t ;
	cout <<"\ns = " <<findDistance(u,a,t);
	return 0;
}