#include <stdio.h>
#include <confuse.h>

int main(void)
{
    cfg_opt_t opts[] =
    {
        CFG_STR("target", "World", CFGF_NONE),
        CFG_END()
    };
    cfg_t *cfg;

    cfg = cfg_init(opts, CFGF_NONE);
    cfg_parse(cfg, "hello.conf");

    printf("Hello, %s!\n", cfg_getstr(cfg, "target"));

    cfg_free(cfg);
    return 0;
}

