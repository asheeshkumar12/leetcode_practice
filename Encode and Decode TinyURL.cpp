class Solution {
public:
    
    unordered_map<string,string> mpp;
    int i=1;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string str="http://url"+to_string(i);
        i++;
        mpp[str]=longUrl;
        return str;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mpp[shortUrl];
        
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
