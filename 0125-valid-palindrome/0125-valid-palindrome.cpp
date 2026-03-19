class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(auto i:s){
            if(isalnum(i)){
                i=tolower(i);
                x+=i;
            }
        }
        cout<<x;
        string rev=x;
        reverse(x.begin(),x.end());
        return rev==x;
    }
};