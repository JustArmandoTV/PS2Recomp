#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150E40
// Address: 0x150e40 - 0x151210
void sub_00150E40_0x150e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150E40_0x150e40");
#endif

    switch (ctx->pc) {
        case 0x150e88u: goto label_150e88;
        case 0x150ea0u: goto label_150ea0;
        case 0x150ee8u: goto label_150ee8;
        case 0x150fbcu: goto label_150fbc;
        case 0x1510dcu: goto label_1510dc;
        case 0x1510e4u: goto label_1510e4;
        case 0x1510f8u: goto label_1510f8;
        case 0x151120u: goto label_151120;
        case 0x15113cu: goto label_15113c;
        case 0x151174u: goto label_151174;
        case 0x151190u: goto label_151190;
        case 0x1511e0u: goto label_1511e0;
        case 0x1511f0u: goto label_1511f0;
        default: break;
    }

    ctx->pc = 0x150e40u;

    // 0x150e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x150e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x150e44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x150e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x150e48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x150e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x150e4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x150e50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x150e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150e54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150e5c: 0x8c425784  lw          $v0, 0x5784($v0)
    ctx->pc = 0x150e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22404)));
    // 0x150e60: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x150e60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150e64: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x150e64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x150e68: 0x8c530034  lw          $s3, 0x34($v0)
    ctx->pc = 0x150e68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x150e6c: 0x2a61001d  slti        $at, $s3, 0x1D
    ctx->pc = 0x150e6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x150e70: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x150E70u;
    {
        const bool branch_taken_0x150e70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x150E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150E70u;
            // 0x150e74: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e70) {
            ctx->pc = 0x150E90u;
            goto label_150e90;
        }
    }
    ctx->pc = 0x150E78u;
    // 0x150e78: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x150e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e80: 0xc0542d8  jal         func_150B60
    ctx->pc = 0x150E80u;
    SET_GPR_U32(ctx, 31, 0x150E88u);
    ctx->pc = 0x150E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E80u;
            // 0x150e84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150B60u;
    if (runtime->hasFunction(0x150B60u)) {
        auto targetFn = runtime->lookupFunction(0x150B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E88u; }
        if (ctx->pc != 0x150E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150B60_0x150b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150E88u; }
        if (ctx->pc != 0x150E88u) { return; }
    }
    ctx->pc = 0x150E88u;
label_150e88:
    // 0x150e88: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x150E88u;
    {
        const bool branch_taken_0x150e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150e88) {
            ctx->pc = 0x150FE0u;
            goto label_150fe0;
        }
    }
    ctx->pc = 0x150E90u;
label_150e90:
    // 0x150e90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x150e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x150e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150e98: 0xc0573b0  jal         func_15CEC0
    ctx->pc = 0x150E98u;
    SET_GPR_U32(ctx, 31, 0x150EA0u);
    ctx->pc = 0x150E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150E98u;
            // 0x150e9c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CEC0u;
    if (runtime->hasFunction(0x15CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x15CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EA0u; }
        if (ctx->pc != 0x150EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CEC0_0x15cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150EA0u; }
        if (ctx->pc != 0x150EA0u) { return; }
    }
    ctx->pc = 0x150EA0u;
