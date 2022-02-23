# Description
* Basic project which can be used to elect candiates from given list and shows the output like Cast the Vote, Find Vote Count and Find leading Candidates it is like an online voting system.

# Requirements

## High Level Requirements
<!-- Tables -->
* Features of my Project

|   ID   |   Description    |  STATUS   |  
| ------ | ---------------- | --------- |
| HLR1   | If user want to do the Cast the Vote operation           |Implemented  |          
| HLR2   | If user want to do the Vote Count operation              |Implemented  |
| HLR3   | If user want to do the Find leading Candidates operation |Implemented  |
| HLR4   | If user want to do the Exit operation                    |Implemented  |

## Low Level Requirements
* How each feature is implemented

|   ID   |   Description    |  STATUS   |  
| ------ | ---------------- | --------- |
| HLR1   |    Enter the operation you want to do (like 1Cast the Vote, 2Find Vote Count and 3Find leading Candidates)	|Implemented|
| HLR2   |	select the numbers from 1 to 5                                                                          |Implemented|
| HLR3   |	If user entered Invalied then it will ask for vallied operation	                                        |Implemented|
| HLR4   |	If user enter cast the vote and choose the canditate according to no. it will show thanks for vote !!                                           |Implemented|

## SWOT
* Strength: 1. Reduce cost of voting  2. Voting in any language convenient to the voter 3. Tackling social, technical, political, legal and economic issues associated with elections. 4. Serves as enabler and a convenient way in involving citizens in political decision. 5. Mobile voting is cheaper to implement in voting 6. It simplifies and eases access to the integration of persons and institutions in political process. 7. Input to political decision-making can be improved with mobile voting, thereby increasing their democratic participation.  8. Electronic voting eliminates queue during voters’ registration and voting. 9. Voter has no geographical restricted from voting. 10. Provides simple avenues for the illiterate and disable to vote. 11. Reduces manpower requirements and pulling places. 12. Provides efficient and fast means for votes counting 13. Restores voters confidence 14. Eliminates or reduces double/multiple voting maximally. 15. Provides secure means to transmit election results 16. Provides efficient avenues for voter education 17. Relays messages associated to election fast.
* Weakness:Malware:-
Malware—malicious software that includes worms, spyware, viruses, Trojan horses, and ransomware—is perhaps the greatest threat to electronic voting.3 Malware can be introduced at any point in the electronic path
 
Other Classes of Attacks:-
There are other avenues through which electronic systems may be disrupted. Malicious actors may obtain sensitive information such as user-names or passwords by pretending to be a trustworthy entity in an electronic communication. Servers may be breached to obtain administrator-level credentials. Individuals with site access (e.g., employees or contractors) might physically access a system.
## 4W's & 1H
It provides adequate and relevant information about the various activities and providing an overview of votinf equipment used nationwide and the system machines and  Electronic voting is voting that uses electronic means to either aid or take care of casting and counting votes.

