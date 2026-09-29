# clsString

A C++ string utility class built with Object-Oriented Programming (OOP) principles.

> **Note:** This is my **first project using OOP**. I built it while learning the core concepts (classes, encapsulation, static and non-static members, overloading, properties), so feedback and suggestions are very welcome.

## Features

**Case operations**
- Uppercase / lowercase the first letter of each word
- Uppercase / lowercase the whole string
- Invert the case of every letter

**Counting**
- Count capital letters, small letters, or all letters
- Count a specific letter (with or without case matching)
- Count vowels
- Count words

**Printing**
- Print the first letter of each word
- Print all vowels
- Print each word on its own line

**Manipulation**
- Split a string by a delimiter
- Join strings with a delimiter
- Trim left, right, or both sides
- Reverse the words in a string
- Replace a word in a string
- Remove punctuation

## OOP concepts used

- **Encapsulation:** the string is stored in a private member and accessed through a `Value` property.
- **Static and non-static versions:** every function can be called on a string directly (`clsString::UpperAllString("abc")`) or on an object (`S.UpperAllString()`).
- **Function overloading:** the same function name is used for the static and the object versions.
- **Constructors:** a default constructor and a parameterized one.

## Usage

```cpp
#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
    clsString S("  hello oop world  ");

    S.Trim();
    S.UpperFirstLetterOfEachWord();
    cout << S.Value << endl;                        // Hello Oop World

    cout << S.CountWords() << endl;                 // 3
    cout << S.CountVowels() << endl;                // 5

    // Static usage, no object needed
    cout << clsString::ReverseWordsInString("one two three") << endl;   // three two one

    return 0;
}
```

## Project structure

```
clsString/
├── clsString.h    # the class
├── main.cpp       # a test program that uses every function
└── README.md
```

## Requirements

- Visual Studio (the class uses `__declspec(property)`, which is a Microsoft extension)
- C++11 or later

## How to run

1. Clone the repository.
2. Open the files in a Visual Studio C++ project.
3. Build and run `main.cpp`.

## What I learned

- Designing a class with private data and public methods
- Providing both static and instance versions of the same functionality
- Working with `std::string` and `std::vector`
- Testing a library through a separate `main` file

## Future improvements

- Pass strings by `const` reference instead of by value
- Add input validation
- Make the code portable to GCC and Clang by replacing `__declspec(property)` with plain getters and setters

## License

Free to use for learning purposes.
