#include <iostream>
#include <string>
#include <numeric>

using namespace std;

 string gcdOfStrings(string str1, string str2) 
 {
            return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(str1.size(),str2.size())): "";

    }

int main()
{
    string str = "ABCDEF";
    cout << gcdOfStrings( "ABABABAB" , "AB" ) ;
}
