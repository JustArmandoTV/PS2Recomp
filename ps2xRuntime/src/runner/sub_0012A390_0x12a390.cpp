#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A390
// Address: 0x12a390 - 0x12a498
void sub_0012A390_0x12a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A390_0x12a390");
#endif

    switch (ctx->pc) {
        case 0x12a3dcu: goto label_12a3dc;
        case 0x12a404u: goto label_12a404;
        case 0x12a410u: goto label_12a410;
        case 0x12a42cu: goto label_12a42c;
        case 0x12a440u: goto label_12a440;
        case 0x12a464u: goto label_12a464;
        default: break;
    }

    ctx->pc = 0x12a390u;

    // 0x12a390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a394: 0x30ce0003  andi        $t6, $a2, 0x3
    ctx->pc = 0x12a394u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x12a398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12a39c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12a39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12a3a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12a3a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12a3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a3ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12a3acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12a3b4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12a3b8: 0x11c00009  beqz        $t6, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A3B8u;
    {
        const bool branch_taken_0x12a3b8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3B8u;
            // 0x12a3bc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3b8) {
            ctx->pc = 0x12A3E0u;
            goto label_12a3e0;
        }
    }
    ctx->pc = 0x12A3C0u;
    // 0x12a3c0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12a3c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12a3c4: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x12a3c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x12a3c8: 0x25ef0968  addiu       $t7, $t7, 0x968
    ctx->pc = 0x12a3c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2408));
    // 0x12a3cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12a3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3d0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12a3d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12a3d4: 0xc04a776  jal         func_129DD8
    ctx->pc = 0x12A3D4u;
    SET_GPR_U32(ctx, 31, 0x12A3DCu);
    ctx->pc = 0x12A3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3D4u;
            // 0x12a3d8: 0x8dc6fffc  lw          $a2, -0x4($t6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294967292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DD8u;
    if (runtime->hasFunction(0x129DD8u)) {
        auto targetFn = runtime->lookupFunction(0x129DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3DCu; }
        if (ctx->pc != 0x12A3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DD8_0x129dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3DCu; }
        if (ctx->pc != 0x12A3DCu) { return; }
    }
    ctx->pc = 0x12A3DCu;
label_12a3dc:
    // 0x12a3dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12a3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a3e0:
    // 0x12a3e0: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x12a3e0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x12a3e4: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x12A3E4u;
    {
        const bool branch_taken_0x12a3e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3E4u;
            // 0x12a3e8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3e4) {
            ctx->pc = 0x12A474u;
            goto label_12a474;
        }
    }
    ctx->pc = 0x12A3ECu;
    // 0x12a3ec: 0x8e920048  lw          $s2, 0x48($s4)
    ctx->pc = 0x12a3ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x12a3f0: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A3F0u;
    {
        const bool branch_taken_0x12a3f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3F0u;
            // 0x12a3f4: 0x322f0001  andi        $t7, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3f0) {
            ctx->pc = 0x12A414u;
            goto label_12a414;
        }
    }
    ctx->pc = 0x12A3F8u;
    // 0x12a3f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12a3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3fc: 0xc04a854  jal         func_12A150
    ctx->pc = 0x12A3FCu;
    SET_GPR_U32(ctx, 31, 0x12A404u);
    ctx->pc = 0x12A400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3FCu;
            // 0x12a400: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A150u;
    if (runtime->hasFunction(0x12A150u)) {
        auto targetFn = runtime->lookupFunction(0x12A150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A404u; }
        if (ctx->pc != 0x12A404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A150_0x12a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A404u; }
        if (ctx->pc != 0x12A404u) { return; }
    }
    ctx->pc = 0x12A404u;
label_12a404:
    // 0x12a404: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x12a404u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
    // 0x12a408: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a40c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_12a410:
    // 0x12a410: 0x322f0001  andi        $t7, $s1, 0x1
    ctx->pc = 0x12a410u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_12a414:
    // 0x12a414: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12A414u;
    {
        const bool branch_taken_0x12a414 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A414u;
            // 0x12a418: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a414) {
            ctx->pc = 0x12A440u;
            goto label_12a440;
        }
    }
    ctx->pc = 0x12A41Cu;
    // 0x12a41c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12a41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a420: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12a420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a424: 0xc04a862  jal         func_12A188
    ctx->pc = 0x12A424u;
    SET_GPR_U32(ctx, 31, 0x12A42Cu);
    ctx->pc = 0x12A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A424u;
            // 0x12a428: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A188u;
    if (runtime->hasFunction(0x12A188u)) {
        auto targetFn = runtime->lookupFunction(0x12A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A42Cu; }
        if (ctx->pc != 0x12A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A188_0x12a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A42Cu; }
        if (ctx->pc != 0x12A42Cu) { return; }
    }
    ctx->pc = 0x12A42Cu;
label_12a42c:
    // 0x12a42c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a430: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12a430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a434: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12a434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a438: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x12A438u;
    SET_GPR_U32(ctx, 31, 0x12A440u);
    ctx->pc = 0x12A43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A438u;
            // 0x12a43c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A440u; }
        if (ctx->pc != 0x12A440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A440u; }
        if (ctx->pc != 0x12A440u) { return; }
    }
    ctx->pc = 0x12A440u;
label_12a440:
    // 0x12a440: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x12A440u;
    {
        const bool branch_taken_0x12a440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A440u;
            // 0x12a444: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a440) {
            ctx->pc = 0x12A474u;
            goto label_12a474;
        }
    }
    ctx->pc = 0x12A448u;
    // 0x12a448: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a44c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12A44Cu;
    {
        const bool branch_taken_0x12a44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a44c) {
            ctx->pc = 0x12A450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A44Cu;
            // 0x12a450: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a410;
        }
    }
    ctx->pc = 0x12A454u;
    // 0x12a454: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12a454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a458: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12a458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a45c: 0xc04a862  jal         func_12A188
    ctx->pc = 0x12A45Cu;
    SET_GPR_U32(ctx, 31, 0x12A464u);
    ctx->pc = 0x12A460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A45Cu;
            // 0x12a460: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A188u;
    if (runtime->hasFunction(0x12A188u)) {
        auto targetFn = runtime->lookupFunction(0x12A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A464u; }
        if (ctx->pc != 0x12A464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A188_0x12a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A464u; }
        if (ctx->pc != 0x12A464u) { return; }
    }
    ctx->pc = 0x12A464u;
label_12a464:
    // 0x12a464: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x12a464u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x12a468: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12a468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12a46c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x12A46Cu;
    {
        const bool branch_taken_0x12a46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A46Cu;
            // 0x12a470: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a46c) {
            ctx->pc = 0x12A410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a410;
        }
    }
    ctx->pc = 0x12A474u;
label_12a474:
    // 0x12a474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12a478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a47c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12a47cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a480: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12a480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a484: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12a484u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a488: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a48c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A48Cu;
            // 0x12a490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A494u;
    // 0x12a494: 0x0  nop
    ctx->pc = 0x12a494u;
    // NOP
}
