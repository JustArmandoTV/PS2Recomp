#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003054C0
// Address: 0x3054c0 - 0x305500
void sub_003054C0_0x3054c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003054C0_0x3054c0");
#endif

    switch (ctx->pc) {
        case 0x3054c0u: goto label_3054c0;
        case 0x3054c4u: goto label_3054c4;
        case 0x3054c8u: goto label_3054c8;
        case 0x3054ccu: goto label_3054cc;
        case 0x3054d0u: goto label_3054d0;
        case 0x3054d4u: goto label_3054d4;
        case 0x3054d8u: goto label_3054d8;
        case 0x3054dcu: goto label_3054dc;
        case 0x3054e0u: goto label_3054e0;
        case 0x3054e4u: goto label_3054e4;
        case 0x3054e8u: goto label_3054e8;
        case 0x3054ecu: goto label_3054ec;
        case 0x3054f0u: goto label_3054f0;
        case 0x3054f4u: goto label_3054f4;
        case 0x3054f8u: goto label_3054f8;
        case 0x3054fcu: goto label_3054fc;
        default: break;
    }

    ctx->pc = 0x3054c0u;

label_3054c0:
    // 0x3054c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3054c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3054c4:
    // 0x3054c4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3054c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3054c8:
    // 0x3054c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3054c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3054cc:
    // 0x3054cc: 0x8c850d60  lw          $a1, 0xD60($a0)
    ctx->pc = 0x3054ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_3054d0:
    // 0x3054d0: 0x8c63f278  lw          $v1, -0xD88($v1)
    ctx->pc = 0x3054d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963832)));
label_3054d4:
    // 0x3054d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3054d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3054d8:
    // 0x3054d8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3054d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3054dc:
    // 0x3054dc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_3054e0:
    if (ctx->pc == 0x3054E0u) {
        ctx->pc = 0x3054E0u;
            // 0x3054e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3054E4u;
        goto label_3054e4;
    }
    ctx->pc = 0x3054DCu;
    {
        const bool branch_taken_0x3054dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3054dc) {
            ctx->pc = 0x3054E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3054DCu;
            // 0x3054e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3054F8u;
            goto label_3054f8;
        }
    }
    ctx->pc = 0x3054E4u;
label_3054e4:
    // 0x3054e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3054e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3054e8:
    // 0x3054e8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3054e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3054ec:
    // 0x3054ec: 0x320f809  jalr        $t9
label_3054f0:
    if (ctx->pc == 0x3054F0u) {
        ctx->pc = 0x3054F0u;
            // 0x3054f0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3054F4u;
        goto label_3054f4;
    }
    ctx->pc = 0x3054ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3054F4u);
        ctx->pc = 0x3054F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3054ECu;
            // 0x3054f0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3054F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3054F4u; }
            if (ctx->pc != 0x3054F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3054F4u;
label_3054f4:
    // 0x3054f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3054f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3054f8:
    // 0x3054f8: 0x3e00008  jr          $ra
label_3054fc:
    if (ctx->pc == 0x3054FCu) {
        ctx->pc = 0x3054FCu;
            // 0x3054fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x305500u;
        goto label_fallthrough_0x3054f8;
    }
    ctx->pc = 0x3054F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3054FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3054F8u;
            // 0x3054fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3054f8:
    ctx->pc = 0x305500u;
}
