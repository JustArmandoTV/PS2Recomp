#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001283F0
// Address: 0x1283f0 - 0x128540
void sub_001283F0_0x1283f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001283F0_0x1283f0");
#endif

    switch (ctx->pc) {
        case 0x1283f0u: goto label_1283f0;
        case 0x1283f4u: goto label_1283f4;
        case 0x1283f8u: goto label_1283f8;
        case 0x1283fcu: goto label_1283fc;
        case 0x128400u: goto label_128400;
        case 0x128404u: goto label_128404;
        case 0x128408u: goto label_128408;
        case 0x12840cu: goto label_12840c;
        case 0x128410u: goto label_128410;
        case 0x128414u: goto label_128414;
        case 0x128418u: goto label_128418;
        case 0x12841cu: goto label_12841c;
        case 0x128420u: goto label_128420;
        case 0x128424u: goto label_128424;
        case 0x128428u: goto label_128428;
        case 0x12842cu: goto label_12842c;
        case 0x128430u: goto label_128430;
        case 0x128434u: goto label_128434;
        case 0x128438u: goto label_128438;
        case 0x12843cu: goto label_12843c;
        case 0x128440u: goto label_128440;
        case 0x128444u: goto label_128444;
        case 0x128448u: goto label_128448;
        case 0x12844cu: goto label_12844c;
        case 0x128450u: goto label_128450;
        case 0x128454u: goto label_128454;
        case 0x128458u: goto label_128458;
        case 0x12845cu: goto label_12845c;
        case 0x128460u: goto label_128460;
        case 0x128464u: goto label_128464;
        case 0x128468u: goto label_128468;
        case 0x12846cu: goto label_12846c;
        case 0x128470u: goto label_128470;
        case 0x128474u: goto label_128474;
        case 0x128478u: goto label_128478;
        case 0x12847cu: goto label_12847c;
        case 0x128480u: goto label_128480;
        case 0x128484u: goto label_128484;
        case 0x128488u: goto label_128488;
        case 0x12848cu: goto label_12848c;
        case 0x128490u: goto label_128490;
        case 0x128494u: goto label_128494;
        case 0x128498u: goto label_128498;
        case 0x12849cu: goto label_12849c;
        case 0x1284a0u: goto label_1284a0;
        case 0x1284a4u: goto label_1284a4;
        case 0x1284a8u: goto label_1284a8;
        case 0x1284acu: goto label_1284ac;
        case 0x1284b0u: goto label_1284b0;
        case 0x1284b4u: goto label_1284b4;
        case 0x1284b8u: goto label_1284b8;
        case 0x1284bcu: goto label_1284bc;
        case 0x1284c0u: goto label_1284c0;
        case 0x1284c4u: goto label_1284c4;
        case 0x1284c8u: goto label_1284c8;
        case 0x1284ccu: goto label_1284cc;
        case 0x1284d0u: goto label_1284d0;
        case 0x1284d4u: goto label_1284d4;
        case 0x1284d8u: goto label_1284d8;
        case 0x1284dcu: goto label_1284dc;
        case 0x1284e0u: goto label_1284e0;
        case 0x1284e4u: goto label_1284e4;
        case 0x1284e8u: goto label_1284e8;
        case 0x1284ecu: goto label_1284ec;
        case 0x1284f0u: goto label_1284f0;
        case 0x1284f4u: goto label_1284f4;
        case 0x1284f8u: goto label_1284f8;
        case 0x1284fcu: goto label_1284fc;
        case 0x128500u: goto label_128500;
        case 0x128504u: goto label_128504;
        case 0x128508u: goto label_128508;
        case 0x12850cu: goto label_12850c;
        case 0x128510u: goto label_128510;
        case 0x128514u: goto label_128514;
        case 0x128518u: goto label_128518;
        case 0x12851cu: goto label_12851c;
        case 0x128520u: goto label_128520;
        case 0x128524u: goto label_128524;
        case 0x128528u: goto label_128528;
        case 0x12852cu: goto label_12852c;
        case 0x128530u: goto label_128530;
        case 0x128534u: goto label_128534;
        case 0x128538u: goto label_128538;
        case 0x12853cu: goto label_12853c;
        default: break;
    }

    ctx->pc = 0x1283f0u;

