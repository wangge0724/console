/**
 * @brief   A method of printing with several levels(refering to `printk`) and logging messages into log-file.
 *
 * @author  lycon
 * @blog    https://lk361115629.github.io/
 * @github  https://github.com/lk361115629
 */
#ifndef  __CONSOLE_H
#define  __CONSOLE_H




typedef struct {
/* private: */
    const char * log_file;
    const char * level_file;
/* public: */
    void (*init)(const char * log_file, const char * level_file);
    int  (*print)(const char *fmt, ...);
    int  (*log)(const char *fmt, ...);
    const char * (*time)(char *timestr);
} Console;


#define LOG_EMERG     "<0>" /* system is unusable               */
#define LOG_ALERT     "<1>" /* action must be taken immediately */
#define LOG_CRIT      "<2>" /* critical conditions              */
#define LOG_ERR       "<3>" /* error conditions                 */
#define LOG_WARNING   "<4>" /* warning conditions               */
#define LOG_NOTICE    "<5>" /* normal but significant condition */
#define LOG_INFO      "<6>" /* informational                    */
#define LOG_DEBUG     "<7>" /* debug-level messages             */


#define LEVEL_EMERG     0 /* system is unusable               */
#define LEVEL_ALERT     1 /* action must be taken immediately */
#define LEVEL_CRIT      2 /* critical conditions              */
#define LEVEL_ERR       3 /* error conditions                 */
#define LEVEL_WARNING   4 /* warning conditions               */
#define LEVEL_NOTICE    5 /* normal but significant condition */
#define LEVEL_INFO      6 /* informational                    */
#define LEVEL_DEBUG     7 /* debug-level messages             */

#define LEVEL_DEFAULT   LEVEL_WARNING


extern Console console;



#endif
