Cartoon FX Pack 2, version 1.7
2019/03/20
© 2019 - Jean Moreno
==============================


PREFABS
-------
Particle Systems prefabs are located in "CFX2 Prefabs" folder.
Particle Systems optimized for Mobile are located in "CFX2 Prefabs (Mobile)" folder.
They should work out of the box for most needs. If you need looping effect, check the according "Looping" checkbox for each Particle System (you can use the Cartoon FX Easy Editor for that too).
All Assets have a CFX2_ (Desktop) or CFXM2_ (Mobile) prefix so that you don't mix them with your own Assets.


MOBILE OPTIMIZED PREFABS
------------------------
Mobile prefabs feature the following optimizations:
- Added a particle additive shader that uses only the alpha channel to save up on texture memory usage
- Monochrome textures' format has been set to Alpha8 to get a much smaller memory size while retaining the same quality
- Other textures' formats have been set to PVRTC compression
- Textures have all been resized to small resolution sizes through Unity; you can however scale them up if you need better quality
- Particle Systems have been changed accordingly to retain color/transparency and overall quality compared to their desktop counterparts

It is recommended to use CFX Spawn System for object spawning on mobile (the system also works on any other GameObject, not just effects!), see below.


CARTOON FX EASY EDITOR
----------------------
You can find the "Cartoon FX Easy Editor" in the menu:
Window -> CartoonFX Easy Editor
It allows you to easily change one or several Particle Systems properties:
"Scale Size" to change the size of your Particle Systems (changing speed, velocity, gravity, etc. values to get an accurate scaled up version of the system; also, if the ParticleSystem uses a Mesh as Shape, it will automatically create a new scaled Mesh).
It will also scale lights' intensity accordingly if any are found.
Tip: If you don't want to scale a particular module, disable it before scaling the system and re-enable it afterwards!
"Set Speed" to change the playback speed of your Particle Systems in percentage according to the base effect speed. 100% = normal speed.
"Tint Colors" to change the hue only of the colors of your Particle Systems (including gradients).

The "Copy Modules" section allows you to copy all values/curves/gradients/etc. from one or several Shuriken modules to one or several other Particle Systems.
Just select which modules you want to copy, choose the source Particle System to copy values from, select the GameObjects you want to change, and click on "Copy properties to selected GameObject(s)".

"Include Children" works for both Properties and Copy Modules sections!


CARTOON FX SPAWN SYSTEM
-----------------------
CFX_SpawnSystem allows you to easily preload your effects at the beginning of a Scene and get them later, avoiding the need to call Instantiate. It is highly recommended for mobile platforms!
Create an empty GameObject and drag the script on it. You can then add GameObjects to it with its custom interface.
To get an object in your code, use CFX_SpawnSystem.GetNextObject(object), where 'object' is the original reference to the GameObject (same as if you used Instantiate).
Use the CFX_SpawnSystem.AllObjectsLoaded boolean value to check when objects have finished loading.


TROUBLESHOOTING
---------------
* Almost all prefabs have auto-destruction scripts for the Demo scene; remove them if you do not want your particle system to destroy itself upon completion.
* If you have problems with z-sorting (transparent objects appearing in front of other when their position is actually behind), try changing the values in the Particle System -> Renderer -> Sorting Fudge; as long as the relative order is respected between the different particle systems of a same prefab, it should work ok.
* Some prefabs work with the Collision module: you should add your own ground/planes to it for it to work properly (this includes debris hits, water drops and explosions prefabs). The children that have the Collision module enabled have a "COL" prefix in their names.
* Sometimes when instantiating a Particle System, it would start to emit before being translated, thus creating particles in between its original and desired positions. Drag and drop the CFX_ShurikenThreadFix script on the parent object to fix this problem.


PLEASE LEAVE A REVIEW OR RATE THE PACKAGE IF YOU FIND IT USEFUL!
Enjoy! :)


CONTACT
-------
Questions, suggestions, help needed?
Contact me at:

jean.moreno.public+unity@gmail.com

I'd be happy to see any effects used in your project, so feel free to drop me a line about that! :)


RELEASE NOTES
-------------
1.7.05
- Removed 'JMOAssets.dll', became obsolete with the Asset Store update notification system

1.7.04
- fixed small API deprecation (Unity 2017.4+)

1.7.03
- updated shaders so that they work on PS4
- updated shaders for GPU Instancing and Stereo Rendering
- updated effects with "Horizontal Billboard" particle render mode to "Billboard" with local alignment so that they can be freely rotated

