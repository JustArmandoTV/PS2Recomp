#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2A18
// Address: 0x1b2a18 - 0x1b2b60
void sub_001B2A18_0x1b2a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2A18_0x1b2a18");
#endif

    switch (ctx->pc) {
        case 0x1b2a50u: goto label_1b2a50;
        case 0x1b2a98u: goto label_1b2a98;
        case 0x1b2b08u: goto label_1b2b08;
        case 0x1b2b1cu: goto label_1b2b1c;
        case 0x1b2b30u: goto label_1b2b30;
        default: break;
    }

    ctx->pc = 0x1b2a18u;

    // 0x1b2a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2a28: 0x8e020a24  lw          $v0, 0xA24($s0)
    ctx->pc = 0x1b2a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2596)));
    // 0x1b2a2c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2A2Cu;
    {
        const bool branch_taken_0x1b2a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a2c) {
            ctx->pc = 0x1B2A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A2Cu;
            // 0x1b2a30: 0x8e020a20  lw          $v0, 0xA20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2592)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2A54u;
            goto label_1b2a54;
        }
    }
    ctx->pc = 0x1B2A34u;
    // 0x1b2a34: 0x8e030a48  lw          $v1, 0xA48($s0)
    ctx->pc = 0x1b2a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2632)));
    // 0x1b2a38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2a3c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2A3Cu;
    {
        const bool branch_taken_0x1b2a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2a3c) {
            ctx->pc = 0x1B2A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A3Cu;
            // 0x1b2a40: 0x8e020a20  lw          $v0, 0xA20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2592)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2A54u;
            goto label_1b2a54;
        }
    }
    ctx->pc = 0x1B2A44u;
    // 0x1b2a44: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b2a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b2a48: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B2A48u;
    SET_GPR_U32(ctx, 31, 0x1B2A50u);
    ctx->pc = 0x1B2A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A48u;
            // 0x1b2a4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A50u; }
        if (ctx->pc != 0x1B2A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A50u; }
        if (ctx->pc != 0x1B2A50u) { return; }
    }
    ctx->pc = 0x1B2A50u;
label_1b2a50:
    // 0x1b2a50: 0x8e020a20  lw          $v0, 0xA20($s0)
    ctx->pc = 0x1b2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2592)));
label_1b2a54:
    // 0x1b2a54: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2A54u;
    {
        const bool branch_taken_0x1b2a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2a54) {
            ctx->pc = 0x1B2A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A54u;
            // 0x1b2a58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2A88u;
            goto label_1b2a88;
        }
    }
    ctx->pc = 0x1B2A5Cu;
    // 0x1b2a5c: 0x8e030a48  lw          $v1, 0xA48($s0)
    ctx->pc = 0x1b2a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2632)));
    // 0x1b2a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2a64: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2A64u;
    {
        const bool branch_taken_0x1b2a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2a64) {
            ctx->pc = 0x1B2A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A64u;
            // 0x1b2a68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2A88u;
            goto label_1b2a88;
        }
    }
    ctx->pc = 0x1B2A6Cu;
    // 0x1b2a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2a74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2a78: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b2a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b2a7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b2a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2a80: 0x806d7aa  j           func_1B5EA8
    ctx->pc = 0x1B2A80u;
    ctx->pc = 0x1B2A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A80u;
            // 0x1b2a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2A88u;
label_1b2a88:
    // 0x1b2a88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A8Cu;
            // 0x1b2a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2A94u;
    // 0x1b2a94: 0x0  nop
    ctx->pc = 0x1b2a94u;
    // NOP
