***Pywal themes by plasmoduck***

Here is my collection of custom made (what I think are gorgeous) pywal themes for use with dwm and st.
Some themes contain a wallpaper which the colors are based off.

**To use**
Simply clone the repo and edit your dwm config.h and st config.h and point it to your theme of choice.

dwm

    Delete all defined colors in your config.h

    Delete the static const char *colors[] array.

    In its place, include wal's exported colors via:

    #include "/home/<USER>/.cache/wal/colors-wal-dwm.h"

(Replace <USER> with your username.)

NOTE: this #include must be on the same line as what was previously deleted.

This also assumes you have the "Urgent" color patch for dwm.

You can find the official patch here

If you have not or do not wish to patch dwm, you will need to delete the last line of pywal's exported config.

Q: "I do not have a *colors[] array in my config.h?"

A: 6.1 and older dwm releases do not include the *colors[] array and the colors are named differently than in the wal output. Please use the current git version of dwm, which can be found at http://git.suckless.org/dwm


st

    Remove all color definitions in your config.h
    Remove the const char *colorname[] array
    Include wal's export colors via:

#include "/home/<USER>/.cache/wal/colors-wal-st.h"

(replace <USER> with your user name)

NOTE: this #include must be on the same line as what was previously deleted. NOTE: there is a patch to st which loads a colorscheme from Xresources: https://st.suckless.org/patches/xresources/ NOTE: this #include would not work with alpha patch. If you want to make it work with alpha patch, you have to change colors-wal-st.h such that defaultbg is set to 257, defaultfg is set to 256. This creates light theme. For dark theme, the color represented by 256 and 257 must be swapped with each other.
