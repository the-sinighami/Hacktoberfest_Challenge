#include <bits/stdc++.h>
#include<string>
using namespace std;
void phonekeywords(int number[],vector<char> keypad[],int index,string current)
{
   
    if(index==2)
    {
        cout<<current<<endl;
        return;
    }
    int i=number[index];
    int len = keypad[i].size();
    
    for(int j=0;j<len;j++)
    {
        phonekeywords(number,keypad,index+1,current+keypad[i][j]);
    }
}
int main()
{
    int number[]={4,7};
    vector<char> keypad[] =
    {
        {}, {},        
        { 'a', 'b', 'c' },
        { 'd', 'e', 'f' },
        { 'g', 'h', 'i' },
        { 'j', 'k', 'l' },
        { 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's'},
        { 't', 'u', 'v' },
        { 'w', 'x', 'y', 'z'}
    };
    string current=" ";
    phonekeywords(number,keypad,0,current);
    return 0;
}