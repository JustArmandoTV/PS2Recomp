#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197C20
// Address: 0x197c20 - 0x197d88
void sub_00197C20_0x197c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197C20_0x197c20");
#endif

    switch (ctx->pc) {
        case 0x197c6cu: goto label_197c6c;
        case 0x197ce8u: goto label_197ce8;
        case 0x197d38u: goto label_197d38;
        case 0x197d44u: goto label_197d44;
        default: break;
    }

    ctx->pc = 0x197c20u;

    // 0x197c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x197c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x197c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x197c28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x197c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c2c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x197c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x197c30: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x197c30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c34: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x197c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x197c38: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x197c38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c3c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x197c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x197c40: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x197c40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197c48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x197c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x197c4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x197c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x197c50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x197c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x197c54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x197c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x197c58: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x197c58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x197c5c: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x197c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x197c60: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x197c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x197c64: 0xc065ddc  jal         func_197770
    ctx->pc = 0x197C64u;
    SET_GPR_U32(ctx, 31, 0x197C6Cu);
    ctx->pc = 0x197C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197C64u;
            // 0x197c68: 0x8e540010  lw          $s4, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197770u;
    if (runtime->hasFunction(0x197770u)) {
        auto targetFn = runtime->lookupFunction(0x197770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C6Cu; }
        if (ctx->pc != 0x197C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197770_0x197770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C6Cu; }
        if (ctx->pc != 0x197C6Cu) { return; }
    }
    ctx->pc = 0x197C6Cu;
label_197c6c:
    // 0x197c6c: 0x2626000f  addiu       $a2, $s1, 0xF
    ctx->pc = 0x197c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x197c70: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x197c70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x197c74: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x197c74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x197c78: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x197c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x197c7c: 0xc4880b  movn        $s1, $a2, $a0
    ctx->pc = 0x197c7cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
    // 0x197c80: 0xa3800b  movn        $s0, $a1, $v1
    ctx->pc = 0x197c80u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x197c84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x197c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197c88: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x197c88u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x197c8c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197C8Cu;
    {
        const bool branch_taken_0x197c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x197C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C8Cu;
            // 0x197c90: 0x101903  sra         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c8c) {
            ctx->pc = 0x197CA0u;
            goto label_197ca0;
        }
    }
    ctx->pc = 0x197C94u;
    // 0x197c94: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x197c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197c98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197C98u;
    {
        const bool branch_taken_0x197c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C98u;
            // 0x197c9c: 0x21280  sll         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c98) {
            ctx->pc = 0x197CB0u;
            goto label_197cb0;
        }
    }
    ctx->pc = 0x197CA0u;
label_197ca0:
    // 0x197ca0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x197ca0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x197ca4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x197ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x197ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197cac: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x197cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_197cb0:
    // 0x197cb0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x197cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x197cb4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x197CB4u;
    {
        const bool branch_taken_0x197cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CB4u;
            // 0x197cb8: 0x24530040  addiu       $s3, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cb4) {
            ctx->pc = 0x197D20u;
            goto label_197d20;
        }
    }
    ctx->pc = 0x197CBCu;
    // 0x197cbc: 0x26820002  addiu       $v0, $s4, 0x2
    ctx->pc = 0x197cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x197cc0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x197cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197cc4: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x197CC4u;
    {
        const bool branch_taken_0x197cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197cc4) {
            ctx->pc = 0x197CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197CC4u;
            // 0x197cc8: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197D58u;
            goto label_197d58;
        }
    }
    ctx->pc = 0x197CCCu;
    // 0x197ccc: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x197cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x197cd0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x197cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x197cd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x197CD4u;
    {
        const bool branch_taken_0x197cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CD4u;
            // 0x197cd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cd4) {
            ctx->pc = 0x197D08u;
            goto label_197d08;
        }
    }
    ctx->pc = 0x197CDCu;
    // 0x197cdc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x197CDCu;
    {
        const bool branch_taken_0x197cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CDCu;
            // 0x197ce0: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cdc) {
            ctx->pc = 0x197D58u;
            goto label_197d58;
        }
    }
    ctx->pc = 0x197CE4u;
    // 0x197ce4: 0x0  nop
    ctx->pc = 0x197ce4u;
    // NOP
label_197ce8:
    // 0x197ce8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x197ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x197cec: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x197cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x197cf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x197cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197cf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x197cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x197cfc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x197cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x197d00: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x197d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x197d04: 0xa3a80a  movz        $s5, $a1, $v1
    ctx->pc = 0x197d04u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
label_197d08:
    // 0x197d08: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x197d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x197d0c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x197D0Cu;
    {
        const bool branch_taken_0x197d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197d0c) {
            ctx->pc = 0x197D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197D0Cu;
            // 0x197d10: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197CE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197ce8;
        }
    }
    ctx->pc = 0x197D14u;
    // 0x197d14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x197D14u;
    {
        const bool branch_taken_0x197d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D14u;
            // 0x197d18: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d14) {
            ctx->pc = 0x197D5Cu;
            goto label_197d5c;
        }
    }
    ctx->pc = 0x197D1Cu;
    // 0x197d1c: 0x0  nop
    ctx->pc = 0x197d1cu;
    // NOP
label_197d20:
    // 0x197d20: 0x1a80000e  blez        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x197D20u;
    {
        const bool branch_taken_0x197d20 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x197D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D20u;
            // 0x197d24: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d20) {
            ctx->pc = 0x197D5Cu;
            goto label_197d5c;
        }
    }
    ctx->pc = 0x197D28u;
    // 0x197d28: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x197d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d2c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x197d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d30: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x197d30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197d34: 0x0  nop
    ctx->pc = 0x197d34u;
    // NOP
label_197d38:
    // 0x197d38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x197d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d3c: 0xc066502  jal         func_199408
    ctx->pc = 0x197D3Cu;
    SET_GPR_U32(ctx, 31, 0x197D44u);
    ctx->pc = 0x197D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D3Cu;
            // 0x197d40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D44u; }
        if (ctx->pc != 0x197D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D44u; }
        if (ctx->pc != 0x197D44u) { return; }
    }
    ctx->pc = 0x197D44u;
label_197d44:
    // 0x197d44: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x197d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x197d48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x197d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x197d4c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x197d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x197d50: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x197D50u;
    {
        const bool branch_taken_0x197d50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D50u;
            // 0x197d54: 0x242a80a  movz        $s5, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d50) {
            ctx->pc = 0x197D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197d38;
        }
    }
    ctx->pc = 0x197D58u;
label_197d58:
    // 0x197d58: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x197d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_197d5c:
    // 0x197d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197d60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197d64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x197d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197d68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x197d68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197d6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x197d6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197d70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x197d70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197d74: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x197d74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197d78: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x197d78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x197d7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x197d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197d80: 0x3e00008  jr          $ra
    ctx->pc = 0x197D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D80u;
            // 0x197d84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197D88u;
}
