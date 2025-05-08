bool sym_sub(string c){
    for(int i=0; i<c.length()/2;i++){
        if(c[i]!=c[c.length()-1-i]){
            return false;
        }
    }
    return true;
}

int main()  {
    // TODO
    string s, c, final;
    getline(cin,s);
    for(int start=0; start<s.length(); start++){
    for(int end=start; end<s.length(); end++){
        string c = s.substr(start, end - start + 1);
        if(sym_sub(c) && (c.length()>final.length())){
            final=c;
        }
    }
        
    }
    cout<<final<<endl;
}
