//
//  HomePage.hpp
//  lab1
//
//  Created by Grant Hamilton Cordle on 9/22/15.
//  Copyright © 2015 Grant Hamilton Cordle. All rights reserved.
//
//  Program:        ghc0001_1 (lab1)
//  Name:           Grant Cordle
//  Class:          COMP 2710 Section 002
//  Date:           Sept 27, 2015
//  Email:          ghc0001@auburn.edu
//  Description:    Header for HomePage.cpp

#ifndef HomePage_hpp
#define HomePage_hpp

#include <stdio.h>
#include <stdio.h>
#include "WallPage.hpp"
#include "Message.hpp"

class HomePage {
public:
    HomePage();
    int getDisplayedMessages();
    bool getDisplayMore();
    void shouldDisplayMore(bool userInput);
    
private:
    int messagesDisplayed;
    bool displayMore;
};


#endif /* HomePage_hpp */