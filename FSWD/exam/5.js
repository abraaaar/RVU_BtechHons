var http = require('http');
var fs = require('fs');
console.log(__dirname);
function onRequest(req,res)
{
if (req.url === '/3.html' || req.url === '/') {
fs.readFile('./3.html', function (error, data) {
if (error) {
res.writeHead(404);
res.write('File Not Found');
} else {
res.writeHead(200, { "Content-Type": "text/html" });
res.write(data);
}
res.end();
});
}
else if (req.url === '/4.html') {
res.setHeader('Content-type', 'text/html');
res.write(fs.readFileSync('./4.html'));
res.end();
}
else {
res.write("invalid request")
res.end();
}
}
http.createServer(onRequest).listen(3000);
