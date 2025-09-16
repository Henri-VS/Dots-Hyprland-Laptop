const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#13214a", /* black   */
  [1] = "#2B72CC", /* red     */
  [2] = "#4298D9", /* green   */
  [3] = "#609ED9", /* yellow  */
  [4] = "#94ADD0", /* blue    */
  [5] = "#A9D9F0", /* magenta */
  [6] = "#C7DAEB", /* cyan    */
  [7] = "#e0edf2", /* white   */

  /* 8 bright colors */
  [8]  = "#9ca5a9",  /* black   */
  [9]  = "#2B72CC",  /* red     */
  [10] = "#4298D9", /* green   */
  [11] = "#609ED9", /* yellow  */
  [12] = "#94ADD0", /* blue    */
  [13] = "#A9D9F0", /* magenta */
  [14] = "#C7DAEB", /* cyan    */
  [15] = "#e0edf2", /* white   */

  /* special colors */
  [256] = "#13214a", /* background */
  [257] = "#e0edf2", /* foreground */
  [258] = "#e0edf2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
