struct Node{
    Node*dict[26]={0};
    bool flag=false;
    bool contains(char c){
        return dict[c-'a']!=NULL;
    }
    void put(char ch,Node* node){
        dict[ch-'a']=node;
    }
    Node* get(char ch){
        return dict[ch-'a']; 
        }
    void setend(){
        flag=true;
    }
    bool getflag(){
        return flag;
    }
};
class WordDictionary {
    Node* root;
public:
    WordDictionary() {
        root=new Node();
    }
    
    void addWord(string word) {
        Node*node=root;
        for(int i=0;i<word.size();i++){
            if(!node->contains(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->setend();
    }
    
    bool search(string word) {
        
        return searchhelper(word,root);
    }
    bool searchhelper(string word,Node* node){
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(ch=='.'){
                for(auto it:node->dict){
                    if(it && searchhelper(word.substr(i+1),it))return true;
                }
                return false;
            }
            int idx=ch-'a';
            if(node->dict[idx]==NULL)return false;
            node=node->dict[idx];
        }
        return node->getflag();
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */