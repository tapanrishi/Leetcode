class Solution {
public:
    static bool customCompare(const std::vector<int>& a, const std::vector<int>& b,int k) {
        return a[k] < b[k];
    }
    vector<vector<int>> sortTheStudents(vector<vector<int>>& arr, int k) {
        vector<vector<int>> ans;
        int n=arr.size();
        std::sort(arr.begin(), arr.end(), [k](const std::vector<int>& a, const std::vector<int>& b) {
        return a[k] < b[k];
        });

        // for (int i = 0; i < arr.size(); i++) {
        //     for (int j = 0; j < arr[0].size(); j++) {
        //         std::cout << arr[i][j] << " ";
        //     }
        //     std::cout << std::endl;
        // }
        reverse(arr.begin(),arr.end());
        return arr;
    }
    
};