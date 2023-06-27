#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
	int value;
	while(n!=0){
		int digit=n%10;
		
		ans=(ans*10)+digit;
		if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
			ans=0;
			break;
		}
		n=n/10;
	}
	cout<<ans;
	// cout<<value;
	
}