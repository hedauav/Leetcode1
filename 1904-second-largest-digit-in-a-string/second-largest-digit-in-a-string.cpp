class Solution {
public:
    int secondHighest(string s) {
        int n=s.length();
        vector<int> arr;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                arr.push_back(s[i]- '0');
            }
        }
        int m= arr.size();
        int largest=-1;
        int second_largest=-1;
        for(int i=0;i<m;i++){
            if(arr[i] > largest){
                second_largest=largest;
                largest=arr[i];
            }
            if(arr[i] != largest && arr[i]>second_largest){
                second_largest = arr[i];
            }
        }
        return second_largest;
    }
};