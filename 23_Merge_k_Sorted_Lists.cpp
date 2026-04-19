/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ele;
        for(int i=0;i<lists.size();i++){
            ListNode* temp=lists[i];
            while(temp){
                ele.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(ele.begin(),ele.end());
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        for(int i=0;i<ele.size();i++){
            ListNode* temp2=new ListNode(ele[i]);
            temp->next=temp2;
            temp=temp->next;

        }
        return head->next;

        
    }
};