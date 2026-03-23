class Solution {
public:
    int minAddToMakeValid(string s) {
        int close=0;
        int open=0;
        for(auto i:s){
           
            if(i==')'){
                close++;
            }else{
                open++;
            }
           
        }
        return abs(open-close);
    }
};