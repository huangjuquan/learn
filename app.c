#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>

typedef enum
{
    APP_STATE_NULL = 0,
    APP_STATE_MASK_WIFI_CONNECTED = 1,
    APP_STATE_MASK_WIFI_DISCONNETED = 2,
    APP_STATE_MASK_WIFI_CONNECTING = 3,
    APP_STATE_MASK_WIFI_ERROR = 4,
    APP_STATE_MASK_
}APP_STATE_E;

int app_get_link(AppLink_t *link, void *obj)
{
    
    return 0;
}

typedef struct 
{
    uint32_t utc;
    int pricever;
    int goodver;
    int adver;
    int softver;
    int hardver;
    int filever;
    int spricever;
    int sinfover;
    int index;
    uint64_t eslid;
    int number;
}AppLink_t;

typedef struct
{
    int (*app_udp_link)(AppLink_t *link, void* obj);
}AppHandler_t;

int app_init(void* ctx, AppHandler_t *handler);
int app_main(int argc, char *argv[]);


int app_main(int argc, char *argv[])
{
    // and i wonder if i ever 
    // parse argv
    
    // create thread and start
    while(1)
    {
        
    }
    
}

