# FREEDOOM DOS Executable
Made using the DOS Doom source code reconstruction from the [gamesrc-ver-recreation](https://bitbucket.org/gamesrc-ver-recreation/doom/src/master/) repo.  
This source code and the executables it generates are intended to be used with the [latest autobuild of FREEDOOM.](http://freedoom.soulsphere.org/)  
This source code should only be used to build DOOM 2 v1.9 and Ultimate DOOM v1.9 executables. the setup program is not included, however the DOOM 2/Ultimate DOOM setup program should work fine with this.  
All strings from FREEDOOM are implemented, though one of the quit screen messages had to be shortened, as the full message would not display.

## Usage
due to the MS-DOS 8-character filename limit, the ``FREEDOOM1.wad`` and ``FREEDOOM2.wad`` files must be renamed to ``doom.wad`` and ``doom2.wad`` respectively for the game to run.

## Compiling
TODO (i am not good at explanations)
Notes in the meantime:  
A successful compilation should output ``NEWDOOM.EXE`` (includes DOS extender) and ``STRPDOOM.EXE`` (does not include DOS extender).  
Watcom C/C++ 9.5b and Borland Turbo Assembler (``TASM.EXE``) 3.1 are requirements.  
The DMX sound library is also needed. [APODMX](https://bitbucket.org/gamesrc-ver-recreation/apodmx/src/master/) is an option if you do not want to use or cannot obtain the DMX libraries. 
Read ``notes_restoration.md`` for an explanation on how to compile. (does not explain installing the compiler and assembler)  

## License
As this is a modification of the open source release of the DOOM source code, this source code is under the GNU GPL.
