/*
 Created by Shruti Agrawal on 4/2/17.
 Copyright © 2017 Shruti. All rights reserved.
 
 Problem 1
 If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 Find the sum of all the multiples of 3 or 5 below 1000.
 
 RunTime: O(n)
 */

using namespace std;
#include <iostream>
#include <cassert>

/*
 Description: Method to find the sum of multiples of 3 and 5 below 1000
 Input:int, int
 Output: int
 */
int multiplesOf(int x, int y)
{
    int sum = 0;
    for (int i = 0; i < 1000; i++)
    {
        //only add numbers which are multiples of 3 and 5
        if (i % x == 0 || i % y == 0)
        {
            sum += i;
        }
    }
    cout<<"The sum of all multiples of "<<x<< " and "<<y<<" below 1000 is: "<<sum<<endl;
    return sum;
}

//Method to test multiplesOf 3 and 5
void testMultiplesOf()
{
    cout<<endl<<"Entering test:"<<endl;
    assert(multiplesOf(3,5)!= multiplesOf(4,5));
    assert(multiplesOf(6, 10)< multiplesOf(3, 5));
    assert(multiplesOf(1, 2) > multiplesOf(3, 5));
    assert(multiplesOf(3, 5) > 0);
    cout<<"All tests passed for multiplesOf method"<<endl;
}

//Entering main
int main(int argc, const char * argv[]) {
    int a = 3;
    int b = 5;
    multiplesOf(a,b);
    testMultiplesOf();
    cout<<" RunTime: O(n) for multiplesOf method"<<endl;

    return 0;
}