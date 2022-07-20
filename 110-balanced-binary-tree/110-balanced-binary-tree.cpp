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
//     the unbalenced nature of the tree is indicated by -1 and balenced nature is done by anyvalue between 0-height
    int height(TreeNode *root){
// using the normal height function and just make it return -1 if there is a unbalenced binary tree 
        if(root==NULL) return 0;
//         find the left height and right height 
        int lh=height(root->left);
        int rh=height(root->right);
//         if anyone of them is -1 then the corresponding tree is unbalenced
        if(lh==-1||rh==-1) return -1;
        
//         check if the abs difference in the heights if it  is greater than 1 return unbalenced nature 
        if(abs(lh-rh)>1) return -1;
        
        return 1+max(lh,rh);
}
    bool isBalanced(TreeNode* root) {
        
        int h=height(root);
        
        return h!=-1;
        
    }
};