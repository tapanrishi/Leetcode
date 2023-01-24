class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp1,mp2;
        for(auto it:nums1){
            mp1[it]++;
        }
        for(auto it:nums2){
            mp2[it]++;
        }
        int min=INT_MAX;
        for(auto it:mp1){
            if(mp2.find(it.first)!=mp2.end()){
                if(it.first<min){
                    min=it.first;
                    cout<<it.first;
                }
            }
        }
        if(min==INT_MAX)    return -1;
        return min;
    }
};