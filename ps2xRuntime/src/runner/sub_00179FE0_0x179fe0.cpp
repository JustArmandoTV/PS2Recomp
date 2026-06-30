#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00179FE0
// Address: 0x179fe0 - 0x17a0a0
void sub_00179FE0_0x179fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179FE0_0x179fe0");
#endif

    switch (ctx->pc) {
        case 0x179fe0u: goto label_179fe0;
        case 0x179fe4u: goto label_179fe4;
        case 0x179fe8u: goto label_179fe8;
        case 0x179fecu: goto label_179fec;
        case 0x179ff0u: goto label_179ff0;
        case 0x179ff4u: goto label_179ff4;
        case 0x179ff8u: goto label_179ff8;
        case 0x179ffcu: goto label_179ffc;
        case 0x17a000u: goto label_17a000;
        case 0x17a004u: goto label_17a004;
        case 0x17a008u: goto label_17a008;
        case 0x17a00cu: goto label_17a00c;
        case 0x17a010u: goto label_17a010;
        case 0x17a014u: goto label_17a014;
        case 0x17a018u: goto label_17a018;
        case 0x17a01cu: goto label_17a01c;
        case 0x17a020u: goto label_17a020;
        case 0x17a024u: goto label_17a024;
        case 0x17a028u: goto label_17a028;
        case 0x17a02cu: goto label_17a02c;
        case 0x17a030u: goto label_17a030;
        case 0x17a034u: goto label_17a034;
        case 0x17a038u: goto label_17a038;
        case 0x17a03cu: goto label_17a03c;
        case 0x17a040u: goto label_17a040;
        case 0x17a044u: goto label_17a044;
        case 0x17a048u: goto label_17a048;
        case 0x17a04cu: goto label_17a04c;
        case 0x17a050u: goto label_17a050;
        case 0x17a054u: goto label_17a054;
        case 0x17a058u: goto label_17a058;
        case 0x17a05cu: goto label_17a05c;
        case 0x17a060u: goto label_17a060;
        case 0x17a064u: goto label_17a064;
        case 0x17a068u: goto label_17a068;
        case 0x17a06cu: goto label_17a06c;
        case 0x17a070u: goto label_17a070;
        case 0x17a074u: goto label_17a074;
        case 0x17a078u: goto label_17a078;
        case 0x17a07cu: goto label_17a07c;
        case 0x17a080u: goto label_17a080;
        case 0x17a084u: goto label_17a084;
        case 0x17a088u: goto label_17a088;
        case 0x17a08cu: goto label_17a08c;
        case 0x17a090u: goto label_17a090;
        case 0x17a094u: goto label_17a094;
        case 0x17a098u: goto label_17a098;
        case 0x17a09cu: goto label_17a09c;
        default: break;
    }

    ctx->pc = 0x179fe0u;

label_179fe0:
    // 0x179fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_179fe4:
    // 0x179fe4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x179fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_179fe8:
    // 0x179fe8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_179fec:
    // 0x179fec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x179fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_179ff0:
    // 0x179ff0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_179ff4:
    if (ctx->pc == 0x179FF4u) {
        ctx->pc = 0x179FF4u;
            // 0x179ff4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x179FF8u;
        goto label_179ff8;
    }
    ctx->pc = 0x179FF0u;
    {
        const bool branch_taken_0x179ff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179FF0u;
            // 0x179ff4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ff0) {
            ctx->pc = 0x17A010u;
            goto label_17a010;
        }
    }
    ctx->pc = 0x179FF8u;
label_179ff8:
    // 0x179ff8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179ffc:
    // 0x179ffc: 0xc05e0a6  jal         func_178298
