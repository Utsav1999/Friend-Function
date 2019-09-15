# Friend-Function
Friend function in C++
This c++ code is for friend function. friend function is a function using which we can access both the private and protects members of a class in which the friend function is declared. We can also create friend classes.
In this code we have a class named number in which we have a private variable m, a public method mean and a friend function display. through the friend function we are passing a pointer which will point the number class type objects.
In the main() method we declaring a number class object and for this we are calling the mean method and after this we are passing the object as a parameter of display function. So the pointer now is pointing the object. Now we call the friend function display outside the number class and print the mean value m of the object by pointer.m.
pointer.m : the pointer points to the object and inside object the mean value is there in m, so pointer.m will print the mean of object.
