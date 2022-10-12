/*
	ARM_cortex-m3 startup
	Made by: Mohamed Shaban
*/

.section .vectors

.word 0x20001000       /* start the stack after this address there is vector table*/
.word _reset           /* reset */
.word _vector_handler  /* NMI interrupt */
.word _vector_handler  /* HARD FAULT interrupt */
.word _vector_handler  /* MM FAULT interrupt */
.word _vector_handler  /* BUS FAULT interrupt */
.word _vector_handler  /* USAGE FAULT interrupt */
.word _vector_handler  /* RESERVED */
.word _vector_handler  /* RESERVED */
.word _vector_handler  /* RESERVED */
.word _vector_handler  /* RESERVED */
.word _vector_handler  /* SV CALL */
.word _vector_handler  /* DEBUG RESERVED */
.word _vector_handler  /* RESERVED */
.word _vector_handler  /* PendSV */
.word _vector_handler  /* SysTick */
.word _vector_handler  /* IRQ0 */
.word _vector_handler  /* IRQ1 */
.word _vector_handler  /* IRQ2 */
.word _vector_handler  /* ... */






.section .text

_reset:
	bl main
	b .

.thumb_func

_vector_handler:
    b _reset



