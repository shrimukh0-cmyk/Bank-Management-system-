# 🏦 Bank-Management-system

### 💻 Bank Management System in C :

## 📝 Overview
This is a simple **Bank Management System** implemented in **C language**.  
It allows users to:

- Create bank accounts  
- Deposit money  
- Withdraw money  
- Check account balances  
- Display all accounts  

The system stores account data in a binary file (`accounts.dat`) so that information persists between runs.

---

## 🚀 Features

1. **Create Account**  
   - Enter account number, account holder name, and initial balance.  
   - Data is saved to `accounts.dat`.  

2. **💰 Deposit Money**  
   - Enter account number and deposit amount.  
   - Updates account balance.  

3. **💸 Withdraw Money**  
   - Enter account number and withdrawal amount.  
   - Ensures sufficient balance before withdrawal.  

4. **📊 Check Balance**  
   - Enter account number to view account holder and current balance.  

5. **📂 Display All Accounts**  
   - Lists all accounts stored in the system.  

---

## 🗂 Project Structure

BankManagementSystem

├── main.c # Main menu and program entry point

├── account.c # Account creation and display functions

├── transaction.c # Deposit, withdraw, and check balance functions

├── file.c # File handling functions (findAccount, updateAccount)

├── utils.c # Utility functions (input buffer clearing, validation)

├── bank.h # Struct and function declarations

└── accounts.dat # Binary file to store account data (created automatically)


---

## ⚙️ How to Compile and Run

1. Open **PowerShell** or **Command Prompt** and navigate to the project folder:

##### **powershell**
      
       cd "C:\Users\HP\Downloads\Projects\Projects Using C\Bank Managment system"
2. Compile all .c files together:
     
       gcc main.c account.c transaction.c file.c utils.c -o bank.exe
     
3. Run the program:

       .\bank.exe

### 📝 Usage :- 

   Choose options from the menu by entering numbers: 1-5 or 0 to exit.

   Follow the prompts to create accounts, deposit/withdraw, check balance, or display accounts.

   Account data persists in accounts.dat.

### 💡 Notes :-

   Ensure all .c files are in the same folder when compiling.

   Do not include .c files inside each other; include only bank.h.

   Make sure file names are exactly as used in the compile command.

## 👨‍💻 Author

Suryansh Tiwari  
B.Tech CSE (AIML)

## 📜 License

This project is for **educational and learning purposes only**.

