/*

    Problem: Find words which are greater than given length k

    Examples:

    Input : str = "hello geeks for geeks is computer science portal"
               k = 4
    Output : hello geeks geeks computer science portal

*/

#include<iostream>
#include<string>

using namespace std;

void greaterThanK(string str,int k)
{
    string temp="";

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] != ' ')
        {
            temp = temp + str[i];
        }
        else
        {
            if(temp.size() > k)
            {
                cout<<temp<<" ";
            }
            temp="";
        }
    }

}

int main()
{
    string s;
    getline(cin,s);

    //add space at last
    s=s+" ";

    int k;
    cin>>k;

    greaterThanK(s,k);

    return  0;
}
