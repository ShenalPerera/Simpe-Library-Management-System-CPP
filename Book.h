#ifndef LMS_BOOK_H
#define LMS_BOOK_H
#include <ctime>
#include <string>

using namespace std;


class Book {

private:
    string ISBN;
    string title;
    string author;
    string category;
    string ID;
    string reader_name;

    // Start and expiration date are type tm struct in ctime library;
    tm* start_date;
    tm* expiration_date;


public:
    Book(const string &isbn, const string &title, const string &author, const string &category, const string &id);

    Book();

    // setters and getters

    const string &getIsbn() const;

    void setIsbn(const string &isbn);

    const string &getTitle() const;

    void setTitle(const string &title);

    const string &getAuthor() const;

    void setAuthor(const string &author);

    const string &getCategory() const;

    void setCategory(const string &category);

    const string &getId() const;

    void setId(const string &id);

    const string &getReaderName() const;

    void setReaderName(const string &readerName);

    tm *getStartDate() const;

    void setStartDate(tm *startDate);

    tm *getExpirationDate() const;

    void setExpirationDate(tm *expirationDate);


};


#endif //LMS_BOOK_H
