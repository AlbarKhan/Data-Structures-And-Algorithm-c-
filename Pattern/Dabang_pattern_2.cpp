#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int row=1;
	
	while(row<=n){
		int col=1;
		while(col<=(n-row+1)){
			char ch=('A'+col-1);
			cout<<ch;
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
		char ch=('A'+n)-row;
		while(start){
			cout<<ch;
			ch=ch-1;
			start=start-1;
		}
		cout<<""<<endl;
		row=row+1;

	}
	

				

}
