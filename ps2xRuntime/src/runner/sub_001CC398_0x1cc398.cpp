#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC398
// Address: 0x1cc398 - 0x1cc8d0
void sub_001CC398_0x1cc398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC398_0x1cc398");
#endif

    switch (ctx->pc) {
        case 0x1cc3e4u: goto label_1cc3e4;
        case 0x1cc484u: goto label_1cc484;
        case 0x1cc534u: goto label_1cc534;
        case 0x1cc6c4u: goto label_1cc6c4;
        case 0x1cc714u: goto label_1cc714;
        case 0x1cc72cu: goto label_1cc72c;
        case 0x1cc798u: goto label_1cc798;
        case 0x1cc7c0u: goto label_1cc7c0;
        case 0x1cc7dcu: goto label_1cc7dc;
        default: break;
    }

    ctx->pc = 0x1cc398u;

    // 0x1cc398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc39c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1cc39cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cc3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc3ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cc3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc3b4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1cc3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cc3bc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1cc3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cc3c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cc3c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cc3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cc3cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1cc3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3d4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CC3D4u;
    {
        const bool branch_taken_0x1cc3d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3D4u;
            // 0x1cc3d8: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3d4) {
            ctx->pc = 0x1CC428u;
            goto label_1cc428;
        }
    }
    ctx->pc = 0x1CC3DCu;
    // 0x1cc3dc: 0xc05a626  jal         func_169898
    ctx->pc = 0x1CC3DCu;
    SET_GPR_U32(ctx, 31, 0x1CC3E4u);
    ctx->pc = 0x169898u;
    if (runtime->hasFunction(0x169898u)) {
        auto targetFn = runtime->lookupFunction(0x169898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3E4u; }
        if (ctx->pc != 0x1CC3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169898_0x169898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3E4u; }
        if (ctx->pc != 0x1CC3E4u) { return; }
    }
    ctx->pc = 0x1CC3E4u;
label_1cc3e4:
    // 0x1cc3e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc3e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3e8: 0x2402ffeb  addiu       $v0, $zero, -0x15
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967275));
    // 0x1cc3ec: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC3ECu;
    {
        const bool branch_taken_0x1cc3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3ECu;
            // 0x1cc3f0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3ec) {
            ctx->pc = 0x1CC428u;
            goto label_1cc428;
        }
    }
    ctx->pc = 0x1CC3F4u;
    // 0x1cc3f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cc3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc3f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc3fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc404: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cc404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc40c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1cc40cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc414: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1cc414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc41c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc420: 0x8073166  j           func_1CC598
    ctx->pc = 0x1CC420u;
    ctx->pc = 0x1CC424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC420u;
            // 0x1cc424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC598u;
    goto label_1cc598;
    ctx->pc = 0x1CC428u;
label_1cc428:
    // 0x1cc428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc42c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc42cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc430: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc434: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc434u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc438: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc438u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc43c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc440: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC440u;
            // 0x1cc444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC448u;
    // 0x1cc448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc44c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cc450: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cc450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc454: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cc454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc458: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1cc458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc460: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1cc460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc468: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1cc468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc46c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc470: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1cc470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc474: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cc478: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cc478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cc47c: 0xc05a778  jal         func_169DE0
    ctx->pc = 0x1CC47Cu;
    SET_GPR_U32(ctx, 31, 0x1CC484u);
    ctx->pc = 0x1CC480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC47Cu;
            // 0x1cc480: 0x140982d  daddu       $s3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169DE0u;
    if (runtime->hasFunction(0x169DE0u)) {
        auto targetFn = runtime->lookupFunction(0x169DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC484u; }
        if (ctx->pc != 0x1CC484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169DE0_0x169de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC484u; }
        if (ctx->pc != 0x1CC484u) { return; }
    }
    ctx->pc = 0x1CC484u;
