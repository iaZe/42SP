#!/bin/sh
 cat /etc/passwd \
 | sed '/^#/d' | awk 'NR % 2 == 0' \
 | rev | cut -d ':' -f 7 | sort -r \
 | sed -n "$FT_LINE1,$FT_LINE2 p" \
 | paste -s -d "," | sed "s/,/, /g" \
 | tr "\n" "."