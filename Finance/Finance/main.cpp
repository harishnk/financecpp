//
//  main.cpp
//  Finance
//
//  Created by Harish N Kamath on 1/22/14.
//  Copyright (c) 2014 Harish N Kamath. All rights reserved.
//

#include <iostream>

#include "fone_number.h"

#include <ctime>

int main(int argc, const char * argv[])
{
    std::string foneNumber;
    std:: cin >> foneNumber;
    FoneNumberAllValidCharacters validCharacters(string *foneNumber);
    FoneNumberAllNumeric allNumeric(string *foneNumber);
    FoneNumberFirstPlus firstPlus(string *foneNumber);
    FoneNumberFirstBracket firstBracket(string *foneNumber);
    FoneNumberNumericHyphenated numericHyphenated(string *foneNumber);
    
    validCharacters.add(&allNumeric);
    validCharacters.add(&firstPlus);
    validCharacters.add(&firstBracket);
    validCharacters.add(&numericHyphenated);
    numericHyphenated.setNext(&validCharacters);
    
    for (int i = 1; i < 10; i++)
    {
        validCharacters.validate(i);
        cout << '\n';
    }
}

