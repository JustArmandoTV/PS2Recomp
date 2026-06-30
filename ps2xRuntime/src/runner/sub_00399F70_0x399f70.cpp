#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00399F70
// Address: 0x399f70 - 0x399f90
void sub_00399F70_0x399f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399F70_0x399f70");
#endif

    ctx->pc = 0x399f70u;

    // 0x399f70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399f74: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x399f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
    // 0x399f78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x399F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399F7Cu;
            // 0x399f80: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399F84u;
    // 0x399f84: 0x0  nop
    ctx->pc = 0x399f84u;
    // NOP
    // 0x399f88: 0x0  nop
    ctx->pc = 0x399f88u;
    // NOP
    // 0x399f8c: 0x0  nop
    ctx->pc = 0x399f8cu;
    // NOP
}
