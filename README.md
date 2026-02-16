# 🎓 Student Management System (Linked List Based)

## 📌 Description

The **Student Management System** is a console-based C++ application designed to manage student records efficiently using a **Linked List** data structure. This project demonstrates fundamental concepts of **data structures**, **object-oriented programming**, and **dynamic memory management** in C++.

Instead of relying on arrays or databases, the system dynamically stores student information using nodes, making it memory-efficient and flexible. The application provides essential CRUD operations such as adding, viewing, searching, updating, and deleting student records.

This project is ideal for beginners learning:

* Linked Lists
* Classes & Objects in C++
* Pointers and Dynamic Memory
* Basic Data Management Logic

---

## 🚀 Features

✅ Add new student records<br>
✅ View all student records<br>
✅ Search for a student by ID<br>
✅ Update student information<br>
✅ Delete student records<br>
✅ Menu-driven console interface

---

## 🛠️ Technologies Used

* **Language:** C++
* **Concepts:** Linked List, OOP, Pointers
* **Environment:** Console Application

---

## 🧠 Data Structure Used

This project uses a **Singly Linked List** to store student data.

Each node contains:

* Student details (ID, name, etc.)
* Pointer to the next node

Advantages:

* Dynamic memory allocation
* No fixed size limitation
* Efficient insertion & deletion

---

## 📂 Project Structure

```
Student_Manager.cpp
│
├── Node Class          → Represents linked list node
├── Student Class       → Contains all operations
│   ├── isempty()
│   ├── add_student()
│   ├── view()
│   ├── search()
│   ├── update()
│   ├── delete_student()
│   └── menu()
│
└── main()              → Entry point of program
```

---

## ▶️ How to Run

### 1️⃣ Compile the program

```bash
g++ Student_Manager.cpp -o sms
```

### 2️⃣ Run the executable

```bash
./sms
```

---

## 📸 Sample Workflow

1. Launch program
2. Choose option from menu
3. Perform operations (Add / View / Search / Update / Delete)

---

## 🎯 Learning Outcomes

By working on this project, you will understand:

* How Linked Lists work internally
* Pointer manipulation
* Class design in C++
* Dynamic data handling

---

## 🔮 Future Improvements

✨ File storage (Save data permanently)
✨ GUI-based interface
✨ Sorting & Filtering
✨ Validation & Error Handling
✨ Database integration

---

## 👩‍💻 Author

**Your Name**
C++ / Data Structures Project

---

## 📜 License

This project is for educational purposes.
