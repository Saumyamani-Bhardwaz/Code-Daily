class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(0);

        while(!q.empty()) {
            int index = q.front();
            q.pop();
            visited[index] = true;
            for(auto i: rooms[index]) q.push(i);
        }
        for(auto i: visited) {
            if(!i) return false;
        }
        return true;
    }
};
