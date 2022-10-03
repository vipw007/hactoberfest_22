<template>
<h1>Resue component</h1>
<ul>
    <li v-for="item in child" :key="item.name">
    <achild :data ="item" :getData= "getData"/>
    </li>
</ul>

</template>

<script>
import achild from './achild.vue'

export default {
    name: "1-parent",
    components: {
        achild
    },
    methods:{
        getData(name)
        {
            alert(name)

        }
    },
    data() {
        return {
            child: [

                {
                    name: 'vivek',
                    email: 'vivek@gmail.com'
                },
                {
                    name: 'vipul',
                    email: 'vivek@gmail.com'
                },
                {
                    name: 'vivek',
                    email: 'vivek@gmail.com'
                }
            ]

        }

    }
}
</script>

<style>

</style>
