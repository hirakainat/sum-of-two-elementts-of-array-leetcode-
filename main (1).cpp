#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return { mp[complement], i };
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main(){
    int target=6;
    solution obj;
    vector<int> array={3,2,4};
    vector<int> result=obj.twoSum(array,target);
    if(!result.empty()){
    cout<<result[0]<<" "<<result[1]<<" ";
    }
    else{
        cout<<"pairs not found"<<endl;
    }
    
    return 0;
}