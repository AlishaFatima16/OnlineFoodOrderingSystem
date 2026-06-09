# 🍔 Online Food Ordering System

A desktop-based food ordering application built with **C++ and Qt**, developed as a second-semester Object-Oriented Programming project. The system simulates a real-world food ordering experience with separate customer and admin interfaces, persistent file-based storage, and a polished UI styled with QSS.

---

## 📸 Overview

The application launches with a login screen and routes users to either the **Customer Dashboard** or the **Admin Panel** based on their role. Customers can browse a categorized menu, add items to their cart, apply discounts, and place orders — all within a smooth, modern interface. Admins can manage the entire menu and view all orders in real time.

---

## ✨ Features

### 👤 Customer Side
- **User Registration & Login** — Secure account creation with username, password, email, and phone
- **Categorized Menu** — Browse items across Burgers, Pizza, Desi, Rice, Drinks, Snacks, and Specials
- **Search & Sort** — Real-time search bar + sort by price or popularity
- **Food Cards with Images** — Dynamically loaded food images fetched over the network (`QNetworkAccessManager`)
- **Item Detail View** — Click any item to see full details before adding to cart
- **Shopping Cart** — Add/remove items, view subtotal, tax breakdown, and grand total
- **Special Deals & Discounts** — `SpecialMenuItem` supports percentage-based discounts with custom offer labels
- **Persistent Cart** — Cart is saved to file and restored on next login
- **Order Placement & History** — Place orders and view past orders at any time
- **Recommendations Panel** — A dedicated section in the cart panel suggesting items

### 🔐 Admin Side
- **Secure Admin Login** — Role-based access separates admin from customer accounts
- **Menu Management** — Add, edit, and delete menu items from a live table view
- **Order Viewer** — See all customer orders placed across the system
- **Real-time Stats** — Dashboard header displays current menu item count

---

## 🏗️ OOP Concepts Applied

This project was built to demonstrate core OOP principles:

| Concept | Where It's Used |
|---|---|
| **Encapsulation** | All classes expose data only through getters/setters; internal state is private/protected |
| **Inheritance** | `Customer` and `Admin` both inherit from `User`; `SpecialMenuItem` inherits from `MenuItem` |
| **Polymorphism** | `showDashboard()` and `getInfo()` are overridden in `Customer` and `Admin`; `getFinalPrice()` and `getDisplayInfo()` are overridden in `SpecialMenuItem` |
| **Abstraction** | `User` is an abstract class with pure virtual methods (`showDashboard()`, `getInfo()`) |
| **File I/O** | `FileHandler` class handles all persistent storage (menu, users, orders, cart) through flat `.txt` files |

---

## 🗂️ Project Structure

```
OnlineFoodOrderingSystem/
├── data/
│   ├── menu.txt          # Persistent menu items
│   ├── users.txt         # Registered user accounts
│   ├── orders.txt        # Order history
│   └── cart.txt          # Saved cart state
└── OnlineFoodOrderingSystem/
    ├── main.cpp              # App entry point, global stylesheet
    ├── user.h / .cpp         # Abstract base User class
    ├── customer.h / .cpp     # Customer subclass
    ├── admin.h / .cpp        # Admin subclass
    ├── menuitem.h / .cpp     # Base menu item class
    ├── specialmenuitem.h/.cpp# Discounted/special items (inherits MenuItem)
    ├── cart.h / .cpp         # Shopping cart logic
    ├── order.h / .cpp        # Order model
    ├── filehandler.h / .cpp  # All file read/write operations
    ├── loginwindow.h / .cpp  # Login & registration UI
    ├── customerwindow.h/.cpp # Full customer dashboard UI
    ├── adminwindow.h / .cpp  # Admin panel UI
    └── style.qss             # QSS stylesheet
```

---

## 🛠️ Tech Stack

- **Language:** C++ (C++17)
- **Framework:** Qt 6.11 (Widgets, Network)
- **IDE:** Qt Creator
- **Build System:** QMake
- **Storage:** Plain text files (no database)
- **Platform:** Windows (built & tested with MinGW 64-bit)

---

## 🚀 Getting Started

### Prerequisites
- Qt 6.x installed ([qt.io/download](https://www.qt.io/download))
- MinGW 64-bit compiler (bundled with Qt)

### Run the Project

1. Clone or download the repository
2. Open `OnlineFoodOrderingSystem.pro` in **Qt Creator**
3. Select the **Desktop Qt 6 MinGW 64-bit** kit
4. Click **Run** (▶)

The `data/` folder is created automatically on first launch. A default admin account is seeded if no users file exists.

### Default Admin Credentials
```
Username: admin
Password: admin123
```

---

## 📋 Sample Menu Categories

| Category | Example Items |
|---|---|
| 🍔 Burgers | Spicy Chicken Burger, Double Smash Burger |
| 🍕 Pizza | Lahori Pizza, BBQ Chicken Pizza |
| 🍛 Desi | Chicken Biryani, Beef Nihari, Daal Makhni |
| 🍚 Rice | Chicken Fried Rice, Vegetable Pulao |
| 🥤 Drinks | Cold Coffee, Mango Shake, Doodh Pati Chai |
| 🍟 Snacks | Samosas, Spring Rolls, Loaded Nachos |
| ⭐ Specials | Zinger Burger Deal (15% off), Family Biryani Combo (20% off) |

---

## 🔮 Future Roadmap

This project was built as an academic exercise, but the plan is to evolve it into a real-world application. Upcoming improvements include:

- [ ] **AI-Powered Recommendations** — Integrate an AI model to suggest items based on order history and preferences
- [ ] **AI Ratings & Reviews** — Smart sentiment analysis on customer feedback
- [ ] **Database Integration** — Replace flat files with SQLite or a cloud database
- [ ] **Cross-Platform UI** — Improve compatibility across Windows, macOS, and Linux
- [ ] **Payment Gateway Simulation** — Add a checkout flow with payment options
- [ ] **Real-time Order Tracking** — Status updates from "Preparing" → "On the Way" → "Delivered"

---

## 👨‍💻 Author

Built by a CS student as a 2nd Semester OOP final project — graded and encouraged by the instructor to evolve into a real-world application.

---

## 📄 License

This project is open for learning and educational purposes. Feel free to fork, explore, and build on it.