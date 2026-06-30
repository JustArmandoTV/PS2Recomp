#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C018
// Address: 0x16c018 - 0x16c108
void sub_0016C018_0x16c018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C018_0x16c018");
#endif

    switch (ctx->pc) {
        case 0x16c018u: goto label_16c018;
        case 0x16c01cu: goto label_16c01c;
        case 0x16c020u: goto label_16c020;
        case 0x16c024u: goto label_16c024;
        case 0x16c028u: goto label_16c028;
        case 0x16c02cu: goto label_16c02c;
        case 0x16c030u: goto label_16c030;
        case 0x16c034u: goto label_16c034;
        case 0x16c038u: goto label_16c038;
        case 0x16c03cu: goto label_16c03c;
        case 0x16c040u: goto label_16c040;
        case 0x16c044u: goto label_16c044;
        case 0x16c048u: goto label_16c048;
        case 0x16c04cu: goto label_16c04c;
        case 0x16c050u: goto label_16c050;
        case 0x16c054u: goto label_16c054;
        case 0x16c058u: goto label_16c058;
        case 0x16c05cu: goto label_16c05c;
        case 0x16c060u: goto label_16c060;
        case 0x16c064u: goto label_16c064;
        case 0x16c068u: goto label_16c068;
        case 0x16c06cu: goto label_16c06c;
        case 0x16c070u: goto label_16c070;
        case 0x16c074u: goto label_16c074;
        case 0x16c078u: goto label_16c078;
        case 0x16c07cu: goto label_16c07c;
        case 0x16c080u: goto label_16c080;
        case 0x16c084u: goto label_16c084;
        case 0x16c088u: goto label_16c088;
        case 0x16c08cu: goto label_16c08c;
        case 0x16c090u: goto label_16c090;
        case 0x16c094u: goto label_16c094;
        case 0x16c098u: goto label_16c098;
        case 0x16c09cu: goto label_16c09c;
        case 0x16c0a0u: goto label_16c0a0;
        case 0x16c0a4u: goto label_16c0a4;
        case 0x16c0a8u: goto label_16c0a8;
        case 0x16c0acu: goto label_16c0ac;
        case 0x16c0b0u: goto label_16c0b0;
        case 0x16c0b4u: goto label_16c0b4;
        case 0x16c0b8u: goto label_16c0b8;
        case 0x16c0bcu: goto label_16c0bc;
        case 0x16c0c0u: goto label_16c0c0;
        case 0x16c0c4u: goto label_16c0c4;
        case 0x16c0c8u: goto label_16c0c8;
        case 0x16c0ccu: goto label_16c0cc;
        case 0x16c0d0u: goto label_16c0d0;
        case 0x16c0d4u: goto label_16c0d4;
        case 0x16c0d8u: goto label_16c0d8;
        case 0x16c0dcu: goto label_16c0dc;
        case 0x16c0e0u: goto label_16c0e0;
        case 0x16c0e4u: goto label_16c0e4;
        case 0x16c0e8u: goto label_16c0e8;
        case 0x16c0ecu: goto label_16c0ec;
        case 0x16c0f0u: goto label_16c0f0;
        case 0x16c0f4u: goto label_16c0f4;
        case 0x16c0f8u: goto label_16c0f8;
        case 0x16c0fcu: goto label_16c0fc;
        case 0x16c100u: goto label_16c100;
        case 0x16c104u: goto label_16c104;
        default: break;
    }

    ctx->pc = 0x16c018u;

label_16c018:
    // 0x16c018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16c01c:
    // 0x16c01c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16c020:
    // 0x16c020: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c024:
    // 0x16c024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16c028:
    // 0x16c028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16c02c:
    // 0x16c02c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_16c030:
    if (ctx->pc == 0x16C030u) {
        ctx->pc = 0x16C030u;
            // 0x16c030: 0x8e110094  lw          $s1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x16C034u;
        goto label_16c034;
    }
    ctx->pc = 0x16C02Cu;
    {
        const bool branch_taken_0x16c02c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C02Cu;
            // 0x16c030: 0x8e110094  lw          $s1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c02c) {
            ctx->pc = 0x16C050u;
            goto label_16c050;
        }
    }
    ctx->pc = 0x16C034u;
label_16c034:
    // 0x16c034: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16c034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_16c038:
    // 0x16c038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c03c:
    // 0x16c03c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16c040:
    // 0x16c040: 0x24843d40  addiu       $a0, $a0, 0x3D40
    ctx->pc = 0x16c040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15680));
