import pygame as pg
vec = pg.math.Vector2

WHITE = (255, 255, 255)
BLACK = (0, 0, 0)          # A lighter black (charcoal)
DARKGREY = (80, 80, 80)       # Slightly lighter dark grey
LIGHTGREY = (200, 200, 200)   # A paler light grey
GREEN = (0, 150, 0)           # A darker green
RED = (150, 0, 0)             # A deeper red
YELLOW = (180, 180, 50)       # A mustard yellow
BROWN = (160, 82, 45)         # A slightly richer brown
CYAN = (0, 150, 150)          # A deeper cyan


WIDTH = 1711   # 16 * 64 or 32 * 32 or 64 * 16
HEIGHT = 1112  # 16 * 48 or 32 * 24 or 64 * 12
FPS = 99999
TITLE = "OPP OPPA"
BGCOLOR = CYAN

TILESIZE = 128
GRIDWIDTH = WIDTH / TILESIZE
GRIDHEIGHT = HEIGHT / TILESIZE

# Player settings
PLAYER_HEALTH = 800
PLAYER_SPEED = 400
PLAYER_ROT_SPEED = 200
PLAYER_IMG = 'manBlue_gun.png'
PLAYER_HIT_RECT = pg.Rect(0, 0, 35, 35)
BARREL_OFFSET = vec(30, 10)

BULLET_IMG = 'bullet.png'
EXPLOSION_IMG = 'explosion.png'

WEAPONS = {}
WEAPONS['pistol'] = {'bullet_speed': 600,
                     'bullet_lifetime': 1000,
                     'rate': 115,
                     'kickback': 200,
                     'spread': 2,
                     'damage': 80,
                     'bullet_size': 'lg',
                     'bullet_count': 1}
WEAPONS['shotgun'] = {'bullet_speed': 400,
                      'bullet_lifetime': 5000,
                      'rate': 1500,
                      'kickback': 500,
                      'spread': 40,
                      'damage': 20,
                      'bullet_size': 'sm',
                      'bullet_count': 500}
WEAPONS['hell'] = {'bullet_speed': 500,
                    'bullet_lifetime': 2500,
                    'rate': 1750,
                    'kickback': 1000,
                    'spread': 360,
                    'damage': 50,
                    'bullet_size': 'xl',
                    'bullet_count': 2500
}

# Mob settings
MOB_IMG = 'manBrown_hold.png'
MOB_SPEEDS = [150, 100, 75, 25]
MOB_HIT_RECT = pg.Rect(0, 0, 30, 30)
MOB_HEALTH = 200
MOB_DAMAGE = 20
MOB_KNOCKBACK = 20
AVOID_RADIUS = 50
DETECT_RADIUS = 50000

# Effects
MUZZLE_FLASHES = ['whitePuff15.png', 'whitePuff16.png', 'whitePuff17.png',
                  'whitePuff18.png']
SPLAT = 'splat red.png'
FLASH_DURATION = 50
DAMAGE_ALPHA = [i for i in range(0, 255, 55)]

# Layers
WALL_LAYER = 1
PLAYER_LAYER = 2
BULLET_LAYER = 0
MOB_LAYER = 2
EFFECTS_LAYER = 4
ITEMS_LAYER = 1

# Items
ITEM_IMAGES = {'health': 'health_pack.png',
               'shotgun': 'obj_shotgun.png',
               'hell':'hell.png'}
HEALTH_PACK_AMOUNT = 999
BOB_RANGE = 10
BOB_SPEED = 0.9

# Sounds
BG_MUSIC = 'espionage.ogg'
PLAYER_HIT_SOUNDS = ['pain/8.wav', 'pain/9.wav', 'pain/10.wav', 'pain/11.wav']
ZOMBIE_MOAN_SOUNDS = ['brains2.wav', 'brains3.wav', 'zombie-roar-1.wav', 'zombie-roar-2.wav',
                      'zombie-roar-3.wav', 'zombie-roar-5.wav', 'zombie-roar-6.wav', 'zombie-roar-7.wav']
ZOMBIE_HIT_SOUNDS = ['splat-15.wav']
WEAPON_SOUNDS = {'pistol': ['pistol.wav'],
                 'shotgun': ['shotgun.wav'],
                 'hell':['hell.wav']}
EFFECTS_SOUNDS = {'level_start': 'level_start.wav',
                  'health_up': 'health_pack.wav',
                  'gun_pickup': 'gun_pickup.wav'}
