Chapter Review
--------------

1.  **What are the modules of C++ programs called?**

    *Answer:*  
    Modules in C++ are called functions.

2.  **What does the following preprocessor directive do?**

    ```cpp
    #include <iostream>
    ```

    *Answer:*  
    The preprocessor directive above provides facilities for handling input and
    output in C++ like cin and cout objects. These objects are examples of
    istream and ostream classes which are defined in iostream file.

3.  **What does the following statement do?**

    ```cpp
    using namespace std;
    ```

    *Answer:*  
    The using directive makes all the names in the std namespace available.

4.  **What statement would you use to print the phrase `Hello, world` and then**
    **start a new line?**

    *Answer:*  
    ```cpp
    std::cout << "Hello, world\n";
    ```

5.  **What statement would you use to create an integer variable with the name**
    **`cheeses`?**

    *Answer:*  
    ```cpp
    int cheeses;
    ```

6.  **What statement would you use to assign the value 32 to the variable cheeses?**

    *Answer:*  
    ```cpp
    int cheeses;
    cheeses = 32;
    ```

7.  **What statement would you use to read a value from keyboard input into the**
    **variable `cheeses`?**

    *Answer:*  
    ```cpp
    std::cin >> cheeses;
    ```

8.  **What statement would you use to print `We have X varieties of cheese,` where**
    **the current value of the `cheeses` variable replaces `X`?**

    *Answer:*  
    ```cpp
    std::cout << "We have " << cheeses << " varieties of cheese\n";
    ```

9.  What do the following function prototypes tell you about the functions?

    ```cpp
    int froop(double t);
    void rattle(int n);
    int prune(void);
    ```

    *Answer:*  
    `froop` is a function that returns an int value and accepts an argument of type
    `double`.  
    `rattle` is a function that does not return a value and accepts an argument of
    type `int`.  
    `prune` is a function that return an `int` value and does not accepts argument.

10. **When do you not have to use the keyword return when you define a function?**

    *Answer:*  
    The `return` keyword is not used when the function does not return a value to
    the calling function.

11. **Suppose your `main()` function has the following line:**
    
    ```cpp
    cout << "Please enter your PIN: ";
    ```

    **And suppose the compiler complains that `cout` is an unknown identifier. What**
    **is the likely cause of this complaint, and what are three ways to fix the**
    **problem.**

    *Answer:*  
    Either the `<iostream>` header file is not included and the std namespace is
    not used that causes the compiler complains that `cout` is an unknown
    identifier.
    
    Three ways to fixed this is the following:
    
    a) Include the header file `iostream` and fully qualify the cout object using
       the `std namespace`.

       ```cpp
       #include <iostream>
       int main()
       {
           std::cout << "Please enter your PIN: ";
       }
       ```

    b) Include the header file `iostream` and use the `std namespace`.

       ```cpp
       #include <iostream>
       using namespace std;
       int main()
       {
           cout << "Please enter your PIN: ";
       }
       ```

    c) Include the header file `iostream` and use the `std namespace` inside the
       function.

       ```cpp
       #include <iostream>
       int main()
       {
           using namespace std;
           cout << "Please enter your PIN: ";
       }
       ```
