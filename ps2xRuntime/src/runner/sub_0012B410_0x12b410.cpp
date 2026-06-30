#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B410
// Address: 0x12b410 - 0x12b580
void sub_0012B410_0x12b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B410_0x12b410");
#endif

    switch (ctx->pc) {
        case 0x12b410u: goto label_12b410;
        case 0x12b414u: goto label_12b414;
        case 0x12b418u: goto label_12b418;
        case 0x12b41cu: goto label_12b41c;
        case 0x12b420u: goto label_12b420;
        case 0x12b424u: goto label_12b424;
        case 0x12b428u: goto label_12b428;
        case 0x12b42cu: goto label_12b42c;
        case 0x12b430u: goto label_12b430;
        case 0x12b434u: goto label_12b434;
        case 0x12b438u: goto label_12b438;
        case 0x12b43cu: goto label_12b43c;
        case 0x12b440u: goto label_12b440;
        case 0x12b444u: goto label_12b444;
        case 0x12b448u: goto label_12b448;
        case 0x12b44cu: goto label_12b44c;
        case 0x12b450u: goto label_12b450;
        case 0x12b454u: goto label_12b454;
        case 0x12b458u: goto label_12b458;
        case 0x12b45cu: goto label_12b45c;
        case 0x12b460u: goto label_12b460;
        case 0x12b464u: goto label_12b464;
        case 0x12b468u: goto label_12b468;
        case 0x12b46cu: goto label_12b46c;
        case 0x12b470u: goto label_12b470;
        case 0x12b474u: goto label_12b474;
        case 0x12b478u: goto label_12b478;
        case 0x12b47cu: goto label_12b47c;
        case 0x12b480u: goto label_12b480;
        case 0x12b484u: goto label_12b484;
        case 0x12b488u: goto label_12b488;
        case 0x12b48cu: goto label_12b48c;
        case 0x12b490u: goto label_12b490;
        case 0x12b494u: goto label_12b494;
        case 0x12b498u: goto label_12b498;
        case 0x12b49cu: goto label_12b49c;
        case 0x12b4a0u: goto label_12b4a0;
        case 0x12b4a4u: goto label_12b4a4;
        case 0x12b4a8u: goto label_12b4a8;
        case 0x12b4acu: goto label_12b4ac;
        case 0x12b4b0u: goto label_12b4b0;
        case 0x12b4b4u: goto label_12b4b4;
        case 0x12b4b8u: goto label_12b4b8;
        case 0x12b4bcu: goto label_12b4bc;
        case 0x12b4c0u: goto label_12b4c0;
        case 0x12b4c4u: goto label_12b4c4;
        case 0x12b4c8u: goto label_12b4c8;
        case 0x12b4ccu: goto label_12b4cc;
        case 0x12b4d0u: goto label_12b4d0;
        case 0x12b4d4u: goto label_12b4d4;
        case 0x12b4d8u: goto label_12b4d8;
        case 0x12b4dcu: goto label_12b4dc;
        case 0x12b4e0u: goto label_12b4e0;
        case 0x12b4e4u: goto label_12b4e4;
        case 0x12b4e8u: goto label_12b4e8;
        case 0x12b4ecu: goto label_12b4ec;
        case 0x12b4f0u: goto label_12b4f0;
        case 0x12b4f4u: goto label_12b4f4;
        case 0x12b4f8u: goto label_12b4f8;
        case 0x12b4fcu: goto label_12b4fc;
        case 0x12b500u: goto label_12b500;
        case 0x12b504u: goto label_12b504;
        case 0x12b508u: goto label_12b508;
        case 0x12b50cu: goto label_12b50c;
        case 0x12b510u: goto label_12b510;
        case 0x12b514u: goto label_12b514;
        case 0x12b518u: goto label_12b518;
        case 0x12b51cu: goto label_12b51c;
        case 0x12b520u: goto label_12b520;
        case 0x12b524u: goto label_12b524;
        case 0x12b528u: goto label_12b528;
        case 0x12b52cu: goto label_12b52c;
        case 0x12b530u: goto label_12b530;
        case 0x12b534u: goto label_12b534;
        case 0x12b538u: goto label_12b538;
        case 0x12b53cu: goto label_12b53c;
        case 0x12b540u: goto label_12b540;
        case 0x12b544u: goto label_12b544;
        case 0x12b548u: goto label_12b548;
        case 0x12b54cu: goto label_12b54c;
        case 0x12b550u: goto label_12b550;
        case 0x12b554u: goto label_12b554;
        case 0x12b558u: goto label_12b558;
        case 0x12b55cu: goto label_12b55c;
        case 0x12b560u: goto label_12b560;
        case 0x12b564u: goto label_12b564;
        case 0x12b568u: goto label_12b568;
        case 0x12b56cu: goto label_12b56c;
        case 0x12b570u: goto label_12b570;
        case 0x12b574u: goto label_12b574;
        case 0x12b578u: goto label_12b578;
        case 0x12b57cu: goto label_12b57c;
        default: break;
    }

    ctx->pc = 0x12b410u;

