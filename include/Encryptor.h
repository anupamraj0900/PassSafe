#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H

#include <string>

class Encryptor {
public:
    static std::string encrypt(const std::string& text);
    static std::string decrypt(const std::string& text);
};

#endif