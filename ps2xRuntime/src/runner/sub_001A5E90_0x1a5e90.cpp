#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5E90
// Address: 0x1a5e90 - 0x1a6420
void sub_001A5E90_0x1a5e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5E90_0x1a5e90");
#endif

    switch (ctx->pc) {
        case 0x1a5f28u: goto label_1a5f28;
        case 0x1a5f3cu: goto label_1a5f3c;
        case 0x1a5f74u: goto label_1a5f74;
        case 0x1a60d0u: goto label_1a60d0;
        case 0x1a60e0u: goto label_1a60e0;
        case 0x1a6130u: goto label_1a6130;
        case 0x1a6144u: goto label_1a6144;
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a6214u: goto label_1a6214;
        case 0x1a6378u: goto label_1a6378;
        case 0x1a6388u: goto label_1a6388;
        case 0x1a63d4u: goto label_1a63d4;
        case 0x1a63e8u: goto label_1a63e8;
        default: break;
    }

    ctx->pc = 0x1a5e90u;

    // 0x1a5e90: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a5e94: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5e98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5e9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5ea0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5ea4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a5ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5ea8: 0x24841390  addiu       $a0, $a0, 0x1390
    ctx->pc = 0x1a5ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
    // 0x1a5eac: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1a5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a5eb0: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5EB0u;
    {
        const bool branch_taken_0x1a5eb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5EB0u;
            // 0x1a5eb4: 0x461821  addu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5eb0) {
            ctx->pc = 0x1A5EBCu;
            goto label_1a5ebc;
        }
    }
    ctx->pc = 0x1A5EB8u;
    // 0x1a5eb8: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1a5eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_1a5ebc:
    // 0x1a5ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5EC4u;
    // 0x1a5ec4: 0x0  nop
    ctx->pc = 0x1a5ec4u;
    // NOP
    // 0x1a5ec8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a5ecc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a5eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a5ed0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5ed4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1a5ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1a5ed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5edc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a5edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a5ee0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5ee4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a5ee8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a5ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a5eec: 0x24871380  addiu       $a3, $a0, 0x1380
    ctx->pc = 0x1a5eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x1a5ef0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a5ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1a5ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5ef8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a5efc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1a5efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a5f00: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1a5f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1a5f04: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1a5f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1a5f08: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1a5f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1a5f0c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1a5f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1a5f10: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1a5f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a5f14: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5F14u;
    {
        const bool branch_taken_0x1a5f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F14u;
            // 0x1a5f18: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f14) {
            ctx->pc = 0x1A5F30u;
            goto label_1a5f30;
        }
    }
    ctx->pc = 0x1A5F1Cu;
    // 0x1a5f1c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a5f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a5f20: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A5F20u;
    SET_GPR_U32(ctx, 31, 0x1A5F28u);
    ctx->pc = 0x1A5F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F20u;
            // 0x1a5f24: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F28u; }
        if (ctx->pc != 0x1A5F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F28u; }
        if (ctx->pc != 0x1A5F28u) { return; }
    }
    ctx->pc = 0x1A5F28u;
label_1a5f28:
    // 0x1a5f28: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1A5F28u;
    {
        const bool branch_taken_0x1a5f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F28u;
            // 0x1a5f2c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f28) {
            ctx->pc = 0x1A6044u;
            goto label_1a6044;
        }
    }
    ctx->pc = 0x1A5F30u;
label_1a5f30:
    // 0x1a5f30: 0x24f00010  addiu       $s0, $a3, 0x10
    ctx->pc = 0x1a5f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1a5f34: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A5F34u;
    SET_GPR_U32(ctx, 31, 0x1A5F3Cu);
    ctx->pc = 0x1A5F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F34u;
            // 0x1a5f38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F3Cu; }
        if (ctx->pc != 0x1A5F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F3Cu; }
        if (ctx->pc != 0x1A5F3Cu) { return; }
    }
    ctx->pc = 0x1A5F3Cu;
