# Test plan
<!-- chart -->
| No | Test case ID | Test case Objective| Prerequisite	|Steps | Input data | Expected Result |	Actual Result |Status |
|-----|-----|-----|-----|-----|-----|-----|-----|-----|
|1|	TC-1 |	Cast the Vote |	Welcome to Election/Voting 2022|	Enter operation 1|	1/4	|thanks for vote !!|	thanks for vote !!	|Pass|
|2|	TC-2|	Cast the Vote |Welcome to Election/Voting 2022|	Enter operation 2|	2/4|	thanks for vote !!|thanks for vote !!| Pass|
|3|	TC-3|	Cast the Vote |	Welcome to Election/Voting 2022|	Enter operation 3|	3/4|	thanks for vote !!|	thanks for vote !!|	Pass|
|4|	TC-4|	Cast the Vote |	Welcome to Election/Voting 2022|	Enter operation 4|	4/4|	thanks for vote !!	|thanks for vote !!|pass|
|5|	TC-5|	Cast the Vote|	Welcome to Election/Voting 2022|	Enter operation 5|	0|EXIT	 | Error: Invalid Choice|	Fail|
|6|	TC-6|	Find Vote Count|	Voting Statics|	Enter operation 2|	if input 1/4 |	[Arvind Kejriwal]	|[Arvind Kejriwal]|	Pass|
|7|	TC-7|	Find Vote Count|	Voting Statics|	Enter operation 3|	if input 3/4 |	[ Anil Chaudhary]	|[ Anil Chaudhary]|	Pass|
|8|	TC-8|	Find leading Candidate|	Voting Statics|	Enter operation 6|	if input 2/4 |	[ Adesh Kumar Gupta]	|[Adesh Kumar Gupta]|	Pass|

