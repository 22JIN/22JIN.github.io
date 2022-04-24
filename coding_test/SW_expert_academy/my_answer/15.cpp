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
        int case_num = 0;      
        cin >> case_num;

        int student[1000] = {0,};
        int score[101] = {0,};
        
        for(int i=0; i<1000; i++){
            cin >> student[i];
            score[student[i]]++;
        }

        int max = 0;
        int index =0;
        for(int i=0; i<101; i++){
            if(max <= score[i]){
                max = score[i];
                index = i;
            }
        }
        cout << "#" << test_case << " " << index << endl;
	}
	return 0;
}