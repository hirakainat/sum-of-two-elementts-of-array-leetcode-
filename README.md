
# 🧮 Two Sum Problem (C++)

### 📌 Question

Given an array of integers `nums` and an integer `target`, return the **indices of the two numbers** such that they add up to the target.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.
Return the answer in **any order**.

---

### 🔢 Example

**Input:** `nums = [2,7,11,15], target = 9`
**Output:** `[0,1]`
**Explanation:** Because `nums[0] + nums[1] == 9`

---

## 🧠 Approach 1 — Brute Force (O(n²))

**Logic:**

* Use two nested loops.
* For each element, check every other element to find a pair that sums to the target.
* Return the indices when found.

**Time Complexity:** O(n²)
**Space Complexity:** O(1)



---

## ⚡ Approach 2 — Hash Map (O(n))

**Logic:**

* Use an `unordered_map` to store numbers and their indices.
* For each number, calculate `target - nums[i]`.
* If the complement already exists in the map, return both indices.
* Otherwise, store the current number and its index in the map.

**Time Complexity:** O(n)
**Space Complexity:** O(n)



---

## 🧾 Comparison

| Approach    | Data Structure | Time Complexity | 
| ----------- | -------------- | --------------- | 
| Brute Force | None           | O(n²)           | 
| Hash Map    | unordered_map  | O(n)            |

---

## 📂 Repository Contents

| File Name                | Description                         |
| ------------------------ | ----------------------------------- |
| `MAIN.cpp` | Brute-force O(n²) solution          |
| `MAIN(1).cpp`    | Optimized O(n) solution             |
| `README.md`              | Problem description and explanation |

---

## 🧑‍💻 Author

**Hira (FAST-NU Lahore)**
*BSDS 2023 Batch*

---

---

# 🌼 Longest Common Prefix

### 🧩 Problem Statement

Write a function to find the **longest common prefix string** among an array of strings.
If there is no common prefix, return an empty string `""`.

**Example:**

```
Input:  ["flower", "flow", "flight"]
Output: "fl"
```

---


#### 🔹 Optimized Approach – O(N × M) 

* Use the first word as the initial prefix.
* For each next string:

  * Check if it starts with the current prefix using `.find(prefix)`.
  * If not, remove the last character from the prefix (`prefix = prefix.substr(0, prefix.size() - 1)`).
  * Repeat until all strings share the prefix or prefix becomes empty.
* Returns the longest prefix efficiently.

---

### 🧮 Example Dry Run

| Step | Current Word | Prefix Before | Prefix After | Match Found |
| ---- | ------------ | ------------- | ------------ | ----------- |
| 1    | flow         | flower        | flow         | ✅           |
| 2    | flight       | flow          | fl           | ✅           |

✅ Final Output → `"fl"`

---

### ⏱️ Time and Space Complexity

* **Time Complexity:** O(N × M)
  (N = number of words, M = average length of words)


---

### 📂 Files in This Repository


* CommonPrefix.cpp` — 


---

