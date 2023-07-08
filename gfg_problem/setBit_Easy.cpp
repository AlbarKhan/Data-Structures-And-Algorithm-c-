/*
Given a positive integer N, print count of set bits in it
*/

#include <iostream>
using namespace std;

int setBits(int n){
	int count;
	while(n!=0){
		int bit=n&1;
		if(bit==1){
			count ++;
		}
		n=n>>1;
	}
	return count;
	
}


int main(){
	int n;
	cin>>n;
	
	cout<<setBits(n);

}