label_1cc484:
    // 0x1cc484: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc488: 0x2402ffeb  addiu       $v0, $zero, -0x15
    ctx->pc = 0x1cc488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967275));
    // 0x1cc48c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1cc48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cc490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc494: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc498: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cc498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc49c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1cc49cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4a0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC4A0u;
    {
        const bool branch_taken_0x1cc4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4A0u;
            // 0x1cc4a4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4a0) {
            ctx->pc = 0x1CC4C8u;
            goto label_1cc4c8;
        }
    }
    ctx->pc = 0x1CC4A8u;
    // 0x1cc4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc4acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc4b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc4b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc4b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc4b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc4b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc4b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc4bc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc4c0: 0x8073166  j           func_1CC598
    ctx->pc = 0x1CC4C0u;
    ctx->pc = 0x1CC4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4C0u;
            // 0x1cc4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC598u;
    goto label_1cc598;
    ctx->pc = 0x1CC4C8u;
label_1cc4c8:
    // 0x1cc4c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc4d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc4d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc4d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc4d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc4d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc4dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4E0u;
            // 0x1cc4e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC4E8u;
    // 0x1cc4e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc4ec: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1cc4ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4f4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1cc4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc4fc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1cc4fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc500: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc504: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1cc504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc508: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cc50c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x1cc50cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc510: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cc514: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cc514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc518: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cc518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cc51c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc520: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1cc520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc524: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CC524u;
    {
        const bool branch_taken_0x1cc524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC524u;
            // 0x1cc528: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc524) {
            ctx->pc = 0x1CC578u;
            goto label_1cc578;
        }
    }
    ctx->pc = 0x1CC52Cu;
    // 0x1cc52c: 0xc05a6da  jal         func_169B68
    ctx->pc = 0x1CC52Cu;
    SET_GPR_U32(ctx, 31, 0x1CC534u);
    ctx->pc = 0x169B68u;
    if (runtime->hasFunction(0x169B68u)) {
        auto targetFn = runtime->lookupFunction(0x169B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC534u; }
        if (ctx->pc != 0x1CC534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169B68_0x169b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC534u; }
        if (ctx->pc != 0x1CC534u) { return; }
    }
    ctx->pc = 0x1CC534u;
label_1cc534:
    // 0x1cc534: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc538: 0x2402ffeb  addiu       $v0, $zero, -0x15
    ctx->pc = 0x1cc538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967275));
    // 0x1cc53c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC53Cu;
    {
        const bool branch_taken_0x1cc53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC53Cu;
            // 0x1cc540: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc53c) {
            ctx->pc = 0x1CC578u;
            goto label_1cc578;
        }
    }
    ctx->pc = 0x1CC544u;
    // 0x1cc544: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cc544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc548: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc54c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc554: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cc554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc55c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1cc55cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc560: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc560u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc564: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1cc564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc56c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc570: 0x8073166  j           func_1CC598
    ctx->pc = 0x1CC570u;
    ctx->pc = 0x1CC574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC570u;
            // 0x1cc574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC598u;
    goto label_1cc598;
    ctx->pc = 0x1CC578u;
label_1cc578:
    // 0x1cc578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc57c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc580: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc580u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc584: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc584u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc588: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc588u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc58c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cc58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc590: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC590u;
            // 0x1cc594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC598u;
