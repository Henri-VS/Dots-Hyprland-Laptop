static const char norm_fg[] = "#e0edf2";
static const char norm_bg[] = "#13214a";
static const char norm_border[] = "#9ca5a9";

static const char sel_fg[] = "#e0edf2";
static const char sel_bg[] = "#4298D9";
static const char sel_border[] = "#e0edf2";

static const char urg_fg[] = "#e0edf2";
static const char urg_bg[] = "#2B72CC";
static const char urg_border[] = "#2B72CC";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
