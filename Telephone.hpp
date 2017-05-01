//
//  Telephone.hpp
//  Telephone_book
//
//  Created by Duba on 5/1/17.
//  Copyright © 2017 Duba. All rights reserved.
//

#ifndef Telephone_hpp
#define Telephone_hpp
#include <unistd.h>
#include <term.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
using namespace std;
class Person{
private:struct Telephone{
    int x;
  
    string name;
    string number;
    string birthday;
    
};
    list<Telephone> l;
    Telephone a;
    bool Condition(Telephone &a, Telephone &b){
    return a.x<b.x;
    }
public:
    void ClearScreen();
    void addSubscription(int size);
    void allDisplay(int size);
    void deleteSubscription(int size);
    void personDisplay(int choise, int size);
};
#endif /* Telephone_hpp */
