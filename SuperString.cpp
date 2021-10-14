// Copyright 2021 Tatiana Washington
#include "./SuperString.h"

// DO NOT MODIFY START
void SuperString::print() {
    if (size != 0) {
        for (int i = 0; i < size; i++) {
            std::cout << data[i];
        }
        std::cout << "\n";
    } else {
        std::cout << "<EMPTY>\n";
    }
}

char SuperString::get(int index) {
    if (index >= 0 && index < size) {
        return data[index];
    }
    return '\0';
}

int SuperString::length() {
    return size;
}
// DO NOT MODIFY END

// PUT YOUR CODE BELOW!

SuperString::SuperString() { //default constructor
    size = 0; //set size 0
    data = new char[size]; //allocate data to new char of size
}

SuperString::SuperString(std::string str) { //alt constructor #1
    size = str.length(); //set size to length of str
    data = new char[size]; 
    for (int i = 0; i < size; i++) { //fill all contents of array w/ str
        data[i] = str[i];
    }
}

SuperString::SuperString(int size, char val) { //alt constructor #2
    (*this).size = size; //set size to size
    data = new char[size];
    for (int i = 0; i < size; i++) { //fill all contents of array w/ val
        data[i] = val;
    }
}

SuperString::SuperString(const SuperString& copy) { //copy constructor
    size = copy.size; //set size to size of obj
    data = new char[size]; 
    for (int i = 0; i < size; i++) { //fill all contents of array w/ data
        data[i] = copy.data[i];
    }
}

int SuperString::find(char c, int start) { //findchar
    for (int i = start; i < 10; i++) { //return index of 1st instance of char
        if (data[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int SuperString::find(std::string str, int start) { //find str
    int L = str.length();
    int R = 4;
    int END = R - L + 1;
    for (int i = start; i >= END; i++) { //return index of 1st instance of char
        for ( int j = 0; i < L; i++) {
            if (data[i + j] != str[j]) {
                break;
            }
        }
        if(int j = L) {
            return i;
        }
    }
    return -1;
}

SuperString SuperString::substr(int start, int numChar) { //substrValid
    int L = start + numChar; 
    if (L > size) {         
        return SuperString(); //contain obj data starting at index start
    }
    std::string s1;
    for (int i = start; i < L; i++) { 
        s1.insert(i, s1);
    }
    return *this; //return obj
}

SuperString SuperString::reverse() { //reverse
    int S = 4; 
    for (int i = 0; i < S/2; i++) { //return obj that contains calling obj data in reverse order
        int temp = data[i];
        data[i] = data[S-i-1];
        data[S-i-1] =  temp;
    }
    return *this;
}

SuperString SuperString::replace(int start, int numChar, std::string sub) { //replaceValid
    int sn = start + numChar;
    if (sn > size) { 
        return SuperString(); // has contents of data after replacement
    }
    std::string s1;
    for (int i = 0; i < start; i++) {
        s1.insert(i, s1);
    }
    return *this;   //return obj w/ size 0 if invalid index pass
}

void SuperString::push_back(char c) { //pushback
    char* temp = data;
    temp = new char[size+1];
    for (int i = 0; i < size; i++) { //adds new char to data
        temp[i] = data[i];
    }
    temp[size] = c;
    delete data;
    data = temp;
    size = size + 1;
    return;
}

void SuperString::append(std::string str) { //appendstring
    int L = str.length();
    int newSize = size + L;
    char* temp = data;
    temp = new char[size+1];
    for ( int i = 0; i < size; i++) { //append the content to the end of data
        temp[i] = data[i];
    }
    for (int i = 0; i < L; i++) {
        temp[size+i] = str[i];
    }
    delete data;
    data = temp;
    size = newSize;
    return;
}

void SuperString::append(const SuperString& obj) { //appendsuperstring
    int L = obj.size;
    int newSize = size + L;
    char* temp = data;
    temp = new char[size+1];
    for ( int i = 0; i < size; i++) { //append content to the end of data
        temp[i] = data[i];
    }
    for (int i = 0; i < newSize; i++) {
        temp[i] = obj.data[i-size];
    }
    delete data;
    data = temp;
    size = newSize;
    return;
}

void SuperString::replace(char find, char rep) { //replace
    char temp = (*this).find(find, 0);
    while (temp != -1) { //replace all char in data with rep
        data[temp] = rep;
        temp = (*this).find(find,temp+1);
    }
    return;
}
//extra credit
void SuperString::removeAll(char c) {
    return; 
}

// Bonus Methods
void SuperString::replace(std::string find, std::string rep) {
    return;
}

bool SuperString::isUpper() {
    return true;
}

bool SuperString::isLower() {
    return true;
}

bool SuperString::isTitleCase() {
    return true;
}

SuperString::~SuperString() {
    
}
