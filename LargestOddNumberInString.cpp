class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.length()-1;
        while(i!=-1 && num[i]%2==0) {
          i--;
        }
        if(i==-1){
          return "";
        }
        return num.substr(0,i+1);
    }
};
