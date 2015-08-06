#!/bin/sh
GST=/home/zhangbin/zbhome/omx/bsp/ns115/media/scomx/gst
DST=$GST/home/omx
OMX=$GST/libomxil-bellagio-0.9.1

cd $OMX
./configure --prefix=$DST 
