<<doc
Name:Rajkumar Tulshidas Ahire
Date:02-02-2024
Description:Read 'n' and generate a pattern given below( number increments from left to right)
Sample input:Enter the number : 4
Sample Output: 1
               1 2
               1 2 3 
               1 2 3 4
doc

#!/bin/bash
read -p "Enter the number: " num   # number read from the user

for row in `seq $num`              # loop for number of row
    do
        for col in `seq $row`      # loop from number of colomns
        do
            echo -n "$col "        # to print the colomn value
        done
    echo                           # to get the new line
done
