# Reference

### 3.1 Address-of operator (&)

During execution (after comilation) variables are stored in computer's memory

```c
int n;
n = 10;
```

Corrosponding to variable `n` we have a memory location, this memory location has two item one is the address of this location and the other value inside it.

```c
x = n
```

`x = n` means the value of n is copied to x;

whenever we write `&n`, it provides the memory location where variable `n` is stored;

### Quadratic Equation roots

Find the roots of the quadratic Equation
Quadratic equation: ax^2 + bx + c = 0;

where:
a,b, and c are constants (with a!=0)

The solutions/roots to the quadratic equation can be found using the quadratic formula:

root = -b +- sqrt(b^2-4ac) / 2a

The discriminant 𝚫 = b^2 - 4ac determines the nature of the roots:
If 𝚫 = 0 , there is one real (repeated) root
If 𝚫 < 0 , there are two complex roots (no real roots)
If 𝚫 > 0 , there are two distinct real roots

### Matrix Multiplication

```
MATRIX  Col1    Col2    Col3
-----------------------------
Row1    10      05      20
Row2    15      25      05
Row3    10      15      25
```

RULE: MATRIX MULTIPLICATION

For matrix multiplication, the number of columns in the first matrix must be equal to the number of rows in the second array.

```
MAT-1   Col1    Col2    Col3    MAT-2   Col1    Col2    Col3    Col4
-----------------------------   ------------------------------------
Row1    2       4       6       Row1    1       3       5       7
Row2    3       5       7       Row2    2       4       6       8
Row3    4       6       8       Row3    3       5       7       9
```

```
MATRIX  Col1            Col2            Col3            Col4
--------------------------------------------------------------
Row1    2*1+4*2+6*3     2*3+4*4+6*5     2*5+4*6+6*7     2*7+4*8+6*9
Row2    3*1+5*2+7*3     3*3+5*4+7*5     3*5+5*6+7*7     3*7+5*8+7*9
Row3    4*1+6*2+8*3     4*3+6*4+8*5     4*5+6*6+8*7     4*7+6*8+8*9
```

```
MATRIX  Col1            Col2            Col3            Col4
--------------------------------------------------------------
Row1    28              52              76              100
Row2    34              64              94              124
Row3    40              76              112             148
```

### GCD (Greatest common factor) or HCF (Highest common factor)

**Euclidean Algorithm (Efficient Method):**

Keep replacing the larger number with the remainder of dividing the larger number by the smaller number until the remainder is 0. The last non-zero remainder is the GCD.

```
Example (GCD of 20 and 28):
28 % 20 = 8
20 % 8 = 4
8 % 4 = 0
GCD = 4
```
