#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char** argv)
{
	int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;
 
	for(int test_case = 1; test_case <= T; ++test_case)
	{
        string str;
        cin >> str;
        int index = 0;
        for(int i=1; i<=10; i++){
            string sub_str = str.substr(0,i); 
            index = str.find(sub_str, 1);
            if(str.substr(index, index) == str.substr(0, index)){
                cout << "#" << test_case << " " << index << endl;
                break;
            }
        }
	}
	return 0;
}
