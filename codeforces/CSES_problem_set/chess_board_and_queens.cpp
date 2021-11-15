#include<bits/stdc++.h>

using namespace std; 

int row[8] = {0}; 
int ans = 0; 
vector<string> board; 

bool place(int r, int c){
	for(int prev =0; prev<c; prev++){
		//if queen from another column is placed in this row or there is another queen in one of the diagonals return false else true
		if(row[prev] == r || (abs(row[prev]-r) == abs(prev-c))){
			return false; 
		}
	}
	return true; 
}

void backtrack(int c){
	if(c==8){
		ans++; 
		return; 
	}
	for(int r = 0; r< 8; r++){
		if(place(r, c)&& board[r][c] == '.'){
			row[c] = r; 
			backtrack(c+1); 
		}
	}
}

void solve(){
	string s; 
	for(int i =0; i<8; i++){
		cin >> s; 
		board.push_back(s); 
	}
	backtrack(0); 
	cout << ans << endl; 


}

int main(){
	solve(); 
	return 0; 
}
