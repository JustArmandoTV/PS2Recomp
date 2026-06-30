#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5E70
// Address: 0x2b5e70 - 0x2b6270
void sub_002B5E70_0x2b5e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5E70_0x2b5e70");
#endif

    switch (ctx->pc) {
        case 0x2b5ef4u: goto label_2b5ef4;
        case 0x2b5f08u: goto label_2b5f08;
        case 0x2b5f10u: goto label_2b5f10;
        case 0x2b5f14u: goto label_2b5f14;
        case 0x2b5f30u: goto label_2b5f30;
        case 0x2b5f48u: goto label_2b5f48;
        case 0x2b5f54u: goto label_2b5f54;
        case 0x2b5f68u: goto label_2b5f68;
        case 0x2b5f80u: goto label_2b5f80;
        case 0x2b5f8cu: goto label_2b5f8c;
        case 0x2b5fc0u: goto label_2b5fc0;
        case 0x2b5ff0u: goto label_2b5ff0;
        case 0x2b6000u: goto label_2b6000;
        case 0x2b60c0u: goto label_2b60c0;
        case 0x2b60ccu: goto label_2b60cc;
        case 0x2b60d4u: goto label_2b60d4;
        case 0x2b611cu: goto label_2b611c;
        case 0x2b6128u: goto label_2b6128;
        case 0x2b6134u: goto label_2b6134;
        case 0x2b6140u: goto label_2b6140;
        case 0x2b6154u: goto label_2b6154;
        case 0x2b6168u: goto label_2b6168;
        case 0x2b6178u: goto label_2b6178;
        case 0x2b61d4u: goto label_2b61d4;
        case 0x2b61e4u: goto label_2b61e4;
        case 0x2b61f8u: goto label_2b61f8;
        case 0x2b620cu: goto label_2b620c;
        case 0x2b623cu: goto label_2b623c;
        default: break;
    }

    ctx->pc = 0x2b5e70u;

    // 0x2b5e70: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2b5e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x2b5e74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2b5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2b5e78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b5e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b5e7c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2b5e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2b5e80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b5e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2b5e84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b5e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b5e88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b5e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b5e8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b5e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b5e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b5e94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b5e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b5e98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b5e98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b5e9c: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x2b5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x2b5ea0: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x2b5ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2b5ea4: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2b5ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2b5ea8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5EA8u;
    {
        const bool branch_taken_0x2b5ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5EA8u;
            // 0x2b5eac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ea8) {
            ctx->pc = 0x2B5EBCu;
            goto label_2b5ebc;
        }
    }
    ctx->pc = 0x2B5EB0u;
    // 0x2b5eb0: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x2b5eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2b5eb4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B5EB4u;
    {
        const bool branch_taken_0x2b5eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5eb4) {
            ctx->pc = 0x2B5EE8u;
            goto label_2b5ee8;
        }
    }
    ctx->pc = 0x2B5EBCu;
label_2b5ebc:
    // 0x2b5ebc: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x2b5ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2b5ec0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5EC0u;
    {
        const bool branch_taken_0x2b5ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ec0) {
            ctx->pc = 0x2B5EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5EC0u;
            // 0x2b5ec4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5ED8u;
            goto label_2b5ed8;
        }
    }
    ctx->pc = 0x2B5EC8u;
    // 0x2b5ec8: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2b5ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2b5ecc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5ECCu;
    {
        const bool branch_taken_0x2b5ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ecc) {
            ctx->pc = 0x2B5EE8u;
            goto label_2b5ee8;
        }
    }
    ctx->pc = 0x2B5ED4u;
    // 0x2b5ed4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b5ed8:
    // 0x2b5ed8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5ED8u;
    {
        const bool branch_taken_0x2b5ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b5ed8) {
            ctx->pc = 0x2B5EE8u;
            goto label_2b5ee8;
        }
    }
    ctx->pc = 0x2B5EE0u;
    // 0x2b5ee0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2B5EE0u;
    {
        const bool branch_taken_0x2b5ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ee0) {
            ctx->pc = 0x2B5FB0u;
            goto label_2b5fb0;
        }
    }
    ctx->pc = 0x2B5EE8u;
