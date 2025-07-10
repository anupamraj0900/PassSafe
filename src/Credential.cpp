#include "Credential.h"

Credential::Credential(const std::string& s, const std::string& u, const std::string& p)
    : service(s), username(u), password(p) {}