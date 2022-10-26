#include "Book.h"

Book::Book() {}


Book::Book(const string &isbn, const string &title, const string &author, const string &category, const string &id)
        : ISBN(isbn), title(title), author(author), category(category), ID(id),start_date(nullptr),expiration_date(
        nullptr) {}


const string &Book::getIsbn() const {
    return ISBN;
}

void Book::setIsbn(const string &isbn) {
    ISBN = isbn;
}

const string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const string &title) {
    this->title = title;
}

const string &Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const string &author) {
    this->author = author;
}

const string &Book::getCategory() const {
    return category;
}

void Book::setCategory(const string &category) {
    this->category = category;
}

const string &Book::getId() const {
    return ID;
}

void Book::setId(const string &id) {
    ID = id;
}

const string &Book::getReaderName() const {
    return reader_name;
}

void Book::setReaderName(const string &readerName) {
    reader_name = readerName;
}

tm *Book::getStartDate() const {
    return start_date;
}

void Book::setStartDate(tm *startDate) {
    start_date = startDate;
}

tm *Book::getExpirationDate() const {
    return expiration_date;
}

void Book::setExpirationDate(tm *expirationDate) {
    expiration_date = expirationDate;
}
