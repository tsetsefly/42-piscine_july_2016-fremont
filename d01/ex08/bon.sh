ldapsearch -LLLx "cn=bon*" cn | grep "cn:" | wc -l | tr -d ' '