label_17a000:
    if (ctx->pc == 0x17A000u) {
        ctx->pc = 0x17A000u;
            // 0x17a000: 0x24845708  addiu       $a0, $a0, 0x5708 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22280));
        ctx->pc = 0x17A004u;
        goto label_17a004;
    }
    ctx->pc = 0x179FFCu;
    SET_GPR_U32(ctx, 31, 0x17A004u);
    ctx->pc = 0x17A000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179FFCu;
            // 0x17a000: 0x24845708  addiu       $a0, $a0, 0x5708 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A004u; }
        if (ctx->pc != 0x17A004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A004u; }
        if (ctx->pc != 0x17A004u) { return; }
    }
    ctx->pc = 0x17A004u;
label_17a004:
    // 0x17a004: 0x10000022  b           . + 4 + (0x22 << 2)
label_17a008:
    if (ctx->pc == 0x17A008u) {
        ctx->pc = 0x17A008u;
            // 0x17a008: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17A00Cu;
        goto label_17a00c;
    }
    ctx->pc = 0x17A004u;
    {
        const bool branch_taken_0x17a004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A004u;
            // 0x17a008: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a004) {
            ctx->pc = 0x17A090u;
            goto label_17a090;
        }
    }
    ctx->pc = 0x17A00Cu;
label_17a00c:
    // 0x17a00c: 0x0  nop
    ctx->pc = 0x17a00cu;
    // NOP
label_17a010:
    // 0x17a010: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_17a014:
    if (ctx->pc == 0x17A014u) {
        ctx->pc = 0x17A018u;
        goto label_17a018;
    }
    ctx->pc = 0x17A010u;
    {
        const bool branch_taken_0x17a010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a010) {
            ctx->pc = 0x17A030u;
            goto label_17a030;
        }
    }
    ctx->pc = 0x17A018u;
label_17a018:
    // 0x17a018: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17a01c:
    // 0x17a01c: 0xc05e0a6  jal         func_178298
label_17a020:
    if (ctx->pc == 0x17A020u) {
        ctx->pc = 0x17A020u;
            // 0x17a020: 0x24845730  addiu       $a0, $a0, 0x5730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22320));
        ctx->pc = 0x17A024u;
        goto label_17a024;
    }
    ctx->pc = 0x17A01Cu;
    SET_GPR_U32(ctx, 31, 0x17A024u);
    ctx->pc = 0x17A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A01Cu;
            // 0x17a020: 0x24845730  addiu       $a0, $a0, 0x5730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A024u; }
        if (ctx->pc != 0x17A024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A024u; }
        if (ctx->pc != 0x17A024u) { return; }
    }
    ctx->pc = 0x17A024u;
label_17a024:
    // 0x17a024: 0x1000001a  b           . + 4 + (0x1A << 2)
label_17a028:
    if (ctx->pc == 0x17A028u) {
        ctx->pc = 0x17A028u;
            // 0x17a028: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17A02Cu;
        goto label_17a02c;
    }
    ctx->pc = 0x17A024u;
    {
        const bool branch_taken_0x17a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A024u;
            // 0x17a028: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a024) {
            ctx->pc = 0x17A090u;
            goto label_17a090;
        }
    }
    ctx->pc = 0x17A02Cu;
label_17a02c:
    // 0x17a02c: 0x0  nop
    ctx->pc = 0x17a02cu;
    // NOP
label_17a030:
    // 0x17a030: 0xc05e158  jal         func_178560
label_17a034:
    if (ctx->pc == 0x17A034u) {
        ctx->pc = 0x17A038u;
        goto label_17a038;
    }
    ctx->pc = 0x17A030u;
    SET_GPR_U32(ctx, 31, 0x17A038u);
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A038u; }
        if (ctx->pc != 0x17A038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A038u; }
        if (ctx->pc != 0x17A038u) { return; }
    }
    ctx->pc = 0x17A038u;
label_17a038:
    // 0x17a038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a03c:
    // 0x17a03c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17a03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a040:
    // 0x17a040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17a044:
    // 0x17a044: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_17a048:
    if (ctx->pc == 0x17A048u) {
        ctx->pc = 0x17A048u;
            // 0x17a048: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x17A04Cu;
        goto label_17a04c;
    }
    ctx->pc = 0x17A044u;
    {
        const bool branch_taken_0x17a044 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A044u;
            // 0x17a048: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a044) {
            ctx->pc = 0x17A060u;
            goto label_17a060;
        }
    }
    ctx->pc = 0x17A04Cu;
