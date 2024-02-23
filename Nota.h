//
// Created by Alessio Timofte on 29/08/23.
//

#ifndef NOTEPAD_NOTA_H
#define NOTEPAD_NOTA_H

#include "iostream"

using namespace std;

class Nota {
public:
    Nota();

    Nota(const string &title, const string &body);

    string getTitle() const;

    string getBody() const;

    bool isLocked() const;

    void setTitle(const string &title);

    void setBody(const string &body);

    void setLock(const bool &locked);


private:
    string title;
    string body;
    bool locked;
};


#endif //NOTEPAD_NOTA_H
