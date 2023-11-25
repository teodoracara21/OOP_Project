#pragma once

#include <vector>
#include <iostream>

class Members {
private:
    std::vector<char>* charVector;  
    std::vector<int>* numericVector; 
    const int constantField; 
    static int staticField;  

public:
    Members();  
    Members(std::vector<char>* charVec, std::vector<int>* numVec, int constField); 

    ~Members();

    std::vector<char>* getCharVector();
    std::vector<int>* getNumericVector();
    int getConstantField();
    static int getStaticField();

    void setCharVector(std::vector<char>* charVec);
    void setNumericVector(std::vector<int>* numVec);
    void setConstantField(int constField);

    template <typename T>
    void processVector(const std::vector<T>& data);

    template <typename U, typename V>
    U combineValues(U value1, V value2);

    friend std::ostream& operator<<(std::ostream& out, const Members& obj);
    friend std::istream& operator>>(std::istream& in, Members& obj);

    char operator[](int index);
    Members operator+(const Members& other);
    Members& operator++();
    Members operator++(int); 
    explicit operator int() const;  
    bool operator==(const Members& other) const;  
};


