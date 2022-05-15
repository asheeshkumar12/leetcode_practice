class MedianFinder {
public:
    priority_queue<int> maxh;
    priority_queue<int,vector<int>,greater<int>> minH;
    MedianFinder() {
        
    }
    
    void addNum(int n) {
         if(maxh.empty() || maxh.top()>=n){
        maxh.push(n);
    }
    else{
        minH.push(n);
    }
    if(maxh.size() > minH.size()+1){
        minH.push(maxh.top());
        maxh.pop();
    }
    else if(maxh.size()<minH.size()){
        maxh.push(minH.top());
        minH.pop();
    }
        
    }
    
    double findMedian() {
        if(maxh.size()==minH.size()){
            return maxh.top()/2.0 + minH.top()/2.0;
        }
        return maxh.top();
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
