//
//  main.cpp
//  Telephone_book
//
//  Created by Duba on 5/1/17.
//  Copyright © 2017 Duba. All rights reserved.
//

#include <iostream>
#include "Telephone.hpp"
#include <ncurses.h>
using namespace std;
#include <unistd.h>
#include <term.h>


int main(int argc, const char * argv[]) {
    setlocale(LC_ALL,"rus");
    bool program = true;
    int choise;
    int size = 1;
    Person obj;
   
    do{
        obj.ClearScreen();
      cout<<"Введите выбор\n1.Новый абонент\n2.Выбрать абонента\n3.Посмотреть всех\n4.Удалить абонента"<<endl;
    do{
    cin>>choise;
    clear();
    }while(choise <1 && choise >5);
      
        switch (choise) {
        case 1:{
            obj.addSubscription(size);
            size++;
            break;
        }
        case 2: {
            cout<<"Enter number of Person"<<endl;
            obj.allDisplay(size);
            cin>>choise;
            obj.personDisplay(choise, size);
            break;
        }
        case 3:{
            obj.allDisplay(size);
            break;
    
        }
        case 4:{
            break;
        }
        default:
            break;
    }
    }while(program);
    
    

}
