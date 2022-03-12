/*
Problem Statement: Finding first and last occurrence of the given element

Approach 1: Naive approach

TC: O(n)
SC: O(1)

Approach 2 : Binary Search

Time Complexity: O(log n)
Space Complexity: O(1)



*/

#include <bits/stdc++.h>
using namespace std;
int first_Occurence(vector<int> v,int start,int end,int target){
	int position=-1;
	while(start<=end){
		int mid=start+(end-start)/2;

		if(v[mid]==target){
			position=mid;
			end=mid-1;
		}else
		if(v[mid]<target){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return position;
}

int last_Occurence(vector<int> v,int start,int end,int target){
	int position=-1;
	while(start<=end){
		int mid=start+(end-start)/2;

		if(v[mid]==target){
			position=mid;
			start=mid+1;
		}else
		if(v[mid]<target){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	return position;
}

void naive_Approach(vector<int> v,int target){
	int n=v.size();
	int first=-1;
	int last=-1;
	for(int i=0;i<n;i++){
		if(v[i]!=target){
			continue;
		}
		if(first==-1){
			first=i;
		}
		last=i;
	}
	cout<<first<<" "<<last<<endl;
}

int main() {
	vector<int> v={1,2,3,3,4,5};
	int target=3;
	int start=0;
	int end=v.size()-1;

	int e1=first_Occurence(v,start,end,target);
	int e2=last_Occurence(v,start,end,target);

	cout<<e1<<" "<<e2<<endl;
	
	naive_Approach(v,target);
	return 0;
}
