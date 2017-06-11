# Calculator-Windows-Froms
My small calculator, which was created using windows forms.
I used algortihm with saving operand and operations in stack (abstract stack machine). 

1.If the next token is absolute term, its value is written to the data stack.
2.If the next token is operation, its priotity is compared with the priority of operation on the top of the operations stack.
3.If the priority of the current operation is higher,this operation is written to the stack. Goto item 1.
4.If the priority of the current operation is lower or equ,the operation is read from stack. Determine the number of operands of the operation. The corresponding number of terms is read from the data stack. Operation that read from the operations is performed on the data read from the data stack, and the result is written to the stack data. Goto item 3.
5.If the next token is an open parenthesis,it is written to operations stack. The open parenthesis has the lowest priority.  Goto item 1.
6.If the next token is a closing parenthesis,it pops operations from stack until if finds an open parenthesis. Destroy the open parenthesis and closing  parenthesis. Goto item 1.
7.If there are no more tokens and stack isn't empty, we pop all operations from the stack.
