#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)
{
	int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;
 
    int index3 = 0;
    int index6 = 0;
    int index9 = 0;
    string str;
    for(int i=1; i<=T; i++){

        str = to_string(i);
        index3 = str.find("3");
        index6 = str.find("6");
        index9 = str.find("9");
        if(index3 != string::npos)
            cout << "-";
        if(index6 != string::npos)
            cout << "-";
        if(index9 != string::npos)
            cout << "-";
        if(index3 == string::npos && index6 == string::npos && index9 == string::npos)
            cout << str << " ";
        else{
            while(1){
                
                index3 = str.find("3", index3+1);
                index6 = str.find("6", index6+1);
                index9 = str.find("9", index9+1);
                if(index3 == string::npos && index6 == string::npos && index9 == string::npos)
                    break;
                else if(index3 != string::npos)
                    cout << "-";
                else if(index6 != string::npos)
                    cout << "-";
                else if(index9 != string::npos)
                    cout << "-";
            }
            cout << " ";
        }
    }
	return 0;
}