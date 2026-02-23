//https://leetcode.com/problems/remove-duplicates-from-sorted-list?envType=problem-list-v2&envId=linked-list

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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* temp = head;
        ListNode* prev = head;
        if (head->next != NULL) {
            head = head->next;
        }

        while (head != NULL) {
            if (head->val == prev->val) {
                ListNode* temp1 = head;
                prev->next = head->next;
                head = head->next;
               
                delete temp1;
            }
            else{
                head = head->next;
                prev = prev->next;
            }
            //prev = prev->next;
        }
        return temp;
    }
};