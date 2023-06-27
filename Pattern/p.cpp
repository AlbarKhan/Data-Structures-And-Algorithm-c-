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
		
		char start=('A'+n-row);
		while(start>='A'){
			cout<<start;
			start=start-1;
		}
		cout<<""<<endl;
		row=row+1;
   
    }

}