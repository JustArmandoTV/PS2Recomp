#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00555FA0
// Address: 0x555fa0 - 0x556120
void sub_00555FA0_0x555fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00555FA0_0x555fa0");
#endif

    switch (ctx->pc) {
        case 0x555fc8u: goto label_555fc8;
        case 0x555fe0u: goto label_555fe0;
        case 0x55600cu: goto label_55600c;
        case 0x556034u: goto label_556034;
        case 0x556048u: goto label_556048;
        case 0x5560b4u: goto label_5560b4;
        case 0x5560d0u: goto label_5560d0;
        case 0x5560ecu: goto label_5560ec;
        case 0x5560f8u: goto label_5560f8;
        default: break;
    }

    ctx->pc = 0x555fa0u;

    // 0x555fa0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x555fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x555fa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x555fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x555fa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x555fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x555fac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x555facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x555fb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x555fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x555fb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x555fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x555fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x555fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x555fbc: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x555fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x555fc0: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x555FC0u;
    SET_GPR_U32(ctx, 31, 0x555FC8u);
    ctx->pc = 0x555FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555FC0u;
            // 0x555fc4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555FC8u; }
        if (ctx->pc != 0x555FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555FC8u; }
        if (ctx->pc != 0x555FC8u) { return; }
    }
    ctx->pc = 0x555FC8u;
label_555fc8:
    // 0x555fc8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x555fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x555fcc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x555fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x555fd0: 0x8c7189e8  lw          $s1, -0x7618($v1)
    ctx->pc = 0x555fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
    // 0x555fd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x555fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x555fd8: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x555FD8u;
    SET_GPR_U32(ctx, 31, 0x555FE0u);
    ctx->pc = 0x555FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x555FD8u;
            // 0x555fdc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555FE0u; }
        if (ctx->pc != 0x555FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x555FE0u; }
        if (ctx->pc != 0x555FE0u) { return; }
    }
    ctx->pc = 0x555FE0u;
label_555fe0:
    // 0x555fe0: 0x8e64006c  lw          $a0, 0x6C($s3)
    ctx->pc = 0x555fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x555fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x555fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x555fe8: 0x50900046  beql        $a0, $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x555FE8u;
    {
        const bool branch_taken_0x555fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x555fe8) {
            ctx->pc = 0x555FECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555FE8u;
            // 0x555fec: 0xae70006c  sw          $s0, 0x6C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556104u;
            goto label_556104;
        }
    }
    ctx->pc = 0x555FF0u;
    // 0x555ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x555ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x555ff4: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x555FF4u;
    {
        const bool branch_taken_0x555ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x555ff4) {
            ctx->pc = 0x555FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x555FF4u;
            // 0x555ff8: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556004u;
            goto label_556004;
        }
    }
    ctx->pc = 0x555FFCu;
    // 0x555ffc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x555FFCu;
    {
        const bool branch_taken_0x555ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x555ffc) {
            ctx->pc = 0x556100u;
            goto label_556100;
        }
    }
    ctx->pc = 0x556004u;
label_556004:
    // 0x556004: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x556004u;
    SET_GPR_U32(ctx, 31, 0x55600Cu);
    ctx->pc = 0x556008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556004u;
            // 0x556008: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55600Cu; }
        if (ctx->pc != 0x55600Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55600Cu; }
        if (ctx->pc != 0x55600Cu) { return; }
    }
    ctx->pc = 0x55600Cu;
label_55600c:
    // 0x55600c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x55600cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x556010: 0x54e0000b  bnel        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x556010u;
    {
        const bool branch_taken_0x556010 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x556010) {
            ctx->pc = 0x556014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556010u;
            // 0x556014: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556040u;
            goto label_556040;
        }
    }
    ctx->pc = 0x556018u;
    // 0x556018: 0x9263005b  lbu         $v1, 0x5B($s3)
    ctx->pc = 0x556018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 91)));
    // 0x55601c: 0x50600038  beql        $v1, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x55601Cu;
    {
        const bool branch_taken_0x55601c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55601c) {
            ctx->pc = 0x556020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55601Cu;
            // 0x556020: 0xa260005b  sb          $zero, 0x5B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 91), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556100u;
            goto label_556100;
        }
    }
    ctx->pc = 0x556024u;
    // 0x556024: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x556024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x556028: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x556028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x55602c: 0xc05d85a  jal         func_176168
    ctx->pc = 0x55602Cu;
    SET_GPR_U32(ctx, 31, 0x556034u);
    ctx->pc = 0x556030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55602Cu;
            // 0x556030: 0x24a5ee50  addiu       $a1, $a1, -0x11B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556034u; }
        if (ctx->pc != 0x556034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556034u; }
        if (ctx->pc != 0x556034u) { return; }
    }
    ctx->pc = 0x556034u;
label_556034:
    // 0x556034: 0xa260005b  sb          $zero, 0x5B($s3)
    ctx->pc = 0x556034u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x556038: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x556038u;
    {
        const bool branch_taken_0x556038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x556038) {
            ctx->pc = 0x556100u;
            goto label_556100;
        }
    }
    ctx->pc = 0x556040u;
label_556040:
    // 0x556040: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x556040u;
    {
        const bool branch_taken_0x556040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x556044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556040u;
            // 0x556044: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556040) {
            ctx->pc = 0x556064u;
            goto label_556064;
        }
    }
    ctx->pc = 0x556048u;
