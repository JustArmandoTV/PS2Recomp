#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00407A80
// Address: 0x407a80 - 0x407bb0
void sub_00407A80_0x407a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407A80_0x407a80");
#endif

    switch (ctx->pc) {
        case 0x407ac4u: goto label_407ac4;
        case 0x407af8u: goto label_407af8;
        case 0x407b20u: goto label_407b20;
        case 0x407b54u: goto label_407b54;
        case 0x407b60u: goto label_407b60;
        case 0x407b68u: goto label_407b68;
        case 0x407b8cu: goto label_407b8c;
        default: break;
    }

    ctx->pc = 0x407a80u;

    // 0x407a80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x407a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x407a84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x407a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x407a88: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x407a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x407a8c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x407a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x407a90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x407a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x407a94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x407a94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407a98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x407a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x407a9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x407a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x407aa0: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x407aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
    // 0x407aa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x407aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x407aa8: 0x26730e84  addiu       $s3, $s3, 0xE84
    ctx->pc = 0x407aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3716));
    // 0x407aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x407aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x407ab0: 0x8c510ea4  lw          $s1, 0xEA4($v0)
    ctx->pc = 0x407ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x407ab4: 0x9090004c  lbu         $s0, 0x4C($a0)
    ctx->pc = 0x407ab4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x407ab8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x407ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x407abc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x407abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x407ac0: 0x8c54077c  lw          $s4, 0x77C($v0)
    ctx->pc = 0x407ac0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_407ac4:
    // 0x407ac4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x407ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x407ac8: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x407ac8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x407acc: 0x8c820e38  lw          $v0, 0xE38($a0)
    ctx->pc = 0x407accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
    // 0x407ad0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x407AD0u;
    {
        const bool branch_taken_0x407ad0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x407AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407AD0u;
            // 0x407ad4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407ad0) {
            ctx->pc = 0x407AE8u;
            goto label_407ae8;
        }
    }
    ctx->pc = 0x407AD8u;
    // 0x407ad8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x407ad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x407adc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x407ADCu;
    {
        const bool branch_taken_0x407adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x407adc) {
            ctx->pc = 0x407AE8u;
            goto label_407ae8;
        }
    }
    ctx->pc = 0x407AE4u;
    // 0x407ae4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x407ae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_407ae8:
    // 0x407ae8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x407AE8u;
    {
        const bool branch_taken_0x407ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x407ae8) {
            ctx->pc = 0x407B08u;
            goto label_407b08;
        }
    }
    ctx->pc = 0x407AF0u;
    // 0x407af0: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x407AF0u;
    SET_GPR_U32(ctx, 31, 0x407AF8u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407AF8u; }
        if (ctx->pc != 0x407AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407AF8u; }
        if (ctx->pc != 0x407AF8u) { return; }
    }
    ctx->pc = 0x407AF8u;
label_407af8:
    // 0x407af8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x407AF8u;
    {
        const bool branch_taken_0x407af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x407af8) {
            ctx->pc = 0x407B08u;
            goto label_407b08;
        }
    }
    ctx->pc = 0x407B00u;
    // 0x407b00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x407b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407b04: 0x0  nop
    ctx->pc = 0x407b04u;
    // NOP
label_407b08:
    // 0x407b08: 0x5240000b  beql        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x407B08u;
    {
        const bool branch_taken_0x407b08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x407b08) {
            ctx->pc = 0x407B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407B08u;
            // 0x407b0c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407B38u;
            goto label_407b38;
        }
    }
    ctx->pc = 0x407B10u;
    // 0x407b10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x407b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x407b14: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x407b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x407b18: 0xc0bd4bc  jal         func_2F52F0
    ctx->pc = 0x407B18u;
    SET_GPR_U32(ctx, 31, 0x407B20u);
    ctx->pc = 0x407B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407B18u;
            // 0x407b1c: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F52F0u;
    if (runtime->hasFunction(0x2F52F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F52F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407B20u; }
        if (ctx->pc != 0x407B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F52F0_0x2f52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407B20u; }
        if (ctx->pc != 0x407B20u) { return; }
    }
    ctx->pc = 0x407B20u;
