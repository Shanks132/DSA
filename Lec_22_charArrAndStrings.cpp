#include<iostream>
using namespace std;
int getLength(char name[]){
    int len = 0;
    for(int i=0; name[i]!='\0'; i++){
        len++;
    }
    return len;

}
void strRev(char name[]){
    int start = 0;
    int end = getLength(name)-1;
    while(start<=end){
        swap(name[start],name[end]);
        start ++;
        end --;
    }
}
char toLower(char ch){
    if (ch>='A' && ch<='Z'){
        ch = ch-'A'+'a';
    }
    return ch;
    
}
bool checkPallindrome(char str[]){
    int end = getLength(str)-1;
    int start = 0;
    while(start<=end){
        if(toLower(str[start++])!=toLower(str[end--])){
            return 0;
        }
    }
    return 1;
}
char getMaxOccCharacter(string s){
    int arr[26] = {0}; //creates a array with count of each alphabet

    for(int i = 0; i<s.length();i++){
        char ch = s[i];
        int val = 0 ;
        int alphaCountArray= toLower(ch)-'a';
        arr[alphaCountArray]++;
    }
    int maxi = -1;
    int ans = -0;
    for(int j=0; j<26;j++){
        if(maxi <= arr[j]){
            maxi = arr[j];
            ans = j;
        }
    }
    char finalAns = 'a'+ans;
    return finalAns;
     
}
string removeDuplicates(string s) {
    int i = 0;
    while(i<s.length()-1 && s.length()!=0){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=0;
        }
        
        else{
           i++;
        }
        cout<<s<<"\n";
    }
    return s; 
}

int main(){
    /*
    char name [20];
    cout<<"give name:";
    cin >> name;
    strRev(name);
    cout<<"\nname length: "<< getLength(name);
    cout<<"\nReverse Name:" << name;
    cout<<"\nis pallindrome:"<<checkPallindrome("noon");
      */
    string s;
    cout<<"give str:";
    cin >> s;
    cout<<removeDuplicates(s);
}

/*cin stops after a space so 
 we can use cin.getline.
 int len = strlen(name)
 comparing strings- strcmp(s1,s2)
 */
