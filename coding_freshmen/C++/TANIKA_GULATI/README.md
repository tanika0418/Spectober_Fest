# Problem 1: MAJORITY_ELEMENT
Given an array nums of size n, return the majority element.

# Problem Explanation 🚀
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

# Your logic 🤯
Approach: Initialize count with zero. Initialize max with first element of array and increment count by 1. Now, if next element is equal to max, increment the count by 1, else decrement. Whenever the count becomes zero, element at that index in array traversal is assigned to max and same procedure is followed.

# Time Complexity and Space Complexity
Time Complexity -> O(n)
Space Complexity -> O(1)


# Problem 2: SORT_01
You are given an array of 0s and 1s in random order. Sort the array.

# Problem Explanation 🚀
Segregate 0s on left side and 1s on right side of the array.

# Your logic 🤯
Approach: Initialize start and end positions of the array. Increment start if array element at start is 0. If it is 1, swap the elements at start and end, and decrement end by 1. Repeat the steps until start is less than end.

# Time Complexity and Space Complexity
Time Complexity -> O(n)
Space Complexity -> O(1)


# Problem 3: ROMAN_TO_DECIMAL
Given a roman numeral, convert it to an integer

# Problem Explanation 🚀
The roman number system consists of 7 main symbols which are I, V, X, L, C, D, M which represent 1, 5, 10, 50, 100, 500, 1000 integer numbers respectively. Based on these roman symbols we can construct any integer number.

# Your logic 🤯
Approach: Using hashmap, which maps keys to values forming a pair. In this case the roman characters are mapped to their corresponding integer equivalents. Iterating through the string, if current character value is less than next character value, subtract the two and add their answer to result variable, increment the loop variable and continue, otherwise add the current character value to result and proceed with the loop.

# Time Complexity and Space Complexity
Time Complexity -> O(n)
Space Complexity -> O(1)


# Problem 4: ANAGRAMS
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

# Problem Explanation 🚀
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

# Your logic 🤯
Approach: Brute force, i.e, by comparing each character of 1st string to each character of 2nd string. If each character of 1st string is present in the 2nd string exactly once, the strings are anagram otherwise false.

# Time Complexity and Space Complexity
Time Complexity -> O(n^2)
Space Complexity -> O(1)