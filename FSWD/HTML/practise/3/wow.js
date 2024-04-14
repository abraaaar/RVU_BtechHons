var http = require('http');
var fs = require('fs');

function onRequest(req,res)
{
  if(req.url=='.html' || req.url=='/')
  {
    fs.readFile('./assignment.html', function inner(error,data)
    {
      if(error)
      {
        res.writeHead(404);
        res.write('File Not Found');
      }
      else
      {
        res.writeHead(200,{"Content-Type": "text/css"});
        res.writeHead(200, {'Content-Type': 'text/html'});
        res.write(data);
        res.end();
      }
    });
  }
}

http.createServer(onRequest).listen(3000);
