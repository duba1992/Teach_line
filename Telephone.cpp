//
//  Telephone.cpp
//  Telephone_book
//
//  Created by Duba on 5/1/17.
//  Copyright © 2017 Duba. All rights reserved.
//

#include "Telephone.hpp"


void Person:: addSubscription(int size){
    a.x = size;
    getline(cin,a.name);
    cout<<"Enter name"<<endl;
    getline(cin,a.name);
    cout<<"Enter telephone number"<<endl;
    getline(cin,a.number);
    cout<< "Enter birthday"<<endl;
    getline(cin,a.birthday);
    l.push_back(a);
    
}
void Person:: allDisplay(int size){
    list<Telephone>::iterator it;
    for (it = l.begin(); it != l.end(); it++){
        a = *it;
        cout <<a.x<<" "<<"Name:"<< a.name << '\t' <<" Telephone: "<< a.number <<" Born: "<<a.birthday<<endl;
    }

}
void Person::personDisplay(int choise, int size){
    list<Telephone>::iterator it = l.begin();
    if (choise > size){
        cout<<"This subscriber does not exist"<<endl;
        return;
    }
  
    advance(it,choise-1);
    a = *it;
    cout <<a.x<<" "<<"Name:"<< a.name << '\t' <<" Telephone: "<< a.number <<" Born: "<<a.birthday<<endl;
}
void ClearScreen()
{
    if (!cur_term)
    {
        int result;
        setupterm( NULL, STDOUT_FILENO, &result );
        if (result <= 0) return;
    }
    
    putp( tigetstr( "clear" ) );
};
