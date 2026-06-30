#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B8A0
// Address: 0x16b8a0 - 0x16b948
void sub_0016B8A0_0x16b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B8A0_0x16b8a0");
#endif

    switch (ctx->pc) {
        case 0x16b8b4u: goto label_16b8b4;
        case 0x16b8e4u: goto label_16b8e4;
        case 0x16b8f0u: goto label_16b8f0;
        case 0x16b8fcu: goto label_16b8fc;
        case 0x16b908u: goto label_16b908;
        case 0x16b930u: goto label_16b930;
        case 0x16b938u: goto label_16b938;
        default: break;
    }

    ctx->pc = 0x16b8a0u;

    // 0x16b8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b8a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b8a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b8ac: 0xc0599d2  jal         func_166748
    ctx->pc = 0x16B8ACu;
    SET_GPR_U32(ctx, 31, 0x16B8B4u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8B4u; }
        if (ctx->pc != 0x16B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8B4u; }
        if (ctx->pc != 0x16B8B4u) { return; }
    }
    ctx->pc = 0x16B8B4u;
label_16b8b4:
    // 0x16b8b4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16b8b8: 0x24509d4c  addiu       $s0, $v0, -0x62B4
    ctx->pc = 0x16b8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942028));
    // 0x16b8bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16b8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16b8c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B8C0u;
    {
        const bool branch_taken_0x16b8c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8C0u;
            // 0x16b8c4: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b8c0) {
            ctx->pc = 0x16B8D8u;
            goto label_16b8d8;
        }
    }
    ctx->pc = 0x16B8C8u;
    // 0x16b8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b8cc: 0x80599d8  j           func_166760
    ctx->pc = 0x16B8CCu;
    ctx->pc = 0x16B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8CCu;
            // 0x16b8d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B8D4u;
    // 0x16b8d4: 0x0  nop
    ctx->pc = 0x16b8d4u;
    // NOP
label_16b8d8:
    // 0x16b8d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b8dc: 0xc0599d8  jal         func_166760
    ctx->pc = 0x16B8DCu;
    SET_GPR_U32(ctx, 31, 0x16B8E4u);
    ctx->pc = 0x16B8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8DCu;
            // 0x16b8e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8E4u; }
        if (ctx->pc != 0x16B8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8E4u; }
        if (ctx->pc != 0x16B8E4u) { return; }
    }
    ctx->pc = 0x16B8E4u;
label_16b8e4:
    // 0x16b8e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b8e8: 0xc05c622  jal         func_171888
    ctx->pc = 0x16B8E8u;
    SET_GPR_U32(ctx, 31, 0x16B8F0u);
    ctx->pc = 0x16B8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8E8u;
            // 0x16b8ec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171888u;
    if (runtime->hasFunction(0x171888u)) {
        auto targetFn = runtime->lookupFunction(0x171888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8F0u; }
        if (ctx->pc != 0x16B8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171888_0x171888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8F0u; }
        if (ctx->pc != 0x16B8F0u) { return; }
    }
    ctx->pc = 0x16B8F0u;
label_16b8f0:
    // 0x16b8f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b8f4: 0xc05c5f8  jal         func_1717E0
    ctx->pc = 0x16B8F4u;
    SET_GPR_U32(ctx, 31, 0x16B8FCu);
    ctx->pc = 0x16B8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8F4u;
            // 0x16b8f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717E0u;
    if (runtime->hasFunction(0x1717E0u)) {
        auto targetFn = runtime->lookupFunction(0x1717E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8FCu; }
        if (ctx->pc != 0x16B8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717E0_0x1717e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8FCu; }
        if (ctx->pc != 0x16B8FCu) { return; }
    }
    ctx->pc = 0x16B8FCu;
label_16b8fc:
    // 0x16b8fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16b900: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x16B900u;
    SET_GPR_U32(ctx, 31, 0x16B908u);
    ctx->pc = 0x16B904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B900u;
            // 0x16b904: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A9F0u;
    if (runtime->hasFunction(0x16A9F0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B908u; }
        if (ctx->pc != 0x16B908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A9F0_0x16a9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B908u; }
        if (ctx->pc != 0x16B908u) { return; }
    }
    ctx->pc = 0x16B908u;
label_16b908:
    // 0x16b908: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x16b908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x16b90c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b910: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b914: 0x3e00008  jr          $ra
    ctx->pc = 0x16B914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B914u;
            // 0x16b918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B91Cu;
    // 0x16b91c: 0x0  nop
    ctx->pc = 0x16b91cu;
    // NOP
    // 0x16b920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b928: 0xc0599de  jal         func_166778
    ctx->pc = 0x16B928u;
    SET_GPR_U32(ctx, 31, 0x16B930u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B930u; }
        if (ctx->pc != 0x16B930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B930u; }
        if (ctx->pc != 0x16B930u) { return; }
    }
    ctx->pc = 0x16B930u;
label_16b930:
    // 0x16b930: 0xc05ae52  jal         func_16B948
    ctx->pc = 0x16B930u;
    SET_GPR_U32(ctx, 31, 0x16B938u);
    ctx->pc = 0x16B948u;
    if (runtime->hasFunction(0x16B948u)) {
        auto targetFn = runtime->lookupFunction(0x16B948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B938u; }
        if (ctx->pc != 0x16B938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B948_0x16b948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B938u; }
        if (ctx->pc != 0x16B938u) { return; }
    }
    ctx->pc = 0x16B938u;
label_16b938:
    // 0x16b938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b93c: 0x80599e0  j           func_166780
    ctx->pc = 0x16B93Cu;
    ctx->pc = 0x16B940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B93Cu;
            // 0x16b940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B944u;
    // 0x16b944: 0x0  nop
    ctx->pc = 0x16b944u;
    // NOP
}
