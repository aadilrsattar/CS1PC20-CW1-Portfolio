1. $ mkdir -p $HOME/portfolio/week1 ; cd $HOME/portfolio/week1
2. $ cd ~
3. $ rm -r portfolio
4. $ mkdir -p $HOME/portfolio/week1 & cd $HOME/portfolio/week1
5. $ cd ~
6. $ rm -r portfolio
7. $ mkdir -p $HOME/portfolio/week1 && cd $HOME/portfolio/week1
8. $ echo "Hello World"
9. $ echo Hello, World
10. $ echo Hello, world; Foo bar
11. $ echo Hello, world!
12. $ echo "line one";echo "line two"
13. $ echo "Hello, world > readme"
14. $ echo "Hello, world" > readme
15. $ cat readme
16. $ example="Hello, World"
17. $ echo $example
18. $ echo ’$example’
19. $ echo "$example"
20. $ echo "Please enter your name."; read example
21. $ echo "Hello $example"
22. $ three=1+1+1;echo $three
23. $ bc
24. $ echo 1+1+1 | bc
25. $ let three=1+1+1;echo $three
CS1PC20, Exercise – Week 1 3/5
26. $ echo date
27. $ cal
28. $ which cal
29. $ /bin/cal
30. $ $(which cal)
31. $ ‘which cal‘
32. $ echo "The date is $(date)"
33. $ seq 0 9
34. $ seq 0 9 | wc -l
35. $ seq 0 9 > sequence
36. $ wc -l < sequence
37. $ for I in $(seq 1 9) ; do echo $I ; done
38. $ (echo -n 0 ; for I in $(seq 1 9) ; do echo -n +$I ; done ; echo) | bc
39. $ echo -e ‘#include <stdio.h>\nint main(void) \n{\n printf(“Hello World\\n”);\n return 0;\n}’ > hello.c
40. $ cat hello.c
41. $ gcc hello.c -o hello
42. $ ./hello
