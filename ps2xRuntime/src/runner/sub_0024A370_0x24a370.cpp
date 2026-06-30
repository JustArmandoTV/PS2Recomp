#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A370
// Address: 0x24a370 - 0x24a4a0
void sub_0024A370_0x24a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A370_0x24a370");
#endif

    switch (ctx->pc) {
        case 0x24a3e4u: goto label_24a3e4;
        case 0x24a410u: goto label_24a410;
        case 0x24a450u: goto label_24a450;
        default: break;
    }

    ctx->pc = 0x24a370u;

    // 0x24a370: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24a374: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24a378: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24a37c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24a380: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24a380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a384: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24a388: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24a388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a38c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24a390: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x24a390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24a398: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x24a398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24a3a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x24a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24a3a4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x24a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24a3a8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x24a3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x24a3ac: 0xe58821  addu        $s1, $a3, $a1
    ctx->pc = 0x24a3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x24a3b0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x24a3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x24a3b4: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x24a3b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x24a3b8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x24A3B8u;
    {
        const bool branch_taken_0x24a3b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A3B8u;
            // 0x24a3bc: 0xb48023  subu        $s0, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3b8) {
            ctx->pc = 0x24A3E8u;
            goto label_24a3e8;
        }
    }
    ctx->pc = 0x24A3C0u;
    // 0x24a3c0: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x24a3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x24a3c4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A3C4u;
    {
        const bool branch_taken_0x24a3c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a3c4) {
            ctx->pc = 0x24A3E8u;
            goto label_24a3e8;
        }
    }
    ctx->pc = 0x24A3CCu;
    // 0x24a3cc: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x24a3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x24a3d0: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x24a3d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24a3d4: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x24a3d4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x24a3d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24a3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a3dc: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x24A3DCu;
    SET_GPR_U32(ctx, 31, 0x24A3E4u);
    ctx->pc = 0x24A3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A3DCu;
            // 0x24a3e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A3E4u; }
        if (ctx->pc != 0x24A3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A3E4u; }
        if (ctx->pc != 0x24A3E4u) { return; }
    }
    ctx->pc = 0x24A3E4u;
label_24a3e4:
    // 0x24a3e4: 0x0  nop
    ctx->pc = 0x24a3e4u;
    // NOP
label_24a3e8:
    // 0x24a3e8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a3ec: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x24a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x24a3f0: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x24a3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x24a3f4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x24a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x24a3f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24a3fc: 0x4e0000c  bltz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x24A3FCu;
    {
        const bool branch_taken_0x24a3fc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x24A400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A3FCu;
            // 0x24a400: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3fc) {
            ctx->pc = 0x24A430u;
            goto label_24a430;
        }
    }
    ctx->pc = 0x24A404u;
    // 0x24a404: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x24a404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x24a408: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x24a408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24a40c: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x24a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_24a410:
    // 0x24a410: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24a414: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x24a414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x24a418: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x24a418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24a41c: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x24a41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x24a420: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x24a420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x24a424: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24A424u;
    {
        const bool branch_taken_0x24a424 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x24a424) {
            ctx->pc = 0x24A410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a410;
        }
    }
    ctx->pc = 0x24A42Cu;
    // 0x24a42c: 0x0  nop
    ctx->pc = 0x24a42cu;
    // NOP
label_24a430:
    // 0x24a430: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x24a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24a434: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x24a434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24a438: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x24A438u;
    {
        const bool branch_taken_0x24a438 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x24A43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A438u;
            // 0x24a43c: 0x652021  addu        $a0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a438) {
            ctx->pc = 0x24A470u;
            goto label_24a470;
        }
    }
    ctx->pc = 0x24A440u;
    // 0x24a440: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x24a440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24a444: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x24a444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x24a448: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24a44c: 0x0  nop
    ctx->pc = 0x24a44cu;
    // NOP
label_24a450:
    // 0x24a450: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24a450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24a454: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x24a454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x24a458: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x24a458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x24a45c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x24a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x24a460: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x24a460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x24a464: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24A464u;
    {
        const bool branch_taken_0x24a464 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x24a464) {
            ctx->pc = 0x24A450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a450;
        }
    }
    ctx->pc = 0x24A46Cu;
    // 0x24a46c: 0x0  nop
    ctx->pc = 0x24a46cu;
    // NOP
label_24a470:
    // 0x24a470: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x24a470u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x24a474: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24a474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24a478: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24a478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24a47c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24a47cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24a480: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24a480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24a484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24a488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a48c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a490: 0x3e00008  jr          $ra
    ctx->pc = 0x24A490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A490u;
            // 0x24a494: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A498u;
    // 0x24a498: 0x0  nop
    ctx->pc = 0x24a498u;
    // NOP
    // 0x24a49c: 0x0  nop
    ctx->pc = 0x24a49cu;
    // NOP
}
