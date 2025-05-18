# 🔐 Caesar Cipher with Circular Queue 

This project explores the use of data structures in cryptography by implementing the **Caesar Cipher** using a **circular queue** in C. We designed this application to encrypt and decrypt messages efficiently while showcasing queue-based character rotation and modular arithmetic.


## 📖 Table of Contents

- [About the Project](#-about-the-project)
- [Features](#-features)
- [Sample Output](#-sample-output)
- [Project Structure](#-project-structure)
- [How to Compile and Run](#-how-to-compile-and-run)
- [GitHub Collaboration](#-github-collaboration)
- [License](#-license)


## 🧠 About the Project

The **Caesar Cipher** is a classic encryption technique where each letter in a message is shifted a fixed number of positions through the alphabet. We use a **circular queue** to simulate the alphabet and allow easy wrap-around during encryption and decryption.

This project enhances our understanding of:

- Circular queues
- Character manipulation using ASCII
- Modular arithmetic
- Version control using GitHub


## ⚙️ Features

- 🔁 Circular queue simulates the alphabet
- 🔐 Encrypts messages using Caesar cipher logic
- 🔓 Decrypts messages using reverse rotation
- 🔣 Preserves letter case (uppercase/lowercase)
- ❌ Skips non-alphabetic characters (e.g., punctuation, spaces)
- 🔑 Works with positive or negative integer shift keys

## 🧪 Sample Output

```plaintext
Encryption (E) or Decryption (D)?: E
Enter your message: HELLO WORLD
Enter shift key: 3
*****************************
Encrypted Message: KHOOR ZRUOG

Encryption (E) or Decryption (D)?: D
Enter your message: KHOOR ZRUOG
Enter shift key: 3
*****************************
Original Message: HELLO WORLD
```

## 📁 Project Structure

```bash
Caesar-Cipher-Group/
├── main.c          # Main application logic
├── queue.h         # Queue header file
├── README.md       # Project documentation
```

## 🧰 How to Compile and Run

### Compile

Using GCC:

```bash
gcc main.c queue.c -o CaesarCipher
```

### Run

```bash
./CaesarCipher
```
### On Windows (if using Code::Blocks):

Press F9 to Build & Run

Or run CaesarCipher.exe from bin\Debug\

## 🌐 GitHub Collaboration

This project is made possible through the collaboration of the following team members:

* **queue setup**
  * [Chamara Perera ](https://github.com/Chamaracperera)
* **Encryption logic**
  * [Chanuli Sandanayake](https://github.com/Chanuli-Sandanayake)
* **Decryption logic and function calls**
  * [Sathsarani Geethamali](https://github.com/Sathsarani2002)
  


### Git Workflow:

* 🔄 Branching (`main`, `testing`, `feature/queue``feature/encryption`, `feature/decryption`)
* ✅ Commit logs for each implementation step
* 🔀 Pull requests and code review for merging
* 👥 Contributor history for tracking individual work

### Repository:

[🔗 GitHub Repository](https://github.com/Chamaracperera/Caesar_Cipher.git)


## 📜 License

This project is for academic and educational purposes only.
© 2025 Caesar Cipher Group – All rights reserved.



