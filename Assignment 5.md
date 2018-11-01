Part 1:

-Show that the square root of 2 is irrational
Assume that √2 = a/b
a and b are whole numbers | b != 0
a = dm + 1 | b = dm + 1 | a and b cannot be even
a^2 = 2 · b^2 <=> √2 = a/b | Square of a is even. 2 times b^2
a != dm + 1 | a cannot be odd, odd times odd = odd.
Proof by contradiction.

-If n = 25, 100, or 169, then n is a perfect square and is the sum of two perfect squares.
n = 25|√25 = 5|5 x 5 = 25||√16 = 4|4 x 4 = 16|√9 = 3|3 x 3 = 9|16 + 9 = 25
n = 100|√100 = 10|10 x 10 = 100||√64 = 8|8 x 8 = 64|√36 = 6|6 x 6 = 36| 64 + 36 = 100
n = 169|√169 = 13|13 x 13 = 169||√144 = 12|12 x 12 = 144|√25 = 5|5 x 5 = 25| 144 + 25 = 169
Proof by exhaustion.

- The sum of two odd integers is even.
  Hint: By definition, even integers can be expressed as 2n,
  thus odd integers can be expressed as 2n + 1
even = 2n | odd = 2n + 1
(2n + 1) + (2m + 1) = 2n + 2m + 2 | All integers divisible by 2
2n + 2m + 2 = even | Sum of two odd integers is even.
Direct proof.

- The sum of an even integer and it's square is even.
even = 2n | odd = 2n + 1
2n + 2n^2
2n + (2n)(2n) = 4n^2 + 2n | All integers divisible by 2
4n^2 + 2n = even | Sum of an even integers and it's square is even.
Direct proof.

- If n squared is odd, then n is odd
if n is even, then n^2 is even
n = 2k
n^2 = 4k^2 = 2(2k^2)
If n^2 is odd, then n is odd.
Proof by contraposition.

Part 2:

- Prove by induction that 1 + 5 + 9 + ... + (4n-3) = n(2n-1)
Base Case: Assume n = 1
(4(1)-3) = 1(2(1)-1)
(4-3) = 1(2-1)
1 = 1(1)
1 = 1
True
Assume k = true
Show k = true
1 + 5 + 9 + ... + (4k-3) + (4(k + 1) - 3) = (k + 1)(2(k + 1) - 1)
1 + 5 + 9 + ... + (4k-3) + (4k + 1) = (k + 1)(2k + 1)
If k = true for (1 + 5 + 9 + ... + (4k-3) then
k(2k - 1) + (4k + 1) = (k + 1)(2k + 1)
2k^2 - k + 4k + 1 = 2k^2 + k + 2k + 1
2k^2 + 3k + 1 = 2k^2 + 3k + 1
Proven for n and (n + 1)

- Prove that for any positive integer number n, n^3 + 2n is divisible by 3
Assuming n > 0
Base Case: Assume n = 1
1^3 + 2(1)
1 + 2
3/3 possible
Assume k = true
Show (k + 1) = true
1, 2 , 3, ... , k, (k + 1) => (k + 1)^3 + 2(k + 1)
k^3 + 3k^2 + 3k + 1 + 2k + 2
(k^3 + 2k) + 3k^2 + 3k + 3
3m + 3k^2 + 3k + 3
3(m + k^2 +k + 1)
If it can be multiplied by 3 then it can be divided by 3 as well.

-Prove that for n >= 1, 9^n − 1 is divisible by 8 for all non-negative integers Hint: 4^(3+1) = 4 * 4^3 Hint: If 9^n - 1 = 8m, then 9^n = 8m + 1
Base Case: Asuume n = 1
9^1 - 1
9 -1
8/8 possible
prove 1, 2, 3, ... , n => 9^n - 1 * 8m
1, 2, 3, ... , n, n + 1 => 9^(n + 1) - 1 = 8m
9^n * ( -1
(8m + 1) * 9 -1
72m + 9
8(9m + 1)
It can be divided by 8
