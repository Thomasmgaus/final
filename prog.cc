#include<iostream>
#include<string>

using namespace std;

void countLine(char * p);

void countChar(char * c);

int main(int argc, char * argv[]){
	char * a, * b;
	if(argv[1] == NULL){
		 a  = "ohio university";
		 b  = "athens";
		 countChar(a);
		countLine(b);
	}
	else{
		char * file;
		while(file != " "){
			cin >> file;
			cout << "char is" << file << endl;
			countLine(file);
			countChar(file);
		}
	}

}

void countChar(char * pName){
	int i = 0;
	while(pName != "\n"){
		i++;
		pName++;
	}
	cout << "number of chars is" << i <<endl;
}

void countLine(char * pName){
	int i = 0;
	while(pName != NULL){
		if (pName == "\n"){
			i++;
		}
		pName++;
	}
}