label_16c044:
    // 0x16c044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c048:
    // 0x16c048: 0x8059f4e  j           func_167D38
label_16c04c:
    if (ctx->pc == 0x16C04Cu) {
        ctx->pc = 0x16C04Cu;
            // 0x16c04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16C050u;
        goto label_16c050;
    }
    ctx->pc = 0x16C048u;
    ctx->pc = 0x16C04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C048u;
            // 0x16c04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C050u;
label_16c050:
    // 0x16c050: 0xc05cc50  jal         func_173140
label_16c054:
    if (ctx->pc == 0x16C054u) {
        ctx->pc = 0x16C058u;
        goto label_16c058;
    }
    ctx->pc = 0x16C050u;
    SET_GPR_U32(ctx, 31, 0x16C058u);
    ctx->pc = 0x173140u;
    if (runtime->hasFunction(0x173140u)) {
        auto targetFn = runtime->lookupFunction(0x173140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C058u; }
        if (ctx->pc != 0x16C058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173140_0x173140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C058u; }
        if (ctx->pc != 0x16C058u) { return; }
    }
    ctx->pc = 0x16C058u;
label_16c058:
    // 0x16c058: 0xc0599d2  jal         func_166748
label_16c05c:
    if (ctx->pc == 0x16C05Cu) {
        ctx->pc = 0x16C060u;
        goto label_16c060;
    }
    ctx->pc = 0x16C058u;
    SET_GPR_U32(ctx, 31, 0x16C060u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C060u; }
        if (ctx->pc != 0x16C060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C060u; }
        if (ctx->pc != 0x16C060u) { return; }
    }
    ctx->pc = 0x16C060u;
label_16c060:
    // 0x16c060: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16c064:
    // 0x16c064: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x16c064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16c068:
    // 0x16c068: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x16c068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_16c06c:
    // 0x16c06c: 0xc05cba8  jal         func_172EA0
label_16c070:
    if (ctx->pc == 0x16C070u) {
        ctx->pc = 0x16C070u;
            // 0x16c070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C074u;
        goto label_16c074;
    }
    ctx->pc = 0x16C06Cu;
    SET_GPR_U32(ctx, 31, 0x16C074u);
    ctx->pc = 0x16C070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C06Cu;
            // 0x16c070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172EA0u;
    if (runtime->hasFunction(0x172EA0u)) {
        auto targetFn = runtime->lookupFunction(0x172EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C074u; }
        if (ctx->pc != 0x16C074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172EA0_0x172ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C074u; }
        if (ctx->pc != 0x16C074u) { return; }
    }
    ctx->pc = 0x16C074u;
label_16c074:
    // 0x16c074: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x16c074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_16c078:
    // 0x16c078: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16c078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16c07c:
    // 0x16c07c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x16c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16c080:
    // 0x16c080: 0x40f809  jalr        $v0
label_16c084:
    if (ctx->pc == 0x16C084u) {
        ctx->pc = 0x16C088u;
        goto label_16c088;
    }
    ctx->pc = 0x16C080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16C088u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x16C088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C088u; }
            if (ctx->pc != 0x16C088u) { return; }
        }
        }
    }
    ctx->pc = 0x16C088u;
label_16c088:
    // 0x16c088: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x16c088u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_16c08c:
    // 0x16c08c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c090:
    // 0x16c090: 0xc06029c  jal         func_180A70
label_16c094:
    if (ctx->pc == 0x16C094u) {
        ctx->pc = 0x16C094u;
            // 0x16c094: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
        ctx->pc = 0x16C098u;
        goto label_16c098;
    }
    ctx->pc = 0x16C090u;
    SET_GPR_U32(ctx, 31, 0x16C098u);
    ctx->pc = 0x16C094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C090u;
            // 0x16c094: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A70u;
    if (runtime->hasFunction(0x180A70u)) {
        auto targetFn = runtime->lookupFunction(0x180A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C098u; }
        if (ctx->pc != 0x16C098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A70_0x180a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C098u; }
        if (ctx->pc != 0x16C098u) { return; }
    }
    ctx->pc = 0x16C098u;
label_16c098:
    // 0x16c098: 0xc0599d8  jal         func_166760
label_16c09c:
    if (ctx->pc == 0x16C09Cu) {
        ctx->pc = 0x16C0A0u;
        goto label_16c0a0;
    }
    ctx->pc = 0x16C098u;
    SET_GPR_U32(ctx, 31, 0x16C0A0u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0A0u; }
        if (ctx->pc != 0x16C0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0A0u; }
        if (ctx->pc != 0x16C0A0u) { return; }
    }
    ctx->pc = 0x16C0A0u;
