cat /etc/passwd | awk -F':' '{OFS=":";print $1}'|  cat /etc/passwd | awk -F':' '{OFS=":";print $1}'| rev | sort -r | awk "NR>=4&&NR<=9" | tr "\n" "," | sed 's/.$/.\n/' | sed 's/,/, /g'
