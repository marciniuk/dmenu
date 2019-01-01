# dmenu - dynamic menu

This project is fork of [dmenu (dynamic menu)](https://tools.suckless.org/dmenu) with some additional features:
* Line height patch that adds `-h` option, which sets the minimum height of a dmenu line. This helps integrate dmenu with other UI elements that require a particular vertical size.
* Basic mouse support
* Default [BlackArrow](https://gitlab.com/xXBlackMaskXx/blackarrow) colors.
* Default font is system "`monospace`" at 15pt, meaning the font will match your system font.

## Installation

Make sure you have [dependencies](#dependencies) installed before you install dmenu.

```shell
$ cd ~/.config
$ git clone https://gitlab.com/xXBlackMaskXx/dmenu
$ cd dmenu
$ sudo make clean install
```

### Dependencies 

Probably you have some required packages on your system already. "No" means that it is recommended as it is needed for some features, but they aren't needed to make `dmenu` work.

| Required? | Package name | Description
|-----------|--------------|------------
| Yes       | git          | Distributed version control system
| Yes       | make         | Build utility
| Yes       | libx11       | X11 client-side library
| Yes       | libxinerama  | X11 Xinerama extension library
| Yes       | libxft       | FreeType-based font drawing library for X
| Yes/No    | fontconfig   | Library for configuring fonts, required for default build as it asks for your system `mono` font
