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
	[SchemeNorm] = { "#226ebf", "#0a0a30" },
	[SchemeSel] =  { "#226ebf", "#10105b" },
	[SchemeOut] =  { "#9b9cb5", "#0a0a30" },
};

// -l option; if nonzero, dmenu uses vertical list with given number of lines
static unsigned int lines = 0;

// -h option; minimum height of a menu line
static unsigned int lineheight = 28;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

// vim: filetype=c
