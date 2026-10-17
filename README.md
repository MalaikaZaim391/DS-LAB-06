# DS-LAB-06
Q1. A messaging application needs to display a given string in reverse order using recursion. Write a
recursive C++ function that prints the characters of a string in reverse without creating another
reversed string.

Q2. A search application needs to display a sequence of search-range values from smallest to largest. Write a
recursive C++ function that takes n, recursively calls itself with n-1, and then prints n.

Q3. A banking application receives a positive integer from the user and needs to calculate the sum of its digits
using recursion. For example, if the input is 345, the output should be 12 because 3 + 4 + 5 = 12. Write a
recursive C++ function to calculate the sum of digits without using loops.

Q4. A savings application starts with Rs. 10 on Day 1. The amount doubles every day, so Day 2 has Rs. 20,
Day 3 has Rs. 40, and so on. Write a recursive C++ function that takes the number of days n as input and
calculates the amount available on Day n. For example, if n = 5, the amount on Day 5 should be Rs. 160.

Q5. A university wants to assign one of three available colors to four connected departments in a
graph. Any two directly connected departments must have different colors. Write a backtracking
program to assign colors to all vertices, or report that no valid coloring exists.
Use the following undirected graph:
* Vertices: A, B, C, D
* Edges: A–B, A–C, B–C, B–D, C–D
* Available colors: Red, Green, Blue

Q6. A robot must travel from the top-left cell to the bottom-right cell of a 4 x 4 maze. A value of 1 represents
an open cell, while 0 represents a blocked cell. The robot can move only right or down. Use backtracking to
find a valid path.

Q7. A student has five numbers: {2, 3, 5, 6, 8}. The student must select a subset whose sum is exactly 9. Each
number can be selected at most once. Use backtracking to find and display one valid subset. If no subset
exists, display an appropriate message.

Q8. A security application has four distinct characters: A, B, C, and D. It needs to generate every possible
arrangement of these characters. Write a backtracking program that prints all permutations without missing
any arrangement.

Q9. A puzzle game must fill empty cells of a 4 x 4 Sudoku grid. Each row, each column, and each 2 x 2 box
must contain numbers 1 to 4 without repetition. Use backtracking to solve the puzzle.

Initial grid (0 represents an empty cell):

1 0 0 4

0 4 1 0

0 1 4 0

4 0 0 1


Q10. A word-search game contains a character grid. Determine whether the word &quot;CAT&quot; exists by moving
horizontally or vertically to adjacent cells. A cell cannot be used more than once in the same word path.
