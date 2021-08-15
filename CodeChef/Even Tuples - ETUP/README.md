# Even Tuples   |   Problem Code - ETUP
You are given an array A consisting of N integers and Q queries. Each query is described by two integers L and R. For each query, output the number of tuples  
(i , j, k) such that  
L ≤ i < j < k ≤ R and  
A<sub>i</sub> + A<sub>j</sub> + A<sub>k</sub> is an even number.

**Input Format**
* The first line contains an integer T, the number of test cases. Then the test cases follow.  
* The first line of each test case contains two integers N and Q.
* The next line contains N integers A<sub>1</sub>,…,A<sub>N</sub>.
* Then Q lines follow, each containing two integers L<sub>i</sub> and R<sub>i</sub>.  

**Output Format**  
For each query, output the number of tuples possible as mentioned in the problem statement.  

**Constraints**
* 1 ≤ T ≤ 10<sup>3</sup>
* 1 ≤ N, Q ≤ 10<sup>5</sup>
* 0 ≤ A<sub>i</sub> ≤ 10<sup>6</sup>
* 1 ≤ L<sub>i</sub> ≤ R<sub>i</sub>≤N
* The sum of N over all test cases does not exceed 10<sup>6</sup>.
* The sum of Q over all test cases does not exceed 10<sup>5</sup>  

**Sample Input 1**
1  
6 3  
1 2 3 4 5 6  
1 3  
2 5  
1 6  

**Sample Output 1** 
1  
2  
10  

**Explanation**  
* For the first query, we can choose (1, 2, 3) since A<sub>1</sub> + A<sub>2</sub> + A<sub>3</sub> = 6 is an even number.
* For the second query, we can choose (2 , 3, 5) since A<sub>2</sub> + A<sub>3</sub> + A<sub>5</sub> = 10 is even, and (3, 4, 5) since A<sub>3</sub> + A<sub>4</sub> + A<sub>5</sub> = 12 is even.