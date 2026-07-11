# CPPCLOP02

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Assignment Operators

Listen

In programming, assignment operators help you set or change the value of a variable.

#### Basic Assignment

Here's a simple example:

```
int length;
length = 15;

```

In this example, the  **`=`**  operator sets the value of `length` to 15.

#### Compound Assignment Operators

 **Compound Assignment Operators**  are just a shorthand way of performing operations on a variable and assigning the result back to the variable.

 **Without**  using the compound assignment operators we write -

```
length = 15;
length = length + 5;

```

The same thing  **using**  Compound Assignment Operator would be written as-

```
length = 15;
length += 5;

```

We can use any other operator in the same way:

- x -= 5        (Subtracts 5 from x and assigns the result back to x)
- x *= 3        (Multiplies x by 3 and assigns the result back to x)
- x /= 3        (Divides x by 3 and assigns the result back to x)
- x %= 3        (Finds the remainder when x is divided by 3 and assigns the result back to x)
### Task
- Using an assignment operator, output the remainder when length is divided by 3.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-12T10:07:25.127Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
  int length = 11;
  // Update your code below this line
  
  length %= 3;
  cout<<length;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CPPCLOP02)