/*
 Created by Shruti Agrawal on 4/2/17.
 Copyright © 2017 Shruti. All rights reserved.
 
 Problem 4
 A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 Find the largest palindrome made from the product of two 3-digit numbers.
 
 RunTime: O(n^2)
 */

using namespace std;
#include <iostream>
#include <cassert>

/*
 Description: Method to check whether given number is a Palindrome
 Input:int
 Output: bool, True if input is palindrome,false otherwise
 */
bool isPalindrome(int num)
{
    int digit = 0,reverse = 0, n = 0;
    n = num;
    
    //reverse the given number
    do
    {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    } while (num != 0);
    
    if(n == reverse)
    {
        //return true if the reverse of the number is the same as the given number
        return true;
    }
    else
    {
        //return false if the reverse of the number is not the same as the given number
        return false;
    }
}

/*
 Description: Method to find the largest palindrome made from the product of two 3-digit numbers
 Input: None
 Output: int,largest palindrome made from the product of two 3-digit numbers
 */
int maxPalindrome()
{
    int maxPalindrome = -1;
    
    for (int i = 100; i< 1000; i++)
    {
        for (int j = 100; j< 1000; j++)
        {
            
            int product = i * j;
            
            if(isPalindrome(product) && product > maxPalindrome)
                maxPalindrome = product;
        }
    }
    
    cout<<"The largest palindrome made from the product of two 3-digit numbers is: "<<maxPalindrome<<endl;
    return maxPalindrome;
}

//Method to test the isPalindrome method
void testIsPalindrome()
{
    cout<<endl<<"Entering test:"<<endl;
    assert(isPalindrome(101) == true);
    assert(isPalindrome(1010) == false);
    assert(isPalindrome(10101) == true);
    assert(isPalindrome(10) == false);
    assert(isPalindrome(1) == true);
    assert(isPalindrome(123404321) == true);
    assert(isPalindrome(906609) == true);
    assert(isPalindrome(-101) == true);
    assert(isPalindrome(-1010) == false);
    assert(isPalindrome(-96969) == true);
    cout<<"All tests passed for isPalindrome method"<<endl;
}

//Enter main
int main(int argc, const char * argv[]) {
    maxPalindrome();
    testIsPalindrome();
    cout<<"RunTime: O(n^2) for isPalindrome method"<<endl;
    return 0;
}
