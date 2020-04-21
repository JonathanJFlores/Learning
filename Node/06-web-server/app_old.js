const http = require('http');

http.createServer( (req, resp) => {
    // resp.write('Hello world');
    resp.writeHead(200, {'data': 'aplication/json'});

    let out = {
        name: 'Jonathan',
        age: 20,
        url: req.url
    }

    resp.write( JSON.stringify( out ));

    resp.end();
})
.listen(8080);

console.log("Listening port 8080");
