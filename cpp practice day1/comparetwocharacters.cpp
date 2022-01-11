#include<iostream>
using namespace std;
int main(){
	char ch1,ch2;
	ch1=cin.get();/////////////////cin me kya hota h ki ye space k baad ki value ko read ni krta aur 
	/////////////////////////////space k baad vali ko bhi read krta iska aur ache se string me smj aaega
	////////////////////////Generally, cin with an extraction operator (>>) terminates when whitespace is found.
	//////////////////////// However, cin.get () reads a string with the whitespace.
	cin.ignore();////////////////////////////////////////////The cin.ignore () function is used which is used to  
	////////////////////////////////////////////////////ignore or clear one or more characters from the input buffer.
	ch2=cin.get();
	cout<<ch1<<ch2<<endl;
	if(ch1>ch2){
		cout<<ch1<<"is greater than"<<ch2;
	}
	else if(ch1<ch2){
		cout<<ch1<<"is lesser than"<<ch2;
	}
	else{
		cout<<"equal";
	}
	return 0;
	
}
