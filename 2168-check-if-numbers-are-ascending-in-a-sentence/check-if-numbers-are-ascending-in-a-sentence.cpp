class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = s.length();
        vector<int> ans;

        for(int i = 0; i < n; i++) {

            if(isdigit(s[i])) {
                int num=0;
                while(i<n && isdigit(s[i])){
                    num=num * 10 + (s[i] - '0');
                    i++; 
                }
                ans.push_back(num);
            }
        }

        for(int i = 1; i < ans.size(); i++) {

            if(ans[i - 1] >= ans[i]) {
                return false;
            }
        }

        return true;
    }
};