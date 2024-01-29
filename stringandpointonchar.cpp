#include<iostream>
using namespace std;
main(){
    string txt = "LoL";
    for (int i = 0; i < txt.length(); i++)
    {
        cout << txt[i] << endl;
    }
    char ch = txt[0];
    cout << ch << endl;
    char characters[] = "1234";
    cout << characters << endl;
    cout << characters[0] << endl;
    cout << *(characters) << endl;
    cout << characters[1] << endl;
    cout << *(characters+1) << endl;
    char *p = characters;
    cout << p[0] << endl;
    cout << *(p) << endl;
    cout << p[1] << endl;
    cout << *(p+1) << endl;
    const char * txt2 = txt.c_str();
    cout << txt2 << endl;
    char array[] = "here is a teeth lol";
    string test = array;
    cout << test << endl;
    const char * a = "this is a dream";
    cout << a << endl;
    char b[] = "wy ps2 send me a nude with a blackberry";
    b[0] = 'M';
    cout << b << endl;
    char * const dynamic_array = new char[60];
    //dynamic_array = "Hello sdk";
    dynamic_array[0] = 'J';
    //dynamic_array[1] = '\0';
    cout << dynamic_array << endl;
    delete [] dynamic_array;
    /*
    string array_of_string[26] = "This is a text with words";
    array_of_string[0] = "asdf";
    cout << array_of_string << endl;
    cout << array_of_string[0] << endl;
    cout << array_of_string[1] << endl;
    cout << array_of_string[2] << endl; 
    */
}