label_1cc598:
    // 0x1cc598: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cc59c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc5a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cc5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cc5a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5a8: 0x2e230030  sltiu       $v1, $s1, 0x30
    ctx->pc = 0x1cc5a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1cc5ac: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1cc5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1cc5b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cc5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cc5b4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1cc5b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cc5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cc5bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1cc5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1cc5c0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1cc5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1cc5c4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1cc5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1cc5c8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1cc5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1cc5cc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1cc5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1cc5d0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1cc5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1cc5d4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1cc5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1cc5d8: 0x106000b1  beqz        $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x1CC5D8u;
    {
        const bool branch_taken_0x1cc5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5D8u;
            // 0x1cc5dc: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5d8) {
            ctx->pc = 0x1CC8A0u;
            goto label_1cc8a0;
        }
    }
    ctx->pc = 0x1CC5E0u;
    // 0x1cc5e0: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x1cc5e4: 0x11b880  sll         $s7, $s1, 2
    ctx->pc = 0x1cc5e4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1cc5e8: 0x8ec6a70c  lw          $a2, -0x58F4($s6)
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944524)));
    // 0x1cc5ec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1cc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cc5f0: 0x2e62021  addu        $a0, $s7, $a2
    ctx->pc = 0x1cc5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x1cc5f4: 0x8c850dfc  lw          $a1, 0xDFC($a0)
    ctx->pc = 0x1cc5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3580)));
    // 0x1cc5f8: 0x14a300a9  bne         $a1, $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1CC5F8u;
    {
        const bool branch_taken_0x1cc5f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CC5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5F8u;
            // 0x1cc5fc: 0x2402ffec  addiu       $v0, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5f8) {
            ctx->pc = 0x1CC8A0u;
            goto label_1cc8a0;
        }
    }
    ctx->pc = 0x1CC600u;
    // 0x1cc600: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x1cc600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x1cc604: 0x146000a6  bnez        $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x1CC604u;
    {
        const bool branch_taken_0x1cc604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC604u;
            // 0x1cc608: 0x2402fff4  addiu       $v0, $zero, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc604) {
            ctx->pc = 0x1CC8A0u;
            goto label_1cc8a0;
        }
    }
    ctx->pc = 0x1CC60Cu;
    // 0x1cc60c: 0x312307ff  andi        $v1, $t1, 0x7FF
    ctx->pc = 0x1cc60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2047);
    // 0x1cc610: 0x146000a3  bnez        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x1CC610u;
    {
        const bool branch_taken_0x1cc610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC610u;
            // 0x1cc614: 0x2402fff3  addiu       $v0, $zero, -0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc610) {
            ctx->pc = 0x1CC8A0u;
            goto label_1cc8a0;
        }
    }
    ctx->pc = 0x1CC618u;
    // 0x1cc618: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC618u;
    {
        const bool branch_taken_0x1cc618 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC618u;
            // 0x1cc61c: 0x119840  sll         $s3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc618) {
            ctx->pc = 0x1CC640u;
            goto label_1cc640;
        }
    }
    ctx->pc = 0x1CC620u;
    // 0x1cc620: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1cc620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1cc624: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1cc624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1cc628: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc62c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cc630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc634: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cc634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cc638: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC638u;
    {
        const bool branch_taken_0x1cc638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC638u;
            // 0x1cc63c: 0xac430ec0  sw          $v1, 0xEC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3776), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc638) {
            ctx->pc = 0x1CC658u;
            goto label_1cc658;
        }
    }
    ctx->pc = 0x1CC640u;
label_1cc640:
    // 0x1cc640: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1cc640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1cc644: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc648: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cc648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cc64c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc650: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cc650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cc654: 0xac470ec0  sw          $a3, 0xEC0($v0)
    ctx->pc = 0x1cc654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3776), GPR_U32(ctx, 7));
label_1cc658:
    // 0x1cc658: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CC658u;
    {
        const bool branch_taken_0x1cc658 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC658u;
            // 0x1cc65c: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc658) {
            ctx->pc = 0x1CC680u;
            goto label_1cc680;
        }
    }
    ctx->pc = 0x1CC660u;
    // 0x1cc660: 0x8ec4a70c  lw          $a0, -0x58F4($s6)
    ctx->pc = 0x1cc660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944524)));
    // 0x1cc664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc668: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1cc668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1cc66c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cc670: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc674: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cc678: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC678u;
    {
        const bool branch_taken_0x1cc678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC678u;
            // 0x1cc67c: 0xac430ec4  sw          $v1, 0xEC4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc678) {
            ctx->pc = 0x1CC698u;
            goto label_1cc698;
        }
    }
    ctx->pc = 0x1CC680u;
label_1cc680:
    // 0x1cc680: 0x8ec3a70c  lw          $v1, -0x58F4($s6)
    ctx->pc = 0x1cc680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294944524)));
    // 0x1cc684: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc688: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cc688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cc68c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc694: 0xac490ec4  sw          $t1, 0xEC4($v0)
    ctx->pc = 0x1cc694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3780), GPR_U32(ctx, 9));