label_1b2a98:
    // 0x1b2a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2a9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b2a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2aa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b2aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2aac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2ab0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2ab4: 0x8e220a24  lw          $v0, 0xA24($s1)
    ctx->pc = 0x1b2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2596)));
    // 0x1b2ab8: 0x8e230a20  lw          $v1, 0xA20($s1)
    ctx->pc = 0x1b2ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2592)));
    // 0x1b2abc: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x1b2abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x1b2ac0: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1b2ac0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b2ac4: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x1b2ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x1b2ac8: 0x34c20002  ori         $v0, $a2, 0x2
    ctx->pc = 0x1b2ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x1b2acc: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1b2accu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1b2ad0: 0x10c5001a  beq         $a2, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B2AD0u;
    {
        const bool branch_taken_0x1b2ad0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B2AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AD0u;
            // 0x1b2ad4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ad0) {
            ctx->pc = 0x1B2B3Cu;
            goto label_1b2b3c;
        }
    }
    ctx->pc = 0x1B2AD8u;
    // 0x1b2ad8: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x1b2ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b2adc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2ADCu;
    {
        const bool branch_taken_0x1b2adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2adc) {
            ctx->pc = 0x1B2AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2ADCu;
            // 0x1b2ae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2AF8u;
            goto label_1b2af8;
        }
    }
    ctx->pc = 0x1B2AE4u;
    // 0x1b2ae4: 0x10c70015  beq         $a2, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B2AE4u;
    {
        const bool branch_taken_0x1b2ae4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x1B2AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AE4u;
            // 0x1b2ae8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ae4) {
            ctx->pc = 0x1B2B3Cu;
            goto label_1b2b3c;
        }
    }
    ctx->pc = 0x1B2AECu;
    // 0x1b2aec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B2AECu;
    {
        const bool branch_taken_0x1b2aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AECu;
            // 0x1b2af0: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2aec) {
            ctx->pc = 0x1B2B3Cu;
            goto label_1b2b3c;
        }
    }
    ctx->pc = 0x1B2AF4u;
    // 0x1b2af4: 0x0  nop
    ctx->pc = 0x1b2af4u;
    // NOP
label_1b2af8:
    // 0x1b2af8: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B2AF8u;
    {
        const bool branch_taken_0x1b2af8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2AF8u;
            // 0x1b2afc: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2af8) {
            ctx->pc = 0x1B2B3Cu;
            goto label_1b2b3c;
        }
    }
    ctx->pc = 0x1B2B00u;
    // 0x1b2b00: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2B00u;
    SET_GPR_U32(ctx, 31, 0x1B2B08u);
    ctx->pc = 0x1B2B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B00u;
            // 0x1b2b04: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B08u; }
        if (ctx->pc != 0x1B2B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B08u; }
        if (ctx->pc != 0x1B2B08u) { return; }
    }
    ctx->pc = 0x1B2B08u;
label_1b2b08:
    // 0x1b2b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b0c: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2B0Cu;
    {
        const bool branch_taken_0x1b2b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B0Cu;
            // 0x1b2b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b0c) {
            ctx->pc = 0x1B2B40u;
            goto label_1b2b40;
        }
    }
    ctx->pc = 0x1B2B14u;
    // 0x1b2b14: 0xc070180  jal         func_1C0600
    ctx->pc = 0x1B2B14u;
    SET_GPR_U32(ctx, 31, 0x1B2B1Cu);
    ctx->pc = 0x1C0600u;
    if (runtime->hasFunction(0x1C0600u)) {
        auto targetFn = runtime->lookupFunction(0x1C0600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B1Cu; }
        if (ctx->pc != 0x1B2B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0600_0x1c0600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B1Cu; }
        if (ctx->pc != 0x1B2B1Cu) { return; }
    }
    ctx->pc = 0x1B2B1Cu;
label_1b2b1c:
    // 0x1b2b1c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2B1Cu;
    {
        const bool branch_taken_0x1b2b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b1c) {
            ctx->pc = 0x1B2B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B1Cu;
            // 0x1b2b20: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2B3Cu;
            goto label_1b2b3c;
        }
    }
    ctx->pc = 0x1B2B24u;
    // 0x1b2b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b28: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2B28u;
    SET_GPR_U32(ctx, 31, 0x1B2B30u);
    ctx->pc = 0x1B2B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B28u;
            // 0x1b2b2c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B30u; }
        if (ctx->pc != 0x1B2B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2B30u; }
        if (ctx->pc != 0x1B2B30u) { return; }
    }
    ctx->pc = 0x1B2B30u;
label_1b2b30:
    // 0x1b2b30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2B30u;
    {
        const bool branch_taken_0x1b2b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B30u;
            // 0x1b2b34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b30) {
            ctx->pc = 0x1B2B40u;
            goto label_1b2b40;
        }
    }
    ctx->pc = 0x1B2B38u;
    // 0x1b2b38: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b2b3c:
    // 0x1b2b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2b40:
    // 0x1b2b40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2b40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2b44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b2b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2b50: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1b2b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b2b54: 0x806d7aa  j           func_1B5EA8
    ctx->pc = 0x1B2B54u;
    ctx->pc = 0x1B2B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B54u;
            // 0x1b2b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2B5Cu;
    // 0x1b2b5c: 0x0  nop
    ctx->pc = 0x1b2b5cu;
    // NOP
}
