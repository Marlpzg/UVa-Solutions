#include <bits/stdc++.h>

using namespace std;

int dp[30][210];

int main(){
	int N, M, C, K;
	
	cin >> N;
	
	while(N--){
		
		vector<vector<int>> garments;
		cin >> M >> C;
		
		for(int i = 0; i<C; i++){
			
			cin >> K;
			vector<int> Ks(K);
			
			for(int j=0; j<K; j++){
				cin >> Ks[j];
				if(i==0 && M-Ks[j] >= 0){
					dp[0][M-Ks[j]] = 1;
				}
			}
			
			garments.push_back(Ks);
		}
		
		for(int i = 1; i<C; i++){
			for(int j=0; j<=M; j++){
				if(dp[i-1][j]){
					for(int garment : garments[i]){
						if(j-garment >= 0){
							dp[i][j-garment] = 1;
						}
					}
				}
			}
		}
		
		int ans = -1;
		for(int j = 0; j<=M; j++){
			if(dp[C-1][j]){
				ans = M-j;
				break;
			}
		}

		if(ans > 0){
			cout << ans << "\n";
		}else{
			cout << "no solution\n";
		}
		
		memset(dp, 0, sizeof dp);
		
	}
	
	return 0;
}