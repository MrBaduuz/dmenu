/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Source Sans Variable:style=Regular:size=10",
	"NotoColorEmoji:fontformat=truetype:size=10:antialias=false"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char yellow[] = "#d79921";
static const char green[] = "#98971a";
static const char cyan[] = "#427b58";

static const char fg[] = "#ebdbb2";
static const char bg[] = "#3c3836";


static const char *colors[SchemeLast][3] = {
	/*     fg         bg       */
	[SchemeNorm] = { fg, bg },
	[SchemeNormHighlight] = { green, bg },
	[SchemeSel] = { fg, cyan },
	[SchemeSelHighlight] = { yellow, cyan },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeOutHighlight] = { "#ffc978", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
