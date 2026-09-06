# 🍔 Online Food Ordering System

> A modern desktop-based food ordering application built with **C++ and Qt**.

The **Online Food Ordering System** is a desktop application that simulates a complete food ordering experience with separate interfaces for customers and administrators. Users can browse menus, manage carts, apply discounts, and place orders, while administrators can manage menu items and monitor orders.

Developed as a **second-semester Object-Oriented Programming (OOP) project**, the application focuses on applying core OOP principles to a practical, real-world system while delivering a polished user interface using Qt and QSS.

---

## ✨ Features

### 👤 Customer Features

- 🔐 **Registration & Login** — Create and manage customer accounts
- 🍔 **Categorized Menu** — Browse Burgers, Pizza, Desi, Rice, Drinks, Snacks, and Specials
- 🔎 **Search & Sort** — Search menu items and sort by price or popularity
- 🖼️ **Dynamic Food Images** — Load food images using `QNetworkAccessManager`
- 📋 **Item Details** — View detailed information before adding items to the cart
- 🛒 **Shopping Cart** — Add or remove items and view subtotal, tax, and total
- 🏷️ **Special Deals & Discounts** — Percentage-based discounts with custom offer labels
- 💾 **Persistent Cart** — Cart data is saved and restored between sessions
- 📦 **Order Placement** — Place orders directly through the application
- 🕒 **Order History** — View previously placed orders
- 💡 **Recommendations** — Suggested items displayed within the cart

### 🛠️ Admin Features

- 🔐 **Role-Based Access** — Separate administrator and customer access
- ➕ **Menu Management** — Add new food items
- ✏️ **Edit Menu Items** — Update existing menu information
- 🗑️ **Delete Menu Items** — Remove items from the menu
- 📦 **Order Management** — View customer orders across the system
- 📊 **Live Statistics** — Monitor the current number of menu items

---

## 🧠 Object-Oriented Programming Concepts

The project demonstrates several core **Object-Oriented Programming principles**:

| Concept | Implementation |
|---|---|
| **Encapsulation** | Class data is protected using private/protected members and accessed through getters and setters |
| **Inheritance** | `Customer` and `Admin` inherit from `User`; `SpecialMenuItem` inherits from `MenuItem` |
| **Polymorphism** | Virtual methods such as `showDashboard()` and `getInfo()` are overridden by derived classes |
| **Abstraction** | `User` serves as an abstract base class with pure virtual functions |
| **File I/O** | `FileHandler` manages persistent storage for users, menus, carts, and orders |

---

## 🏗️ System Architecture

```text
                    ┌───────────────┐
                    │     User      │
                    │ Abstract Base │
                    └───────┬───────┘
                            │
              ┌─────────────┴─────────────┐
              │                           │
        ┌─────▼─────┐               ┌─────▼─────┐
        │ Customer  │               │   Admin   │
        └───────────┘               └───────────┘


                    ┌───────────────┐
                    │   MenuItem    │
                    └───────┬───────┘
                            │
                    ┌───────▼────────┐
                    │SpecialMenuItem │
                    │   Discounts    │
                    └────────────────┘
```

---

## 📂 Project Structure

```text
OnlineFoodOrderingSystem/
│
├── data/
│   ├── menu.txt              # Menu data
│   ├── users.txt             # Registered users
│   ├── orders.txt            # Order history
│   └── cart.txt              # Saved cart state
│
└── OnlineFoodOrderingSystem/
    ├── main.cpp
    ├── user.h / user.cpp
    ├── customer.h / customer.cpp
    ├── admin.h / admin.cpp
    ├── menuitem.h / menuitem.cpp
    ├── specialmenuitem.h / specialmenuitem.cpp
    ├── cart.h / cart.cpp
    ├── order.h / order.cpp
    ├── filehandler.h / filehandler.cpp
    ├── loginwindow.h / loginwindow.cpp
    ├── customerwindow.h / customerwindow.cpp
    ├── adminwindow.h / adminwindow.cpp
    └── style.qss
```

---

## 🛠️ Tech Stack

| Technology | Usage |
|---|---|
| **C++17** | Core application logic |
| **Qt 6.11** | Desktop application framework |
| **Qt Widgets** | User interface components |
| **Qt Network** | Dynamic image loading |
| **QSS** | Application styling |
| **QMake** | Build system |
| **Text Files** | Persistent data storage |
| **MinGW 64-bit** | Compiler |

---

## 🚀 Getting Started

### Prerequisites

- Qt 6.x
- Qt Creator
- MinGW 64-bit Compiler

### Installation

Clone the repository:

```bash
git clone https://github.com/AlishaFatima16/OnlineFoodOrderingSystem.git
cd OnlineFoodOrderingSystem
```

Then:

1. Open `OnlineFoodOrderingSystem.pro` in **Qt Creator**
2. Select the **Desktop Qt 6 MinGW 64-bit** kit
3. Build the project
4. Click **Run ▶**

The `data/` directory will be created automatically on the first launch.

---

## 🔑 Default Admin Account

If no user data exists, the application automatically creates a default administrator account.

```text
Username: admin
Password: admin123
```

> ⚠️ These credentials are intended for demonstration purposes only.

---

## 🍽️ Menu Categories

| Category | Example Items |
|---|---|
| 🍔 **Burgers** | Spicy Chicken Burger, Double Smash Burger |
| 🍕 **Pizza** | Lahori Pizza, BBQ Chicken Pizza |
| 🍛 **Desi** | Chicken Biryani, Beef Nihari, Daal Makhni |
| 🍚 **Rice** | Chicken Fried Rice, Vegetable Pulao |
| 🥤 **Drinks** | Cold Coffee, Mango Shake, Doodh Pati Chai |
| 🍟 **Snacks** | Samosas, Spring Rolls, Loaded Nachos |
| ⭐ **Specials** | Zinger Burger Deal, Family Biryani Combo |

---

## 💾 Data Persistence

The application uses file-based storage to persist application data.

```text
data/
│
├── users.txt      → User accounts
├── menu.txt       → Menu items
├── orders.txt     → Order history
└── cart.txt       → Saved shopping carts
```

All file operations are managed through the `FileHandler` class.

---

## 🔮 Future Improvements

- 🤖 **AI-Powered Recommendations** — Personalized food suggestions based on order history and preferences
- ⭐ **Smart Ratings & Reviews** — Sentiment analysis for customer feedback
- 🗄️ **Database Integration** — Replace flat files with SQLite, PostgreSQL, or a cloud database
- 💳 **Payment Integration** — Add a simulated checkout and payment workflow
- 🚚 **Real-Time Order Tracking** — Track orders from preparation to delivery
- 🌐 **Cross-Platform Support** — Improve compatibility across Windows, macOS, and Linux

---

## 🎓 What I Learned

Through this project, I gained practical experience with:

- Object-Oriented Programming in C++
- Class design and relationships
- Inheritance and polymorphism
- Abstract classes and virtual functions
- File handling and data persistence
- Qt Widgets and desktop application development
- Network requests using Qt
- User interface design with QSS
- Building a complete application from requirements to implementation

---

## 👩‍💻 Author

**Alisha Fatima**

Built as a **second-semester Object-Oriented Programming final project**.

The project was graded and encouraged by the instructor to further develop it into a real-world application.

⭐ If you found this project interesting, consider giving the repository a star!

---

## 📄 License

This project is open for **learning and educational purposes**.

Feel free to explore, fork, and build upon it.
