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
int main() {
	vector<int> v={1,2,3,3,4,5};
	int target=3;
	int start=0;
	int end=v.size()-1;

	int e1=first_Occurence(v,start,end,target);
	int e2=last_Occurence(v,start,end,target);
	cout<<e1<<" "<<e2<<endl;
	return 0;
}
