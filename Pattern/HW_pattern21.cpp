#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int row=1;

	while(row<=n){
		int col=1;
		int space=(row-1);
		while(space){
			cout<<" ";
			space=space-1;
			
		}
		while(col<=(n-row+1)){
			cout<<row;
			col=col+1;
		}

		cout<<""<<endl;
		row=row+1;
	}
}