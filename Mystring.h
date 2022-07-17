#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);
    
    friend Mystring operator*(const Mystring &lhs, int n);
    friend Mystring &operator*=(Mystring &lhs, int n);
    
    friend Mystring &operator++(Mystring &obj);
    friend Mystring operator++(Mystring &obj, int);
    
private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring(Mystring &&source);
    ~Mystring();                                                      // Destructor
    
    Mystring &operator=(const Mystring &rhs);       // Copy assignment
    Mystring &operator=(Mystring &&rhs);            // Move assingment
    
    void display() const;

    int get_length() const;                                       // getters
    const char *get_str() const;
    char set_str(const char *s);
};

#endif // MYSTRING_H
