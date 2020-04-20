const data = require('./place/place');
const weather = require('./weather/weather');
const colors = require('colors');

const argv = require('yargs').options({
    direction: {
        alias: 'd',
        desc: 'direction to city',
        demand: true
    }
}).argv;


// data.getPlaceLatLng( argv.direction )
//     .then(console.log);


// weather.getWeather(40.750000, -74.000000)
//         .then(console.log)
//         .catch(console.log);


const getInf = async ( direction ) => {
    try{
        const dir = await data.getPlaceLatLng( direction );
        const temp = await weather.getWeather(dir.lat, dir.lng); 
    
        return `The weather of ${colors.america(dir.direction)} is ${colors.bold(temp)}°c.`;
    } catch(e){
        return `Could not find weather of ${direction}`;
    }
}

getInf( argv.direction )
    .then(console.log)
    .catch(console.log)