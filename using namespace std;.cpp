#include<bits/stdcc++.h>
using namespace std;
const int MAX_CHAR = 100;
bool check(int freq[], int k){
    for(int i=0; i<MAX_CHAR; i++){
        return false;
    }
return true;
}
int perfectSubstring(string s, int k){
    int count=0;
    for(int i=0; s[i]; i++){
        int index= s[j]-'0';
        freq[index]++;

        if(freq[index]>k)
            break;
        else if (freq[index] == k && check(freq,k) == true)
            count++;
    }
}

int main()
{
    string s;
    int k;
    getline(cin ,s);
    cin>>k;
    int result=perfectSubstring(s, k);
}