const express = require('express');
const app = express();

const hbs = require('hbs');
require('./hbs/helpers')

const port = process.env.PORT || 3000;

app.use( express.static( __dirname + '/public' ) );

// Express HBS
app.set('view engine', 'hbs');


hbs.registerPartials(__dirname + "/views/partials");
 
app.get('/', (req, res) => {

    res.render('home', {
        name: "Jonathan"
    })

    // let out = {
    //     name: 'Jonathan',
    //     age: 20,
    //     url: req.url
    // };

    // res.send(out);
});

app.get('/about', (req, res) => {

    res.render('about', )
});

// app.get('/data', (req, res) => {
//     res.send('Hello World');
// });

 
app.listen(port, () => {
    console.log(`Listening port ${port}`);
});