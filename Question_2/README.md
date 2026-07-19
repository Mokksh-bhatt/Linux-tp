# Question 2: C Process Monitor

**Execution & Screenshot:**
[Insert Screenshot of the output below here]

**Explanation:**
I compiled and ran the program. The parent process started the child using fork(), and then used waitpid() with the WNOHANG flag to check on its status without blocking execution. Since the child was stuck in an infinite loop, the parent sent a SIGKILL signal using kill() to terminate it. Finally, the parent called waitpid() a second time to collect the exit status, which prevents the terminated child from turning into a zombie process.
