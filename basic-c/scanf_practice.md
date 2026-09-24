# FOCP 1: Top 10 scanf() Exam Practice Questions

Fill in your answers in the `[ ] Your Answer:` spaces provided under each question. When you're finished, let me know and we'll grade them!

---

### Question 1
What does `scanf()` return when execution is successful?
- A) The sum of the values read
- B) The number of input items successfully matched and assigned
- C) Always returns 0
- D) The total number of characters read

**Your Answer:** [b]

---

### Question 2
What will be stored in variable `count` after running this code if the user types `10 20`?
```c
int a, b;
int count = scanf("%d %d", &a, &b);
```
- A) 30
- B) 10
- C) 2
- D) 0

**Your Answer:** [no clue not sure if part of syllabus]

---

### Question 3
If the user types `"hello"` for this code, what will `count` be?
```c
int num;
int count = scanf("%d", &num);
```
- A) 1
- B) 0
- C) -1
- D) Compiler error

**Your Answer:** [a]

---

### Question 4
Which format specifier MUST be used in `scanf()` to properly read a `double` variable?
```c
double salary;
scanf("___", &salary);
```
- A) `%f`
- B) `%.2f`
- C) `%lf`
- D) `%d`

**Your Answer:** [c]

---

### Question 5
For which of the following variables should you **NOT** use the `&` (address-of) operator in `scanf()`?
- A) `int age;`
- B) `float gpa;`
- C) `char grade;`
- D) `char name[20];`

**Your Answer:** [idk]

---

### Question 6
What happens if you use precision formatting like `%.2f` inside `scanf()`?
```c
float x;
scanf("%.2f", &x);
```
- A) It limits the user's input to 2 decimal places
- B) It rounds the user's input to 2 decimal places
- C) It is invalid in `scanf()` and causes unexpected behavior/failure
- D) It automatically converts the float into an integer

**Your Answer:** [a]

---

### Question 7
Given the following code:
```c
char city[30];
scanf("%s", city);
```
If the user inputs `New York`, what is stored inside `city`?
- A) `"New York"`
- B) `"New"`
- C) `"York"`
- D) An empty string `""`

**Your Answer:** [a]

---

### Question 8
Why do we put a space before `%c` in `scanf(" %c", &grade);`?
- A) To make the terminal print a space
- B) To skip any leftover whitespace and newlines (`\n`) from previous inputs
- C) It is required by C syntax for all `char` variables
- D) To make `scanf()` read faster

**Your Answer:** [b]

---

### Question 9
To prevent a buffer overflow when reading a word into `char username[20];`, which `scanf()` format is safest?
- A) `scanf("%20s", username);`
- B) `scanf("%19s", username);`
- C) `scanf("%s", &username);`
- D) `scanf("%c", username);`

**Your Answer:** [ ]

---

### Question 10 (Tricky Exam Question)
The `*` in a `scanf` format string acts as an **assignment suppression** character. What will be the values of `a` and `b` if the user enters `10 20 30`?
```c
int a, b;
scanf("%d %*d %d", &a, &b);
```
- A) `a = 10, b = 20`
- B) `a = 20, b = 30`
- C) `a = 10, b = 30`
- D) `a = 10, b = 0`

**Your Answer:** [ ]

