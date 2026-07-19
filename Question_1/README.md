# Question 1: Duplicate Submissions Script

**Execution & Screenshot:**
<img width="1239" height="753" alt="image" src="https://github.com/user-attachments/assets/cd6af026-d625-4134-9470-40521fa82e72" />


**Explanation:**
I ran the script and it correctly found the duplicate file and backed up the unique ones. I used md5sum because it checks the actual file content instead of just the filename, making it a reliable way to find duplicates. I used 2>> error.log to redirect any error messages to a separate file so it doesn't clutter the terminal. I also used an associative array to keep track of the hashes so the script can easily remember which files it has already seen.