label_407b20:
    // 0x407b20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x407b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x407b24: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x407B24u;
    {
        const bool branch_taken_0x407b24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x407b24) {
            ctx->pc = 0x407B34u;
            goto label_407b34;
        }
    }
    ctx->pc = 0x407B2Cu;
    // 0x407b2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x407B2Cu;
    {
        const bool branch_taken_0x407b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407B2Cu;
            // 0x407b30: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x407b2c) {
            ctx->pc = 0x407B44u;
            goto label_407b44;
        }
    }
    ctx->pc = 0x407B34u;
label_407b34:
    // 0x407b34: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x407b34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_407b38:
    // 0x407b38: 0x1680ffe2  bnez        $s4, . + 4 + (-0x1E << 2)
    ctx->pc = 0x407B38u;
    {
        const bool branch_taken_0x407b38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x407B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407B38u;
            // 0x407b3c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407b38) {
            ctx->pc = 0x407AC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407ac4;
        }
    }
    ctx->pc = 0x407B40u;
    // 0x407b40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x407b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407b44:
    // 0x407b44: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x407B44u;
    {
        const bool branch_taken_0x407b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x407b44) {
            ctx->pc = 0x407B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407B44u;
            // 0x407b48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407B84u;
            goto label_407b84;
        }
    }
    ctx->pc = 0x407B4Cu;
    // 0x407b4c: 0xc1020fc  jal         func_4083F0
    ctx->pc = 0x407B4Cu;
    SET_GPR_U32(ctx, 31, 0x407B54u);
    ctx->pc = 0x4083F0u;
    if (runtime->hasFunction(0x4083F0u)) {
        auto targetFn = runtime->lookupFunction(0x4083F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407B54u; }
        if (ctx->pc != 0x407B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004083F0_0x4083f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407B54u; }
        if (ctx->pc != 0x407B54u) { return; }
    }
    ctx->pc = 0x407B54u;
label_407b54:
    // 0x407b54: 0xa2a0005c  sb          $zero, 0x5C($s5)
    ctx->pc = 0x407b54u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x407b58: 0x8eb10050  lw          $s1, 0x50($s5)
    ctx->pc = 0x407b58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x407b5c: 0x8eb00058  lw          $s0, 0x58($s5)
    ctx->pc = 0x407b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_407b60:
    // 0x407b60: 0xc0e3658  jal         func_38D960
    ctx->pc = 0x407B60u;
    SET_GPR_U32(ctx, 31, 0x407B68u);
    ctx->pc = 0x407B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407B60u;
            // 0x407b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407B68u; }
        if (ctx->pc != 0x407B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407B68u; }
        if (ctx->pc != 0x407B68u) { return; }
    }
    ctx->pc = 0x407B68u;
label_407b68:
    // 0x407b68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x407b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x407b6c: 0x26310170  addiu       $s1, $s1, 0x170
    ctx->pc = 0x407b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x407b70: 0x0  nop
    ctx->pc = 0x407b70u;
    // NOP
    // 0x407b74: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x407B74u;
    {
        const bool branch_taken_0x407b74 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x407b74) {
            ctx->pc = 0x407B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407b60;
        }
    }
    ctx->pc = 0x407B7Cu;
    // 0x407b7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x407B7Cu;
    {
        const bool branch_taken_0x407b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407B7Cu;
            // 0x407b80: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407b7c) {
            ctx->pc = 0x407B90u;
            goto label_407b90;
        }
    }
    ctx->pc = 0x407B84u;
label_407b84:
    // 0x407b84: 0xc101d40  jal         func_407500
    ctx->pc = 0x407B84u;
    SET_GPR_U32(ctx, 31, 0x407B8Cu);
    ctx->pc = 0x407500u;
    if (runtime->hasFunction(0x407500u)) {
        auto targetFn = runtime->lookupFunction(0x407500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407B8Cu; }
        if (ctx->pc != 0x407B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00407500_0x407500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407B8Cu; }
        if (ctx->pc != 0x407B8Cu) { return; }
    }
    ctx->pc = 0x407B8Cu;
label_407b8c:
    // 0x407b8c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x407b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_407b90:
    // 0x407b90: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x407b90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x407b94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x407b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x407b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x407b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x407b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x407b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x407ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x407ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x407ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x407ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x407BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407BA8u;
            // 0x407bac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407BB0u;
}
