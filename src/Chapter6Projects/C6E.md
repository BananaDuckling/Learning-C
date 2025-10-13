# Chapter 6

## Exercise 1

What output does the following program fragment produce?

``` 
i = 1;
while (i <= 128) {
    printf("%d ", i);
    i *= 2;
}
``` 

---

### Solution 1
The program outputs 
```
1 2 4 8 16 32 64 128
```
since there is no line breaks in the printf statement

--- 

## Exercise 2

What output does the following program fragment produce?
```
i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);
```

---

### Solution 2
The program outputs
```
9384 938 93 9
```

---

## Exercise 3
What output does the following for statement produce?
```
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);
```

---

### Solution 3

The program outputs
```
4 3 2 1
```

Because the syntax of the conditional expression uses a comma between the conditions which results in i being checked, then promptly discarded. So, only j > 0 matters.

---

## Exercise 4

Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?
```
(a) for (i = 0; i < 10; i++) ...
(b) for (i = 0; i < 10; ++i) ...
(c) for (i = 0; i++ < 10; ) ...
```

---

### Solution 4

The statement: 

```
(c) for (i = 0; i++ < 10; ) ...
```

is not the same since the postfix operator (i.e. the ++ after the variable) only increments after the conditional expression is evaluated. 

---

## Exercise 5

Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?

```
(a) while (i < 10) {...}
(b) for (; i < 10;) {...}
(c) do {...} while (i < 10);
```
---

### Solution 5

The expression: 

```
(c) do {...} while (i < 10);
```

is not the same. The `do` expression runs the code body once prior to checking the conditional expression.

---

## Exercise 6

Translate the program fragment of Exercise 1 into a single for statement.

---

### Solution 6

```
for (i = 1; i <= 128; i *= 2) 
    printf("%d ", i);
```

---

## Exercise 7

Translate the program fragment of Exercise 2 into a single for statement.

---

### Solution 7

```
for (i = 9384; i > 0; i /= 10)
    printf("%d ", i);
```

## Exercise 8

What output does the following for statement produce?
```
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```

### Solution 8 

It outputs:
```
10 5 3 2 1 1 1 ...
```
The `1` repeats forever.

---

## Exercise 9 

Translate the `for` statement of Exercise 8 into an equivalent while statement. You will need one statement in addition to the while loop itself.

---

### Solution 9

```
int i = 10;
while (i >= 1)
{
    printf("%d ", i++);
    i /= 2;
}
```

---

## Exercise 10 

Show how to replace a `continue` statement by an equivalent `goto` statement.

---

### Solution 10

The `continue` version:

```
int i = 1;
while (i < 10)
{
    ++i;
    if (i == 2)
        continue;
    printf("%d ", i);
}
```


The `goto` version:

```
int i = 1;
while (i < 10)
{
    ++i;
    if (i == 2)
        goto end; 
    printf("%d ", i);
    end : 
}
```

---

## Exercise 11

What output does the following program fragment produce?

```
sum = 0;
for (i = 0; i < 10; i++) {
    if (i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum);
```

---

### Solution 11 

It outputs:

```
20 
```

---

## Exercise 12 

The following “prime-testing” loop appeared in Section 6.4 as an example:
```
for (d = 2; d < n; d++)
    if (n % d == 0)
        break;
```
This loop isn’t very efficient. It’s not necessary to divide n by all numbers between 2 and n – 1 to determine whether it’s prime. In fact, we need only check divisors up to the square root of n. Modify the loop to take advantage of this fact. Hint: Don’t try to compute the square root of n; instead, compare d * d with n.

---

### Solution 12 

```
for (d = 2; d * d <= n; d++)
    if (n % d == 0)
        break;
```

---

## Exercise 13

Rewrite the following loop so that its body is empty:

```
for (n = 0; m > 0; n++)
    m /= 2;
```

### Solution 13

```
for (n = 0; m > 0; n++, m /= 2)
    ;// Empty Body
```

## Exercise 14

Find the error in the following program fragment and fix it.

```
if (n % 2 == 0);
    printf("n is even\n");
```

---

### Solution 14

There is a semicolon in front of the if statement. This results in the `printf` statement not being in the body and always executing.

```
if (n % 2 == 0)
    printf("n is even\n");
```
