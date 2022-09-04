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

// ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Solution 1
class Solution {
public:
    map<int,vector<int>> m;
    void traverse(TreeNode* root){
        if(root==NULL) return;
        queue<pair<int,TreeNode*>> q;
        q.push({0,root});
        while(!q.empty()){
            pair<int,TreeNode*> curr=q.front();
            q.pop();
            if(m.count(curr.first)>0){
                vector<int> vv=m[curr.first];
                vv.push_back(curr.second->val);
                m[curr.first]=vv;
            }
            else{
                vector<int> temp;
                temp.push_back(curr.second->val);
                m[curr.first]=temp;
            }
            if(curr.second->left!=NULL){
                q.push({curr.first-1,curr.second->left});
            }
            if(curr.second->right!=NULL){
                q.push({curr.first+1,curr.second->right});
            }
            
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> vvv;
        traverse(root);
        for(auto x:m){
            vector<int> tp=x.second;
            // sort(tp.begin(),tp.end());
            vvv.push_back(tp);
        }
        return vvv;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////Solution 2:


map < int, map < int, multiset < int >>> nodes;
  queue < pair < node * , pair < int, int >>> todo;
  todo.push({
    root,
    {
      0,
      0
    }
  }); //initial vertical and level
  while (!todo.empty()) {
    auto p = todo.front();
    todo.pop();
    node * temp = p.first;

    //x -> vertical , y->level
    int x = p.second.first, y = p.second.second;
    nodes[x][y].insert(temp -> data); //inserting to multiset

    if (temp -> left) {
      todo.push({
        temp -> left,
        {
          x - 1,
          y + 1
        }
      });
    }
    if (temp -> right) {
      todo.push({
        temp -> right,
        {
          x + 1,
          y + 1
        }
      });
    }
  }
  vector < vector < int >> ans;
  for (auto p: nodes) {
    vector < int > col;
    for (auto q: p.second) {
      col.insert(col.end(), q.second.begin(), q.second.end());
    }
    ans.push_back(col);
  }
  return ans;
}
