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