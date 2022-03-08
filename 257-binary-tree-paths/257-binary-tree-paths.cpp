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
// we pass the vector of string by reference because we want to change the actual ans vector
// we also pass ds string as value and not by reference because they are immutable but we require adding value to the string during the function help
    
    
    void help(TreeNode * root, vector<string>&ans, string ds){
        //if we reach to the node whose left and right both are null 
        //then it is the end of the path
        if(root->left==NULL and root->right == NULL){
            ans.push_back(ds);
            return;
        }
        
        //if left exist go to left
        if(root->left){
            //preparing string value of the node so that it can be inserted into the node
            string a = "->"+ to_string(root->left->val);
            help(root->left, ans, ds+a);
        }
        
        //if right exist go to the right
        if(root->right){
            //preparing string value of the node so that it can be inserted into the node
            string a = "->"+ to_string(root->right->val);
            // adding the value a to the ds string in the help function so that it does not require taking out
            help(root->right, ans, ds+a);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(root == NULL)return ans;
        string ds = "";
        ds+=to_string(root->val);
        
        help(root, ans, ds);
        
        return ans;
    }
};