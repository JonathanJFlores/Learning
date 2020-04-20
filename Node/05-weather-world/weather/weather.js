const axios = require('axios');

const getWeather = async ( lat, lng ) => {
    const apikey = '40a0feb9c3955ea64e71aaeb45ce302f';
    const resp =  await axios.get(`https://api.openweathermap.org/data/2.5/weather?lat=${ lat }&lon=${ lng }&appid=${ apikey }&units=metric`)

    return resp.data.main.temp;
}


module.exports = {
    getWeather
}