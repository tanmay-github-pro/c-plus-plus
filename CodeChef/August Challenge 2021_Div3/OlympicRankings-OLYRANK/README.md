# Olympics Ranking | Problem Code - OLYRANK

In Olympics, the countries are ranked by the **total number of medals won**. You are given six integers ***G<sub>1</sub>, S<sub>1</sub>, B<sub>1</sub>, and G<sub>2</sub>, S<sub>2</sub>, B<sub>2</sub>***, the number of gold, silver and bronze medals won by two different countries respectively. Determine which country is ranked better on the leaderboard. It is guaranteed that there will not be a tie between the two countries.

***

**Input Format**
* The first line of the input contains a single integer ***T*** denoting the number of test cases. The description of ***T*** test cases follows.

* The first and only line of each test case contains six space-separated integers ***G<sub>1</sub>, S<sub>1</sub>, B<sub>1</sub>, and G<sub>2</sub>, S<sub>2</sub>, B<sub>2</sub>***.

***

**Output Format**  

For each test case, print "1" if the first country is ranked better or "2" otherwise. Output the answer without quotes.

***

**Constraints**

* 1 ≤ ***T*** ≤ 1000
* 0 ≤ ***G<sub>1</sub>, S<sub>1</sub>, B<sub>1</sub>, G<sub>2</sub>, S<sub>2</sub>, B<sub>2</sub>*** ≤ 30

***

**Subtasks**

***Subtask #1 (100 points):*** Original constraints

***

**Sample Input 1** 

3  
10 20 30 0 29 30  
0 0 0 0 0 1  
1 1 1 0 0 0

***

**Sample Output 1**
1
2
1

***

**Explanation**

***Test case 1:*** Total medals for the first country are **10 + 20 + 30 = 60** and that for the second country are **0 + 29 + 30 = 59**. So the first country is ranked better than the second country.

***Test case 2:*** Total medals for the first country are **0 + 0 + 0 = 0** and that for the second country are **0 + 0 + 1 = 1**. So the second country is ranked better than the first country.