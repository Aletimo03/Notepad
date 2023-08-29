//
// Created by Alessio Timofte on 29/08/23.
//

#ifndef NOTEPAD_SUBJECT_H
#define NOTEPAD_SUBJECT_H

#include "Observer.h"

class Subject{
public:
    virtual void registerObserver(Observer* observer)=0;
    virtual void unregisterObserver(Observer* observer)=0;
    virtual void notifyObservers()=0;

    virtual ~Subject(){}
};


#endif //NOTEPAD_SUBJECT_H
