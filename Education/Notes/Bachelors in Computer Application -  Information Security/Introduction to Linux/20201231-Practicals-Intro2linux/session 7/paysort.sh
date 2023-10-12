#!/bin/bash
#Sort the file based on decresing order of basic pay
cut -f1,2,3,4 employee>emprest
cut -f5 employee>emppay
paste emppay emprest|sort -r|cut -f1>sortpay
paste emppay emprest|sort -r|cut -f2,3,4,5>sortrest
echo -e "Employees sorted based on basic pay\n"
paste sortrest sortpay
rm emprest emppay sortpay sortrest

