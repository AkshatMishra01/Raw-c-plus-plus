#include <bits/stdc++.h>
using namespace std;

int plusfunc(int x,int y)
{
	return x+y;
}
double plusfunc(double x,double y)
{
	return x+y;
}
int main(){
	
	int sum1 = plusfunc(2,6);
	double sum2 = plusfunc(2.5,8.1);
    cout<<"The first sum is:"<<sum1<<endl;
	cout<<"The second sum is:"<<sum2;
	return 0;
	
}
