#!/bin/bash

#this script will run grep command and include match phrase
grep -i -E "$1" | less