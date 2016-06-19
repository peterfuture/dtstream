#include "stream_api.h"

void stream_register_all()
{
    return;
}

struct stream_context *stream_create_stream(struct stream_para *para)
{
    struct stream_context *stream = (struct stream_context *)malloc(sizeof(struct stream_context));
    if(!stream)
        return NULL;
    return stream;
}

int stream_send_packet()
{
    return 0;
}

int stream_recv_packet()
{
    return 0;
}

int stream_get_parameter()
{
    return 0;
}

int stream_set_parameter()
{
    return 0;
}

int stream_close_steam(struct codec_context *handle)
{
    free(handle);
}