label_1283f0:
    // 0x1283f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1283f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1283f4:
    // 0x1283f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1283f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1283f8:
    // 0x1283f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1283f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1283fc:
    // 0x1283fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1283fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_128400:
    // 0x128400: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x128400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_128404:
    // 0x128404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_128408:
    // 0x128408: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x128408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12840c:
    // 0x12840c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_128410:
    // 0x128410: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x128410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_128414:
    // 0x128414: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_128418:
    if (ctx->pc == 0x128418u) {
        ctx->pc = 0x128418u;
            // 0x128418: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12841Cu;
        goto label_12841c;
    }
    ctx->pc = 0x128414u;
    {
        const bool branch_taken_0x128414 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x128418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128414u;
            // 0x128418: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128414) {
            ctx->pc = 0x12845Cu;
            goto label_12845c;
        }
    }
    ctx->pc = 0x12841Cu;
label_12841c:
    // 0x12841c: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x12841cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_128420:
    // 0x128420: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x128420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_128424:
    // 0x128424: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
label_128428:
    if (ctx->pc == 0x128428u) {
        ctx->pc = 0x128428u;
            // 0x128428: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x12842Cu;
        goto label_12842c;
    }
    ctx->pc = 0x128424u;
    {
        const bool branch_taken_0x128424 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x128428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128424u;
            // 0x128428: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128424) {
            ctx->pc = 0x128450u;
            goto label_128450;
        }
    }
    ctx->pc = 0x12842Cu;
label_12842c:
    // 0x12842c: 0x860f000c  lh          $t7, 0xC($s0)
    ctx->pc = 0x12842cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_128430:
    // 0x128430: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
label_128434:
    if (ctx->pc == 0x128434u) {
        ctx->pc = 0x128434u;
            // 0x128434: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x128438u;
        goto label_128438;
    }
    ctx->pc = 0x128430u;
    {
        const bool branch_taken_0x128430 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x128430) {
            ctx->pc = 0x128434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128430u;
            // 0x128434: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128448u;
            goto label_128448;
        }
    }
    ctx->pc = 0x128438u;
label_128438:
    // 0x128438: 0x280f809  jalr        $s4
label_12843c:
    if (ctx->pc == 0x12843Cu) {
        ctx->pc = 0x12843Cu;
            // 0x12843c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x128440u;
        goto label_128440;
    }
    ctx->pc = 0x128438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x128440u);
        ctx->pc = 0x12843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128438u;
            // 0x12843c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x128440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x128440u; }
            if (ctx->pc != 0x128440u) { return; }
        }
        }
    }
    ctx->pc = 0x128440u;
label_128440:
    // 0x128440: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x128440u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_128444:
    // 0x128444: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x128444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_128448:
    // 0x128448: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
label_12844c:
    if (ctx->pc == 0x12844Cu) {
        ctx->pc = 0x12844Cu;
            // 0x12844c: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->pc = 0x128450u;
        goto label_128450;
    }
    ctx->pc = 0x128448u;
    {
        const bool branch_taken_0x128448 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x12844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128448u;
            // 0x12844c: 0x26100058  addiu       $s0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128448) {
            ctx->pc = 0x12842Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12842c;
        }
    }
    ctx->pc = 0x128450u;
label_128450:
    // 0x128450: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x128450u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_128454:
    // 0x128454: 0x5640fff2  bnel        $s2, $zero, . + 4 + (-0xE << 2)
label_128458:
    if (ctx->pc == 0x128458u) {
        ctx->pc = 0x128458u;
            // 0x128458: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x12845Cu;
        goto label_12845c;
    }
    ctx->pc = 0x128454u;
    {
        const bool branch_taken_0x128454 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x128454) {
            ctx->pc = 0x128458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x128454u;
            // 0x128458: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x128420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_128420;
        }
    }
    ctx->pc = 0x12845Cu;
