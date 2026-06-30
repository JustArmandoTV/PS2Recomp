#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187FA8
// Address: 0x187fa8 - 0x188090
void sub_00187FA8_0x187fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187FA8_0x187fa8");
#endif

    switch (ctx->pc) {
        case 0x187fa8u: goto label_187fa8;
        case 0x187facu: goto label_187fac;
        case 0x187fb0u: goto label_187fb0;
        case 0x187fb4u: goto label_187fb4;
        case 0x187fb8u: goto label_187fb8;
        case 0x187fbcu: goto label_187fbc;
        case 0x187fc0u: goto label_187fc0;
        case 0x187fc4u: goto label_187fc4;
        case 0x187fc8u: goto label_187fc8;
        case 0x187fccu: goto label_187fcc;
        case 0x187fd0u: goto label_187fd0;
        case 0x187fd4u: goto label_187fd4;
        case 0x187fd8u: goto label_187fd8;
        case 0x187fdcu: goto label_187fdc;
        case 0x187fe0u: goto label_187fe0;
        case 0x187fe4u: goto label_187fe4;
        case 0x187fe8u: goto label_187fe8;
        case 0x187fecu: goto label_187fec;
        case 0x187ff0u: goto label_187ff0;
        case 0x187ff4u: goto label_187ff4;
        case 0x187ff8u: goto label_187ff8;
        case 0x187ffcu: goto label_187ffc;
        case 0x188000u: goto label_188000;
        case 0x188004u: goto label_188004;
        case 0x188008u: goto label_188008;
        case 0x18800cu: goto label_18800c;
        case 0x188010u: goto label_188010;
        case 0x188014u: goto label_188014;
        case 0x188018u: goto label_188018;
        case 0x18801cu: goto label_18801c;
        case 0x188020u: goto label_188020;
        case 0x188024u: goto label_188024;
        case 0x188028u: goto label_188028;
        case 0x18802cu: goto label_18802c;
        case 0x188030u: goto label_188030;
        case 0x188034u: goto label_188034;
        case 0x188038u: goto label_188038;
        case 0x18803cu: goto label_18803c;
        case 0x188040u: goto label_188040;
        case 0x188044u: goto label_188044;
        case 0x188048u: goto label_188048;
        case 0x18804cu: goto label_18804c;
        case 0x188050u: goto label_188050;
        case 0x188054u: goto label_188054;
        case 0x188058u: goto label_188058;
        case 0x18805cu: goto label_18805c;
        case 0x188060u: goto label_188060;
        case 0x188064u: goto label_188064;
        case 0x188068u: goto label_188068;
        case 0x18806cu: goto label_18806c;
        case 0x188070u: goto label_188070;
        case 0x188074u: goto label_188074;
        case 0x188078u: goto label_188078;
        case 0x18807cu: goto label_18807c;
        case 0x188080u: goto label_188080;
        case 0x188084u: goto label_188084;
        case 0x188088u: goto label_188088;
        case 0x18808cu: goto label_18808c;
        default: break;
    }

    ctx->pc = 0x187fa8u;

label_187fa8:
    // 0x187fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_187fac:
    // 0x187fac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x187facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187fb0:
    // 0x187fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187fb4:
    // 0x187fb4: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_187fb8:
    if (ctx->pc == 0x187FB8u) {
        ctx->pc = 0x187FB8u;
            // 0x187fb8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x187FBCu;
        goto label_187fbc;
    }
    ctx->pc = 0x187FB4u;
    {
        const bool branch_taken_0x187fb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x187FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187FB4u;
            // 0x187fb8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fb4) {
            ctx->pc = 0x187FE0u;
            goto label_187fe0;
        }
    }
    ctx->pc = 0x187FBCu;
label_187fbc:
    // 0x187fbc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x187fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_187fc0:
    // 0x187fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187fc4:
    // 0x187fc4: 0x2442fe30  addiu       $v0, $v0, -0x1D0
    ctx->pc = 0x187fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966832));
label_187fc8:
    // 0x187fc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_187fcc:
    // 0x187fcc: 0x60f809  jalr        $v1
label_187fd0:
    if (ctx->pc == 0x187FD0u) {
        ctx->pc = 0x187FD0u;
            // 0x187fd0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x187FD4u;
        goto label_187fd4;
    }
    ctx->pc = 0x187FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x187FD4u);
        ctx->pc = 0x187FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187FCCu;
            // 0x187fd0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x187FD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187FD4u; }
            if (ctx->pc != 0x187FD4u) { return; }
        }
        }
    }
    ctx->pc = 0x187FD4u;
label_187fd4:
    // 0x187fd4: 0x1000000f  b           . + 4 + (0xF << 2)
label_187fd8:
    if (ctx->pc == 0x187FD8u) {
        ctx->pc = 0x187FD8u;
            // 0x187fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x187FDCu;
        goto label_187fdc;
    }
    ctx->pc = 0x187FD4u;
    {
        const bool branch_taken_0x187fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187FD4u;
            // 0x187fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187fd4) {
            ctx->pc = 0x188014u;
            goto label_188014;
        }
    }
    ctx->pc = 0x187FDCu;
label_187fdc:
    // 0x187fdc: 0x0  nop
    ctx->pc = 0x187fdcu;
    // NOP
label_187fe0:
    // 0x187fe0: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x187fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_187fe4:
    // 0x187fe4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x187fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_187fe8:
    // 0x187fe8: 0x26106958  addiu       $s0, $s0, 0x6958
    ctx->pc = 0x187fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26968));
label_187fec:
    // 0x187fec: 0xc04b156  jal         func_12C558
