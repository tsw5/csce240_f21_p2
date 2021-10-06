// Copyright 2021 <Enter Name Here>
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

SuperString::SuperString() {
}

SuperString::SuperString(std::string str) {
}

SuperString::SuperString(int size, char val) {
}

SuperString::SuperString(const SuperString& copy) {
}

int SuperString::find(char c, int start) {
    return -1;
}

int SuperString::find(std::string str, int start) {
    return -1;
}

SuperString SuperString::substr(int start, int numChar) {
    return *this;
}

SuperString SuperString::reverse() {
    return *this;
}

SuperString SuperString::replace(int start, int numChar, std::string sub) {
    return *this;
}

void SuperString::push_back(char c) {
    return;
}

void SuperString::append(std::string str) {
    return;
}

void SuperString::append(const SuperString& obj) {
    return;
}

void SuperString::replace(char find, char rep) {
    return;
}

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
