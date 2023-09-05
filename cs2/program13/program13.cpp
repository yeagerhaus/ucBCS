#include <iostream>
using namespace std;
 
int main(){
	int data, i;
	double num[100], sum = 0.0, average;
	cout << "Enter total numbers of data: ";
	cin >> data;
	for (i = 0; i<data; i++)
	{
		cout << i + 1 << ". Enter number: ";
		cin >> num[i];
		sum = sum + num[i];
		}
		average = sum / data;
		cout << "Average/Mean = " << average<<endl;
		return 0;
}
