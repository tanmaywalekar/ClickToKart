// import mongoose from 'mongoose';
// const DB="mongodb+srv://tanmaywalekar24:tanmay123@cluster0.go3t5aq.mongodb.net/?retryWrites=true&w=majority"
// // dotenv.config();

// function connectdb(){
//     mongoose.connect(DB, {useNewUrlParser: true ,useUnifiedTopology: true});
//     const connection=mongoose.connection;
//     try{
//         connection.once('open',()=>{
//         console.log('Database connected👍.')
//     })
//     }
//     catch(e){
//         console.log("Connection Fails👎.")
//     }
// }

// export default connectdb;