#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004121F0
// Address: 0x4121f0 - 0x412210
void sub_004121F0_0x4121f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004121F0_0x4121f0");
#endif

    ctx->pc = 0x4121f0u;

    // 0x4121f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4121f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4121f4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4121f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
    // 0x4121f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4121f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4121fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4121FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4121FCu;
            // 0x412200: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412204u;
    // 0x412204: 0x0  nop
    ctx->pc = 0x412204u;
    // NOP
    // 0x412208: 0x0  nop
    ctx->pc = 0x412208u;
    // NOP
    // 0x41220c: 0x0  nop
    ctx->pc = 0x41220cu;
    // NOP
}
