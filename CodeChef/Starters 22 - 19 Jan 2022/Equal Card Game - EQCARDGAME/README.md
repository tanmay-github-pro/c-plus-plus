# Equal Card Game | Problem Code - EQCARDGAME

https://www.codechef.com/START22C/problems/EQCARDGAME

Alice has a standard deck of 52 cards. She wants to play a card game with K−1 of her friends. This particular game requires each person to have an equal number of cards, so Alice needs to discard a certain number of cards from her deck so that she can equally distribute the remaining cards amongst her and her friends.

Find the minimum number of cards Alice has to discard such that she can play the game.

**Note:** It doesn't matter which person gets which card. The only thing that matters is that each person should have an equal number of cards.
***
### **Input Format**
* The first line of input contains a single integer *T*, denoting the number of test cases. The description of *T* test cases follows.
* Each test case consists of a single line of input, containing a single integer *K* — the number of people playing the game (including Alice).
***
### **Output Format**
For each test case, output in a single line the **minimum** number of cards Alice has to discard from her deck such that she can play the game with her friends.
***
### **Constraints**
* 1 ≤ *T* ≤ 51
* 2 ≤ *K* ≤ 52
***
### **Sample Input 1**
4  
3  
50  
2  
14  
***
### **Sample Output 1**
1  
2  
0  
10  
***
### **Explanation**

**Test Case 1:** Alice can discard any single card which will leave her with 51 cards. She can then give her friends and herself 17 cards each.

**Test Case 2:** Alice can discard any 2 cards and then give 1 card each to her friends and herself.

**Test Case 3:** Alice need not discard any card and can give 26 cards each to her friend and herself.

**Test Case 4:** Alice can discard any 10 cards and then give 3 cards each to her friends and herself.
