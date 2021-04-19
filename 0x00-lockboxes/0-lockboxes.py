#!/usr/bin/python3
"""
================================= Problem LOCKBOXES ====================================
-----------------------------------  PROBLEM  ------------------------------------------
You have n number of locked boxes in front of you. Each box is numbered sequentially from
0 to n - 1 and each box may contain keys to the other boxes.
----------------------------------- More info -------------------------------------------
  * Prototype: def canUnlockAll(boxes)
  * boxes is a list of lists
  * A key with the same number as a box opens that box
  * You can assume all keys will be positive integers
  * The first box boxes[0] is unlocked
  * Return True if all boxes can be opened, else return False
"""


def canUnlockAll(boxes):
    """
    ==================== Description ============================
    Write a method that determines if all the boxes can be opened
    --------------------- Arguments -----------------------------
     * boxes --> List of Lists, it contains the boxes with keys
     * Return Boolean
    --------------------- Variables -----------------------------
     * identify_key --> List, Store the number keys to open boxes
     * key --> integer, key of the myKeys
     * box_key --> integer, key inside of an specific box
    """
    identify_key = [0]
    for key in identify_key:
        for box_key in boxes[key]:
            if (box_key not in identify_key) and (box_key < len(boxes)):
                identify_key.append(box_key)
    if len(identify_key) == len(boxes):
        return True
    return False
