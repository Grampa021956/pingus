#!/bin/sh

echo -n ".""."
./gen-scrfile.pl images/groundpieces/ground > data/groundpieces-ground.scr
echo -n ".""."
./gen-scrfile.pl images/groundpieces/bridge > data/groundpieces-bridge.scr
echo -n ".""."
./gen-scrfile.pl images/groundpieces/solid > data/groundpieces-solid.scr
echo -n "."
./gen-scrfile.pl images/groundpieces/transparent > data/groundpieces-transparent.scr
echo " "

#EOF#