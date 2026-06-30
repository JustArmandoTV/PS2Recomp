#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4C20
// Address: 0x3c4c20 - 0x3c4c50
void sub_003C4C20_0x3c4c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4C20_0x3c4c20");
#endif

    switch (ctx->pc) {
        case 0x3c4c4cu: goto label_3c4c4c;
        default: break;
    }

    ctx->pc = 0x3c4c20u;

    // 0x3c4c20: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x3c4c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x3c4c24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3c4c28: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3c4c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3c4c2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3c4c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3c4c30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c4c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3c4c34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c4c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3c4c38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c4c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3c4c3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c4c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c4c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c4c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c4c44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c4c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c4c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c4c4c:
    // 0x3c4c4c: 0x8c5489f0  lw          $s4, -0x7610($v0)
    ctx->pc = 0x3c4c4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
}
