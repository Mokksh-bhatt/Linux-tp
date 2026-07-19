# Question 3: Linux System Calls File IO

**Execution & Screenshot:**
<img width="1023" height="261" alt="image" src="https://github.com/user-attachments/assets/ea377675-21cc-4252-9852-1435ae9afc7f" />


**Explanation:**
I wrote a program to manage employee records using Linux system calls. It uses open() to create the file and write() to save the structs to disk. To update a record efficiently, I used lseek() to jump straight to the exact byte location of the second record instead of rewriting the whole file. Then I used read() to fetch the third record to prove random access works. close() was called at the end to free up the file descriptor.
