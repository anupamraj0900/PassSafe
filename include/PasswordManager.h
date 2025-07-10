#ifndef PASSWORD_MANAGER_H
#define PASSWORD_MANAGER_H

#include <string>

class PasswordManager {
public:
    void run();
private:
    bool authenticate(const std::string& pwd);
    void addCredential();
    void viewCredentials();
};

#endif