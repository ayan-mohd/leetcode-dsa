class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> indegree;
        unordered_map<string, int> outdegree;

        for(auto it : paths){
            string u = it[0];
            string v = it[1];
            outdegree[u]++;
            indegree[v]++;
        }
        for(int i=0; i<paths.size(); i++){
            string city = paths[i][1];
            if(outdegree[city] == 0){
                return city;
            }
        }
        return "";
    }
};