label_150ea0:
    // 0x150ea0: 0x1a60004f  blez        $s3, . + 4 + (0x4F << 2)
    ctx->pc = 0x150EA0u;
    {
        const bool branch_taken_0x150ea0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x150EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150EA0u;
            // 0x150ea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ea0) {
            ctx->pc = 0x150FE0u;
            goto label_150fe0;
        }
    }
    ctx->pc = 0x150EA8u;
    // 0x150ea8: 0x131e3c  dsll32      $v1, $s3, 24
    ctx->pc = 0x150ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 24));
    // 0x150eac: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x150eacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x150eb0: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x150eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x150eb4: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x150EB4u;
    {
        const bool branch_taken_0x150eb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x150EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150EB4u;
            // 0x150eb8: 0x2662fff8  addiu       $v0, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150eb4) {
            ctx->pc = 0x150F98u;
            goto label_150f98;
        }
    }
    ctx->pc = 0x150EBCu;
    // 0x150ebc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x150EBCu;
    {
        const bool branch_taken_0x150ebc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x150EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150EBCu;
            // 0x150ec0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ebc) {
            ctx->pc = 0x150ED4u;
            goto label_150ed4;
        }
    }
    ctx->pc = 0x150EC4u;
    // 0x150ec4: 0x2861007f  slti        $at, $v1, 0x7F
    ctx->pc = 0x150ec4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x150ec8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x150EC8u;
    {
        const bool branch_taken_0x150ec8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ec8) {
            ctx->pc = 0x150ED4u;
            goto label_150ed4;
        }
    }
    ctx->pc = 0x150ED0u;
    // 0x150ed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150ed4:
    // 0x150ed4: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x150ED4u;
    {
        const bool branch_taken_0x150ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ed4) {
            ctx->pc = 0x150F98u;
            goto label_150f98;
        }
    }
    ctx->pc = 0x150EDCu;
    // 0x150edc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x150edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x150ee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x150ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ee4: 0x24637a80  addiu       $v1, $v1, 0x7A80
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31360));
label_150ee8:
    // 0x150ee8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x150ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x150eec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x150eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x150ef0: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x150ef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x150ef4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x150ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x150ef8: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x150ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x150efc: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x150efcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x150f00: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x150f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x150f04: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x150f04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150f08: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x150f08u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x150f0c: 0xa0670001  sb          $a3, 0x1($v1)
    ctx->pc = 0x150f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x150f10: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x150f10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150f14: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x150f14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x150f18: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x150f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x150f1c: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x150f1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x150f20: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x150f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x150f24: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x150f24u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x150f28: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x150f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x150f2c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x150f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150f30: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x150f30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x150f34: 0xa0670003  sb          $a3, 0x3($v1)
    ctx->pc = 0x150f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x150f38: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x150f38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150f3c: 0xa0660004  sb          $a2, 0x4($v1)
    ctx->pc = 0x150f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x150f40: 0x24a60005  addiu       $a2, $a1, 0x5
    ctx->pc = 0x150f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x150f44: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x150f44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x150f48: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x150f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x150f4c: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x150f4cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x150f50: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x150f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x150f54: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x150f54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150f58: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x150f58u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x150f5c: 0xa0670005  sb          $a3, 0x5($v1)
    ctx->pc = 0x150f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x150f60: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x150f60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150f64: 0xa0660006  sb          $a2, 0x6($v1)
    ctx->pc = 0x150f64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x150f68: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x150f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x150f6c: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x150f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x150f70: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x150f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x150f74: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x150f74u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x150f78: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x150f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x150f7c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x150f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150f80: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x150f80u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x150f84: 0xa0660007  sb          $a2, 0x7($v1)
    ctx->pc = 0x150f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x150f88: 0xa2302a  slt         $a2, $a1, $v0
    ctx->pc = 0x150f88u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x150f8c: 0x14c0ffd6  bnez        $a2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x150F8Cu;
    {
        const bool branch_taken_0x150f8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x150F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150F8Cu;
            // 0x150f90: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150f8c) {
            ctx->pc = 0x150EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150ee8;
        }
    }
    ctx->pc = 0x150F94u;
    // 0x150f94: 0x0  nop
    ctx->pc = 0x150f94u;
    // NOP
label_150f98:
    // 0x150f98: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x150f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x150f9c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x150f9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x150fa0: 0x73082a  slt         $at, $v1, $s3
    ctx->pc = 0x150fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x150fa4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x150FA4u;
    {
        const bool branch_taken_0x150fa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fa4) {
            ctx->pc = 0x150FE0u;
            goto label_150fe0;
        }
    }
    ctx->pc = 0x150FACu;
    // 0x150fac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x150facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x150fb0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x150fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150fb4: 0x24427a80  addiu       $v0, $v0, 0x7A80
    ctx->pc = 0x150fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31360));
    // 0x150fb8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_150fbc:
    // 0x150fbc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x150fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x150fc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x150fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x150fc4: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x150fc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x150fc8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x150fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x150fcc: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x150fccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x150fd0: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x150fd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x150fd4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x150FD4u;
    {
        const bool branch_taken_0x150fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150FD4u;
            // 0x150fd8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fd4) {
            ctx->pc = 0x150FBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_150fbc;
        }
    }
    ctx->pc = 0x150FDCu;
    // 0x150fdc: 0x0  nop
    ctx->pc = 0x150fdcu;
    // NOP
