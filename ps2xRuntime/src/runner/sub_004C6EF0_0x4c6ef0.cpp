#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C6EF0
// Address: 0x4c6ef0 - 0x4c7030
void sub_004C6EF0_0x4c6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6EF0_0x4c6ef0");
#endif

    switch (ctx->pc) {
        case 0x4c6f0cu: goto label_4c6f0c;
        case 0x4c6f2cu: goto label_4c6f2c;
        case 0x4c6f60u: goto label_4c6f60;
        case 0x4c6fc0u: goto label_4c6fc0;
        case 0x4c6fccu: goto label_4c6fcc;
        case 0x4c6fd8u: goto label_4c6fd8;
        case 0x4c6fe4u: goto label_4c6fe4;
        case 0x4c6ff0u: goto label_4c6ff0;
        case 0x4c6ffcu: goto label_4c6ffc;
        case 0x4c7014u: goto label_4c7014;
        default: break;
    }

    ctx->pc = 0x4c6ef0u;

    // 0x4c6ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c6ef4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c6ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c6ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c6ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c6efc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4c6efcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4c6f00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c6f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c6f04: 0xc131c44  jal         func_4C7110
    ctx->pc = 0x4C6F04u;
    SET_GPR_U32(ctx, 31, 0x4C6F0Cu);
    ctx->pc = 0x4C6F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6F04u;
            // 0x4c6f08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7110u;
    if (runtime->hasFunction(0x4C7110u)) {
        auto targetFn = runtime->lookupFunction(0x4C7110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6F0Cu; }
        if (ctx->pc != 0x4C6F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C7110_0x4c7110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6F0Cu; }
        if (ctx->pc != 0x4C6F0Cu) { return; }
    }
    ctx->pc = 0x4C6F0Cu;
label_4c6f0c:
    // 0x4c6f0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c6f10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c6f14: 0x246317e0  addiu       $v1, $v1, 0x17E0
    ctx->pc = 0x4c6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6112));
    // 0x4c6f18: 0x24421818  addiu       $v0, $v0, 0x1818
    ctx->pc = 0x4c6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6168));
    // 0x4c6f1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c6f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c6f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c6f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6f24: 0xc131c40  jal         func_4C7100
    ctx->pc = 0x4C6F24u;
    SET_GPR_U32(ctx, 31, 0x4C6F2Cu);
    ctx->pc = 0x4C6F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6F24u;
            // 0x4c6f28: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7100u;
    if (runtime->hasFunction(0x4C7100u)) {
        auto targetFn = runtime->lookupFunction(0x4C7100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6F2Cu; }
        if (ctx->pc != 0x4C6F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C7100_0x4c7100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6F2Cu; }
        if (ctx->pc != 0x4C6F2Cu) { return; }
    }
    ctx->pc = 0x4C6F2Cu;
label_4c6f2c:
    // 0x4c6f2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4c6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4c6f30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c6f34: 0x244216f0  addiu       $v0, $v0, 0x16F0
    ctx->pc = 0x4c6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5872));
    // 0x4c6f38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c6f3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c6f40: 0x24421728  addiu       $v0, $v0, 0x1728
    ctx->pc = 0x4c6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5928));
    // 0x4c6f44: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4c6f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4c6f48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c6f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c6f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c6f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c6f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c6f54: 0x3e00008  jr          $ra
    ctx->pc = 0x4C6F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C6F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6F54u;
            // 0x4c6f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C6F5Cu;
    // 0x4c6f5c: 0x0  nop
    ctx->pc = 0x4c6f5cu;
    // NOP
label_4c6f60:
    // 0x4c6f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c6f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c6f64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c6f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c6f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c6f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c6f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c6f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c6f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c6f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6f74: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4C6F74u;
    {
        const bool branch_taken_0x4c6f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6F74u;
            // 0x4c6f78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f74) {
            ctx->pc = 0x4C7014u;
            goto label_4c7014;
        }
    }
    ctx->pc = 0x4C6F7Cu;
    // 0x4c6f7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c6f80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c6f84: 0x246317e0  addiu       $v1, $v1, 0x17E0
    ctx->pc = 0x4c6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6112));
    // 0x4c6f88: 0x24421818  addiu       $v0, $v0, 0x1818
    ctx->pc = 0x4c6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6168));
    // 0x4c6f8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c6f90: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4C6F90u;
    {
        const bool branch_taken_0x4c6f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C6F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6F90u;
            // 0x4c6f94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c6f90) {
            ctx->pc = 0x4C6FFCu;
            goto label_4c6ffc;
        }
    }
    ctx->pc = 0x4C6F98u;
    // 0x4c6f98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c6f9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c6fa0: 0x24631790  addiu       $v1, $v1, 0x1790
    ctx->pc = 0x4c6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
    // 0x4c6fa4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4c6fa8: 0x244217c8  addiu       $v0, $v0, 0x17C8
    ctx->pc = 0x4c6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6088));
    // 0x4c6fac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c6facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c6fb0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4c6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4c6fb4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4c6fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4c6fb8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4C6FB8u;
    SET_GPR_U32(ctx, 31, 0x4C6FC0u);
    ctx->pc = 0x4C6FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6FB8u;
            // 0x4c6fbc: 0x24a56b80  addiu       $a1, $a1, 0x6B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FC0u; }
        if (ctx->pc != 0x4C6FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FC0u; }
        if (ctx->pc != 0x4C6FC0u) { return; }
    }
    ctx->pc = 0x4C6FC0u;