label_556048:
    // 0x556048: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x556048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x55604c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x55604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x556050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x556050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x556054: 0x0  nop
    ctx->pc = 0x556054u;
    // NOP
    // 0x556058: 0x0  nop
    ctx->pc = 0x556058u;
    // NOP
    // 0x55605c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x55605Cu;
    {
        const bool branch_taken_0x55605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x55605c) {
            ctx->pc = 0x556048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_556048;
        }
    }
    ctx->pc = 0x556064u;
label_556064:
    // 0x556064: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x556064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x556068: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x556068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x55606c: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x55606Cu;
    {
        const bool branch_taken_0x55606c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x55606c) {
            ctx->pc = 0x5560D8u;
            goto label_5560d8;
        }
    }
    ctx->pc = 0x556074u;
    // 0x556074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x556074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x556078: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x556078u;
    {
        const bool branch_taken_0x556078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x556078) {
            ctx->pc = 0x556088u;
            goto label_556088;
        }
    }
    ctx->pc = 0x556080u;
    // 0x556080: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x556080u;
    {
        const bool branch_taken_0x556080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x556084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556080u;
            // 0x556084: 0x8e240188  lw          $a0, 0x188($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556080) {
            ctx->pc = 0x5560F0u;
            goto label_5560f0;
        }
    }
    ctx->pc = 0x556088u;
label_556088:
    // 0x556088: 0x10e3000c  beq         $a3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x556088u;
    {
        const bool branch_taken_0x556088 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x556088) {
            ctx->pc = 0x5560BCu;
            goto label_5560bc;
        }
    }
    ctx->pc = 0x556090u;
    // 0x556090: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x556090u;
    {
        const bool branch_taken_0x556090 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x556090) {
            ctx->pc = 0x5560A0u;
            goto label_5560a0;
        }
    }
    ctx->pc = 0x556098u;
    // 0x556098: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x556098u;
    {
        const bool branch_taken_0x556098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x556098) {
            ctx->pc = 0x5560ECu;
            goto label_5560ec;
        }
    }
    ctx->pc = 0x5560A0u;
label_5560a0:
    // 0x5560a0: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5560a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x5560a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5560a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x5560a8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x5560a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x5560ac: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x5560ACu;
    SET_GPR_U32(ctx, 31, 0x5560B4u);
    ctx->pc = 0x5560B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5560ACu;
            // 0x5560b0: 0x24c6ee90  addiu       $a2, $a2, -0x1170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5560B4u; }
        if (ctx->pc != 0x5560B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5560B4u; }
        if (ctx->pc != 0x5560B4u) { return; }
    }
    ctx->pc = 0x5560B4u;
label_5560b4:
    // 0x5560b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x5560B4u;
    {
        const bool branch_taken_0x5560b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5560b4) {
            ctx->pc = 0x5560ECu;
            goto label_5560ec;
        }
    }
    ctx->pc = 0x5560BCu;
label_5560bc:
    // 0x5560bc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5560bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x5560c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5560c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x5560c4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x5560c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x5560c8: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x5560C8u;
    SET_GPR_U32(ctx, 31, 0x5560D0u);
    ctx->pc = 0x5560CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5560C8u;
            // 0x5560cc: 0x24c6eeb0  addiu       $a2, $a2, -0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5560D0u; }
        if (ctx->pc != 0x5560D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5560D0u; }
        if (ctx->pc != 0x5560D0u) { return; }
    }
    ctx->pc = 0x5560D0u;
label_5560d0:
    // 0x5560d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x5560D0u;
    {
        const bool branch_taken_0x5560d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5560d0) {
            ctx->pc = 0x5560ECu;
            goto label_5560ec;
        }
    }
    ctx->pc = 0x5560D8u;
label_5560d8:
    // 0x5560d8: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5560d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x5560dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x5560dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x5560e0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x5560e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x5560e4: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x5560E4u;
    SET_GPR_U32(ctx, 31, 0x5560ECu);
    ctx->pc = 0x5560E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5560E4u;
            // 0x5560e8: 0x24c6eed0  addiu       $a2, $a2, -0x1130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5560ECu; }
        if (ctx->pc != 0x5560ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5560ECu; }
        if (ctx->pc != 0x5560ECu) { return; }
    }
    ctx->pc = 0x5560ECu;
label_5560ec:
    // 0x5560ec: 0x8e240188  lw          $a0, 0x188($s1)
    ctx->pc = 0x5560ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
label_5560f0:
    // 0x5560f0: 0xc05d85a  jal         func_176168
    ctx->pc = 0x5560F0u;
    SET_GPR_U32(ctx, 31, 0x5560F8u);
    ctx->pc = 0x5560F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5560F0u;
            // 0x5560f4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x176168u;
    if (runtime->hasFunction(0x176168u)) {
        auto targetFn = runtime->lookupFunction(0x176168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5560F8u; }
        if (ctx->pc != 0x5560F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00176168_0x176168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5560F8u; }
        if (ctx->pc != 0x5560F8u) { return; }
    }
    ctx->pc = 0x5560F8u;
label_5560f8:
    // 0x5560f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5560f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5560fc: 0xa263005b  sb          $v1, 0x5B($s3)
    ctx->pc = 0x5560fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 91), (uint8_t)GPR_U32(ctx, 3));
label_556100:
    // 0x556100: 0xae70006c  sw          $s0, 0x6C($s3)
    ctx->pc = 0x556100u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 16));
label_556104:
    // 0x556104: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x556104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x556108: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x556108u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x55610c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x55610cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x556110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x556110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x556114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x556114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x556118: 0x3e00008  jr          $ra
    ctx->pc = 0x556118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55611Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556118u;
            // 0x55611c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x556120u;
}
