# atcc-cpp
<h3>I attend(ed) (2019-'20) a C++ programming class at a local career center. This repository is to hold all of my files as a backup, and as an online resource for other students to see my work and grab explantion. I hardly document my code, so sorry if nothing makes sense, and another sorry for my old code being an absolute dumpster fire. Here's another sorry because why not? - Kry</h3>

---

## Ease Of Use Header:
* /assignments/ease/of_use.h

    I will be putting functions that I find useful. Usually these are functions that have weird functionality, such as a system-independent clear or a to-lowercase function.

#### Clear
* clear() -> void

    Clears the terminal screen.
    Uses directives to decide the system type, and runs a system command based on the type.
    Unix-based systems will use system("clear") while DOS-based systems will use system("cls").

#### To Lowercase
* toLower(string input) -> string

    Converts a string to lowercase. Honestly this snippet came from StackOverflow, all hail SO.

#### Two Precision (aka $$$)
* twoPrecision(float input) -> float (#.##)

    This casts the input as an integer, and then works some voodoo magic and converts it to a double-precision decimal value. In my class we do a lot with money, and of course money rounds to the hundredths place. Dolla dolla bills y'all.

---

## Assignments:
#### Base Menu Program
* baseMenu.cpp
    
    This program is the foundation to a later menu program with more features. You wouldn't believe the strange errors I got from making the receipt portion of the program. It still haunts me.

#### Basic Car Payment Calculator Program
* carPayment.cpp

    Calculates how much a monthly payment would be depending on the principal value of the loan and the amount of loan years.
    Please don't use this to actually calculate your car payments.
    That's like using my [Password Generator](https://repl.it/@KryskZ09/Random-Password-Generator) for actual passwords.
    If you want even more janky Python code from when I started programming in July/August 2018, check out my [Login Generator](https://repl.it/@KryskZ09/Login-Generator) or my Old-Python-Scripts on GitHub.

#### Data Type Example Program 
* dataType.cpp

    A test for different data type inputs, such as char, float, int and string. Also includes an out-of-lesson if/else block.

#### Grade Calculator Program
* gradeCalc.cpp

    Calculates the gradepoint average and the grade character from the percentage of four class quarters. Uses if, else if, else blocks to decide the grade character.

#### Halloween Ascii Art Program
* halloweenAscii.cpp

    Incorporates ascii art from [AsciiArt](https://asciiart.website) as a repository. The formatting was ironically hell. This was also the first file that spurred me to create the of_use header. The spooky backslash strikes again! BOO!

#### Simple Math Calculator Program
* simpleMath.cpp

    As the name says, a simple calculator that inclues adding, subtracting, multiplying and dividing. Don't expect much from this, hell don't expect correct math.

#### Template Test Program
* tempTest.cpp

    A test file to see if the class remembered what the template was from ./notes/fileTemp.cpp.

#### User Input Program
* userInput.cpp

    First name and last name user input to introduce the usage of cout/cin and how variables can be used as output.

---

## Notes:
#### Introductory Hello World Program 
* helloWorld.cpp
    
    The classic first program of a beginner programmer. Hello World, everybody!

#### If, Else If, Else Usage
* ifElse.cpp
    
    Example usages of If, Else If, Else blocks.

#### C++ File Template
* fileTemp.cpp
    
    The file template of a starting C++ file. Includes iostream and namespace std.

#### While Loop Usage
* whileLoop.cpp

    The example usage of a redpilled while loop. Its purpose was to show how loops keep running until a condition is changed, but inevitably it was introduced to Morpheus. Welcome to reality, ~~Neo~~ the poor soul who's reading this.
