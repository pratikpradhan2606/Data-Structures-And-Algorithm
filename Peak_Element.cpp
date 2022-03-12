/*
Problem Statement: Find Peak Element from Mountain

Approach Binary Search

TC= O(log n)
SC= O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int peak_element(vector<int> v,int start,int end){
	while(start<end){
		int mid=start+(end-start)/2;

		if(v[mid]<v[mid+1]){
			start=mid+1;
		}else
		{
			end=mid;
		}
	}
	return end;
}

int main() {
	vector<int> v={1,2,3,4,3,1};
	int start=0;
	int end=v.size()-1;

	int e1=peak_element(v,start,end);
	cout<<e1<<endl;
	return 0;
}