label_2b5ee8:
    // 0x2b5ee8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b5eec: 0xc0ae0e4  jal         func_2B8390
    ctx->pc = 0x2B5EECu;
    SET_GPR_U32(ctx, 31, 0x2B5EF4u);
    ctx->pc = 0x2B5EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5EECu;
            // 0x2b5ef0: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8390u;
    if (runtime->hasFunction(0x2B8390u)) {
        auto targetFn = runtime->lookupFunction(0x2B8390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EF4u; }
        if (ctx->pc != 0x2B5EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8390_0x2b8390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5EF4u; }
        if (ctx->pc != 0x2B5EF4u) { return; }
    }
    ctx->pc = 0x2B5EF4u;
label_2b5ef4:
    // 0x2b5ef4: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x2b5ef4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
    // 0x2b5ef8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b5ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5efc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b5efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f00: 0xc0775b0  jal         func_1DD6C0
    ctx->pc = 0x2B5F00u;
    SET_GPR_U32(ctx, 31, 0x2B5F08u);
    ctx->pc = 0x2B5F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F00u;
            // 0x2b5f04: 0x26730e84  addiu       $s3, $s3, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3716));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C0u;
    if (runtime->hasFunction(0x1DD6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F08u; }
        if (ctx->pc != 0x2B5F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6C0_0x1dd6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F08u; }
        if (ctx->pc != 0x2B5F08u) { return; }
    }
    ctx->pc = 0x2B5F08u;
label_2b5f08:
    // 0x2b5f08: 0xc0775ac  jal         func_1DD6B0
    ctx->pc = 0x2B5F08u;
    SET_GPR_U32(ctx, 31, 0x2B5F10u);
    ctx->pc = 0x2B5F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F08u;
            // 0x2b5f0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6B0u;
    if (runtime->hasFunction(0x1DD6B0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F10u; }
        if (ctx->pc != 0x2B5F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6B0_0x1dd6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F10u; }
        if (ctx->pc != 0x2B5F10u) { return; }
    }
    ctx->pc = 0x2B5F10u;
label_2b5f10:
    // 0x2b5f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f14:
    // 0x2b5f14: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2b5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b5f18: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5F18u;
    {
        const bool branch_taken_0x2b5f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b5f18) {
            ctx->pc = 0x2B5F28u;
            goto label_2b5f28;
        }
    }
    ctx->pc = 0x2B5F20u;
    // 0x2b5f20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B5F20u;
    {
        const bool branch_taken_0x2b5f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f20) {
            ctx->pc = 0x2B5F60u;
            goto label_2b5f60;
        }
    }
    ctx->pc = 0x2B5F28u;
label_2b5f28:
    // 0x2b5f28: 0xc040180  jal         func_100600
    ctx->pc = 0x2B5F28u;
    SET_GPR_U32(ctx, 31, 0x2B5F30u);
    ctx->pc = 0x2B5F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F28u;
            // 0x2b5f2c: 0x24041240  addiu       $a0, $zero, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F30u; }
        if (ctx->pc != 0x2B5F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F30u; }
        if (ctx->pc != 0x2B5F30u) { return; }
    }
    ctx->pc = 0x2B5F30u;
