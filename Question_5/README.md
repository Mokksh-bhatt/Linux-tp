# Question 5: Vi Recovery Mechanisms

**Execution & Screenshot:**
<img width="1300" height="506" alt="image" src="https://github.com/user-attachments/assets/ea5bfe16-a782-40bd-afe1-e65b0f1d0220" />


**Explanation:**
When working in vi, the best way to recover from a system crash is using the swap file by running vi -r filename. Things like undo history and registers are stored in RAM, so they get completely wiped out if the computer crashes. Backup files only save the state of your last manual save. The swap file is constantly written to the physical disk in the background, making it the most reliable way to restore the exact unsaved state right before a crash.
