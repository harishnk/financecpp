//
//  fone_number.h
//  Finance
//
//  Created by Harish N Kamath on 1/22/14.
//  Copyright (c) 2014 Harish N Kamath. All rights reserved.
//

#ifndef __Finance__fone_number__
#define __Finance__fone_number__

#include <iostream>

#include <vector>

#include <string>

using namespace std;

#endif /* defined(__Finance__fone_number__) */

class BaseFoneNumber
{
    BaseFoneNumber *next;
protected:
    string *_userInput;
public:
    BaseFoneNumber(string *userInput);
    
    void setNext(BaseFoneNumber *chainOfResponsibility);
    
    void add(BaseFoneNumber *chainOfResponsibility);
    
    virtual void validate(int i);
    
};

class FoneNumberAllValidCharacters: public BaseFoneNumber
{
public:
    void validate (int i);
};

class FoneNumberAllNumeric: public BaseFoneNumber
{
public:
    void validate (int i);
};


class FoneNumberFirstPlus: public BaseFoneNumber
{
public:
    void validate (int i);
};


class FoneNumberFirstBracket: public BaseFoneNumber
{
public:
    void validate (int i);
};

class FoneNumberNumericHyphenated: public BaseFoneNumber
{
public:
    void validate (int i);
};

