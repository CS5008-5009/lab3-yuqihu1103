[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/Ad3CiblN)
# Lab3
output screenshots:

Running lab3_part_1 code on Khoury cloud:
![lab3_part1_screenshot1](https://github.com/CS5008-5009/lab3-yuqihu1103/assets/133090163/24e34523-d9c7-4b0d-9d3a-095486a73536)
![lab3_part1_screenshot2](https://github.com/CS5008-5009/lab3-yuqihu1103/assets/133090163/72dd1113-134a-4e4f-a5c8-2b2828955602)
Running lab3_part_2 code on Khoury cloud:
![lab3_partb_screenshot1](https://github.com/CS5008-5009/lab3-yuqihu1103/assets/133090163/b8f81ec8-19ef-4953-9923-966922bc2e3e)
![lab3_partb_screenshot2](https://github.com/CS5008-5009/lab3-yuqihu1103/assets/133090163/fc8c6811-d9c7-4850-acd3-d230d45d51b2)

Lab 3
This assignment has 2 parts. You need to implement single linked list (in part 1) and doubly linked list (in part 2). You will create 1 file for each part, 2 files in total. Upload your .c files on GitHub. Don’t forget to attach the output screenshots in README.md.
 
PART 1:
Implement a single linked list using structures in C. 
The linked list structure should contain a value (int) and a pointer. 
Suppose you have the following linked list
 
23 -> 52 -> 19 -> 9 -> 100
Here, head points to 23.
 
Implement the following methods
1. Search for a given element (input taken from the user) in the linked list. If the element is found, return its position in the linked list. Otherwise return -1.
 
2. Insert an element in the linked list. Use malloc to create a new node. Take input from the user. 
a. Insert element in the middle of the linked list, position should be taken as an input from the user. 
e.g. Insert 7 at position 3
Original linked list : 23 -> 52 -> 19 -> 9 -> 100
After insertion = 23 -> 52 -> 7 -> 19 -> 9 -> 100
 
b. Insert element at the head of the linked list. Head should point to the 'new' head. 
Original linked list : 23 -> 52 -> 19 -> 9 -> 100
After insertion: 7 -> 23 -> 52 -> 19 -> 9 -> 100
Here, head should point to 7.
 
c. Insert element at the end of the linked list 
Original linked list : 23 -> 52 -> 19 -> 9 -> 100
After insertion: 23 -> 52 -> 19 -> 9 -> 100 -> 7
 
3. Delete element from the linked list.
a. Delete element from the middle of the linked list
e.g. Delete 19.
Original linked list : 23 -> 52 -> 19 -> 9 -> 100
After deletion = 23 -> 52 -> 9 -> 100
 
b. Delete head of the linked list
Original linked list : 23 -> 52 -> 19 -> 9 -> 100
After deletion = 52 -> 19 -> 9 -> 100
Head points to 52.
 
c. Delete last element of the linked list
Original linked list : 23 -> 52 -> 19 -> 9 -> 100
After deletion = 23 -> 52 -> 19 -> 9 
Here, pointer of 9 should point to null.
 
4. Print all the elements in the linked list.
Output: 23, 52, 19, 9, 100

PART 2:
Implement a doubly linked list using structures in C. 
The linked list structure should contain a value (int) and 2 pointers: next and prev. 
Suppose you have the following linked list
 
23 <--> 52 <--> 19 <--> 9 <--> 100
Here, head points to 23.
 
Implement the following methods
1. Search for a given element (input taken from the user) in the linked list. If the element is found, return its position in the linked list. Otherwise return -1.
 
2. Insert an element in the linked list. Use malloc to create a new node. Take input from the user. 
a. Insert element in the middle of the linked list, position should be taken as an input from the user. 
e.g. Insert 7 at position 3
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
After insertion = 23 <--> 52 <--> 7 <--> 19 <--> 9 <--> 100
 
b. Insert element at the head of the linked list. Head should point to the 'new' head. 
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
After insertion : 7 <--> 23 <--> 52 <--> 19 <--> 9 <--> 100
Here, head should point to 7.
 
c. Insert element at the end of the linked list 
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
After insertion : 23 <--> 52 <--> 19 <--> 9 <--> 100 <--> 7
 
3. Delete element from the linked list.
a. Delete element from the middle of the linked list
e.g. Delete 19.
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
Resulting linked list = 23 <--> 52 <--> 9 <--> 100
 
b. Delete head of the linked list
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
Resulting linked list = 52 <--> 19 <--> 9 <--> 100
Head points to 52.
 
c. Delete last element of the linked list
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
Resulting linked list = 23 <--> 52 <--> 19 <--> 9 
Here, pointer of 9 should point to null.
 
4. Print all the elements in the linked list in reverse order.
Original linked list : 23 <--> 52 <--> 19 <--> 9 <--> 100
Output - 100, 9, 19, 52, 23
