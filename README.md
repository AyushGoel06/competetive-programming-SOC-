# competetive-programming-SOC
#REPORT
## Week 1: Foundations and CS101 Concepts

**Overview**
This week focused on core algorithmic building blocks. The problems generally felt approachable, akin to standard CS101 assignments. This provided a great opportunity to focus on coding speed, recognizing basic patterns, and writing clean implementations without getting bogged down by overly complex logic. 

**Key Topics Explored**
* **String Manipulation:** Practiced fundamental operations such as case-insensitive comparisons and string reversals.
* **Greedy Approaches & Brute Force:** Applied straightforward, chronological logic to solve simulation problems. It was a good reminder that when constraints allow, a simple brute-force approach is often the most efficient way to get an accepted solution.
* **Dynamic Programming:** Successfully bridged the gap between theory and practice by applying **Kadane’s Algorithm** (covered in this week's study material) to efficiently solve a maximum subarray sum problem (*Flipping Game*).

**Personal Takeaway**
While the overall difficulty was on the easier side, mastering these foundational techniques is crucial for optimizing time and memory limits in future contests. Getting these quick, confident solves has built great momentum for the weeks ahead.

## Week 2: Stepping Up — Data Structures, Sorting, and Optimization

**Overview**
This week featured a noticeable jump in both volume and complexity with 15 problems to tackle. The solve counts indicate a clear difficulty curve: early problems were highly approachable, but the latter half (especially from problem G onwards) introduced a steep challenge. The focus shifted from basic CS101 concepts to algorithm optimization and choosing the right data structures.

**Key Topics Explored**
* **Advanced Greedy & Sorting:** Problems like *Points and Minimum Distance*, *Basketball Together*, and *Collecting Game* heavily relied on sorting the input data first to make optimal, greedy decisions. Recognizing *when* to sort was half the battle.
* **Fast Lookups & Data Structures:** *Train and Queries* pushed the need for efficient data retrieval. Using Hash Maps or Binary Search became necessary to avoid Time Limit Exceeded (TLE) errors, moving away from simple nested loops.
* **Prefix Sums & Mathematical Insights:** Tackling problems like *Collecting Game* and *Yarik and Musical Notes* reinforced the importance of precomputing data (like prefix sums) and leveraging mathematical properties to reduce $O(N^2)$ approaches down to $O(N)$ or $O(N \log N)$.
* **Grid Traversal & Pathfinding:** *Arrow Path* and *Binary Path* introduced 2D grid traversal. This required stepping into basic Graph Theory concepts (like BFS/DFS) or localized Dynamic Programming to find optimal paths.

**Personal Takeaway**
The difficulty spike this week was a great reality check. It highlighted that simply getting the correct logical answer isn't enough; the solution must be structurally efficient. Problems like *Permutation of Rows and Columns* (with very few solves) showed that some challenges require careful observation and constructive logic rather than just applying a standard algorithm. Overall, a challenging but highly rewarding week for building algorithmic intuition.

## Week 3: Mastering Greedy Algorithms and Optimal Choices

**Overview**
This week consisted of a robust 15-problem set, and the central theme was undeniably **Greedy Algorithms**. The solve distribution shows a strong, consistent completion rate for the first half of the set, with a steep drop-off at the very end (Problem O dropping to just 4 solves). This week was an excellent exercise in learning how to trust local optimal choices to reach a global optimum.

**Key Topics Explored**
* **Core Greedy Strategies:** Problems like *Santa Claus and Candies* and *Odd Subarrays* served as perfect examples of classic greedy logic. The focus was on making the immediate best choice—such as distributing items to maximize distinct counts or slicing arrays at the earliest valid point—without needing to look back.
* **Greedy in Game Theory:** *Stone Game*, *Even-Odd Game*, and *Joysticks* introduced greedy concepts within a competitive framework. Solving these required analyzing the optimal, most "selfish" move a player could make at any given turn to maximize their own score or force the opponent into a disadvantage.
* **Array & Subsegment Optimization:** Tackling *Creating the Contest*, *Maximum Sum*, and *Max Plus Size* reinforced the need to iterate through arrays and aggressively pick the best elements or sequences. It required recognizing patterns where holding out for a "better" future option was statistically worse than taking the immediate gain.
* **Constructive Greediness:** *Mocha and Red and Blue* and *Ugu* highlighted how greedy algorithms apply to strings and constructive tasks. Fulfilling immediate constraints step-by-step proved to be the most efficient way to build the required patterns.

**Personal Takeaway**
The biggest lesson this week was learning to identify the "greedy choice property." While greedy algorithms are often easier to code than Dynamic Programming, *proving* that the greedy approach is correct before coding is the real challenge. The final few problems, especially *It All Went Sideways*, proved that as constraints become more complex, finding that simple, elegant greedy logic requires deep observation and careful edge-case management.

## Week 4: Tackling the Dynamic Programming Hurdle

**Overview**
This week featured a 15-problem set that marked a significant shift in difficulty, primarily focusing on **Dynamic Programming (DP)**. Unlike previous weeks where greedy logic or simple arrays sufficed, this week required a completely different paradigm of algorithmic thinking. I faced considerable difficulty wrapping my head around DP concepts initially, which meant I had to invest extra time outside of solving just to learn and internalize state definitions and transitions. The solve counts perfectly reflect this difficulty spike, particularly the sharp drop in problems like *Flood Fill* (only 2 solves) and *Hard problem* (5 solves).

**Key Topics Explored**
* **1D DP & State Transitions:** Problems like *Boredom*, *Flowers*, and *k-Tree* were my training ground for foundational DP. The biggest time investment was learning how to properly define the state (e.g., let $dp[i]$ be the max score at step $i$) and mathematically formulate the relations between subproblems rather than just making a greedy choice.
* **Multi-Dimensional & Knapsack DP:** As the set progressed, *Basketball Exercise*, *Vacations*, and *Buns* pushed me into 2D state spaces and knapsack-style problems. Tracking multiple constraints at once (like choosing between resting, gym, or coding on consecutive days in *Vacations*) forced me to draw out state trees to visualize the logic before coding.
* **Interval & Graph-Based DP:** The lowest-solved problems, such as *Flood Fill* and *Journey*, introduced complex interval DP and expected values on trees/graphs. These were the true test of my extra study time.
* **Sliding Window & Math Respite:** Thankfully, not everything was DP. Problems like *Fence* (a textbook sliding window application) and *Even Odds* (math and modulo arithmetic) provided a mental breather while reinforcing crucial $O(N)$ and $O(1)$ optimization techniques.

**Personal Takeaway**
This was undeniably the toughest week so far. While it was frustrating that the problems took significantly longer to solve due to the learning curve of Dynamic Programming, the extra study time paid off. Moving away from brute force and learning to cache overlapping subproblems feels like a massive leap forward in my competitive programming journey. The struggle to formulate the recurrence relations is starting to turn into pattern recognition, setting a strong foundation for advanced topics.
