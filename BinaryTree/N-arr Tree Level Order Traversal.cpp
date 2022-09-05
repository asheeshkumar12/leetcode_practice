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
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        if(!root) return ans;
        while(!q.empty())
        {
            int size=q.size();
            vector<int> tt;
            for(int i=0;i<size;i++)
            {
                Node* temp=q.front(); 
                q.pop();
                tt.push_back(temp->val);
                for(auto x:temp->children){
                    q.push(x);
                }
                
            }
            ans.push_back(tt);
            tt.clear();
        }
        return ans;
    }
};
