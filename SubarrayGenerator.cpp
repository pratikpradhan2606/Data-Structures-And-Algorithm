#include<bits/stdc++.h>
using namespace std;
//generating subarray from recursion
void generateSubsequence(vector<int> &v,
	int index,
	vector<int> output,
	vector<vector<int>> &ans
	){
	//base case
	if(index>=v.size()){
		ans.push_back(output);
		return;
	}

	//exclude case exclude current index element and move ahead
	generateSubsequence(v,index+1,output,ans);

	//include current index value inside output vector and then go ahead
	int element=v[index];
	output.push_back(element);
	generateSubsequence(v,index+1,output,ans);

}


//brute force approach for 
void bruteForce(vector<int> v,int n){
	
	int max_sum=INT_MIN;

	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=v[k];
			}
			max_sum=max(max_sum,sum);
		}
	}
	cout<<max_sum<<endl;
}
void printSubarray(vector<vector<int>> ans){
	for(int i=0;i<ans.size();i++){
		for(auto j=ans[i].begin();j!=ans[i].end();j++){
			cout<<*j<<" ";
		}
		cout<<endl;
	}
}
int main(){
	vector<int> v={1,-2,3,-4};
	
	int n=v.size();
	
	//brute force approach
	//bruteForce(v,n);
	

	//optimized approach
	vector<int> output;
	vector<vector<int>> ans;
	generateSubsequence(v,0,output,ans);
	printSubarray(ans);
	return 0;
}