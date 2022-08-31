#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, x;
	set<int> array;
	cin >> n;
	
	while(n--){
		cin >> x;
		array.insert(x);
	}
	
	cout << array.size() << endl;

	return 0;
}
