#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    map<int,int> compAndIndex;
    for(int i=0;i<nums.size();i++){
        int comp=target-nums[i];
        if(compAndIndex.find(comp)!=compAndIndex.end()){
            return {compAndIndex[comp],i};
        }
        compAndIndex[nums[i]]=i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }
    
    return 0;
}
