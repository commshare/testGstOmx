#!/bin/sh
GST=/home/zhangbin/zbhome/omx/bsp/ns115/media/scomx/gst
DST=$GST/home/gstomx
GST_OMX=$GST/gst-omx

cd $GST_OMX
./configure --prefix=$DST 
