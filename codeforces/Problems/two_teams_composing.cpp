#include<bits/stdc++.h>
 
using namespace std; 
 
bool element_exists(vector<int> skills, int x){
	int l = 0; 
	int r = skills.size()-1; 
	if(skills.size() ==0){
		return false; 
	}
	else{
		while(l<=r){
			int middle = (r+l)/2; 
			if(skills[middle] == x){
				return true; 
			}
			else if(skills[middle] <x){
				l = middle+1; 
			}
			else{
				r = middle-1; 
			}
		}
		return false; 
	}
 
 
}
 
void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		vector<int> skills; 
		for(int i =0; i<n; i++){
			int skill; 
			cin >> skill; 
			skills.push_back(skill); 
		}
		set<int> team1; 
		int ans = 1; 
		if(n<=1){
			ans = 0; 
			cout << ans<<"\n"; 
		}
		else{
			unordered_map<int, int> duplicates; 
			int max_number = 0; 
			for(int i =0; i<n;i++){
				team1.insert(skills[i]); 
				duplicates[skills[i]] +=1; 
				if(duplicates[skills[i]] > max_number){
					max_number = duplicates[skills[i]]; 
				}
			}
			int size = team1.size(); 
			ans = (max_number>size)? min(max_number-1, size):min(max_number, size-1); 
			cout << ans << "\n";
		}
 
	}
 
}
 
int main(){
	solve(); 
	return 0;
}
