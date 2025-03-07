#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    ofstream myfile;
    myfile.open("output.txt");

    ifstream myReadFile("input.txt");
    
    while(getline(myReadFile, str))
    {
        int n = str.size();

        if(str[0] == '/' && str[1] == '/')
        {
            cout<<"Comment"<<endl;
            myfile<<"Comment"<<endl;
        }

        else if(str[0] == '/' && str[1] == '*')
        {
            if(str[n-2] == '*' && str[n-1] == '/')
            {
                cout<<"Comment"<<endl;
                myfile<<"Comment"<<endl;
            }
            else
            {
                cout<<"Not a comment"<<endl;
                myfile<<"Not a Comment"<<endl;
            }
        }

        else
        {
            cout<<"Not a comment"<<endl;
            myfile<<"Not a Comment"<<endl;
        }
    }

    myfile.close();

}