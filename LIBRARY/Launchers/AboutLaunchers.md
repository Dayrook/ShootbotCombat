# Launchers

The only experience I've had so far with successfully running multiplayer is via Unreal Editor. 

You launch the editor with a shortcut that passes a few arguments to set up the connection.

I'm keeping those launchers here to make playtesting easier.

# Instructions

In the shortcut file properties (right click --> properties) each player may need to reconfigure the Target and Start In fields

*include quotes marks in field entries shown below*



## Client

**Target**
`"E:\Program Files\UE_4.22\Engine\Binaries\Win64\UE4Editor.exe" D:\Unreal_PROJECTS\ShootbotCombat\ShootbotCombat.uproject 136.33.180.93 -game`

**Start in**
`"E:\Program Files\UE_4.22"`



## Server

**Port forwarding should be set up first**

then use external IP address in Target field

**Target**

`"E:\Program Files\UE_4.22\Engine\Binaries\Win64\UE4Editor.exe" D:\Unreal_PROJECTS\ShootbotCombat\ShootbotCombat.uproject SideScrollerExampleMap?listen -game`

**Start in**
`"E:\Program Files\UE_4.22"`