label_12b410:
    // 0x12b410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12b414:
    // 0x12b414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12b418:
    // 0x12b418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_12b41c:
    // 0x12b41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b420:
    // 0x12b420: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_12b424:
    // 0x12b424: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_12b428:
    if (ctx->pc == 0x12B428u) {
        ctx->pc = 0x12B428u;
            // 0x12b428: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->pc = 0x12B42Cu;
        goto label_12b42c;
    }
    ctx->pc = 0x12B424u;
    {
        const bool branch_taken_0x12b424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b424) {
            ctx->pc = 0x12B428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B424u;
            // 0x12b428: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B440u;
            goto label_12b440;
        }
    }
    ctx->pc = 0x12B42Cu;
label_12b42c:
    // 0x12b42c: 0x3c0f005d  lui         $t7, 0x5D
    ctx->pc = 0x12b42cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)93 << 16));
label_12b430:
    // 0x12b430: 0x8dee1ad8  lw          $t6, 0x1AD8($t7)
    ctx->pc = 0x12b430u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 6872)));
label_12b434:
    // 0x12b434: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x12b434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
label_12b438:
    // 0x12b438: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x12b438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12b43c:
    // 0x12b43c: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x12b43cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_12b440:
    // 0x12b440: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
label_12b444:
    if (ctx->pc == 0x12B444u) {
        ctx->pc = 0x12B444u;
            // 0x12b444: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x12B448u;
        goto label_12b448;
    }
    ctx->pc = 0x12B440u;
    {
        const bool branch_taken_0x12b440 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b440) {
            ctx->pc = 0x12B444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B440u;
            // 0x12b444: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B454u;
            goto label_12b454;
        }
    }
    ctx->pc = 0x12B448u;
label_12b448:
    // 0x12b448: 0xc049e72  jal         func_1279C8
label_12b44c:
    if (ctx->pc == 0x12B44Cu) {
        ctx->pc = 0x12B450u;
        goto label_12b450;
    }
    ctx->pc = 0x12B448u;
    SET_GPR_U32(ctx, 31, 0x12B450u);
    ctx->pc = 0x1279C8u;
    if (runtime->hasFunction(0x1279C8u)) {
        auto targetFn = runtime->lookupFunction(0x1279C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B450u; }
        if (ctx->pc != 0x12B450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001279C8_0x1279c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B450u; }
        if (ctx->pc != 0x12B450u) { return; }
    }
    ctx->pc = 0x12B450u;
label_12b450:
    // 0x12b450: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x12b450u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12b454:
    // 0x12b454: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x12b454u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b458:
    // 0x12b458: 0x31cf0020  andi        $t7, $t6, 0x20
    ctx->pc = 0x12b458u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)32);
