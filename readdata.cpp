#include<bits/stdc++.h>
using namespace std;
int main()
{
	fstream fio;
	string str;
	fio.open("D:/file4.txt",ios::out);
	if(!fio)
	{
		cout<<"exe failed";
	}
	else{
		char x;
		while(fio){
			fio<<"This is a line input";
			fio.close();
		}
		fio.open("D:/file4.txt");
		x = fio.read("D:/file4.txt");
		while(!fio.eof())
		{
		
		cout<<x<<" ";
		}
		fio.close();
	return 0;
	}
}
