#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);


	vector<int> capacity(3);
	vector<int> milk_amount(3);

	for(int i=0;i<3;i++){
		cin>>capacity[i]>>milk_amount[i];
	}

	for(int i=0;i<100;i++){
		int bucket1=i%3;
		int bucket2=(i+1)%3;

		int amount=min(milk_amount[bucket1],capacity[bucket2]-milk_amount[bucket2]);

		milk_amount[bucket1]-=amount;
		milk_amount[bucket2]+=amount;
	
	}
	cout<<milk_amount[0]<<endl;
	cout<<milk_amount[1]<<endl;
	cout<<milk_amount[2]<<endl;


}