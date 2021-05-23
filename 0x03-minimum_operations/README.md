<div align="center"><img src="https://user-images.githubusercontent.com/66263776/98416555-43fa9b80-204d-11eb-800a-df8e19b62655.jpg" width="700" height= "200"> </div>

# <div align="center"><img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30"> 🏋 Exercise  Minimum Operations 🏋 <img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30"></div>

## :scroll: Description :scroll:
In a text file, there is a single character H. Your text editor can execute only two operations in this file: Copy All and Paste. Given a number n, write a method that calculates the fewest number of operations needed to result in exactly n H characters in the file.

* Prototype: def minOperations(n)
* Returns an integer
* If n is impossible to achieve, return 0

<details>
    <summary><b>Code 0-main.py</b></summary>

```python
#!/usr/bin/python3
"""
Main file for testing
"""

minOperations = __import__('0-minoperations').minOperations

n = 4
print("Min # of operations to reach {} char: {}".format(n, minOperations(n)))

n = 12
print("Min # of operations to reach {} char: {}".format(n, minOperations(n)))
```
</details>

---
## Example
```
n = 9

H => Copy All => Paste => HH => Paste =>HHH => Copy All => Paste => HHHHHH => Paste => HHHHHHHHH

Number of operations: 6
```
---

### INPUT
>./0-main.py
### OUTPUT

```shell
Min number of operations to reach 4 characters: 4
Min number of operations to reach 12 characters: 7
```
---
## :memo: WHITEBOARD :memo:

<details>
<summary><b>Whiteboard</b></summary>
<div align="center"><img src="https://user-images.githubusercontent.com/66263776/117995653-1d246700-b307-11eb-9965-f6058a1f713f.png" width="800" height= "600"> </div>

</details>