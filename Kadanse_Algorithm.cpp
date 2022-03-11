/*
Kadanse algorithm is used to find maximum subarray sum

Time Complexity= O(n)
Space Complexity = O(1)

*/

#include<bits/stdc++.h>
using namespace std;
int kadanse_Algorithm(vector<int> &v,int n){
	int current_sum=0;int max_sum=INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		current_sum+=v[i];

		if(current_sum>max_sum){
			max_sum = current_sum;
		}
		if(current_sum<0){
			current_sum=0;
		}
	}
	return max_sum;
}
int main(){
	vector<int> v={-1,3,4,-7,4,3};
	int n=v.size();

	int sum = kadanse_Algorithm(v,n);
	cout<<"Maximum Sum "<<sum<<endl;
	return 0;
}