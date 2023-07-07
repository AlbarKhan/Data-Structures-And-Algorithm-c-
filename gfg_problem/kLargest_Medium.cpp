/*Given an array Arr of N positive integers and an integer K, find K largest elements from the array.  The output elements should be printed in decreasing order.
*/

#include <iostream>
using namsepsace std;

vector<int> kLargest(int arr[],int n,int k){
	vector<int> ans;
	sort(ans,ans+n);

	int i=1;
	while(i<=k){
		ans.push_back(arr[n-i]);
		i++;
	}
	return ans;

}


int main(){
	int k=2;
	int arr[5] = {12, 5, 787, 1, 23};

	cout<<kLargest(arr,5,k);

}