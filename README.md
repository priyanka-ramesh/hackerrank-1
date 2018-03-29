# [![HackeRank](https://hrcdn.net/hackerrank/assets/brand/h_mark_sm-30dc0e0cbd2dded63b294819ff853a90.svg)](https://www.hackerrank.com) HackerRank

HackerRank is a great site to learn, improve, play with your programming skills.

## Solutions

* [C++](cpp/)
* [Python](python/)
* [Mathematics](math/)
* [Algorithms](algo/)
* [Data Structures](data/)
* [ProjectEuler+](projecteuler/) (See [here](https://github.com/rene-d/math/tree/master/projecteuler) my solutions of [Project Euler](https://projecteuler.net/))

## Usage and tools

### Requirements

- [Python 3.6](https://www.python.org) and some libraries ([numpy](http://www.numpy.org), [requests](http://html.python-requests.org))
- [CMake](https://cmake.org)
- Modern gcc or clang that come with macOS or Linux. Under Windows, use [WSL](https://docs.microsoft.com/en-us/windows/wsl/install-win10) or [MinGW](http://www.mingw.org).
- [Haskell](https://www.haskell.org)  

### Compilation

    mkdir build
    cd build
    cmake ..
    make

### Tests

    cd build
    ctest [-R filter]

It will download the challenge testcases and run solution programs.

A solution can be tested solely with `runtest.sh -t challenge-name [-n test-number]` in its build subdirectory.

### Tools

- `init.py` creates a new file for a given challenge based on the HackerRank template. Default language is Python.

- `runtest.sh` is the script used by CTest to run the solution.

- `compare.py` aims to fairly compare the program output with the except one. It is necessary since some challenges use decimal numbers : we cannot simply use `diff -qw`.

- `tc2.py` can be used to download bought testcases. Copy and paste the download link.

- `hackos.py` lists the free testcases. It should be used in conjunction with a webbrowser. Follow instructions in the source code.

### IDE

[Visual Studio Code](https://code.visualstudio.com) is a great free IDE. Some configuration file are provided.

