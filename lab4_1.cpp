#include <iostream>
#include <cmath>
using namespace std;
double funtion(double x){
	double y=(3*x*x*x)+(2*2.7182)+pow(2,((2*x)+1))+pow(((x*x)+1),0.5);
	return y;
}
int main(){
	double a;
	cout <<"Enter x = ";
	cin>>a ;
	cout <<"\nResult y = " <<funtion(a);
	return 0;
}