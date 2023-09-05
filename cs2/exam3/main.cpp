#include <iostream>
#include "list.h"
#include "list.cpp"

using namespace std;
int const MAX = 100;


void change_list(char* inputArr);

//input: abcd#
//output: abc
//or
//input: abcd##
//output: ab
int main()
{
    char user_input[MAX];

    cout << "Input:   ";

    cin.get(user_input, 99);

    change_list(user_input);

    return 0;
}

void change_list(char* inputArr){

    List l;

    for(int i = 0; inputArr[i] != '\0'; i++){

        if(isalpha(inputArr[i])){
           l.append(inputArr[i]);
           }
        if(inputArr[i] == '#'){
            l.remove_last();
           }
    }
cout << l;
}