label_1cc698:
    // 0x1cc698: 0x2719021  addu        $s2, $s3, $s1
    ctx->pc = 0x1cc698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1cc69c: 0x26d4a70c  addiu       $s4, $s6, -0x58F4
    ctx->pc = 0x1cc69cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1cc6a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1cc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1cc6a4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1cc6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc6a8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cc6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6b0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x1cc6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc6b4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x1cc6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1cc6b8: 0x24a60ed4  addiu       $a2, $a1, 0xED4
    ctx->pc = 0x1cc6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3796));
    // 0x1cc6bc: 0xc0726fe  jal         func_1C9BF8
    ctx->pc = 0x1CC6BCu;
    SET_GPR_U32(ctx, 31, 0x1CC6C4u);
    ctx->pc = 0x1CC6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6BCu;
            // 0x1cc6c0: 0x24a50ed0  addiu       $a1, $a1, 0xED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9BF8u;
    if (runtime->hasFunction(0x1C9BF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C9BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6C4u; }
        if (ctx->pc != 0x1CC6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9BF8_0x1c9bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6C4u; }
        if (ctx->pc != 0x1CC6C4u) { return; }
    }
    ctx->pc = 0x1CC6C4u;
label_1cc6c4:
    // 0x1cc6c4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1cc6c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc6c8: 0x7c20076  bltzl       $fp, . + 4 + (0x76 << 2)
    ctx->pc = 0x1CC6C8u;
    {
        const bool branch_taken_0x1cc6c8 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x1cc6c8) {
            ctx->pc = 0x1CC6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6C8u;
            // 0x1cc6cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC8A4u;
            goto label_1cc8a4;
        }
    }
    ctx->pc = 0x1CC6D0u;
    // 0x1cc6d0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1cc6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1cc6d4: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x1cc6d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
    // 0x1cc6d8: 0x26528a88  addiu       $s2, $s2, -0x7578
    ctx->pc = 0x1cc6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937224));
    // 0x1cc6dc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1cc6dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cc6e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cc6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc6e4: 0x16a00014  bnez        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CC6E4u;
    {
        const bool branch_taken_0x1cc6e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6E4u;
            // 0x1cc6e8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc6e4) {
            ctx->pc = 0x1CC738u;
            goto label_1cc738;
        }
    }
    ctx->pc = 0x1CC6ECu;
    // 0x1cc6ec: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1cc6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc6f0: 0x26100eb0  addiu       $s0, $s0, 0xEB0
    ctx->pc = 0x1cc6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3760));
    // 0x1cc6f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc6f8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1cc6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1cc6fc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1cc6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1cc700: 0xa065000c  sb          $a1, 0xC($v1)
    ctx->pc = 0x1cc700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cc704: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1cc704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc708: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cc708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cc70c: 0xc04a1c2  jal         func_128708
    ctx->pc = 0x1CC70Cu;
    SET_GPR_U32(ctx, 31, 0x1CC714u);
    ctx->pc = 0x1CC710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC70Cu;
            // 0x1cc710: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128708u;
    if (runtime->hasFunction(0x128708u)) {
        auto targetFn = runtime->lookupFunction(0x128708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC714u; }
        if (ctx->pc != 0x1CC714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128708_0x128708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC714u; }
        if (ctx->pc != 0x1CC714u) { return; }
    }
    ctx->pc = 0x1CC714u;
label_1cc714:
    // 0x1cc714: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1cc714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc718: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1cc718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1cc71c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CC71Cu;
    {
        const bool branch_taken_0x1cc71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC71Cu;
            // 0x1cc720: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc71c) {
            ctx->pc = 0x1CC754u;
            goto label_1cc754;
        }
    }
    ctx->pc = 0x1CC724u;
    // 0x1cc724: 0xc05a804  jal         func_16A010
    ctx->pc = 0x1CC724u;
    SET_GPR_U32(ctx, 31, 0x1CC72Cu);
    ctx->pc = 0x1CC728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC724u;
            // 0x1cc728: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC72Cu; }
        if (ctx->pc != 0x1CC72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A010_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC72Cu; }
        if (ctx->pc != 0x1CC72Cu) { return; }
    }
    ctx->pc = 0x1CC72Cu;
label_1cc72c:
    // 0x1cc72c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1CC72Cu;
    {
        const bool branch_taken_0x1cc72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC72Cu;
            // 0x1cc730: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc72c) {
            ctx->pc = 0x1CC8A0u;
            goto label_1cc8a0;
        }
    }
    ctx->pc = 0x1CC734u;
    // 0x1cc734: 0x0  nop
    ctx->pc = 0x1cc734u;
    // NOP
