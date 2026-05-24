class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        int n=s.length();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
            if(s!=t){
                return false;
            }
        
        return true;
    }
};