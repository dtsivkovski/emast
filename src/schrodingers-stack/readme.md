# Schrodinger's Stack

This is very much a stack-like data structure, where there is a possibility that the top value in the stack is not actually present when it is observed.

Observing the value using `pop()` or `peek()` has the chance of either returning the true top value and removing it from the stack, or the possibility that it is not observed, thus throwing an error that the stack is empty.

Implementation File: [Schrodinger.h](Schrodinger.h)

```
First Pop: 5
Second Pop: 4
Third Pop: Stack is empty
Fourth Pop: Stack is empty
Fifth Pop: 1
```