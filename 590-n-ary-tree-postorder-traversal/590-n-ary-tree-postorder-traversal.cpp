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

class Solution {
public:
    
    void helper(Node* root, vector<int>&result){
         if(!root){
            return;
        }
        
        for(auto i:root->children){
            helper(i,result);
        }
        result.push_back(root->val);
    }
    
    vector<int> postorder(Node* root) {
        vector<int> result;
        helper(root, result);
        return result;
    }
};