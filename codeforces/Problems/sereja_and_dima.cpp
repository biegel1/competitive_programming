#include<bits/stdc++.h>

using namespace std; 

void solve(){
	int n;
	vector<int> cards;
	int val;
	cin >> n; 
	for(int i = 0; i < n; i++){
		cin >> val;
		cards.push_back(val);
	}
	int sereja_points =0 , dima_points = 0; 

	int i = 1;
	int card_count = cards.size();
	while(card_count >0){
		int best_card = max(cards.front(), cards.back());
		if(i%2 ==0){
			dima_points += best_card;
		}
		else{
			sereja_points += best_card;
		}
		cards.erase(remove(cards.begin(),cards.end(), best_card), cards.end());
		card_count--;
		i++;
	}

	cout << sereja_points << " " << dima_points << endl;
}

int main(){
	solve(); 
	return 0;
}
