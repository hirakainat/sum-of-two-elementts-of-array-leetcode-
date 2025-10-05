#include<iostream>
#include<vector>
using namespace std;
class solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
    }
};
int main(){
    int target=6;
    solution obj;
    vector<int> array={3,2,4};
    vector<int> result=obj.twoSum(array,target);
    cout<<result[0]<<" "<<result[1]<<" ";
    return 0;
}