label_150fe0:
    // 0x150fe0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x150fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x150fe4: 0x8c445824  lw          $a0, 0x5824($v0)
    ctx->pc = 0x150fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x150fe8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x150fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x150fec: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x150fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x150ff0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x150ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x150ff4: 0x1043005f  beq         $v0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x150FF4u;
    {
        const bool branch_taken_0x150ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x150ff4) {
            ctx->pc = 0x151174u;
            goto label_151174;
        }
    }
    ctx->pc = 0x150FFCu;
    // 0x150ffc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x150ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151000: 0x8c4257f0  lw          $v0, 0x57F0($v0)
    ctx->pc = 0x151000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
    // 0x151004: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151004u;
    {
        const bool branch_taken_0x151004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151004) {
            ctx->pc = 0x151028u;
            goto label_151028;
        }
    }
    ctx->pc = 0x15100Cu;
    // 0x15100c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x15100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151010: 0x8c425830  lw          $v0, 0x5830($v0)
    ctx->pc = 0x151010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22576)));
    // 0x151014: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151014u;
    {
        const bool branch_taken_0x151014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151014) {
            ctx->pc = 0x151028u;
            goto label_151028;
        }
    }
    ctx->pc = 0x15101Cu;
    // 0x15101c: 0x34832000  ori         $v1, $a0, 0x2000
    ctx->pc = 0x15101cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x151020: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151024: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x151024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
label_151028:
    // 0x151028: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x15102c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151030: 0x8c445824  lw          $a0, 0x5824($v0)
    ctx->pc = 0x151030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x151034: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x151034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x151038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151038u;
    {
        const bool branch_taken_0x151038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15103Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151038u;
            // 0x15103c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151038) {
            ctx->pc = 0x151048u;
            goto label_151048;
        }
    }
    ctx->pc = 0x151040u;
    // 0x151040: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x151040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x151044: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x151044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_151048:
    // 0x151048: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x151048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x15104c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15104Cu;
    {
        const bool branch_taken_0x15104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15104c) {
            ctx->pc = 0x151050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15104Cu;
            // 0x151050: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x151060u;
            goto label_151060;
        }
    }
    ctx->pc = 0x151054u;
    // 0x151054: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x151054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x151058: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x151058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x15105c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x15105cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_151060:
    // 0x151060: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x151060u;
    {
        const bool branch_taken_0x151060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151060) {
            ctx->pc = 0x151064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151060u;
            // 0x151064: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x151074u;
            goto label_151074;
        }
    }
    ctx->pc = 0x151068u;
    // 0x151068: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x151068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x15106c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x15106cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x151070: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x151070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_151074:
    // 0x151074: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x151074u;
    {
        const bool branch_taken_0x151074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151074) {
            ctx->pc = 0x151078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151074u;
            // 0x151078: 0x34901000  ori         $s0, $a0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x151080u;
            goto label_151080;
        }
    }
    ctx->pc = 0x15107Cu;
    // 0x15107c: 0x34900800  ori         $s0, $a0, 0x800
    ctx->pc = 0x15107cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
label_151080:
    // 0x151080: 0x30a40400  andi        $a0, $a1, 0x400
    ctx->pc = 0x151080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x151084: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x151084u;
    {
        const bool branch_taken_0x151084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151084) {
            ctx->pc = 0x151088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151084u;
            // 0x151088: 0x36100040  ori         $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
            ctx->pc = 0x151090u;
            goto label_151090;
        }
    }
    ctx->pc = 0x15108Cu;
    // 0x15108c: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x15108cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
label_151090:
    // 0x151090: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151094: 0x8c435814  lw          $v1, 0x5814($v0)
    ctx->pc = 0x151094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x151098: 0x306200fc  andi        $v0, $v1, 0xFC
    ctx->pc = 0x151098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x15109c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x15109Cu;
    {
        const bool branch_taken_0x15109c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15109c) {
            ctx->pc = 0x151154u;
            goto label_151154;
        }
    }
    ctx->pc = 0x1510A4u;
    // 0x1510a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1510a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1510a8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1510a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1510ac: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1510ACu;
    {
        const bool branch_taken_0x1510ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1510ac) {
            ctx->pc = 0x151100u;
            goto label_151100;
        }
    }
    ctx->pc = 0x1510B4u;
    // 0x1510b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1510b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1510b8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1510B8u;
    {
        const bool branch_taken_0x1510b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1510b8) {
            ctx->pc = 0x1510ECu;
            goto label_1510ec;
        }
    }
    ctx->pc = 0x1510C0u;
    // 0x1510c0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1510c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1510c4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1510C4u;
    {
        const bool branch_taken_0x1510c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1510c4) {
            ctx->pc = 0x1510C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1510C4u;
            // 0x1510c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1510D4u;
            goto label_1510d4;
        }
    }
    ctx->pc = 0x1510CCu;
    // 0x1510cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1510CCu;
    {
        const bool branch_taken_0x1510cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1510CCu;
            // 0x1510d0: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510cc) {
            ctx->pc = 0x151140u;
            goto label_151140;
        }
    }
    ctx->pc = 0x1510D4u;
