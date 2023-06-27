#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int row=1;
		
	while(row<=n){
		int col=1;

		while(col<=(n-row+1)){
			cout<<col;
			col=col+1;
		}
		int star=row-1;
		while(star){
			cout<<"*";
			star=star-1;
		}
		int star2=row-1;
		while(star2){
			cout<<"*";
			star2=star2-1;
		}
		int start=(n-row+1);
		while(start){
			cout<<start;
			start=start-1;
		}
		




		cout<<""<<endl;
		row=row+1;
	
	}

}