label_2b5f30:
    // 0x2b5f30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b5f30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f34: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5F34u;
    {
        const bool branch_taken_0x2b5f34 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f34) {
            ctx->pc = 0x2B5F58u;
            goto label_2b5f58;
        }
    }
    ctx->pc = 0x2B5F3Cu;
    // 0x2b5f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b5f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f40: 0xc0ae0e0  jal         func_2B8380
    ctx->pc = 0x2B5F40u;
    SET_GPR_U32(ctx, 31, 0x2B5F48u);
    ctx->pc = 0x2B5F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F40u;
            // 0x2b5f44: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8380u;
    if (runtime->hasFunction(0x2B8380u)) {
        auto targetFn = runtime->lookupFunction(0x2B8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F48u; }
        if (ctx->pc != 0x2B5F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8380_0x2b8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F48u; }
        if (ctx->pc != 0x2B5F48u) { return; }
    }
    ctx->pc = 0x2B5F48u;
label_2b5f48:
    // 0x2b5f48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b5f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5f4c: 0xc0adf88  jal         func_2B7E20
    ctx->pc = 0x2B5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F54u);
    ctx->pc = 0x2B5F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F4Cu;
            // 0x2b5f50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7E20u;
    if (runtime->hasFunction(0x2B7E20u)) {
        auto targetFn = runtime->lookupFunction(0x2B7E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F54u; }
        if (ctx->pc != 0x2B5F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7E20_0x2b7e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F54u; }
        if (ctx->pc != 0x2B5F54u) { return; }
    }
    ctx->pc = 0x2B5F54u;
label_2b5f54:
    // 0x2b5f54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b5f54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f58:
    // 0x2b5f58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B5F58u;
    {
        const bool branch_taken_0x2b5f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F58u;
            // 0x2b5f5c: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f58) {
            ctx->pc = 0x2B5F98u;
            goto label_2b5f98;
        }
    }
    ctx->pc = 0x2B5F60u;
label_2b5f60:
    // 0x2b5f60: 0xc040180  jal         func_100600
    ctx->pc = 0x2B5F60u;
    SET_GPR_U32(ctx, 31, 0x2B5F68u);
    ctx->pc = 0x2B5F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F60u;
            // 0x2b5f64: 0x24041240  addiu       $a0, $zero, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F68u; }
        if (ctx->pc != 0x2B5F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F68u; }
        if (ctx->pc != 0x2B5F68u) { return; }
    }
    ctx->pc = 0x2B5F68u;
label_2b5f68:
    // 0x2b5f68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b5f68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f6c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5F6Cu;
    {
        const bool branch_taken_0x2b5f6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f6c) {
            ctx->pc = 0x2B5F90u;
            goto label_2b5f90;
        }
    }
    ctx->pc = 0x2B5F74u;
    // 0x2b5f74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b5f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f78: 0xc0ae0e0  jal         func_2B8380
    ctx->pc = 0x2B5F78u;
    SET_GPR_U32(ctx, 31, 0x2B5F80u);
    ctx->pc = 0x2B5F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F78u;
            // 0x2b5f7c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8380u;
    if (runtime->hasFunction(0x2B8380u)) {
        auto targetFn = runtime->lookupFunction(0x2B8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F80u; }
        if (ctx->pc != 0x2B5F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8380_0x2b8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F80u; }
        if (ctx->pc != 0x2B5F80u) { return; }
    }
    ctx->pc = 0x2B5F80u;
label_2b5f80:
    // 0x2b5f80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b5f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5f84: 0xc0adc74  jal         func_2B71D0
    ctx->pc = 0x2B5F84u;
    SET_GPR_U32(ctx, 31, 0x2B5F8Cu);
    ctx->pc = 0x2B5F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5F84u;
            // 0x2b5f88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B71D0u;
    if (runtime->hasFunction(0x2B71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F8Cu; }
        if (ctx->pc != 0x2B5F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B71D0_0x2b71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5F8Cu; }
        if (ctx->pc != 0x2B5F8Cu) { return; }
    }
    ctx->pc = 0x2B5F8Cu;
label_2b5f8c:
    // 0x2b5f8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b5f8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f90:
    // 0x2b5f90: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x2b5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
    // 0x2b5f94: 0x0  nop
    ctx->pc = 0x2b5f94u;
    // NOP
