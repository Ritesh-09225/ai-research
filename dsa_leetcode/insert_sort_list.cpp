class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {

        ListNode* sorted = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {

            // Save next node before changing curr->next
            ListNode* next_node = curr->next;

            // Find insertion position
            ListNode* prev = nullptr;
            ListNode* temp = sorted;

            while (temp != nullptr && temp->val < curr->val) {
                prev = temp;
                temp = temp->next;
            }

            // Insert at beginning
            if (prev == nullptr) {
                curr->next = sorted;
                sorted = curr;
            }
            // Insert in middle or at end
            else {
                prev->next = curr;
                curr->next = temp;
            }

            curr = next_node;
        }

        return sorted;
    }
};