#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("word.in","r",stdin);
	freopen("word.out","w",stdout);

	int n,k;
	cin>>n>>k;
	
	int total_length=0;
	for(int i=0;i<n;i++){
		string word; cin>>word;
		

		total_length+=word.size();
		if(total_length<=k){
			if(i!=0){
				cout<<" ";
			}
			cout<<word;
		}
		else{	
			cout<<"\n"<<word;
			total_length=word.size();
		}
	}



}