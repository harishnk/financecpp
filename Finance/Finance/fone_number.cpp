//
//  fone_number.cpp
//  Finance
//
//  Created by Harish N Kamath on 1/22/14.
//  Copyright (c) 2014 Harish N Kamath. All rights reserved.
//

#include "fone_number.h"
///////////////////////
BaseFoneNumber::BaseFoneNumber(string *userInput)
{
    next = 0;
    _userInput = userInput;
}
    
void BaseFoneNumber::setNext(BaseFoneNumber *chainOfResponsibility)
{
    next = chainOfResponsibility;
}
    
void BaseFoneNumber::add(BaseFoneNumber *chainOfResponsibility)
{
    if(next)
        next->add(chainOfResponsibility);
    else
        next = chainOfResponsibility;
}
    
void BaseFoneNumber::validate(int i)
{
    next->validate(i);
}

////////////////////////////

void FoneNumberAllValidCharacters::validate (int i)
{
    if (rand() % 3)
    {
        cout << _userInput;
        cout << "H0 passed" << i << " ";
        BaseFoneNumber::validate(i);
    }
    else
        cout << "H0 handled" << i << " ";
}

///////////////////////////

void FoneNumberAllNumeric::validate (int i)
{
    if (rand() % 3)
    {
        cout << _userInput;
        cout << "H1 passed" << i << " ";
        BaseFoneNumber::validate(i);
    }
    else
        cout << "H1 handled" << i << " ";
}

//////////////////////////////

void FoneNumberFirstPlus::validate (int i)
{
    if (rand() % 3)
    {
        cout << _userInput;
        cout << "H2 passed" << i << " ";
        BaseFoneNumber::validate(i);
    }
    else
        cout << "H2 handled" << i << " ";
}

///////////////////////////////

void FoneNumberFirstBracket::validate (int i)
{
    if (rand() % 3)
    {
        cout << _userInput;
        cout << "H3 passed" << i << " ";
        BaseFoneNumber::validate(i);
    }
        else
        cout << "H3 handled" << i << " ";
}

////////////////////////////////

void FoneNumberNumericHyphenated::validate (int i)
{
    if (rand() % 3)
    {
        cout << _userInput;
        cout << "H4 passed" << i << " ";
        BaseFoneNumber::validate(i);
    }
    else
        cout << "H4 handled" << i << " ";
}