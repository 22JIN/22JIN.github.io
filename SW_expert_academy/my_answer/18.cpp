#include <iostream>
#include <string.h>
using namespace std;


int main(int argc, char** argv){

    int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int num = 0;
        cin >> num;

        string num_str = to_string(num);
        int len = num_str.length();
        string num_min = num_str;
        string num_max = num_str;

        for(int i=0; i<len; i++){
            for(int j=0; j<len; j++){
                string tmp = num_str;
                if(i==0 && (int)num_str[j]=='0')
                    continue;
                if(j==0 && (int)num_str[i]=='0')
                    continue;

                tmp[i] = num_str[j];
                tmp[j] = num_str[i];
                if(tmp.compare(num_min) < 0)
                    num_min = tmp;
                if(tmp.compare(num_max) > 0)
                    num_max = tmp;

            }
        }
        cout << "#" << test_case << " " << num_min << " " << num_max << endl;
	}
    
	return 0;
}

/*
int findMax(string str, int start_index, int end_index){
    int max = 0;
    int index_max = 0;
    for(int i=start_index; i<end_index; i++){
        int num = str[i] - '0';
        if(num >= max){
            max = num;
            index_max = i;
        }
    }
    return index_max;
}

int findMin(string str, int start_index, int end_index){
    int min = 9;
    int index_min = 0;
    for(int i=start_index; i<end_index; i++){
        int num = str[i] - '0';
        if(num <= min){
            min = num;
            index_min = i;
        }
    }
    return index_min;
}



int main(int argc, char** argv)
{
	int T = 0;
	freopen("input.txt", "r", stdin);
	cin >> T;

	for(int test_case = 1; test_case <= T; ++test_case)
	{
        int num = 0;
        cin >> num;

        string num_str = to_string(num);
        int len = num_str.length(); 

        char tmp;
        int index_max = 0;
        string num_max = num_str;
        int chg = 0;
        index_max = findMax(num_max, chg, len);
                
        for(int j=0; j<=index_max; j++){
            if((int)num_max[index_max] > (int)num_max[j]){
                chg=j;
                break;
            }
            chg=index_max;
        }        
        tmp = num_max[chg];
        num_max[chg] = num_max[index_max];
        num_max[index_max] = tmp;

        
        int index_min = 0;
        string num_min = num_str;
        int start = 1;

        //example: 1000
        for(int i=1; i<len; i++){
            if((int)num_min[index_min] != '0'){
                start = 0;
                break;
            }
        }

        
        for(int i=0; i<len; i++){
            if(start == 1)
                break;

            index_min = findMin(num_min, i, len);
           
            //cout << "i: " << i << ", index_min: " << index_min << endl;
            if(index_min == i)
                continue;
            if((int)num_min[index_min] == '0'){
                int index_min2 = index_min;
                int min = 1;
                for(int j=i; j<index_min; j++){
                    if((int)num_min[j] == '0')
                        continue;
                    if((int)num_min[j]-'0' <= min){
                        min = (int)num_min[j] -'0';
                        index_min2 = j;
                    }
                }
                if((int)num_min[index_min2] == '0')
                    start = 1;
                else
                    index_min = index_min2;
                
            }
            
            for(int j=start; j<=index_min; j++){
                //cout << "j: " << j << ", num[index_min]: " << num_min[index_min] << ", num[j]: " << num_min[j]  << endl;
                if((int)num_min[index_min] < (int)num_min[j]){
                    i=j;
                    break;
                }
                //cout << "[for1] i: " << i << ", index_min: " << index_min << endl;
                i=index_min;
                //cout << "[for2] i: " << i << ", index_min: " << index_min << endl;
            }

            if(index_min == i)
                continue;
            
            tmp = num_min[i];
            num_min[i] = num_min[index_min];
            num_min[index_min] = tmp;
            break;
        
        }

        
        
        cout << "#" << test_case << " " << num_min << " " << num_max << endl;
	}
    
	return 0;
}



        for(int i=0; i<len; i++){
            index_min = findMin(num_min, i, len);
            //cout << "i: " << i << ", index_min: " << index_min << endl;
            if((int)num_min[index_min] == '0' && i == 0)
                continue;
            if(index_min <= i)
                continue;
            else{
                int start = 0;
                if((int)num_min[index_min] == '0')
                    start = 1;
                for(int j=start; j<len-1; j++){
                    //cout << "j: " << j << ", num[index_min]: " << num_min[index_min] << ", num[j]: " << num_min[j]  << endl;
                    if((int)num_min[index_min] < (int)num_min[j]){
                        i=j;
                        break;
                    }
                }

                tmp = num_min[i];
                num_min[i] = num_min[index_min];
                num_min[index_min] = tmp;
                break;
            }
        }
        */
