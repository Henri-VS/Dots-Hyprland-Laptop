static const char norm_fg[] = "#94c5d5";
static const char norm_bg[] = "#0E1218";
static const char norm_border[] = "#678995";

static const char sel_fg[] = "#94c5d5";
static const char sel_bg[] = "#124A70";
static const char sel_border[] = "#94c5d5";

static const char urg_fg[] = "#94c5d5";
static const char urg_bg[] = "#2A505C";
static const char urg_border[] = "#2A505C";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
