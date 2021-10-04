import time
import random

print("You Have 10 Points")
time.sleep(1.0)
print(".................\n")
time.sleep(2.0)
print("Loading>>>>>>>>>>>>\n")
time.sleep(3.0)
print("Generating Questions\n")
time.sleep(3.0)
print("Get Ready.....\n")
time.sleep(1.0)
print ("Start")

points = 10

level = 30
onLevel = 0
while level >= 0:
      level = level - 1
      operator = ['+', '-']
      onLevel += 1
      print("Level: ", onLevel)
      addsub = ("{} {} {}".format(random.randint(10,99),random.choice(operator),random.randint(1,50) ))
      multiply = ("{} * {}".format(random.randint(1,25),random.randint(1,25) ))
      randomQuest = [addsub,multiply]
      quest = random.choice(randomQuest)
      print(quest)
      solution = int(input())
      if solution == eval(quest):
         points +=5
         print("Correct")
         print("Points: {}\n".format(points))
      elif points == 30:
           print("Hurray game completed")
           exit()
      elif points == 0:
           print("Game Over")
           exit()
      else:    
           points -=5
           print("Incorrect")
           print("Points: {}\n".format(points))
