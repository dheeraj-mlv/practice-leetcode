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
    int height(TreeNode *root){
        if(root==NULL) return 0;
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        return 1+max(lh,rh);
    }
    
    void diameter(TreeNode *root,int &ans){
        if(root==NULL) return;
    
        int lh=height(root->left);
        int rh=height(root->right); 
        
        ans=max(ans,lh+rh+1);
        
        diameter(root->left,ans);
        diameter(root->right,ans);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        
        diameter(root,ans);
        
        return ans-1;
        
      
    }
};