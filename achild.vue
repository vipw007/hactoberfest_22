<template>
    
    <div class="user">
        <h2>{{data.name}}</h2>
        <h2>{{data.email}}</h2>
        <button v-on:click="getData(data.name)"> Alert Name</button>
    </div>

</template>

<script>
    export default{
        name:'a-child',
        props:
        {
            data: Object,
            getData: Function
        },
        // methods:
        // {
        //     getdata()
        //     {
        //         alert("hello")
        //     }
        // }
    }
</script>

<style>
    .user{
    background-color: deepskyblue;
    padding: 10px;
    border-bottom: 1px solid;
    }
</style>