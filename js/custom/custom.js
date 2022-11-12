"" === GLOBAL_CONFIG_SITE.title.replace("Cy1", "") ? document.getElementById("page-name-text").style.display = "none" : document.querySelector("#page-name-text>span").innerHTML = document.title.split(" | Cy1")[0];


var $percent = document.querySelector("#nav #hotkey #top-button a.site-page i");
$percent && window.addEventListener("scroll", (function () {
    let e = document.body.scrollHeight || document.documentElement.scrollHeight,
        t = window.innerHeight || document.documentElement.clientHeight;
    $percent.dataset.percent = ((document.body.scrollTop || document.documentElement.scrollTop) / (e - t) * 100).toFixed(0)
}));


