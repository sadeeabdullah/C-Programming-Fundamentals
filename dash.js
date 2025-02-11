const url = 'https://whois-lookup10.p.rapidapi.com/domain?domain=names.co.uk';
const options = {
	method: 'GET',
	headers: {
		'x-rapidapi-key': 'ff8440eee8msha5d4b19671e1965p1793a5jsne56f64412b9c',
		'x-rapidapi-host': 'whois-lookup10.p.rapidapi.com'
	}
};

async function fetchData() {
	try {
		const response = await fetch(url, options);
		const result = await response.text();
		console.log(result);
	} catch (error) {
		console.error(error);
	}
}

fetchData();
