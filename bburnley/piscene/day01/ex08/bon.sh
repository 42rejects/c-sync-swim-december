ldapsearch -Q "cn=*bon*" | grep "cn: " | wc -l | tr -d " "
