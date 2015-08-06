#!/bin/sh
GST=/home/zhangbin/zbhome/omx/bsp/ns115/media/scomx/gst
#/home/zhangbin/zbhome/omx/bsp/ns115/media/scomx/gst/home/gstpluginbase

DST=$GST/home/gstpluginbase
GST_OMX=$GST/gst-plugins-base-1.2.3

cd $GST_OMX
echo "NOW WE ARE : `pwd`"

./configure --prefix=$DST 