label_1a5f3c:
    // 0x1a5f3c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a5f40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f44: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a5f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a5f48: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1a5f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a5f4c: 0x8e13002c  lw          $s3, 0x2C($s0)
    ctx->pc = 0x1a5f4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a5f50: 0x8e14001c  lw          $s4, 0x1C($s0)
    ctx->pc = 0x1a5f50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a5f54: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1a5f54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a5f58: 0x8e17000c  lw          $s7, 0xC($s0)
    ctx->pc = 0x1a5f58u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a5f5c: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1a5f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a5f60: 0x8e1e0014  lw          $fp, 0x14($s0)
    ctx->pc = 0x1a5f60u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a5f64: 0x8e160020  lw          $s6, 0x20($s0)
    ctx->pc = 0x1a5f64u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a5f68: 0x7fa50010  sq          $a1, 0x10($sp)
    ctx->pc = 0x1a5f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 5));
    // 0x1a5f6c: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A5F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5F74u);
    ctx->pc = 0x1A5F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F6Cu;
            // 0x1a5f70: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F74u; }
        if (ctx->pc != 0x1A5F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5F74u; }
        if (ctx->pc != 0x1A5F74u) { return; }
    }
    ctx->pc = 0x1A5F74u;
label_1a5f74:
    // 0x1a5f74: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1a5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a5f78: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x1a5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1a5f7c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a5f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5f80: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x1a5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x1a5f84: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1a5f84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1a5f88: 0xaeb70004  sw          $s7, 0x4($s5)
    ctx->pc = 0x1a5f88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
    // 0x1a5f8c: 0xaeb10024  sw          $s1, 0x24($s5)
    ctx->pc = 0x1a5f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 17));
    // 0x1a5f90: 0xaeb30028  sw          $s3, 0x28($s5)
    ctx->pc = 0x1a5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
    // 0x1a5f94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5F94u;
    {
        const bool branch_taken_0x1a5f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5F94u;
            // 0x1a5f98: 0x7ba50010  lq          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f94) {
            ctx->pc = 0x1A5FB0u;
            goto label_1a5fb0;
        }
    }
    ctx->pc = 0x1A5F9Cu;
    // 0x1a5f9c: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1a5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x1a5fa0: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x1a5fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x1a5fa4: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x1a5fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1a5fa8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5FA8u;
    {
        const bool branch_taken_0x1a5fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FA8u;
            // 0x1a5fac: 0xaea00018  sw          $zero, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fa8) {
            ctx->pc = 0x1A5FF4u;
            goto label_1a5ff4;
        }
    }
    ctx->pc = 0x1A5FB0u;
label_1a5fb0:
    // 0x1a5fb0: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x1a5fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a5fb4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5FB4u;
    {
        const bool branch_taken_0x1a5fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5fb4) {
            ctx->pc = 0x1A5FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FB4u;
            // 0x1a5fb8: 0x2961023  subu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6000u;
            goto label_1a6000;
        }
    }
    ctx->pc = 0x1A5FBCu;
    // 0x1a5fbc: 0x2161023  subu        $v0, $s0, $s6
    ctx->pc = 0x1a5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x1a5fc0: 0x2ae30009  slti        $v1, $s7, 0x9
    ctx->pc = 0x1a5fc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a5fc4: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1a5fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1a5fc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5FC8u;
    {
        const bool branch_taken_0x1a5fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FC8u;
            // 0x1a5fcc: 0x3d61021  addu        $v0, $fp, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fc8) {
            ctx->pc = 0x1A5FD8u;
            goto label_1a5fd8;
        }
    }
    ctx->pc = 0x1A5FD0u;
    // 0x1a5fd0: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1a5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1a5fd4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1a5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1a5fd8:
    // 0x1a5fd8: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1a5fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1a5fdc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5FDCu;
    {
        const bool branch_taken_0x1a5fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FDCu;
            // 0x1a5fe0: 0xb61021  addu        $v0, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fdc) {
            ctx->pc = 0x1A5FECu;
            goto label_1a5fec;
        }
    }
    ctx->pc = 0x1A5FE4u;
    // 0x1a5fe4: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1a5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1a5fe8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a5fec:
    // 0x1a5fec: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x1a5fecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1a5ff0: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1a5ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_1a5ff4:
    // 0x1a5ff4: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1a5ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x1a5ff8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5FF8u;
    {
        const bool branch_taken_0x1a5ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5FF8u;
            // 0x1a5ffc: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff8) {
            ctx->pc = 0x1A603Cu;
            goto label_1a603c;
        }
    }
    ctx->pc = 0x1A6000u;
