bool isPalindrome(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int i,j;
    for(i=0;s[i]!='\0';i++){
        if(!isalnum(s[i])){
            s.erase(s.begin()+i);
            i--;
        }
    }
    // cout<<s<<endl;
    i=0;
    j=s.length()-1;
    // cout<<i<<" "<<j<<endl;
    while(i <= j){
        if(s[i] != s[j])
            break;
        i++;
        j--;
    }
    if(i >= j)
        return true;
    return false;
}
