// /home/jonathanf/Escritorio
const image2base64 = require('image-to-base64');

let image;


console.log(module.paths);
console.log(process);


image2base64("/home/jonathanf/Escritorio/captura.jpg") // you can also to use url
    .then(
        (response) => {
            image = response;
            // console.log(image); //cGF0aC90by9maWxlLmpwZw==
        }
    )
    .catch(
        (error) => {
            console.log(error); //Exepection error....
        }
    )

