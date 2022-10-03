<template>
    <div class="hello">
      
      <!-- v12 Two way binding Checkbox and radio buttuon also -->
      <br/>
      <label>Java</label>
      <input type="checkbox" value ="java" v-model ="technology"/>
      
      <label>Node</label>
      <input type="checkbox" value ="node" v-model="technology"/>
      <br/>

      <h4>Selected technology {{technology}}</h4>
      <br/>
      <h4>Who am I</h4>
      <label for="Developer">Developer</label>
      <input type="radio" value="Developer" name="who" id="Developer" v-model="who"/>

      <label for="student">Student</label>
      <input type="radio" value="Student" name="who" id="student" v-model="who"/>
      <h4>who is {{who}}</h4>

      <!-- v13  if else-->
      <h4 v-if="show">If Condition</h4>
      <h4 v-else>else Condition</h4>
      <button v-on:click="show=!show">Toggle</button>

      <!-- v14 for loop -->

      <h1>For loop in Vue</h1>
      <ul>

        <li v-for ="item in technology" :key ="item">
         {{item}}

        </li>
      </ul>

    </div>
  </template>
  
  <script>


  export default {
    name: 'check-box',
       //V7   
    data()
    {
        return {
            technology: [],
            who : null,
            show: true,
      
      }
    },
    methods: {
         onclick()
         {
            console.warn("saved",this.email,this.password)
         }
    }
  }
 
  </script>
  
  <!-- Add "scoped" attribute to limit CSS to this component only -->
  <style  scoped>
    h1{
        color: orange;
    }
  
  </style>
  