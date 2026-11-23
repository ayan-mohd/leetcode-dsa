class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;

        int n = s.size();
        int m = words.size();
        int len = words[0].size();

        unordered_map<string, int> mp;

        for (auto w : words) {
            mp[w]++;
        }
        int total = m * len;
        for (int i = 0; i <= n - total; i++) {
            string temp = s.substr(i, total);

            unordered_map<string, int> check;

            for (int j = 0; j < total; j += len) {
                string word = temp.substr(j, len);
                check[word]++;
            }
            if (check == mp) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};