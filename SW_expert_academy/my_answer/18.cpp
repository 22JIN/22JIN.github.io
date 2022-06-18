#include <iostream>
#include <string.h>
using namespace std;


int main(int argc, char** argv){

    int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int num = 0;
        cin >> num;

        string num_str = to_string(num);
        int len = num_str.length();
        string num_min = num_str;
        string num_max = num_str;

        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                string tmp = num_str;
                if(i==0 && (int)num_str[j]=='0')
                    continue;
                if(j==0 && (int)num_str[i]=='0')
                    continue;

                tmp[i] = num_str[j];
                tmp[j] = num_str[i];
                if(tmp.compare(num_min) < 0)
                    num_min = tmp;
                if(tmp.compare(num_max) > 0)
                    num_max = tmp;

            }
        }
        cout << "#" << test_case << " " << num_min << " " << num_max << endl;
	}
    
	return 0;
}