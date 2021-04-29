.syntax unified
.cpu cortex-m0
.thumb

.global add
.type add, %function

add:
    add r0,r0,r1
    bx lr
