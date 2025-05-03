/*
 * Copyright (c) ghgltggamer 2025
 * This is a simple & Secure PayPal Application for Linux Systems for personal use only not for redistribution, The source code can be redistributed and this app don't relies on paypal source code just embed a special webview for paypal.com website only.
 * Licensed under the MIT License
 * Checkout the README.md for more information
*/

// Headers
#include <htmlui/HTMLUI.h>


int main(){
    HTMLUI Window ("PayPal - Personal (Linux Client)", 360, 800, "/home/gtg/apps/paypal/cookies.db");
    Window.loadURL ("https://paypal.com/");
        HTMLUI Window_Gmail ("Gmail - Personal (Linux Client)", 800, 800, "/home/gtg/apps/paypal/cookies-gmail.db");
        Window_Gmail.loadURL ("https://gmail.com/");
        Window_Gmail.run();
    Window.run();
}