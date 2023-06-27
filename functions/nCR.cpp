#include <iostream>
using namespace std;

int  factorial(int n){
	int fac=1;
	for (int i=1;i<=n;i++){
		fac=fac*i;
	}
	return fac;
}

int nCr(int n ,int r){
	int num=factorial(n);
	int demo=factorial(r)*factorial(n-r);
	int ans =num/demo;

	return ans;
}


int main(){
	int n,r;
	cout<<"Enter the nunmber"<<endl;
	cin>>n;
	cin>> r;
	cout<<factorial(9)<<endl;

	cout<<nCr(n,r)<<endl;
}