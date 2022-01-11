#include<iostream>
#include<cmath>
using namespace std;
int main(){
	//D=b^2-4ac         ax^2+bx+c=0      (-b+(b^2-4ac)^(1/2))/(2*a)        (-b+(b^2-4ac)^(1/2))/(2*a)
	int D,a,b,c;
	float r1,r2;
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	if(D>0){
		cout<<"+roots";
		r1=(-b+pow(D,0.5))/(2*a);
		cout<<r1;
		r2=(-b-pow(D,0.5))/(2*a);
		cout<<r2;
	}
	else if(D<0){
		cout<<"imaginary roots";
	}
	else{
		cout<<"equal roots";
		r1=-b/(2*a);
		cout<<r1;
	}
	return 0;
}
