//file handling in c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
	fstream fio; //object declaration of the fstream class already included in <bits/stdc++.h> 
	string text; // string class object declaration
	
	fio.open("sample.cpp", ios::trunc | ios::out | ios::in); // default way of entering text in a file using the open function
	
	while(fio){ // if file is open, the user is allowed to enter the text
		
		getline(cin, text);
		
		if (text == "-1") // if input by the user is -1, the program terminates
			break;
		
		fio << text<< endl;// to write the line in the file 
	}
	
	fio.seekg(0, ios::beg);// execute a loop till the end of file EOF
	
	while (fio) {
		getline(cin, text);
		cout<<text<<endl;	
	}
	
	fio.close(); // closing the file 
	
	return 0;	
}
