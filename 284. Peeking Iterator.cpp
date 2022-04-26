/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
    
    int nextVal; 
    
    bool iterHasNext; 
    
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        
        iterHasNext=Iterator::hasNext();
        
	    if (iterHasNext) nextVal = Iterator::next(); 
        
	}
	
	int peek() {
        
        return nextVal;
        
    }
	
	int next() {
        
	    int currNext = nextVal; 
        
        iterHasNext=Iterator::hasNext(); 
        
	    if (iterHasNext) nextVal = Iterator::next(); 
        
	    return currNext; 
    }
	
	bool hasNext() const {
        
	    return iterHasNext; 
        
	}
    
};
