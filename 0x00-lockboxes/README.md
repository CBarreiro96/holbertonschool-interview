<div align="center"><img src="https://user-images.githubusercontent.com/66263776/98416555-43fa9b80-204d-11eb-800a-df8e19b62655.jpg" width="700" height= "200"> </div>

# <img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30"> 0x00. Lockboxes <img src="https://user-images.githubusercontent.com/66263776/98705433-b6b88f00-234b-11eb-97b7-cb193f7424f4.png" width="20" height= "30">
## :thinking: Problem lockboxes :thinking:
You have n number of locked boxes in front of you. Each box is numbered sequentially from 0 to n - 1 and each box may contain keys to the other boxes.

Write a method that determines if all the boxes can be opened.

* Prototype: ```def canUnlockAll(boxes)```
* ```boxes``` is a list of lists
* A key with the same number as a box opens that box
* You can assume all keys will be positive integers
    * There can be keys that do not have boxes
* The first box ```boxes[0]``` is unlocked
* Return ```True``` if all boxes can be opened, else return ```False```

**Code the principal function(main.py)**
```python
#!/usr/bin/python3

canUnlockAll = __import__('0-lockboxes').canUnlockAll

boxes = [[1], [2], [3], [4], []]
print(canUnlockAll(boxes))

boxes = [[1, 4, 6], [2], [0, 4, 1], [5, 6, 2], [3], [4, 1], [6]]
print(canUnlockAll(boxes))

boxes = [[1, 4], [2], [0, 4, 1], [3], [], [4, 1], [5, 6]]
print(canUnlockAll(boxes))

```
**Expeted responses**
```console
True
True
False
```

## WHITEBOARD - understanding of the problem
<div align="center"><img src="https://user-images.githubusercontent.com/66263776/115258153-5a297f00-a0f6-11eb-8ccb-ff2ffe9ac71d.png" width="800" height= "500"></div>
