#include<iostream>
using namespace std;

int main(){
	int count[5] = {},student = 0,i = 0; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade = ' ';
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<i+1<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){
			count[0]++;
			student++;
		}else if(grade == 'B'){
			count[1]++;
			student++;
		}else if(grade == 'C'){
			count[2]++;
			student++;
		}else if(grade == 'D'){
			count[3]++;
			student++;
		}else if(grade == 'F'){
			count[4]++;
			student++;
		}else if(grade == '0'){
			break;
		}else{
			cout << "Wrong input. Please input again.\n";
			i--;
		} 
		i++;

	}while(true);

	
	
	cout << "In total "<< student << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] <<", ";		
	//	and so on ... for grade = C, D, F	
	
	return 0;
}

