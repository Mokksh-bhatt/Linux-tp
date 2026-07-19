# Question 4: Pipeline & Log Analysis

**Execution & Screenshot:**
[Insert Screenshot of the output below here]

**Explanation:**
I used a command pipeline to monitor the log file. tail -f reads the file in real time. The pipe | sends the output directly into grep, which filters out everything except the ERROR lines. Then tee -a takes that filtered output and both displays it on the screen and appends it to error_report.txt. I added 2>/dev/null to hide any standard error messages that might pop up if the file doesn't exist yet.
