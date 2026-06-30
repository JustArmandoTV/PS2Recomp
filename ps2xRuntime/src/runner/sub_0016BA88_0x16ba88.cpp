#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016BA88
// Address: 0x16ba88 - 0x16bc38
void sub_0016BA88_0x16ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BA88_0x16ba88");
#endif

    switch (ctx->pc) {
        case 0x16bac4u: goto label_16bac4;
        case 0x16baccu: goto label_16bacc;
        case 0x16bad4u: goto label_16bad4;
        case 0x16badcu: goto label_16badc;
        case 0x16bae4u: goto label_16bae4;
        case 0x16baecu: goto label_16baec;
        case 0x16baf4u: goto label_16baf4;
        case 0x16bafcu: goto label_16bafc;
        case 0x16bb04u: goto label_16bb04;
        case 0x16bb0cu: goto label_16bb0c;
        case 0x16bb14u: goto label_16bb14;
        case 0x16bb1cu: goto label_16bb1c;
        case 0x16bb2cu: goto label_16bb2c;
        case 0x16bb3cu: goto label_16bb3c;
        case 0x16bb50u: goto label_16bb50;
        case 0x16bb70u: goto label_16bb70;
        case 0x16bb8cu: goto label_16bb8c;
        case 0x16bbb0u: goto label_16bbb0;
        case 0x16bbd4u: goto label_16bbd4;
        case 0x16bbdcu: goto label_16bbdc;
        case 0x16bc10u: goto label_16bc10;
        case 0x16bc18u: goto label_16bc18;
        default: break;
    }

    ctx->pc = 0x16ba88u;

label_16ba88:
    // 0x16ba88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ba8c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16ba90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ba94: 0x24909d70  addiu       $s0, $a0, -0x6290
    ctx->pc = 0x16ba94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942064));
    // 0x16ba98: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x16ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x16ba9c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x16ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x16baa0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16baa4: 0x2463d160  addiu       $v1, $v1, -0x2EA0
    ctx->pc = 0x16baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955360));
    // 0x16baa8: 0x24423b90  addiu       $v0, $v0, 0x3B90
    ctx->pc = 0x16baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
    // 0x16baac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16baacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16bab0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16bab4: 0x5480004b  bnel        $a0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x16BAB4u;
    {
        const bool branch_taken_0x16bab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bab4) {
            ctx->pc = 0x16BAB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16BAB4u;
            // 0x16bab8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16BBE4u;
            goto label_16bbe4;
        }
    }
    ctx->pc = 0x16BABCu;
    // 0x16babc: 0xc0599ba  jal         func_1666E8
    ctx->pc = 0x16BABCu;
    SET_GPR_U32(ctx, 31, 0x16BAC4u);
    ctx->pc = 0x1666E8u;
    if (runtime->hasFunction(0x1666E8u)) {
        auto targetFn = runtime->lookupFunction(0x1666E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAC4u; }
        if (ctx->pc != 0x16BAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001666E8_0x1666e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAC4u; }
        if (ctx->pc != 0x16BAC4u) { return; }
    }
    ctx->pc = 0x16BAC4u;
label_16bac4:
    // 0x16bac4: 0xc0599d2  jal         func_166748
    ctx->pc = 0x16BAC4u;
    SET_GPR_U32(ctx, 31, 0x16BACCu);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BACCu; }
        if (ctx->pc != 0x16BACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BACCu; }
        if (ctx->pc != 0x16BACCu) { return; }
    }
    ctx->pc = 0x16BACCu;
label_16bacc:
    // 0x16bacc: 0xc0618ba  jal         func_1862E8
    ctx->pc = 0x16BACCu;
    SET_GPR_U32(ctx, 31, 0x16BAD4u);
    ctx->pc = 0x1862E8u;
    if (runtime->hasFunction(0x1862E8u)) {
        auto targetFn = runtime->lookupFunction(0x1862E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAD4u; }
        if (ctx->pc != 0x16BAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001862E8_0x1862e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAD4u; }
        if (ctx->pc != 0x16BAD4u) { return; }
    }
    ctx->pc = 0x16BAD4u;
label_16bad4:
    // 0x16bad4: 0xc06152e  jal         func_1854B8
    ctx->pc = 0x16BAD4u;
    SET_GPR_U32(ctx, 31, 0x16BADCu);
    ctx->pc = 0x1854B8u;
    if (runtime->hasFunction(0x1854B8u)) {
        auto targetFn = runtime->lookupFunction(0x1854B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BADCu; }
        if (ctx->pc != 0x16BADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001854B8_0x1854b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BADCu; }
        if (ctx->pc != 0x16BADCu) { return; }
    }
    ctx->pc = 0x16BADCu;
