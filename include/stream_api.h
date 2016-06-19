#ifndef STREAM_API_H
#define STREAM_API_H

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

struct stream_packet
{
    size_t size;
    uint8_t *data;
};

enum STREAM_PROTO_TYPE{
    STREAM_PROTO_RTSP_UNKOWN    = -1,
    STREAM_PROTO_RTMP     = 0,
    STREAM_PROTO_RTSP     = 1
};

struct stream_para
{
    int proto_type;
};

struct stream_context {
    struct stream_para para;
    void *stream; // pointer to stream context
};

void stream_register_all();
struct stream_context *stream_create_stream(struct stream_para *para);
int stream_send_packet();
int stream_recv_packet();
int stream_get_parameter();
int stream_set_parameter();
int stream_close_steam(struct codec_context *handle);

#endif