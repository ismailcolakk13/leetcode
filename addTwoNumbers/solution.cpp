#include <iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *result = new ListNode();
        ListNode *iter = result;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            // Check for nullptr
            int d1 = (l1 != nullptr) ? l1->val : 0;
            int d2 = (l2 != nullptr) ? l2->val : 0;
            // Add numbers, also carry
            int sum = d1 + d2 + carry;
            // If sum greater than 9 ,carry and sum updates, if not this makes no difference
            carry = sum / 10;
            sum = sum % 10;
            // Assign to result pointer
            iter->next = new ListNode(sum);
            // Go to next nodes
            iter = iter->next;

            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }
        return result->next;
    }
};

int main()
{
    Solution s;
    ListNode *x = new ListNode(2);
    x->next = new ListNode(4);
    x->next->next = new ListNode(3);
    ListNode *y = new ListNode(5);
    y->next = new ListNode(6);
    y->next->next = new ListNode(4);
    ListNode *r = s.addTwoNumbers(x,y);
    cout<<r->val<<" "<<r->next->val<<" "<<r->next->next->val<<endl;
}