#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isDigit(char c){
	return (c >= 48 && c <= 57);
}

int sumOfString(string s){


	int first_ascii = -1;
	int last_ascii = -1;

	for(int i=0; i < s.size(); i++){

		int j = s.size() - i - 1;

		int ascii_first = s[i];
		int ascii_last = s[j];

		if(isDigit(ascii_first)){

			if(first_ascii == -1){
				first_ascii = ascii_first;
			}
		}
		if(isDigit(ascii_last)){
			if(last_ascii == -1){
				last_ascii = ascii_last;
			}
		}
		
		if(last_ascii != -1 && first_ascii != -1){
			break;
		}	
			

	}

	if(first_ascii != -1 && last_ascii != -1){
		int first_digit = first_ascii - 48;
		int last_digit = last_ascii - 48;

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
