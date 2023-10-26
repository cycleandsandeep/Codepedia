#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> res;
    void possibleCombinations(vector<int>& candidates, int target,vector<int>& temp,int idx){
        if(target == 0){
            res.push_back(temp);
            return;
        }
        if(target < 0 || idx>=candidates.size())
            return;
        temp.push_back(candidates[idx]);
        possibleCombinations(candidates,target-candidates[idx],temp,idx);
        temp.pop_back();
        possibleCombinations(candidates,target,temp,idx+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        possibleCombinations(candidates,target,temp,0);
        return res;
    }
};