/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> result;
    void preOrder(TreeNode* root) {
        if (root != NULL) {
            result.push_back(root->val);
            preOrder(root->left);
            preOrder(root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preOrder(root);
        return result;
    }
};
// @lc code=end

