// REQUIRED MODULES
const express = require("express");
const path = require("path");
const fs = require("fs");
const PDFDocument = require('pdfkit');
const hbs = require("hbs");
const app = express();

// REQUIRING THE MONGOOSE CONNECTION
require("./db/conn");
const Student = require("./models/students");
const { fontSize } = require("pdfkit");
const { Console } = require("console");

// PORT
const port = process.env.PORT || 3000;

// USE THIS OTHERWISE THE DATA WILL NOT BE SHOWN TO THE USER
app.use(express.urlencoded({ extended: false }));

// SERVING THE STATIC FILE
const staticPath = path.join(__dirname, "../public");
app.use(express.static(staticPath));

// SETTING UP THE TEMPLATE ENGINE
const TemplateEnginePath = path.join(__dirname, ("../templates/views"));
app.set("views", TemplateEnginePath);
app.set("view engine", "hbs");

// MIDDLEWARE TO RECOGNIZE THE INCOMING REQUEST OBJECT IS JSON OBJECT
app.use(express.json());


///////////////////////////////////////////////////////////////////////////////////////////
// MAKING PDF OF THE DATA
function createInvoice(invoice, path) {
    // CREATING A DOCUMENT WITH PAGE SIZE AND CUSTOM MARGINS BY DEFAULT THEY ARE 72
    // let doc = new PDFDocument({ size: [400, 600], margins: { top: 10, bottom: 10, right: 10, left: 10 } });
    let doc = new PDFDocument({ margins: { top: 10, bottom: 10, right: 10, left: 10 } });
    generateHeader(doc);
    generateCustomerInformation(doc, invoice);
    generateFooter(doc);

    doc.end();
    doc.pipe(fs.createWriteStream(path));
}

let date = new Date();

function generateHeader(doc) {
    doc.text(`${date}`, 50, 10, { align: 'center', width: 500 })
        .image("image.png", 10, 45, { width: 50 })
        .fontSize(18)
        .text('RadSack Fresh Fruits & Vegetables', 70, 57)
        .fontSize(14)
        .text('Indira Colony', 200, 90, { align: 'right' })
        .text('Jagadhri, Yamunanagar, Haryana', 200, 105, { align: 'right' })
        .moveDown();
}

function generateFooter(doc) {
    doc.fontSize(16)
        .text('Cash on Delivery Available. Thank you for your business.', 50, 700, { align: 'center', width: 500 });
}

function generateCustomerInformation(doc, invoice) {

    doc.text(`Invoice Number:   ${invoice._id}`, 10, 90)
        .text(`Name :          ${invoice.name}`, 10, 120)
        .text(`Address :       ${invoice.address}`, 10, 135)
        .text(`Email :          ${invoice.email}`, 10, 150)
        .text(`Phone :         ${invoice.phone}`, 10, 165)
        .text(`==========================================================================`, 1, 175, { width: 609 })
}

///////////////////////////////////////////////////////////////////////////////////////

// REGISTERING PARTIALS PATH
const PartialsPath = path.join(__dirname, "../templates/partials");
hbs.registerPartials(PartialsPath);

// ENDPOINT :- SHOWS THE PAGE WHICH HAS THE FORM
app.get("/admission", (req, res) => {
    res.render("admission");
});

// CREATE NEW STUDENT DATA
app.post("/students", async(req, res) => {
    const invoice = req.body;
    const pdfpath = path.join(__dirname, "../public/pdf/output.pdf");
    await createInvoice(invoice, pdfpath);
    const user = new Student(req.body);
    await user.save().then(() => {
        res.status(201).render("admission", {
            // THIS IS ARGUMENT WHICH IS PASSING WITH THIS FILE NAME WHICH HAS MSG
            // THIS MSG WILL SHOW WITH THGE FILE/PAGE WHEN THE DATA IS STORED IN 
            // THE DATABASE AND THE PROCESS WILL BE SUCCESSFUL
            successmsg: "Your data is stored Successfully"
        })
    }).catch((e) => {
        res.status(400).send(e);
    });
});

// SHOWING ALL STUDENTS DATA USING OUR RESTFUL API
app.get("/students", async(req, res) => {
    try {
        let studentsData = await Student.find();
        res.status(200).send(studentsData);
    } catch (error) {
        res.status(400).send(error)
    }
});

// SERVING PAGE WHICH WE WILL USE TO SEARCH THE DATA
app.get("/search", (req, res) => {
    res.status(200).render('search');
});

// SERCHING THE DOCUMENTS BY ID
// app.get("/students/:id", async(req, res) => {
//     try {
//         const _id = req.params.id;
//         const studentsData = await Student.findById(_id);
//         if (!studentsData) {
//             res.status(404).send();
//         } else {
//             res.status(200).send(studentsData);
//         }
//     } catch (e) {
//         res.status(400).send(e);
//     }
// });

// SERCHING THE DOCUMENTS BY PHONE
app.get("/students/search/:phone", async(req, res) => {
    try {
        const _phone = req.params.phone;
        const studentsData = await Student.find({ phone: _phone });
        if (!studentsData) {
            res.status(404).send('Data not found');
        } else {
            res.status(200).send(studentsData);
        }
    } catch (e) {
        res.status(400).send(e);
    }
});

// SHOWING THE PAGE TO UPDATE DATA
app.get("/update", (req, res) => {
    res.status(200).render("update");
});

// UPDATING THE DESIRED DATA AFTER FILTERING THEM WITH THEIR UNIQUE PHONE NUMBER
app.patch("/students/update/:email/:name", async(req, res) => {
    try {
        const email = req.params.email;
        const name = req.params.name;
        const updateStudent = await Student.findOneAndUpdate({ email: email }, { name: name });
        res.send(updateStudent);
    } catch (err) {
        res.status(500).send(err);
    }
});


// DELETING THE DATA FROM DATABASE USING ID
// app.delete("/students/delete/:id", async(req, res) => {
//     try {
//         const _id = req.params.id;
//         const deleteStudent = await Student.findByIdAndDelete(_id);
//         if (!_id) {
//             res.status(400).send("Invalid action bad request")
//         } else {
//             res.send(deleteStudent);
//         }
//     } catch (err) {
//         res.status(500).send(err);
//     }
// });

// DELETING THE DATA FROM DATABASE USING PHONE NUMBER
app.delete("/students/delete/:phone", async(req, res) => {
    try {
        let phone = req.params.phone;
        let deleteStudent = await Student.findOneAndDelete({ phone: phone });
        if (!phone) {
            res.status(400).send("Bad request")
        } else {
            res.send(deleteStudent);
        }
    } catch (err) {
        res.status(500).send("Something went wrong...")
    }
})

// PAGE TO DELETE THE DATA FROM DATABASE
app.get("/delete", (req, res) => {
    res.status(200).render("delete")
})

// LISTENING ON DESIRED PORT
app.listen(port, () => {
    console.log(`Server is listening at http://localhost:${port}`);
});