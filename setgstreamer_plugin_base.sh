#!/bin/sh
SC_HOME=/home/zhangbin/zbhome/omx/bsp/ns115/media/scomx/gst/home/gstpluginbase
SC_DST=$SC_HOME
SC_BUILD=$SC_HOME

echo "#######################"
echo "SC_HOME IS  $SC_HOME"
echo "SC_DST is $SC_DST"
echo "SC_BUILD is $SC_BUILD"
echo "#######################"


echo "##########SETENV FOR DEP yasm######"
export PATH=$SC_DST/bin:$PATH
export LD_LIBRARY_PATH=$SC_DST/lib:$LD_LIBRARY_PATH
export PKG_CONFIG_PATH=$SC_DST/lib/pkgconfig:$PKG_CONFIG_PATH
export C_INCLUDE_PATH=$SC_DST/include:$C_INCLUDE_PATH
export LIBRARY_PATH=$SC_DST/lib:$LIBRARY_PATH



echo "PATH IS $PATH"
echo "LD_LIBRARY_PATH IS $LD_LIBRARY_PATH"
echo "C_INCLUDE_PATH IS $C_INCLUDE_PATH "
echo "LIBRARY_PATH IS $LIBRARY_PATH "
echo "##########DONE##########"
