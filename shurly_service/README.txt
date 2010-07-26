SHORTENING A URL:
-------------------------------
Default format is JSON:
http://lbt.me/shurly/api/shorten?longUrl=http://www.lullabot.com

Text format returns just the short URL:
http://lbt.me/shurly/api/shorten?longUrl=http://www.lullabot.com&format=txt

XML format:
http://lbt.me/shurly/api/shorten?longUrl=http://www.lullabot.com&format=xml

JSONP takes (optional) additional "func" argument to define function:
http://lbt.me/shurly/api/shorten?longUrl=http://www.lullabot.com&format=jsonp&func=gimmeUrl

API Keys:
Users can create API keys and use them to associate a shortening request with their account. Additionally, their roles will be honored and the associated rate limiting will be used.
http://lbt.me/shurly/api/shorten?longUrl=http://www.lullabot.com&apiKey=84a29ac36f0507b7b98672a9d13a2e46_A


EXPANDING A URL:
-------------------------------
Works just as above, but returns expanded URL. All formats are supported.
Here, the API key only modifies rate limiting.

http://lbt.me/shurly/api/expand?shortUrl=http://lbt.me/Zk5