const express = require("express");
// Router of Express
const router = express.Router();

// Importing Blogs Which is in form of JavaScript Object
const blogs = require("../data/blogs");

router.get("/", (req, res) => {
    // res.sendFile(path.join(__dirname, '../templates/index.html'));
    res.render("home");
});

// ALL BLOGS
router.get("/blogs", (req, res) => {
    // res.sendFile(path.join(__dirname, "../views/blogs.html"));
    res.render('blogHome', {
        blogs: blogs
    });
});

// BLOG CONTENT
router.get("/blogpage/:slug", (req, res) => {

    // JavaScript Filter takes Array-Elements and makes new Array According to function
    myBlog = blogs.filter((e) => {
        return e.slug == req.params.slug;
    });

    // Here we have to place 0 because everytime the new array will be created by the filter above which has 1 entry only and 0th entry has the data which we have created
    res.render('blogpage', {
        title: myBlog[0].title,
        content: myBlog[0].content
    });

    // Printing New Array in console
    // console.log(myBlog);

    // We dont send files
    // res.sendFile(path.join(__dirname, "../views/blogpage.html"));
    // res.send(myBlog);
});

module.exports = router;