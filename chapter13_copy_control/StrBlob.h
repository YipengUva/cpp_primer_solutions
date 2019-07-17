#ifndef STRBLOB_H_INCLUDED
#define STRBLOB_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <memory>

class StrBlob
{
public:
    //size_type
    typedef std::vector<std::string>::size_type size_type;

    //constructors
    StrBlob();
    StrBlob(std::initializer_list<std::string> il);

    // copy constructor
    StrBlob(const StrBlob &strblob)
        : data(std::make_shared<std::vector<std::string>>( *strblob.data ) )
    {
    }

    // assigment operator
    StrBlob& operator=(const StrBlob &strblob){
        data = std::make_shared<std::vector<std::string>>( *strblob.data );

        return *this;
    }

    // get function
    std::shared_ptr<std::vector<std::string>> get() { return data; }

    // size, empty member functions
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    // add and remove the last element
    void push_back(const std::string &s) { data->push_back(s); }
    void pop_back();

    // get access to the front and back element
    std::string & front();
    std::string & back();
    std::string & front() const;
    std::string & back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

// constructors
StrBlob::StrBlob()
    : data(std::make_shared<std::vector<std::string>>())
{
}

StrBlob::StrBlob(std::initializer_list<std::string> il)
    : data(std::make_shared<std::vector<std::string>>(il))
{
}

// check if index i is in the range
void StrBlob::check(size_type i, const std::string &msg) const
{
    if (i >= data->size())
        throw std::out_of_range(msg);
}

// access the front, back elements
std::string & StrBlob::front()
{
    check(0, "front on empty strblob");
    return data->front();
}

std::string & StrBlob::front() const
{
    check(0, "front on empty strblob");
    return data->front();
}

std::string & StrBlob::back()
{
    check(0, "back on empty stringBlob");
    return data->back();
}

std::string & StrBlob::back() const
{
    check(0, "back on empty stringBlob");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty strblob");
    data->pop_back();
}

#endif // STRBLOB_H_INCLUDED
