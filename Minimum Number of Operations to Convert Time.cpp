class Solution {
public:
    int convertTime(string current, string correct) {
        string s="";
        int sum1=0,sum2=0,min1=0,min2=0;
        for(int i=0;i<current.size();i++){
            if(s=="" && current[i]==':'){
                s=":";
            }
            else if(current[i]!=':'&& s!=":"){
                 sum1=sum1*10+(current[i]-'0');
                sum2=sum2*10+(correct[i]-'0');
                
            }
            else if(s==":"){
                min1=min1*10+(current[i]-'0');
                min2=min2*10+(correct[i]-'0');
                
            }
        }
        sum1=sum1*60;
        sum2=sum2*60;
        sum1=sum1+min1;
        sum2=sum2+min2;
        sum2=sum2-sum1;
        int time=0;
        int c=0;
        while(sum2!=time){
            if(time+60<=sum2){
                time+=60;
                c++;
            }
            else if(time+15<=sum2){
                time+=15;
                c++;
            }
            else if(time+5<=sum2){
                time+=5;
                c++;
            }
             else if(time+1<=sum2){
                time+=1;
                 c++;
            }
        }
        return c;
        
        
    }
};
