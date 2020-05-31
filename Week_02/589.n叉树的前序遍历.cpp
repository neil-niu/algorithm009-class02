/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N叉树的前序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
#include <stack>


class Solution {
public:
    vector<int> result;
    vector<int> preorder(Node* root) {
        if (!root) {
            return result;
        }

        stack<Node*>sk;
        sk.push(root);
        while(!sk.empty()) {
            Node* tmp = sk.top();
            sk.pop();   
            result.push_back(tmp->val);
            for(int i = tmp->children.size() - 1; i >= 0; i--) {
                sk.push(tmp->children[i]);
            }
        }
        return result;
    }
};
// @lc code=end

