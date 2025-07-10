#include "Encryptor.h"
#include <string>

std::string Encryptor::encrypt(const std::string& text) {
    std::string encrypted = text;
    for (char& c : encrypted) c ^= 0xAA;
    return encrypted;
}

std::string Encryptor::decrypt(const std::string& text) {
    return encrypt(text); // XOR is reversible
}