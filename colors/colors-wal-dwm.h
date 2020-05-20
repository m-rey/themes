static const char norm_fg[] = "#e8c8c2";
static const char norm_bg[] = "#222224";
static const char norm_border[] = "#a28c87";

static const char sel_fg[] = "#e8c8c2";
static const char sel_bg[] = "#cf6764";
static const char sel_border[] = "#e8c8c2";

static const char urg_fg[] = "#e8c8c2";
static const char urg_bg[] = "#CF6764";
static const char urg_border[] = "#CF6764";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
