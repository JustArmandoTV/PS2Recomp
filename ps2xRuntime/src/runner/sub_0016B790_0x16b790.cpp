#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B790
// Address: 0x16b790 - 0x16b8a0
void sub_0016B790_0x16b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B790_0x16b790");
#endif

    switch (ctx->pc) {
        case 0x16b790u: goto label_16b790;
        case 0x16b794u: goto label_16b794;
        case 0x16b798u: goto label_16b798;
        case 0x16b79cu: goto label_16b79c;
        case 0x16b7a0u: goto label_16b7a0;
        case 0x16b7a4u: goto label_16b7a4;
        case 0x16b7a8u: goto label_16b7a8;
        case 0x16b7acu: goto label_16b7ac;
        case 0x16b7b0u: goto label_16b7b0;
        case 0x16b7b4u: goto label_16b7b4;
        case 0x16b7b8u: goto label_16b7b8;
        case 0x16b7bcu: goto label_16b7bc;
        case 0x16b7c0u: goto label_16b7c0;
        case 0x16b7c4u: goto label_16b7c4;
        case 0x16b7c8u: goto label_16b7c8;
        case 0x16b7ccu: goto label_16b7cc;
        case 0x16b7d0u: goto label_16b7d0;
        case 0x16b7d4u: goto label_16b7d4;
        case 0x16b7d8u: goto label_16b7d8;
        case 0x16b7dcu: goto label_16b7dc;
        case 0x16b7e0u: goto label_16b7e0;
        case 0x16b7e4u: goto label_16b7e4;
        case 0x16b7e8u: goto label_16b7e8;
        case 0x16b7ecu: goto label_16b7ec;
        case 0x16b7f0u: goto label_16b7f0;
        case 0x16b7f4u: goto label_16b7f4;
        case 0x16b7f8u: goto label_16b7f8;
        case 0x16b7fcu: goto label_16b7fc;
        case 0x16b800u: goto label_16b800;
        case 0x16b804u: goto label_16b804;
        case 0x16b808u: goto label_16b808;
        case 0x16b80cu: goto label_16b80c;
        case 0x16b810u: goto label_16b810;
        case 0x16b814u: goto label_16b814;
        case 0x16b818u: goto label_16b818;
        case 0x16b81cu: goto label_16b81c;
        case 0x16b820u: goto label_16b820;
        case 0x16b824u: goto label_16b824;
        case 0x16b828u: goto label_16b828;
        case 0x16b82cu: goto label_16b82c;
        case 0x16b830u: goto label_16b830;
        case 0x16b834u: goto label_16b834;
        case 0x16b838u: goto label_16b838;
        case 0x16b83cu: goto label_16b83c;
        case 0x16b840u: goto label_16b840;
        case 0x16b844u: goto label_16b844;
        case 0x16b848u: goto label_16b848;
        case 0x16b84cu: goto label_16b84c;
        case 0x16b850u: goto label_16b850;
        case 0x16b854u: goto label_16b854;
        case 0x16b858u: goto label_16b858;
        case 0x16b85cu: goto label_16b85c;
        case 0x16b860u: goto label_16b860;
        case 0x16b864u: goto label_16b864;
        case 0x16b868u: goto label_16b868;
        case 0x16b86cu: goto label_16b86c;
        case 0x16b870u: goto label_16b870;
        case 0x16b874u: goto label_16b874;
        case 0x16b878u: goto label_16b878;
        case 0x16b87cu: goto label_16b87c;
        case 0x16b880u: goto label_16b880;
        case 0x16b884u: goto label_16b884;
        case 0x16b888u: goto label_16b888;
        case 0x16b88cu: goto label_16b88c;
        case 0x16b890u: goto label_16b890;
        case 0x16b894u: goto label_16b894;
        case 0x16b898u: goto label_16b898;
        case 0x16b89cu: goto label_16b89c;
        default: break;
    }

    ctx->pc = 0x16b790u;

label_16b790:
    // 0x16b790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16b794:
    // 0x16b794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16b798:
    // 0x16b798: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_16b79c:
    // 0x16b79c: 0xc0599d2  jal         func_166748
label_16b7a0:
    if (ctx->pc == 0x16B7A0u) {
        ctx->pc = 0x16B7A4u;
        goto label_16b7a4;
    }
    ctx->pc = 0x16B79Cu;
    SET_GPR_U32(ctx, 31, 0x16B7A4u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7A4u; }
        if (ctx->pc != 0x16B7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7A4u; }
        if (ctx->pc != 0x16B7A4u) { return; }
    }
    ctx->pc = 0x16B7A4u;
label_16b7a4:
    // 0x16b7a4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16b7a8:
    // 0x16b7a8: 0x24509d48  addiu       $s0, $v0, -0x62B8
    ctx->pc = 0x16b7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942024));