label_17a04c:
    // 0x17a04c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17a050:
    // 0x17a050: 0xc05e0a6  jal         func_178298
label_17a054:
    if (ctx->pc == 0x17A054u) {
        ctx->pc = 0x17A054u;
            // 0x17a054: 0x24845758  addiu       $a0, $a0, 0x5758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22360));
        ctx->pc = 0x17A058u;
        goto label_17a058;
    }
    ctx->pc = 0x17A050u;
    SET_GPR_U32(ctx, 31, 0x17A058u);
    ctx->pc = 0x17A054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A050u;
            // 0x17a054: 0x24845758  addiu       $a0, $a0, 0x5758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A058u; }
        if (ctx->pc != 0x17A058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A058u; }
        if (ctx->pc != 0x17A058u) { return; }
    }
    ctx->pc = 0x17A058u;
label_17a058:
    // 0x17a058: 0x1000000d  b           . + 4 + (0xD << 2)
label_17a05c:
    if (ctx->pc == 0x17A05Cu) {
        ctx->pc = 0x17A05Cu;
            // 0x17a05c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17A060u;
        goto label_17a060;
    }
    ctx->pc = 0x17A058u;
    {
        const bool branch_taken_0x17a058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A058u;
            // 0x17a05c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a058) {
            ctx->pc = 0x17A090u;
            goto label_17a090;
        }
    }
    ctx->pc = 0x17A060u;
label_17a060:
    // 0x17a060: 0xc04a576  jal         func_1295D8
label_17a064:
    if (ctx->pc == 0x17A064u) {
        ctx->pc = 0x17A068u;
        goto label_17a068;
    }
    ctx->pc = 0x17A060u;
    SET_GPR_U32(ctx, 31, 0x17A068u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A068u; }
        if (ctx->pc != 0x17A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A068u; }
        if (ctx->pc != 0x17A068u) { return; }
    }
    ctx->pc = 0x17A068u;
label_17a068:
    // 0x17a068: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17a068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_17a06c:
    // 0x17a06c: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x17a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_17a070:
    // 0x17a070: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17a070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17a074:
    // 0x17a074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a078:
    // 0x17a078: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x17a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_17a07c:
    // 0x17a07c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_17a080:
    if (ctx->pc == 0x17A080u) {
        ctx->pc = 0x17A080u;
            // 0x17a080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17A084u;
        goto label_17a084;
    }
    ctx->pc = 0x17A07Cu;
    {
        const bool branch_taken_0x17a07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A07Cu;
            // 0x17a080: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a07c) {
            ctx->pc = 0x17A08Cu;
            goto label_17a08c;
        }
    }
    ctx->pc = 0x17A084u;
label_17a084:
    // 0x17a084: 0x40f809  jalr        $v0
label_17a088:
    if (ctx->pc == 0x17A088u) {
        ctx->pc = 0x17A08Cu;
        goto label_17a08c;
    }
    ctx->pc = 0x17A084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A08Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A08Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A08Cu; }
            if (ctx->pc != 0x17A08Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17A08Cu;
label_17a08c:
    // 0x17a08c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x17a08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17a090:
    // 0x17a090: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17a090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_17a094:
    // 0x17a094: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17a098:
    // 0x17a098: 0x3e00008  jr          $ra
label_17a09c:
    if (ctx->pc == 0x17A09Cu) {
        ctx->pc = 0x17A09Cu;
            // 0x17a09c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17A0A0u;
        goto label_fallthrough_0x17a098;
    }
    ctx->pc = 0x17A098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A098u;
            // 0x17a09c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17a098:
    ctx->pc = 0x17A0A0u;
}
