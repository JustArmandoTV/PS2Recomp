#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443580
// Address: 0x443580 - 0x443610
void sub_00443580_0x443580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443580_0x443580");
#endif

    switch (ctx->pc) {
        case 0x443580u: goto label_443580;
        case 0x443584u: goto label_443584;
        case 0x443588u: goto label_443588;
        case 0x44358cu: goto label_44358c;
        case 0x443590u: goto label_443590;
        case 0x443594u: goto label_443594;
        case 0x443598u: goto label_443598;
        case 0x44359cu: goto label_44359c;
        case 0x4435a0u: goto label_4435a0;
        case 0x4435a4u: goto label_4435a4;
        case 0x4435a8u: goto label_4435a8;
        case 0x4435acu: goto label_4435ac;
        case 0x4435b0u: goto label_4435b0;
        case 0x4435b4u: goto label_4435b4;
        case 0x4435b8u: goto label_4435b8;
        case 0x4435bcu: goto label_4435bc;
        case 0x4435c0u: goto label_4435c0;
        case 0x4435c4u: goto label_4435c4;
        case 0x4435c8u: goto label_4435c8;
        case 0x4435ccu: goto label_4435cc;
        case 0x4435d0u: goto label_4435d0;
        case 0x4435d4u: goto label_4435d4;
        case 0x4435d8u: goto label_4435d8;
        case 0x4435dcu: goto label_4435dc;
        case 0x4435e0u: goto label_4435e0;
        case 0x4435e4u: goto label_4435e4;
        case 0x4435e8u: goto label_4435e8;
        case 0x4435ecu: goto label_4435ec;
        case 0x4435f0u: goto label_4435f0;
        case 0x4435f4u: goto label_4435f4;
        case 0x4435f8u: goto label_4435f8;
        case 0x4435fcu: goto label_4435fc;
        case 0x443600u: goto label_443600;
        case 0x443604u: goto label_443604;
        case 0x443608u: goto label_443608;
        case 0x44360cu: goto label_44360c;
        default: break;
    }

    ctx->pc = 0x443580u;

label_443580:
    // 0x443580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x443580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_443584:
    // 0x443584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x443584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_443588:
    // 0x443588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x443588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44358c:
    // 0x44358c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x44358cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_443590:
    // 0x443590: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x443590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_443594:
    // 0x443594: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x443594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_443598:
    // 0x443598: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x443598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_44359c:
    // 0x44359c: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x44359cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4435a0:
    // 0x4435a0: 0xc088b74  jal         func_222DD0
label_4435a4:
    if (ctx->pc == 0x4435A4u) {
        ctx->pc = 0x4435A4u;
            // 0x4435a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4435A8u;
        goto label_4435a8;
    }
    ctx->pc = 0x4435A0u;
    SET_GPR_U32(ctx, 31, 0x4435A8u);
    ctx->pc = 0x4435A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4435A0u;
            // 0x4435a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4435A8u; }
        if (ctx->pc != 0x4435A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4435A8u; }
        if (ctx->pc != 0x4435A8u) { return; }
    }
    ctx->pc = 0x4435A8u;
label_4435a8:
    // 0x4435a8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4435a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4435ac:
    // 0x4435ac: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4435acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4435b0:
    // 0x4435b0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4435b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4435b4:
    // 0x4435b4: 0x320f809  jalr        $t9
label_4435b8:
    if (ctx->pc == 0x4435B8u) {
        ctx->pc = 0x4435B8u;
            // 0x4435b8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4435BCu;
        goto label_4435bc;
    }
    ctx->pc = 0x4435B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4435BCu);
        ctx->pc = 0x4435B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4435B4u;
            // 0x4435b8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4435BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4435BCu; }
            if (ctx->pc != 0x4435BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4435BCu;
label_4435bc:
    // 0x4435bc: 0x3c024402  lui         $v0, 0x4402
    ctx->pc = 0x4435bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17410 << 16));
label_4435c0:
    // 0x4435c0: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x4435c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_4435c4:
    // 0x4435c4: 0x3442e652  ori         $v0, $v0, 0xE652
    ctx->pc = 0x4435c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58962);
label_4435c8:
    // 0x4435c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4435c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4435cc:
    // 0x4435cc: 0xc088b74  jal         func_222DD0
label_4435d0:
    if (ctx->pc == 0x4435D0u) {
        ctx->pc = 0x4435D0u;
            // 0x4435d0: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->pc = 0x4435D4u;
        goto label_4435d4;
    }
    ctx->pc = 0x4435CCu;
    SET_GPR_U32(ctx, 31, 0x4435D4u);
    ctx->pc = 0x4435D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4435CCu;
            // 0x4435d0: 0xae020154  sw          $v0, 0x154($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4435D4u; }
        if (ctx->pc != 0x4435D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4435D4u; }
        if (ctx->pc != 0x4435D4u) { return; }
    }
    ctx->pc = 0x4435D4u;
label_4435d4:
    // 0x4435d4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4435d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4435d8:
    // 0x4435d8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4435d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4435dc:
    // 0x4435dc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4435dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4435e0:
    // 0x4435e0: 0x320f809  jalr        $t9
label_4435e4:
    if (ctx->pc == 0x4435E4u) {
        ctx->pc = 0x4435E4u;
            // 0x4435e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4435E8u;
        goto label_4435e8;
    }
    ctx->pc = 0x4435E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4435E8u);
        ctx->pc = 0x4435E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4435E0u;
            // 0x4435e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4435E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4435E8u; }
            if (ctx->pc != 0x4435E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4435E8u;
label_4435e8:
    // 0x4435e8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x4435e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_4435ec:
    // 0x4435ec: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x4435ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_4435f0:
    // 0x4435f0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x4435f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_4435f4:
    // 0x4435f4: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x4435f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_4435f8:
    // 0x4435f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4435f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4435fc:
    // 0x4435fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4435fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_443600:
    // 0x443600: 0x3e00008  jr          $ra
label_443604:
    if (ctx->pc == 0x443604u) {
        ctx->pc = 0x443604u;
            // 0x443604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x443608u;
        goto label_443608;
    }
    ctx->pc = 0x443600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443600u;
            // 0x443604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443608u;
label_443608:
    // 0x443608: 0x0  nop
    ctx->pc = 0x443608u;
    // NOP
label_44360c:
    // 0x44360c: 0x0  nop
    ctx->pc = 0x44360cu;
    // NOP
}
