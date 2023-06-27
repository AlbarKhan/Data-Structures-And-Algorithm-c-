//Below Function is to find the Wheather the given number is Even or off

#include <iostream>
using namespace std;

int isEven(int n){
	if(n&1){
		return 0;
	}

	return 1;
}
int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;

	if(isEven(n)){
		cout<<n<<" is Even nmuber"<<endl;
	}
	else{
		cout<<n<<" is Odd number"<<endl;
	}

}
