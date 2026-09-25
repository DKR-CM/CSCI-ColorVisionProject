# CSCI-ColorVisionProject
 // Project code name CSCI111-ProjectV.1.cpp

## Description

**version 1.0**

This prorgam is a simple Color Vision Assessment that asks the user for their name and which colors they have trouble telling apart.
It compares their answers to common color combinations and gives an educational result based on their choices.
The program also checks for invalid answers and allows the user to repeat the assesmant. 


## Developer

Carlos Martinez Albino

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Hello what is your name? Carlos 

Hello Carlos!

Which colors do you find confusing?
Choose one color first.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
7. I know all these colors
Enter choice: 4

Choose another color you sometimes confuse.
If you only have trouble with one color, enter the same color again.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
Enter choice: 5

Results for Carlos:
You reported difficulty with Blue and Purple.
Some people with color vision differences can confuse these colors.

This program is only an educational assessment.
It is not a medical diagnosis.

Would you like to take the assessment again?
1. Yes
2. No
Enter choice: 1

Hello what is your name? Carlos

Hello Carlos!

Which colors do you find confusing?
Choose one color first.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
7. I know all these colors
Enter choice: 1

Choose another color you sometimes confuse.
If you only have trouble with one color, enter the same color again.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
Enter choice: 3

Results for Carlos:
You reported difficulty with Red and Brown.
Some red-green color vision differences can make these colors harder to tell apart.

This program is only an educational assessment.
It is not a medical diagnosis.

Would you like to take the assessment again?
1. Yes
2. No
Enter choice: 1

Hello what is your name? Carlos

Hello Carlos!

Which colors do you find confusing?
Choose one color first.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
7. I know all these colors
Enter choice: 4

Choose another color you sometimes confuse.
If you only have trouble with one color, enter the same color again.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
Enter choice: 6

Results for Carlos:
You reported difficulty with Blue and Yellow.
This may be similar to blue-yellow color vision deficiency.
You may have difficulty telling some blues and yellows apart.

This program is only an educational assessment.
It is not a medical diagnosis.

Would you like to take the assessment again?
1. Yes
2. No
Enter choice: 1

Hello what is your name? Carlos

Hello Carlos!

Which colors do you find confusing?
Choose one color first.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
7. I know all these colors
Enter choice: 7

You said that you can identify all of these colors.
You did not report any color confusion.

This program is only an educational assessment.
It is not a medical diagnosis.

Would you like to take the assessment again?
1. Yes
2. No
Enter choice: 1

Hello what is your name? Carlos

Hello Carlos!

Which colors do you find confusing?
Choose one color first.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
7. I know all these colors
Enter choice: 7

You said that you can identify all of these colors.
You did not report any color confusion.

This program is only an educational assessment.
It is not a medical diagnosis.

Would you like to take the assessment again?
1. Yes
2. No
Enter choice: 1

Hello what is your name? 0

Hello 0!

Which colors do you find confusing?
Choose one color first.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
7. I know all these colors
Enter choice: 0
Invalid answer. Enter a number from 1 to 7: 7

You said that you can identify all of these colors.
You did not report any color confusion.

This program is only an educational assessment.
It is not a medical diagnosis.

Would you like to take the assessment again?
1. Yes
2. No
Enter choice: 1

Hello what is your name? Carlos

Hello Carlos!

Which colors do you find confusing?
Choose one color first.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
7. I know all these colors
Enter choice: 8
Invalid answer. Enter a number from 1 to 7: 1

Choose another color you sometimes confuse.
If you only have trouble with one color, enter the same color again.
1. Red
2. Green
3. Brown
4. Blue
5. Purple
6. Yellow
Enter choice: 2

Results for Carlos:
You reported difficulty with Red and Green.
This may be similar to red-green color vision deficiency.
You may have difficulty telling some reds and greens apart.

This program is only an educational assessment.
It is not a medical diagnosis.

Would you like to take the assessment again?
1. Yes
2. No
Enter choice: 2

Thank you for using the Color Vision Assessment!
```