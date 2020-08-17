#############################################
# Class:	CPTR 226 - Computer Science I
# Assignment:	Lab #6
# Author(s):	Cole Yeager, Shadrach Yasiah
# Date:		9/20/16
#############################################

6.1
x = 10

for row in range(9):
    for column in range(row+1):
        print ( x ,end=" ")
        x += 1
  
    # Print a blank line
    # to move to the next row
    print()


6.2

row = 5
column = row - 2
print ('o' * row)
for i in range(column):
    print ('o' + ' ' * column + 'o')
print ('o' * row)

6.3

n = 5

for row in range(n):
 
    for j in range(row):
        print ("",end="")
 
    for j in range(n - row):
        print (j,end=" ")
 
    print()
    
for row in range(n):
    for column in range(row+1):
        print (column,end=" ")
     
    print()    

6.3

n = 5

for row in range(n):
 
    for j in range(row):
        print ("",end="")
 
    for j in range(n - row):
        print (j,end=" ")
 
    print()
    
for row in range(n):
    for column in range(row+1):
        print (column,end=" ")
     
    print()    


6.4
import pygame
 
# Define some colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)
 
pygame.init()
 
# Set the width and height of the screen [width, height]
size = (700, 500)
screen = pygame.display.set_mode(size)
 
pygame.display.set_caption("My Game")
 
# Loop until the user clicks the close button.
done = False
 
# Used to manage how fast the screen updates
clock = pygame.time.Clock()
 
# -------- Main Program Loop -----------
while not done:
    # --- Main event loop
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            done = True
 
    # --- Game logic should go here
 
    # --- Screen-clearing code goes here
 
    # Here, we clear the screen to white. Don't put other drawing commands
    # above this, or they will be erased with this command.
 
    # If you want a background image, replace this clear with blit'ing the
    # background image.
    screen.fill(BLACK)
 
    # --- Drawing code should go here
    for y_offset in range(0, 500, 10):
        for x_offset in range(0, 700, 10):
            pygame.draw.rect(screen, GREEN,[0 + x_offset, 0 + y_offset, 5, 5],0)
    
 
    # --- Go ahead and update the screen with what we've drawn.
    pygame.display.flip()
 
    # --- Limit to 60 frames per second
    clock.tick(60)
 
# Close the window and quit.
pygame.quit()