label_16b7ac:
    // 0x16b7ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16b7b0:
    // 0x16b7b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_16b7b4:
    if (ctx->pc == 0x16B7B4u) {
        ctx->pc = 0x16B7B4u;
            // 0x16b7b4: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x16B7B8u;
        goto label_16b7b8;
    }
    ctx->pc = 0x16B7B0u;
    {
        const bool branch_taken_0x16b7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7B0u;
            // 0x16b7b4: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7b0) {
            ctx->pc = 0x16B7C8u;
            goto label_16b7c8;
        }
    }
    ctx->pc = 0x16B7B8u;
label_16b7b8:
    // 0x16b7b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b7b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b7bc:
    // 0x16b7bc: 0x80599d8  j           func_166760
label_16b7c0:
    if (ctx->pc == 0x16B7C0u) {
        ctx->pc = 0x16B7C0u;
            // 0x16b7c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16B7C4u;
        goto label_16b7c4;
    }
    ctx->pc = 0x16B7BCu;
    ctx->pc = 0x16B7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7BCu;
            // 0x16b7c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B7C4u;
label_16b7c4:
    // 0x16b7c4: 0x0  nop
    ctx->pc = 0x16b7c4u;
    // NOP
label_16b7c8:
    // 0x16b7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b7cc:
    // 0x16b7cc: 0xc0599d8  jal         func_166760
label_16b7d0:
    if (ctx->pc == 0x16B7D0u) {
        ctx->pc = 0x16B7D0u;
            // 0x16b7d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16B7D4u;
        goto label_16b7d4;
    }
    ctx->pc = 0x16B7CCu;
    SET_GPR_U32(ctx, 31, 0x16B7D4u);
    ctx->pc = 0x16B7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7CCu;
            // 0x16b7d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7D4u; }
        if (ctx->pc != 0x16B7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7D4u; }
        if (ctx->pc != 0x16B7D4u) { return; }
    }
    ctx->pc = 0x16B7D4u;
label_16b7d4:
    // 0x16b7d4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16b7d8:
    // 0x16b7d8: 0x8c439d50  lw          $v1, -0x62B0($v0)
    ctx->pc = 0x16b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942032)));
label_16b7dc:
    // 0x16b7dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16b7e0:
    if (ctx->pc == 0x16B7E0u) {
        ctx->pc = 0x16B7E0u;
            // 0x16b7e0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16B7E4u;
        goto label_16b7e4;
    }
    ctx->pc = 0x16B7DCu;
    {
        const bool branch_taken_0x16b7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7DCu;
            // 0x16b7e0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b7dc) {
            ctx->pc = 0x16B7ECu;
            goto label_16b7ec;
        }
    }
    ctx->pc = 0x16B7E4u;
label_16b7e4:
    // 0x16b7e4: 0x60f809  jalr        $v1
label_16b7e8:
    if (ctx->pc == 0x16B7E8u) {
        ctx->pc = 0x16B7E8u;
            // 0x16b7e8: 0x8c449d54  lw          $a0, -0x62AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942036)));
        ctx->pc = 0x16B7ECu;
        goto label_16b7ec;
    }
    ctx->pc = 0x16B7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16B7ECu);
        ctx->pc = 0x16B7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7E4u;
            // 0x16b7e8: 0x8c449d54  lw          $a0, -0x62AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942036)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B7ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B7ECu; }
            if (ctx->pc != 0x16B7ECu) { return; }
        }
        }
    }
    ctx->pc = 0x16B7ECu;
label_16b7ec:
    // 0x16b7ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16b7f0:
    // 0x16b7f0: 0xc05ec12  jal         func_17B048
label_16b7f4:
    if (ctx->pc == 0x16B7F4u) {
        ctx->pc = 0x16B7F4u;
            // 0x16b7f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16B7F8u;
        goto label_16b7f8;
    }
    ctx->pc = 0x16B7F0u;
    SET_GPR_U32(ctx, 31, 0x16B7F8u);
    ctx->pc = 0x16B7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7F0u;
            // 0x16b7f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B048u;
    if (runtime->hasFunction(0x17B048u)) {
        auto targetFn = runtime->lookupFunction(0x17B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7F8u; }
        if (ctx->pc != 0x16B7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B048_0x17b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7F8u; }
        if (ctx->pc != 0x16B7F8u) { return; }
    }
    ctx->pc = 0x16B7F8u;
label_16b7f8:
    // 0x16b7f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16b7fc:
    // 0x16b7fc: 0xc05c622  jal         func_171888
