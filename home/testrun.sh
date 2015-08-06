#!/bin/sh
GST=/home/zhangbin/zbhome/omx/bsp/ns115/media/scomx/gst/home
export GST_PLUGIN_PATH=$GST/gstpluginbase/lib/gstreamer-1.0
export LD_LIBRARY_PATH=$GST/omx/lib:$LD_LIBRARY_PATH

echo "done for run"
