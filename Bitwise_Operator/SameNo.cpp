#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int ans=0;

	while(n!=0){
		ans=(ans*10)+ans;
	}
	cout<<ans<<endl;
}