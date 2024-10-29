# C++ Module 03 - Inheritance

This module is part of a C++ Object-Oriented Programming (OOP) course, focusing on class inheritance and polymorphism. The project includes a series of exercises designed to progressively introduce and apply inheritance principles in C++98.

## Project Overview

The goal is to implement a series of interrelated classes in C++ that simulate different types of "Trap" entities, each with unique abilities, while sharing some core functionality.

### Table of Contents
1. [General Requirements](#general-requirements)
2. [Exercises](#exercises)
   - [Exercise 00: Aaaaand... OPEN!](#exercise-00-aaaaand-open)
   - [Exercise 01: Serena, my love!](#exercise-01-serena-my-love)
   - [Exercise 02: Repetitive work](#exercise-02-repetitive-work)
   - [Exercise 03: Now it’s weird!](#exercise-03-now-its-weird)
3. [Compilation and Testing](#compilation-and-testing)
4. [Submission Guidelines](#submission-guidelines)

## General Requirements

- **Compilation**: Use `c++` with the flags `-Wall -Wextra -Werror -std=c++98`.
- **Naming Conventions**:
  - Classes: `UpperCamelCase`.
  - Files: Match the class name, e.g., `ClapTrap.hpp`.
- **Restrictions**:
  - Only use C++ Standard Library, except C++11 or later.
  - STL containers and algorithms are restricted until Module 08.
  - No `printf`, `alloc`, `free`, or `using namespace <ns_name>`.
- **Memory Management**: Prevent memory leaks, especially when using `new`.
- **File Organization**: All files should include necessary headers and have include guards to avoid double inclusions.

## Exercises

### Exercise 00: Aaaaand... OPEN!

**Objective**: Implement a `ClapTrap` class with basic combat functionalities.

- **Attributes**:
  - `name`: Provided during construction.
  - `hit_points`: Initially set to 10.
  - `energy_points`: Initially set to 10.
  - `attack_damage`: Initially set to 0.
- **Member Functions**:
  - `attack(const std::string& target)`: Inflicts damage to a target.
  - `takeDamage(unsigned int amount)`: Reduces `hit_points`.
  - `beRepaired(unsigned int amount)`: Restores `hit_points`.
- **Additional Requirements**:
  - Messages for actions and constructor/destructor calls.
- **Files**: `Makefile`, `main.cpp`, `ClapTrap.{hpp,cpp}`.

### Exercise 01: Serena, my love!

**Objective**: Create a `ScavTrap` class derived from `ClapTrap`.

- **Updated Attributes**:
  - `hit_points`: 100.
  - `energy_points`: 50.
  - `attack_damage`: 20.
- **Unique Function**: `guardGate()` - indicates `ScavTrap` is in Gate Keeper mode.
- **Requirements**:
  - Custom messages for the `ScavTrap` constructor, destructor, and actions.
  - Proper constructor/destructor chaining.
- **Files**: Includes all files from Exercise 00, plus `ScavTrap.{hpp,cpp}`.

### Exercise 02: Repetitive work

**Objective**: Implement the `FragTrap` class, another `ClapTrap` derivative.

- **Updated Attributes**:
  - `hit_points`: 100.
  - `energy_points`: 100.
  - `attack_damage`: 30.
- **Unique Function**: `highFivesGuys()` - requests a positive "high five".
- **Requirements**:
  - Different constructor, destructor, and action messages.
  - Proper construction/destruction chaining.
- **Files**: Includes all files from previous exercises, plus `FragTrap.{hpp,cpp}`.

### Exercise 03: Now it’s weird!

**Objective**: Create the `DiamondTrap` class, a hybrid of `FragTrap` and `ScavTrap`.

- **Attributes**:
  - `name`: Provided to `DiamondTrap` (with a unique suffix for `ClapTrap`).
  - `ClapTrap::name`: `name` with `"_clap_name"` suffix.
  - `hit_points`, `energy_points`, and `attack_damage`: inherited from `FragTrap` and `ScavTrap`.
- **Unique Function**: `whoAmI()` - displays both `DiamondTrap` and `ClapTrap` names.
- **Requirements**:
  - Ensure `ClapTrap` is only constructed once.
  - Adjust attribute initialization as needed.
- **Files**: Includes all files from previous exercises, plus `DiamondTrap.{hpp,cpp}`.

## Compilation and Testing

To compile the project:
```bash
make
