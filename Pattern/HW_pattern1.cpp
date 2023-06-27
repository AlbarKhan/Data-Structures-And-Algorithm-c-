#include <iostream>
using namespace std;

int main(){
	int r;
	cout<<"enter the number "<<endl;
	cin>>r;
	int i=1;
	while(i<=r){
		int j=0;
		while(j<r){
			cout<<i;
			j=j+1;
		}
		cout<<""<<endl;
		i=i+1;
	}
	return 0;
}