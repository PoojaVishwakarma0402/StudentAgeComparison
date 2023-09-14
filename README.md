# StudentAgeComparison

# Student Age Comparison

This C++ program demonstrates a simple class called `Student` to input and compare the ages of three students. It calculates and displays the maximum age among them.

## Code Description

The code defines a `Student` class with the following attributes and methods:

- `stdname[20]` - A character array to store the student's name (up to 20 characters).
- `age` - An integer variable to store the student's age.
- `scan()` - A method to input the student's name and age from the user.
- `show()` - A method to display the student's name and age.

In the `main()` function:

1. Three `Student` objects `p`, `q`, and `r` are created using dynamic memory allocation (new keyword).
2. The `scan()` method is called for each student object to input their names and ages.
3. The program compares the ages of `p`, `q`, and `r` to find the maximum age.
4. The maximum age is then displayed as output.

## How to Run

To compile and run this program, you can use a C++ compiler like g++:
g++ main.cpp -o student_age_comparison
./student_age_comparison


## Example Output
Enter name
John Doe
Enter age
25
Enter name
Jane Smith
Enter age
30
Enter name
Bob Johnson
Enter age
28

Max age is 30
