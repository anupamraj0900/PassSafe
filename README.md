#  PassSafe – Offline Password Manager

A terminal-based password manager built with C++. It lets you securely store your login details (like Gmail, Facebook, etc.) in an encrypted file on your own system — no internet or cloud needed.

---

##  What it does

- Authenticates you with a master password (`admin` by default)
- Lets you save usernames and passwords for different services
- Encrypts and stores everything locally (nothing is stored in plain text)
- You can view all your saved credentials anytime
- Super lightweight and fast — just runs in the terminal

---

##  How to run it

### 1. Build the project (in terminal)

```bash
make
```

### 2. Run the app

```bash
./passsafe
```

---

- **Language**: C++17
- **Build**: Makefile
- **Encryption**: Simple XOR-based encryption for learning/demo purposes


---
