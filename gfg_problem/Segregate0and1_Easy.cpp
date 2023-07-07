/*Given an array of length N consisting of only 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on the right side of the array.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
using namespace std;

void segregation(int arr[],int n){
	int i=0;
	int j=n-1;

	while(i<j){
		if(arr[i]==0){
			i++;
		}
		else if(arr[j]==1){
			j--;
		}
		else if(arr[i]==1 && arr[j]==0){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}

}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

int main(){
	int N = 5;
	int arr[] = {0, 0, 1, 1, 0};
	
	segregation(arr,5);
	printArray(arr,5);

	return 0;



}