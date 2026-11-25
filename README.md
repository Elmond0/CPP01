*This project has been created as part of the 42 curriculum by elmondo.*

# <img align="middle" height="115" src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/badges/numbered_cpps/CPP01.png" alt="CPP01 badge"/> <picture><source media="(prefers-color-scheme: dark)" srcset="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=58A6FF&vCenter=true&width=400&height=80&lines=CPP01"><source media="(prefers-color-scheme: light)" srcset="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=0366D6&vCenter=true&width=400&height=80&lines=CPP01"><img align="middle" src="https://readme-typing-svg.demolab.com/?font=Fira+Code&weight=600&size=55&pause=1000&color=0366D6&vCenter=true&width=400&height=80&lines=CPP01" alt="CPP01"/></picture>

[![Common Core](https://img.shields.io/badge/-Common%20Core-24292e?style=flat&logo=data:image/svg%2Bxml;base64,PHN2ZyByb2xlPSJpbWciIHZpZXdCb3g9IjAgMCAyNCAzNCIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj48dGl0bGU+NDI8L3RpdGxlPjxkZXNjPkxvZ28gNDIgY29uIHBhZGRpbmcgaW5mZXJpb3JlOiBHaXRIdWIgcmltdW92ZSBnbGkgYXR0cmlidXRpIHN0eWxlIGRhbCBtYXJrZG93biwgcXVpbmRpIGlsIG1hcmdpbmUgY2hlIGFsbGluZWEgbCdpY29uYSBhbCB0ZXN0byBkZWwgdGl0b2xvIGUnIGluY29ycG9yYXRvIG5lbCB2aWV3Qm94LiBJbCBnbGlmbyBvY2N1cGEgeSAzLjU3NC0yMC40MjYgZSBzb3R0byByZXN0YW5vIDEzLjU3NCB1bml0YScgdnVvdGU6IHJlc28gYSA0MnB4IGNvbiBhbGlnbj1taWRkbGUsIGlsIGdsaWZvIHN0YSB+MnB4IHNvcHJhIGxhIGJhc2VsaW5lIGRlbCB0aXRvbG8uIFBlciBhbHphcmxvIGFuY29yYSBzZXJ2b25vICsxIHVuaXRhJyBkaSB2aWV3Qm94IG9nbmkgKzEuMnB4IGRpIGhlaWdodCAoY2lyY2EgKzAuNnB4IGRpIHNvbGxldmFtZW50bywgYSBwYXJpdGEnIGRpIGRpbWVuc2lvbmUgZGVsIGdsaWZvKS48L2Rlc2M+PHN0eWxlPnBhdGh7ZmlsbDojMDAwMDAwfSBAbWVkaWEgKHByZWZlcnMtY29sb3Itc2NoZW1lOmRhcmspe3BhdGh7ZmlsbDojRkZGRkZGfX08L3N0eWxlPjxwYXRoIGQ9Ik0xOS41ODEgMTYuODUxSDI0di00LjQzOVpNMjQgMy41NzRoLTQuNDE5djQuNDJsLTQuNDE5IDQuNDE4djQuNDRoNC40MTl2LTQuNDRMMjQgNy45OTNabS00LjQxOSAwaC00LjQxOXY0LjQyem0tNi4zMjQgOC44MzhINC40MTlsOC44MzgtOC44MzhIOC44MzhMMCAxMi40MTJ2My41OTVoOC44Mzh2NC40MTloNC40MTl6Ii8+PC9zdmc+Cg==)](https://profile.intra.42.fr/users/elmondo)
![Language](https://img.shields.io/badge/language-C%2B%2B98-blue)
![Flags](https://img.shields.io/badge/flags--Wall%20--Wextra%20--Werror-passing-brightgreen)
![Valgrind](https://img.shields.io/badge/valgrind-no%20leaks-brightgreen)

> Memory allocation, references vs pointers, pointers to member functions, and file handling with streams.

---

## 📖 Description

`CPP01` is Module 01 of the 42 **C++ modules**. Every exercise is written in **C++98** and compiled with `c++ -Wall -Wextra -Werror -std=c++98`.

What this module covers:

- Stack vs heap allocation (`new` / `delete`, `new[]` / `delete[]`)
- References and pointers, and when to use each
- Pointers to member functions (replacing `if/else` chains)
- File streams (`std::ifstream` / `std::ofstream`) and manual string replacement without `std::string::replace`
- `switch` statements

---

## 🗂️ Exercises

| Directory | Exercise | Executable | Description |
|:---------:|----------|:----------:|-------------|
| `ex00` | BraiiiiiiinnnzzzZ | `zombie` | `Zombie` class with `newZombie()` (heap) and `randomChump()` (stack). |
| `ex01` | Moar brainz! | `zombieHorde` | Allocates N zombies in a single `new[]` and returns the horde. |
| `ex02` | HI THIS IS BRAIN | `brain` | Shows that a pointer and a reference to a string refer to the same address. |
| `ex03` | Unnecessary violence | `unnecessaryviolence` | `HumanA` (reference to a `Weapon`) vs `HumanB` (pointer to a `Weapon`). |
| `ex04` | Sed is for losers | `sed4losers` | Copies a file replacing every `s1` with `s2` into `<file>.replace`, without `std::string::replace`. |
| `ex05` | Harl 2.0 | `Harl` | Complains at four log levels (`DEBUG`, `INFO`, `WARNING`, `ERROR`) dispatched through an array of pointers to member functions. |

---

## ⚙️ Compilation & Usage

Each exercise is independent and has its own `Makefile`:

```bash
make        # build the executable
make clean  # remove object files
make fclean # remove object files and the executable
make re     # fclean + make
```

**`ex00` — BraiiiiiiinnnzzzZ**
```bash
cd ex00 && make
./zombie
```

**`ex01` — Moar brainz!**
```bash
cd ex01 && make
./zombieHorde
```

**`ex02` — HI THIS IS BRAIN**
```bash
cd ex02 && make
./brain
```

**`ex03` — Unnecessary violence**
```bash
cd ex03 && make
./unnecessaryviolence
```

**`ex04` — Sed is for losers**
```bash
cd ex04 && make
./sed4losers file.txt old new
```

**`ex05` — Harl 2.0**
```bash
cd ex05 && make
./Harl
```

---

## 📁 Project Structure

```
CPP01/
├── ex00/
│   ├── Zombie.cpp
│   ├── Zombie.hpp
│   ├── main.cpp
│   ├── newZombie.cpp
│   ├── randomChump.cpp
│   └── Makefile
├── ex01/
│   ├── Zombie.cpp
│   ├── Zombie.hpp
│   ├── main.cpp
│   ├── zombieHorde.cpp
│   └── Makefile
├── ex02/
│   ├── main.cpp
│   └── Makefile
├── ex03/
│   ├── HumanA.cpp
│   ├── HumanA.hpp
│   ├── HumanB.cpp
│   ├── HumanB.hpp
│   ├── Weapon.cpp
│   ├── Weapon.hpp
│   ├── main.cpp
│   └── Makefile
├── ex04/
│   ├── main.cpp
│   └── Makefile
└── ex05/
    ├── Harl.cpp
    ├── Harl.hpp
    ├── main.cpp
    └── Makefile
```

---

## 📚 Resources

- [C++ FAQ — references](https://isocpp.org/wiki/faq/references)
- [cppreference — pointers to member functions](https://en.cppreference.com/w/cpp/language/pointer)
- [cppreference — std::ifstream](https://en.cppreference.com/w/cpp/io/basic_ifstream)
- `man 3 cout`, [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [Valgrind](https://valgrind.org/) — memory error and leak detector used for testing

---

## 🎯 Key Takeaways

- Knowing **exactly where an object lives** (stack vs heap) and who frees it.
- Choosing between **reference** and **pointer** by ownership and nullability.
- Replacing conditionals with **member-function dispatch tables**.
- Reading/writing files with **C++ streams** and doing string search by hand.
