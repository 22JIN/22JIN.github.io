#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

	for(int test_case = 1; test_case <= T; ++test_case)
	{
        string flag = "NO";
        string score = "";

        cin >> score;
        
        int round = score.length();
        if(round <= 7)
            flag = "YES";

        else{
            int win = 0;
            int lose = 0;
            for(int i=0; i<round; i++){
                if(score.substr(i,1).compare("o") == 0)
                    win++;
                else 
                    lose++;
            }
            win += 15-round;
            if(win > lose)
                flag = "YES";
        }
        cout << "#" << test_case << " " << flag << endl;
	}
	return 0;
}