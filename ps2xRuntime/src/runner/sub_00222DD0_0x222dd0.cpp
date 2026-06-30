#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222DD0
// Address: 0x222dd0 - 0x222ec0
void sub_00222DD0_0x222dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222DD0_0x222dd0");
#endif

    switch (ctx->pc) {
        case 0x222e40u: goto label_222e40;
        default: break;
    }

    ctx->pc = 0x222dd0u;

    // 0x222dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x222ddc: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x222ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x222de0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x222DE0u;
    {
        const bool branch_taken_0x222de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222DE0u;
            // 0x222de4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222de0) {
            ctx->pc = 0x222DF0u;
            goto label_222df0;
        }
    }
    ctx->pc = 0x222DE8u;
    // 0x222de8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x222DE8u;
    {
        const bool branch_taken_0x222de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222DE8u;
            // 0x222dec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222de8) {
            ctx->pc = 0x222DFCu;
            goto label_222dfc;
        }
    }
    ctx->pc = 0x222DF0u;
label_222df0:
    // 0x222df0: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x222df0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x222df4: 0x31f3c  dsll32      $v1, $v1, 28
    ctx->pc = 0x222df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 28));
    // 0x222df8: 0x31fbe  dsrl32      $v1, $v1, 30
    ctx->pc = 0x222df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 30));
label_222dfc:
    // 0x222dfc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x222dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x222e00: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x222e00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x222e04: 0x54600029  bnel        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x222E04u;
    {
        const bool branch_taken_0x222e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222e04) {
            ctx->pc = 0x222E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222E04u;
            // 0x222e08: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222EACu;
            goto label_222eac;
        }
    }
    ctx->pc = 0x222E0Cu;
    // 0x222e0c: 0x920300a8  lbu         $v1, 0xA8($s0)
    ctx->pc = 0x222e0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x222e10: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x222e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x222e14: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x222e14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x222e18: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x222E18u;
    {
        const bool branch_taken_0x222e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222e18) {
            ctx->pc = 0x222EA8u;
            goto label_222ea8;
        }
    }
    ctx->pc = 0x222E20u;
    // 0x222e20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x222e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x222e24: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x222E24u;
    {
        const bool branch_taken_0x222e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e24) {
            ctx->pc = 0x222EA8u;
            goto label_222ea8;
        }
    }
    ctx->pc = 0x222E2Cu;
    // 0x222e2c: 0xa60000aa  sh          $zero, 0xAA($s0)
    ctx->pc = 0x222e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 0));
    // 0x222e30: 0xa60000ac  sh          $zero, 0xAC($s0)
    ctx->pc = 0x222e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 172), (uint16_t)GPR_U32(ctx, 0));
    // 0x222e34: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x222e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x222e38: 0xc090700  jal         func_241C00
    ctx->pc = 0x222E38u;
    SET_GPR_U32(ctx, 31, 0x222E40u);
    ctx->pc = 0x222E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222E38u;
            // 0x222e3c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241C00u;
    if (runtime->hasFunction(0x241C00u)) {
        auto targetFn = runtime->lookupFunction(0x241C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E40u; }
        if (ctx->pc != 0x222E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241C00_0x241c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222E40u; }
        if (ctx->pc != 0x222E40u) { return; }
    }
    ctx->pc = 0x222E40u;
label_222e40:
    // 0x222e40: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x222e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x222e44: 0x920500a9  lbu         $a1, 0xA9($s0)
    ctx->pc = 0x222e44u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 169)));
    // 0x222e48: 0x908802ef  lbu         $t0, 0x2EF($a0)
    ctx->pc = 0x222e48u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 751)));
    // 0x222e4c: 0x908702ee  lbu         $a3, 0x2EE($a0)
    ctx->pc = 0x222e4cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 750)));
    // 0x222e50: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x222e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x222e54: 0x908602ed  lbu         $a2, 0x2ED($a0)
    ctx->pc = 0x222e54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 749)));
    // 0x222e58: 0x31040003  andi        $a0, $t0, 0x3
    ctx->pc = 0x222e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x222e5c: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x222e5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x222e60: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x222E60u;
    {
        const bool branch_taken_0x222e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e60) {
            ctx->pc = 0x222E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222E60u;
            // 0x222e64: 0x63380  sll         $a2, $a2, 14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222E70u;
            goto label_222e70;
        }
    }
    ctx->pc = 0x222E68u;
    // 0x222e68: 0xc01827  not         $v1, $a2
    ctx->pc = 0x222e68u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x222e6c: 0x33380  sll         $a2, $v1, 14
    ctx->pc = 0x222e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_222e70:
    // 0x222e70: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x222e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x222e74: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x222e74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x222e78: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x222E78u;
    {
        const bool branch_taken_0x222e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x222e78) {
            ctx->pc = 0x222E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222E78u;
            // 0x222e7c: 0x72380  sll         $a0, $a3, 14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222E88u;
            goto label_222e88;
        }
    }
    ctx->pc = 0x222E80u;
    // 0x222e80: 0xe01827  not         $v1, $a3
    ctx->pc = 0x222e80u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x222e84: 0x32380  sll         $a0, $v1, 14
    ctx->pc = 0x222e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_222e88:
    // 0x222e88: 0x960300aa  lhu         $v1, 0xAA($s0)
    ctx->pc = 0x222e88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x222e8c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x222e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x222e90: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x222e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x222e94: 0xa60300aa  sh          $v1, 0xAA($s0)
    ctx->pc = 0x222e94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x222e98: 0x960300ac  lhu         $v1, 0xAC($s0)
    ctx->pc = 0x222e98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x222e9c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x222e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x222ea0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x222ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x222ea4: 0xa60300ac  sh          $v1, 0xAC($s0)
    ctx->pc = 0x222ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 172), (uint16_t)GPR_U32(ctx, 3));
label_222ea8:
    // 0x222ea8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_222eac:
    // 0x222eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x222EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222EB0u;
            // 0x222eb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222EB8u;
    // 0x222eb8: 0x0  nop
    ctx->pc = 0x222eb8u;
    // NOP
    // 0x222ebc: 0x0  nop
    ctx->pc = 0x222ebcu;
    // NOP
}
