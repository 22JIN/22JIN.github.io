#include <iostream>
#include <stdio.h>


using namespace std;

int main(int argc, char** argv)
{
	int test_case = 0;
	int T = 0;

	freopen("input.txt", "r", stdin);
	cin >> T;
 
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string raw;
        cin >> raw;
        string year = raw.substr(0,4);
        string month = raw.substr(4,2);
        string days = raw.substr(6,2);
        int day = stoi(days);

        switch(stoi(month)){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if(1<=day && day<=31)
                    cout << "#" << test_case << " " << year << "/" << month << "/" << days << endl;
                else
                    cout << "#" << test_case << " " << -1 << endl;
                break;
            
            case 2:
                if(1<=day && day<=28)
                    cout << "#" << test_case << " " << year << "/" << month << "/" << days << endl;
                else
                    cout << "#" << test_case << " " << -1 << endl;

                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if(1<=day && day<=30)
                    cout << "#" << test_case << " " << year << "/" << month << "/" << days << endl;
                else
                    cout << "#" << test_case << " " << -1 << endl;
                
                break;

            default:
                cout << "#" << test_case << " " << -1 << endl;
        }


	}
	return 0;
    
}