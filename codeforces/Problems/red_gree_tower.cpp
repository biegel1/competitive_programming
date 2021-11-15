#include<bits/stdc++.h>

using namespace std; 

const int maxN = 4*10e5; 

int find_height(int n){
	int sum =0;
	int res; 
	for(int i =1; sum<=maxN;  i++){
		sum = (i*(i+1))/2; 
		if(sum>n){
			res = i-1; 
			break; 
		}
	}
	return res; 
}


void solve(){
	int r, g; 
	cin >> r >> g; 
	int sum; 
	int total_height; 
	if(r==0&& g == 0){
		cout << 0 << endl; 
	}
	else if((r == 0 && g >=1)||(r>=1 && g==0)){
		if(r ==1 || g==1){
			cout << 1 << endl; 
		}
		else{
			cout << 0 << endl; 
		}
	} 
	else{
		sum = r+g; 
		int total_height = find_height(sum); 




	}

}

int main(){
	solve(); 
	return 0; 
}
