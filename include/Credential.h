#ifndef CREDENTIAL_H
#define CREDENTIAL_H

#include <string>

class Credential {
public:
    Credential(const std::string& service, const std::string& username, const std::string& password);
private:
    std::string service;
    std::string username;
    std::string password;
};

#endif