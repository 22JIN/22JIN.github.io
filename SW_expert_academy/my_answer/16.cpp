#include <iostream>
using namespace std;

int continuity_row(string grid, int index, int grid_size, string letter){
    int result = 0;
    for(int k=index; k<grid_size; k++){
        if(grid.substr(k,1).compare(letter) == 0)
            result++;
        else
            break;
    }
    return result;
}

int main(int argc, char** argv)
{
	int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int grid_size = 0;
        cin >> grid_size;

        string grid[grid_size];
        for(int i=0; i<grid_size; i++)
            cin >> grid[i];

        string flag = "";
        for(int i=0; i<grid_size; i++){
            for(int j=0; j<grid_size; j++){
                if(flag.compare("") != 0)
                    break;

                int index = continuity_row(grid[i], j, grid_size, "#");
                if(index == 0)
                    continue;
                
                int column = i+index;
                if(grid_size < column){
                    flag = "no";
                    break;
                }

                for(int l=i; l<column; l++){
                    if(continuity_row(grid[l], j, j+index, "#") == index){
                        string remain_str = grid[l];
                        if(remain_str.erase(j,index).find("#") != string::npos){
                            flag = "no";
                            break;
                        }
                    }else{
                        flag = "no";
                        break;
                    }
                }

                if(flag.compare("") == 0 && column != grid_size){
                    for(int l=column; l<grid_size; l++){
                        if(grid[l].find("#") != string::npos){
                            flag = "no";
                            break;
                        }
                    }
                }
                if(flag.compare("") == 0)
                    flag = "yes";
                break;
            }
            if(flag.compare("") != 0)
                break;
        }
        if(flag.compare("") == 0)
            flag = "no";
        cout << "#" << test_case << " " << flag << endl;
	}
	return 0;
}