class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) { 
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int MinDiff = 258617;

        for (int i = 0; i < arr.size() - 1; i++) {
            if (abs(arr[i + 1] - arr[i]) <= MinDiff)
                MinDiff = abs(arr[i + 1] - arr[i]);
        }
        
        for (int i = 0; i < arr.size() - 1; i++) {
        if (abs(arr[i + 1] - arr[i]) == MinDiff)
            ans.push_back({ arr[i], arr[i + 1] });
			
        }
        return ans;
    }
};