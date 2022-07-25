import os
import sys
import requests
import zipfile

server_url = 'https://docs.xilinx.com/api/admin/khub/sources/ftml/upload'
HEADERS = {'FT-Authorization': 'Bearer NRcvr7KGYsuYmd6KELscCnMQlA6oLmog' }
print("In uploading to FT")

  
fileobj = open ('xf_database.zip', 'rb')
r = requests.post(server_url, headers=HEADERS, files={"archive": ('xf_database.zip', fileobj)})

if r.ok:
    print("OK")
else:
    print(r.status_code)