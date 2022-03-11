/*Moores Voting algorithm is used to find majority element
first it finds candidate from the given seet of elements
then checks whether it is having majority or not

Time Complexity: O(n)
Space Complexity: O(1)

*/
#include<bits/stdc++.h>
using namespace std;

int findCandidate(vector<int> v,int n){
	int c1=0;
	int num1=-1;
	for(int i=0;i<n;i++){
		if(v[i]==num1){
			c1++;
		}
		else
		if(c1==0){
			num1=v[i];
			c1=1;
		}else{
			c1--;
		}
	}
	return num1;
}
void checkMajority(int candidate,int n,vector<int> v){
	int c1=0;
	for(int i=0;i<n;i++){
		if(v[i]==candidate)c1++;
	}
	if(c1>n/2){
		cout<<"Majority Element is "<<candidate<<endl;
	}else{
		cout<<candidate<<" is not Majority Element"<<endl;
	}

}
int main(){
	vector<int> v={1,1,1,2,3,3,1};
	int n=v.size();

	int candidate=findCandidate(v,n);
	
	checkMajority(candidate,n,v);
	return 0;
}