label_2b5f98:
    // 0x2b5f98: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b5f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b5f9c: 0x291182b  sltu        $v1, $s4, $s1
    ctx->pc = 0x2b5f9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2b5fa0: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2B5FA0u;
    {
        const bool branch_taken_0x2b5fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FA0u;
            // 0x2b5fa4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fa0) {
            ctx->pc = 0x2B5F14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5f14;
        }
    }
    ctx->pc = 0x2B5FA8u;
    // 0x2b5fa8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2B5FA8u;
    {
        const bool branch_taken_0x2b5fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FA8u;
            // 0x2b5fac: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fa8) {
            ctx->pc = 0x2B6240u;
            goto label_2b6240;
        }
    }
    ctx->pc = 0x2B5FB0u;
label_2b5fb0:
    // 0x2b5fb0: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x2b5fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x2b5fb4: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2b5fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2b5fb8: 0x24c6e280  addiu       $a2, $a2, -0x1D80
    ctx->pc = 0x2b5fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959744));
    // 0x2b5fbc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2b5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2b5fc0:
    // 0x2b5fc0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b5fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b5fc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b5fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b5fc8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2b5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2b5fcc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2b5fccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2b5fd0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2b5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2b5fd4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2b5fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2b5fd8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B5FD8u;
    {
        const bool branch_taken_0x2b5fd8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2B5FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FD8u;
            // 0x2b5fdc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fd8) {
            ctx->pc = 0x2B5FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5fc0;
        }
    }
    ctx->pc = 0x2B5FE0u;
    // 0x2b5fe0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2b5fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2b5fe4: 0x8c540e80  lw          $s4, 0xE80($v0)
    ctx->pc = 0x2b5fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2b5fe8: 0xc0ae0e4  jal         func_2B8390
    ctx->pc = 0x2B5FE8u;
    SET_GPR_U32(ctx, 31, 0x2B5FF0u);
    ctx->pc = 0x2B5FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FE8u;
            // 0x2b5fec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8390u;
    if (runtime->hasFunction(0x2B8390u)) {
        auto targetFn = runtime->lookupFunction(0x2B8390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FF0u; }
        if (ctx->pc != 0x2B5FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8390_0x2b8390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5FF0u; }
        if (ctx->pc != 0x2B5FF0u) { return; }
    }
    ctx->pc = 0x2B5FF0u;
label_2b5ff0:
    // 0x2b5ff0: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x2b5ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
    // 0x2b5ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b5ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ff8: 0xc0adc70  jal         func_2B71C0
    ctx->pc = 0x2B5FF8u;
    SET_GPR_U32(ctx, 31, 0x2B6000u);
    ctx->pc = 0x2B5FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5FF8u;
            // 0x2b5ffc: 0x26100e84  addiu       $s0, $s0, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3716));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B71C0u;
    if (runtime->hasFunction(0x2B71C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B71C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6000u; }
        if (ctx->pc != 0x2B6000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B71C0_0x2b71c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6000u; }
        if (ctx->pc != 0x2B6000u) { return; }
    }
    ctx->pc = 0x2B6000u;
