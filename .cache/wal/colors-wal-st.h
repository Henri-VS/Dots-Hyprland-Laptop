const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0E1218", /* black   */
  [1] = "#2A505C", /* red     */
  [2] = "#124A70", /* green   */
  [3] = "#585A5C", /* yellow  */
  [4] = "#955137", /* blue    */
  [5] = "#1C6896", /* magenta */
  [6] = "#517789", /* cyan    */
  [7] = "#94c5d5", /* white   */

  /* 8 bright colors */
  [8]  = "#678995",  /* black   */
  [9]  = "#2A505C",  /* red     */
  [10] = "#124A70", /* green   */
  [11] = "#585A5C", /* yellow  */
  [12] = "#955137", /* blue    */
  [13] = "#1C6896", /* magenta */
  [14] = "#517789", /* cyan    */
  [15] = "#94c5d5", /* white   */

  /* special colors */
  [256] = "#0E1218", /* background */
  [257] = "#94c5d5", /* foreground */
  [258] = "#94c5d5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
