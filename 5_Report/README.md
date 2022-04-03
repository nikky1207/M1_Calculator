# Requirements
## Introduction
 #### This is a simple calculator program which is used by people in their day to day life for small calculation.
 #### In this program the user can easily do the basic calculaion using this program.
 #### The user can add, subtract,multiply,divide the numbers if required.
 #### For example, this calculator program can be used by shopkeeper for calculating and totaling the bis for generating the bill manually

## Research
#### In this program I have used diff function ,if-else,switch,for loops etc.
 ### Reference link
  #### https://www.javatpoint.com/c-if-else
  #### https://www.programiz.com/c-programming/c-for-loop
  #### https://www.javatpoint.com/c-programming-language-tutorial

## SWOT Analysis
### S-STRENGTHS
 #### The strength of this program is that it is user friendly and anyone can easily operate it.
 #### The user can easily save time by using this.
### W-WEAKNESS
 #### The majaor drawback of this calculator is that difficult problems cannot be executed.
 #### Not all functions are given in this only basic functions are in this.
### O-OPPORTUNITY
 #### Calculator saves time and is every efficient to use anyone can easily learn and use it.
 #### sponsoring different events and working towards the educational improvement campaigns can add more segments to their customer base.
### T-THREATS
 #### Its getting hard for Casio to enter sports and other tech-product lines as there’re already many strong brands are ruling. 
 #### Their slower growth in technological innovation will also bring a significant threat in the upcoming dynamic world.

# DESIGN
## Flow chart
![image](https://user-images.githubusercontent.com/74638840/161234951-42ad6847-71b1-407d-ab9a-b9c58c3575a1.png)
## Flow diagram
![flow diagram](https://user-images.githubusercontent.com/74638840/161393405-7feb8770-fca0-49eb-b37c-af42e7a9d95f.jpg)

## Structural diagram
![structural diagram](https://user-images.githubusercontent.com/74638840/161393451-ab85a83c-48a2-4d65-b943-d62a9da1396d.jpg)



## High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  HT_1       |Check if code works as per the given test cases.              |  Valid I/P  |Valid O/P|Valid O/P|Scenario based |
|  HT_2       |Check for boundary conditions                                 |  Invalid I/P|Program termination|Program termination |Boundary based    |
|  HT_3       |Check for invalid choice                                      |  Invalid choice I/P|Wrong choice.Please choose again|Wrong choice.Please choose again|Scenario based    |
|  HT_4       |Check for valid choice                                        |  Valid I/P|Valid O/P|Valid O/P|Scenario based |

## Low Level test plan
| **No.**| **Test Case -ID**  | **Test case Objective**                                                   | **Prerequisite**              | **Steps**                                                                                                                                                        | **Input data**  | **Expected Result**                                                  |  **Actual Result**              | **Remarks/ Status**              | 
|--------|--------------------|---------------------------------------------------------------------------|-------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------|---------------------------------------------------------------------------------|---------------------|---------------------|
|1       | TC1                | To add two integer and display the result on ten digit calculator| Calculator is switched on     | 1.Key in a valid integer from - 9999999999 to +9999999999 2. Key in operator + 3.Key in second operand, a valid integer from - 9999999999 To +999999999   | 135 + 100       |235(addition, above ten digits will be expressed in exponential form)            |  235                |  Pass               |
|2       | TC2                | To subtract two integer and display the result on ten digit calculator| Calculator is switched on     | 1.Key in a valid integer from - 9999999999 to +9999999999 2.Key in operator - 3.Key in second operand, a valid integer from - 9999999999 To +999999999   | 135 - 100         |35(subtaction, above ten digits will be expressed in exponential form)            |  35                 |  Pass               |
|3       | TC3                | To multiply two integer and display the result on ten digit calculator| Calculator is switched on     | 1.Key in a valid integer from - 9999999999 to +9999999999 2.Key in operator x 3.Key in second operand, a valid integer from - 9999999999 To +999999999   |100 x 400          |40000(multiplication, above ten digits will be expressed in exponential form)            | 40000                |  Pass               |
|4       | TC4                | To divide two integer and display the result on ten digit calculator| Calculator is switched on     | 1.Key in a valid integer from - 9999999999 to +9999999999 2.Key in operator / 3.Key in second operand , a valid integer from - 9999999999 To +999999999   |1000/ 25          |40(multiplication, above ten digits will be expressed in exponential form)            | 40                  |  Pass               |
|5       | TC5                | To square the given number and display the result on ten digit calculator| Calculator is switched on     | 1.Key in a valid integer from - 9999999999 to +9999999999 2. Multiplying the given operand twice                                                            |3                  |9(square, above ten digits will be expressed in exponential form)                        | 9                   |  Pass               |
|6       | TC6                | To find the square root of the number                                     | Calculator is switched on     | 1.Key in a valid integer from - 9999999999 to +99999999992. 2. finding square root using sqrt() keyword.                                                    |81                  |9(sqrt , above ten digits will be expressed in exponential form)                        | 9                |  Pass               |
## CONCLUSION
 #### A simple user interface has been created to demonstrate the calculator. 
 #### The interface addresses the problem of allowing the user to view a (potentially time consuming) calculation as it proceeds but also giving an answer which can be used or checked, by outputting signed digits as they are computed and then converting the result into decimal when some specified precision is reached.