label_12b45c:
    // 0x12b45c: 0x15e00032  bnez        $t7, . + 4 + (0x32 << 2)
label_12b460:
    if (ctx->pc == 0x12B460u) {
        ctx->pc = 0x12B460u;
            // 0x12b460: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x12B464u;
        goto label_12b464;
    }
    ctx->pc = 0x12B45Cu;
    {
        const bool branch_taken_0x12b45c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B45Cu;
            // 0x12b460: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b45c) {
            ctx->pc = 0x12B528u;
            goto label_12b528;
        }
    }
    ctx->pc = 0x12B464u;
label_12b464:
    // 0x12b464: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x12b464u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
label_12b468:
    // 0x12b468: 0x55e00036  bnel        $t7, $zero, . + 4 + (0x36 << 2)
label_12b46c:
    if (ctx->pc == 0x12B46Cu) {
        ctx->pc = 0x12B46Cu;
            // 0x12b46c: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x12B470u;
        goto label_12b470;
    }
    ctx->pc = 0x12B468u;
    {
        const bool branch_taken_0x12b468 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b468) {
            ctx->pc = 0x12B46Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B468u;
            // 0x12b46c: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B544u;
            goto label_12b544;
        }
    }
    ctx->pc = 0x12B470u;
label_12b470:
    // 0x12b470: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x12b470u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
label_12b474:
    // 0x12b474: 0x11e0002c  beqz        $t7, . + 4 + (0x2C << 2)
label_12b478:
    if (ctx->pc == 0x12B478u) {
        ctx->pc = 0x12B478u;
            // 0x12b478: 0x31cf0008  andi        $t7, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x12B47Cu;
        goto label_12b47c;
    }
    ctx->pc = 0x12B474u;
    {
        const bool branch_taken_0x12b474 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B474u;
            // 0x12b478: 0x31cf0008  andi        $t7, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b474) {
            ctx->pc = 0x12B528u;
            goto label_12b528;
        }
    }
    ctx->pc = 0x12B47Cu;
label_12b47c:
    // 0x12b47c: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
label_12b480:
    if (ctx->pc == 0x12B480u) {
        ctx->pc = 0x12B480u;
            // 0x12b480: 0x35cf0004  ori         $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x12B484u;
        goto label_12b484;
    }
    ctx->pc = 0x12B47Cu;
    {
        const bool branch_taken_0x12b47c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B47Cu;
            // 0x12b480: 0x35cf0004  ori         $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b47c) {
            ctx->pc = 0x12B4B0u;
            goto label_12b4b0;
        }
    }
    ctx->pc = 0x12B484u;
label_12b484:
    // 0x12b484: 0xc049db4  jal         func_1276D0
label_12b488:
    if (ctx->pc == 0x12B488u) {
        ctx->pc = 0x12B488u;
            // 0x12b488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B48Cu;
        goto label_12b48c;
    }
    ctx->pc = 0x12B484u;
    SET_GPR_U32(ctx, 31, 0x12B48Cu);
    ctx->pc = 0x12B488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B484u;
            // 0x12b488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1276D0u;
    if (runtime->hasFunction(0x1276D0u)) {
        auto targetFn = runtime->lookupFunction(0x1276D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B48Cu; }
        if (ctx->pc != 0x12B48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001276D0_0x1276d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B48Cu; }
        if (ctx->pc != 0x12B48Cu) { return; }
    }
    ctx->pc = 0x12B48Cu;
label_12b48c:
    // 0x12b48c: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_12b490:
    if (ctx->pc == 0x12B490u) {
        ctx->pc = 0x12B490u;
            // 0x12b490: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12B494u;
        goto label_12b494;
    }
    ctx->pc = 0x12B48Cu;
    {
        const bool branch_taken_0x12b48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B48Cu;
            // 0x12b490: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b48c) {
            ctx->pc = 0x12B528u;
            goto label_12b528;
        }
    }
    ctx->pc = 0x12B494u;
