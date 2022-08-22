class Solution {
public:
    
    string split(string s)
    {
        string w="";   //make empty string for storing a separated word
        int d=0;
        vector<pair<int,string>> vt;    //make vector pair class sotre                                            position and word
         for(auto x:s)
         {
            if(x==' '|| isdigit(x))  
            {
             if(x==' ')
             {
                 w+=" ";  // add space when ending a word.
                 vt.push_back({d,w});
                 w="";
             }
            else  //present digit
             {
                d=x; 
             }
           
           }
           else
           {
            w+=x;   //add a char in word string
           }
       }
        w+=" ";
        vt.push_back({d,w});
 
        // sort vector according to first value(position in sentences)
       sort(vt.begin(),vt.end());
       string ns="";               // make a new empty string
        for(auto x:vt){
            ns=ns+x.second;                //add string value from 
                                          //  the vector
        }
        return ns.substr(0,ns.size()-1);   // return 0 to n-1 size string                                             because nth store a  " "                                                  (space)
}
    string sortSentence(string s) {
        return split(s);
    }
};
