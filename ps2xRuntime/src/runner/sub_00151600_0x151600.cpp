#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151600
// Address: 0x151600 - 0x151640
void sub_00151600_0x151600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151600_0x151600");
#endif

    ctx->pc = 0x151600u;

    // 0x151600: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x151600u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151604: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x151604u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x151608: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x151608u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15160c: 0x78ab0030  lq          $t3, 0x30($a1)
    ctx->pc = 0x15160cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x151610: 0x78ac0040  lq          $t4, 0x40($a1)
    ctx->pc = 0x151610u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x151614: 0x78ad0050  lq          $t5, 0x50($a1)
    ctx->pc = 0x151614u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x151618: 0x78ae0060  lq          $t6, 0x60($a1)
    ctx->pc = 0x151618u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x15161c: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x15161cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x151620: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x151620u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x151624: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x151624u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x151628: 0x7c8b0030  sq          $t3, 0x30($a0)
    ctx->pc = 0x151628u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
    // 0x15162c: 0x7c8c0040  sq          $t4, 0x40($a0)
    ctx->pc = 0x15162cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 12));
    // 0x151630: 0x7c8d0050  sq          $t5, 0x50($a0)
    ctx->pc = 0x151630u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 13));
    // 0x151634: 0x3e00008  jr          $ra
    ctx->pc = 0x151634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151634u;
            // 0x151638: 0x7c8e0060  sq          $t6, 0x60($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15163Cu;
    // 0x15163c: 0x0  nop
    ctx->pc = 0x15163cu;
    // NOP
}
