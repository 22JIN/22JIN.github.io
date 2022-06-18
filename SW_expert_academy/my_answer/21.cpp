#include <iostream>
using namespace std;

int main(int argc, char** argv){

    int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

for(int test_case = 1; test_case <= T; ++test_case)
	{
    	unsigned long long today_round;
        int percentD, percentG;
        cin >> today_round >> percentD >> percentG;

        string result = "Possible";

        if(percentG == 100 && percentD != 100)
            result = "Broken";
        
        else if(percentG == 0 && percentD != 0)
            result = "Broken";

        else{
            if(today_round < 100){
                result = "Broken";
                for(int i=1; i<=today_round; i++){
                    unsigned long long win = percentD*i;
                    if( win % 100 == 0 ){
                        result = "Possible";
                        break;
                    }
                }
            }   
        }
        cout << "#" << test_case << " " << result << "\n";
	}   
	return 0;
}