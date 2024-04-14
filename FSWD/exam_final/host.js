var http = require('http');
var fs = require('fs');
console.log(__dirname);

function onRequest(req,res)
{     
        if (req.url === '/1.html' || req.url === '/') {
            fs.readFile('./1.html', function (error, data) {
                if (error) {
                    res.writeHead(404);
                    res.write('File Not Found');
                } else {
                    res.writeHead(200, { "Content-Type": "text/html" });
                    res.write(data);
                } res.end();});
        }
        else if (req.url === '/1.css')
        {fs.readFile('./1.css', function (error, data) {
            res.writeHead(200, { "Content-Type": "text/css" });
            res.write(data);         
            res.end();})
        }
        else if(req.url === '/1.js')
        {fs.readFile('./1.js', function (error, data){
            res.writeHead(200, { "Content-Type": "text/js" });
            res.write(data);
            res.end();})
        }
        else {
            res.write("invalid request")
            res.end();
        }
}
http.createServer(onRequest).listen(3000);

console.log('Success WOW / Port: 3000');