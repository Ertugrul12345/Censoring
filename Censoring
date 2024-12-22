#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("censor.in","r",stdin);
	freopen("censor.out","w",stdout);

	string s;
	string t;
	cin>>s>>t;
	int positions;

	positions=s.find(t);
	
	while(positions != string::npos){		
		s.erase(positions, t.length());
		positions=s.find(t);
	}
	cout<<s;
}
