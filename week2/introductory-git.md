# Week 2 exercise observations

1. $ cd ~ -- returned to home directory

2. $ git init portfolio -- made a git repository in home/student/portfolio/.git/ idk what git is yet tho

3. $ cd portfolio -- changes directory to portfolio

4. $ ls -al -- lists all folders within portfolio, including .git

5. $ git status -- on branch master, no commits? what is that?

6. $ echo hello > .gitignore -- puts hello in to .gitignore

7. $ git add -A -- no idea what this

8. $ git status -- tells us that there is a new file '.gitignore' that has not been commited yet

9. $ git config --global user.email “sx004098@student.reading.ac.uk” -- makes the email as the global email for machine

10. $ git config –global user.name “Aadil Sattar” -- makes the name as the global name for machine

11. $ git commit -m “first commit, adding week 1 content” -- commits the first edit and labels it (this can allow you to go back)

12. $ git status -- shows us the status of the git, which has now been committed

13. $ git push -- this shows us how to push it to git 

14. $ git remote add origin https://csgitlab.reading.ac.uk/sx004098/cs1pc20_portfolio.git -- connects to csgitlab.reading.ac.uk at the cs1pc20_portfolio.git file

15. $ git push -–set-upstream origin master -- pushs it to the git file, while also asking you to log in

16. $ git status -- no commits

17. $ echo “# CS1PC20 Portfolio” > readme.md

18. $ git add readme.md

19. $ git commit -m “added readme file” -- connotes the readme.md change

20. $ git push -- pushes it to csgitlab

21. $ git config –-global credential.helper cache -- ???

22. $ git branch week2 -- creates a git branch named week2

23. $ git checkout week2 -- switches to week2 branch

24. $ mkdir week2 -- creates week2 directory

25. $ echo “# Week 2 exercise observations” > week2/report.md -- adds the words to report.md in week2

26. $ git status -- report.md not added in week2

27. $ git add week2 -- adds in report.md to week2

28. $ git commit -m “added week 2 folder and report.md” -- commits the new change

29. $ git push -- pushes this new change to to csgitlab

30. $ git checkout master -- switches to master branch

31. $ ls -al -- lists everything in the master branch

32. $ git checkout week2 -- switches to week2 branch

33. $ ls -al -- lists everything in the week2 branch

34. $ git checkout master -- switches back to master branch

35. $ git merge week2 -- already up to date/merges master and week2 to master

36. $ ls -al -- week2 stuff now in master

37. $ git push -- already up to date

38. $ rm -r week2 -- removes week2 branch

39. $ rm -r week1 -- removes week1 branch

40. $ ls -al -- lists master branch with no other merged

41. $ git status -- tells us we haven't updated on deleting the branch

42. $ git stash -- displays state 

43. $ git stash drop -- brings the state back

44. $ ls -al -- week2 is back!!

37. $ cd ~ -- goes back to home directory

38. $ cp -r portfolio portfolio_backup -- creates backup of portfolio

39. $ rm -rf portfolio -- removes original portfolio 

40. $ ls -al -- only portfolio backup remains

41. $ git clone https://csgitlab.reading.ac.uk/sx004098/cs1pc20_portfolio portfolio --clones in from portfolio

42. $ ls -al -- portfolio is back!!
