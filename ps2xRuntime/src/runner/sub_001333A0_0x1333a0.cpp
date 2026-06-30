#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001333A0
// Address: 0x1333a0 - 0x1333d0
void sub_001333A0_0x1333a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001333A0_0x1333a0");
#endif

    ctx->pc = 0x1333a0u;

    // 0x1333a0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1333a0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1333a4: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1333a4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1333a8: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x1333a8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1333ac: 0x78ab0030  lq          $t3, 0x30($a1)
    ctx->pc = 0x1333acu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1333b0: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x1333b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x1333b4: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x1333b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x1333b8: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x1333b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x1333bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1333BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1333C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1333BCu;
            // 0x1333c0: 0x7c8b0030  sq          $t3, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1333C4u;
    // 0x1333c4: 0x0  nop
    ctx->pc = 0x1333c4u;
    // NOP
    // 0x1333c8: 0x0  nop
    ctx->pc = 0x1333c8u;
    // NOP
    // 0x1333cc: 0x0  nop
    ctx->pc = 0x1333ccu;
    // NOP
}