label_1510d4:
    // 0x1510d4: 0xc053960  jal         func_14E580
    ctx->pc = 0x1510D4u;
    SET_GPR_U32(ctx, 31, 0x1510DCu);
    ctx->pc = 0x14E580u;
    if (runtime->hasFunction(0x14E580u)) {
        auto targetFn = runtime->lookupFunction(0x14E580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1510DCu; }
        if (ctx->pc != 0x1510DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E580_0x14e580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1510DCu; }
        if (ctx->pc != 0x1510DCu) { return; }
    }
    ctx->pc = 0x1510DCu;
label_1510dc:
    // 0x1510dc: 0xc052da0  jal         func_14B680
    ctx->pc = 0x1510DCu;
    SET_GPR_U32(ctx, 31, 0x1510E4u);
    ctx->pc = 0x1510E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1510DCu;
            // 0x1510e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1510E4u; }
        if (ctx->pc != 0x1510E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1510E4u; }
        if (ctx->pc != 0x1510E4u) { return; }
    }
    ctx->pc = 0x1510E4u;
label_1510e4:
    // 0x1510e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1510E4u;
    {
        const bool branch_taken_0x1510e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510e4) {
            ctx->pc = 0x15113Cu;
            goto label_15113c;
        }
    }
    ctx->pc = 0x1510ECu;
label_1510ec:
    // 0x1510ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1510ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1510f0: 0xc052da0  jal         func_14B680
    ctx->pc = 0x1510F0u;
    SET_GPR_U32(ctx, 31, 0x1510F8u);
    ctx->pc = 0x1510F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1510F0u;
            // 0x1510f4: 0x8c445774  lw          $a0, 0x5774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1510F8u; }
        if (ctx->pc != 0x1510F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1510F8u; }
        if (ctx->pc != 0x1510F8u) { return; }
    }
    ctx->pc = 0x1510F8u;
label_1510f8:
    // 0x1510f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1510F8u;
    {
        const bool branch_taken_0x1510f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510f8) {
            ctx->pc = 0x15113Cu;
            goto label_15113c;
        }
    }
    ctx->pc = 0x151100u;
label_151100:
    // 0x151100: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x151100u;
    {
        const bool branch_taken_0x151100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151100) {
            ctx->pc = 0x151104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151100u;
            // 0x151104: 0xc78f8364  lwc1        $f15, -0x7C9C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x151128u;
            goto label_151128;
        }
    }
    ctx->pc = 0x151108u;
    // 0x151108: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15110c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15110cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x151110: 0xc78f8364  lwc1        $f15, -0x7C9C($gp)
    ctx->pc = 0x151110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x151114: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x151114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x151118: 0xc052d48  jal         func_14B520
    ctx->pc = 0x151118u;
    SET_GPR_U32(ctx, 31, 0x151120u);
    ctx->pc = 0x15111Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151118u;
            // 0x15111c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151120u; }
        if (ctx->pc != 0x151120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151120u; }
        if (ctx->pc != 0x151120u) { return; }
    }
    ctx->pc = 0x151120u;
label_151120:
    // 0x151120: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151120u;
    {
        const bool branch_taken_0x151120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151120) {
            ctx->pc = 0x15113Cu;
            goto label_15113c;
        }
    }
    ctx->pc = 0x151128u;
label_151128:
    // 0x151128: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15112c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15112cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x151130: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x151130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x151134: 0xc052d48  jal         func_14B520
    ctx->pc = 0x151134u;
    SET_GPR_U32(ctx, 31, 0x15113Cu);
    ctx->pc = 0x151138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151134u;
            // 0x151138: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15113Cu; }
        if (ctx->pc != 0x15113Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15113Cu; }
        if (ctx->pc != 0x15113Cu) { return; }
    }
    ctx->pc = 0x15113Cu;
label_15113c:
    // 0x15113c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15113cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_151140:
    // 0x151140: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x151140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x151144: 0x34631fff  ori         $v1, $v1, 0x1FFF
    ctx->pc = 0x151144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8191);
    // 0x151148: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x151148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15114c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x15114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x151150: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x151150u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_151154:
    // 0x151154: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151158: 0x8c425844  lw          $v0, 0x5844($v0)
    ctx->pc = 0x151158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22596)));
    // 0x15115c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15115Cu;
    {
        const bool branch_taken_0x15115c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x15115c) {
            ctx->pc = 0x151174u;
            goto label_151174;
        }
    }
    ctx->pc = 0x151164u;
    // 0x151164: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15116c: 0xc04fd58  jal         func_13F560
    ctx->pc = 0x15116Cu;
    SET_GPR_U32(ctx, 31, 0x151174u);
    ctx->pc = 0x151170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15116Cu;
            // 0x151170: 0xac505844  sw          $s0, 0x5844($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F560u;
    if (runtime->hasFunction(0x13F560u)) {
        auto targetFn = runtime->lookupFunction(0x13F560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151174u; }
        if (ctx->pc != 0x151174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F560_0x13f560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151174u; }
        if (ctx->pc != 0x151174u) { return; }
    }
    ctx->pc = 0x151174u;
