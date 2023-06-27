#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
/*	for(int i=0;i<=30;i++){
		ans=pow(2,i);
		if (n== ans){
		 cout<<"True"<<endl;
		}
	}	
*/
	int ans2=1;
	for(int i=0;i<=30;i++){
		if(ans2<INT_MAX/2){
			ans2=ans2*2;
		}
		if(n== ans2){
			cout<<"True";
		}
	}	

}