label_16b800:
    if (ctx->pc == 0x16B800u) {
        ctx->pc = 0x16B800u;
            // 0x16b800: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16B804u;
        goto label_16b804;
    }
    ctx->pc = 0x16B7FCu;
    SET_GPR_U32(ctx, 31, 0x16B804u);
    ctx->pc = 0x16B800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B7FCu;
            // 0x16b800: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171888u;
    if (runtime->hasFunction(0x171888u)) {
        auto targetFn = runtime->lookupFunction(0x171888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B804u; }
        if (ctx->pc != 0x16B804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171888_0x171888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B804u; }
        if (ctx->pc != 0x16B804u) { return; }
    }
    ctx->pc = 0x16B804u;
label_16b804:
    // 0x16b804: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16b804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16b808:
    // 0x16b808: 0xc05c5ba  jal         func_1716E8
label_16b80c:
    if (ctx->pc == 0x16B80Cu) {
        ctx->pc = 0x16B80Cu;
            // 0x16b80c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16B810u;
        goto label_16b810;
    }
    ctx->pc = 0x16B808u;
    SET_GPR_U32(ctx, 31, 0x16B810u);
    ctx->pc = 0x16B80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B808u;
            // 0x16b80c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1716E8u;
    if (runtime->hasFunction(0x1716E8u)) {
        auto targetFn = runtime->lookupFunction(0x1716E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B810u; }
        if (ctx->pc != 0x16B810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001716E8_0x1716e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B810u; }
        if (ctx->pc != 0x16B810u) { return; }
    }
    ctx->pc = 0x16B810u;
label_16b810:
    // 0x16b810: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16b814:
    // 0x16b814: 0xc05aa7c  jal         func_16A9F0
label_16b818:
    if (ctx->pc == 0x16B818u) {
        ctx->pc = 0x16B818u;
            // 0x16b818: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16B81Cu;
        goto label_16b81c;
    }
    ctx->pc = 0x16B814u;
    SET_GPR_U32(ctx, 31, 0x16B81Cu);
    ctx->pc = 0x16B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B814u;
            // 0x16b818: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A9F0u;
    if (runtime->hasFunction(0x16A9F0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B81Cu; }
        if (ctx->pc != 0x16B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A9F0_0x16a9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B81Cu; }
        if (ctx->pc != 0x16B81Cu) { return; }
    }
    ctx->pc = 0x16B81Cu;
label_16b81c:
    // 0x16b81c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16b820:
    // 0x16b820: 0xc05c5ba  jal         func_1716E8
label_16b824:
    if (ctx->pc == 0x16B824u) {
        ctx->pc = 0x16B824u;
            // 0x16b824: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16B828u;
        goto label_16b828;
    }
    ctx->pc = 0x16B820u;
    SET_GPR_U32(ctx, 31, 0x16B828u);
    ctx->pc = 0x16B824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B820u;
            // 0x16b824: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1716E8u;
    if (runtime->hasFunction(0x1716E8u)) {
        auto targetFn = runtime->lookupFunction(0x1716E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B828u; }
        if (ctx->pc != 0x16B828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001716E8_0x1716e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B828u; }
        if (ctx->pc != 0x16B828u) { return; }
    }
    ctx->pc = 0x16B828u;
label_16b828:
    // 0x16b828: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16b82c:
    // 0x16b82c: 0xc05c622  jal         func_171888
label_16b830:
    if (ctx->pc == 0x16B830u) {
        ctx->pc = 0x16B830u;
            // 0x16b830: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16B834u;
        goto label_16b834;
    }
    ctx->pc = 0x16B82Cu;
    SET_GPR_U32(ctx, 31, 0x16B834u);
    ctx->pc = 0x16B830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B82Cu;
            // 0x16b830: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171888u;
    if (runtime->hasFunction(0x171888u)) {
        auto targetFn = runtime->lookupFunction(0x171888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B834u; }
        if (ctx->pc != 0x16B834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171888_0x171888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B834u; }
        if (ctx->pc != 0x16B834u) { return; }
    }
    ctx->pc = 0x16B834u;
label_16b834:
    // 0x16b834: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x16b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_16b838:
    // 0x16b838: 0xc05ec12  jal         func_17B048
label_16b83c:
    if (ctx->pc == 0x16B83Cu) {
        ctx->pc = 0x16B83Cu;
            // 0x16b83c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16B840u;
        goto label_16b840;
    }
    ctx->pc = 0x16B838u;
    SET_GPR_U32(ctx, 31, 0x16B840u);
    ctx->pc = 0x16B83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B838u;
            // 0x16b83c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B048u;
    if (runtime->hasFunction(0x17B048u)) {
        auto targetFn = runtime->lookupFunction(0x17B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B840u; }
        if (ctx->pc != 0x16B840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B048_0x17b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B840u; }
        if (ctx->pc != 0x16B840u) { return; }
    }
    ctx->pc = 0x16B840u;
