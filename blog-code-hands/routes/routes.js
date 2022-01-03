const express = require("express");
const router = express.Router();
const blogdata = require("../data/blogdata");

router.get("/", (req, res) => {
    res.render("home");
});

router.get("/blogs", (req, res) => {
    res.render('blogs', {
        blogdata: blogdata
    });
});

router.get("/blogpost/:slug", (req, res) => {
    myData = blogdata.filter((e) => {
        return e.slug == req.params.slug;
    })

    res.render('blogpost', {
        title: myData[0].title,
        content: myData[0].content
    })
})

router.get("/contact", (req, res) => {
    res.render("contact");
});

router.get("/service", (req, res) => {
    res.render("service");
});

router.get("/about", (req, res) => {
    res.render("about");
});
module.exports = router;