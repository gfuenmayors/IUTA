const usuario = document.getElementById("usuario")
const correo = document.getElementById("correo")
const clave = document.getElementById("clave")
const form = document.getElementById("registro")
const mensaje = document.getElementById("mensaje")
const exitosohtml = document.getElementById("exitoso")
const errorhtml = document.getElementById("error")

form.addEventListener("submit", e => {

    e.preventDefault()
    let error = ""
    let noentrar = false
    let comprobarclave = /\d{3}/;
    let comprobarcorreo = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,4})+$/
    errorhtml.innerHTML = ""
    exitosohtml.innerHTML = ""

    if(usuario.value.length) {
        if(usuario.value.length < 6) {
            noentrar = true
            error += '- El usuario debe ser válido</br>'
        }
    }
    else{
        noentrar = true
        error += '- El usuario no debe estar vacío</br>'
    }
    if(correo.value.length) {
        if(!comprobarcorreo.test(correo.value)) {
            noentrar = true
            error += '- El correo debe ser válido</br>'
        }
    }
    else{
        noentrar = true
        error += '- El correo no debe estar vacío</br>'
    }
    if(clave.value.length) {
        if(clave.value.length < 6) {
            noentrar = true
            error += '- La contraseña debe ser válida</br>'
        }
        else {
            if(!comprobarclave.test(clave.value)) {
                noentrar = true
                error += '- Introduzca 3 caracteres numéricos en la contraseña</br>'
            }
        }
    }
    else {
        noentrar = true
        error += '- La contraseña no debe estar vacía</br>'
    }

    if(noentrar)
    {
        exitosohtml.style.visibility = "hidden"
        errorhtml.style.visibility = "visible"
        errorhtml.innerHTML = error
    }
    else
    {
        errorhtml.style.visibility = "hidden"
        exitosohtml.style.visibility = "visible"
        exitosohtml.innerHTML = '¡Usuario Registrado!'
    }
})