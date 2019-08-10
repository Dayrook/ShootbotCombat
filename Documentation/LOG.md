20190810

jetpack replication was causing a lot of rubber banding. possibly to do with impulse applied in tiny bursts on event tick -- seems too reliant on tiny frame times between impulse. I moved impulse to its own function.





20190805

Getting this <modified> Error

> CDO Constructor(<gamemode>): Failed to Find: <directory>/SideScrollerCharacter.SideScrollerCharacter_C

I tried to solve by editing GameMode cpp [and succeeded at it 20190810], but there is another [Solution Here](https://answers.unrealengine.com/questions/127212/bdontloadblueprintoutsideeditortrue-by-default.html)

----------



used time dilation in Jetpack particle system

