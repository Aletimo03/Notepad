#include <iostream>
#include "Collection.h"
#include "QuantityObserver.h"

Collection NoteImportanti("NoteImportanti");


int main() {


    Nota a("prima nota","txt");
    Nota b("seconda nota","txt");
    Nota c("terza nota","txt");
    Nota d("quarta nota","txt");
    Nota e("quinta nota","txt");
    Nota f("sesta nota","txt");


    Collection FirstNotes("FirstNotes");
    FirstNotes.addNote(a);


   // std::cout << "\n...............................\n" << std::endl ;


    QuantityObserver QUANTITYofFirstnotes(&FirstNotes);
    FirstNotes.addNote(b);
    FirstNotes.addNote(c);

    std::cout << "\n...............................\n" << std::endl ;

    QuantityObserver QUANTITYofNoteImportanti(&NoteImportanti);
    NoteImportanti.addNote(a);
    NoteImportanti.addNote(e);
    NoteImportanti.addNote(c);
}

