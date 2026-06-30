#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4CA0
// Address: 0x2a4ca0 - 0x2a4d80
void sub_002A4CA0_0x2a4ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4CA0_0x2a4ca0");
#endif

    switch (ctx->pc) {
        case 0x2a4cf8u: goto label_2a4cf8;
        case 0x2a4d30u: goto label_2a4d30;
        case 0x2a4d4cu: goto label_2a4d4c;
        case 0x2a4d64u: goto label_2a4d64;
        default: break;
    }

    ctx->pc = 0x2a4ca0u;

    // 0x2a4ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a4ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a4ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a4ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a4ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a4ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a4cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a4cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cb4: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2A4CB4u;
    {
        const bool branch_taken_0x2a4cb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4CB4u;
            // 0x2a4cb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4cb4) {
            ctx->pc = 0x2A4D64u;
            goto label_2a4d64;
        }
    }
    ctx->pc = 0x2A4CBCu;
    // 0x2a4cbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a4cc0: 0x2442fb10  addiu       $v0, $v0, -0x4F0
    ctx->pc = 0x2a4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x2a4cc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a4cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a4cc8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2a4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a4ccc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2a4cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2a4cd0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2a4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a4cd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4cd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a4cdc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2a4cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4ce0: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x2a4ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2a4ce4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a4ce8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a4ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a4cec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A4CECu;
    {
        const bool branch_taken_0x2a4cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cec) {
            ctx->pc = 0x2A4D18u;
            goto label_2a4d18;
        }
    }
    ctx->pc = 0x2A4CF4u;
    // 0x2a4cf4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2a4cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_2a4cf8:
    // 0x2a4cf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a4cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a4cfc: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x2a4cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2a4d00: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x2a4d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x2a4d04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2a4d08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a4d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a4d0c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A4D0Cu;
    {
        const bool branch_taken_0x2a4d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d0c) {
            ctx->pc = 0x2A4D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D0Cu;
            // 0x2a4d10: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4cf8;
        }
    }
    ctx->pc = 0x2A4D14u;
    // 0x2a4d14: 0x0  nop
    ctx->pc = 0x2a4d14u;
    // NOP
label_2a4d18:
    // 0x2a4d18: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a4d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a4d1c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2a4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2a4d20: 0x24a55a00  addiu       $a1, $a1, 0x5A00
    ctx->pc = 0x2a4d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23040));
    // 0x2a4d24: 0x240602a0  addiu       $a2, $zero, 0x2A0
    ctx->pc = 0x2a4d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x2a4d28: 0xc0407e8  jal         func_101FA0
    ctx->pc = 0x2A4D28u;
    SET_GPR_U32(ctx, 31, 0x2A4D30u);
    ctx->pc = 0x2A4D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D28u;
            // 0x2a4d2c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D30u; }
        if (ctx->pc != 0x2A4D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D30u; }
        if (ctx->pc != 0x2A4D30u) { return; }
    }
    ctx->pc = 0x2A4D30u;
label_2a4d30:
    // 0x2a4d30: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x2a4d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a4d34: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4D34u;
    {
        const bool branch_taken_0x2a4d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d34) {
            ctx->pc = 0x2A4D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D34u;
            // 0x2a4d38: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4D50u;
            goto label_2a4d50;
        }
    }
    ctx->pc = 0x2A4D3Cu;
    // 0x2a4d3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4D3Cu;
    {
        const bool branch_taken_0x2a4d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d3c) {
            ctx->pc = 0x2A4D4Cu;
            goto label_2a4d4c;
        }
    }
    ctx->pc = 0x2A4D44u;
    // 0x2a4d44: 0xc0a94c4  jal         func_2A5310
    ctx->pc = 0x2A4D44u;
    SET_GPR_U32(ctx, 31, 0x2A4D4Cu);
    ctx->pc = 0x2A4D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D44u;
            // 0x2a4d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5310u;
    if (runtime->hasFunction(0x2A5310u)) {
        auto targetFn = runtime->lookupFunction(0x2A5310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D4Cu; }
        if (ctx->pc != 0x2A4D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5310_0x2a5310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D4Cu; }
        if (ctx->pc != 0x2A4D4Cu) { return; }
    }
    ctx->pc = 0x2A4D4Cu;
label_2a4d4c:
    // 0x2a4d4c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a4d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2a4d50:
    // 0x2a4d50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a4d50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a4d54: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4D54u;
    {
        const bool branch_taken_0x2a4d54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a4d54) {
            ctx->pc = 0x2A4D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D54u;
            // 0x2a4d58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A4D68u;
            goto label_2a4d68;
        }
    }
    ctx->pc = 0x2A4D5Cu;
    // 0x2a4d5c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2A4D5Cu;
    SET_GPR_U32(ctx, 31, 0x2A4D64u);
    ctx->pc = 0x2A4D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D5Cu;
            // 0x2a4d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D64u; }
        if (ctx->pc != 0x2A4D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4D64u; }
        if (ctx->pc != 0x2A4D64u) { return; }
    }
    ctx->pc = 0x2A4D64u;
label_2a4d64:
    // 0x2a4d64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a4d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d68:
    // 0x2a4d68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a4d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a4d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a4d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4D74u;
            // 0x2a4d78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4D7Cu;
    // 0x2a4d7c: 0x0  nop
    ctx->pc = 0x2a4d7cu;
    // NOP
}
