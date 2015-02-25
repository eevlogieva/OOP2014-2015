# Task 0
Write a program to help a local restaurant automate its breakfast billing system. The program should do the following:
* Show the customer the different breakfast items offered by the restaurant
* Allow the customer to select more than one item from the menu.
* Calculate the bill

Assume the restaurant offers the following breakfast items:
Plain Egg.............1.45
Bacon and Egg....2.45
Muffin..................0.99
French Toast.......1.99
Fruit Basket.........2.49
Cereal.................0.50
Tea......................0.75

Define a struct menuItemType with two components to hold the name and price of an item. Use an array, menuList, of the menuItemTypes. Your program must contain at least the following functions:
[] Function GetData: This function loads data into the array
[] Function ShowMenu: Displays items offered by restaurant and tells user how to select items.
[] Function printCheck: calculates and prints check(Note that the billing amount should include a 5% tax)

Format your output with 2 decimal places. The name of each item in the output must be left justified. You may assume that the user selects only one of a particular item.

