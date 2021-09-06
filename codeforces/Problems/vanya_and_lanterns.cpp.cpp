#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n; 
	long long l; 
	cin >> n >> l; 
	vector<long long> lanterns; 
	for(int i =0; i<n;i++){
		long long a; 
		cin >> a; 
		lanterns.push_back(a); 
	}
	double ans; 
	sort(lanterns.begin(), lanterns.end()); 
	bool lantern_at_start = false; 
	if(lanterns[0] == 0){
		lantern_at_start = true; 
	}
	bool lantern_at_end = false; 
	if(lanterns[lanterns.size()-1] == l){
		lantern_at_end = true; 
	}
	double max_distance = 0; 
	double current; 
	for(int i =0; i<n-1; i++){
		current = lanterns[i+1]-lanterns[i]; 
		if(current > max_distance){
			max_distance = current; 
		}
	}

	max_distance = max_distance/2; 
	double distance1;
	double distance2; 
	distance1 =  lanterns[0];  
	distance2 = l-lanterns[lanterns.size()-1]; 
	if(lantern_at_start && lantern_at_end){
		ans = max_distance; 
	}
	else if(lantern_at_start && lantern_at_end == false){
		ans = max({distance2, max_distance}); 
	}
	else if(lantern_at_end && lantern_at_start == false){
		ans = max({distance1, max_distance}); 
	}
	else if(lantern_at_end == false && lantern_at_start == false){
		ans = max({distance1, distance2, max_distance}); 
	}
	cout.precision(12); 
	cout << fixed << ans << "\n"; 

}

int main(){
	solve(); 
	return 0; 
}
