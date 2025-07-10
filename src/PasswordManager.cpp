#include "PasswordManager.h"
#include "Encryptor.h"
#include <iostream>
#include <fstream>

void PasswordManager::run() {
    std::cout << "Enter master password: ";
    std::string master;
    std::cin >> master;

    if (!authenticate(master)) {
        std::cout << "Authentication failed. Exiting.\n";
        return;
    }

    int choice;
    do {
        std::cout << "\n1. Add Credential\n2. View All\n3. Exit\n> ";
        std::cin >> choice;

        switch (choice) {
            case 1: addCredential(); break;
            case 2: viewCredentials(); break;
            case 3: std::cout << "Goodbye!\n"; break;
            default: std::cout << "Invalid choice.\n";
        }
    } while (choice != 3);
}

bool PasswordManager::authenticate(const std::string& pwd) {
    // simple hardcoded password check
    return pwd == "admin";
}

void PasswordManager::addCredential() {
    std::string service, username, password;
    std::cout << "Service: "; std::cin >> service;
    std::cout << "Username: "; std::cin >> username;
    std::cout << "Password: "; std::cin >> password;

    std::ofstream file("data/credentials.enc", std::ios::app);
    file << Encryptor::encrypt(service) << "," << Encryptor::encrypt(username) << "," << Encryptor::encrypt(password) << "\n";
    file.close();
    std::cout << "Credential saved.\n";
}

void PasswordManager::viewCredentials() {
    std::ifstream file("data/credentials.enc");
    std::string line;
    while (getline(file, line)) {
        size_t p1 = line.find(","), p2 = line.rfind(",");
        std::string s = Encryptor::decrypt(line.substr(0, p1));
        std::string u = Encryptor::decrypt(line.substr(p1 + 1, p2 - p1 - 1));
        std::string p = Encryptor::decrypt(line.substr(p2 + 1));
        std::cout << "Service: " << s << ", Username: " << u << ", Password: " << p << "\n";
    }
    file.close();
}