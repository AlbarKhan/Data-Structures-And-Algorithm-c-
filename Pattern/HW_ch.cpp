#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;
	if(ch>='a' && ch<='z'){
		cout<<"this is a lower case character"<<endl;
	}
	else if(ch>='A' && ch<='Z'){
		cout<<"This is a upper case character"<<endl;
	}
	else if(ch>='0' && ch<='9'){
		cout<< "this is  a numeric literal"<<endl;
	}
	else{
		cout<<"this is worng"<<endl;
	}

	return 0;
}