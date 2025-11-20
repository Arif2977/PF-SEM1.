char* firstPalindrome(char** words, int wordsSize) {
    for(int i=0;i<wordsSize;i++){
        int k=0;
        int j=strlen(words[i])-1;
        int flag=1;
        while(k<j){
            if (words[i][k]==words[i][j]){
                k++;
                j--;
            }
            else{
                flag=0;
                break;
            }
        }
        if (flag){
            return words[i];
        }
    }
    return "";
}
