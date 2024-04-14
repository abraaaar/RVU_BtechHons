var http = require('http');
var fs = require('fs');
console.log(__dirname);

function onRequest(req,res)
{     
        if (req.url === '/page.html' || req.url === '/') {
            fs.readFile('./page.html', function (error, data) {
                if (error) {
                    res.writeHead(404);
                    res.write('File Not Found');
                } else {
                    res.writeHead(200, { "Content-Type": "text/html" });
                    res.write(data);
                } res.end();});
        }
        else if (req.url === '/style.css')
        {fs.readFile('./style.css', function (error, data) {
            res.writeHead(200, { "Content-Type": "text/css" });
            res.write(data);         
            res.end();})
        }
        else if(req.url === '/script.js')
        {fs.readFile('./script.js', function (error, data){
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

console.log('Server is running on port 3000');
