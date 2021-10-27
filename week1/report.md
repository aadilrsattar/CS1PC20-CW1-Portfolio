    1  sudo apt update
    2  gcc
    3  sudo apt install gcc
    4  make
    5  sudo apt install make
    6  sudo apt install doxygen
    7  sudo apt install git
    8  sudo apt install textlive-latex-base
    9  sudo apt install texlive-latex-base
   10  sudo apt install texlive-fonts-recommended texlive-fonts-extra texlive-latex-extra
   11  sudo apt install plantuml
   12  sudo apt install graphviz
   13  shotdown now
   14  sudo shutdown now
   15  vim
   16  nano
   17  ls -al
   18  history
   19  vim .bash_history 
   20  sudo shutdown now
   21  exit
   22  sudo shutown now
   23  sudo shutdown now
   24  ls
   25  mkdir -p $HOME/portfolio/week1
   26  cd ~
   27  ls
   28  rm -r portfolio
   29  ls
   30  mkdir -p $HOME/portfolio/week1
   31  cd ~
   32* cd $HOME/portfolio/week
   33  cd~
   34  cd ~
   35  rm -r portfolio/
   36  echo "Hello World"
   37  echo Hello World
   38  echo Hello, World
   39  echo Hello, World; Foo bar
   40  echo Hello, World!
   41  echo "line one";echo "line two"
   42  echo "Hello, world > readme"
   43  echo "Hello, world" > readme
   44  ls
   45  cat readme
   46  echo a
   47  echo 'a'
   48  echo "a"
   49  echo ''a''
   50  echo $example
   51  echo '$example'
   52  echo "$example"
   53  ls
   54  bc
   55  echo "Please enter your name";read example
   56  echo "hello $example"
   57  three=1+1+1;echo$three
   58  three=1+1+1;echo $three ----> Only prints 1+1+1
   59  bc
   60  echo 1+1+1 | bc 
   61  let three=1+1+1;echo $three ----> Prints 3
   62  three=1+1+1;echo $three
   63  echo date
   64  cal
   65  /bin/cal
   66  $(which cal)
   67  'which cal'
   68  cd /bin/cal
   69  echo "The date is $(date)"
   70  sez 0 9
   71  sec 0 9
   72  seq 0 9
   73  seq 0 9 | wc -l
   74  sec 0 9 > sequence
   75  seq0 9 > sequence
   76  seq 0 9 > sequence
   77  cat sequence
   78  wc -l < sequence
   79  for i in $(seq 1 9); do echo $i;done
   80  seq 0 9 | wc -l
   81  cat sequence
   82  for i in $(seq 1 9); do echo $i ; done
   83  for i in $(seq 1 9); do echo $l ; done
   84  for i in $(seq 1 9); do echo $i ; done
   85  for i in $(seq 1 9); do echo $i stop; done
   86  echo -e '#include <stdio.h>\nint main(void) \n{\n printf("Hello World\\n");\n return 0;\n)'>hello.c
   87  cat hello.c
   88  gcc hello.c -o hello
   89  echo -e '#include <stdio.h>\nint main(void) \n{\n printf("Hello World\\n");\n return 0;\n}'>hello.c
   90  cat hello.c
   91  gcc hello.c -o hello
   92  ./hello
   93  history
   94* 
   95  cat report.md
   96  nano report.md 
   97  (echo -n 0; for i in $(seq 1 9) ; do echo -n +$i; done ; echo) | bc
   98  ls
   99  nano report.md
  100  history > report.md