label_16badc:
    // 0x16badc: 0xc0612a8  jal         func_184AA0
    ctx->pc = 0x16BADCu;
    SET_GPR_U32(ctx, 31, 0x16BAE4u);
    ctx->pc = 0x184AA0u;
    if (runtime->hasFunction(0x184AA0u)) {
        auto targetFn = runtime->lookupFunction(0x184AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAE4u; }
        if (ctx->pc != 0x16BAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184AA0_0x184aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAE4u; }
        if (ctx->pc != 0x16BAE4u) { return; }
    }
    ctx->pc = 0x16BAE4u;
label_16bae4:
    // 0x16bae4: 0xc059f28  jal         func_167CA0
    ctx->pc = 0x16BAE4u;
    SET_GPR_U32(ctx, 31, 0x16BAECu);
    ctx->pc = 0x167CA0u;
    if (runtime->hasFunction(0x167CA0u)) {
        auto targetFn = runtime->lookupFunction(0x167CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAECu; }
        if (ctx->pc != 0x16BAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CA0_0x167ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAECu; }
        if (ctx->pc != 0x16BAECu) { return; }
    }
    ctx->pc = 0x16BAECu;
label_16baec:
    // 0x16baec: 0xc05c10c  jal         func_170430
    ctx->pc = 0x16BAECu;
    SET_GPR_U32(ctx, 31, 0x16BAF4u);
    ctx->pc = 0x170430u;
    if (runtime->hasFunction(0x170430u)) {
        auto targetFn = runtime->lookupFunction(0x170430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAF4u; }
        if (ctx->pc != 0x16BAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170430_0x170430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAF4u; }
        if (ctx->pc != 0x16BAF4u) { return; }
    }
    ctx->pc = 0x16BAF4u;
label_16baf4:
    // 0x16baf4: 0xc05bb24  jal         func_16EC90
    ctx->pc = 0x16BAF4u;
    SET_GPR_U32(ctx, 31, 0x16BAFCu);
    ctx->pc = 0x16EC90u;
    if (runtime->hasFunction(0x16EC90u)) {
        auto targetFn = runtime->lookupFunction(0x16EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAFCu; }
        if (ctx->pc != 0x16BAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EC90_0x16ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAFCu; }
        if (ctx->pc != 0x16BAFCu) { return; }
    }
    ctx->pc = 0x16BAFCu;
label_16bafc:
    // 0x16bafc: 0xc059ffe  jal         func_167FF8
    ctx->pc = 0x16BAFCu;
    SET_GPR_U32(ctx, 31, 0x16BB04u);
    ctx->pc = 0x167FF8u;
    if (runtime->hasFunction(0x167FF8u)) {
        auto targetFn = runtime->lookupFunction(0x167FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB04u; }
        if (ctx->pc != 0x16BB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167FF8_0x167ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB04u; }
        if (ctx->pc != 0x16BB04u) { return; }
    }
    ctx->pc = 0x16BB04u;
label_16bb04:
    // 0x16bb04: 0xc05ba42  jal         func_16E908
    ctx->pc = 0x16BB04u;
    SET_GPR_U32(ctx, 31, 0x16BB0Cu);
    ctx->pc = 0x16E908u;
    if (runtime->hasFunction(0x16E908u)) {
        auto targetFn = runtime->lookupFunction(0x16E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB0Cu; }
        if (ctx->pc != 0x16BB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E908_0x16e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB0Cu; }
        if (ctx->pc != 0x16BB0Cu) { return; }
    }
    ctx->pc = 0x16BB0Cu;
label_16bb0c:
    // 0x16bb0c: 0xc06035c  jal         func_180D70
    ctx->pc = 0x16BB0Cu;
    SET_GPR_U32(ctx, 31, 0x16BB14u);
    ctx->pc = 0x180D70u;
    if (runtime->hasFunction(0x180D70u)) {
        auto targetFn = runtime->lookupFunction(0x180D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB14u; }
        if (ctx->pc != 0x16BB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D70_0x180d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB14u; }
        if (ctx->pc != 0x16BB14u) { return; }
    }
    ctx->pc = 0x16BB14u;
label_16bb14:
    // 0x16bb14: 0xc062274  jal         func_1889D0
    ctx->pc = 0x16BB14u;
    SET_GPR_U32(ctx, 31, 0x16BB1Cu);
    ctx->pc = 0x1889D0u;
    if (runtime->hasFunction(0x1889D0u)) {
        auto targetFn = runtime->lookupFunction(0x1889D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB1Cu; }
        if (ctx->pc != 0x16BB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001889D0_0x1889d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB1Cu; }
        if (ctx->pc != 0x16BB1Cu) { return; }
    }
    ctx->pc = 0x16BB1Cu;
