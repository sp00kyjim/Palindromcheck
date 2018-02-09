#include <iostream>
//Original Code from notolofflo . Eddit a few things and translated it to german.



#include <string>
using namespace std;

char easytolower(char in){
    if(in<='Z' && in>='A')
        return in-('Z'-'z');
    return in;
}

bool isPalindrom(string str){

    bool result = true;
    for (unsigned i=0; i<(str.length()/2);i++){
        if(easytolower(str.at(i)) != easytolower(str.at(str.length()-i-1) )){
            result = false;
            return result;
        }

    }

    return result;

}



int main ()
{
    std::string str;
    std::cout << "Um zu prufen ob dein Wort ein Palindrom ist, gibt es nun an.:   ";
    std::cin >> str;



    cout << "Dein Wort falschherum: " <<endl;
    for (unsigned i=0; i<str.length(); ++i)
    {


        std::cout << str.at(str.length() - i -1);

    }
    std::cout << endl;
    if(isPalindrom(str)){
        cout << "Richtig! Dieses Wort ist ein Palindrom" << endl;
    }else{
        cout << "Dein Wort ist leider kein Palindrom "<< endl;
    }

    return 0;
}
