#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D5E00
// Address: 0x3d5e00 - 0x3d5f40
void sub_003D5E00_0x3d5e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5E00_0x3d5e00");
#endif

    switch (ctx->pc) {
        case 0x3d5e34u: goto label_3d5e34;
        case 0x3d5e74u: goto label_3d5e74;
        case 0x3d5e84u: goto label_3d5e84;
        case 0x3d5e94u: goto label_3d5e94;
        case 0x3d5eb0u: goto label_3d5eb0;
        case 0x3d5f08u: goto label_3d5f08;
        case 0x3d5f20u: goto label_3d5f20;
        default: break;
    }

    ctx->pc = 0x3d5e00u;

    // 0x3d5e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d5e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d5e04: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x3d5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x3d5e08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d5e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d5e0c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3d5e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3d5e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d5e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d5e14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d5e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d5e18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d5e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d5e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d5e20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d5e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5e24: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3d5e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5e28: 0x34459248  ori         $a1, $v0, 0x9248
    ctx->pc = 0x3d5e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37448);
    // 0x3d5e2c: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x3D5E2Cu;
    SET_GPR_U32(ctx, 31, 0x3D5E34u);
    ctx->pc = 0x3D5E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5E2Cu;
            // 0x3d5e30: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5E34u; }
        if (ctx->pc != 0x3D5E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5E34u; }
        if (ctx->pc != 0x3D5E34u) { return; }
    }
    ctx->pc = 0x3D5E34u;
label_3d5e34:
    // 0x3d5e34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3d5e38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d5e3c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3d5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x3d5e40: 0x244293d0  addiu       $v0, $v0, -0x6C30
    ctx->pc = 0x3d5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939600));
    // 0x3d5e44: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3d5e44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3d5e48: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3d5e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3d5e4c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3d5e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x3d5e50: 0xa25000c0  sb          $s0, 0xC0($s2)
    ctx->pc = 0x3d5e50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 192), (uint8_t)GPR_U32(ctx, 16));
    // 0x3d5e54: 0xae5100c4  sw          $s1, 0xC4($s2)
    ctx->pc = 0x3d5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 17));
    // 0x3d5e58: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x3d5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x3d5e5c: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x3d5e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x3d5e60: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x3d5e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x3d5e64: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x3d5e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x3d5e68: 0x924500c0  lbu         $a1, 0xC0($s2)
    ctx->pc = 0x3d5e68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x3d5e6c: 0xc0f56d0  jal         func_3D5B40
    ctx->pc = 0x3D5E6Cu;
    SET_GPR_U32(ctx, 31, 0x3D5E74u);
    ctx->pc = 0x3D5E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5E6Cu;
            // 0x3d5e70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B40u;
    if (runtime->hasFunction(0x3D5B40u)) {
        auto targetFn = runtime->lookupFunction(0x3D5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5E74u; }
        if (ctx->pc != 0x3D5E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D5B40_0x3d5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5E74u; }
        if (ctx->pc != 0x3D5E74u) { return; }
    }
    ctx->pc = 0x3D5E74u;
label_3d5e74:
    // 0x3d5e74: 0x26440120  addiu       $a0, $s2, 0x120
    ctx->pc = 0x3d5e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x3d5e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d5e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5e7c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3D5E7Cu;
    SET_GPR_U32(ctx, 31, 0x3D5E84u);
    ctx->pc = 0x3D5E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5E7Cu;
            // 0x3d5e80: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5E84u; }
        if (ctx->pc != 0x3D5E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5E84u; }
        if (ctx->pc != 0x3D5E84u) { return; }
    }
    ctx->pc = 0x3D5E84u;
label_3d5e84:
    // 0x3d5e84: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3d5e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3d5e88: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x3d5e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x3d5e8c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3D5E8Cu;
    SET_GPR_U32(ctx, 31, 0x3D5E94u);
    ctx->pc = 0x3D5E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5E8Cu;
            // 0x3d5e90: 0x24a598f0  addiu       $a1, $a1, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5E94u; }
        if (ctx->pc != 0x3D5E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5E94u; }
        if (ctx->pc != 0x3D5E94u) { return; }
    }
    ctx->pc = 0x3D5E94u;
label_3d5e94:
    // 0x3d5e94: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3d5e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5e98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d5e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d5e9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d5e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d5ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d5ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5EA8u;
            // 0x3d5eac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D5EB0u;
label_3d5eb0:
    // 0x3d5eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d5eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d5eb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d5eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d5eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d5eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d5ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d5ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d5ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d5ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5ec4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D5EC4u;
    {
        const bool branch_taken_0x3d5ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5EC4u;
            // 0x3d5ec8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ec4) {
            ctx->pc = 0x3D5F20u;
            goto label_3d5f20;
        }
    }
    ctx->pc = 0x3D5ECCu;
    // 0x3d5ecc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d5ed0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d5ed4: 0x24639400  addiu       $v1, $v1, -0x6C00
    ctx->pc = 0x3d5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939648));
    // 0x3d5ed8: 0x24429438  addiu       $v0, $v0, -0x6BC8
    ctx->pc = 0x3d5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939704));
    // 0x3d5edc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d5edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d5ee0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D5EE0u;
    {
        const bool branch_taken_0x3d5ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5EE0u;
            // 0x3d5ee4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ee0) {
            ctx->pc = 0x3D5F08u;
            goto label_3d5f08;
        }
    }
    ctx->pc = 0x3D5EE8u;
    // 0x3d5ee8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d5ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3d5eec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d5ef0: 0x24639560  addiu       $v1, $v1, -0x6AA0
    ctx->pc = 0x3d5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940000));
    // 0x3d5ef4: 0x24429598  addiu       $v0, $v0, -0x6A68
    ctx->pc = 0x3d5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940056));
    // 0x3d5ef8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d5ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3d5efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d5efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5f00: 0xc0f57d0  jal         func_3D5F40
    ctx->pc = 0x3D5F00u;
    SET_GPR_U32(ctx, 31, 0x3D5F08u);
    ctx->pc = 0x3D5F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5F00u;
            // 0x3d5f04: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D5F40u;
    if (runtime->hasFunction(0x3D5F40u)) {
        auto targetFn = runtime->lookupFunction(0x3D5F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5F08u; }
        if (ctx->pc != 0x3D5F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D5F40_0x3d5f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5F08u; }
        if (ctx->pc != 0x3D5F08u) { return; }
    }
    ctx->pc = 0x3D5F08u;
label_3d5f08:
    // 0x3d5f08: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3d5f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3d5f0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d5f0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3d5f10: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D5F10u;
    {
        const bool branch_taken_0x3d5f10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d5f10) {
            ctx->pc = 0x3D5F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5F10u;
            // 0x3d5f14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5F24u;
            goto label_3d5f24;
        }
    }
    ctx->pc = 0x3D5F18u;
    // 0x3d5f18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3D5F18u;
    SET_GPR_U32(ctx, 31, 0x3D5F20u);
    ctx->pc = 0x3D5F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5F18u;
            // 0x3d5f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5F20u; }
        if (ctx->pc != 0x3D5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5F20u; }
        if (ctx->pc != 0x3D5F20u) { return; }
    }
    ctx->pc = 0x3D5F20u;
label_3d5f20:
    // 0x3d5f20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d5f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d5f24:
    // 0x3d5f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d5f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d5f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d5f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5f30: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5F30u;
            // 0x3d5f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D5F38u;
    // 0x3d5f38: 0x0  nop
    ctx->pc = 0x3d5f38u;
    // NOP
    // 0x3d5f3c: 0x0  nop
    ctx->pc = 0x3d5f3cu;
    // NOP
}