1.7.02
- updated demo scene to use Unity UI system

1.7.01
- CartoonFX Easy Editor: fixed scaling for Unity 2017.1+

1.7 (Unity 5.6+)
- 15+ new effects:
	- Debris Hits/CFX2_RockHit
	- Debris Hits/CFX2_WoodHit
	- Electric/CFX2_SparksHit_B (+ sphere variant)
	- Explosions/CFX2_WWExplosion_B
	- Explosions/CFX2_WWExplosion_C (+ color variants)
	- Expressions/CFX2_Expression_Angry (+ frowns variant)
	- Expressions/CFX2_Expression_Happy
	- Expressions/CFX2_Expression_Loving
	- Expressions/CFX2_Expression_Confused
	- Expressions/CFX2_Expression_Sparkles
	- Expressions/CFX2_Expression_Stun
	- Misc/CFX2_Wandering_Spirits
	- Misc/CFX2_Disintegrate
	- Misc/CFX2_PowerAura_B
	- Water/CFX2_Big_Splash_Drops (+ no collision variant)
- fixes for some effects not acting properly
- updated demo with some of the new effects
- Cartoon FX Easy Editor: added "Hue Shift" slider
- Cartoon FX Easy Editor: improved UI
- updated version numbers to be more consistent (hence why previous version was 1.99.4)

1.64
- Cartoon FX Easy Editor bugfix when scaling shape module (Unity 2017.1)

1.63
- Cartoon FX Easy Editor bugfix when scaling (Unity 5.6)
- fixed duration for editor preview on some effects
- made rain effects to loop

1.62
- Cartoon FX Easy Editor bugfix

1.61
- Unity 5.5 compatibility

1.6
- fixed Spawn System property 'hideObjectsInHierarchy' not being saved properly
- added more options to the CFX Spawn System:
	* "Spawn as children of this GameObject": will spawn the instances as children of the Spawn System GameObject
	* "Only retrieve inactive GameObjects": will only retrieve GameObjects that are inactive
	* "Instantiate new instances if needed": will create new instances when no inactive instance is available

1.59
- fixed compilation warnings with Unity 5.3+
- fixed CFX_AutoDestructShuriken not working with some prefabs (Unity 5.3.1)

1.58
- put all shaders in the same folder
- fixed some mobile effects using desktop materials

1.57
- fixed script conflict with War FX

1.56
- fixed deprecated method warning in Unity 4.3+

1.55
- updated "JMO Assets" menu

1.54
- updated Demo scene

1.53
- fixed serialization error with InspectorHelp script on builds

1.52
- fixed warning in Unity 4.3+ for Spawn System editor

1.51
- fixed CFX_SpawnSystem not being set dirty when changed

1.5
- updated CFX Editor
- updated max particle count for each prefab to lower memory usage
- improved some effects:
	* removed world space simulation when unnecessary
	* disabled sort mode when unnecessary
	* removed velocity inherit when unnecessary
- added CFX Spawn System template prefab
- fixed rotation for Vertical Billboard particles

1.42
- updated CFX Editor

1.41
- bug and compatibility fixes

1.4
- updated CFX Editor
 (now in Window > CartoonFX Easy Editor, and more options)
- added JMO Assets menu (Window -> JMO Assets), to check for updates or get support

1.35
- Removed useless and missing scripts

1.34
- Fixed other Unity 4.1 incompatibilities

1.33
- Fixed Compilation error for CFX_SpawnSystem in Unity 4.1
- Fixed Cartoon FX editor scaling, now supports "Size by Speed"

1.32
- Fixed bugs from Unity 4.0 while retaining compatibility with 3.5

1.31
- Fixed bugs from migration to Unity 4.0

1.3
- Added CFX_SpawnSystem to easily preload GameObjects and avoid Instantiating them after (very useful for mobile!)
- You can now tint colors with CartoonFX Easy Editor (including gradients)
- Added a script fixing a Shuriken bug where an emitter would emit before being translated to the desired position

1.21
- Enabled MipMaps for Mobile textures (turns out it's better for perfs despite the negligible memory overhead)
- Set compression to automatic (PVRTC doesn't work for Android)

1.2
- added 4 new effects: Bats Cloud, Souls Escaping, Poison Cloud and Broken Heart (+variants)
- removed the demo scripts from the prefabs
- added auto destruct script to some prefabs

1.1
- added 10 new item pickup effects
- added random starting rotation for ground decal textures
- improved the ShinyStar texture