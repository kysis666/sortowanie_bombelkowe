#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int t[10] = {68,7,24,0,5,8,1,92,9,2};
	int wybor;
   	bool sorted;
	do 
	{
		sorted = true;
		for(int i=0 ; i<9 ; i++)
		{
			if (t[i+1] < t[i])
			{
				int bufor = t[i];
				t[i] = t[i+1];
				t[i+1] = bufor;
				sorted = false;
			}
		}
	}while(!sorted);	
	for (int i=0 ; i<10 ; i++)
	{
		cout << t[i]<<" ";
	}
}
