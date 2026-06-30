#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D370
// Address: 0x31d370 - 0x31d3b0
void sub_0031D370_0x31d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D370_0x31d370");
#endif

    switch (ctx->pc) {
        case 0x31d370u: goto label_31d370;
        case 0x31d374u: goto label_31d374;
        case 0x31d378u: goto label_31d378;
        case 0x31d37cu: goto label_31d37c;
        case 0x31d380u: goto label_31d380;
        case 0x31d384u: goto label_31d384;
        case 0x31d388u: goto label_31d388;
        case 0x31d38cu: goto label_31d38c;
        case 0x31d390u: goto label_31d390;
        case 0x31d394u: goto label_31d394;
        case 0x31d398u: goto label_31d398;
        case 0x31d39cu: goto label_31d39c;
        case 0x31d3a0u: goto label_31d3a0;
        case 0x31d3a4u: goto label_31d3a4;
        case 0x31d3a8u: goto label_31d3a8;
        case 0x31d3acu: goto label_31d3ac;
        default: break;
    }

    ctx->pc = 0x31d370u;

label_31d370:
    // 0x31d370: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31d374:
    // 0x31d374: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x31d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_31d378:
    // 0x31d378: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31d37c:
    // 0x31d37c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31d380:
    // 0x31d380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31d384:
    // 0x31d384: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x31d384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31d388:
    // 0x31d388: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31d388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31d38c:
    // 0x31d38c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x31d38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_31d390:
    // 0x31d390: 0x3200008  jr          $t9
label_31d394:
    if (ctx->pc == 0x31D394u) {
        ctx->pc = 0x31D398u;
        goto label_31d398;
    }
    ctx->pc = 0x31D390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D398u;
label_31d398:
    // 0x31d398: 0x0  nop
    ctx->pc = 0x31d398u;
    // NOP
label_31d39c:
    // 0x31d39c: 0x0  nop
    ctx->pc = 0x31d39cu;
    // NOP
label_31d3a0:
    // 0x31d3a0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x31d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_31d3a4:
    // 0x31d3a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_31d3a8:
    // 0x31d3a8: 0x3e00008  jr          $ra
label_31d3ac:
    if (ctx->pc == 0x31D3ACu) {
        ctx->pc = 0x31D3ACu;
            // 0x31d3ac: 0x8c4200c4  lw          $v0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->pc = 0x31D3B0u;
        goto label_fallthrough_0x31d3a8;
    }
    ctx->pc = 0x31D3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D3A8u;
            // 0x31d3ac: 0x8c4200c4  lw          $v0, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x31d3a8:
    ctx->pc = 0x31D3B0u;
}
