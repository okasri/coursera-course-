var names [ali, niema, John, Youssef, jemmy,alae];
for (var i = 0; i < names.length; i++) {
	firstletter = names[i].charAT(0); 
   if (firstletter === "j" || "J") {
   	Byespeaker(names[i]);
   }
   else {
   	Hellospeaker(names[i]);
   }
}