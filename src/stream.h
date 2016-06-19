#ifndef stream_H
#define stream_H

#include "stream_api.h"

struct stream_ops {
    const char *name;
    int proto_type;
    struct stream_para para;

    int (*open)(struct stream_ops *stream);
    int (*send)(struct stream_ops *stream, struct codec_packet * pkt);
    int (*get_info)(struct stream_ops *stream);
    int (*set_info)(struct stream_ops *stream);
    int (*close)(struct stream_ops *stream);

    void *priv;
    struct stream_ops *next;
};

struct stream
{
    struct steam_para para;
    struct stream_ops *stream;
};

#endif