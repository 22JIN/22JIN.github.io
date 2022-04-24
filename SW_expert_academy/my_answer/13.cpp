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
        int money = 0;      
        cin >> money;

        int coin[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
        int change[8] = {0,};

        for(int i=0; i<8; i++){
            change[i] = money / coin[i];
            money %= coin[i];
        }
        
        cout << "#" << test_case << endl;
        for(int i=0; i<8; i++)
            cout << change[i] << " ";
        cout << endl;
	}
	return 0;
}