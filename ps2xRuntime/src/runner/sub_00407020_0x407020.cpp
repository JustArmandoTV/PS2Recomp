#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00407020
// Address: 0x407020 - 0x407040
void sub_00407020_0x407020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407020_0x407020");
#endif

    ctx->pc = 0x407020u;

    // 0x407020: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x407024: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x407024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
    // 0x407028: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x407028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40702c: 0x3e00008  jr          $ra
    ctx->pc = 0x40702Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40702Cu;
            // 0x407030: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407034u;
    // 0x407034: 0x0  nop
    ctx->pc = 0x407034u;
    // NOP
    // 0x407038: 0x0  nop
    ctx->pc = 0x407038u;
    // NOP
    // 0x40703c: 0x0  nop
    ctx->pc = 0x40703cu;
    // NOP
}
