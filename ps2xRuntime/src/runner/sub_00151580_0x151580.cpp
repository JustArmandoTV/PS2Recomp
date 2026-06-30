#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151580
// Address: 0x151580 - 0x151600
void sub_00151580_0x151580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151580_0x151580");
#endif

    ctx->pc = 0x151580u;

    // 0x151580: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x151580u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x151584: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x151584u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x151588: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x151588u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15158c: 0x78ab0030  lq          $t3, 0x30($a1)
    ctx->pc = 0x15158cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x151590: 0x78ac0040  lq          $t4, 0x40($a1)
    ctx->pc = 0x151590u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x151594: 0x78ad0050  lq          $t5, 0x50($a1)
    ctx->pc = 0x151594u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x151598: 0x78ae0060  lq          $t6, 0x60($a1)
    ctx->pc = 0x151598u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x15159c: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x15159cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x1515a0: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x1515a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x1515a4: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x1515a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x1515a8: 0x7c8b0030  sq          $t3, 0x30($a0)
    ctx->pc = 0x1515a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
    // 0x1515ac: 0x7c8c0040  sq          $t4, 0x40($a0)
    ctx->pc = 0x1515acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 12));
    // 0x1515b0: 0x7c8d0050  sq          $t5, 0x50($a0)
    ctx->pc = 0x1515b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 13));
    // 0x1515b4: 0x7c8e0060  sq          $t6, 0x60($a0)
    ctx->pc = 0x1515b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 14));
    // 0x1515b8: 0x78a80070  lq          $t0, 0x70($a1)
    ctx->pc = 0x1515b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1515bc: 0x78a90080  lq          $t1, 0x80($a1)
    ctx->pc = 0x1515bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1515c0: 0x78aa0090  lq          $t2, 0x90($a1)
    ctx->pc = 0x1515c0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x1515c4: 0x78ab00a0  lq          $t3, 0xA0($a1)
    ctx->pc = 0x1515c4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x1515c8: 0x78ac00b0  lq          $t4, 0xB0($a1)
    ctx->pc = 0x1515c8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x1515cc: 0x78ad00c0  lq          $t5, 0xC0($a1)
    ctx->pc = 0x1515ccu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1515d0: 0x78ae00d0  lq          $t6, 0xD0($a1)
    ctx->pc = 0x1515d0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1515d4: 0x7c880070  sq          $t0, 0x70($a0)
    ctx->pc = 0x1515d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 8));
    // 0x1515d8: 0x7c890080  sq          $t1, 0x80($a0)
    ctx->pc = 0x1515d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 9));
    // 0x1515dc: 0x7c8a0090  sq          $t2, 0x90($a0)
    ctx->pc = 0x1515dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 10));
    // 0x1515e0: 0x7c8b00a0  sq          $t3, 0xA0($a0)
    ctx->pc = 0x1515e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 11));
    // 0x1515e4: 0x7c8c00b0  sq          $t4, 0xB0($a0)
    ctx->pc = 0x1515e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 12));
    // 0x1515e8: 0x7c8d00c0  sq          $t5, 0xC0($a0)
    ctx->pc = 0x1515e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 13));
    // 0x1515ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1515ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1515F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1515ECu;
            // 0x1515f0: 0x7c8e00d0  sq          $t6, 0xD0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1515F4u;
    // 0x1515f4: 0x0  nop
    ctx->pc = 0x1515f4u;
    // NOP
    // 0x1515f8: 0x0  nop
    ctx->pc = 0x1515f8u;
    // NOP
    // 0x1515fc: 0x0  nop
    ctx->pc = 0x1515fcu;
    // NOP
}
