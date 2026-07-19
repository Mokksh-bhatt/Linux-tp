# Question 2: C Process Monitor

**Execution & Screenshot:**
<img width="1023" height="425" alt="image" src="https://github.com/user-attachments/assets/f27daa2e-6737-4c5e-a1b6-70e54e12deea" />


**Explanation:**
I compiled and ran the program. The parent process started the child using fork(), and then used waitpid() with the WNOHANG flag to check on its status without blocking execution. Since the child was stuck in an infinite loop, the parent sent a SIGKILL signal using kill() to terminate it. Finally, the parent called waitpid() a second time to collect the exit status, which prevents the terminated child from turning into a zombie process.
