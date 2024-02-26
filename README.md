# CS210

# Summarize the project and what problem it was solving.
This project is designed to calculate the yearly balance of an investment account. The user can enter an intial deposited amount, monthly deposited amount, years of investment, and yearly interest. The program then takes this information and outputs the yearly total balance if the user were to not deposit any additional monthly amount and if the user does make an additional monthly deposit for the amount of years specified by the user. 

# What did you do particularly well?
In this project, one thing I did well was make use of a header file. I used a Banking.h header file to store all the functions and variables for my program and used the Banking.cpp file to define these functions and variables. They were then implemented in the main.cpp file where they were used to input and output user data. I think this helped to organize my program and be more readable.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
Although I did end up getting accurate outputs for the yearly balances with and without additional monthly deposits, I did have a hard time finding the correct equations to get this information. I had to play around with my variables to see what would get me accurate results. To enhance my code, I would do more research on what the most accurate way is to get this data, which could improve the efficiency of my code and ensure that the user will get the correct results in all situations. In addition, since this was my first time using a header file, I believe with more practice I could have done a more effective job of utilizing the header to better benefit the program. 

# Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
The piece of code I found the most challenging was trying to find an equation for the yearly balances, especially the yearly balance when an additional monthly deposit was made. I had to research ways to find yearly deposits when there are monthly deposits made. I also utilitzed the interest equations given in the project resources. Additionally, I spent a fair amount of time switching and playing around with my program's variables to find a process that produces correct results.

# What skills from this project will be particularly transferable to other projects or course work?
This was my first successful project using the c++ language, and the knowledge I learned throughout this course and project will help prepare me for future classes. This was also my first time using a header file. Learning how to separate functions and variables from the actual, executable code helped me organize my program in a more readable fashion. I think this will be a skill I use a lot in future classes and projects. 

# How did you make this program maintainable, readable, and adaptable?
To make this program maintainable and readable, I made use of a header file. Within the header file, I declared all the private and public functions and variables of my program. Then, in a .cpp file, I defined all of the functions and variables. I then implemented the variables and functions in my main.cpp file where the program was ran. To make my program adaptable, I tried to minimize the use of my main function and created individual functions to do various tasks and produce different results. In doing this, I am able to redefine or reorganize my functions to better fit the needs of the program than if I simply wrote everything in the main function.
