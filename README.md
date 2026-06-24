# Competitive Programming SOC - Semi-Term Report

## Overview
This repository contains my progress and solutions for the first four weeks of the Competitive Programming SOC. The journey so far has transitioned from foundational CS101 concepts to advanced problem-solving techniques, culminating in a steep but rewarding learning curve with Dynamic Programming.

Below is a week-by-week breakdown of my focus areas, key takeaways, and the problems solved along with their core approaches.

---

## Week 1: Foundations and CS101 Concepts
**Summary:** This week served as a warm-up, focusing on core algorithmic building blocks. The questions were direct and could be solved easily for this week. This felt like an extension to cs101.

**Questions Solved & Main Approaches:**
*   **Petya and Strings:** String manipulation using case conversion and lexicographical comparison.
*   **Lucky Sum of Digits:** A greedy approach to find the minimum combination of 4s and 7s.
*   **Beautiful Year:** Brute-force simulation checking for unique digits in consecutive years.
*   **George and Accommodation:** Simple mathematical conditional checks.
*   **Translation:** String reversal and equality verification.
*   **Stones on the Table:** Iterative counting of adjacent duplicate characters.
*   **Queue at the School:** Simulating state changes and array swaps over time.
*   **Books:** A two-pointer/sliding window technique to maximize elements within a sum limit.
*   **Flipping Game:** Applied Kadane's Algorithm to find the maximum contiguous subarray of 0s.
*   **Regular Bracket Sequence:** Used a stack/counter to track and validate valid bracket pairs.

---

## Week 2: Data Structures, Sorting, and Optimization
**Summary:** A noticeable step up in complexity with 15 problems. The focus shifted toward structural efficiency to avoid Time Limit Exceeded (TLE) errors. I learnt about hashing ,maps as a data structure and i learnt the approach towards frequency arrays.

**Questions Solved & Main Approaches:**
*   **Points and Minimum Distance:** Sorting coordinates to minimize the distance between consecutive points.
*   **Basketball Together:** Sorting the array and applying greedy logic to form the minimum required teams.
*   **Ian and Array Sorting:** Analyzing parity and simulating operations from end to end to maintain a non-decreasing order.
*   **Train and Queries:** Storing the first and last occurrences of stations in a Hash Map for fast lookups.
*   **Collecting Game:** Combining sorting with prefix sums to simulate cumulative score acquisition.
*   **Yarik and Musical Notes:** Leveraging mathematical properties and Hash Maps to track valid exponents.
*   **Nearly Shortest Repeating Substring:** Finding divisors of the string length and verifying substring periods.
*   **Arrow Path:** Implementing Graph Traversal (BFS/DFS) on a 2D grid with forced directional moves.
*   **Equalize:** Sorting, removing duplicates, and using a sliding window to find the longest valid sequence.
*   **Permutation of Rows and Columns:** Observing matrix invariants and validating states under row/column swaps.
*   **Magnitude (Easy Version):** Using prefix sums and dynamically tracking minimum/maximum bounds.
*   **Subsequence Addition (Easy Version):** Sorting the array and verifying if the current element is bounded by the running prefix sum.
*   **Greetings:** Using a Fenwick tree or counting inversions to track intersecting paths.
*   **Monsters Attack!:** Utilizing prefix sums to check if total monster health outpaces bullet damage across distances.
*   **Binary Path:**

---

## Week 3: Mastering Greedy Algorithms
**Summary:** This 15-problem set was completely centered around Greedy Algorithms. The biggest challenge wasn't necessarily coding the solutions, but proving the "greedy choice property" before implementing it. I explored greedy applications in game theory, array optimization, and constructive strings. This was the week when i had to really think hard and dry running the code before uploading. I think there was a steeper gap in week 2 and 3 which meant for us to know things beforehand.

**Questions Solved & Main Approaches:**
*   **Stone Game:** Greedy game theory where players make optimal local choices to maximize their score.
*   **Odd Subarrays:** Iterating and greedily slicing the array at the earliest valid point to maximize subarray count.
*   **Max Plus Size:** Array iteration focusing on aggressively picking optimal elements based on index parity.
*   **Thorns and Coins:** Iterating through the path and stopping at the first insurmountable obstacle.
*   **Ugu:** Constructive string manipulation to fix inversions with the minimum number of operations.
*   **Mocha and Red and Blue:** Greedily filling unpainted squares to alternate colors and avoid adjacent matches.
*   **Test of Love:** Simulating jumping/swimming by making the furthest possible valid jump at each step.
*   **Santa Claus and Candies:** Distributing items incrementally starting from 1 to maximize distinct counts.
*   **Maximum Sum:** Sorting the array and greedily choosing between removing the two smallest or the single largest element.
*   **Joysticks:** Simulating the charging process by greedily plugging in the device with the lower battery.
*   **Boring Day:** A greedy sliding window approach to partition the array into valid segments.
*   **Even-Odd Game:** Sorting the array descending and greedily picking the largest available number (or denying the opponent).
*   **Creating the Contest:** Finding the longest contiguous subsegment that satisfies the multiplication constraint.
*   **Two Large Bags:** Couldnt solve
*   **It All Went Sideways:** Couldnt solve

---

## Week 4: Tackling Dynamic Programming
**Summary:** The toughest week so far. I had to step away from the IDE and spend time on theory to truly internalize state definitions and transitions. Moving from 1D DP into 2D state spaces, knapsack problems, and interval-based DP required a completely new paradigm of thinking. This week felt really not managed properly as some ques required understanding of graph and bfs which were supposed to be completed in a later stage

**Questions Solved & Main Approaches:**
*   **k-Tree:** 1D DP utilizing state variables to track path sums and whether the required weight has been included.
*   **Flowers:** 1D DP combined with prefix sums to answer multiple queries efficiently.
*   **Boredom:** State transition DP defined by caching the maximum score up to the current index.
*   **Basketball Exercise:** 2D DP to track the maximum height achievable while alternating between two rows.
*   **Vacations:** 2D DP tracking multiple states (rest, gym, contest) to minimize total rest days.
*   **Hard problem:** 
*   **Journey:** 
*   **Sleeping Schedule:** 2D DP checking transitions for both normal and adjusted sleep times to maximize "good" waking times.
*   **Flood Fill:** Incorporated  logic od 2D DP and adjusted the array to meet with the required condition.
*   **Buns:** 
*   **Sasha and the Beautiful Array:** 
*   **Even Odds:** 
*   **Flipping Game:** Reinforcing Kadane’s algorithm for maximum subarray sum.
*   **Fence:** 
*   **Kefa and First Steps:** 
