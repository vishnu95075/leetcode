class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        bool vis[n];
        for(int i=0; i<n; i++)
            vis[i] = false;
        dfs(vis,rooms,0);

        for(int i=0; i<rooms.size(); i++){
            if(vis[i]==false) return false;
        }

        return true;
    }
private:
    void dfs(bool vis[],vector<vector<int>>& rooms,int i){
        vis[i]=true;
        for(auto x:rooms[i]){
            if(!vis[x])
                dfs(vis,rooms,x);
        }
    }
};