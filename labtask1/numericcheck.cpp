#include<iostream>
using namespace std;

bool check(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9'){
            return true;
        }
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    if(check(s)){
        cout<<"Integer"<<endl;
    }else{
        cout<<"String"<<endl;
    }
    return 0;
}