label_1a6000:
    // 0x1a6000: 0x2ae30009  slti        $v1, $s7, 0x9
    ctx->pc = 0x1a6000u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a6004: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1a6004u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1a6008: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6008u;
    {
        const bool branch_taken_0x1a6008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A600Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6008u;
            // 0x1a600c: 0x3d61021  addu        $v0, $fp, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6008) {
            ctx->pc = 0x1A6018u;
            goto label_1a6018;
        }
    }
    ctx->pc = 0x1A6010u;
    // 0x1a6010: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1a6010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1a6014: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1a6014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1a6018:
    // 0x1a6018: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1a6018u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1a601c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A601Cu;
    {
        const bool branch_taken_0x1a601c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A601Cu;
            // 0x1a6020: 0xb61021  addu        $v0, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a601c) {
            ctx->pc = 0x1A602Cu;
            goto label_1a602c;
        }
    }
    ctx->pc = 0x1A6024u;
    // 0x1a6024: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1a6024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1a6028: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a6028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a602c:
    // 0x1a602c: 0xaea50020  sw          $a1, 0x20($s5)
    ctx->pc = 0x1a602cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 5));
    // 0x1a6030: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x1a6030u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1a6034: 0xaeb00010  sw          $s0, 0x10($s5)
    ctx->pc = 0x1a6034u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 16));
    // 0x1a6038: 0xaebe001c  sw          $fp, 0x1C($s5)
    ctx->pc = 0x1a6038u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 30));
label_1a603c:
    // 0x1a603c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a603cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6040: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a6040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6044:
    // 0x1a6044: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a6044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6048: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a6048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a604c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a604cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a6050: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a6050u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6054: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1a6054u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a6058: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1a6058u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a605c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1a605cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a6060: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1a6060u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a6064: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1a6064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a6068: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6068u;
            // 0x1a606c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6070u;
    // 0x1a6070: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a6070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a6074: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6078: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a6078u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a607c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a6080: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6084: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a6084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6088: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a6088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a608c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a6090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6094: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a6094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6098: 0x26461380  addiu       $a2, $s2, 0x1380
    ctx->pc = 0x1a6098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4992));
    // 0x1a609c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a609cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a60a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a60a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a60a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a60a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a60a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a60ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a60acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60b0: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A60B0u;
    {
        const bool branch_taken_0x1a60b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60B0u;
            // 0x1a60b4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60b0) {
            ctx->pc = 0x1A6148u;
            goto label_1a6148;
        }
    }
    ctx->pc = 0x1A60B8u;
    // 0x1a60b8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a60bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A60BCu;
    {
        const bool branch_taken_0x1a60bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a60bc) {
            ctx->pc = 0x1A60C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60BCu;
            // 0x1a60c0: 0x24d00010  addiu       $s0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A60D8u;
            goto label_1a60d8;
        }
    }
    ctx->pc = 0x1A60C4u;
    // 0x1a60c4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a60c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a60c8: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A60C8u;
    SET_GPR_U32(ctx, 31, 0x1A60D0u);
    ctx->pc = 0x1A60CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60C8u;
            // 0x1a60cc: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60D0u; }
        if (ctx->pc != 0x1A60D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60D0u; }
        if (ctx->pc != 0x1A60D0u) { return; }
    }
    ctx->pc = 0x1A60D0u;
