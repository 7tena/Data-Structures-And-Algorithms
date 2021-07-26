## Stack
Insertion and deletion takes place at one end called top.

### Operations:
All these operations run in O(1) time.
- push
- pop
- top
- isEmpty

### Applications:
- Execute function calls in a program
- Used for recursion
- Implement undo operation in editor
- Balanced paranthesis and brackets while compilation
- evaluation of arithmetic and logical expressions

### Infix, Prefix, Postfix
- Infix : operand, operator, operand, 
- Prefix(Polish notation) : operator, operand, operand, 
- Postfix(Reverse polish notation) : operand, operand, operator, 
- Postfix preferred in machines for computations

### Why postfix representation of the expression? 
The compiler scans the expression either from left to right or from right to left. \
Consider the below expression: a op1 b op2 c op3 d \
If op1 = +, op2 = *, op3 = + \
The compiler first scans the expression to evaluate the expression b * c, then again scans the expression to add a to it. The result is then \ added to d after another scan. The repeated scanning makes it very in-efficient. It is better to convert the expression to postfix(or prefix) form before evaluation. The corresponding expression in postfix form is abc*+d+. The postfix expressions can be evaluated easily using a stack.
