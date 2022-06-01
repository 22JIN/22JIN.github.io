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
        int student[2] = {0,};       
        for(int i=0; i<2; i++)
           cin >> student[i];

        int score[student[0]][3] = {0,};       
        for(int i=0; i<student[0]; i++)
            for(int j=0; j<3; j++)
                cin >> score[i][j];

        float total[student[0]] = {0,};
        for(int i=0; i<student[0]; i++)
            total[i] = score[i][0]*0.35 + score[i][1]*0.45 + score[i][2]*0.2;

        int percent = 1;
        for(int i=0; i<student[0]; i++){
            if(total[student[1]-1] < total[i])
                percent++;
        }
        
        string grade;
        if(student[0]/10 >= percent)
            grade = "A+";    
        else if(student[0]/10*2 >= percent)
            grade = "A0";    
        else if(student[0]/10*3 >= percent)
            grade = "A-";    
        else if(student[0]/10*4 >= percent)
            grade = "B+";    
        else if(student[0]/10*5 >= percent)
            grade = "B0";    
        else if(student[0]/10*6 >= percent)
            grade = "B-";    
        else if(student[0]/10*7 >= percent)
            grade = "C+";    
        else if(student[0]/10*8 >= percent)
            grade = "C0";    
        else if(student[0]/10*9 >= percent)
            grade = "C-";    
        else if(student[0]/10*10 >= percent)
            grade = "D0";    

        cout << "#" << test_case << " " << grade << endl;
	}
	return 0;
}