label_1cc738:
    // 0x1cc738: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1cc738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc73c: 0x26040eb0  addiu       $a0, $s0, 0xEB0
    ctx->pc = 0x1cc73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3760));
    // 0x1cc740: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cc740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cc744: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x1cc744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc748: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1cc748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc74c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cc750: 0xac750018  sw          $s5, 0x18($v1)
    ctx->pc = 0x1cc750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 21));
label_1cc754:
    // 0x1cc754: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1cc754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cc758: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CC758u;
    {
        const bool branch_taken_0x1cc758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC758u;
            // 0x1cc75c: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc758) {
            ctx->pc = 0x1CC7E8u;
            goto label_1cc7e8;
        }
    }
    ctx->pc = 0x1CC760u;
    // 0x1cc760: 0x271a821  addu        $s5, $s3, $s1
    ctx->pc = 0x1cc760u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1cc764: 0x26d4a70c  addiu       $s4, $s6, -0x58F4
    ctx->pc = 0x1cc764u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1cc768: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x1cc768u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1cc76c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1cc76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc770: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1cc770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1cc774: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc778: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1cc778u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cc77c: 0x26120eb0  addiu       $s2, $s0, 0xEB0
    ctx->pc = 0x1cc77cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3760));
    // 0x1cc780: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1cc780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1cc784: 0xa064000d  sb          $a0, 0xD($v1)
    ctx->pc = 0x1cc784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cc788: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1cc788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc78c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1cc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1cc790: 0xc045208  jal         func_114820
    ctx->pc = 0x1CC790u;
    SET_GPR_U32(ctx, 31, 0x1CC798u);
    ctx->pc = 0x1CC794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC790u;
            // 0x1cc794: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114820u;
    if (runtime->hasFunction(0x114820u)) {
        auto targetFn = runtime->lookupFunction(0x114820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC798u; }
        if (ctx->pc != 0x1CC798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00114820_0x114820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC798u; }
        if (ctx->pc != 0x1CC798u) { return; }
    }
    ctx->pc = 0x1CC798u;
label_1cc798:
    // 0x1cc798: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1cc798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc79c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1cc79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1cc7a0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CC7A0u;
    {
        const bool branch_taken_0x1cc7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC7A0u;
            // 0x1cc7a4: 0xae020ecc  sw          $v0, 0xECC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7a0) {
            ctx->pc = 0x1CC814u;
            goto label_1cc814;
        }
    }
    ctx->pc = 0x1CC7A8u;
    // 0x1cc7a8: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1cc7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x1cc7ac: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1cc7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x1cc7b0: 0x24c38a88  addiu       $v1, $a2, -0x7578
    ctx->pc = 0x1cc7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937224));
    // 0x1cc7b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc7b8: 0xc05a804  jal         func_16A010
    ctx->pc = 0x1CC7B8u;
    SET_GPR_U32(ctx, 31, 0x1CC7C0u);
    ctx->pc = 0x1CC7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC7B8u;
            // 0x1cc7bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7C0u; }
        if (ctx->pc != 0x1CC7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A010_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7C0u; }
        if (ctx->pc != 0x1CC7C0u) { return; }
    }
    ctx->pc = 0x1CC7C0u;
label_1cc7c0:
    // 0x1cc7c0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1cc7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cc7c4: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1cc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1cc7c8: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x1cc7c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cc7cc: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1CC7CCu;
    {
        const bool branch_taken_0x1cc7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc7cc) {
            ctx->pc = 0x1CC7D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC7CCu;
            // 0x1cc7d0: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CC8A0u;
            goto label_1cc8a0;
        }
    }
    ctx->pc = 0x1CC7D4u;
    // 0x1cc7d4: 0xc04a246  jal         func_128918
    ctx->pc = 0x1CC7D4u;
    SET_GPR_U32(ctx, 31, 0x1CC7DCu);
    ctx->pc = 0x1CC7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC7D4u;
            // 0x1cc7d8: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7DCu; }
        if (ctx->pc != 0x1CC7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC7DCu; }
        if (ctx->pc != 0x1CC7DCu) { return; }
    }
    ctx->pc = 0x1CC7DCu;
