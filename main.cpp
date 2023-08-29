#include <iostream>
#include "Collection.h"
#include "QuantityObserver.h"

int main() {


    Nota a("prima nota","txt");
    Nota b("seconda nota","txt");
    Nota c("terza nota","txt");
    Nota d("quarta nota","txt");
    Nota e("quinta nota","txt");
    Nota f("sesta nota","txt");


    Collection FirstNotes("FirstNotes");
    FirstNotes.addNote(a);

    QuantityObserver QUANTITYofFirstnotes(&FirstNotes);
    FirstNotes.addNote(b);
    FirstNotes.addNote(c);


    Collection NoteImportanti("NoteImportanti");
    QuantityObserver QUANTITYofNoteImportanti(&NoteImportanti);
    NoteImportanti.addNote(a);
    NoteImportanti.addNote(e);
    NoteImportanti.addNote(c);
}

