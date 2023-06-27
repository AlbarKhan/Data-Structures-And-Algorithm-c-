#include <iostream>
using namespace std;

int factorial(int n){
	int fac=1;
	for(int i=1;i<=n;i++){
		fac=fac*i;
	}
	return fac;

}

int main(){
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;

	cout<<"Factorial of "<<n<<" is:"<<factorial(n)<<endl;
}