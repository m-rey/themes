const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#222224", /* black   */
  [1] = "#CF6764", /* red     */
  [2] = "#65906B", /* green   */
  [3] = "#C29869", /* yellow  */
  [4] = "#8C718C", /* blue    */
  [5] = "#6F9697", /* magenta */
  [6] = "#9BA49B", /* cyan    */
  [7] = "#e8c8c2", /* white   */

  /* 8 bright colors */
  [8]  = "#a28c87",  /* black   */
  [9]  = "#CF6764",  /* red     */
  [10] = "#65906B", /* green   */
  [11] = "#C29869", /* yellow  */
  [12] = "#8C718C", /* blue    */
  [13] = "#6F9697", /* magenta */
  [14] = "#9BA49B", /* cyan    */
  [15] = "#e8c8c2", /* white   */

  /* special colors */
  [256] = "#222224", /* background */
  [257] = "#e8c8c2", /* foreground */
  [258] = "#e8c8c2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
