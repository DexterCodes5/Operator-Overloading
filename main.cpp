#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    cout << boolalpha << endl;
    Mystring a {"dexter"};
    Mystring b {"dexter"};

    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;          // false
    
    b = "george";
    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true
     cout << (a<b) << endl;          // true
    cout << (a>b) << endl;           // false
    
    Mystring s1 {"DEXTER"};
    s1 = -s1;       
    cout << s1 << endl;               // dexter              

    s1 = s1 + "*****";
    cout << s1 << endl;               // dexter*****       
    
    s1 += "-----";                        // dexter*****-----
    cout << s1 << endl;
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;              // 123451234512345
    
    Mystring s3{"abcdef"};  
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
    
    Mystring s = "Dexter";
    ++s;
    cout << s << endl;                  // DEXTER
    
    s = -s; 
    cout << s << endl;                  // dexter
    
    Mystring result;
    result = ++s;                           
    cout << s << endl;                  // DEXTER
    cout << result << endl;           // DEXTER
    
    s = "Dexter";
    s++;
    cout << s << endl;                  // DEXTER
    
    s = -s;
    cout << s << endl;                  // dexter
    result = s++;
    cout << s << endl;                  // DEXTER
    cout << result << endl;           // dexter
    
    
    return 0;
}