label_4c6fc0:
    // 0x4c6fc0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4c6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4c6fc4: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x4C6FC4u;
    SET_GPR_U32(ctx, 31, 0x4C6FCCu);
    ctx->pc = 0x4C6FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6FC4u;
            // 0x4c6fc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FCCu; }
        if (ctx->pc != 0x4C6FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FCCu; }
        if (ctx->pc != 0x4C6FCCu) { return; }
    }
    ctx->pc = 0x4C6FCCu;
label_4c6fcc:
    // 0x4c6fcc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4c6fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4c6fd0: 0xc131c24  jal         func_4C7090
    ctx->pc = 0x4C6FD0u;
    SET_GPR_U32(ctx, 31, 0x4C6FD8u);
    ctx->pc = 0x4C6FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6FD0u;
            // 0x4c6fd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7090u;
    if (runtime->hasFunction(0x4C7090u)) {
        auto targetFn = runtime->lookupFunction(0x4C7090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FD8u; }
        if (ctx->pc != 0x4C6FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C7090_0x4c7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FD8u; }
        if (ctx->pc != 0x4C6FD8u) { return; }
    }
    ctx->pc = 0x4C6FD8u;
label_4c6fd8:
    // 0x4c6fd8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4c6fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4c6fdc: 0xc131c24  jal         func_4C7090
    ctx->pc = 0x4C6FDCu;
    SET_GPR_U32(ctx, 31, 0x4C6FE4u);
    ctx->pc = 0x4C6FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6FDCu;
            // 0x4c6fe0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7090u;
    if (runtime->hasFunction(0x4C7090u)) {
        auto targetFn = runtime->lookupFunction(0x4C7090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FE4u; }
        if (ctx->pc != 0x4C6FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C7090_0x4c7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FE4u; }
        if (ctx->pc != 0x4C6FE4u) { return; }
    }
    ctx->pc = 0x4C6FE4u;
label_4c6fe4:
    // 0x4c6fe4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4c6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4c6fe8: 0xc131c0c  jal         func_4C7030
    ctx->pc = 0x4C6FE8u;
    SET_GPR_U32(ctx, 31, 0x4C6FF0u);
    ctx->pc = 0x4C6FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6FE8u;
            // 0x4c6fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7030u;
    if (runtime->hasFunction(0x4C7030u)) {
        auto targetFn = runtime->lookupFunction(0x4C7030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FF0u; }
        if (ctx->pc != 0x4C6FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C7030_0x4c7030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FF0u; }
        if (ctx->pc != 0x4C6FF0u) { return; }
    }
    ctx->pc = 0x4C6FF0u;
label_4c6ff0:
    // 0x4c6ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c6ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c6ff4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4C6FF4u;
    SET_GPR_U32(ctx, 31, 0x4C6FFCu);
    ctx->pc = 0x4C6FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6FF4u;
            // 0x4c6ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FFCu; }
        if (ctx->pc != 0x4C6FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6FFCu; }
        if (ctx->pc != 0x4C6FFCu) { return; }
    }
    ctx->pc = 0x4C6FFCu;
label_4c6ffc:
    // 0x4c6ffc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c6ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4c7000: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c7000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c7004: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C7004u;
    {
        const bool branch_taken_0x4c7004 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c7004) {
            ctx->pc = 0x4C7008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7004u;
            // 0x4c7008: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7018u;
            goto label_4c7018;
        }
    }
    ctx->pc = 0x4C700Cu;
    // 0x4c700c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C700Cu;
    SET_GPR_U32(ctx, 31, 0x4C7014u);
    ctx->pc = 0x4C7010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C700Cu;
            // 0x4c7010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7014u; }
        if (ctx->pc != 0x4C7014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7014u; }
        if (ctx->pc != 0x4C7014u) { return; }
    }
    ctx->pc = 0x4C7014u;
label_4c7014:
    // 0x4c7014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c7014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c7018:
    // 0x4c7018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c7018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c701c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c701cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c7020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c7024: 0x3e00008  jr          $ra
    ctx->pc = 0x4C7024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7024u;
            // 0x4c7028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C702Cu;
    // 0x4c702c: 0x0  nop
    ctx->pc = 0x4c702cu;
    // NOP
}
