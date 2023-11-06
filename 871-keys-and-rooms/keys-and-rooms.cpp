class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n);
        vis[0]=true;
        queue<int> q;
        for(auto &x: rooms[0]){
            if(!vis[x]){
                q.push(x);
                vis[x]=true;
            }
        }
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            for(auto &x: rooms[cur]){
                if(!vis[x]){
                    q.push(x);
                    vis[x]=true;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(!vis[i]) return false;
        }
        return true;
    }
};