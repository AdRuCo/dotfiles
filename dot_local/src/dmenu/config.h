/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=12"
};
static const unsigned int bgalpha = 0xe0;
static const unsigned int fgalpha = OPAQUE;
static const char *prompt = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#fbf1c7", "#282828" },
	[SchemeSel] = { "#fbf1c7", "#665c54" },
	[SchemeOut] = { "#282828", "#fbf1c7" },
	[SchemeHp] = { "#bbbbbb", "#333333" }
};
static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 5;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 30;
static unsigned int min_lineheight = 10;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static const unsigned int border_width = 3;
