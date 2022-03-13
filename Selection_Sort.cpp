/*
Selection Sort works effficent for small set of values

Time Complexity: O(n^2)
Space Complexity: O(1)

*/

#include<bits/stdc++.h>
using namespace std;
void selection_Sort(vector<int> &v,int n){

	for(int i=0;i<n-1;i++){
		int min_index=v[i];
		for(int j=i+1;j<n;j++){
			if(v[j]<v[min_index]){
				min_index=j;
			}
		}
		swap(v[min_index],v[i]);
	}
}
void printArray(vector<int> &arr){

	for(auto a:arr){
		cout<<a<<" ";
	}
}
int main(){

	vector<int> v={2,3,1,4,5,0};
	int n=v.size();
	selection_Sort(v,n);
	printArray(v);
	return 0;
}