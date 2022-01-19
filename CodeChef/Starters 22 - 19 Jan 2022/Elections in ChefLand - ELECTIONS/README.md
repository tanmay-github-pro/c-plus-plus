# Elections in ChefLand | Problem Code - ELECTIONS

https://www.codechef.com/START22C/problems/ELECTIONS

There are 101 citizens in Chefland. It is election time in Chefland and 3 parties, A, B, and C are contesting the elections. Party A receives X<sub>A</sub> votes, party B receives X<sub>B</sub> votes, and party C receives X<sub>C</sub> votes.

The constitution of Chefland requires a particular party to receive a clear majority to form the government. A party is said to have a clear majority if it receives strictly greater than 50 votes.

If any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.

### **Input Format**
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains 3 space-separated integers — X<sub>A</sub>, X<sub>B</sub>, and X<sub>C</sub>.

***

### **Output Format**
For each test case, if any party has a clear majority, print the winning party (**A**, **B** or **C**). Otherwise, print **NOTA**.

You can print each letter of the string in any case (upper or lower) (for instance, strings Nota, nOtA and notA will be considered identical).

***

### **Constraints**
1 ≤ T ≤ 500  
0 ≤ X<sub>A</sub>, X<sub>B</sub>, X<sub>C</sub> ≤ 101  
X<sub>A</sub> + X<sub>B</sub> + X<sub>C</sub> = 101  

***

### **Sample Input 1**
3  
80 19 2  
20 55 26  
50 1 50  

***

### **Sample Output 1**
A  
B  
NOTA  

***

### **Explanation**

**Test Case 1:** Party A has received 80 votes, which is strictly greater than 50.

**Test Case 2:** Party B has received 55 votes, which is strictly greater than 50.

**Test Case 3:** None of the parties have received strictly more than 50 votes.
