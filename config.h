/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 10;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 40;
/* grid width and height for right center alignment */
static const int logow = 30;
static const int logoh = 10;

static XRectangle rectangles[29] = {
	/* x    y       w       h */
	{ 0,    0,      1,      1 },
	{ 1,    0,      1,      8 },
	{ 2,    0,      1,      1 },
	{ 4,    0,      1,      8 },
	{ 5,    2,      1,      1 },
	{ 6,    2,      1,      6 },
	{ 8,    0,      1,      1 },
	{ 8,    2,      1,      6 },
	{ 10,   2,      1,      6 },
	{ 11,   2,      1,      1 },
	{ 12,   2,      1,      6 },
	{ 14,   0,      1,      8 },
	{ 15,   5,      1,      1 },
	{ 16,   2,      1,      3 },
	{ 16,   6,      1,      2 },
	{ 18,   0,      1,      8 },
	{ 19,   0,      1,      1 },
	{ 19,   4,      1,      1 },
	{ 20,   1,      1,      3 },
	{ 22,   2,      1,      2 },
	{ 22,   5,      1,      3 },
	{ 23,   2,      1,      1 },
	{ 23,   4,      1,      1 },
	{ 23,   7,      1,      1 },
	{ 24,   2,      1,      6 },
	{ 26,   2,      1,      6 },
	{ 27,   2,      1,      1 },
	{ 27,   7,      1,      1 },
	{ 28,   0,      1,      8 },
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;
