# Reverse Polish Calculator
IC 2306 - Programming II | Final Group Project

## Description
A Reverse Polish (Postfix) Calculator implemented in C using a 
stack data structure. Operands are pushed onto the stack and 
operators pop and compute results without needing parentheses.

## Group Members
- K.A.A.Rashmina - 2023t1895
- M.S.Mansahani — 2023t01881

## Instructions
| ? | Enter a number (push onto stack) 

| + | Add top two values

| - | Subtract (second - top)  

| * | Multiply top two values 

| / | Divide (second / top) 

| = | Display top of stack 

| q | Quit 

## How to Compile and Run
Developed using Code::Blocks IDE.

1. Open `reverse_polish_calculator.c` in Code::Blocks
2. Click Build and Run 

## Example Usage
? 3  ? 5  +  =        → Result = 8.00
? 2  ? 3  +  ? 4  ? 5  +  *  =   → Result = 45.00
? 10  ? 8  ? 3  -  =  *  ? 7  +  =  → Result = 5.00, then 57.00

## Error Handling
- Stack overflow
- Stack underflow (not enough operands)
- Division by zero

## Language
C (compiled with GCC)
