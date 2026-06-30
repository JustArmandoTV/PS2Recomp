#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181C98
// Address: 0x181c98 - 0x181cc8
void sub_00181C98_0x181c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181C98_0x181c98");
#endif

    switch (ctx->pc) {
        case 0x181c98u: goto label_181c98;
        case 0x181c9cu: goto label_181c9c;
        case 0x181ca0u: goto label_181ca0;
        case 0x181ca4u: goto label_181ca4;
        case 0x181ca8u: goto label_181ca8;
        case 0x181cacu: goto label_181cac;
        case 0x181cb0u: goto label_181cb0;
        case 0x181cb4u: goto label_181cb4;
        case 0x181cb8u: goto label_181cb8;
        case 0x181cbcu: goto label_181cbc;
        case 0x181cc0u: goto label_181cc0;
        case 0x181cc4u: goto label_181cc4;
        default: break;
    }

    ctx->pc = 0x181c98u;

label_181c98:
    // 0x181c98: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x181c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_181c9c:
    // 0x181c9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_181ca0:
    // 0x181ca0: 0x8c43bf1c  lw          $v1, -0x40E4($v0)
    ctx->pc = 0x181ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950684)));
label_181ca4:
    // 0x181ca4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x181ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181ca8:
    // 0x181ca8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_181cac:
    if (ctx->pc == 0x181CACu) {
        ctx->pc = 0x181CACu;
            // 0x181cac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x181CB0u;
        goto label_181cb0;
    }
    ctx->pc = 0x181CA8u;
    {
        const bool branch_taken_0x181ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181CA8u;
            // 0x181cac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ca8) {
            ctx->pc = 0x181CBCu;
            goto label_181cbc;
        }
    }
    ctx->pc = 0x181CB0u;
label_181cb0:
    // 0x181cb0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x181cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_181cb4:
    // 0x181cb4: 0x60f809  jalr        $v1
label_181cb8:
    if (ctx->pc == 0x181CB8u) {
        ctx->pc = 0x181CB8u;
            // 0x181cb8: 0x8c44bf20  lw          $a0, -0x40E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950688)));
        ctx->pc = 0x181CBCu;
        goto label_181cbc;
    }
    ctx->pc = 0x181CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x181CBCu);
        ctx->pc = 0x181CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181CB4u;
            // 0x181cb8: 0x8c44bf20  lw          $a0, -0x40E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950688)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x181CBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x181CBCu; }
            if (ctx->pc != 0x181CBCu) { return; }
        }
        }
    }
    ctx->pc = 0x181CBCu;
label_181cbc:
    // 0x181cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_181cc0:
    // 0x181cc0: 0x3e00008  jr          $ra
label_181cc4:
    if (ctx->pc == 0x181CC4u) {
        ctx->pc = 0x181CC4u;
            // 0x181cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x181CC8u;
        goto label_fallthrough_0x181cc0;
    }
    ctx->pc = 0x181CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181CC0u;
            // 0x181cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x181cc0:
    ctx->pc = 0x181CC8u;
}
