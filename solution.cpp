#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int sumOfString(string s){


	int first_pointer = -1;
	int last_pointer = -1;

	for(int i=0; i < s.size(); i++){

		int j = s.size() - i - 1;

		int ascii_first = s[i];
		int ascii_last = s[j];

		if(ascii_first >= 48 && ascii_first <= 57){

			if(first_pointer == -1){
			first_pointer = i;
		}
		}
		if(ascii_last >= 48 && ascii_last <= 57){
			if(last_pointer == -1){
				last_pointer = j;
		}
		}
		
		if(last_pointer != -1 && first_pointer != -1){
			break;
		}	
			

	}

	if(first_pointer != -1 && last_pointer != -1){
		int first_digit = s[first_pointer] - 48;
		int last_digit = s[last_pointer] - 48;

		int total = 10 * first_digit + last_digit;
		return total;
			
	}

	return 0;
	}


int main(){
	ifstream f ("input.txt");

	if(!f.is_open()){
		cerr << "Error opening the file";
		return 1;
	}
	
	string s;
	int sum = 0;


	string output = "";

	while(getline(f,s)){

		sum += sumOfString(s);	
	}
		

	cout << sum << endl;
	

	f.close();

	return 0;

}
