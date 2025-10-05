
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

