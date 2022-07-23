class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int> m1;
        unordered_map<char,int> m2;
        for(int i=0;i<5;i++){
            m1[ranks[i]]++;
            m2[suits[i]]++;
        }
        if(m2.size()==1){
            return "Flush";
        }
        for(auto i: m1){
            if(i.second>=3){
                return "Three of a Kind";
            }
            
            
        }
      for(auto i:m1){
          if(i.second==2){
                return "Pair";
            }
      }
//           if(m1.size()==4){
//                 return "Pair";
//             }
        
        return "High Card";
        
       
    }
};
