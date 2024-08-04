#include <iostream>
#include <vector>

using namespace std;
// [0,1,2,2,3,0,4,2]
// [0,1,4,0,3]
// 0 1 2 3 0 4
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = nums.size();
        vector<int>::iterator it= nums.begin();
        while(it!=nums.end())
        {
            if (*it == val)
            {
                nums.erase(it);
                k--;
            }
            else{
                it++;
            }
        }
        return k;
    }
};

int main()
{
    vector<int> test = {0, 1, 2, 2, 3, 0, 4, 2};
    for (int i = 0; i < test.size(); i++)
    {
        cout << test[i] << ",";
    }
    cout << endl;
    Solution s;
    s.removeElement(test, 2);
    // test.erase(test.begin()+2);
    // test.erase(test.begin()+2);
    // test.erase(test.begin()+5);

    for (int i = 0; i < test.size(); i++)
    {
        cout << test[i] << ",";
    }
    cout<<endl;
}