#include "note.h"
#include <cstring>

void Note::setName(std::string text) {
    text.insert(text.begin(), this->id + 48);
    text.insert(text.begin() + 1, '.');
    text.insert(text.begin() + 2, ' ');
    /*for(int i = 0; i < 3; i++) {
        text.push_back('.');
    }*/
    this->name = text;
}

void Note::setNote(std::string text) {
    this->note = text;
}

void Note::setTime(std::string text) {
    this->time = text;
}

void Note::setDate(QDate date) {
    this->date = date;
}

void Note::setId(int num) {
    this->id = num;
    if(num < 10) {
        this->name.erase(this->name.begin(), this->name.begin() + 3);
        this->name.insert(this->name.begin(), this->id + 48);
        this->name.insert(this->name.begin() + 1, '.');
        this->name.insert(this->name.begin() + 2, ' ');

    }

    else if (num >= 10 && num < 100) {
        this->name.erase(this->name.begin(), this->name.begin() + 4);
        this->name.insert(this->name.begin(), this->id + 48);
        this->name.insert(this->name.begin() + 2, '.');
        this->name.insert(this->name.begin() + 3, ' ');
    }
}
