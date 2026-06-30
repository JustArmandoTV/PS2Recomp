#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048C9B0
// Address: 0x48c9b0 - 0x48c9e0
void sub_0048C9B0_0x48c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C9B0_0x48c9b0");
#endif

    switch (ctx->pc) {
        case 0x48c9b0u: goto label_48c9b0;
        case 0x48c9b4u: goto label_48c9b4;
        case 0x48c9b8u: goto label_48c9b8;
        case 0x48c9bcu: goto label_48c9bc;
        case 0x48c9c0u: goto label_48c9c0;
        case 0x48c9c4u: goto label_48c9c4;
        case 0x48c9c8u: goto label_48c9c8;
        case 0x48c9ccu: goto label_48c9cc;
        case 0x48c9d0u: goto label_48c9d0;
        case 0x48c9d4u: goto label_48c9d4;
        case 0x48c9d8u: goto label_48c9d8;
        case 0x48c9dcu: goto label_48c9dc;
        default: break;
    }

    ctx->pc = 0x48c9b0u;

label_48c9b0:
    // 0x48c9b0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x48c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_48c9b4:
    // 0x48c9b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x48c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_48c9b8:
    // 0x48c9b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x48c9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_48c9bc:
    // 0x48c9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c9c0:
    // 0x48c9c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c9c4:
    // 0x48c9c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c9c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c9c8:
    // 0x48c9c8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48c9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48c9cc:
    // 0x48c9cc: 0x3200008  jr          $t9
label_48c9d0:
    if (ctx->pc == 0x48C9D0u) {
        ctx->pc = 0x48C9D4u;
        goto label_48c9d4;
    }
    ctx->pc = 0x48C9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C9D4u;
label_48c9d4:
    // 0x48c9d4: 0x0  nop
    ctx->pc = 0x48c9d4u;
    // NOP
label_48c9d8:
    // 0x48c9d8: 0x0  nop
    ctx->pc = 0x48c9d8u;
    // NOP
label_48c9dc:
    // 0x48c9dc: 0x0  nop
    ctx->pc = 0x48c9dcu;
    // NOP
}
