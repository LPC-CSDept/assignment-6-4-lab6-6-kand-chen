//		Make a program that find the prime numbers according to two user inputs [begin, end]
//		begin and end must be positive integers.
//			if begin == end, getListprime(int) function is called with default arguments [begin, 100]
//			if begin > end,  getListprime(  ) function is called with default arguments [0, 100]
//			if begin < end, getListprime(int, int) fuction is called with the range from begin to end.
//		example)
//			user input = 20, 20 , call getListprime( 20 ) // the second parameter is default.[20,100]
//			user input = 40, 20 , call getListprime(   ) // the both parameters are default. [0,100]
//			user input = 20, 50,  call getListprime(20, 50) // call the function with actual arguments

#include <iostream>
#include <iomanip>
using namespace std;

//----------
// Make a line for Function Prototype for getListprime Here
//----------

void getListprime(int b, int e);

int main()
{
	int begin, end;
	cout << "Enter your input (two integer for range ) \n";
	cin >> begin >> end;
	if (begin < end)
		getListprime(begin, end);
	else if (begin > end)
		getListprime(2, 100);
	else
		getListprime(begin, 100);
}
void getListprime(int b, int e)
{

	// Complete this function
	int N, flag;
	for(int N = b; N<e; N++){
		flag = 0;
		for (int j=2; j<N;j++)
		{
		if (N % j == 0) {
			flag = 1;
			break;
	
		}
		}
	if (flag == 0 && N != 1 && N != 0){
		cout << N << "\t";
	}
	}	

}