label_151174:
    // 0x151174: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x151174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x151178: 0x8c425814  lw          $v0, 0x5814($v0)
    ctx->pc = 0x151178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x15117c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x151180: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x151180u;
    {
        const bool branch_taken_0x151180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151180) {
            ctx->pc = 0x151184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151180u;
            // 0x151184: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1511E8u;
            goto label_1511e8;
        }
    }
    ctx->pc = 0x151188u;
    // 0x151188: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x151188u;
    SET_GPR_U32(ctx, 31, 0x151190u);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151190u; }
        if (ctx->pc != 0x151190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151190u; }
        if (ctx->pc != 0x151190u) { return; }
    }
    ctx->pc = 0x151190u;
label_151190:
    // 0x151190: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x151190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x151194: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x151194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x151198: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x151198u;
    {
        const bool branch_taken_0x151198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x151198) {
            ctx->pc = 0x15119Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151198u;
            // 0x15119c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1511F4u;
            goto label_1511f4;
        }
    }
    ctx->pc = 0x1511A0u;
    // 0x1511a0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1511a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1511a4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1511A4u;
    {
        const bool branch_taken_0x1511a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1511a4) {
            ctx->pc = 0x1511F0u;
            goto label_1511f0;
        }
    }
    ctx->pc = 0x1511ACu;
    // 0x1511ac: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1511acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1511b0: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1511B0u;
    {
        const bool branch_taken_0x1511b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1511b0) {
            ctx->pc = 0x1511F0u;
            goto label_1511f0;
        }
    }
    ctx->pc = 0x1511B8u;
    // 0x1511b8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1511b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1511bc: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1511BCu;
    {
        const bool branch_taken_0x1511bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1511bc) {
            ctx->pc = 0x1511C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1511BCu;
            // 0x1511c0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1511D8u;
            goto label_1511d8;
        }
    }
    ctx->pc = 0x1511C4u;
    // 0x1511c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1511c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1511c8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1511C8u;
    {
        const bool branch_taken_0x1511c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1511c8) {
            ctx->pc = 0x1511F0u;
            goto label_1511f0;
        }
    }
    ctx->pc = 0x1511D0u;
    // 0x1511d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1511D0u;
    {
        const bool branch_taken_0x1511d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1511d0) {
            ctx->pc = 0x1511F0u;
            goto label_1511f0;
        }
    }
    ctx->pc = 0x1511D8u;
label_1511d8:
    // 0x1511d8: 0xc054084  jal         func_150210
    ctx->pc = 0x1511D8u;
    SET_GPR_U32(ctx, 31, 0x1511E0u);
    ctx->pc = 0x1511DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1511D8u;
            // 0x1511dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150210u;
    if (runtime->hasFunction(0x150210u)) {
        auto targetFn = runtime->lookupFunction(0x150210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511E0u; }
        if (ctx->pc != 0x1511E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150210_0x150210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511E0u; }
        if (ctx->pc != 0x1511E0u) { return; }
    }
    ctx->pc = 0x1511E0u;
label_1511e0:
    // 0x1511e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1511E0u;
    {
        const bool branch_taken_0x1511e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1511e0) {
            ctx->pc = 0x1511F0u;
            goto label_1511f0;
        }
    }
    ctx->pc = 0x1511E8u;
label_1511e8:
    // 0x1511e8: 0xc053e3c  jal         func_14F8F0
    ctx->pc = 0x1511E8u;
    SET_GPR_U32(ctx, 31, 0x1511F0u);
    ctx->pc = 0x1511ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1511E8u;
            // 0x1511ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F8F0u;
    if (runtime->hasFunction(0x14F8F0u)) {
        auto targetFn = runtime->lookupFunction(0x14F8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511F0u; }
        if (ctx->pc != 0x1511F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014F8F0_0x14f8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1511F0u; }
        if (ctx->pc != 0x1511F0u) { return; }
    }
    ctx->pc = 0x1511F0u;
label_1511f0:
    // 0x1511f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1511f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1511f4:
    // 0x1511f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1511f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1511f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1511f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1511fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1511fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151204: 0x3e00008  jr          $ra
    ctx->pc = 0x151204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151204u;
            // 0x151208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15120Cu;
    // 0x15120c: 0x0  nop
    ctx->pc = 0x15120cu;
    // NOP
}
