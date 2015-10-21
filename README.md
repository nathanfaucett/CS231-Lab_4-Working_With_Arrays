CS231 Lab #4: Working With Arrays  
#####

For this lab assignment, you will be implementing a series of simple functions which involve working with arrays.  Write a C++ program that will implement and test the three functions described below:

A function that reads ten integer values (entered by the user at the keyboard) into an array, determine the smallest and largest value among those numbers, and print all the array elements and also the smallest and largest elements.
A function that will read twenty integer values (entered by the user at the keyboard) into two ten-element arrays, and then loop through both arrays one element at a time, adding and multiplying the corresponding values together.  Save the results into a third and fourth ten-element array, one to store the sums and the other to store the products.  Finally, print all the values in all four arrays.
A function that will read ten integer values (entered by the user at the keyboard) into an array, prompt the user to specify how many times it should right rotate the array elements in a cyclical fashion, and then perform the rotation and output the resulting rotated array.  For example, if the array elements are ...

 1,  2,  3,  4,  5,  6,  7,  8,  9, 10

... and the number of rotations is given as 3, then the array should look like ...

 8,  9, 10,  1,  2,  3,  4,  5,  6,  7

... after the rotation.
Remember, these three routines should be implemented as functions!  The main() function in your program should contain only three lines of code: one call to each of the three functions described above.  These functions do not need to accept any arguments or return any values (since they will print their output to the screen), so they should use a return type of void.
