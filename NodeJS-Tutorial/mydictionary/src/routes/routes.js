const express = require("express");
const router = express.Router();
const Learner = require("../models/dictionary")

router.get("/home",(req,res)=>{
    res.status(200).render("homepage");
});

router.get("/register",(req,res)=>{
    res.status(200).render("register");
});

router.get("/contact",(req,res)=>{
    res.status(200).render("contact");
});

router.get("/search",(req,res)=>{
    res.status(200).render("search");
});

router.get("/about",(req,res)=>{
    res.status(200).render("about");
});

router.get("/login",(req,res)=>{
    res.status(200).render("login");
});

module.exports = router;