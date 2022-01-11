#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	char x;
	do{
	
	int a, b;
	cin>>a>>b;
	cout<<"1.add"<<endl;
	cout<<"2.sub"<<endl;
	cout<<"3.mul"<<endl;
	cout<<"4.div"<<endl;
	cout<<"5.exit"<<endl;
	int choice;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<a+b;
			break;
		case 2:
			cout<<a-b;
			break;
		case 3:
			cout<<a*b;
			break;
		case 4:
			cout<<(float)(a)/b;
			break;
		case 5:
		case 6:
			exit(5);
			break;
		default:
			break;
	
			
	}
		cout<<"continue";
		cin>>x;
		system("cls");
}while(x=='y'||x=='Y');
	return 0;
}
