# CPP Modules (00-09)

A comprehensive journey through C++ programming fundamentals and advanced concepts as part of the 42 School curriculum.

## Table of Contents

- [About](#about)
- [Modules Overview](#modules-overview)
- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [42 School Context](#42-school-context)
- [Author](#author)

## About

This repository contains solutions and implementations for the C++ modules (CPP00 through CPP09) from the 42 School curriculum. These modules provide a progressive introduction to object-oriented programming in C++98, covering fundamental concepts from basic syntax to advanced features like templates and the Standard Template Library (STL).

The modules are designed to be completed sequentially, with each building upon concepts learned in previous modules.

## Modules Overview

### CPP Module 00: Introduction to C++
**Status:** ✓ Completed

**Topics Covered:**
- Namespaces
- Classes and member functions
- stdio streams (std::cout, std::cin)
- Initialization lists
- Static and const keywords
- Basic syntax and compilation

**Key Concepts:**
- Understanding the differences between C and C++
- Object-oriented programming basics
- Encapsulation and access specifiers (public, private, protected)
- Creating and using simple classes

---

### CPP Module 01: Memory Allocation and References
**Status:** ✓ Completed

**Topics Covered:**
- Memory allocation (stack vs heap)
- Pointers to members
- References vs pointers
- Switch statements
- File streams

**Exercises:**
- ex00: BraiiiiiiinnnzzzZ (Zombie allocation)
- ex01: Moar brainz! (Zombie horde)
- ex02: HI THIS IS BRAIN (References)
- ex03: Unnecessary violence (Weapon class)
- ex04: Sed is for losers (File replacement)
- ex05: Harl 2.0 (Switch and function pointers)

**Key Concepts:**
- Dynamic memory allocation with `new` and `delete`
- Understanding when to use stack vs heap
- References as safer alternatives to pointers
- Resource management (RAII principles)

---

### CPP Module 02: Ad-hoc Polymorphism and Operator Overloading
**Status:** ⏳ In Progress

**Topics Covered:**
- Ad-hoc polymorphism
- Operator overloading
- Orthodox Canonical class form
- Fixed-point numbers

**Key Concepts:**
- Implementing the Orthodox Canonical Form (OCF):
  - Default constructor
  - Copy constructor
  - Copy assignment operator
  - Destructor
- Overloading operators for custom behavior
- Understanding fixed-point arithmetic

---

### CPP Module 03: Inheritance
**Status:** ✓ Completed

**Topics Covered:**
- Inheritance basics
- Protected members
- Multiple inheritance (Diamond problem)

**Exercises:**
- ex00: ClapTrap (Base class)
- ex01: ScavTrap (Simple inheritance)
- ex02: FragTrap (Multiple inheritance)
- ex03: DiamondTrap (Diamond inheritance problem)

**Key Concepts:**
- Creating derived classes
- Constructor/destructor call order in inheritance
- Solving the diamond problem with virtual inheritance
- Understanding protected access specifiers

---

### CPP Module 04: Subtype Polymorphism and Abstract Classes
**Status:** ✓ Completed

**Topics Covered:**
- Subtype polymorphism
- Abstract classes and pure virtual functions
- Interfaces
- Deep copy vs shallow copy

**Exercises:**
- ex00: Polymorphism (Animal, Dog, Cat)
- ex01: Brain class (Deep copy)
- ex02: Abstract classes

**Key Concepts:**
- Virtual functions and dynamic dispatch
- Pure virtual functions and abstract base classes
- Implementing interfaces in C++
- Understanding virtual destructors
- Managing deep copies for complex objects

---

### CPP Module 05: Exceptions
**Status:** ✓ Completed

**Topics Covered:**
- Exception handling
- try-catch blocks
- Custom exception classes
- Exception specifications

**Exercises:**
- ex00: Bureaucrat (Basic exceptions)
- ex01: Form class (Exception handling)
- ex02: Concrete forms
- ex03: Intern class

**Key Concepts:**
- Creating and throwing exceptions
- Catching and handling exceptions
- Nested exception classes
- Exception safety and RAII
- Understanding when and how to use exceptions

---

### CPP Module 06: C++ Casts
**Status:** ✓ Completed (Partial)

**Topics Covered:**
- Static cast
- Dynamic cast
- Reinterpret cast
- Const cast
- Type conversion and scalar types

**Exercises:**
- ex00: ScalarConverter (Type conversion)

**Key Concepts:**
- Understanding different types of C++ casts
- When to use each cast type
- Type safety and conversion
- Differences between C-style and C++ casts

---

### CPP Module 07: Templates
**Status:** ⏳ Planned

**Topics Covered:**
- Function templates
- Class templates
- Template specialization
- Non-type template parameters

**Key Concepts:**
- Generic programming in C++
- Template instantiation
- Writing reusable, type-independent code

---

### CPP Module 08: Templated Containers, Iterators, and Algorithms
**Status:** ⏳ Planned

**Topics Covered:**
- STL containers (vector, list, map, etc.)
- Iterators and their categories
- STL algorithms
- Function objects (functors)

**Key Concepts:**
- Understanding and using STL containers
- Iterator patterns and usage
- Applying STL algorithms to containers
- Writing custom iterators

---

### CPP Module 09: STL Advanced
**Status:** ⏳ Planned

**Topics Covered:**
- Advanced STL usage
- Container adapters (stack, queue, priority_queue)
- Associative containers
- Performance considerations

**Key Concepts:**
- Choosing the right container for the job
- Understanding complexity and performance
- Advanced STL techniques

---

## Project Structure

```
cpp_modules/
├── cpp_module_00/          # Basics of C++
├── cpp_module_01/          # Memory and references
│   ├── ex00/              # Each exercise in its own directory
│   ├── ex01/
│   ├── ex02/
│   ├── ex03/
│   ├── ex04/
│   └── ex05/
├── cpp_module_02/          # Operator overloading
├── cpp_module_03/          # Inheritance
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   └── ex03/
├── cpp_module_04/          # Polymorphism
│   ├── ex00/
│   ├── ex01/
│   └── ex02/
├── cpp_module_05/          # Exceptions
│   ├── ex00/
│   ├── ex01/
│   ├── ex02/
│   └── ex03/
├── cpp_module_06/          # Casts
│   └── ex00/
├── cpp_module_07/          # Templates (planned)
├── cpp_module_08/          # STL containers (planned)
└── cpp_module_09/          # STL advanced (planned)
```

Each exercise directory typically contains:
- `*.cpp` - Source files
- `*.hpp` - Header files
- `Makefile` - Build configuration
- `main.cpp` - Test/demonstration code

## Compilation

All modules follow the same compilation standards:

### Requirements
- C++ compiler supporting C++98 standard
- Make utility

### Compilation Flags
```bash
-Wall -Wextra -Werror -std=c++98
```

### Building

Each exercise has its own Makefile. To compile an exercise:

```bash
# Navigate to the exercise directory
cd cpp_module_XX/exYY

# Compile
make

# Run the executable (name varies by exercise)
./program_name

# Clean object files and executable
make clean
```

### Example
```bash
cd cpp_module_01/ex00
make
./zombies
```

### Memory Leak Checking

Many Makefiles include a `vg` target for Valgrind:

```bash
make vg
```

This runs the program with Valgrind to check for memory leaks.

## 42 School Context

### About 42 School

42 is a global education initiative that offers a new way of learning technology: no teachers, no classrooms, students learning from their fellow students (peer-to-peer learning), with a methodology that develops both computing and life skills.

### The CPP Modules

The C++ modules (CPP00-09) are part of the 42 core curriculum, designed to:

1. **Introduce Object-Oriented Programming**: Coming from the C Piscine, students learn OOP concepts
2. **Build Progressive Understanding**: Each module builds on previous concepts
3. **Emphasize Best Practices**: Focus on memory management, code organization, and C++ idioms
4. **Prepare for Complex Projects**: Foundation for larger projects like ft_containers and webserv

### Learning Philosophy

- **Peer Learning**: Students help each other understand concepts
- **Self-Paced**: Complete modules at your own speed
- **Practical Application**: Each exercise reinforces concepts through implementation
- **Norminette Compliance**: Code must follow 42's strict coding standards

### Evaluation

Each module is peer-evaluated by fellow students who:
- Review code quality and correctness
- Check for memory leaks
- Verify adherence to subject requirements
- Test edge cases and error handling

## Key Learning Outcomes

By completing these modules, you will learn:

1. **Object-Oriented Programming**
   - Encapsulation, inheritance, and polymorphism
   - Class design and relationships
   - SOLID principles

2. **Memory Management**
   - Stack vs heap allocation
   - RAII (Resource Acquisition Is Initialization)
   - Avoiding memory leaks and dangling pointers

3. **C++ Specific Features**
   - References and their advantages over pointers
   - Operator overloading
   - Templates and generic programming
   - Exception handling
   - STL and standard algorithms

4. **Best Practices**
   - Orthodox Canonical Form
   - Const correctness
   - Code organization and header guards
   - Compilation and linking

5. **Problem Solving**
   - Designing class hierarchies
   - Implementing common design patterns
   - Debugging complex C++ programs

## Author

**Bamhammed METEHRI** ([mozaBit](https://github.com/mozaBit))

[![LinkedIn](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/bamhammedmetehri)
[![Gmail](https://img.shields.io/badge/Gmail-EA4335?style=for-the-badge&logo=gmail&logoColor=white)](mailto:Bamhammedmetehri@gmail.com)

---

## Additional Resources

### Recommended Reading
- "C++ Primer" by Stanley B. Lippman
- "Effective C++" by Scott Meyers
- "The C++ Programming Language" by Bjarne Stroustrup

### Online Resources
- [cppreference.com](https://en.cppreference.com/) - Comprehensive C++ reference
- [learncpp.com](https://www.learncpp.com/) - Tutorial for learning C++
- [cplusplus.com](http://www.cplusplus.com/) - C++ resources and reference

### 42 Resources
- 42 Intranet - Official subjects and resources
- Peer evaluation - Learn from fellow students' solutions
- 42 Slack/Discord - Community discussions and help

---

**Note**: This repository is for educational purposes. If you are a 42 student, please attempt the exercises yourself before referring to solutions. The learning process is more valuable than the final code.

## License

This project is part of 42 School curriculum. Feel free to use it for learning purposes.