label_12b494:
    // 0x12b494: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12b494u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12b498:
    // 0x12b498: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12b498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_12b49c:
    // 0x12b49c: 0x31effff7  andi        $t7, $t7, 0xFFF7
    ctx->pc = 0x12b49cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65527);
label_12b4a0:
    // 0x12b4a0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_12b4a4:
    // 0x12b4a4: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12b4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12b4a8:
    // 0x12b4a8: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x12b4a8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_12b4ac:
    // 0x12b4ac: 0x35cf0004  ori         $t7, $t6, 0x4
    ctx->pc = 0x12b4acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
label_12b4b0:
    // 0x12b4b0: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12b4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12b4b4:
    // 0x12b4b4: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x12b4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_12b4b8:
    // 0x12b4b8: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
label_12b4bc:
    if (ctx->pc == 0x12B4BCu) {
        ctx->pc = 0x12B4BCu;
            // 0x12b4bc: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x12B4C0u;
        goto label_12b4c0;
    }
    ctx->pc = 0x12B4B8u;
    {
        const bool branch_taken_0x12b4b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b4b8) {
            ctx->pc = 0x12B4BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4B8u;
            // 0x12b4bc: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B4CCu;
            goto label_12b4cc;
        }
    }
    ctx->pc = 0x12B4C0u;
label_12b4c0:
    // 0x12b4c0: 0xc04a16e  jal         func_1285B8
label_12b4c4:
    if (ctx->pc == 0x12B4C4u) {
        ctx->pc = 0x12B4C4u;
            // 0x12b4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12B4C8u;
        goto label_12b4c8;
    }
    ctx->pc = 0x12B4C0u;
    SET_GPR_U32(ctx, 31, 0x12B4C8u);
    ctx->pc = 0x12B4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4C0u;
            // 0x12b4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1285B8u;
    if (runtime->hasFunction(0x1285B8u)) {
        auto targetFn = runtime->lookupFunction(0x1285B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4C8u; }
        if (ctx->pc != 0x12B4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001285B8_0x1285b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4C8u; }
        if (ctx->pc != 0x12B4C8u) { return; }
    }
    ctx->pc = 0x12B4C8u;
label_12b4c8:
    // 0x12b4c8: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12b4c8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12b4cc:
    // 0x12b4cc: 0x31ef0003  andi        $t7, $t7, 0x3
    ctx->pc = 0x12b4ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
label_12b4d0:
    // 0x12b4d0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
label_12b4d4:
    if (ctx->pc == 0x12B4D4u) {
        ctx->pc = 0x12B4D4u;
            // 0x12b4d4: 0x3c050013  lui         $a1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
        ctx->pc = 0x12B4D8u;
        goto label_12b4d8;
    }
    ctx->pc = 0x12B4D0u;
    {
        const bool branch_taken_0x12b4d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4D0u;
            // 0x12b4d4: 0x3c050013  lui         $a1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4d0) {
            ctx->pc = 0x12B4E4u;
            goto label_12b4e4;
        }
    }
    ctx->pc = 0x12B4D8u;
label_12b4d8:
    // 0x12b4d8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_12b4dc:
    // 0x12b4dc: 0xc04a0fc  jal         func_1283F0
label_12b4e0:
    if (ctx->pc == 0x12B4E0u) {
        ctx->pc = 0x12B4E0u;
            // 0x12b4e0: 0x24a5b3e0  addiu       $a1, $a1, -0x4C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947808));
        ctx->pc = 0x12B4E4u;
        goto label_12b4e4;
    }
    ctx->pc = 0x12B4DCu;
    SET_GPR_U32(ctx, 31, 0x12B4E4u);
    ctx->pc = 0x12B4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4DCu;
            // 0x12b4e0: 0x24a5b3e0  addiu       $a1, $a1, -0x4C20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283F0u;
    if (runtime->hasFunction(0x1283F0u)) {
        auto targetFn = runtime->lookupFunction(0x1283F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4E4u; }
        if (ctx->pc != 0x12B4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001283F0_0x1283f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4E4u; }
        if (ctx->pc != 0x12B4E4u) { return; }
    }
    ctx->pc = 0x12B4E4u;
