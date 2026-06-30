#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A91B0
// Address: 0x2a91b0 - 0x2a91e0
void sub_002A91B0_0x2a91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A91B0_0x2a91b0");
#endif

    switch (ctx->pc) {
        case 0x2a91b0u: goto label_2a91b0;
        case 0x2a91b4u: goto label_2a91b4;
        case 0x2a91b8u: goto label_2a91b8;
        case 0x2a91bcu: goto label_2a91bc;
        case 0x2a91c0u: goto label_2a91c0;
        case 0x2a91c4u: goto label_2a91c4;
        case 0x2a91c8u: goto label_2a91c8;
        case 0x2a91ccu: goto label_2a91cc;
        case 0x2a91d0u: goto label_2a91d0;
        case 0x2a91d4u: goto label_2a91d4;
        case 0x2a91d8u: goto label_2a91d8;
        case 0x2a91dcu: goto label_2a91dc;
        default: break;
    }

    ctx->pc = 0x2a91b0u;

label_2a91b0:
    // 0x2a91b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a91b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a91b4:
    // 0x2a91b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a91b8:
    // 0x2a91b8: 0x90830034  lbu         $v1, 0x34($a0)
    ctx->pc = 0x2a91b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_2a91bc:
    // 0x2a91bc: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_2a91c0:
    if (ctx->pc == 0x2A91C0u) {
        ctx->pc = 0x2A91C0u;
            // 0x2a91c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2A91C4u;
        goto label_2a91c4;
    }
    ctx->pc = 0x2A91BCu;
    {
        const bool branch_taken_0x2a91bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a91bc) {
            ctx->pc = 0x2A91C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A91BCu;
            // 0x2a91c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A91D8u;
            goto label_2a91d8;
        }
    }
    ctx->pc = 0x2A91C4u;
label_2a91c4:
    // 0x2a91c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2a91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2a91c8:
    // 0x2a91c8: 0x8c420c60  lw          $v0, 0xC60($v0)
    ctx->pc = 0x2a91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3168)));
label_2a91cc:
    // 0x2a91cc: 0x40f809  jalr        $v0
label_2a91d0:
    if (ctx->pc == 0x2A91D0u) {
        ctx->pc = 0x2A91D4u;
        goto label_2a91d4;
    }
    ctx->pc = 0x2A91CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A91D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A91D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A91D4u; }
            if (ctx->pc != 0x2A91D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2A91D4u;
label_2a91d4:
    // 0x2a91d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a91d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a91d8:
    // 0x2a91d8: 0x3e00008  jr          $ra
label_2a91dc:
    if (ctx->pc == 0x2A91DCu) {
        ctx->pc = 0x2A91DCu;
            // 0x2a91dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A91E0u;
        goto label_fallthrough_0x2a91d8;
    }
    ctx->pc = 0x2A91D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A91DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A91D8u;
            // 0x2a91dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2a91d8:
    ctx->pc = 0x2A91E0u;
}
