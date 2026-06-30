#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0FB0
// Address: 0x1d0fb0 - 0x1d10b0
void sub_001D0FB0_0x1d0fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0FB0_0x1d0fb0");
#endif

    switch (ctx->pc) {
        case 0x1d0fc8u: goto label_1d0fc8;
        case 0x1d0fd0u: goto label_1d0fd0;
        case 0x1d0fd8u: goto label_1d0fd8;
        case 0x1d100cu: goto label_1d100c;
        case 0x1d1028u: goto label_1d1028;
        case 0x1d1044u: goto label_1d1044;
        case 0x1d1060u: goto label_1d1060;
        case 0x1d1070u: goto label_1d1070;
        case 0x1d1090u: goto label_1d1090;
        case 0x1d1098u: goto label_1d1098;
        default: break;
    }

    ctx->pc = 0x1d0fb0u;

    // 0x1d0fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0fb4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1d0fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1d0fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0fbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0fc0: 0xc043eaa  jal         func_10FAA8
    ctx->pc = 0x1D0FC0u;
    SET_GPR_U32(ctx, 31, 0x1D0FC8u);
    ctx->pc = 0x1D0FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0FC0u;
            // 0x1d0fc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA8u;
    if (runtime->hasFunction(0x10FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FC8u; }
        if (ctx->pc != 0x1D0FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA8_0x10faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0FC8u; }
        if (ctx->pc != 0x1D0FC8u) { return; }
    }
    ctx->pc = 0x1D0FC8u;
label_1d0fc8:
    // 0x1d0fc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D0FC8u;
    {
        const bool branch_taken_0x1d0fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0FC8u;
            // 0x1d0fcc: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0fc8) {
            ctx->pc = 0x1D0FF4u;
            goto label_1d0ff4;
        }
    }
    ctx->pc = 0x1D0FD0u;
label_1d0fd0:
    // 0x1d0fd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0fd4: 0x0  nop
    ctx->pc = 0x1d0fd4u;
    // NOP
label_1d0fd8:
    // 0x1d0fd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d0fdc: 0x0  nop
    ctx->pc = 0x1d0fdcu;
    // NOP
    // 0x1d0fe0: 0x0  nop
    ctx->pc = 0x1d0fe0u;
    // NOP
    // 0x1d0fe4: 0x0  nop
    ctx->pc = 0x1d0fe4u;
    // NOP
    // 0x1d0fe8: 0x0  nop
    ctx->pc = 0x1d0fe8u;
    // NOP
    // 0x1d0fec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0FECu;
    {
        const bool branch_taken_0x1d0fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0fec) {
            ctx->pc = 0x1D0FD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0fd8;
        }
    }
    ctx->pc = 0x1D0FF4u;
label_1d0ff4:
    // 0x1d0ff4: 0x2630a180  addiu       $s0, $s1, -0x5E80
    ctx->pc = 0x1d0ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943104));
    // 0x1d0ff8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1d0ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1000: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x1d1000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
    // 0x1d1004: 0xc044094  jal         func_110250
    ctx->pc = 0x1D1004u;
    SET_GPR_U32(ctx, 31, 0x1D100Cu);
    ctx->pc = 0x1D1008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1004u;
            // 0x1d1008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110250u;
    if (runtime->hasFunction(0x110250u)) {
        auto targetFn = runtime->lookupFunction(0x110250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D100Cu; }
        if (ctx->pc != 0x1D100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110250_0x110250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D100Cu; }
        if (ctx->pc != 0x1D100Cu) { return; }
    }
    ctx->pc = 0x1D100Cu;
label_1d100c:
    // 0x1d100c: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D100Cu;
    {
        const bool branch_taken_0x1d100c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D1010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D100Cu;
            // 0x1d1010: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d100c) {
            ctx->pc = 0x1D1068u;
            goto label_1d1068;
        }
    }
    ctx->pc = 0x1D1014u;
    // 0x1d1014: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d1014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d1018: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D1018u;
    {
        const bool branch_taken_0x1d1018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1018u;
            // 0x1d101c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1018) {
            ctx->pc = 0x1D0FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0fd0;
        }
    }
    ctx->pc = 0x1D1020u;
    // 0x1d1020: 0xc0744dc  jal         func_1D1370
    ctx->pc = 0x1D1020u;
    SET_GPR_U32(ctx, 31, 0x1D1028u);
    ctx->pc = 0x1D1370u;
    if (runtime->hasFunction(0x1D1370u)) {
        auto targetFn = runtime->lookupFunction(0x1D1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1028u; }
        if (ctx->pc != 0x1D1028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1370_0x1d1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1028u; }
        if (ctx->pc != 0x1D1028u) { return; }
    }
    ctx->pc = 0x1D1028u;