label_2b6000:
    // 0x2b6000: 0x5040008c  beql        $v0, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x2B6000u;
    {
        const bool branch_taken_0x2b6000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6000) {
            ctx->pc = 0x2B6004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6000u;
            // 0x2b6004: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B6234u;
            goto label_2b6234;
        }
    }
    ctx->pc = 0x2B6008u;
    // 0x2b6008: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b6008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b600c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b600cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b6010: 0x9447e310  lhu         $a3, -0x1CF0($v0)
    ctx->pc = 0x2b6010u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294959888)));
    // 0x2b6014: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2b6014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2b6018: 0x9066e312  lbu         $a2, -0x1CEE($v1)
    ctx->pc = 0x2b6018u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959890)));
    // 0x2b601c: 0x8c84e314  lw          $a0, -0x1CEC($a0)
    ctx->pc = 0x2b601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959892)));
    // 0x2b6020: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b6020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b6024: 0xa7a70100  sh          $a3, 0x100($sp)
    ctx->pc = 0x2b6024u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b6028: 0x9045e313  lbu         $a1, -0x1CED($v0)
    ctx->pc = 0x2b6028u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959891)));
    // 0x2b602c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b602cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b6030: 0x8c63e318  lw          $v1, -0x1CE8($v1)
    ctx->pc = 0x2b6030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959896)));
    // 0x2b6034: 0xa3a60102  sb          $a2, 0x102($sp)
    ctx->pc = 0x2b6034u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 258), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b6038: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b6038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b603c: 0xa3a50103  sb          $a1, 0x103($sp)
    ctx->pc = 0x2b603cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 259), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b6040: 0xc440e31c  lwc1        $f0, -0x1CE4($v0)
    ctx->pc = 0x2b6040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6044: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x2b6044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x2b6048: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b6048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b604c: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x2b604cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
    // 0x2b6050: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b6050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b6054: 0xc441e320  lwc1        $f1, -0x1CE0($v0)
    ctx->pc = 0x2b6054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6058: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x2b6058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2b605c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b605cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b6060: 0xc440e324  lwc1        $f0, -0x1CDC($v0)
    ctx->pc = 0x2b6060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6064: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x2b6064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2b6068: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b6068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b606c: 0xc441e328  lwc1        $f1, -0x1CD8($v0)
    ctx->pc = 0x2b606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6070: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2b6070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2b6074: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b6074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b6078: 0xc440e32c  lwc1        $f0, -0x1CD4($v0)
    ctx->pc = 0x2b6078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b607c: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x2b607cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2b6080: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b6080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b6084: 0xc441e330  lwc1        $f1, -0x1CD0($v0)
    ctx->pc = 0x2b6084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6088: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2b6088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2b608c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b608cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b6090: 0xc440e334  lwc1        $f0, -0x1CCC($v0)
    ctx->pc = 0x2b6090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6094: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x2b6094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2b6098: 0xc461e338  lwc1        $f1, -0x1CC8($v1)
    ctx->pc = 0x2b6098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b609c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b609cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b60a0: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2b60a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2b60a4: 0xc440e33c  lwc1        $f0, -0x1CC4($v0)
    ctx->pc = 0x2b60a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b60a8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x2b60a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2b60ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b60acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b60b0: 0x8c42e340  lw          $v0, -0x1CC0($v0)
    ctx->pc = 0x2b60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959936)));
    // 0x2b60b4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2b60b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2b60b8: 0xc0adc70  jal         func_2B71C0
    ctx->pc = 0x2B60B8u;
    SET_GPR_U32(ctx, 31, 0x2B60C0u);
    ctx->pc = 0x2B60BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B60B8u;
            // 0x2b60bc: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B71C0u;
    if (runtime->hasFunction(0x2B71C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B71C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60C0u; }
        if (ctx->pc != 0x2B60C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B71C0_0x2b71c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60C0u; }
        if (ctx->pc != 0x2B60C0u) { return; }
    }
    ctx->pc = 0x2B60C0u;
label_2b60c0:
    // 0x2b60c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b60c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60c4: 0xc0adc68  jal         func_2B71A0
    ctx->pc = 0x2B60C4u;
    SET_GPR_U32(ctx, 31, 0x2B60CCu);
    ctx->pc = 0x2B60C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B60C4u;
            // 0x2b60c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B71A0u;
    if (runtime->hasFunction(0x2B71A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B71A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60CCu; }
        if (ctx->pc != 0x2B60CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B71A0_0x2b71a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60CCu; }
        if (ctx->pc != 0x2B60CCu) { return; }
    }
    ctx->pc = 0x2B60CCu;
