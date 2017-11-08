#ifndef LQE_H
#define LQE_H


#define LL_WARNING 3
#define lqeLog11(fmt, ...) do{ \
	    char lqefmt[10240];\
	    strcpy(lqefmt, "******[lqe][%s][%d]");\
	    strcat(lqefmt, fmt);\
	    strcat(lqefmt, "\n");\
	    serverLog(LL_WARNING, lqefmt, __FILE__, __LINE__, __VA_ARGS__);\
}while(0)

#define lqeLog(fmt, ...) do{ \
	    char lqefmt[10240];\
	    strcpy(lqefmt, "******[lqe][%-20s][%-6d]");\
	    strcat(lqefmt, fmt);\
	    strcat(lqefmt, "\n");\
	    printf(lqefmt, __FILE__, __LINE__, __VA_ARGS__);\
}while(0)

#define Log(str) lqeLog(str, "") 


#endif
