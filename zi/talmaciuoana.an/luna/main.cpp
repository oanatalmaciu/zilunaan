#include<iostream>
using namespace std;
unsigned int n;
unsigned int ziua;
unsigned int luna;
unsigned int anul;
int main()
{
    cout<<"Day=";cin>>ziua;
    cout<<"Month=";cin>>luna;
    cout<<"Year=";cin>>anul;
    cout<<endl<<"(dd/mm/yy)=1 ; (mm/dd/yy)=2";
    int code;
    cin>>code;
    if(code==1){
                 cout<<endl<<code<<endl;
                 ziua=ziua<<27;
                 n=n|ziua;
                 luna=luna<<23;
                 n=n|luna;
                 n=n|anul;
                 cout<<n;}

    else
    if(code==2) {cout<<endl<<code<<endl;
                 anul=anul<<21;
                 n=n|anul;
                 luna=luna<<17;
                 n=n|luna;
                 n=n|ziua;
                 cout<<n;}
    else{cout<<"Sorry,bananas today";}
    return 0;
}