label_1a60d0:
    // 0x1a60d0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A60D0u;
    {
        const bool branch_taken_0x1a60d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60D0u;
            // 0x1a60d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60d0) {
            ctx->pc = 0x1A614Cu;
            goto label_1a614c;
        }
    }
    ctx->pc = 0x1A60D8u;
label_1a60d8:
    // 0x1a60d8: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A60D8u;
    SET_GPR_U32(ctx, 31, 0x1A60E0u);
    ctx->pc = 0x1A60DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A60D8u;
            // 0x1a60dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60E0u; }
        if (ctx->pc != 0x1A60E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A60E0u; }
        if (ctx->pc != 0x1A60E0u) { return; }
    }
    ctx->pc = 0x1A60E0u;
label_1a60e0:
    // 0x1a60e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a60e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60e4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a60e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a60e8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a60ec: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a60ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a60f0: 0x34a50406  ori         $a1, $a1, 0x406
    ctx->pc = 0x1a60f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
    // 0x1a60f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a60f8: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1a60f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a60fc: 0x463823  subu        $a3, $v0, $a2
    ctx->pc = 0x1a60fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a6100: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6100u;
    {
        const bool branch_taken_0x1a6100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6100u;
            // 0x1a6104: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6100) {
            ctx->pc = 0x1A610Cu;
            goto label_1a610c;
        }
    }
    ctx->pc = 0x1A6108u;
    // 0x1a6108: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x1a6108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
label_1a610c:
    // 0x1a610c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a6110: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1a6110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a6114: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a6114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a6118: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1a6118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a611c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a611cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a6120: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6120u;
    {
        const bool branch_taken_0x1a6120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6120u;
            // 0x1a6124: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6120) {
            ctx->pc = 0x1A6134u;
            goto label_1a6134;
        }
    }
    ctx->pc = 0x1A6128u;
    // 0x1a6128: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A6128u;
    SET_GPR_U32(ctx, 31, 0x1A6130u);
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6130u; }
        if (ctx->pc != 0x1A6130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6130u; }
        if (ctx->pc != 0x1A6130u) { return; }
    }
    ctx->pc = 0x1A6130u;
label_1a6130:
    // 0x1a6130: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a6130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6134:
    // 0x1a6134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6138: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a6138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a613c: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A613Cu;
    SET_GPR_U32(ctx, 31, 0x1A6144u);
    ctx->pc = 0x1A6140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A613Cu;
            // 0x1a6140: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6144u; }
        if (ctx->pc != 0x1A6144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6144u; }
        if (ctx->pc != 0x1A6144u) { return; }
    }
    ctx->pc = 0x1A6144u;
label_1a6144:
    // 0x1a6144: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1a6144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a6148:
    // 0x1a6148: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a6148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a614c:
    // 0x1a614c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a614cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a6150: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6154: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a6154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a6158: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a6158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a615c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A615Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A615Cu;
            // 0x1a6160: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6164u;
    // 0x1a6164: 0x0  nop
    ctx->pc = 0x1a6164u;
    // NOP
    // 0x1a6168: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a6168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a616c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a616cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a6170: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a6170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6174: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a6174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1a6178: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a617c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a6180: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a6180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a6184: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a6184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a6188: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a618c: 0x24871380  addiu       $a3, $a0, 0x1380
    ctx->pc = 0x1a618cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x1a6190: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a6190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a6194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6198: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a6198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a619c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1a619cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a61a0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1a61a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1a61a4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1a61a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1a61a8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1a61a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1a61ac: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1a61acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1a61b0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1a61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1a61b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A61B4u;
    {
        const bool branch_taken_0x1a61b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A61B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61B4u;
            // 0x1a61b8: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61b4) {
            ctx->pc = 0x1A61D0u;
            goto label_1a61d0;
        }
    }
    ctx->pc = 0x1A61BCu;
    // 0x1a61bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a61bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a61c0: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A61C0u;
    SET_GPR_U32(ctx, 31, 0x1A61C8u);
    ctx->pc = 0x1A61C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61C0u;
            // 0x1a61c4: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61C8u; }
        if (ctx->pc != 0x1A61C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61C8u; }
        if (ctx->pc != 0x1A61C8u) { return; }
    }
    ctx->pc = 0x1A61C8u;
