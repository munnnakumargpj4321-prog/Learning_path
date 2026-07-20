import random

def generate_math_problem():
    num1 = random.randint(1, 10)
    num2 = random.randint(1, 10)
    operator = random.choice(['+', '-', '*', '/'])
    problem = f"{num1} {operator} {num2}"
    return problem

points = 0
while True:
    quit_choice = input("Enter 'q' to quit(and anything else to continue): ")
    if quit_choice == 'q':
        print("======================================")
        print("       You got", points, "points.")
        print("======================================")
        break
    problem = generate_math_problem()
    print(problem)
    user_answer = float(input("Enter your answer: "))
    if user_answer == eval(problem):
        print("Correct!")
        points += 1
        continue
    elif user_answer != eval(problem):
        print("Incorrect. The correct answer is", eval(problem))
        continue