label_16b840:
    // 0x16b840: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x16b840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_16b844:
    // 0x16b844: 0xc05c632  jal         func_1718C8
label_16b848:
    if (ctx->pc == 0x16B848u) {
        ctx->pc = 0x16B848u;
            // 0x16b848: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x16B84Cu;
        goto label_16b84c;
    }
    ctx->pc = 0x16B844u;
    SET_GPR_U32(ctx, 31, 0x16B84Cu);
    ctx->pc = 0x16B848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B844u;
            // 0x16b848: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1718C8u;
    if (runtime->hasFunction(0x1718C8u)) {
        auto targetFn = runtime->lookupFunction(0x1718C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B84Cu; }
        if (ctx->pc != 0x16B84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001718C8_0x1718c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B84Cu; }
        if (ctx->pc != 0x16B84Cu) { return; }
    }
    ctx->pc = 0x16B84Cu;
label_16b84c:
    // 0x16b84c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16b850:
    // 0x16b850: 0x8c439d58  lw          $v1, -0x62A8($v0)
    ctx->pc = 0x16b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942040)));
label_16b854:
    // 0x16b854: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x16b854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_16b858:
    // 0x16b858: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16b85c:
    if (ctx->pc == 0x16B85Cu) {
        ctx->pc = 0x16B85Cu;
            // 0x16b85c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16B860u;
        goto label_16b860;
    }
    ctx->pc = 0x16B858u;
    {
        const bool branch_taken_0x16b858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B858u;
            // 0x16b85c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b858) {
            ctx->pc = 0x16B868u;
            goto label_16b868;
        }
    }
    ctx->pc = 0x16B860u;
label_16b860:
    // 0x16b860: 0x60f809  jalr        $v1
label_16b864:
    if (ctx->pc == 0x16B864u) {
        ctx->pc = 0x16B864u;
            // 0x16b864: 0x8c449d5c  lw          $a0, -0x62A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942044)));
        ctx->pc = 0x16B868u;
        goto label_16b868;
    }
    ctx->pc = 0x16B860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16B868u);
        ctx->pc = 0x16B864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B860u;
            // 0x16b864: 0x8c449d5c  lw          $a0, -0x62A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942044)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B868u; }
            if (ctx->pc != 0x16B868u) { return; }
        }
        }
    }
    ctx->pc = 0x16B868u;
label_16b868:
    // 0x16b868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b86c:
    // 0x16b86c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16b870:
    // 0x16b870: 0x3e00008  jr          $ra
label_16b874:
    if (ctx->pc == 0x16B874u) {
        ctx->pc = 0x16B874u;
            // 0x16b874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16B878u;
        goto label_16b878;
    }
    ctx->pc = 0x16B870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B870u;
            // 0x16b874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B878u;
label_16b878:
    // 0x16b878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16b87c:
    // 0x16b87c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16b880:
    // 0x16b880: 0xc0599de  jal         func_166778
label_16b884:
    if (ctx->pc == 0x16B884u) {
        ctx->pc = 0x16B888u;
        goto label_16b888;
    }
    ctx->pc = 0x16B880u;
    SET_GPR_U32(ctx, 31, 0x16B888u);
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B888u; }
        if (ctx->pc != 0x16B888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B888u; }
        if (ctx->pc != 0x16B888u) { return; }
    }
    ctx->pc = 0x16B888u;
label_16b888:
    // 0x16b888: 0xc05ae28  jal         func_16B8A0
label_16b88c:
    if (ctx->pc == 0x16B88Cu) {
        ctx->pc = 0x16B890u;
        goto label_16b890;
    }
    ctx->pc = 0x16B888u;
    SET_GPR_U32(ctx, 31, 0x16B890u);
    ctx->pc = 0x16B8A0u;
    if (runtime->hasFunction(0x16B8A0u)) {
        auto targetFn = runtime->lookupFunction(0x16B8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B890u; }
        if (ctx->pc != 0x16B890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B8A0_0x16b8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B890u; }
        if (ctx->pc != 0x16B890u) { return; }
    }
    ctx->pc = 0x16B890u;
label_16b890:
    // 0x16b890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b894:
    // 0x16b894: 0x80599e0  j           func_166780
label_16b898:
    if (ctx->pc == 0x16B898u) {
        ctx->pc = 0x16B898u;
            // 0x16b898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16B89Cu;
        goto label_16b89c;
    }
    ctx->pc = 0x16B894u;
    ctx->pc = 0x16B898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B894u;
            // 0x16b898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16B89Cu;
label_16b89c:
    // 0x16b89c: 0x0  nop
    ctx->pc = 0x16b89cu;
    // NOP
}
