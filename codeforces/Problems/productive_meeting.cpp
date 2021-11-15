#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int t; 
	cin >>t; 
	while(t--){
		int n; 
		cin >> n; 
		set<pair<int, int>> s; 
		for(int i =0; i<n; i++){
			int val; 
			cin >>val; 
			s.insert(make_pair(-val, i)); 
		}
		vector<vector<int>> sol; 
		bool possible = true; 
		while(possible){
			auto p1 = *s.begin(); 
			s.erase(s.begin()); 
			auto p2 = *s.begin(); 
			s.erase(s.begin()); 
			if(p1.first >=0  || p2.first >=0){
				possible = false; 
			}
			else{
				sol.push_back({p1.second+1, p2.second+1}); 
				s.insert(make_pair(p1.first+1, p1.second)); 
				s.insert(make_pair(p2.first+1, p2.second)); 
			}
		}
		cout << sol.size()<< endl; 
		for(int i =0; i<sol.size(); i++){
			cout << sol[i][0] << " " << sol[i][1] << endl;  

		}

		

	}

	

}

int main(){
	solve(); 
	return 0; 
}
