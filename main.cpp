#include <iostream>
#include "Nota.h"
#include "Collection.h"
#include "QuantityObserver.h"
int main() {
    Nota A("nota 1", "txt");
    Nota B("nota 2", "txt");
    Nota C("nota 3", "txt");
    Nota D("nota 4", "txt");


    std::cout << std::endl;
    std::cout << A.getTitle() << std::endl ;

    std::cout << std::endl;
    std:: cout << ".........................." <<  std::endl ;
    std::cout << std::endl;


    Collection collezione("Collezione");

    collezione.addNote(A);

    collezione.addNote(B);

    collezione.addNote(C);


    QuantityObserver Q(&collezione);

    collezione.deleteNote(B);

    std::cout << std::endl;

    std:: cout << ".........................." <<  std::endl ;

    std::cout << std::endl;

    collezione.addNote(D);

}
