#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127638
// Address: 0x127638 - 0x1276d0
void sub_00127638_0x127638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127638_0x127638");
#endif

    switch (ctx->pc) {
        case 0x127638u: goto label_127638;
        case 0x12763cu: goto label_12763c;
        case 0x127640u: goto label_127640;
        case 0x127644u: goto label_127644;
        case 0x127648u: goto label_127648;
        case 0x12764cu: goto label_12764c;
        case 0x127650u: goto label_127650;
        case 0x127654u: goto label_127654;
        case 0x127658u: goto label_127658;
        case 0x12765cu: goto label_12765c;
        case 0x127660u: goto label_127660;
        case 0x127664u: goto label_127664;
        case 0x127668u: goto label_127668;
        case 0x12766cu: goto label_12766c;
        case 0x127670u: goto label_127670;
        case 0x127674u: goto label_127674;
        case 0x127678u: goto label_127678;
        case 0x12767cu: goto label_12767c;
        case 0x127680u: goto label_127680;
        case 0x127684u: goto label_127684;
        case 0x127688u: goto label_127688;
        case 0x12768cu: goto label_12768c;
        case 0x127690u: goto label_127690;
        case 0x127694u: goto label_127694;
        case 0x127698u: goto label_127698;
        case 0x12769cu: goto label_12769c;
        case 0x1276a0u: goto label_1276a0;
        case 0x1276a4u: goto label_1276a4;
        case 0x1276a8u: goto label_1276a8;
        case 0x1276acu: goto label_1276ac;
        case 0x1276b0u: goto label_1276b0;
        case 0x1276b4u: goto label_1276b4;
        case 0x1276b8u: goto label_1276b8;
        case 0x1276bcu: goto label_1276bc;
        case 0x1276c0u: goto label_1276c0;
        case 0x1276c4u: goto label_1276c4;
        case 0x1276c8u: goto label_1276c8;
        case 0x1276ccu: goto label_1276cc;
        default: break;
    }

    ctx->pc = 0x127638u;

label_127638:
    // 0x127638: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x127638u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
label_12763c:
    // 0x12763c: 0x3e00008  jr          $ra
label_127640:
    if (ctx->pc == 0x127640u) {
        ctx->pc = 0x127640u;
            // 0x127640: 0x8de21ad8  lw          $v0, 0x1AD8($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
        ctx->pc = 0x127644u;
        goto label_127644;
    }
    ctx->pc = 0x12763Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12763Cu;
            // 0x127640: 0x8de21ad8  lw          $v0, 0x1AD8($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127644u;
label_127644:
    // 0x127644: 0x0  nop
    ctx->pc = 0x127644u;
    // NOP
label_127648:
    // 0x127648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12764c:
    // 0x12764c: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12764cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
label_127650:
    // 0x127650: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x127650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_127654:
    // 0x127654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_127658:
    // 0x127658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12765c:
    // 0x12765c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_127660:
    // 0x127660: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x127660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_127664:
    // 0x127664: 0x8dee1ad8  lw          $t6, 0x1AD8($t7)
    ctx->pc = 0x127664u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
label_127668:
    // 0x127668: 0x8dd20148  lw          $s2, 0x148($t6)
    ctx->pc = 0x127668u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 328)));
label_12766c:
    // 0x12766c: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_127670:
    if (ctx->pc == 0x127670u) {
        ctx->pc = 0x127670u;
            // 0x127670: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x127674u;
        goto label_127674;
    }
    ctx->pc = 0x12766Cu;
    {
        const bool branch_taken_0x12766c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x127670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12766Cu;
            // 0x127670: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12766c) {
            ctx->pc = 0x1276B0u;
            goto label_1276b0;
        }
    }
    ctx->pc = 0x127674u;
label_127674:
    // 0x127674: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x127674u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_127678:
    // 0x127678: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x127678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_12767c:
    // 0x12767c: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
label_127680:
    if (ctx->pc == 0x127680u) {
        ctx->pc = 0x127680u;
            // 0x127680: 0x117880  sll         $t7, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x127684u;
        goto label_127684;
    }
    ctx->pc = 0x12767Cu;
    {
        const bool branch_taken_0x12767c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x127680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12767Cu;
            // 0x127680: 0x117880  sll         $t7, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12767c) {
            ctx->pc = 0x1276A0u;
            goto label_1276a0;
        }
    }
    ctx->pc = 0x127684u;
