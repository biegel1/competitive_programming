#include<bits/stdc++.h>


using namespace std; 

vector<vector<int>> g; 
vector<int> type; 
void dfs(int current, int previous){
	bool leaf = false; 
	for(auto child: g[current]){
		if(child == previous){
			continue; 
		}
		else{
			dfs(child, current); 
			if(type[child] == 1){
				leaf = true; 
			}
		}
	}
	if(current!=previous){
		if(!leaf){
			type[current] = 1; 
		}
		else{
			type[current] = 2; 
		}
	}
}

void solve(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >>n; 
		g.assign(n, vector<int>()); 
		type.assign(n, -1); 
		for(int i =0; i<n-1; i++){
			int u, v; 
			cin >> u >>v; 
			u--; 
			v--; 
			g[u].push_back(v); 
			g[v].push_back(u);
		}
		type[0] = 0; 
		dfs(0,0); 
		bool root_leaf = false; 
		for(auto direct_children_of_root: g[0]){
			if(type[direct_children_of_root] ==1){
				root_leaf = true; 
			}
		}
		int k =0; 
		for(int i =0; i<n; i++){
			k+=(type[i] ==2); 
		}
		cout << n-2*k-root_leaf<< endl; 
			
	}
	
	
}

int main(){
	solve(); 
	return 0; 
}
