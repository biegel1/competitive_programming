#include<bits/stdc++.h>

using namespace std; 

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
		vector<int> team1; 
		sort(skills.begin(), skills.end()); 
		int ans = 1; 
		if(n<=1){
			ans = 0; 
			cout << ans<<"\n"; 
		}
		else{
			int maxN = 20e5;
			vector<int> duplicates(maxN); 
			int max_number = 0; 
			for(int i =0; i<n;i++){
				if(i ==0){
					team1.push_back(skills[i]); 
				}
				else{
					if(team1[i-1] < skills[i]){
						team1.push_back(skills[i]); 
					}
					duplicates[skills[i]] +=1; 
					if(duplicates[skills[i]] > max_number){
						max_number = duplicates[skills[i]]; 

					}
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
