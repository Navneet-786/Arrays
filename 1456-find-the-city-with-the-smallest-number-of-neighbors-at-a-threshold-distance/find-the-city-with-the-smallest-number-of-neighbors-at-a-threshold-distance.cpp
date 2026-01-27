class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int dt) {
        vector<vector<int>>dist(n,vector<int>(n, 1e8));
        for(int i = 0;i<n;i++){
            dist[i][i] = 0;
        }
        for(auto it:edges){
            int u =  it[0];
            int v = it[1];
            int d = it[2];
            dist[u][v] = d;
            dist[v][u] = d;
        }
        for(int viaNode = 0 ; viaNode < n; viaNode++){
            for(int i = 0;i<n;i++){
                for(int j = 0;j<n;j++){
                   if(dist[i][viaNode]!=1e8  && dist[viaNode][j]!=1e8){
                     dist[i][j] = min(dist[i][j] , dist[i][viaNode] + dist[viaNode][j]);
                   }
                }
            }
        }
        int city = -1, cityCount = INT_MAX;
        for(int i = 0;i<n;i++){
            int tempCity = i, tempCount = 0;
            for(int j = 0;j<n;j++){
                if(dist[i][j]<= dt){
                    tempCount++;
                }
            }
            if(tempCount <= cityCount){
                cityCount = tempCount;
                city = tempCity;
            }
        }
        return city;
    }
};