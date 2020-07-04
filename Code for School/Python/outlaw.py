#############################################
# Class:	CPTR 226 - Computer Science I
# Assignment:	Lab #3
# Author(s):	Cole Yeager, James Canarsky
# Date:		9/6/16
#############################################

print("Welcome to Outlaw!")
print("You have stolen a car to make your way across the border into Canada.")
print("The owners want their car back and are chasing you down!")
print("Survive your trek and outrun the owners.")
print()
done = False

import random

miles_traveled = 0
fuel_tank = 0
engine_stress = 0
owners_travel = -20
gas_cans = 5
forward_owners = random.randrange(0, 10)
full_speed = random.randrange(10, 20)
moderate_speed = random.randrange(5, 12)
gas_station = random.randrange(0, 21)

# Main loop
while not done:
    print("A. Use gas can.")
    print("B. Ahead moderate speed.")
    print("C. Ahead full speed.")
    print("D. Stop for the night.")
    print("E. Status check.")
    print("Q. Quit.")
    print()
    choice = input("Your Choice? ")
    print()
    if choice.upper() == "Q":
        done = True
        print("You Quit Loser!")
        print()

#E. Status check   
    elif choice.upper() == "E":
        print("Miles Traveled: ", miles_traveled)
        print("Gas Cans Left: ", gas_cans)
        print("The owners are", (owners_travel + 20), "miles behind you")
        print()

#D. Stop for the night
    elif choice.upper() == "D":
        engine_stress = 0
        print("The car is cooled down")
        owners_travel = owners_travel + forward_owners
        print("The owners are", owners_travel, "miles behind you.")
        print()
        
#C. Ahead full speed
    elif choice.upper() == "C":
        if gas_station == 1:
            print("Wow you found a gas station")
            gas_can = 5
            fuel_tank = 0
            engine_stress = 0
            print()

#B. Ahead moderate speed
        elif choice.upper() == "B":
            if gas_station == 1:
                print("Wow you found a gas station")
                gas_can = 5
                fuel_tank = 0
                engine_stress = 0
                print()
           
        
#A. Use gas can
    elif choice.upper() == "A":
        if gas_can >= 1:
            gas_can -= 1
            fuel_tank = 0
    else:
        miles_traveled = miles_traveled + moderate_speed
        print("You drove", moderate_speed, "miles")
        fuel_tank += 1
        engine_stress = engine_stress + random.randrange(1, 3)
        owners_travel = owners_travel + forward_owners
        print("The owners are", owners_travel, "miles behind you.")
        print()        
    if fuel_tank == 0:
        print("You have no gas cans left!")
        print()
    
    if gas_cans == 0:
        print("You have no gas left!")
        print()
    
    if miles_traveled >= 200:
        print("You have won!")
        done = True
    
    if not done and fuel_tank >= 6:
        print("You ran out of gas!")
        done = True
        print()
    
    if not done and fuel_tank >= 4:
        print("You are low on gas.")
        print()
    
    if not done and engine_stress >= 8:
        print("Your car is dead")
        done = True
        print()
    
    if not done and engine_stress >= 5:
        print("Your car is overheating.")
        print()
    
    if owners_travel >= miles_traveled:
        print("The owners have caught you!")
        done = True
        print()
    
    elif owners_travel <= 15:
        print("The owners are getting close!")
        print()