label_12845c:
    // 0x12845c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x12845cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_128460:
    // 0x128460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128464:
    // 0x128464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_128468:
    // 0x128468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x128468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12846c:
    // 0x12846c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12846cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_128470:
    // 0x128470: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x128470u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_128474:
    // 0x128474: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x128474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_128478:
    // 0x128478: 0x3e00008  jr          $ra
label_12847c:
    if (ctx->pc == 0x12847Cu) {
        ctx->pc = 0x12847Cu;
            // 0x12847c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x128480u;
        goto label_128480;
    }
    ctx->pc = 0x128478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12847Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128478u;
            // 0x12847c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128480u;
label_128480:
    // 0x128480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x128480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_128484:
    // 0x128484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_128488:
    // 0x128488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12848c:
    // 0x12848c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_128490:
    // 0x128490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x128490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_128494:
    // 0x128494: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x128494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_128498:
    // 0x128498: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x128498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12849c:
    // 0x12849c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1284a0:
    // 0x1284a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1284a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1284a4:
    // 0x1284a4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
label_1284a8:
    if (ctx->pc == 0x1284A8u) {
        ctx->pc = 0x1284A8u;
            // 0x1284a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1284ACu;
        goto label_1284ac;
    }
    ctx->pc = 0x1284A4u;
    {
        const bool branch_taken_0x1284a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284A4u;
            // 0x1284a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284a4) {
            ctx->pc = 0x128500u;
            goto label_128500;
        }
    }
    ctx->pc = 0x1284ACu;
label_1284ac:
    // 0x1284ac: 0x3c130063  lui         $s3, 0x63
    ctx->pc = 0x1284acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
label_1284b0:
    // 0x1284b0: 0xc04af96  jal         func_12BE58
label_1284b4:
    if (ctx->pc == 0x1284B4u) {
        ctx->pc = 0x1284B4u;
            // 0x1284b4: 0x26650900  addiu       $a1, $s3, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2304));
        ctx->pc = 0x1284B8u;
        goto label_1284b8;
    }
    ctx->pc = 0x1284B0u;
    SET_GPR_U32(ctx, 31, 0x1284B8u);
    ctx->pc = 0x1284B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1284B0u;
            // 0x1284b4: 0x26650900  addiu       $a1, $s3, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284B8u; }
        if (ctx->pc != 0x1284B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284B8u; }
        if (ctx->pc != 0x1284B8u) { return; }
    }
    ctx->pc = 0x1284B8u;
label_1284b8:
    // 0x1284b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1284bc:
    if (ctx->pc == 0x1284BCu) {
        ctx->pc = 0x1284BCu;
            // 0x1284bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1284C0u;
        goto label_1284c0;
    }
    ctx->pc = 0x1284B8u;
    {
        const bool branch_taken_0x1284b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1284BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284B8u;
            // 0x1284bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284b8) {
            ctx->pc = 0x1284D4u;
            goto label_1284d4;
        }
    }
    ctx->pc = 0x1284C0u;
label_1284c0:
    // 0x1284c0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1284c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_1284c4:
    // 0x1284c4: 0xc04af96  jal         func_12BE58
label_1284c8:
    if (ctx->pc == 0x1284C8u) {
        ctx->pc = 0x1284C8u;
            // 0x1284c8: 0x24a508c8  addiu       $a1, $a1, 0x8C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2248));
        ctx->pc = 0x1284CCu;
        goto label_1284cc;
    }
    ctx->pc = 0x1284C4u;
    SET_GPR_U32(ctx, 31, 0x1284CCu);
    ctx->pc = 0x1284C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1284C4u;
            // 0x1284c8: 0x24a508c8  addiu       $a1, $a1, 0x8C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284CCu; }
        if (ctx->pc != 0x1284CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1284CCu; }
        if (ctx->pc != 0x1284CCu) { return; }
    }
    ctx->pc = 0x1284CCu;
