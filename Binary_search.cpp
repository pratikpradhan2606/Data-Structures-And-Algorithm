#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    long long int a;
	    cin>>a;
	    int cnt=0;
	    vector<int> ans;
	    int count=0;
	    if(a>=6){
			for(int i=6;i<=a;){
		       count++;
		       i+=7;
		   }
		}
	  cout<<count<<endl;
	}
	return 0;
}
