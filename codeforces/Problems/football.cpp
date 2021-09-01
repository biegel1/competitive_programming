#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	cin >> n; 
	string team1; 
	string team2; 
	string val; 
	int c1 = 0; 
	int c2 =0; 
	int i =1; 
	while(n--){
		cin >> val; 
		if(i == 1){
			team1 = val; 
			c1++; 
		}
		else{
			if(val == team1){
				c1++; 
			}
			else{
				team2 = val; 
				c2++; 
			}
		}
		i++; 
	}
	cout << ((c1>c2)? team1: team2)<< endl; 	




}

int main(){
	solve(); 
	return 0; 
}
