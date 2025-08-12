# Hasan Zawahra

## email: hszawa1985@gmail.com

### Problem Statement

Given a number of days n (1 ≤ n ≤ 10), print all possible sequences of daily activities using the set:
{"Swimming", "Running", "Football"}\
subject to the constraint that no two consecutive days have the same activity.

### Input

A single integer n (1 ≤ n ≤ 10).

### Output

* Print each valid schedule on its own line, with activities separated by a single space.
* After listing all schedules, print a final line: **COUNT: X** where **X** is the total number of schedules
generated.

### Example

**Input**\
2\
\
**Valid schedules**\
\
Football Running\
Football Swimming\
Running Football\
Running Swimming\
Swimming Football\
Swimming Running\
COUNT: 6

## The number of valid schedules formula

In the first day, the number of possible activities is always 3, any other day will only have 2 options.

So the number of combinations is the product of 3 and 2 to the power of the remaining days.\
**3 * pow(2,n-1)**
