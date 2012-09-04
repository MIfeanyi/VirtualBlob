
#envoirnment(s)
env = Environment()

#Flags
env.ParseConfig('sdl-config --cflags ')
env.ParseConfig('sdl-config --libs')
env.Append( CCFLAGS = ['-g', '-Wall'] )
env.Append( LIBS = [ 'SDL_mixer', 'SDL_image', 'SDL_ttf' ] )

#Build
env.Program(target='Bin/vb', source= Glob('Source/*.cpp') )