label_127684:
    // 0x127684: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x127684u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_127688:
    // 0x127688: 0x25f00008  addiu       $s0, $t7, 0x8
    ctx->pc = 0x127688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_12768c:
    // 0x12768c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x12768cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_127690:
    // 0x127690: 0x1e0f809  jalr        $t7
label_127694:
    if (ctx->pc == 0x127694u) {
        ctx->pc = 0x127694u;
            // 0x127694: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x127698u;
        goto label_127698;
    }
    ctx->pc = 0x127690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x127698u);
        ctx->pc = 0x127694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127690u;
            // 0x127694: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x127698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x127698u; }
            if (ctx->pc != 0x127698u) { return; }
        }
        }
    }
    ctx->pc = 0x127698u;
label_127698:
    // 0x127698: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
label_12769c:
    if (ctx->pc == 0x12769Cu) {
        ctx->pc = 0x12769Cu;
            // 0x12769c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x1276A0u;
        goto label_1276a0;
    }
    ctx->pc = 0x127698u;
    {
        const bool branch_taken_0x127698 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x12769Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127698u;
            // 0x12769c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127698) {
            ctx->pc = 0x12768Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12768c;
        }
    }
    ctx->pc = 0x1276A0u;
label_1276a0:
    // 0x1276a0: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1276a4:
    // 0x1276a4: 0x5640fff4  bnel        $s2, $zero, . + 4 + (-0xC << 2)
label_1276a8:
    if (ctx->pc == 0x1276A8u) {
        ctx->pc = 0x1276A8u;
            // 0x1276a8: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x1276ACu;
        goto label_1276ac;
    }
    ctx->pc = 0x1276A4u;
    {
        const bool branch_taken_0x1276a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1276a4) {
            ctx->pc = 0x1276A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1276A4u;
            // 0x1276a8: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_127678;
        }
    }
    ctx->pc = 0x1276ACu;
label_1276ac:
    // 0x1276ac: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x1276acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
label_1276b0:
    // 0x1276b0: 0x8de41ad8  lw          $a0, 0x1AD8($t7)
    ctx->pc = 0x1276b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
label_1276b4:
    // 0x1276b4: 0x8c8f003c  lw          $t7, 0x3C($a0)
    ctx->pc = 0x1276b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1276b8:
    // 0x1276b8: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
label_1276bc:
    if (ctx->pc == 0x1276BCu) {
        ctx->pc = 0x1276C0u;
        goto label_1276c0;
    }
    ctx->pc = 0x1276B8u;
    {
        const bool branch_taken_0x1276b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1276b8) {
            ctx->pc = 0x1276C8u;
            goto label_1276c8;
        }
    }
    ctx->pc = 0x1276C0u;
label_1276c0:
    // 0x1276c0: 0x1e0f809  jalr        $t7
label_1276c4:
    if (ctx->pc == 0x1276C4u) {
        ctx->pc = 0x1276C8u;
        goto label_1276c8;
    }
    ctx->pc = 0x1276C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x1276C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1276C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1276C8u; }
            if (ctx->pc != 0x1276C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1276C8u;
label_1276c8:
    // 0x1276c8: 0xc040086  jal         func_100218
label_1276cc:
    if (ctx->pc == 0x1276CCu) {
        ctx->pc = 0x1276CCu;
            // 0x1276cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1276D0u;
        goto label_fallthrough_0x1276c8;
    }
    ctx->pc = 0x1276C8u;
    SET_GPR_U32(ctx, 31, 0x1276D0u);
    ctx->pc = 0x1276CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1276C8u;
            // 0x1276cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100218u;
    if (runtime->hasFunction(0x100218u)) {
        auto targetFn = runtime->lookupFunction(0x100218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1276D0u; }
        if (ctx->pc != 0x1276D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100218_0x100218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1276D0u; }
        if (ctx->pc != 0x1276D0u) { return; }
    }
label_fallthrough_0x1276c8:
    ctx->pc = 0x1276D0u;
}
