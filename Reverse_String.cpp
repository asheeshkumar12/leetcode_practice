class Solution {
public:
  
  // methods: 1  O(nlogn)
    void reverseString(vector<char>& s) {
        
        reverse(s.begin(),s.end());
        
    }
  //method 2: log(n) times
  
    void reverseString(vector<char>& s) {
        
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++,j--;
        }
        
    }
};