label_1a61c8:
    // 0x1a61c8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1A61C8u;
    {
        const bool branch_taken_0x1a61c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61C8u;
            // 0x1a61cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c8) {
            ctx->pc = 0x1A62ECu;
            goto label_1a62ec;
        }
    }
    ctx->pc = 0x1A61D0u;
label_1a61d0:
    // 0x1a61d0: 0x24f00010  addiu       $s0, $a3, 0x10
    ctx->pc = 0x1a61d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1a61d4: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A61D4u;
    SET_GPR_U32(ctx, 31, 0x1A61DCu);
    ctx->pc = 0x1A61D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A61D4u;
            // 0x1a61d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61DCu; }
        if (ctx->pc != 0x1A61DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A61DCu; }
        if (ctx->pc != 0x1A61DCu) { return; }
    }
    ctx->pc = 0x1A61DCu;
label_1a61dc:
    // 0x1a61dc: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x1a61dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a61e0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a61e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a61e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a61e8: 0x8e13002c  lw          $s3, 0x2C($s0)
    ctx->pc = 0x1a61e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a61ec: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x1a61ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a61f0: 0x8e16000c  lw          $s6, 0xC($s0)
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a61f4: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1a61f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a61f8: 0x8e170014  lw          $s7, 0x14($s0)
    ctx->pc = 0x1a61f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a61fc: 0x8e1e0018  lw          $fp, 0x18($s0)
    ctx->pc = 0x1a61fcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1a6200: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a6200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a6204: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a6204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a6208: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a6208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a620c: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A620Cu;
    SET_GPR_U32(ctx, 31, 0x1A6214u);
    ctx->pc = 0x1A6210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A620Cu;
            // 0x1a6210: 0x8e100024  lw          $s0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6214u; }
        if (ctx->pc != 0x1A6214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6214u; }
        if (ctx->pc != 0x1A6214u) { return; }
    }
    ctx->pc = 0x1A6214u;
label_1a6214:
    // 0x1a6214: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x1a6214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1a6218: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x1a6218u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1a621c: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x1a621cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x1a6220: 0xaeb60004  sw          $s6, 0x4($s5)
    ctx->pc = 0x1a6220u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 22));
    // 0x1a6224: 0xaeb10024  sw          $s1, 0x24($s5)
    ctx->pc = 0x1a6224u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 17));
    // 0x1a6228: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6228u;
    {
        const bool branch_taken_0x1a6228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6228u;
            // 0x1a622c: 0xaeb30028  sw          $s3, 0x28($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6228) {
            ctx->pc = 0x1A6248u;
            goto label_1a6248;
        }
    }
    ctx->pc = 0x1A6230u;
    // 0x1a6230: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1a6230u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
    // 0x1a6234: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x1a6234u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x1a6238: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x1a6238u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x1a623c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A623Cu;
    {
        const bool branch_taken_0x1a623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A623Cu;
            // 0x1a6240: 0xaea00018  sw          $zero, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a623c) {
            ctx->pc = 0x1A6290u;
            goto label_1a6290;
        }
    }
    ctx->pc = 0x1A6244u;
    // 0x1a6244: 0x0  nop
    ctx->pc = 0x1a6244u;
    // NOP
