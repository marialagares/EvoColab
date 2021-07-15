#!/bin/sh
#ls -l |sed -n 'g;n;p' 
#does not work the other way round , using awk
ls -l | awk 'NR%2==1'

