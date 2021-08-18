#include<bits/stdc++.h>

using namespace std; 

long long stones_added_to_row(int n){
	return n*(n+1)/2;
}

void solve(){
	long long n; 
	cin >> n; 
	int i = 1;
	int count = 0; 
	while(n>=0){
		n-=stones_added_to_row(i); 
		if(n>=0){
			count++;
		}
		i++;
	}
	cout << count << endl;


}

int main(){
	solve(); 
	return 0; 
}