label_1a6248:
    // 0x1a6248: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a6248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a624c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1a624cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a6250: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6250u;
    {
        const bool branch_taken_0x1a6250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6250) {
            ctx->pc = 0x1A6254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6250u;
            // 0x1a6254: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A62A0u;
            goto label_1a62a0;
        }
    }
    ctx->pc = 0x1A6258u;
    // 0x1a6258: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a6258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a625c: 0x2ac30009  slti        $v1, $s6, 0x9
    ctx->pc = 0x1a625cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a6260: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1a6260u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1a6264: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6264u;
    {
        const bool branch_taken_0x1a6264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6264u;
            // 0x1a6268: 0x2f01021  addu        $v0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6264) {
            ctx->pc = 0x1A6274u;
            goto label_1a6274;
        }
    }
    ctx->pc = 0x1A626Cu;
    // 0x1a626c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a626cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a6270: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1a6270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1a6274:
    // 0x1a6274: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1a6274u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1a6278: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6278u;
    {
        const bool branch_taken_0x1a6278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6278u;
            // 0x1a627c: 0x3d01021  addu        $v0, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6278) {
            ctx->pc = 0x1A6288u;
            goto label_1a6288;
        }
    }
    ctx->pc = 0x1A6280u;
    // 0x1a6280: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a6280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a6284: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1a6284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1a6288:
    // 0x1a6288: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x1a6288u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1a628c: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x1a628cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_1a6290:
    // 0x1a6290: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x1a6290u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x1a6294: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6294u;
    {
        const bool branch_taken_0x1a6294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6294u;
            // 0x1a6298: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6294) {
            ctx->pc = 0x1A62E4u;
            goto label_1a62e4;
        }
    }
    ctx->pc = 0x1A629Cu;
    // 0x1a629c: 0x0  nop
    ctx->pc = 0x1a629cu;
    // NOP
label_1a62a0:
    // 0x1a62a0: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x1a62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a62a4: 0x2ac30009  slti        $v1, $s6, 0x9
    ctx->pc = 0x1a62a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a62a8: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1a62a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1a62ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A62ACu;
    {
        const bool branch_taken_0x1a62ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A62B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62ACu;
            // 0x1a62b0: 0x2f01021  addu        $v0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62ac) {
            ctx->pc = 0x1A62BCu;
            goto label_1a62bc;
        }
    }
    ctx->pc = 0x1A62B4u;
    // 0x1a62b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a62b8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1a62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1a62bc:
    // 0x1a62bc: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x1a62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x1a62c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A62C0u;
    {
        const bool branch_taken_0x1a62c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A62C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A62C0u;
            // 0x1a62c4: 0x3d01021  addu        $v0, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62c0) {
            ctx->pc = 0x1A62D0u;
            goto label_1a62d0;
        }
    }
    ctx->pc = 0x1A62C8u;
    // 0x1a62c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a62cc: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1a62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1a62d0:
    // 0x1a62d0: 0xaebe0020  sw          $fp, 0x20($s5)
    ctx->pc = 0x1a62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 30));
    // 0x1a62d4: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x1a62d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x1a62d8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1a62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a62dc: 0xaeb7001c  sw          $s7, 0x1C($s5)
    ctx->pc = 0x1a62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 23));
    // 0x1a62e0: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x1a62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_1a62e4:
    // 0x1a62e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a62e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a62e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a62ec:
    // 0x1a62ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a62ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a62f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a62f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a62f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a62f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a62f8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a62f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a62fc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a62fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a6300: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1a6300u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a6304: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1a6304u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a6308: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1a6308u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a630c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1a630cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a6310: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6310u;
            // 0x1a6314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6318u;
    // 0x1a6318: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a6318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a631c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a631cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a6320: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a6320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a6324: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a6328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a632c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a632cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6330: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a6330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a6334: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a6334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a6338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a633c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a633cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6340: 0x26461380  addiu       $a2, $s2, 0x1380
    ctx->pc = 0x1a6340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4992));
    // 0x1a6344: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a6344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a6348: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a6348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a634c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a634cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6350: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a6350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a6354: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a6354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6358: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A6358u;
    {
        const bool branch_taken_0x1a6358 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A635Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6358u;
            // 0x1a635c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6358) {
            ctx->pc = 0x1A63ECu;
            goto label_1a63ec;
        }
    }
    ctx->pc = 0x1A6360u;
    // 0x1a6360: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a6360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1a6364: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6364u;
    {
        const bool branch_taken_0x1a6364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6364) {
            ctx->pc = 0x1A6368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6364u;
            // 0x1a6368: 0x24d00010  addiu       $s0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A6380u;
            goto label_1a6380;
        }
    }
    ctx->pc = 0x1A636Cu;
    // 0x1a636c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a636cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a6370: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A6370u;
    SET_GPR_U32(ctx, 31, 0x1A6378u);
    ctx->pc = 0x1A6374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6370u;
            // 0x1a6374: 0x34a50401  ori         $a1, $a1, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1025);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6378u; }
        if (ctx->pc != 0x1A6378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6378u; }
        if (ctx->pc != 0x1A6378u) { return; }
    }
    ctx->pc = 0x1A6378u;
