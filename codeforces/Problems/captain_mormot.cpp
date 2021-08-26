#include<bits/stdc++.h>

using namespace std; 

int squared_euclidean_distance(pair<int, int> p1, pair<int, int>p2){
	return ((p1.first - p2.first)*(p1.first - p2.first)) + ((p1.second- p2.second)*(p1.second - p2.second)); 
}


bool is_square(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3, pair<int, int> p4){
	int d1_2 = squared_euclidean_distance(p1, p2); 
	int d1_3 = squared_euclidean_distance(p1, p3); 
	int d1_4 = squared_euclidean_distance(p1, p4); 

	int d2_1 = d1_2; 
	int d2_3 = squared_euclidean_distance(p2, p3); 
	int d2_4 = squared_euclidean_distance(p2, p4); 

	int d3_1 = d1_3; 
	int d3_2 = d2_3; 
	int d3_4 = squared_euclidean_distance(p3,p4); 

	int d4_1 = d1_4; 
	int d4_2 = d2_4; 
	int d4_3 = d3_4; 


	if (d1_2 == 0||d1_3 == 0|| d1_4 == 0){
		return false; 
	}
	if (d1_2 == d1_3 && 2*d1_2 == d1_4 && 2*d2_4 ==d2_3){
		return true; 
	}

	if (d1_3 == d1_4 && 2 * d1_3 == d1_2 && 2 * d2_3 == d3_4) {
        return true;
    }
    if (d1_2 == d1_4 && 2 * d1_2 == d1_3 && 2 * d2_3 == d2_4) {
        return true;
    }
 
    return false;

}

vector<pair<int, int>> get_points(pair<int, int> point, pair<int, int> center){
	vector<pair<int, int>> points; 
	points.push_back(point); 
	int x1, y1; 
	x1 = center.first+center.second - point.second; 
	y1 = point.first + center.second - center.first; 
	points.push_back(make_pair(x1 ,y1)); 

	int x2, y2; 
	x2 = center.first + center.second - y1; 
	y2 = x1 + center.second - center.first; 
	points.push_back(make_pair(x2 ,y2)); 

	int x3, y3; 
	x3 = center.first + center.second - y2; 
	y3 = x2 + center.second - center.first; 
	points.push_back(make_pair(x3 ,y3)); 
	return points; 

}

void solve(){
	int n; 
	cin >> n; 
	while(n--){
		int counter = 0; 
		int regiment[4][4] = {0}; 
		while(counter<4){
			cin >> regiment[counter][0] >> regiment[counter][1] >> regiment[counter][2] >> regiment[counter][3]; 
			counter++; 
		}
		int ans = 10e5; 
		vector<pair<int, int>> points_r1 = get_points(make_pair(regiment[0][0], regiment[0][1]), make_pair(regiment[0][2], regiment[0][3])); 
		vector<pair<int, int>> points_r2 = get_points(make_pair(regiment[1][0], regiment[1][1]), make_pair(regiment[1][2], regiment[1][3])); 
		vector<pair<int, int>> points_r3 = get_points(make_pair(regiment[2][0], regiment[2][1]), make_pair(regiment[2][2], regiment[2][3])); 
		vector<pair<int, int>> points_r4 = get_points(make_pair(regiment[3][0], regiment[3][1]), make_pair(regiment[3][2], regiment[3][3])); 
		for(int i = 0; i<4; i++){
			for(int j = 0; j<4; j++){
				for(int k = 0; k<4; k++){
					for(int l = 0; l<4; l++){
						bool square = is_square(points_r1[i], points_r2[j], points_r3[k], points_r4[l]); 
						if(square){
							ans = min(ans, i+j+k+l); 
						}
					}
				}
			}
		}
		if(ans ==10e5){
			cout << -1 << endl; 
		}
		else{
			cout << ans << endl; 

		}


	}


}

int main(){
	solve(); 
	return 0; 
}
