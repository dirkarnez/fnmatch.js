fnmatch.js
==========
### API
- [fnmatch(3): match filename/pathname - Linux man page](https://linux.die.net/man/3/fnmatch)
- https://c-for-dummies.com/blog/?p=4813
- https://sites.uclouvain.be/SystInfo/usr/include/fnmatch.h.html
  - ```C
    /* Bits set in the FLAGS argument to `fnmatch'.  */
    #define        FNM_PATHNAME        (1 << 0) /* No wildcard can ever match `/'.  */
    #define        FNM_NOESCAPE        (1 << 1) /* Backslashes don't quote special chars.  */
    #define        FNM_PERIOD        (1 << 2) /* Leading `.' is matched only explicitly.  */
    
    #if !defined _POSIX_C_SOURCE || _POSIX_C_SOURCE < 2 || defined _GNU_SOURCE
    # define FNM_FILE_NAME         FNM_PATHNAME        /* Preferred GNU name.  */
    # define FNM_LEADING_DIR (1 << 3)        /* Ignore `/...' after a match.  */
    # define FNM_CASEFOLD         (1 << 4)        /* Compare without regard to case.  */
    # define FNM_EXTMATCH         (1 << 5)        /* Use ksh-like extended matching. */
    #endif
    ```
