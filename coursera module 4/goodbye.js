fonction(x) {
	var y = "goodbye";
	var Byespeaker = function(name){
		console.log(y + "" + name);
	}
	x.Byespeaker=Byespeaker; 
}(x);