label_16c0a0:
    // 0x16c0a0: 0xc0600f4  jal         func_1803D0
label_16c0a4:
    if (ctx->pc == 0x16C0A4u) {
        ctx->pc = 0x16C0A4u;
            // 0x16c0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C0A8u;
        goto label_16c0a8;
    }
    ctx->pc = 0x16C0A0u;
    SET_GPR_U32(ctx, 31, 0x16C0A8u);
    ctx->pc = 0x16C0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0A0u;
            // 0x16c0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1803D0u;
    if (runtime->hasFunction(0x1803D0u)) {
        auto targetFn = runtime->lookupFunction(0x1803D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0A8u; }
        if (ctx->pc != 0x16C0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001803D0_0x1803d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0A8u; }
        if (ctx->pc != 0x16C0A8u) { return; }
    }
    ctx->pc = 0x16C0A8u;
label_16c0a8:
    // 0x16c0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c0ac:
    // 0x16c0ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16c0b0:
    // 0x16c0b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16c0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c0b4:
    // 0x16c0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c0b8:
    // 0x16c0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c0bc:
    // 0x16c0bc: 0x805d5c0  j           func_175700
label_16c0c0:
    if (ctx->pc == 0x16C0C0u) {
        ctx->pc = 0x16C0C0u;
            // 0x16c0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16C0C4u;
        goto label_16c0c4;
    }
    ctx->pc = 0x16C0BCu;
    ctx->pc = 0x16C0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0BCu;
            // 0x16c0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (runtime->hasFunction(0x175700u)) {
        auto targetFn = runtime->lookupFunction(0x175700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00175700_0x175700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C0C4u;
label_16c0c4:
    // 0x16c0c4: 0x0  nop
    ctx->pc = 0x16c0c4u;
    // NOP
label_16c0c8:
    // 0x16c0c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16c0cc:
    // 0x16c0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16c0d0:
    // 0x16c0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c0d4:
    // 0x16c0d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16c0d8:
    // 0x16c0d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16c0dc:
    // 0x16c0dc: 0xc0599de  jal         func_166778
label_16c0e0:
    if (ctx->pc == 0x16C0E0u) {
        ctx->pc = 0x16C0E0u;
            // 0x16c0e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C0E4u;
        goto label_16c0e4;
    }
    ctx->pc = 0x16C0DCu;
    SET_GPR_U32(ctx, 31, 0x16C0E4u);
    ctx->pc = 0x16C0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0DCu;
            // 0x16c0e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0E4u; }
        if (ctx->pc != 0x16C0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0E4u; }
        if (ctx->pc != 0x16C0E4u) { return; }
    }
    ctx->pc = 0x16C0E4u;
label_16c0e4:
    // 0x16c0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16c0e8:
    // 0x16c0e8: 0xc05b042  jal         func_16C108
label_16c0ec:
    if (ctx->pc == 0x16C0ECu) {
        ctx->pc = 0x16C0ECu;
            // 0x16c0ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C0F0u;
        goto label_16c0f0;
    }
    ctx->pc = 0x16C0E8u;
    SET_GPR_U32(ctx, 31, 0x16C0F0u);
    ctx->pc = 0x16C0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0E8u;
            // 0x16c0ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C108u;
    if (runtime->hasFunction(0x16C108u)) {
        auto targetFn = runtime->lookupFunction(0x16C108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0F0u; }
        if (ctx->pc != 0x16C0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C108_0x16c108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C0F0u; }
        if (ctx->pc != 0x16C0F0u) { return; }
    }
    ctx->pc = 0x16C0F0u;
label_16c0f0:
    // 0x16c0f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c0f4:
    // 0x16c0f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c0f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16c0f8:
    // 0x16c0f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16c0fc:
    // 0x16c0fc: 0x80599e0  j           func_166780
label_16c100:
    if (ctx->pc == 0x16C100u) {
        ctx->pc = 0x16C100u;
            // 0x16c100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16C104u;
        goto label_16c104;
    }
    ctx->pc = 0x16C0FCu;
    ctx->pc = 0x16C100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C0FCu;
            // 0x16c100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16C104u;
label_16c104:
    // 0x16c104: 0x0  nop
    ctx->pc = 0x16c104u;
    // NOP
}
