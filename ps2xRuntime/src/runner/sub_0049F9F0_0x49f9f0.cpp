#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049F9F0
// Address: 0x49f9f0 - 0x49fa10
void sub_0049F9F0_0x49f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F9F0_0x49f9f0");
#endif

    ctx->pc = 0x49f9f0u;

    // 0x49f9f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49f9f4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x49f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
    // 0x49f9f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49f9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x49F9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F9FCu;
            // 0x49fa00: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49FA04u;
    // 0x49fa04: 0x0  nop
    ctx->pc = 0x49fa04u;
    // NOP
    // 0x49fa08: 0x0  nop
    ctx->pc = 0x49fa08u;
    // NOP
    // 0x49fa0c: 0x0  nop
    ctx->pc = 0x49fa0cu;
    // NOP
}
