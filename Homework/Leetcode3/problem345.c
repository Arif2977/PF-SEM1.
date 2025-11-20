char* reverseVowels(char* s) {
    int j=strlen(s)-1;
    int i=0,flag=0;
    char temp;
    while(i<j){
        flag=0;
        if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
            while(i<j && flag==0){
                if (s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' || s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' ){
                    temp=s[i];
                    s[i]=s[j];
                    s[j]=temp;
                    flag=1;
                    j--;
                }
                else{
                    j--;
                }
            }
        }
        i++;
    }
    return s;
}