label_12b4e4:
    // 0x12b4e4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x12b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_12b4e8:
    // 0x12b4e8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x12b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_12b4ec:
    // 0x12b4ec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x12b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_12b4f0:
    // 0x12b4f0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x12b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_12b4f4:
    // 0x12b4f4: 0x40f809  jalr        $v0
label_12b4f8:
    if (ctx->pc == 0x12B4F8u) {
        ctx->pc = 0x12B4F8u;
            // 0x12b4f8: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x12B4FCu;
        goto label_12b4fc;
    }
    ctx->pc = 0x12B4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B4FCu);
        ctx->pc = 0x12B4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4F4u;
            // 0x12b4f8: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12B4FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12B4FCu; }
            if (ctx->pc != 0x12B4FCu) { return; }
        }
        }
    }
    ctx->pc = 0x12B4FCu;
label_12b4fc:
    // 0x12b4fc: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12b4fcu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12b500:
    // 0x12b500: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x12b500u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b504:
    // 0x12b504: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12b504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_12b508:
    // 0x12b508: 0x31efdfff  andi        $t7, $t7, 0xDFFF
    ctx->pc = 0x12b508u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)57343);
label_12b50c:
    // 0x12b50c: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_12b510:
    if (ctx->pc == 0x12B510u) {
        ctx->pc = 0x12B510u;
            // 0x12b510: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->pc = 0x12B514u;
        goto label_12b514;
    }
    ctx->pc = 0x12B50Cu;
    {
        const bool branch_taken_0x12b50c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12B510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B50Cu;
            // 0x12b510: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b50c) {
            ctx->pc = 0x12B528u;
            goto label_12b528;
        }
    }
    ctx->pc = 0x12B514u;
label_12b514:
    // 0x12b514: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_12b518:
    if (ctx->pc == 0x12B518u) {
        ctx->pc = 0x12B518u;
            // 0x12b518: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x12B51Cu;
        goto label_12b51c;
    }
    ctx->pc = 0x12B514u;
    {
        const bool branch_taken_0x12b514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b514) {
            ctx->pc = 0x12B518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B514u;
            // 0x12b518: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B53Cu;
            goto label_12b53c;
        }
    }
    ctx->pc = 0x12B51Cu;
label_12b51c:
    // 0x12b51c: 0x35ef0020  ori         $t7, $t7, 0x20
    ctx->pc = 0x12b51cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32);
label_12b520:
    // 0x12b520: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12b520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12b524:
    // 0x12b524: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x12b524u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b528:
    // 0x12b528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b52c:
    // 0x12b52c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x12b52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_12b530:
    // 0x12b530: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12b530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12b534:
    // 0x12b534: 0x3e00008  jr          $ra
label_12b538:
    if (ctx->pc == 0x12B538u) {
        ctx->pc = 0x12B538u;
            // 0x12b538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12B53Cu;
        goto label_12b53c;
    }
    ctx->pc = 0x12B534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B534u;
            // 0x12b538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B53Cu;
label_12b53c:
    // 0x12b53c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_12b540:
    if (ctx->pc == 0x12B540u) {
        ctx->pc = 0x12B540u;
            // 0x12b540: 0x35ef0040  ori         $t7, $t7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
        ctx->pc = 0x12B544u;
        goto label_12b544;
    }
    ctx->pc = 0x12B53Cu;
    {
        const bool branch_taken_0x12b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B53Cu;
            // 0x12b540: 0x35ef0040  ori         $t7, $t7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b53c) {
            ctx->pc = 0x12B520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b520;
        }
    }
    ctx->pc = 0x12B544u;
