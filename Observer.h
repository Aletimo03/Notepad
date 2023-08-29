//
// Created by Alessio Timofte on 29/08/23.
//

#ifndef NOTEPAD_OBSERVER_H
#define NOTEPAD_OBSERVER_H


class Observer{
public:
    virtual void update()=0;
    virtual ~Observer(){}
};



#endif //NOTEPAD_OBSERVER_H