label_1cc7dc:
    // 0x1cc7dc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1CC7DCu;
    {
        const bool branch_taken_0x1cc7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC7DCu;
            // 0x1cc7e0: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc7dc) {
            ctx->pc = 0x1CC8A0u;
            goto label_1cc8a0;
        }
    }
    ctx->pc = 0x1CC7E4u;
    // 0x1cc7e4: 0x0  nop
    ctx->pc = 0x1cc7e4u;
    // NOP
label_1cc7e8:
    // 0x1cc7e8: 0x26c5a70c  addiu       $a1, $s6, -0x58F4
    ctx->pc = 0x1cc7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1cc7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc7f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1cc7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cc7f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cc7f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc7fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc800: 0xa0600ebd  sb          $zero, 0xEBD($v1)
    ctx->pc = 0x1cc800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3773), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc804: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1cc804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cc808: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1cc808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cc80c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cc810: 0xac430ecc  sw          $v1, 0xECC($v0)
    ctx->pc = 0x1cc810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3788), GPR_U32(ctx, 3));
label_1cc814:
    // 0x1cc814: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x1cc814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1cc818: 0x26c8a70c  addiu       $t0, $s6, -0x58F4
    ctx->pc = 0x1cc818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944524));
    // 0x1cc81c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cc81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cc820: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cc820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cc824: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1cc824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cc828: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cc828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cc82c: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1cc82cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x1cc830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cc830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1cc834: 0x24c48a88  addiu       $a0, $a2, -0x7578
    ctx->pc = 0x1cc834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937224));
    // 0x1cc838: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1cc838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cc83c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cc83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cc840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc844: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1cc844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc848: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cc848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1cc84c: 0xac400ed8  sw          $zero, 0xED8($v0)
    ctx->pc = 0x1cc84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3800), GPR_U32(ctx, 0));
    // 0x1cc850: 0x322900ff  andi        $t1, $s1, 0xFF
    ctx->pc = 0x1cc850u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1cc854: 0xa0c30ebe  sb          $v1, 0xEBE($a2)
    ctx->pc = 0x1cc854u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3774), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cc858: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc85c: 0x26e50c70  addiu       $a1, $s7, 0xC70
    ctx->pc = 0x1cc85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 3184));
    // 0x1cc860: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x1cc860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cc864: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x1cc864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1cc868: 0x8d06187c  lw          $a2, 0x187C($t0)
    ctx->pc = 0x1cc868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6268)));
    // 0x1cc86c: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x1cc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1cc870: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cc870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cc874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc878: 0xac470bb0  sw          $a3, 0xBB0($v0)
    ctx->pc = 0x1cc878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2992), GPR_U32(ctx, 7));
    // 0x1cc87c: 0xac890df0  sw          $t1, 0xDF0($a0)
    ctx->pc = 0x1cc87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3568), GPR_U32(ctx, 9));
    // 0x1cc880: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cc880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc884: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1cc884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1cc888: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC888u;
    {
        const bool branch_taken_0x1cc888 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC888u;
            // 0x1cc88c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc888) {
            ctx->pc = 0x1CC89Cu;
            goto label_1cc89c;
        }
    }
    ctx->pc = 0x1CC890u;
    // 0x1cc890: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1cc890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1cc894: 0x2442b868  addiu       $v0, $v0, -0x4798
    ctx->pc = 0x1cc894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948968));
    // 0x1cc898: 0xad02187c  sw          $v0, 0x187C($t0)
    ctx->pc = 0x1cc898u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6268), GPR_U32(ctx, 2));
label_1cc89c:
    // 0x1cc89c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1cc89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cc8a0:
    // 0x1cc8a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cc8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc8a4:
    // 0x1cc8a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cc8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc8a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cc8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc8ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1cc8acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc8b0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1cc8b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc8b4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1cc8b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cc8b8: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1cc8b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc8bc: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1cc8bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cc8c0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1cc8c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cc8c4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1cc8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cc8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC8C8u;
            // 0x1cc8cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC8D0u;
}
