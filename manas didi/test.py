dict = {
        1:  "Write a code to check whether a string is palindrome or  not",
        2:  "WAP which will remove a given chracter from string",
        3:  "WAP to find first non-repeated character",
        4:  "WAP to find out the longest palndrome in a string",
        5:  "WAP to count occurence of a given character in the string",
        6:  "WAP if two string are___",
        7:  "In an array 1-100 number are stored, one number is missing. How do you find it",
        8:  "In an array 1-100 exactly 1 number is duplicate. How do you find it",
        9:  "Given two array 1,2,3,4,5 and 2,3,1,0,5. Find which no is not present in sencond array",
        10: "How to find the 1st and 2nd highest  and lowest number in array",
        11: "How to find all pairs in an array of integers whose sum is equal to the given number",
        12: "How to remove duplicate elements from the array",
        13: "WAP to check whether a number is power of 2 or not",
        14: "WAP to check whether a number is palindrome or not",
        15: "WAP to check whether an integer is armstrong number or not",
        16: "WAP to find prime and consonent number",
        17: "WAP to compute nth fibonacci number in both iterative and recursive version",
        18: "How to check if a number is binary or not",
        19: "WAP to reverse and integer",
        20: "WAP to find the sum of digits of a number using recursion",
        21: "WAP to swap two numbers using 3rd variable",
        22: "WAP to add two numbers without using arithmetic operator",
        23: "WAP to find fibonacci series of nth no",
        24: "WAP to implement Quick sort",
        25: "WAP to implement Merge sort",
        26: "WAP to implement Insertion sort",
        27: "WAP to implement Selection sort",
        28: "WAP to implement Bubble sort",
        29: "WAP to implement radix sort",
        30: "WAP to implement linear search",
        31: "WAP to implemant binary search",
        32: "How a number is vowel or consonent",
        33: "How to check whether a number is small letter, capital letter, a number or  special symbol",
        34: "WAP to reverse an array",
        35: "WAP to print duplicate character from string",
        36: "WAP to check if a string contains only digits",
        37: "WAP to count the no of vowel and consonent in a stirng",
        38: "WAP to reverse the string of an integer without using predefined method",
        39: "WAP to implement country sort",
        40: "WAP to change an interge to string and string to integer",
        41: "WAP to find all permutation of string",
        42: "WAP to find prime factors of a given number",
        43: "WAP to find factorial",
        44: "WAP to check whether a numner is positive or negative",
        45: "WAP to check whether triangle is right angled triangled or not",
        46: "WAP to calculate the square root of a given number",
        47: "WAP to fin the cube root of a given number",
        48: "WAP to check whether a number is even or odd without using arithmetic operator",
        49: "WAP to check whether a year is leap year or not",
        50: "WAP to find whether a number is perfect no or not",
        51: "WAP to implement floyd's triangle algorithm",
        52: "WAP to implement pascal triangle algorithm",

}

for i in range(1,101):
    with open("{}.c".format(i),'w') as file:
        file.write("// "+dict[i])