* Behavioral Diagram
# High Level
<!--images-->
![markdown logo](https://pdf-service-lucidchart-com.s3.amazonaws.com/ef4b389d-c97c-4ff7-99a8-79bf33e57938?X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLWVhc3QtMSJHMEUCICsTkxT8a5FAg7dn%2B3LeaqbarY%2FucfHOQZe86Ltz2t0VAiEApa%2BKvzpC8T7Mt7ubPt229N9nP6URUPYgMTEnuZAlqhEq%2BgMIRRAAGgw5MzU2MDY5MjYxODIiDP1un%2BPpB18EbMw2YirXA%2BQ5nqzEwkxXIGFnXh%2Fk0mWd6sqxKa3tZvTrXDILQp7Mtv14Ie4hJTjkqqwtLBxvJC3wxOTlDxBbF3LJILj21fBb7v7Exl0LI3S7LOJ9JSh%2B103%2FuyYk1hAmXU%2BXQO2GHFAvgb7%2FG00g8wB%2Btl0GAm6%2BR6%2B%2FAVyB73v5qZI1uGiOWwgMvJrnvGlUgfVK4od9QmVk4YFCaJQBwELdO9vpfP7fRkXQ7HcXDM0vFb9o17GJ7%2Bl5%2FsgpMcj4DR%2F966FrNbnwJk4SIcbqR3MdYuYN0UeXY1Bf93WLVK8lIgGyk9pdYTYWBKaFv8SYUL2BV%2F9b6JRvq4WmZTpxIb4KCcn8cK34cEOsRuL7SVpXTQqT%2FKvaEmOwGiDco%2FR0wunRjIqX%2BPCbfeay45ojVlogojylrykpGdvD2KMj9pJzqyQWE8SnqjOILkQDmvC3OAuIvW%2FcD3qJyjRXlrAzM9AD%2B41GXBz%2Fq7q7E5x5sKm8hr67ewVUZUxZ4%2F4FeDUS5FKPpaO8bBAAghVUHRgrJGRiyDdhTsDdDkPvMVZ%2FjCG%2FGT%2FI%2Fm3z7KOQQlqhIg4HAb9Djes9GH9vdlxstW3BIEhq9QFixfHNRktk3rx3MDGinyWAjODpzrXd%2FOWhIDDE782QBjqlAV6HiiN0GEeGDbIi0cbCvDXUxv9LWTYD5AJ%2FqlWzoYEFySuVZ6wNrPLcl%2BnbczgYn%2B0DRBL9xqRQst%2BzLB2iTs50tO9lncuPyK43ANtbxDKsxnqciWag%2BX1JMpnGuDKm9DP%2B1G22wLPtB947Hb125sEctvpB7GVOsFYYPR99vqVxV5u7dpA2Csrm%2Fqo2UwCpMr1sKMM0ozDAc9eGQ3amytRM5pW%2FMA%3D%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20220221T130217Z&X-Amz-SignedHeaders=host&X-Amz-Expires=86399&X-Amz-Credential=ASIA5TVUEXNTFKJADK4A%2F20220221%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Signature=41fe41dc06341e66a1d1571355a01558a8d346761448d72c4037f98831942e35)
# Low Level
<!--images-->
![markdown logo](https://pdf-service-lucidchart-com.s3.amazonaws.com/36c48d10-ce2d-4749-9650-3414e053a915?X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLWVhc3QtMSJGMEQCICRi%2FjfebxQwJoK5DOuursBx4zOlP7JxnlWm%2F0v64EaDAiAaSDrP9RYCHOqWVTezgGRnUppY%2Buoa6MtUUILE3pv%2B%2FSr6AwhGEAAaDDkzNTYwNjkyNjE4MiIMIvsDGtalf8uJuigfKtcD5nb%2FUTzAu1ZszACu%2BG23vYmDS9lLTXIh7efkXtLl%2FzrW4mCl%2B3GLKQ1eQ%2Bi88Vkl%2FS3dMv5GIiP2bQ262GNTRHeZ8Isn%2F0Zh8FmFfggtm0RHYUF8nSe%2BlCaZhKyJG%2BS2L8gdgPz%2ByN%2FdsObdpWGZ1jxVa8Eh12uTEL7x0Q0TKvqBgAKqddt9eF510HkQf77GE1m6uQK4cSXYaq2ttIqnf%2Fb3AhW%2BRocJgHXlC18M%2F9y36qOXy8LAnRKKD9rDiC5AU%2BuWZmbUAMGYjS%2BDV8LTUQuu205dCb4tRe%2BJL9XwRSKYBWO%2B38yoqOWXkNw%2FYrmCYlasTg0uk9p2Ex6knyd0U6Vsp16pW%2BmMJaeQBfM%2FEQ6h2ZT21WCyvB49NBlgEc2%2B5SAwD18lBVa9jp2CXxyYQQcUWKgrsZ2m0qct5RpeuCTKifWn25cg9n6VTQjphqivMulc5Sl8svVbCbZ%2Bc1%2BEHm5nYd35ntiAHBTUYXpBzQfhKjCsGn0i87ysqwlAnduIFcQIxYC%2F%2BWZFMfYBqAH4GUsLIRROazTfoKFPPqTHiQCvWYAR6ICq0JZThx1fdTPTqywA3EezaGxl0gS5aRphJpRUdZbbUDlIinbhPs8cdOJdKzXXjYT0MLWPzpAGOqYBKJL8SW73K00ycpPMmvhI2qs9Za0Ss4bMuFFbZwRGwxMG5hP9XBRRUhoDInjO0WQC8%2FA6%2FxO%2B%2Bii0YZfLhdCXbh40FoW%2F3uaaXyQIM36P9fKPHXJx8ructIXPdMwJKjptvRNZvpWieEvAy4bFzM7KajCVLT6KTCqbJAUMN8Ib4uJrkKSgiEGXJgaitRhZSPzcCLlmTQnWfOVa0c2So9mRQEWfMTMZHw%3D%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20220221T132027Z&X-Amz-SignedHeaders=host&X-Amz-Expires=86400&X-Amz-Credential=ASIA5TVUEXNTMWQ7MHJR%2F20220221%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Signature=cc160a8870886cab21eb8ccb3e72642a608373022e8010c7d29c17d5fd049c8c)
* strctural
# High Level
<!--images-->
![markdown logo](https://pdf-service-lucidchart-com.s3.amazonaws.com/1cb69b8e-7d2e-43f5-ba0f-37eb68f2bf8f?X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLWVhc3QtMSJGMEQCIGjlPo7iC5635dT38WRNt%2B5dKZHwJKtjSIk28svAovBqAiBQtWmcaEkowHfqpXdVpYAimOEu1Qxw6N6y1%2BXA1yT8USr6AwhGEAAaDDkzNTYwNjkyNjE4MiIM5i7Bb1%2FLJhd%2B2P4wKtcDlRgSLsSy32Y588uMq9%2BodK18oYZ83EOjFlDEXyypUvIob7T4bH%2FvfBrl5ASy0RSbHAaGzRAVuhdNPvjnhtRbfntNCfGBhdfQxDWUTEFHj0WbWpmMzPb0UAvBGnhADTr1M6%2BN1Sv2aEqoyxJ6Ul7vhjajHLAKr8zlF1r1Z8WxUktiehWTv%2FEY3PhHRGj81JLmb4dSS2b5Iqs1j0DI7Pf6qzAn%2BVMMT%2BHpbWLtwHtJ1dQ2MY3igIop%2Fu4SMslEQNv8cX3xxzWDlfprv%2FQpPUfMzITQz7jdTdvCawIfBmn9sx1%2BGyJ4awAVRYD6ajupqqj2pswxsCN2KTY%2FnvTYP5suHJ52d6wu6evh7UmzMAvs5SL%2BswOdEuXpz%2ByjLKIS6BvGi9jar2oxR%2BVRhQdHqqRtT4qvY1mEyAcdYjUrRAQnyeCGcSI1UHXCaluFQ3%2F%2FZcfUUbPt5ubxQ1UU2lmCN49b4SOFvk%2F4FBOuSCdscVQOUo%2F6ywaXUCxYUoIysiEpIxXQZ75gbdEJ1fV66fIbacGqPfebrkXAdpTqvcAZQ%2BxLhq0moR9YfD2f2ZcbLpMjEYH2arh7YcP%2BtqrfKf066gMjNWEWsKJrWwrDYTkLq6tH%2BMe8S%2BLecU1kMKuNzpAGOqYBxKRkwpw4HB2NcP0qnZfvbOVT13jTSusjWuszAtl2OfwwY3cEi2hkfc%2BQNr1jDww6QnPAYv%2BklesHY%2BeEQYt3xTdKtUFDKKtk9go6LC61bSxK9nT4AR3fggqFeFUm7avUzFbz71LSe%2Flbmtmnl0rO3ssKqSy0eCExb%2B8aqd98uqR%2FLTbfqdBKuqwGPrbRWuIFFa%2BC4kiWF8JrznUQvoKk%2FDZ9TjqmKA%3D%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20220221T132748Z&X-Amz-SignedHeaders=host&X-Amz-Expires=86400&X-Amz-Credential=ASIA5TVUEXNTJADHM72H%2F20220221%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Signature=0d90937838f97908e1cebbabcd72b0a890d36ab65b01587835803edc4f0f4bec)

# Low Level
<!--images-->
![Markdown logo](https://pdf-service-lucidchart-com.s3.amazonaws.com/36c48d10-ce2d-4749-9650-3414e053a915?X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLWVhc3QtMSJGMEQCICRi%2FjfebxQwJoK5DOuursBx4zOlP7JxnlWm%2F0v64EaDAiAaSDrP9RYCHOqWVTezgGRnUppY%2Buoa6MtUUILE3pv%2B%2FSr6AwhGEAAaDDkzNTYwNjkyNjE4MiIMIvsDGtalf8uJuigfKtcD5nb%2FUTzAu1ZszACu%2BG23vYmDS9lLTXIh7efkXtLl%2FzrW4mCl%2B3GLKQ1eQ%2Bi88Vkl%2FS3dMv5GIiP2bQ262GNTRHeZ8Isn%2F0Zh8FmFfggtm0RHYUF8nSe%2BlCaZhKyJG%2BS2L8gdgPz%2ByN%2FdsObdpWGZ1jxVa8Eh12uTEL7x0Q0TKvqBgAKqddt9eF510HkQf77GE1m6uQK4cSXYaq2ttIqnf%2Fb3AhW%2BRocJgHXlC18M%2F9y36qOXy8LAnRKKD9rDiC5AU%2BuWZmbUAMGYjS%2BDV8LTUQuu205dCb4tRe%2BJL9XwRSKYBWO%2B38yoqOWXkNw%2FYrmCYlasTg0uk9p2Ex6knyd0U6Vsp16pW%2BmMJaeQBfM%2FEQ6h2ZT21WCyvB49NBlgEc2%2B5SAwD18lBVa9jp2CXxyYQQcUWKgrsZ2m0qct5RpeuCTKifWn25cg9n6VTQjphqivMulc5Sl8svVbCbZ%2Bc1%2BEHm5nYd35ntiAHBTUYXpBzQfhKjCsGn0i87ysqwlAnduIFcQIxYC%2F%2BWZFMfYBqAH4GUsLIRROazTfoKFPPqTHiQCvWYAR6ICq0JZThx1fdTPTqywA3EezaGxl0gS5aRphJpRUdZbbUDlIinbhPs8cdOJdKzXXjYT0MLWPzpAGOqYBKJL8SW73K00ycpPMmvhI2qs9Za0Ss4bMuFFbZwRGwxMG5hP9XBRRUhoDInjO0WQC8%2FA6%2FxO%2B%2Bii0YZfLhdCXbh40FoW%2F3uaaXyQIM36P9fKPHXJx8ructIXPdMwJKjptvRNZvpWieEvAy4bFzM7KajCVLT6KTCqbJAUMN8Ib4uJrkKSgiEGXJgaitRhZSPzcCLlmTQnWfOVa0c2So9mRQEWfMTMZHw%3D%3D&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Date=20220221T132027Z&X-Amz-SignedHeaders=host&X-Amz-Expires=86400&X-Amz-Credential=ASIA5TVUEXNTMWQ7MHJR%2F20220221%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Signature=cc160a8870886cab21eb8ccb3e72642a608373022e8010c7d29c17d5fd049c8c)
## References
https://youtu.be/cLDdb_VZh_I
https://www.yuvatech.me/2021/10/voting-system-project-in-c-programming.html