#include<iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	int test_case = 0;
	int T = 0;

	freopen("input.txt", "r", stdin);
	cin >> T;
 
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int nums[2];
        for(int i=0; i<2; i++){
            cin >> nums[i];
        }
        if(nums[0]==nums[1])
            cout << "#" << test_case << " " << "=" << endl;
        else if(nums[0]>nums[1])
            cout << "#" << test_case << " " << ">" << endl;
        else
            cout << "#" << test_case << " " << "<" << endl;


	}
	return 0;
    
}