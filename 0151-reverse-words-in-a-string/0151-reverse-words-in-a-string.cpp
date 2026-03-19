class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string x="";
    for(auto i:s){
        if(isalnum(i)){
            x+=i;
        }else{
            if(!x.empty()){
                words.push_back(x);
                x="";
            }
        }
    }
    if(!x.empty())words.push_back(x);
    reverse(words.begin(),words.end());
    string ans;
    for(int i=0;i<words.size();i++){
        if(i!=0)ans+=" ";
        ans+=words[i];
    }
    return ans;
    }
};