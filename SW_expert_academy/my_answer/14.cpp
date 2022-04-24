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
        int num = 0;      
        cin >> num;

        char alpha[num];
        int len[num];
        
        for(int i=0; i<num; i++){
            cin >> alpha[i];
            cin >> len[i];
        }

        cout << "#" << test_case;
        int row = 0;
        for(int i=0; i<num; i++){
            for(int j=0; j<len[i]; j++){
                if(row%10==0)
                    cout << endl;
                cout << alpha[i];
                row++;
            }
        }
        cout << endl;
	}
	return 0;
}