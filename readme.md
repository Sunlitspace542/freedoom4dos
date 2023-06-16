# FREEDOOM DOS Executable
Made using the DOS Doom source code reconstruction from the [gamesrc-ver-recreation](https://bitbucket.org/gamesrc-ver-recreation/doom/src/master/) repo.  
This source code and the executables it generates are intended to be used with the [latest autobuild of FREEDOOM.](http://freedoom.soulsphere.org/)  
This source code should only be used to build Doom 2 v1.9 and Ultimate Doom v1.9 executables. the setup program is not included, however the Doom 2/Ultimate Doom setup program should work fine with this.  

## Differences from vanilla DOOM
- Raised limits to match those in Doom-Plus
- Added text strings from Freedoom's DEHACKED lump (one of the quit messages had to be shortened, however)
- "Sky Never Changes in Doom II" bugfix enabled for all Doom 2 engine versions

## Known issues
- Game may crash on exit from MAP11 onwards (at least on DOSBox)
 
## Usage
due to the MS-DOS 8-character filename limit, the ``FREEDOOM1.wad`` and ``FREEDOOM2.wad`` files must be renamed to ``doom.wad`` and ``doom2.wad`` respectively for the game to run.  
the executables should run fine under DOSBox.

## Compiling
TODO (i am not good at explanations)  
Notes in the meantime:  
A successful compilation should output ``NEWDOOM.EXE`` (includes DOS extender) and ``STRPDOOM.EXE`` (does not include DOS extender).  
Watcom C/C++ 9.5b and Borland Turbo Assembler (``TASM.EXE``) 3.1 are requirements.  
The DMX sound library is also needed. [APODMX](https://bitbucket.org/gamesrc-ver-recreation/apodmx/src/master/) is an option if you do not want to use or cannot obtain the DMX libraries. 
Read ``notes_restoration.md`` for an explanation on how to compile. (does not explain installing the compiler and assembler)  

## Licenses
The Doom engine is under the GPL v2 license.  (see ``gpl-2.0.txt`` or ``LICENSE.md``)  
Freedoom is under its own license. (see ``COPYING.adoc``)
