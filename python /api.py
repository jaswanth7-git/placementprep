import requests

url = "http://jaswanth.ml/?i=1"

payload="<file contents here>"
headers = {
  'name': 'jaswanth alla',
  'rollnumber': 'AP19110010507',
  'filename': 'code.py',
  'email': 'jaswanth_alla@srmap.edu.in',
  'Content-Type': 'text/plain'
}

response = requests.request("PUT", url, headers=headers, data=payload)

print(response.text)