label_2b60cc:
    // 0x2b60cc: 0xc0adc64  jal         func_2B7190
    ctx->pc = 0x2B60CCu;
    SET_GPR_U32(ctx, 31, 0x2B60D4u);
    ctx->pc = 0x2B60D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B60CCu;
            // 0x2b60d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7190u;
    if (runtime->hasFunction(0x2B7190u)) {
        auto targetFn = runtime->lookupFunction(0x2B7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60D4u; }
        if (ctx->pc != 0x2B60D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7190_0x2b7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B60D4u; }
        if (ctx->pc != 0x2B60D4u) { return; }
    }
    ctx->pc = 0x2B60D4u;
label_2b60d4:
    // 0x2b60d4: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x2b60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
    // 0x2b60d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b60d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60dc: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x2b60dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
    // 0x2b60e0: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x2b60e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b60e4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2b60e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b60e8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2b60e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b60ec: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2b60ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b60f0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b60f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b60f4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2b60f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b60f8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b60f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b60fc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b60fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b6100: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6104: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b6108: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2b6108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b610c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2b610cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b6110: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2b6110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2b6114: 0xc0adc4c  jal         func_2B7130
    ctx->pc = 0x2B6114u;
    SET_GPR_U32(ctx, 31, 0x2B611Cu);
    ctx->pc = 0x2B6118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6114u;
            // 0x2b6118: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7130u;
    if (runtime->hasFunction(0x2B7130u)) {
        auto targetFn = runtime->lookupFunction(0x2B7130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B611Cu; }
        if (ctx->pc != 0x2B611Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7130_0x2b7130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B611Cu; }
        if (ctx->pc != 0x2B611Cu) { return; }
    }
    ctx->pc = 0x2B611Cu;
label_2b611c:
    // 0x2b611c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b6120: 0xc04ce78  jal         func_1339E0
    ctx->pc = 0x2B6120u;
    SET_GPR_U32(ctx, 31, 0x2B6128u);
    ctx->pc = 0x2B6124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6120u;
            // 0x2b6124: 0x2665000c  addiu       $a1, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1339E0u;
    if (runtime->hasFunction(0x1339E0u)) {
        auto targetFn = runtime->lookupFunction(0x1339E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6128u; }
        if (ctx->pc != 0x2B6128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001339E0_0x1339e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6128u; }
        if (ctx->pc != 0x2B6128u) { return; }
    }
    ctx->pc = 0x2B6128u;
label_2b6128:
    // 0x2b6128: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2b6128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b612c: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x2B612Cu;
    SET_GPR_U32(ctx, 31, 0x2B6134u);
    ctx->pc = 0x2B6130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B612Cu;
            // 0x2b6130: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6134u; }
        if (ctx->pc != 0x2B6134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6134u; }
        if (ctx->pc != 0x2B6134u) { return; }
    }
    ctx->pc = 0x2B6134u;
label_2b6134:
    // 0x2b6134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b6134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6138: 0xc0ae0e0  jal         func_2B8380
    ctx->pc = 0x2B6138u;
    SET_GPR_U32(ctx, 31, 0x2B6140u);
    ctx->pc = 0x2B613Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6138u;
            // 0x2b613c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8380u;
    if (runtime->hasFunction(0x2B8380u)) {
        auto targetFn = runtime->lookupFunction(0x2B8380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6140u; }
        if (ctx->pc != 0x2B6140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8380_0x2b8380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6140u; }
        if (ctx->pc != 0x2B6140u) { return; }
    }
    ctx->pc = 0x2B6140u;
label_2b6140:
    // 0x2b6140: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6144: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2b6144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2b6148: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2b6148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b614c: 0xc04cb9c  jal         func_132E70
    ctx->pc = 0x2B614Cu;
    SET_GPR_U32(ctx, 31, 0x2B6154u);
    ctx->pc = 0x2B6150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B614Cu;
            // 0x2b6150: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6154u; }
        if (ctx->pc != 0x2B6154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6154u; }
        if (ctx->pc != 0x2B6154u) { return; }
    }
    ctx->pc = 0x2B6154u;
