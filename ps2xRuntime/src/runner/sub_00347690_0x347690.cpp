#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347690
// Address: 0x347690 - 0x3476a0
void sub_00347690_0x347690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347690_0x347690");
#endif

    ctx->pc = 0x347690u;

    // 0x347690: 0x3e00008  jr          $ra
    ctx->pc = 0x347690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347690u;
            // 0x347694: 0x90820c6a  lbu         $v0, 0xC6A($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3178)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347698u;
    // 0x347698: 0x0  nop
    ctx->pc = 0x347698u;
    // NOP
    // 0x34769c: 0x0  nop
    ctx->pc = 0x34769cu;
    // NOP
}
