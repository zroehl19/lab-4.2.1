/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zroehl
 *
 * Created on September 22, 2017, 12:40 PM
 */

#include <iostream>
#include <math.h>

using namespace std;

bool is_close(double a, double b, double tolerance)
{
    //Your code here
    if (fabs(a-b) <= tolerance)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void) {

    if (0.3 == 3 * 0.1)
    {
        cout << "The numbers are equal.";
    }
    else
    {
        cout << "The numbers are not equal.";
    }
    cout << endl;
    
    if(is_close(0.3, 3 * 0.1, 0.00000001))
    {
        cout << "The numbers are close enough.";
    }
    else
    {
        cout << "The numbers are not close enough.";
    }
    cout << endl;
    
    if(is_close(3 * 0.1, 0.3, 0.00000001))
    {
        cout << "The numbers are still close enough.";
    }
    else
    {
        cout << "The numbers are not close enough.";
    }
    cout << endl;
    
    if(is_close(3 * 0.1, 0.31, 0.00000001))
    {
        cout << "The numbers are still close enough.";
    }
    else
    {
        cout << "The numbers are not close enough.";
    }
    cout << endl;
    return 0;
}

