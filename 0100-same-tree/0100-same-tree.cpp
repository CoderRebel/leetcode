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
    vector<int> array(TreeNode* root , vector<int>& arr){
        if(root == nullptr) {arr.push_back(10001) ; return arr;}
        arr.push_back(root->val);
        array(root->left, arr);
        array(root->right, arr);
        return arr;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> arr1;
        vector<int> arr2;
        array(p , arr1);
        array(q , arr2);
        if(arr1.size() != arr2.size()) return false;
        for(int i = 0 ; i < arr1.size();  i++){
            if(arr1[i] != arr2[i]) return false;
        }
    return true;}
};