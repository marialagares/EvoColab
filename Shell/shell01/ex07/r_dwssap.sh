#| /bin/sh
cat /etc/passwd|awk '!/^(#)/'| awk 'NR%2==1'|cut -d : -f 1| sort -r|rev |awk 'NR>=ENVIRON["FT_LINE1"] && NR<=ENVIRON["FT_LINE2"]' |tr '\n' ',' 
#sed /^*/,/^END/ | sed '#*' |sed -n 'n;p''

