# Console

A method of printing with several levels(refering to `printk`) and logging messages into log-file.

## APIs

```C
/* print on terminal(with specified level) */
int console.print(const char *fmt, ...);
/* log into file(with file-name and line-number) */
int console.vlog (const char *fmt, ...);
```

> It's simple, view test.c for more...