label_1284cc:
    // 0x1284cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1284d0:
    if (ctx->pc == 0x1284D0u) {
        ctx->pc = 0x1284D0u;
            // 0x1284d0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1284D4u;
        goto label_1284d4;
    }
    ctx->pc = 0x1284CCu;
    {
        const bool branch_taken_0x1284cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1284D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284CCu;
            // 0x1284d0: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1284cc) {
            ctx->pc = 0x1284E0u;
            goto label_1284e0;
        }
    }
    ctx->pc = 0x1284D4u;
label_1284d4:
    // 0x1284d4: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1284d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_1284d8:
    // 0x1284d8: 0xae320030  sw          $s2, 0x30($s1)
    ctx->pc = 0x1284d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
label_1284dc:
    // 0x1284dc: 0x266f0900  addiu       $t7, $s3, 0x900
    ctx->pc = 0x1284dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 2304));
label_1284e0:
    // 0x1284e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1284e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1284e4:
    // 0x1284e4: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1284e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_1284e8:
    // 0x1284e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1284e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1284ec:
    // 0x1284ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1284ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1284f0:
    // 0x1284f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1284f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1284f4:
    // 0x1284f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1284f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1284f8:
    // 0x1284f8: 0x3e00008  jr          $ra
label_1284fc:
    if (ctx->pc == 0x1284FCu) {
        ctx->pc = 0x1284FCu;
            // 0x1284fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x128500u;
        goto label_128500;
    }
    ctx->pc = 0x1284F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1284FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1284F8u;
            // 0x1284fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128500u;
label_128500:
    // 0x128500: 0x1000fff6  b           . + 4 + (-0xA << 2)
label_128504:
    if (ctx->pc == 0x128504u) {
        ctx->pc = 0x128504u;
            // 0x128504: 0x3c130063  lui         $s3, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x128508u;
        goto label_128508;
    }
    ctx->pc = 0x128500u;
    {
        const bool branch_taken_0x128500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128500u;
            // 0x128504: 0x3c130063  lui         $s3, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128500) {
            ctx->pc = 0x1284DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1284dc;
        }
    }
    ctx->pc = 0x128508u;
label_128508:
    // 0x128508: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x128508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_12850c:
    // 0x12850c: 0x3e00008  jr          $ra
label_128510:
    if (ctx->pc == 0x128510u) {
        ctx->pc = 0x128510u;
            // 0x128510: 0x244208d0  addiu       $v0, $v0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2256));
        ctx->pc = 0x128514u;
        goto label_128514;
    }
    ctx->pc = 0x12850Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12850Cu;
            // 0x128510: 0x244208d0  addiu       $v0, $v0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128514u;
label_128514:
    // 0x128514: 0x0  nop
    ctx->pc = 0x128514u;
    // NOP
label_128518:
    // 0x128518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12851c:
    // 0x12851c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x12851cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_128520:
    // 0x128520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x128520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_128524:
    // 0x128524: 0x3c0e005d  lui         $t6, 0x5D
    ctx->pc = 0x128524u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)93 << 16));
label_128528:
    // 0x128528: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x128528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12852c:
    // 0x12852c: 0x8dc41ad8  lw          $a0, 0x1AD8($t6)
    ctx->pc = 0x12852cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 6872)));
label_128530:
    // 0x128530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_128534:
    // 0x128534: 0x1e0282d  daddu       $a1, $t7, $zero
    ctx->pc = 0x128534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_128538:
    // 0x128538: 0x804a120  j           func_128480
label_12853c:
    if (ctx->pc == 0x12853Cu) {
        ctx->pc = 0x12853Cu;
            // 0x12853c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x128540u;
        goto label_fallthrough_0x128538;
    }
    ctx->pc = 0x128538u;
    ctx->pc = 0x12853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128538u;
            // 0x12853c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128480u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_128480;
label_fallthrough_0x128538:
    ctx->pc = 0x128540u;
}
