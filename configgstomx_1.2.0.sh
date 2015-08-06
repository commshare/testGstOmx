#!/bin/sh
GST=/home/zhangbin/zbhome/omx/bsp/ns115/media/scomx/gst
DST=$GST/home/omx
GST_OMX=$GST/gst-omx-1.2.0

cd $GST_OMX
./configure --prefix=$DST  --with-omx-target=bellagio 

echo "done"