label_1a6378:
    // 0x1a6378: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A6378u;
    {
        const bool branch_taken_0x1a6378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A637Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6378u;
            // 0x1a637c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6378) {
            ctx->pc = 0x1A63F0u;
            goto label_1a63f0;
        }
    }
    ctx->pc = 0x1A6380u;
label_1a6380:
    // 0x1a6380: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1A6380u;
    SET_GPR_U32(ctx, 31, 0x1A6388u);
    ctx->pc = 0x1A6384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6380u;
            // 0x1a6384: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6388u; }
        if (ctx->pc != 0x1A6388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A6388u; }
        if (ctx->pc != 0x1A6388u) { return; }
    }
    ctx->pc = 0x1A6388u;
label_1a6388:
    // 0x1a6388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a6388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a638c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a6390: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a6390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a6394: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a6394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a6398: 0x34a50407  ori         $a1, $a1, 0x407
    ctx->pc = 0x1a6398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1031);
    // 0x1a639c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a63a0: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x1a63a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a63a4: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1a63a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a63a8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A63A8u;
    {
        const bool branch_taken_0x1a63a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A63ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63A8u;
            // 0x1a63ac: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63a8) {
            ctx->pc = 0x1A63B4u;
            goto label_1a63b4;
        }
    }
    ctx->pc = 0x1A63B0u;
    // 0x1a63b0: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x1a63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
label_1a63b4:
    // 0x1a63b4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1a63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1a63b8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1a63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a63bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a63c0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a63c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a63c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A63C4u;
    {
        const bool branch_taken_0x1a63c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63C4u;
            // 0x1a63c8: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63c4) {
            ctx->pc = 0x1A63D8u;
            goto label_1a63d8;
        }
    }
    ctx->pc = 0x1A63CCu;
    // 0x1a63cc: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A63CCu;
    SET_GPR_U32(ctx, 31, 0x1A63D4u);
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63D4u; }
        if (ctx->pc != 0x1A63D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63D4u; }
        if (ctx->pc != 0x1A63D4u) { return; }
    }
    ctx->pc = 0x1A63D4u;
label_1a63d4:
    // 0x1a63d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a63d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a63d8:
    // 0x1a63d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a63dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a63dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a63e0: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1A63E0u;
    SET_GPR_U32(ctx, 31, 0x1A63E8u);
    ctx->pc = 0x1A63E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A63E0u;
            // 0x1a63e4: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63E8u; }
        if (ctx->pc != 0x1A63E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A63E8u; }
        if (ctx->pc != 0x1A63E8u) { return; }
    }
    ctx->pc = 0x1A63E8u;
label_1a63e8:
    // 0x1a63e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1a63e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a63ec:
    // 0x1a63ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a63ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a63f0:
    // 0x1a63f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a63f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a63f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a63f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a63f8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a63f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a63fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a63fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6400: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6400u;
            // 0x1a6404: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6408u;
    // 0x1a6408: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A640Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6408u;
            // 0x1a640c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6410u;
    // 0x1a6410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6414: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x1a6414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x1a6418: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6418u;
            // 0x1a641c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6420u;
}
