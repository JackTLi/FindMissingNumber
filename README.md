# FindMissingNumber
Given a list of consecutive numbers (In any order) that is missing one, find the missing number

This solutions works in O(n) time.

We go through each element of array, and keep track of the max element and the min element as the bounds for the consecutive numbers.
Also, we keep track of the sum of all of the elements in the array.

Then, knowing the max and the min elements of the array, we can find the expected sum of the elements (assuming all elements are present and consecutive)
by using the mathematical formula for finding the sum of 1...k =  k * ( k + 1) / 2

Then, the  expected sum is (1 + 2 + 3 + ... + min + ... + max) - (1 + 2 + 3 + ... + min) + min

If we subtrack this expected sum by the actual sum, then we will receive our missing number.
