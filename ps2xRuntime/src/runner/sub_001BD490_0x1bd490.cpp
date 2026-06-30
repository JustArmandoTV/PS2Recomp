#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD490
// Address: 0x1bd490 - 0x1bd570
void sub_001BD490_0x1bd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD490_0x1bd490");
#endif

    switch (ctx->pc) {
        case 0x1bd490u: goto label_1bd490;
        case 0x1bd494u: goto label_1bd494;
        case 0x1bd498u: goto label_1bd498;
        case 0x1bd49cu: goto label_1bd49c;
        case 0x1bd4a0u: goto label_1bd4a0;
        case 0x1bd4a4u: goto label_1bd4a4;
        case 0x1bd4a8u: goto label_1bd4a8;
        case 0x1bd4acu: goto label_1bd4ac;
        case 0x1bd4b0u: goto label_1bd4b0;
        case 0x1bd4b4u: goto label_1bd4b4;
        case 0x1bd4b8u: goto label_1bd4b8;
        case 0x1bd4bcu: goto label_1bd4bc;
        case 0x1bd4c0u: goto label_1bd4c0;
        case 0x1bd4c4u: goto label_1bd4c4;
        case 0x1bd4c8u: goto label_1bd4c8;
        case 0x1bd4ccu: goto label_1bd4cc;
        case 0x1bd4d0u: goto label_1bd4d0;
        case 0x1bd4d4u: goto label_1bd4d4;
        case 0x1bd4d8u: goto label_1bd4d8;
        case 0x1bd4dcu: goto label_1bd4dc;
        case 0x1bd4e0u: goto label_1bd4e0;
        case 0x1bd4e4u: goto label_1bd4e4;
        case 0x1bd4e8u: goto label_1bd4e8;
        case 0x1bd4ecu: goto label_1bd4ec;
        case 0x1bd4f0u: goto label_1bd4f0;
        case 0x1bd4f4u: goto label_1bd4f4;
        case 0x1bd4f8u: goto label_1bd4f8;
        case 0x1bd4fcu: goto label_1bd4fc;
        case 0x1bd500u: goto label_1bd500;
        case 0x1bd504u: goto label_1bd504;
        case 0x1bd508u: goto label_1bd508;
        case 0x1bd50cu: goto label_1bd50c;
        case 0x1bd510u: goto label_1bd510;
        case 0x1bd514u: goto label_1bd514;
        case 0x1bd518u: goto label_1bd518;
        case 0x1bd51cu: goto label_1bd51c;
        case 0x1bd520u: goto label_1bd520;
        case 0x1bd524u: goto label_1bd524;
        case 0x1bd528u: goto label_1bd528;
        case 0x1bd52cu: goto label_1bd52c;
        case 0x1bd530u: goto label_1bd530;
        case 0x1bd534u: goto label_1bd534;
        case 0x1bd538u: goto label_1bd538;
        case 0x1bd53cu: goto label_1bd53c;
        case 0x1bd540u: goto label_1bd540;
        case 0x1bd544u: goto label_1bd544;
        case 0x1bd548u: goto label_1bd548;
        case 0x1bd54cu: goto label_1bd54c;
        case 0x1bd550u: goto label_1bd550;
        case 0x1bd554u: goto label_1bd554;
        case 0x1bd558u: goto label_1bd558;
        case 0x1bd55cu: goto label_1bd55c;
        case 0x1bd560u: goto label_1bd560;
        case 0x1bd564u: goto label_1bd564;
        case 0x1bd568u: goto label_1bd568;
        case 0x1bd56cu: goto label_1bd56c;
        default: break;
    }

    ctx->pc = 0x1bd490u;

label_1bd490:
    // 0x1bd490: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1bd494:
    if (ctx->pc == 0x1BD494u) {
        ctx->pc = 0x1BD498u;
        goto label_1bd498;
    }
    ctx->pc = 0x1BD490u;
    {
        const bool branch_taken_0x1bd490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd490) {
            ctx->pc = 0x1BD4B0u;
            goto label_1bd4b0;
        }
    }
    ctx->pc = 0x1BD498u;
label_1bd498:
    // 0x1bd498: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1bd498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1bd49c:
    // 0x1bd49c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1bd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1bd4a0:
    // 0x1bd4a0: 0x24639c08  addiu       $v1, $v1, -0x63F8
    ctx->pc = 0x1bd4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941704));
label_1bd4a4:
    // 0x1bd4a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd4a8:
    // 0x1bd4a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bd4ac:
    // 0x1bd4ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bd4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1bd4b0:
    // 0x1bd4b0: 0x3e00008  jr          $ra
label_1bd4b4:
    if (ctx->pc == 0x1BD4B4u) {
        ctx->pc = 0x1BD4B8u;
        goto label_1bd4b8;
    }
    ctx->pc = 0x1BD4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD4B8u;
