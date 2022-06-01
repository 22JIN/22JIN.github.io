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
        int n = 0;
        cin >> n;
        int nums[n][n] = {0,};
        nums[0][0] = 1;

        cout << "#" << test_case << endl;
        cout << nums[0][0] << endl;
        for(int i=1; i<n; i++){
            for(int j=0; j<=i; j++){
                if(j==0 || j==i)
                    nums[i][j] = 1;
                else
                    nums[i][j] = nums[i-1][j-1] + nums[i-1][j] ;
                cout << nums[i][j] << " ";
            }
            cout << endl;
        }
	}
	return 0;
}