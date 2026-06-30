#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C4E0
// Address: 0x16c4e0 - 0x16c530
void sub_0016C4E0_0x16c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C4E0_0x16c4e0");
#endif

    switch (ctx->pc) {
        case 0x16c4e0u: goto label_16c4e0;
        case 0x16c4e4u: goto label_16c4e4;
        case 0x16c4e8u: goto label_16c4e8;
        case 0x16c4ecu: goto label_16c4ec;
        case 0x16c4f0u: goto label_16c4f0;
        case 0x16c4f4u: goto label_16c4f4;
        case 0x16c4f8u: goto label_16c4f8;
        case 0x16c4fcu: goto label_16c4fc;
        case 0x16c500u: goto label_16c500;
        case 0x16c504u: goto label_16c504;
        case 0x16c508u: goto label_16c508;
        case 0x16c50cu: goto label_16c50c;
        case 0x16c510u: goto label_16c510;
        case 0x16c514u: goto label_16c514;
        case 0x16c518u: goto label_16c518;
        case 0x16c51cu: goto label_16c51c;
        case 0x16c520u: goto label_16c520;
        case 0x16c524u: goto label_16c524;
        case 0x16c528u: goto label_16c528;
        case 0x16c52cu: goto label_16c52c;
        default: break;
    }

    ctx->pc = 0x16c4e0u;

label_16c4e0:
    // 0x16c4e0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16c4e4:
    // 0x16c4e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c4e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16c4e8:
    // 0x16c4e8: 0x8c43aa10  lw          $v1, -0x55F0($v0)
    ctx->pc = 0x16c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945296)));
label_16c4ec:
    // 0x16c4ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_16c4f0:
    if (ctx->pc == 0x16C4F0u) {
        ctx->pc = 0x16C4F0u;
            // 0x16c4f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x16C4F4u;
        goto label_16c4f4;
    }
    ctx->pc = 0x16C4ECu;
    {
        const bool branch_taken_0x16c4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C4ECu;
            // 0x16c4f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c4ec) {
            ctx->pc = 0x16C500u;
            goto label_16c500;
        }
    }
    ctx->pc = 0x16C4F4u;
label_16c4f4:
    // 0x16c4f4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16c4f8:
    // 0x16c4f8: 0x60f809  jalr        $v1
label_16c4fc:
    if (ctx->pc == 0x16C4FCu) {
        ctx->pc = 0x16C4FCu;
            // 0x16c4fc: 0x8c44aa14  lw          $a0, -0x55EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945300)));
        ctx->pc = 0x16C500u;
        goto label_16c500;
    }
    ctx->pc = 0x16C4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C500u);
        ctx->pc = 0x16C4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C4F8u;
            // 0x16c4fc: 0x8c44aa14  lw          $a0, -0x55EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945300)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16C500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C500u; }
            if (ctx->pc != 0x16C500u) { return; }
        }
        }
    }
    ctx->pc = 0x16C500u;
label_16c500:
    // 0x16c500: 0xc060168  jal         func_1805A0
label_16c504:
    if (ctx->pc == 0x16C504u) {
        ctx->pc = 0x16C508u;
        goto label_16c508;
    }
    ctx->pc = 0x16C500u;
    SET_GPR_U32(ctx, 31, 0x16C508u);
    ctx->pc = 0x1805A0u;
    if (runtime->hasFunction(0x1805A0u)) {
        auto targetFn = runtime->lookupFunction(0x1805A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C508u; }
        if (ctx->pc != 0x16C508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001805A0_0x1805a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C508u; }
        if (ctx->pc != 0x16C508u) { return; }
    }
    ctx->pc = 0x16C508u;
label_16c508:
    // 0x16c508: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16c50c:
    // 0x16c50c: 0x8c43aa18  lw          $v1, -0x55E8($v0)
    ctx->pc = 0x16c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945304)));
label_16c510:
    // 0x16c510: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16c514:
    if (ctx->pc == 0x16C514u) {
        ctx->pc = 0x16C514u;
            // 0x16c514: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16C518u;
        goto label_16c518;
    }
    ctx->pc = 0x16C510u;
    {
        const bool branch_taken_0x16c510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C510u;
            // 0x16c514: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c510) {
            ctx->pc = 0x16C520u;
            goto label_16c520;
        }
    }
    ctx->pc = 0x16C518u;
label_16c518:
    // 0x16c518: 0x60f809  jalr        $v1
label_16c51c:
    if (ctx->pc == 0x16C51Cu) {
        ctx->pc = 0x16C51Cu;
            // 0x16c51c: 0x8c44aa1c  lw          $a0, -0x55E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945308)));
        ctx->pc = 0x16C520u;
        goto label_16c520;
    }
    ctx->pc = 0x16C518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16C520u);
        ctx->pc = 0x16C51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C518u;
            // 0x16c51c: 0x8c44aa1c  lw          $a0, -0x55E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945308)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16C520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C520u; }
            if (ctx->pc != 0x16C520u) { return; }
        }
        }
    }
    ctx->pc = 0x16C520u;
label_16c520:
    // 0x16c520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c524:
    // 0x16c524: 0x3e00008  jr          $ra
label_16c528:
    if (ctx->pc == 0x16C528u) {
        ctx->pc = 0x16C528u;
            // 0x16c528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16C52Cu;
        goto label_16c52c;
    }
    ctx->pc = 0x16C524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C524u;
            // 0x16c528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C52Cu;
label_16c52c:
    // 0x16c52c: 0x0  nop
    ctx->pc = 0x16c52cu;
    // NOP
}
