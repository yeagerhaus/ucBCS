import pygame
 
# Define some colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
RED = (255, 0, 0)
BLUE = (0, 0, 255)
GREEN = (0, 255, 0)
 
 
class Player(pygame.sprite.Sprite):
    """ The class is the player-controlled sprite. """
 
    # -- Methods
    def __init__(self, x, y):
        """Constructor function"""
        # Call the parent's constructor
        super().__init__()
 
        # Set height, width
        self.image = pygame.Surface([15, 15])
        self.image.fill(WHITE)
 
        # Make our top-left corner the passed-in location.
        self.rect = self.image.get_rect()
        self.rect.x = x
        self.rect.y = y
 
        # -- Attributes
        # Set speed vector
        self.change_x = 0

 
    def changespeed(self, x, y):
        """ Change the speed of the player"""
        self.change_x += x

 
    def update(self):
        """ Find a new position for the player"""
        self.rect.x += self.change_x
        if self.rect.x < 0:
            self.rect.x = 0
        if self.rect.x > 685:
            self.rect.x = 685
        

class Bullet(pygame.sprite.Sprite):
    """ This class represents the bullet . """
    def __init__(self):
        # Call the parent class (Sprite) constructor
        super().__init__()
 
        self.image = pygame.Surface([4, 10])
        self.image.fill(WHITE)
 
        self.rect = self.image.get_rect()
 
    def update(self):
        """ Move the bullet. """
        self.rect.y -= 3

class Enemy(pygame.sprite.Sprite):
    
    def __init__(self, row, column):
        pygame.sprite.Sprite.__init__(self)
        self.image = pygame.Surface([25, 25])
        self.row = row
        self.column = column
        self.rect = self.image.get_rect()
        self.name = 'enemy'
        self.vectorx = 1
        self.moveNumber = 0
        self.moveTime = MOVETIME
        self.timeOffset = row * TIMEOFFSET
        self.timer = pygame.time.get_ticks() - self.timeOffset


    def update(self, keys, currentTime):
        if currentTime - self.timer > self.moveTime:
            if self.moveNumber < 6:
                self.rect.x += MOVEX * self.vectorx
                self.moveNumber += 1
            elif self.moveNumber >= 6:
                self.vectorx *= -1
                self.moveNumber = 0
                self.rect.y += MOVEY
                if self.moveTime > 100:
                    self.moveTime -= 50
            self.timer = currentTime
 
def main():
    pygame.init()
    
    # Set the height and width of the screen
    screen = pygame.display.set_mode([700, 400])
        
    # Player
    player = Player(50, 370)
    all_sprites_list = pygame.sprite.Group()
    all_sprites_list.add(player)
    
    #Bullet List
    bullet_list = pygame.sprite.Group()
    
     
    # Loop until the user clicks the close button.
    done = False
     
    # Used to manage how fast the screen updates
    clock = pygame.time.Clock()
     
    score = 0    
    
    # -------- Main Program Loop -----------
    while not done:
        for event in pygame.event.get(): 
            if event.type == pygame.QUIT: 
                done = True
        
            # Set the speed based on the key pressed
            elif event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    player.changespeed(-3, 0)
                elif event.key == pygame.K_RIGHT:
                    player.changespeed(3, 0)
    
                    player.changespeed(0, 3)
                elif event.key == pygame.K_SPACE:
                    # Fire a bullet if the user clicks the mouse button
                    bullet = Bullet()
                    # Set the bullet so it is where the player is
                    bullet.rect.x = player.rect.x + 6
                    bullet.rect.y = player.rect.y
                    # Add the bullet to the lists
                    all_sprites_list.add(bullet)
                    bullet_list.add(bullet)            
     
            # Reset speed when key goes up
            elif event.type == pygame.KEYUP:
                if event.key == pygame.K_LEFT:
                    player.changespeed(3, 0)
                elif event.key == pygame.K_RIGHT:
                    player.changespeed(-3, 0)
                                  
        
        # This calls update on all the sprites
        all_sprites_list.update()    
     
        #for block in goodblocks_hit_list:
            #score += 1
            #print(score)   
     
        # Clear the screen
        screen.fill(BLACK)
        
        # Draw all the spites
        all_sprites_list.draw(screen)
        
        # Select the font to use, size, bold, italics
        font = pygame.font.SysFont('Calibri', 25, True, False)
         
        # Prints the score onto the screen
        text = font.render("Score: " + str(score), True, GREEN)
         
        # Put the image of the text on the screen at 250x250
        screen.blit(text, [0, 0])    
     
        # Go ahead and update the screen with what we've drawn.
        pygame.display.flip()
     
        # Limit to 60 frames per second
        clock.tick(60)
     
    pygame.quit()

if __name__ == "__main__":
    main()