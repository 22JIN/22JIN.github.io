#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv)
{
	int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;


	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int time[4] = {0,};       
        for(int i=0; i<4; i++)
           cin >> time[i];

        int result[2] = {0,};

        result[1] = time[1]+time[3];
        if(result[1] >= 60){
            result[0] = 1;
            result[1] -= 60; 
        }
        result[0] += time[0] + time[2];
        if(result[0] >= 13)
            result[0] -= 12; 
        
        
        cout << "#" << test_case << " " << result[0] << " " << result[1] << endl;
	}
	return 0;
}