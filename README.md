# cisco-filters
Bash scripts to filter output like cisco iOS

These bash scripts are made to memic some Cisco iOS fliters to make it easier to use the same commands everywhere.

## inc
This is the include command, where it also accepts regex in qoutes, or simple string without qoutes
- usage:
```bash
cat file | inc remote # without regex
cat file | inc "ip|ipv6" # could accept regex
```
 ## beg
This is the Begin command, where the script will run sed command and and drop all lines before match phrase
- usage:
```bash
cat file | beg remote # could accept regex
```
 ## unt
This is Until, where this script will run sed command and quit at match phrase, its not there in Cisco iOS, but I think its cool to stop where ever you want
- usage:
```bash
cat file | unt remote # could accept regex
```
 
