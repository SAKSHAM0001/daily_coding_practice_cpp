#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	float average;
	int i,sum=0;
	
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<sum<<endl;
	cout<<"avg="<<(float)(sum)/n;
	return 0;
}
