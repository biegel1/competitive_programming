#include<bits/stdc++.h>

using namespace std; 

vector<int> adj[100010]; 
bool direct_child_of_root[100010]; 
int number_of_nodes_in_subtree[100010]; 
int consecutive_cats_from_node[100010]; 
int a[100010]; 
int ans = 0; 

//finds the correct consecutive cats and also the correct number of nodes in a subtree
void dfs(int current_node, int previous_node, int m){
	consecutive_cats_from_node[current_node] = a[current_node]; 
	if(a[current_node]!=0){
		consecutive_cats_from_node[current_node]+=consecutive_cats_from_node[previous_node]; 
	}
	number_of_nodes_in_subtree[current_node] = 1; 
	if(current_node != previous_node){
		for(auto child: adj[current_node]){
			dfs(child, current_node, m); 
			number_of_nodes_in_subtree[current_node] += number_of_nodes_in_subtree[child]; 
		}
	}

}

bool valid[100010]; 
void count_valid_paths(int current_node, int previous_node, int m){
	valid[current_node] =valid[previous_node]; 
	if(consecutive_cats_from_node[current_node] >m){
		valid[current_node] = false; 
	}
	if(current_node!= previous_node){
			for(auto child: adj[current_node]){
				count_valid_paths(child, current_node, m); 
				if(number_of_nodes_in_subtree[child] == 1&&valid[child]){
					ans++; 
				}
			}

	}


}

void solve(){
	int n, m; 
	int x, y;  
	valid[0] = 1; 
	cin >> n >> m; 
	for(int i =1; i<=n; i++){
		cin >> a[i]; 
	}
	vector<pair<int, int>> edges; 
	for(int i =0; i<n-1; i++){
		cin >> x >> y; 
		edges.push_back(make_pair(x, y));
		if(x == 1){
			direct_child_of_root[y] = true; 
		}
		if(y==1){
			direct_child_of_root[x] = true; 
		}
	}

	for(int i =0; i<n-1; i++){
		x = edges[i].first; 
		y = edges[i].second; 
		if(x<y){
			if(direct_child_of_root[y]&&x!=1){
				adj[y].push_back(x); 
			}
			else{
				adj[x].push_back(y); 
			}
		}
		else if(x>y){
			if(direct_child_of_root[x] &&y!=1){
				adj[x].push_back(y); 
			}
			else{
				adj[y].push_back(x); 

			}
		}
	}

	dfs(1, 0, m); 

	count_valid_paths(1, 0, m); 
	cout << ans << endl; 





}

int main(){
	solve(); 
	return 0; 
}