label_187ff0:
    if (ctx->pc == 0x187FF0u) {
        ctx->pc = 0x187FF0u;
            // 0x187ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x187FF4u;
        goto label_187ff4;
    }
    ctx->pc = 0x187FECu;
    SET_GPR_U32(ctx, 31, 0x187FF4u);
    ctx->pc = 0x187FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187FECu;
            // 0x187ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FF4u; }
        if (ctx->pc != 0x187FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187FF4u; }
        if (ctx->pc != 0x187FF4u) { return; }
    }
    ctx->pc = 0x187FF4u;
label_187ff4:
    // 0x187ff4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x187ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_187ff8:
    // 0x187ff8: 0x2442fe30  addiu       $v0, $v0, -0x1D0
    ctx->pc = 0x187ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966832));
label_187ffc:
    // 0x187ffc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x187ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188000:
    // 0x188000: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_188004:
    if (ctx->pc == 0x188004u) {
        ctx->pc = 0x188004u;
            // 0x188004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x188008u;
        goto label_188008;
    }
    ctx->pc = 0x188000u;
    {
        const bool branch_taken_0x188000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188000u;
            // 0x188004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188000) {
            ctx->pc = 0x188010u;
            goto label_188010;
        }
    }
    ctx->pc = 0x188008u;
label_188008:
    // 0x188008: 0x60f809  jalr        $v1
label_18800c:
    if (ctx->pc == 0x18800Cu) {
        ctx->pc = 0x18800Cu;
            // 0x18800c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x188010u;
        goto label_188010;
    }
    ctx->pc = 0x188008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188010u);
        ctx->pc = 0x18800Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188008u;
            // 0x18800c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x188010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x188010u; }
            if (ctx->pc != 0x188010u) { return; }
        }
        }
    }
    ctx->pc = 0x188010u;
label_188010:
    // 0x188010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188014:
    // 0x188014: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x188014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_188018:
    // 0x188018: 0x3e00008  jr          $ra
label_18801c:
    if (ctx->pc == 0x18801Cu) {
        ctx->pc = 0x18801Cu;
            // 0x18801c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x188020u;
        goto label_188020;
    }
    ctx->pc = 0x188018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18801Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188018u;
            // 0x18801c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188020u;
label_188020:
    // 0x188020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_188024:
    // 0x188024: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x188024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_188028:
    // 0x188028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x188028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18802c:
    // 0x18802c: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x18802cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_188030:
    // 0x188030: 0x26106958  addiu       $s0, $s0, 0x6958
    ctx->pc = 0x188030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26968));
label_188034:
    // 0x188034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x188034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_188038:
    // 0x188038: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x188038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18803c:
    // 0x18803c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188040:
    // 0x188040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_188044:
    // 0x188044: 0xc04b156  jal         func_12C558
label_188048:
    if (ctx->pc == 0x188048u) {
        ctx->pc = 0x188048u;
            // 0x188048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18804Cu;
        goto label_18804c;
    }
    ctx->pc = 0x188044u;
    SET_GPR_U32(ctx, 31, 0x18804Cu);
    ctx->pc = 0x188048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188044u;
            // 0x188048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18804Cu; }
        if (ctx->pc != 0x18804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18804Cu; }
        if (ctx->pc != 0x18804Cu) { return; }
    }
    ctx->pc = 0x18804Cu;
label_18804c:
    // 0x18804c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188050:
    // 0x188050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188054:
    // 0x188054: 0xc04b07c  jal         func_12C1F0
label_188058:
    if (ctx->pc == 0x188058u) {
        ctx->pc = 0x188058u;
            // 0x188058: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x18805Cu;
        goto label_18805c;
    }
    ctx->pc = 0x188054u;
    SET_GPR_U32(ctx, 31, 0x18805Cu);
    ctx->pc = 0x188058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188054u;
            // 0x188058: 0x2406007f  addiu       $a2, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1F0u;
    if (runtime->hasFunction(0x12C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18805Cu; }
        if (ctx->pc != 0x18805Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C1F0_0x12c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18805Cu; }
        if (ctx->pc != 0x18805Cu) { return; }
    }
    ctx->pc = 0x18805Cu;
label_18805c:
    // 0x18805c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_188060:
    // 0x188060: 0x2442fe30  addiu       $v0, $v0, -0x1D0
    ctx->pc = 0x188060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966832));
label_188064:
    // 0x188064: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188068:
    // 0x188068: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_18806c:
    if (ctx->pc == 0x18806Cu) {
        ctx->pc = 0x18806Cu;
            // 0x18806c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x188070u;
        goto label_188070;
    }
    ctx->pc = 0x188068u;
    {
        const bool branch_taken_0x188068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188068u;
            // 0x18806c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188068) {
            ctx->pc = 0x188078u;
            goto label_188078;
        }
    }
    ctx->pc = 0x188070u;
label_188070:
    // 0x188070: 0x60f809  jalr        $v1
label_188074:
    if (ctx->pc == 0x188074u) {
        ctx->pc = 0x188074u;
            // 0x188074: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x188078u;
        goto label_188078;
    }
    ctx->pc = 0x188070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188078u);
        ctx->pc = 0x188074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188070u;
            // 0x188074: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x188078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x188078u; }
            if (ctx->pc != 0x188078u) { return; }
        }
        }
    }
    ctx->pc = 0x188078u;
label_188078:
    // 0x188078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18807c:
    // 0x18807c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18807cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_188080:
    // 0x188080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_188084:
    // 0x188084: 0x3e00008  jr          $ra
label_188088:
    if (ctx->pc == 0x188088u) {
        ctx->pc = 0x188088u;
            // 0x188088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x18808Cu;
        goto label_18808c;
    }
    ctx->pc = 0x188084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188084u;
            // 0x188088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18808Cu;
label_18808c:
    // 0x18808c: 0x0  nop
    ctx->pc = 0x18808cu;
    // NOP
}
