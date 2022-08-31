#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0)
#define pb push_back
#define mp make_pair
using namespace std;

int main(){
	
	int n, a, b, customers=1, max=0;
	cin >> n;
	vector<pair<int, int> > times;
	
	while(n--){
		cin >> a >> b;
		times.pb(mp(a,b));
	}
	
	sort(times.begin(),times.end());
	
	for(int i=0;i<times.size()-1;i++){
		if((times[i].second < times[i+1].second && times[i].second > times[i+1].first) || (times[i].first < times[i+1].first && times[i].second > times[i+1].first)) customers++;
		else{
			if(customers > max){
				max = customers; customers = 1;
			}
		}
	}
	if(max==0) max = customers;
	cout << max << endl;
	
	return 0;
}
