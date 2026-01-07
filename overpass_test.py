import overpass
api = overpass.API()

response = api.get('node["name"="Salt Lake City"]')
print(response)
