//bytestuff
#include<iostream>
using namespace std;

int main(){
	string input = "01111110011111100011010101111101"; //32 bit array
	string esc = "01111101", flag = "01111110";
	string check = "";
	string stuff = "01111110";
	for(int i=8; i<24; i++){
		check ="";
		for(int j=i;j<i+8;j++){
			check+=input[j];
		}
		if(check == flag || check == esc){
			stuff +=esc;
			stuff +=check;
			cout << "hello found pattern" << endl;
			i+=7;
		} else {
			stuff +=input[i];
		}
	}
	stuff += flag;
	cout << "Original: " << input << endl;
	cout << "Stuffed: " << stuff << endl;
}