label_16bb1c:
    // 0x16bb1c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x16bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x16bb20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb24: 0xc05ba4e  jal         func_16E938
    ctx->pc = 0x16BB24u;
    SET_GPR_U32(ctx, 31, 0x16BB2Cu);
    ctx->pc = 0x16BB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB24u;
            // 0x16bb28: 0x2484b9d0  addiu       $a0, $a0, -0x4630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E938u;
    if (runtime->hasFunction(0x16E938u)) {
        auto targetFn = runtime->lookupFunction(0x16E938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB2Cu; }
        if (ctx->pc != 0x16BB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E938_0x16e938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB2Cu; }
        if (ctx->pc != 0x16BB2Cu) { return; }
    }
    ctx->pc = 0x16BB2Cu;
label_16bb2c:
    // 0x16bb2c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x16bb30: 0x2484b9e8  addiu       $a0, $a0, -0x4618
    ctx->pc = 0x16bb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949352));
    // 0x16bb34: 0xc06032a  jal         func_180CA8
    ctx->pc = 0x16BB34u;
    SET_GPR_U32(ctx, 31, 0x16BB3Cu);
    ctx->pc = 0x16BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB34u;
            // 0x16bb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CA8u;
    if (runtime->hasFunction(0x180CA8u)) {
        auto targetFn = runtime->lookupFunction(0x180CA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB3Cu; }
        if (ctx->pc != 0x16BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CA8_0x180ca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB3Cu; }
        if (ctx->pc != 0x16BB3Cu) { return; }
    }
    ctx->pc = 0x16BB3Cu;
label_16bb3c:
    // 0x16bb3c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16bb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16bb40: 0x24849d90  addiu       $a0, $a0, -0x6270
    ctx->pc = 0x16bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942096));
    // 0x16bb44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16bb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb48: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x16BB48u;
    SET_GPR_U32(ctx, 31, 0x16BB50u);
    ctx->pc = 0x16BB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB48u;
            // 0x16bb4c: 0x24060c80  addiu       $a2, $zero, 0xC80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB50u; }
        if (ctx->pc != 0x16BB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB50u; }
        if (ctx->pc != 0x16BB50u) { return; }
    }
    ctx->pc = 0x16BB50u;
label_16bb50:
    // 0x16bb50: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16bb50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16bb54: 0x3c080063  lui         $t0, 0x63
    ctx->pc = 0x16bb54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)99 << 16));
    // 0x16bb58: 0x24c6ba48  addiu       $a2, $a2, -0x45B8
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949448));
    // 0x16bb5c: 0x25083be0  addiu       $t0, $t0, 0x3BE0
    ctx->pc = 0x16bb5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15328));
    // 0x16bb60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bb64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16bb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bb68: 0xc06211a  jal         func_188468
    ctx->pc = 0x16BB68u;
    SET_GPR_U32(ctx, 31, 0x16BB70u);
    ctx->pc = 0x16BB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB68u;
            // 0x16bb6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188468u;
    if (runtime->hasFunction(0x188468u)) {
        auto targetFn = runtime->lookupFunction(0x188468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB70u; }
        if (ctx->pc != 0x16BB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188468_0x188468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB70u; }
        if (ctx->pc != 0x16BB70u) { return; }
    }
    ctx->pc = 0x16BB70u;
label_16bb70:
    // 0x16bb70: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16bb74: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x16bb74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x16bb78: 0x24a5ba68  addiu       $a1, $a1, -0x4598
    ctx->pc = 0x16bb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949480));
    // 0x16bb7c: 0x24e73bf0  addiu       $a3, $a3, 0x3BF0
    ctx->pc = 0x16bb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15344));
    // 0x16bb80: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16bb84: 0xc062094  jal         func_188250
    ctx->pc = 0x16BB84u;
    SET_GPR_U32(ctx, 31, 0x16BB8Cu);
    ctx->pc = 0x16BB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BB84u;
            // 0x16bb88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188250u;
    if (runtime->hasFunction(0x188250u)) {
        auto targetFn = runtime->lookupFunction(0x188250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB8Cu; }
        if (ctx->pc != 0x16BB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188250_0x188250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BB8Cu; }
        if (ctx->pc != 0x16BB8Cu) { return; }
    }
    ctx->pc = 0x16BB8Cu;
