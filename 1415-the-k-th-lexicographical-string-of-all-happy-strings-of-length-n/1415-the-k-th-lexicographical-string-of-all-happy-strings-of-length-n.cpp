class Solution {
public:
void generatestrings(int n,vector<string>&st,string &curr, vector<char>&chars){
    if(curr.size()==n){
        st.push_back(curr);
        return;
    }
    for(char i:chars){
        if(curr.empty()||curr.back()!=i){
            curr.push_back(i);
             generatestrings(n,st,curr,chars);
             curr.pop_back();
        }
    }
}
    string getHappyString(int n, int k) {
        vector<string>st;
        string s="";
        vector<char>chars={'a','b','c'};
        generatestrings(n,st,s,chars);
        if(k>st.size())return "";
        return st[k-1];
    }
};