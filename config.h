// See LICENSE file for copyright and license details.
// Default settings; can be overriden by command line.

static int topbar = 1; // -b  option; if 0, dmenu appears at bottom

// -fn option overrides fonts[0]; default X11 font or font set
static const char *fonts[] = {
	"monospace:pixelsize=15"
};
static const char *prompt = NULL; // -p  option; prompt to the left of input field
static const char *colors[SchemeLast][2] = {
	//              foreground  background
	[SchemeNorm] = { "#226ebf", "#090929" },
	[SchemeSel] =  { "#226ebf", "#0b0b44" },
	[SchemeOut] =  { "#9b9cb5", "#090929" },
};

// -l option; if nonzero, dmenu uses vertical list with given number of lines
static unsigned int lines = 10;

// -h option; minimum height of a menu line
static unsigned int lineheight = 28;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

// vim: filetype=c
