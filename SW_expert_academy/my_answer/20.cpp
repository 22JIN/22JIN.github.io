#include <iostream>
using namespace std;

int main(int argc, char** argv){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        if(B<=C || D<=A){
            cout << "#" << test_case << " 0\n";
            continue;
        } 
        cout << "#" << test_case << " " << min(B,D) - max(A,C) << "\n";
	}   
	return 0;
}