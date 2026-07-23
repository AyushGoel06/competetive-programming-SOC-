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

**Summary:** A noticeable step up in complexity with 15 problems. The focus shifted toward structural efficiency to avoid Time Limit Exceeded (TLE) errors. I learnt about hashing, maps as a data structure, and the approach towards frequency arrays.

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

**Summary:** This 15-problem set was completely centered around Greedy Algorithms. The biggest challenge wasn't necessarily coding the solutions, but proving the "greedy choice property" before implementing it. I explored greedy applications in game theory, array optimization, and constructive strings. This was the week when I had to really think hard and dry run the code before uploading. There was a steeper gap in week 2 and 3 which meant for us to know things beforehand.

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
*   **Two Large Bags:** Couldn't solve.
*   **It All Went Sideways:** Couldn't solve.

---

## Week 4: Tackling Dynamic Programming

**Summary:** The toughest week so far. I had to step away from the IDE and spend time on theory to truly internalize state definitions and transitions. Moving from 1D DP into 2D state spaces, knapsack problems, and interval-based DP required a completely new paradigm of thinking. This week felt improperly managed, as some questions required understanding of graphs and BFS which were supposed to be completed at a later stage.

**Questions Solved & Main Approaches:**
*   **k-Tree:** 1D DP utilizing state variables to track path sums and whether the required weight has been included.
*   **Flowers:** 1D DP combined with prefix sums to answer multiple queries efficiently.
*   **Boredom:** State transition DP defined by caching the maximum score up to the current index.
*   **Basketball Exercise:** 2D DP to track the maximum height achievable while alternating between two rows.
*   **Vacations:** 2D DP tracking multiple states (rest, gym, contest) to minimize total rest days.
*   **Hard problem:** 
*   **Journey:** 
*   **Sleeping Schedule:** 2D DP checking transitions for both normal and adjusted sleep times to maximize "good" waking times.
*   **Flood Fill:** Incorporated logic of 2D DP and adjusted the array to meet the required condition.
*   **Buns:** 
*   **Sasha and the Beautiful Array:** 
*   **Even Odds:** 
*   **Flipping Game:** Reinforcing Kadane’s algorithm for maximum subarray sum.
*   **Fence:** 
*   **Kefa and First Steps:** 

---

## Week 5: Graph Theory, Trees, and Simulations

**Summary:** This week expanded into graph theory, tree properties, and advanced simulation tactics. The problems required deeper structural analysis, utilizing traversals, greedy strategies, and connected component evaluation.

**Questions Solved & Main Approaches:**
*   **Beginner's Zelda (A):** This problem requires analyzing the leaves of a given tree structure. The optimal strategy involves pairing up the leaf nodes directly, which reduces the problem to counting the number of vertices with a degree of exactly 1 and halving that count.
*   **Omkar and Heavenly Tree (B):** To construct a valid tree that avoids all the restricted paths, we only need to identify a single vertex that never appears as the middle node in the restrictions. By connecting all other vertices directly to this unrestricted node, we form a valid star graph.
*   **Yet Another Card Deck (C):** We simulate the deck queries by tracking the topmost position of each unique card color. Since the maximum number of distinct colors is very small, we can efficiently locate the queried color, record its position, and shift the positions of all colors that were above it.
*   **Christmas Spruce (D):** We verify if a rooted tree satisfies the condition of being a "spruce" by examining every non-leaf node. A simple traversal allows us to count the leaf children for each internal node, ensuring every non-leaf vertex has at least three direct children that are leaves.
*   **Strong Vertices (E):** The problem's inequality can be algebraically rearranged to associate a single, independent value with each vertex. We calculate this transformed value for all nodes, find the global maximum, and output all vertices that share this maximum value.
*   **Useful Decomposition (F):** We must determine if the tree can be decomposed into paths that intersect at exactly one common node. This decomposition is only mathematically possible if the tree contains at most one vertex with a degree strictly greater than 2, which serves as the central hub.
*   **Tree Cutting (I):** We use binary search to guess the maximum possible size of the smallest connected component. For each target size, a bottom-up DFS validates whether the tree can be successfully partitioned by greedily severing subtrees once they reach the required size.
*   **Tree Infection (J):** We group sibling nodes and sort them by size to prioritize spreading the infection to the largest groups first. A priority queue then dynamically tracks the remaining healthy nodes in each group, simulating the optimal use of extra direct injections to minimize the total time.
*   **DZY Loves Chessboard (N):** We traverse the valid (good) chessboard cells and place white and black pieces following a standard alternating checkerboard pattern based on the parity of the cell coordinates. The bad cells remain untouched, guaranteeing that no two adjacent valid pieces share the same color.
*   **Ice Skating (O):** We treat each snow drift as a node in a graph, implicitly adding edges between drifts that share either an x or y coordinate. Using Depth-First Search, we count the total number of connected components; the minimum number of drifts to add is exactly the number of components minus one.
*   **Socks (P):** We model the daily instructions as edges connecting socks that must ultimately share the same color, using DFS to extract all independent connected components. For each component, we find the most frequent existing color and calculate the cost to change the remaining socks to match it.

---

## Week 6: Advanced Graphs and Depth-First Search (DFS)

**Summary:** This section covers C++ solutions to various algorithmic problems, prioritizing Graph Theory, Trees, and Depth-First Search (DFS) techniques. Solutions utilize standard fast I/O (`ios_base::sync_with_stdio(false); cin.tie(NULL);`) and are structured to meet strict time and memory limits.

**Questions Solved & Main Approaches:**
*   **New Year Transportation (A):** We simulate the journey starting from cell 1 by continuously jumping to the next cell using the formula `current += a[current]`. The loop stops when we either land exactly on our target cell `t` (meaning it's reachable) or overshoot it (meaning it's impossible).
*   **Anji's Binary Tree (B):** A DFS traverses the tree to find the cheapest path to any leaf node. Traversing in the direction matching the node's pre-existing letter costs 0 operations, while forcing a path down any other valid child branch adds a cost of 1 to that path's total.
*   **White-Black Balanced Subtrees (C):** We use Depth-First Search (DFS) to calculate the color balance of each subtree from the bottom up, assigning +1 for White and -1 for Black. We increment our answer counter every time a subtree's total sum returns exactly zero.
*   **Copil Copac Draws Trees (D):** We root the tree at vertex 1 and use DFS to track the input index of each edge. If a child's connecting edge appears earlier in the input list than the parent's connecting edge, it requires an entirely new reading pass, increasing the total passes needed for that specific branch.
*   **Village Guilds (E):** We iterate from the leaves upward to maintain the maximum and second-maximum subtree depths for each node. The total number of distinct guilds is mathematically derived by summing the valid combinations of these depth variations across all vertices in the tree.
*   **Fox And Names (I):** We compare adjacent names to find the first differing character, building a directed dependency graph that represents the required letter order. We then apply Kahn's Algorithm for topological sorting to either construct a valid custom alphabet or detect impossible cycles.
*   **Cthulhu (K):** A valid Cthulhu graph requires exactly one cycle with multiple trees attached, meaning the number of edges must exactly equal the number of vertices (`n == m`). If that condition is met, we use a single DFS traversal to confirm that all vertices are part of one fully connected component.
*   **Training Session (N):** We calculate the total possible combinations of choosing 3 problems from the entire set. We then subtract the "invalid" triplets—found by multiplying the remaining problems with the same topic by those with the same difficulty for each node—to leave only the valid selections.