label_16bb8c:
    // 0x16bb8c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16bb90: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16bb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16bb94: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x16bb94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x16bb98: 0x24e73c00  addiu       $a3, $a3, 0x3C00
    ctx->pc = 0x16bb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15360));
    // 0x16bb9c: 0x24a5ba28  addiu       $a1, $a1, -0x45D8
    ctx->pc = 0x16bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949416));
    // 0x16bba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16bba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bba4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16bba8: 0xc062094  jal         func_188250
    ctx->pc = 0x16BBA8u;
    SET_GPR_U32(ctx, 31, 0x16BBB0u);
    ctx->pc = 0x16BBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBA8u;
            // 0x16bbac: 0xac629d84  sw          $v0, -0x627C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188250u;
    if (runtime->hasFunction(0x188250u)) {
        auto targetFn = runtime->lookupFunction(0x188250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBB0u; }
        if (ctx->pc != 0x16BBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188250_0x188250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBB0u; }
        if (ctx->pc != 0x16BBB0u) { return; }
    }
    ctx->pc = 0x16BBB0u;
label_16bbb0:
    // 0x16bbb0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16bbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16bbb4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x16bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x16bbb8: 0x24639d88  addiu       $v1, $v1, -0x6278
    ctx->pc = 0x16bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942088));
    // 0x16bbbc: 0xaca29d78  sw          $v0, -0x6288($a1)
    ctx->pc = 0x16bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294942072), GPR_U32(ctx, 2));
    // 0x16bbc0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x16bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x16bbc4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x16bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x16bbc8: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x16bbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x16bbcc: 0xc05d0d2  jal         func_174348
    ctx->pc = 0x16BBCCu;
    SET_GPR_U32(ctx, 31, 0x16BBD4u);
    ctx->pc = 0x174348u;
    if (runtime->hasFunction(0x174348u)) {
        auto targetFn = runtime->lookupFunction(0x174348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBD4u; }
        if (ctx->pc != 0x16BBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174348_0x174348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBD4u; }
        if (ctx->pc != 0x16BBD4u) { return; }
    }
    ctx->pc = 0x16BBD4u;
label_16bbd4:
    // 0x16bbd4: 0xc0599d8  jal         func_166760
    ctx->pc = 0x16BBD4u;
    SET_GPR_U32(ctx, 31, 0x16BBDCu);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBDCu; }
        if (ctx->pc != 0x16BBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BBDCu; }
        if (ctx->pc != 0x16BBDCu) { return; }
    }
    ctx->pc = 0x16BBDCu;
label_16bbdc:
    // 0x16bbdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bbe0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x16bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_16bbe4:
    // 0x16bbe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16bbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bbe8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16bbec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x16BBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BBF0u;
            // 0x16bbf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BBF8u;
    // 0x16bbf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bbfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bc00: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16bc00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16bc04: 0x8e029d70  lw          $v0, -0x6290($s0)
    ctx->pc = 0x16bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942064)));
    // 0x16bc08: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16BC08u;
    {
        const bool branch_taken_0x16bc08 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC08u;
            // 0x16bc0c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc08) {
            ctx->pc = 0x16BC24u;
            goto label_16bc24;
        }
    }
    ctx->pc = 0x16BC10u;
label_16bc10:
    // 0x16bc10: 0xc05af0e  jal         func_16BC38
    ctx->pc = 0x16BC10u;
    SET_GPR_U32(ctx, 31, 0x16BC18u);
    ctx->pc = 0x16BC38u;
    if (runtime->hasFunction(0x16BC38u)) {
        auto targetFn = runtime->lookupFunction(0x16BC38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC18u; }
        if (ctx->pc != 0x16BC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BC38_0x16bc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BC18u; }
        if (ctx->pc != 0x16BC18u) { return; }
    }
    ctx->pc = 0x16BC18u;
label_16bc18:
    // 0x16bc18: 0x8e029d70  lw          $v0, -0x6290($s0)
    ctx->pc = 0x16bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942064)));
    // 0x16bc1c: 0x1c40fffc  bgtz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x16BC1Cu;
    {
        const bool branch_taken_0x16bc1c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x16bc1c) {
            ctx->pc = 0x16BC10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16bc10;
        }
    }
    ctx->pc = 0x16BC24u;
label_16bc24:
    // 0x16bc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bc28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16bc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bc2c: 0x805aea2  j           func_16BA88
    ctx->pc = 0x16BC2Cu;
    ctx->pc = 0x16BC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC2Cu;
            // 0x16bc30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BA88u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_16ba88;
    ctx->pc = 0x16BC34u;
    // 0x16bc34: 0x0  nop
    ctx->pc = 0x16bc34u;
    // NOP
}
