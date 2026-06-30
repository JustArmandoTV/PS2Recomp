#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282CF0
// Address: 0x282cf0 - 0x282e40
void sub_00282CF0_0x282cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282CF0_0x282cf0");
#endif

    switch (ctx->pc) {
        case 0x282d40u: goto label_282d40;
        case 0x282dc4u: goto label_282dc4;
        default: break;
    }

    ctx->pc = 0x282cf0u;

    // 0x282cf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x282cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x282cf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x282cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x282cf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x282cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x282cfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x282cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x282d00: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x282d00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d04: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x282d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x282d08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x282d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x282d0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x282d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x282d10: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x282d10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x282d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x282d18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282d24: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x282d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x282d28: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x282d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x282d2c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x282d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x282d30: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x282d30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282d34: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x282D34u;
    {
        const bool branch_taken_0x282d34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D34u;
            // 0x282d38: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d34) {
            ctx->pc = 0x282E08u;
            goto label_282e08;
        }
    }
    ctx->pc = 0x282D3Cu;
    // 0x282d3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x282d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282d40:
    // 0x282d40: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x282d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x282d44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x282d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x282d48: 0x94640004  lhu         $a0, 0x4($v1)
    ctx->pc = 0x282d48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x282d4c: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x282d4cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282d50: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x282d50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x282d54: 0x284082a  slt         $at, $s4, $a0
    ctx->pc = 0x282d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x282d58: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x282d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282d5c: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x282d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x282d60: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x282D60u;
    {
        const bool branch_taken_0x282d60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D60u;
            // 0x282d64: 0x94c30004  lhu         $v1, 0x4($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d60) {
            ctx->pc = 0x282DF0u;
            goto label_282df0;
        }
    }
    ctx->pc = 0x282D68u;
    // 0x282d68: 0x283082a  slt         $at, $s4, $v1
    ctx->pc = 0x282d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282d6c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x282D6Cu;
    {
        const bool branch_taken_0x282d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x282d6c) {
            ctx->pc = 0x282DF0u;
            goto label_282df0;
        }
    }
    ctx->pc = 0x282D74u;
    // 0x282d74: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x282d74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x282d78: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x282d78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x282d7c: 0x8eb20010  lw          $s2, 0x10($s5)
    ctx->pc = 0x282d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x282d80: 0x8ea40014  lw          $a0, 0x14($s5)
    ctx->pc = 0x282d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x282d84: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x282d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x282d88: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x282d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x282d8c: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x282d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x282d90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x282d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x282d94: 0x94770000  lhu         $s7, 0x0($v1)
    ctx->pc = 0x282d94u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282d98: 0x418bc  dsll32      $v1, $a0, 2
    ctx->pc = 0x282d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 2));
    // 0x282d9c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x282d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x282da0: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x282da0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x282da4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x282DA4u;
    {
        const bool branch_taken_0x282da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x282DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282DA4u;
            // 0x282da8: 0x94d60000  lhu         $s6, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282da4) {
            ctx->pc = 0x282DC8u;
            goto label_282dc8;
        }
    }
    ctx->pc = 0x282DACu;
    // 0x282dac: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x282dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x282db0: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x282db0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x282db4: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x282db4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x282db8: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x282db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x282dbc: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x282DBCu;
    SET_GPR_U32(ctx, 31, 0x282DC4u);
    ctx->pc = 0x282DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282DBCu;
            // 0x282dc0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DC4u; }
        if (ctx->pc != 0x282DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DC4u; }
        if (ctx->pc != 0x282DC4u) { return; }
    }
    ctx->pc = 0x282DC4u;
label_282dc4:
    // 0x282dc4: 0x0  nop
    ctx->pc = 0x282dc4u;
    // NOP
label_282dc8:
    // 0x282dc8: 0xaeb10010  sw          $s1, 0x10($s5)
    ctx->pc = 0x282dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 17));
    // 0x282dcc: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x282dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x282dd0: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x282dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x282dd4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x282dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x282dd8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x282dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x282ddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x282ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x282de0: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x282de0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x282de4: 0xac770004  sw          $s7, 0x4($v1)
    ctx->pc = 0x282de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 23));
    // 0x282de8: 0xac760008  sw          $s6, 0x8($v1)
    ctx->pc = 0x282de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 22));
    // 0x282dec: 0x0  nop
    ctx->pc = 0x282decu;
    // NOP
label_282df0:
    // 0x282df0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x282df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x282df4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x282df4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x282df8: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x282df8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282dfc: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x282DFCu;
    {
        const bool branch_taken_0x282dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x282E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282DFCu;
            // 0x282e00: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282dfc) {
            ctx->pc = 0x282D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282d40;
        }
    }
    ctx->pc = 0x282E04u;
    // 0x282e04: 0x0  nop
    ctx->pc = 0x282e04u;
    // NOP
label_282e08:
    // 0x282e08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x282e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x282e0c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x282e0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282e10: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x282e10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282e14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x282e14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282e18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x282e18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282e1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x282e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282e20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x282e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x282e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282e30: 0x3e00008  jr          $ra
    ctx->pc = 0x282E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E30u;
            // 0x282e34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282E38u;
    // 0x282e38: 0x0  nop
    ctx->pc = 0x282e38u;
    // NOP
    // 0x282e3c: 0x0  nop
    ctx->pc = 0x282e3cu;
    // NOP
}
