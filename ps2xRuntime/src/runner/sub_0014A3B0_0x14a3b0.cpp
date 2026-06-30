#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014A3B0
// Address: 0x14a3b0 - 0x14a460
void sub_0014A3B0_0x14a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A3B0_0x14a3b0");
#endif

    switch (ctx->pc) {
        case 0x14a40cu: goto label_14a40c;
        case 0x14a42cu: goto label_14a42c;
        case 0x14a440u: goto label_14a440;
        default: break;
    }

    ctx->pc = 0x14a3b0u;

    // 0x14a3b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14a3b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14a3b8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x14a3b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x14a3bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a3c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a3c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14a3c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a3cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14a3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a3d4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A3D4u;
    {
        const bool branch_taken_0x14a3d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3D4u;
            // 0x14a3d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3d4) {
            ctx->pc = 0x14A3E4u;
            goto label_14a3e4;
        }
    }
    ctx->pc = 0x14A3DCu;
    // 0x14a3dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A3DCu;
    {
        const bool branch_taken_0x14a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3DCu;
            // 0x14a3e0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3dc) {
            ctx->pc = 0x14A3ECu;
            goto label_14a3ec;
        }
    }
    ctx->pc = 0x14A3E4u;
label_14a3e4:
    // 0x14a3e4: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x14a3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
    // 0x14a3e8: 0x26101230  addiu       $s0, $s0, 0x1230
    ctx->pc = 0x14a3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
label_14a3ec:
    // 0x14a3ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x14a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a3f0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x14a3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x14a3f4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x14A3F4u;
    {
        const bool branch_taken_0x14a3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a3f4) {
            ctx->pc = 0x14A3F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A3F4u;
            // 0x14a3f8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A444u;
            goto label_14a444;
        }
    }
    ctx->pc = 0x14A3FCu;
    // 0x14a3fc: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x14a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a400: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x14a400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14a404: 0xc04d03c  jal         func_1340F0
    ctx->pc = 0x14A404u;
    SET_GPR_U32(ctx, 31, 0x14A40Cu);
    ctx->pc = 0x14A408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A404u;
            // 0x14a408: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340F0u;
    if (runtime->hasFunction(0x1340F0u)) {
        auto targetFn = runtime->lookupFunction(0x1340F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A40Cu; }
        if (ctx->pc != 0x14A40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001340F0_0x1340f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A40Cu; }
        if (ctx->pc != 0x14A40Cu) { return; }
    }
    ctx->pc = 0x14A40Cu;
label_14a40c:
    // 0x14a40c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14A40Cu;
    {
        const bool branch_taken_0x14a40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a40c) {
            ctx->pc = 0x14A410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A40Cu;
            // 0x14a410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A434u;
            goto label_14a434;
        }
    }
    ctx->pc = 0x14A414u;
    // 0x14a414: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x14a414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14a418: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14a418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a41c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14a41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a420: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14a420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a424: 0xc052880  jal         func_14A200
    ctx->pc = 0x14A424u;
    SET_GPR_U32(ctx, 31, 0x14A42Cu);
    ctx->pc = 0x14A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A424u;
            // 0x14a428: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A200u;
    if (runtime->hasFunction(0x14A200u)) {
        auto targetFn = runtime->lookupFunction(0x14A200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A42Cu; }
        if (ctx->pc != 0x14A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A200_0x14a200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A42Cu; }
        if (ctx->pc != 0x14A42Cu) { return; }
    }
    ctx->pc = 0x14A42Cu;
label_14a42c:
    // 0x14a42c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A42Cu;
    {
        const bool branch_taken_0x14a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a42c) {
            ctx->pc = 0x14A440u;
            goto label_14a440;
        }
    }
    ctx->pc = 0x14A434u;
label_14a434:
    // 0x14a434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14a434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a438: 0xc0527d8  jal         func_149F60
    ctx->pc = 0x14A438u;
    SET_GPR_U32(ctx, 31, 0x14A440u);
    ctx->pc = 0x14A43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A438u;
            // 0x14a43c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149F60u;
    if (runtime->hasFunction(0x149F60u)) {
        auto targetFn = runtime->lookupFunction(0x149F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A440u; }
        if (ctx->pc != 0x14A440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149F60_0x149f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A440u; }
        if (ctx->pc != 0x14A440u) { return; }
    }
    ctx->pc = 0x14A440u;
label_14a440:
    // 0x14a440: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14a440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_14a444:
    // 0x14a444: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a44c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a454: 0x3e00008  jr          $ra
    ctx->pc = 0x14A454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A454u;
            // 0x14a458: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A45Cu;
    // 0x14a45c: 0x0  nop
    ctx->pc = 0x14a45cu;
    // NOP
}
