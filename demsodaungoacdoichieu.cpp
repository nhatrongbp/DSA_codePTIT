#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int wrong=0;//so loi sai
        if(s[0]==')'){
            s[0]='(';
            wrong++;
        }
        if(s[s.length()-1]=='('){
            s[s.length()-1]=')';
            wrong++;
        }
        int debt=0;//so luong dau mo ngoac dang cho de duoc dong ngoac
        for(int i=0;i<s.length();i++){
        	//TH1: gap dau ) va ko co dau ( nao dang cho ca
        	//thi coi dau ) do la dau ( va so loi sai++, so dau ( dang cho++
            if(s[i]==')'&&debt==0){
                wrong++;
                debt++;
                continue;
            }
            //TH2: gap dau (
            //thi so dau ( dang cho++
            if(s[i]=='('){
                debt++;
                continue;
            }
            //TH3: gap dau ) va co it nhat 1 dau ( dang cho
            //thi triet tieu nhau, so dau ( dang cho--
            if(s[i]==')'&&debt!=0) debt--;
        }
        //so dau ( dang cho la so chan, nen phai chuyen 1 nua dau mo ngoac sang dau dong ngoac
        //co them debt/2 loi sai nua
        cout << wrong+debt/2 << endl;
    }
    return 0;
}