label_1d1028:
    // 0x1d1028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d1028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d102c: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x1d102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1d1030: 0x101103  sra         $v0, $s0, 4
    ctx->pc = 0x1d1030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
    // 0x1d1034: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D1034u;
    {
        const bool branch_taken_0x1d1034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1034u;
            // 0x1d1038: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1034) {
            ctx->pc = 0x1D1078u;
            goto label_1d1078;
        }
    }
    ctx->pc = 0x1D103Cu;
    // 0x1d103c: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1D103Cu;
    SET_GPR_U32(ctx, 31, 0x1D1044u);
    ctx->pc = 0x1D1040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D103Cu;
            // 0x1d1040: 0x2484c378  addiu       $a0, $a0, -0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1044u; }
        if (ctx->pc != 0x1D1044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1044u; }
        if (ctx->pc != 0x1D1044u) { return; }
    }
    ctx->pc = 0x1D1044u;
label_1d1044:
    // 0x1d1044: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1d1044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1d1048: 0x320800ff  andi        $t0, $s0, 0xFF
    ctx->pc = 0x1d1048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1d104c: 0x2484c3a0  addiu       $a0, $a0, -0x3C60
    ctx->pc = 0x1d104cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951840));
    // 0x1d1050: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d1050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1054: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d1054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d1058: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1D1058u;
    SET_GPR_U32(ctx, 31, 0x1D1060u);
    ctx->pc = 0x1D105Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1058u;
            // 0x1d105c: 0x103a03  sra         $a3, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1060u; }
        if (ctx->pc != 0x1D1060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1060u; }
        if (ctx->pc != 0x1D1060u) { return; }
    }
    ctx->pc = 0x1D1060u;
label_1d1060:
    // 0x1d1060: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D1060u;
    {
        const bool branch_taken_0x1d1060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1060u;
            // 0x1d1064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1060) {
            ctx->pc = 0x1D109Cu;
            goto label_1d109c;
        }
    }
    ctx->pc = 0x1D1068u;
label_1d1068:
    // 0x1d1068: 0xc0743ca  jal         func_1D0F28
    ctx->pc = 0x1D1068u;
    SET_GPR_U32(ctx, 31, 0x1D1070u);
    ctx->pc = 0x1D106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1068u;
            // 0x1d106c: 0x2484c360  addiu       $a0, $a0, -0x3CA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F28u;
    if (runtime->hasFunction(0x1D0F28u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1070u; }
        if (ctx->pc != 0x1D1070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F28_0x1d0f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1070u; }
        if (ctx->pc != 0x1D1070u) { return; }
    }
    ctx->pc = 0x1D1070u;
label_1d1070:
    // 0x1d1070: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D1070u;
    {
        const bool branch_taken_0x1d1070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1070u;
            // 0x1d1074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1070) {
            ctx->pc = 0x1D109Cu;
            goto label_1d109c;
        }
    }
    ctx->pc = 0x1D1078u;
label_1d1078:
    // 0x1d1078: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x1d1078u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x1d107c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d107cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1080: 0x2610a240  addiu       $s0, $s0, -0x5DC0
    ctx->pc = 0x1d1080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943296));
    // 0x1d1084: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d1084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1088: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1D1088u;
    SET_GPR_U32(ctx, 31, 0x1D1090u);
    ctx->pc = 0x1D108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1088u;
            // 0x1d108c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1090u; }
        if (ctx->pc != 0x1D1090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1090u; }
        if (ctx->pc != 0x1D1090u) { return; }
    }
    ctx->pc = 0x1D1090u;
label_1d1090:
    // 0x1d1090: 0xc0743d4  jal         func_1D0F50
    ctx->pc = 0x1D1090u;
    SET_GPR_U32(ctx, 31, 0x1D1098u);
    ctx->pc = 0x1D1094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1090u;
            // 0x1d1094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F50u;
    if (runtime->hasFunction(0x1D0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1098u; }
        if (ctx->pc != 0x1D1098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F50_0x1d0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1098u; }
        if (ctx->pc != 0x1D1098u) { return; }
    }
    ctx->pc = 0x1D1098u;
label_1d1098:
    // 0x1d1098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d109c:
    // 0x1d109c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d109cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d10a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1d10a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d10a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d10a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d10a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D10A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D10ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D10A8u;
            // 0x1d10ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D10B0u;
}
