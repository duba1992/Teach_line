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
    ofstream fout("cpp.txt",ios_base::app);
    fout<<a.x<<" Name: "<<a.name<<" number: "<<a.number<<" Birthday: "<<a.birthday<<endl;
    fout.close();

    
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
void Person::deleteSubscription(int choise,int size){
    list<Telephone>::iterator it = l.begin();
    if (choise > size){
        cout<<"This subscriber does not exist"<<endl;
        return;
    }
    
    advance(it,choise-1);
    l.erase(it);
    
    
}