label_2b6154:
    // 0x2b6154: 0xc7b401d4  lwc1        $f20, 0x1D4($sp)
    ctx->pc = 0x2b6154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6158: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x2b6158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2b615c: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x2b615cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x2b6160: 0xc04a508  jal         func_129420
    ctx->pc = 0x2B6160u;
    SET_GPR_U32(ctx, 31, 0x2B6168u);
    ctx->pc = 0x2B6164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6160u;
            // 0x2b6164: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6168u; }
        if (ctx->pc != 0x2B6168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6168u; }
        if (ctx->pc != 0x2B6168u) { return; }
    }
    ctx->pc = 0x2B6168u;
label_2b6168:
    // 0x2b6168: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b6168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b616c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b616cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6170: 0xc0adc48  jal         func_2B7120
    ctx->pc = 0x2B6170u;
    SET_GPR_U32(ctx, 31, 0x2B6178u);
    ctx->pc = 0x2B6174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6170u;
            // 0x2b6174: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7120u;
    if (runtime->hasFunction(0x2B7120u)) {
        auto targetFn = runtime->lookupFunction(0x2B7120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6178u; }
        if (ctx->pc != 0x2B6178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7120_0x2b7120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6178u; }
        if (ctx->pc != 0x2B6178u) { return; }
    }
    ctx->pc = 0x2B6178u;
label_2b6178:
    // 0x2b6178: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x2b6178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b617c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B617Cu;
    {
        const bool branch_taken_0x2b617c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b617c) {
            ctx->pc = 0x2B6190u;
            goto label_2b6190;
        }
    }
    ctx->pc = 0x2B6184u;
    // 0x2b6184: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x2b6184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2b6188: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B6188u;
    {
        const bool branch_taken_0x2b6188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6188) {
            ctx->pc = 0x2B618Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6188u;
            // 0x2b618c: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B61BCu;
            goto label_2b61bc;
        }
    }
    ctx->pc = 0x2B6190u;
label_2b6190:
    // 0x2b6190: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B6190u;
    {
        const bool branch_taken_0x2b6190 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b6190) {
            ctx->pc = 0x2B6194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6190u;
            // 0x2b6194: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B61C4u;
            goto label_2b61c4;
        }
    }
    ctx->pc = 0x2B6198u;
    // 0x2b6198: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2b6198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b619c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B619Cu;
    {
        const bool branch_taken_0x2b619c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b619c) {
            ctx->pc = 0x2B61A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B619Cu;
            // 0x2b61a0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B61B0u;
            goto label_2b61b0;
        }
    }
    ctx->pc = 0x2B61A4u;
    // 0x2b61a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B61A4u;
    {
        const bool branch_taken_0x2b61a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b61a4) {
            ctx->pc = 0x2B61C0u;
            goto label_2b61c0;
        }
    }
    ctx->pc = 0x2B61ACu;
    // 0x2b61ac: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2b61acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b61b0:
    // 0x2b61b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B61B0u;
    {
        const bool branch_taken_0x2b61b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B61B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B61B0u;
            // 0x2b61b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61b0) {
            ctx->pc = 0x2B61C0u;
            goto label_2b61c0;
        }
    }
    ctx->pc = 0x2B61B8u;
    // 0x2b61b8: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x2b61b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2b61bc:
    // 0x2b61bc: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x2b61bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b61c0:
    // 0x2b61c0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b61c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2b61c4:
    // 0x2b61c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b61c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b61cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b61d0: 0x24510140  addiu       $s1, $v0, 0x140
    ctx->pc = 0x2b61d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_2b61d4:
    // 0x2b61d4: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x2b61d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x2b61d8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2b61d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b61dc: 0xc04cb9c  jal         func_132E70
    ctx->pc = 0x2B61DCu;
    SET_GPR_U32(ctx, 31, 0x2B61E4u);
    ctx->pc = 0x2B61E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B61DCu;
            // 0x2b61e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B61E4u; }
        if (ctx->pc != 0x2B61E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B61E4u; }
        if (ctx->pc != 0x2B61E4u) { return; }
    }
    ctx->pc = 0x2B61E4u;