label_1bd4b8:
    // 0x1bd4b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bd4bc:
    // 0x1bd4bc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1bd4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bd4c0:
    // 0x1bd4c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bd4c4:
    // 0x1bd4c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bd4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd4c8:
    // 0x1bd4c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1bd4cc:
    // 0x1bd4cc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1bd4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1bd4d0:
    // 0x1bd4d0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1bd4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1bd4d4:
    // 0x1bd4d4: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1bd4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bd4d8:
    // 0x1bd4d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bd4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bd4dc:
    // 0x1bd4dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bd4e0:
    if (ctx->pc == 0x1BD4E0u) {
        ctx->pc = 0x1BD4E0u;
            // 0x1bd4e0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x1BD4E4u;
        goto label_1bd4e4;
    }
    ctx->pc = 0x1BD4DCu;
    {
        const bool branch_taken_0x1bd4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4DCu;
            // 0x1bd4e0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4dc) {
            ctx->pc = 0x1BD4ECu;
            goto label_1bd4ec;
        }
    }
    ctx->pc = 0x1BD4E4u;
label_1bd4e4:
    // 0x1bd4e4: 0x60f809  jalr        $v1
label_1bd4e8:
    if (ctx->pc == 0x1BD4E8u) {
        ctx->pc = 0x1BD4ECu;
        goto label_1bd4ec;
    }
    ctx->pc = 0x1BD4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BD4ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD4ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD4ECu; }
            if (ctx->pc != 0x1BD4ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD4ECu;
label_1bd4ec:
    // 0x1bd4ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1bd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1bd4f0:
    // 0x1bd4f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bd4f4:
    // 0x1bd4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd4f8:
    // 0x1bd4f8: 0x3e00008  jr          $ra
label_1bd4fc:
    if (ctx->pc == 0x1BD4FCu) {
        ctx->pc = 0x1BD4FCu;
            // 0x1bd4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BD500u;
        goto label_1bd500;
    }
    ctx->pc = 0x1BD4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD4F8u;
            // 0x1bd4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD500u;
label_1bd500:
    // 0x1bd500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bd504:
    // 0x1bd504: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bd504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd508:
    // 0x1bd508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bd50c:
    // 0x1bd50c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1bd50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bd510:
    // 0x1bd510: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1bd510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1bd514:
    // 0x1bd514: 0x90450014  lbu         $a1, 0x14($v0)
    ctx->pc = 0x1bd514u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_1bd518:
    // 0x1bd518: 0x90460015  lbu         $a2, 0x15($v0)
    ctx->pc = 0x1bd518u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
label_1bd51c:
    // 0x1bd51c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bd520:
    if (ctx->pc == 0x1BD520u) {
        ctx->pc = 0x1BD520u;
            // 0x1bd520: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->pc = 0x1BD524u;
        goto label_1bd524;
    }
    ctx->pc = 0x1BD51Cu;
    {
        const bool branch_taken_0x1bd51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD51Cu;
            // 0x1bd520: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd51c) {
            ctx->pc = 0x1BD52Cu;
            goto label_1bd52c;
        }
    }
    ctx->pc = 0x1BD524u;
label_1bd524:
    // 0x1bd524: 0x60f809  jalr        $v1
label_1bd528:
    if (ctx->pc == 0x1BD528u) {
        ctx->pc = 0x1BD52Cu;
        goto label_1bd52c;
    }
    ctx->pc = 0x1BD524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BD52Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD52Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD52Cu; }
            if (ctx->pc != 0x1BD52Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD52Cu;
label_1bd52c:
    // 0x1bd52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd530:
    // 0x1bd530: 0x3e00008  jr          $ra
label_1bd534:
    if (ctx->pc == 0x1BD534u) {
        ctx->pc = 0x1BD534u;
            // 0x1bd534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BD538u;
        goto label_1bd538;
    }
    ctx->pc = 0x1BD530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD530u;
            // 0x1bd534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD538u;
label_1bd538:
    // 0x1bd538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bd53c:
    // 0x1bd53c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bd53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd540:
    // 0x1bd540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bd544:
    // 0x1bd544: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1bd544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bd548:
    // 0x1bd548: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1bd548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1bd54c:
    // 0x1bd54c: 0x90450014  lbu         $a1, 0x14($v0)
    ctx->pc = 0x1bd54cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_1bd550:
    // 0x1bd550: 0x90460015  lbu         $a2, 0x15($v0)
    ctx->pc = 0x1bd550u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 21)));
label_1bd554:
    // 0x1bd554: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bd558:
    if (ctx->pc == 0x1BD558u) {
        ctx->pc = 0x1BD558u;
            // 0x1bd558: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->pc = 0x1BD55Cu;
        goto label_1bd55c;
    }
    ctx->pc = 0x1BD554u;
    {
        const bool branch_taken_0x1bd554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD554u;
            // 0x1bd558: 0x90470016  lbu         $a3, 0x16($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd554) {
            ctx->pc = 0x1BD564u;
            goto label_1bd564;
        }
    }
    ctx->pc = 0x1BD55Cu;
label_1bd55c:
    // 0x1bd55c: 0x60f809  jalr        $v1
label_1bd560:
    if (ctx->pc == 0x1BD560u) {
        ctx->pc = 0x1BD564u;
        goto label_1bd564;
    }
    ctx->pc = 0x1BD55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BD564u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD564u; }
            if (ctx->pc != 0x1BD564u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD564u;
label_1bd564:
    // 0x1bd564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd568:
    // 0x1bd568: 0x3e00008  jr          $ra
label_1bd56c:
    if (ctx->pc == 0x1BD56Cu) {
        ctx->pc = 0x1BD56Cu;
            // 0x1bd56c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BD570u;
        goto label_fallthrough_0x1bd568;
    }
    ctx->pc = 0x1BD568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD568u;
            // 0x1bd56c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1bd568:
    ctx->pc = 0x1BD570u;
}
