#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C2390
// Address: 0x3c2390 - 0x3c23b0
void sub_003C2390_0x3c2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2390_0x3c2390");
#endif

    switch (ctx->pc) {
        case 0x3c2390u: goto label_3c2390;
        case 0x3c2394u: goto label_3c2394;
        case 0x3c2398u: goto label_3c2398;
        case 0x3c239cu: goto label_3c239c;
        case 0x3c23a0u: goto label_3c23a0;
        case 0x3c23a4u: goto label_3c23a4;
        case 0x3c23a8u: goto label_3c23a8;
        case 0x3c23acu: goto label_3c23ac;
        default: break;
    }

    ctx->pc = 0x3c2390u;

label_3c2390:
    // 0x3c2390: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3c2390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3c2394:
    // 0x3c2394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c2394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3c2398:
    // 0x3c2398: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c2398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3c239c:
    // 0x3c239c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3c239cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3c23a0:
    // 0x3c23a0: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3c23a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3c23a4:
    // 0x3c23a4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3c23a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3c23a8:
    // 0x3c23a8: 0x3200008  jr          $t9
label_3c23ac:
    if (ctx->pc == 0x3C23ACu) {
        ctx->pc = 0x3C23B0u;
        goto label_fallthrough_0x3c23a8;
    }
    ctx->pc = 0x3C23A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c23a8:
    ctx->pc = 0x3C23B0u;
}
