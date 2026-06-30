#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055F3A0
// Address: 0x55f3a0 - 0x55f460
void sub_0055F3A0_0x55f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055F3A0_0x55f3a0");
#endif

    switch (ctx->pc) {
        case 0x55f3e4u: goto label_55f3e4;
        case 0x55f410u: goto label_55f410;
        case 0x55f434u: goto label_55f434;
        default: break;
    }

    ctx->pc = 0x55f3a0u;

    // 0x55f3a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x55f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x55f3a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x55f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x55f3a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x55f3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x55f3ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x55f3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x55f3b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x55f3b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x55f3b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f3b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55f3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x55f3bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x55f3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f3c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x55f3c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x55f3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f3c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55f3c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x55f3cc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x55f3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f3d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x55f3d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x55f3d4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x55f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x55f3d8: 0x34458a92  ori         $a1, $v0, 0x8A92
    ctx->pc = 0x55f3d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x55f3dc: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x55F3DCu;
    SET_GPR_U32(ctx, 31, 0x55F3E4u);
    ctx->pc = 0x55F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F3DCu;
            // 0x55f3e0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F3E4u; }
        if (ctx->pc != 0x55F3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F3E4u; }
        if (ctx->pc != 0x55F3E4u) { return; }
    }
    ctx->pc = 0x55F3E4u;
label_55f3e4:
    // 0x55f3e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x55f3e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x55f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x55f3ec: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x55f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x55f3f0: 0x24637dc0  addiu       $v1, $v1, 0x7DC0
    ctx->pc = 0x55f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32192));
    // 0x55f3f4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x55f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x55f3f8: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x55f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x55f3fc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x55f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x55f400: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x55f400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x55f404: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x55f404u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x55f408: 0xc040180  jal         func_100600
    ctx->pc = 0x55F408u;
    SET_GPR_U32(ctx, 31, 0x55F410u);
    ctx->pc = 0x55F40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F408u;
            // 0x55f40c: 0xae600058  sw          $zero, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F410u; }
        if (ctx->pc != 0x55F410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F410u; }
        if (ctx->pc != 0x55F410u) { return; }
    }
    ctx->pc = 0x55F410u;
label_55f410:
    // 0x55f410: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x55F410u;
    {
        const bool branch_taken_0x55f410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f410) {
            ctx->pc = 0x55F414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F410u;
            // 0x55f414: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F438u;
            goto label_55f438;
        }
    }
    ctx->pc = 0x55F418u;
    // 0x55f418: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x55f418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f41c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x55f41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f420: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x55f420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x55f424: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x55f424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x55f428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f42c: 0xc158444  jal         func_561110
    ctx->pc = 0x55F42Cu;
    SET_GPR_U32(ctx, 31, 0x55F434u);
    ctx->pc = 0x55F430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F42Cu;
            // 0x55f430: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x561110u;
    if (runtime->hasFunction(0x561110u)) {
        auto targetFn = runtime->lookupFunction(0x561110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F434u; }
        if (ctx->pc != 0x55F434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00561110_0x561110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F434u; }
        if (ctx->pc != 0x55F434u) { return; }
    }
    ctx->pc = 0x55F434u;
label_55f434:
    // 0x55f434: 0xae620058  sw          $v0, 0x58($s3)
    ctx->pc = 0x55f434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
label_55f438:
    // 0x55f438: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x55f438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x55f43c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x55f43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x55f440: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55f440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x55f444: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55f444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x55f448: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55f448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x55f44c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55f44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x55f450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55f450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x55f454: 0x3e00008  jr          $ra
    ctx->pc = 0x55F454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F454u;
            // 0x55f458: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55F45Cu;
    // 0x55f45c: 0x0  nop
    ctx->pc = 0x55f45cu;
    // NOP
}
