import express from "express";
import cors from "cors";

import userRoutes from "./routes/users.js";
import authRoutes from "./routes/auth.js";
import passwordResetRoutes from "./routes/passwordReset.js";
import ProductRoutes from "./routes/product.js";

const DB="mongodb+srv://tanmaywalekar24:tanmay123@cluster0.qei8v8y.mongodb.net/?retryWrites=true&w=majority";
const app = express();
app.use(express.json());
app.use(express.urlencoded({ extended: false }))
app.use(cors());
app.use(function(req, res, next) {
    res.header("Access-Control-Allow-Origin", "*");
    res.header("Access-Control-Allow-Methods", "GET, PUT, POST");
    res.header("Access-Control-Allow-Headers", "Origin, X-Requested-With, Content-Type, Accept");
    next();
  });

import mongoose from 'mongoose';
 
    
  mongoose.connect(DB, {
      useNewUrlParser: true,
      useUnifiedTopology: true
  })
      .then(() => console.log('mongo connected'))
       .catch(err => console.log(err,"error hai"));  
       app.listen(5000, () => console.log(`server started in port 5000`))


// routes
app.use("/api/users", userRoutes);
app.use("/api/auth", authRoutes);
app.use("/api/password-reset", passwordResetRoutes);
app.use("/api/product", ProductRoutes)

app.get("/wake/api", (req, res) => {
    res.status(200).json({ success: true, message: "API is awake" });
});

app.get("*", (req, res) => {
    res.status(404).json({ success: false, message: "Page not found 404", endPoints: {
        "login": "/api/auth/login",
        "register": "/api/auth/register",
        "forgot-password": "/api/password-reset/forgot-password",
        "reset-password": "/api/password-reset/reset-password",
        "get-all-users": "/api/users",
        "get-user-by-id": "/api/users/:id",
        "update-user-by-id": "/api/users/:id",
        "delete-user-by-id": "/api/users/:id",
        "get-all-products": "/api/product",
        "get-product-by-id": "/api/product/:id",
        "update-product-by-id": "/api/product/:id",
        "delete-product-by-id": "/api/product/:id",
        "create-product": "/api/product",
    } });
});

