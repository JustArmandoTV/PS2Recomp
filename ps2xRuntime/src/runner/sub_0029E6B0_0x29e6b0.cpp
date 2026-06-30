#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029E6B0
// Address: 0x29e6b0 - 0x29e6f0
void sub_0029E6B0_0x29e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E6B0_0x29e6b0");
#endif

    switch (ctx->pc) {
        case 0x29e6b0u: goto label_29e6b0;
        case 0x29e6b4u: goto label_29e6b4;
        case 0x29e6b8u: goto label_29e6b8;
        case 0x29e6bcu: goto label_29e6bc;
        case 0x29e6c0u: goto label_29e6c0;
        case 0x29e6c4u: goto label_29e6c4;
        case 0x29e6c8u: goto label_29e6c8;
        case 0x29e6ccu: goto label_29e6cc;
        case 0x29e6d0u: goto label_29e6d0;
        case 0x29e6d4u: goto label_29e6d4;
        case 0x29e6d8u: goto label_29e6d8;
        case 0x29e6dcu: goto label_29e6dc;
        case 0x29e6e0u: goto label_29e6e0;
        case 0x29e6e4u: goto label_29e6e4;
        case 0x29e6e8u: goto label_29e6e8;
        case 0x29e6ecu: goto label_29e6ec;
        default: break;
    }

    ctx->pc = 0x29e6b0u;

label_29e6b0:
    // 0x29e6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29e6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29e6b4:
    // 0x29e6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29e6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29e6b8:
    // 0x29e6b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_29e6bc:
    // 0x29e6bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29e6c0:
    // 0x29e6c0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_29e6c4:
    if (ctx->pc == 0x29E6C4u) {
        ctx->pc = 0x29E6C4u;
            // 0x29e6c4: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x29E6C8u;
        goto label_29e6c8;
    }
    ctx->pc = 0x29E6C0u;
    {
        const bool branch_taken_0x29e6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6C0u;
            // 0x29e6c4: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e6c0) {
            ctx->pc = 0x29E6E0u;
            goto label_29e6e0;
        }
    }
    ctx->pc = 0x29E6C8u;
label_29e6c8:
    // 0x29e6c8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_29e6cc:
    if (ctx->pc == 0x29E6CCu) {
        ctx->pc = 0x29E6CCu;
            // 0x29e6cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x29E6D0u;
        goto label_29e6d0;
    }
    ctx->pc = 0x29E6C8u;
    {
        const bool branch_taken_0x29e6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e6c8) {
            ctx->pc = 0x29E6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6C8u;
            // 0x29e6cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29E6E4u;
            goto label_29e6e4;
        }
    }
    ctx->pc = 0x29E6D0u;
label_29e6d0:
    // 0x29e6d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29e6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29e6d4:
    // 0x29e6d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x29e6d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_29e6d8:
    // 0x29e6d8: 0x320f809  jalr        $t9
label_29e6dc:
    if (ctx->pc == 0x29E6DCu) {
        ctx->pc = 0x29E6DCu;
            // 0x29e6dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29E6E0u;
        goto label_29e6e0;
    }
    ctx->pc = 0x29E6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29E6E0u);
        ctx->pc = 0x29E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6D8u;
            // 0x29e6dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29E6E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29E6E0u; }
            if (ctx->pc != 0x29E6E0u) { return; }
        }
        }
    }
    ctx->pc = 0x29E6E0u;
label_29e6e0:
    // 0x29e6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29e6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e6e4:
    // 0x29e6e4: 0x3e00008  jr          $ra
label_29e6e8:
    if (ctx->pc == 0x29E6E8u) {
        ctx->pc = 0x29E6E8u;
            // 0x29e6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29E6ECu;
        goto label_29e6ec;
    }
    ctx->pc = 0x29E6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6E4u;
            // 0x29e6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E6ECu;
label_29e6ec:
    // 0x29e6ec: 0x0  nop
    ctx->pc = 0x29e6ecu;
    // NOP
}
