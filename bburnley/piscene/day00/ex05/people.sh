ldapsearch -Q -S cn "uid=z*" | grep "cn:" | cut -c5- | tail -r
