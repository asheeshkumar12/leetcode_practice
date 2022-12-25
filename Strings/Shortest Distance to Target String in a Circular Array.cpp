class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        // store maximum value in answer and find size of words string 
        int ans=101,n=words.size();
         // tak etemporary variable to store distance
        int normal;
        
        for(int i=0;i<n;i++)
        {
            if(words[i]==target){
                normal=abs(i-startIndex);
                int circular=0;
                if(i>startIndex)
                    circular=startIndex+n-i;
                else
                    circular=i+n-startIndex;
                ans=min(circular,min(normal,ans));
            }
        }
      // if ans not change means target not found 
        if(ans==101)
            return -1;
        return ans;
    }
};
