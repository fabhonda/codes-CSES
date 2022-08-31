#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	
	long long n, number;
	vector<long long> numbers;
	cin >> n;
	
	while(--n){
		cin >> number;
		numbers.pb(number);
	}
	
	sort(numbers.begin(),numbers.end());
	if(number==2) cout << 1 << endl;
	else{
		for(long long i=0;i<numbers.size();i++){
			if(numbers[i+1] - numbers[i] > 1){
				cout << numbers[i+1]-1 << endl;
				break;
			}
		}		
	}

}
