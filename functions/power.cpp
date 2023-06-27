#include <iostream>
using namespace std;

int power(int n,int m){
	int pow=1;
	for(int i=1;i<=m;i++){
		pow=pow*n;
	}

	return pow;
}


int main(){
	int n,m;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cin>>m;
	cout<<"Power of "<<n<<" is: "<<power(n,m)<<endl;

}