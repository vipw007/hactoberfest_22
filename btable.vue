<template>
<div class="hello">

    <!-- v22 Two way binding in email and password can apply on radio buttuon also -->
    <h1>{{email}}</h1>
    
        <h1>Simple form</h1>

        <br />
        <label>Enter Email</label>
        <input type="text" placeholder="Email" v-model="email" />
        <br />
        <label>Enter Password</label>
        <input type="password" placeholder="Password" v-model="password">
        <br/>
        <select v-model="country">
            <option>Indai</option>
            <option>Usa</option>

        </select>
        <button v-on:click="onclick">Login</button>



</div>
</template>

  
<script>
export default {
    name: 'b-table',

    data() {
        return {
            email: null,
            password : null,
            country: '',
            tech: '',
            gender: ''
      
            
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
  
<style scoped>
h1 {
    color: orange;
}
</style>
