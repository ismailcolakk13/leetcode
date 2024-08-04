#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> merged;
        for (int i = 0; i < m; i++)
        {
            merged.push_back(nums1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            merged.push_back(nums2[i]);
        }
        int i, key, j;
        for (int i = 1; i < m + n; i++)
        {
            if(merged.size()<2){
                break;
            }
            key = merged[i];
            j = i - 1;
            while (j >= 0 && merged[j] > key)
            {
                merged[j + 1] = merged[j];
                j = j - 1;
            }
            merged[j + 1] = key;
        }
        nums1 = merged;
    }
};

int main()
{
}