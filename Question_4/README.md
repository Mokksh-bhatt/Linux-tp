# Question 4: Pipeline & Log Analysis

**Execution & Screenshot:**
<img width="1525" height="195" alt="image" src="https://github.com/user-attachments/assets/11a660f9-03fd-4407-b199-2d8dcccfa1a8" />
<img width="1482" height="324" alt="image" src="https://github.com/user-attachments/assets/99a93fcc-ae35-48c5-a401-442dd416121e" />


**Explanation:**
I used a command pipeline to monitor the log file. tail -f reads the file in real time. The pipe | sends the output directly into grep, which filters out everything except the ERROR lines. Then tee -a takes that filtered output and both displays it on the screen and appends it to error_report.txt. I added 2>/dev/null to hide any standard error messages that might pop up if the file doesn't exist yet.
