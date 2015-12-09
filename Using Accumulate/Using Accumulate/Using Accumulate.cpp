// Using Accumulate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" // ommit this header if you're not using Visual studio
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;  // since all the functions will be used from std namespace

int main()
{
	// let's start with an array first!

	int a[10] = {12, 23, 45, 67, 89, 90, 93, 45, 69, 100};
	
	// how do we get the summation of all the elements of the array? 
	// in traditional method, we just loop through the array and get the sum

	int sum = 0;
	for (int i = 0; i < 10; sum += a[i], ++i) {} // and we're done!
	cout << "Summation is : " << sum << endl;

	// how about we do that with a function? nope an user defined function but 
	// a built in function from C++ STL this function :: is accummulate()
	// which is in the <numeric> header file and you're compiler must support at least 
	// C++11 to make this work
	// N.B: if you're using MinGW compiler on windows,
	// better avoid it since it won't work. Use Cygwin GCC or Microsoft C++ compiler (easily from VS13/VS15)

	// accumulate takes 3 arguments. One : iterator to the beginning of the collection, two : end iterator, 
	// three : the initializer value for sum
	// for an array the end is : it's size. for a, the end is a + 10
	sum = accumulate(a, a + 10, 0);
	cout << "Summationn using accumulate : " << sum << endl;

	// accumulate can also be used for STL containers like vector and for complex objects as well
	// given that you provide the necessary condiitions either via lambdas or function pointers

	_gettche(); // ommit this one as well if you're not using Visual Studio
    return 0;
}

