/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    vector<int> postorderTraversal(TreeNode* root) {
        
        stack<TreeNode*> s;
        TreeNode* lastVisited = NULL;
        
        while(root || !s.empty()) {
            if(root != NULL) {
                s.push(root);
                root = root->left;  // Go left
            }
            else {
                TreeNode* peekNode = s.top();
                
                // If right child exists and not visited, go right
                if(peekNode->right != NULL && lastVisited != peekNode->right) {
                    root = peekNode->right;
                }
                else {
                    // Process node (Left + Right done)
                    v.push_back(peekNode->val);
                    lastVisited = peekNode;
                    s.pop();
                }
            }
        }
        return v;
    
    }
};