label_12b544:
    // 0x12b544: 0x10a0ffdb  beqz        $a1, . + 4 + (-0x25 << 2)
label_12b548:
    if (ctx->pc == 0x12B548u) {
        ctx->pc = 0x12B548u;
            // 0x12b548: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x12B54Cu;
        goto label_12b54c;
    }
    ctx->pc = 0x12B544u;
    {
        const bool branch_taken_0x12b544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B544u;
            // 0x12b548: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b544) {
            ctx->pc = 0x12B4B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b4b4;
        }
    }
    ctx->pc = 0x12B54Cu;
label_12b54c:
    // 0x12b54c: 0x50af0004  beql        $a1, $t7, . + 4 + (0x4 << 2)
label_12b550:
    if (ctx->pc == 0x12B550u) {
        ctx->pc = 0x12B550u;
            // 0x12b550: 0x8e0f003c  lw          $t7, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->pc = 0x12B554u;
        goto label_12b554;
    }
    ctx->pc = 0x12B54Cu;
    {
        const bool branch_taken_0x12b54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x12b54c) {
            ctx->pc = 0x12B550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12B54Cu;
            // 0x12b550: 0x8e0f003c  lw          $t7, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12B560u;
            goto label_12b560;
        }
    }
    ctx->pc = 0x12B554u;
label_12b554:
    // 0x12b554: 0xc049ee4  jal         func_127B90
label_12b558:
    if (ctx->pc == 0x12B558u) {
        ctx->pc = 0x12B558u;
            // 0x12b558: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x12B55Cu;
        goto label_12b55c;
    }
    ctx->pc = 0x12B554u;
    SET_GPR_U32(ctx, 31, 0x12B55Cu);
    ctx->pc = 0x12B558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B554u;
            // 0x12b558: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127B90u;
    if (runtime->hasFunction(0x127B90u)) {
        auto targetFn = runtime->lookupFunction(0x127B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B55Cu; }
        if (ctx->pc != 0x12B55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127B90_0x127b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B55Cu; }
        if (ctx->pc != 0x12B55Cu) { return; }
    }
    ctx->pc = 0x12B55Cu;
label_12b55c:
    // 0x12b55c: 0x8e0f003c  lw          $t7, 0x3C($s0)
    ctx->pc = 0x12b55cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_12b560:
    // 0x12b560: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x12b560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_12b564:
    // 0x12b564: 0x11e0ffd3  beqz        $t7, . + 4 + (-0x2D << 2)
label_12b568:
    if (ctx->pc == 0x12B568u) {
        ctx->pc = 0x12B568u;
            // 0x12b568: 0xae0f0004  sw          $t7, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
        ctx->pc = 0x12B56Cu;
        goto label_12b56c;
    }
    ctx->pc = 0x12B564u;
    {
        const bool branch_taken_0x12b564 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B564u;
            // 0x12b568: 0xae0f0004  sw          $t7, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b564) {
            ctx->pc = 0x12B4B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b4b4;
        }
    }
    ctx->pc = 0x12B56Cu;
label_12b56c:
    // 0x12b56c: 0x8e0f0038  lw          $t7, 0x38($s0)
    ctx->pc = 0x12b56cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_12b570:
    // 0x12b570: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x12b570u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b574:
    // 0x12b574: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_12b578:
    if (ctx->pc == 0x12B578u) {
        ctx->pc = 0x12B578u;
            // 0x12b578: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->pc = 0x12B57Cu;
        goto label_12b57c;
    }
    ctx->pc = 0x12B574u;
    {
        const bool branch_taken_0x12b574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B574u;
            // 0x12b578: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b574) {
            ctx->pc = 0x12B528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b528;
        }
    }
    ctx->pc = 0x12B57Cu;
label_12b57c:
    // 0x12b57c: 0x0  nop
    ctx->pc = 0x12b57cu;
    // NOP
}
