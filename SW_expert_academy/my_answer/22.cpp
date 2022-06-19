#include <iostream>
using namespace std;

int main(int argc, char** argv){

    int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

for(int test_case = 1; test_case <= T; ++test_case)
	{
    	int num = 0;
        cin >> num;

        string result = "No";
        for(int i=1; i<10; i++){
            if(num%i == 0)
                if(num/i <= 9)
                    result = "Yes";
        }

        cout << "#" << test_case << " " << result << "\n";
	}   
	return 0;
}