label_2b61e4:
    // 0x2b61e4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2b61e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b61e8: 0x24041240  addiu       $a0, $zero, 0x1240
    ctx->pc = 0x2b61e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4672));
    // 0x2b61ec: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2b61ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2b61f0: 0xc040180  jal         func_100600
    ctx->pc = 0x2B61F0u;
    SET_GPR_U32(ctx, 31, 0x2B61F8u);
    ctx->pc = 0x2B61F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B61F0u;
            // 0x2b61f4: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B61F8u; }
        if (ctx->pc != 0x2B61F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B61F8u; }
        if (ctx->pc != 0x2B61F8u) { return; }
    }
    ctx->pc = 0x2B61F8u;
label_2b61f8:
    // 0x2b61f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b61f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B61FCu;
    {
        const bool branch_taken_0x2b61fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b61fc) {
            ctx->pc = 0x2B6210u;
            goto label_2b6210;
        }
    }
    ctx->pc = 0x2B6204u;
    // 0x2b6204: 0xc0adc74  jal         func_2B71D0
    ctx->pc = 0x2B6204u;
    SET_GPR_U32(ctx, 31, 0x2B620Cu);
    ctx->pc = 0x2B6208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6204u;
            // 0x2b6208: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B71D0u;
    if (runtime->hasFunction(0x2B71D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B620Cu; }
        if (ctx->pc != 0x2B620Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B71D0_0x2b71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B620Cu; }
        if (ctx->pc != 0x2B620Cu) { return; }
    }
    ctx->pc = 0x2B620Cu;
label_2b620c:
    // 0x2b620c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b620cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6210:
    // 0x2b6210: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b6210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b6214: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2b6214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2b6218: 0x272182b  sltu        $v1, $s3, $s2
    ctx->pc = 0x2b6218u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2b621c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b621cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b6220: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2B6220u;
    {
        const bool branch_taken_0x2b6220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6220u;
            // 0x2b6224: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6220) {
            ctx->pc = 0x2B61D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b61d4;
        }
    }
    ctx->pc = 0x2B6228u;
    // 0x2b6228: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6228u;
    {
        const bool branch_taken_0x2b6228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6228) {
            ctx->pc = 0x2B623Cu;
            goto label_2b623c;
        }
    }
    ctx->pc = 0x2B6230u;
    // 0x2b6230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b6230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b6234:
    // 0x2b6234: 0xc0ad89c  jal         func_2B6270
    ctx->pc = 0x2B6234u;
    SET_GPR_U32(ctx, 31, 0x2B623Cu);
    ctx->pc = 0x2B6238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6234u;
            // 0x2b6238: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6270u;
    if (runtime->hasFunction(0x2B6270u)) {
        auto targetFn = runtime->lookupFunction(0x2B6270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B623Cu; }
        if (ctx->pc != 0x2B623Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6270_0x2b6270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B623Cu; }
        if (ctx->pc != 0x2B623Cu) { return; }
    }
    ctx->pc = 0x2B623Cu;
label_2b623c:
    // 0x2b623c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b623cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b6240:
    // 0x2b6240: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b6240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6244: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2b6244u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b6248: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b6248u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b624c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b624cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6250: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b6250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6254: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b6254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6258: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b6258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b625c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B625Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B625Cu;
            // 0x2b6260: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6264u;
    // 0x2b6264: 0x0  nop
    ctx->pc = 0x2b6264u;
    // NOP
    // 0x2b6268: 0x0  nop
    ctx->pc = 0x2b6268u;
    // NOP
    // 0x2b626c: 0x0  nop
    ctx->pc = 0x2b626cu;
    // NOP
}
