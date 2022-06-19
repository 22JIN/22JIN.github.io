#include <iostream>
using namespace std;

int main(int argc, char** argv){

    int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

for(int test_case = 1; test_case <= T; ++test_case)
	{
    	string num = "";
        int change = 0;
        cin >> num >> change;

        int len = num.length();
        string max = num;
        for(int k=0; k<change; k++){
            max = "0";
            for(int i=0; i<len; i++){
                for(int j=0; j<len; j++){
                    string tmp = num;
                    tmp[i] = num[j];
                    tmp[j] = num[i];
                    //cout << "i: " << i << ", j: " << j << ", tmp: " << tmp << endl;
                    if(max.compare(tmp) <= 0)
                        max = tmp;
                }
            }
            num = max;
            cout << "max: " << max << endl;
        }

        cout << "#" << test_case << " " << max << "\n";
	}   
	return 0;
}