### Race Condition - Two or more thread try to access same variable at same time.

**Example** 
- One thread may be adding values to a variable, while another thread is subtracting values from the same variable.
- At the same time, the operating system may context switch from the adding thread to the subtracting thread in the middle of updating the variable. 
Perhaps right at the point where it was about to write an updated value with an addition.



### A common approach is to protect the critical section of code. This may be achieved with a mutual exclusion lock, sometimes simply called a mutex.
