/*

    cash3.cpp

    Matt Porter
    COP3014
    Summer 2010
    Project 2 Solution

    This is an example solution to the problem here:
    http://ww2.cs.fsu.edu/~porter/cop3014/summer2010/projects/Project%202.htm    

*/

#ifndef CASH3_CPP
#define CASH3_CPP

#include "cash3.h"
#include <cstdlib>
#include <ctime>

//Return the first lottery number.

int Cash3::GetFirstNumber()
{

    return firstNumber_;

}

//Return the second lottery number.

int Cash3::GetSecondNumber()
{

    return secondNumber_;

}

//Return the third lottery number.

int Cash3::GetThirdNumber()
{

    return thirdNumber_;

}

//Randomly draw three lottery numbers from 0 to 9.
//Store each number in its corresponding class variable.

void Cash3::Draw()
{

    firstNumber_ = rand() % 10;
    secondNumber_ = rand() % 10;
    thirdNumber_ = rand() % 10;

}

#endif
