#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FA4D0
// Address: 0x1fa4d0 - 0x1fa5f0
void sub_001FA4D0_0x1fa4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA4D0_0x1fa4d0");
#endif

    switch (ctx->pc) {
        case 0x1fa4d0u: goto label_1fa4d0;
        case 0x1fa4d4u: goto label_1fa4d4;
        case 0x1fa4d8u: goto label_1fa4d8;
        case 0x1fa4dcu: goto label_1fa4dc;
        case 0x1fa4e0u: goto label_1fa4e0;
        case 0x1fa4e4u: goto label_1fa4e4;
        case 0x1fa4e8u: goto label_1fa4e8;
        case 0x1fa4ecu: goto label_1fa4ec;
        case 0x1fa4f0u: goto label_1fa4f0;
        case 0x1fa4f4u: goto label_1fa4f4;
        case 0x1fa4f8u: goto label_1fa4f8;
        case 0x1fa4fcu: goto label_1fa4fc;
        case 0x1fa500u: goto label_1fa500;
        case 0x1fa504u: goto label_1fa504;
        case 0x1fa508u: goto label_1fa508;
        case 0x1fa50cu: goto label_1fa50c;
        case 0x1fa510u: goto label_1fa510;
        case 0x1fa514u: goto label_1fa514;
        case 0x1fa518u: goto label_1fa518;
        case 0x1fa51cu: goto label_1fa51c;
        case 0x1fa520u: goto label_1fa520;
        case 0x1fa524u: goto label_1fa524;
        case 0x1fa528u: goto label_1fa528;
        case 0x1fa52cu: goto label_1fa52c;
        case 0x1fa530u: goto label_1fa530;
        case 0x1fa534u: goto label_1fa534;
        case 0x1fa538u: goto label_1fa538;
        case 0x1fa53cu: goto label_1fa53c;
        case 0x1fa540u: goto label_1fa540;
        case 0x1fa544u: goto label_1fa544;
        case 0x1fa548u: goto label_1fa548;
        case 0x1fa54cu: goto label_1fa54c;
        case 0x1fa550u: goto label_1fa550;
        case 0x1fa554u: goto label_1fa554;
        case 0x1fa558u: goto label_1fa558;
        case 0x1fa55cu: goto label_1fa55c;
        case 0x1fa560u: goto label_1fa560;
        case 0x1fa564u: goto label_1fa564;
        case 0x1fa568u: goto label_1fa568;
        case 0x1fa56cu: goto label_1fa56c;
        case 0x1fa570u: goto label_1fa570;
        case 0x1fa574u: goto label_1fa574;
        case 0x1fa578u: goto label_1fa578;
        case 0x1fa57cu: goto label_1fa57c;
        case 0x1fa580u: goto label_1fa580;
        case 0x1fa584u: goto label_1fa584;
        case 0x1fa588u: goto label_1fa588;
        case 0x1fa58cu: goto label_1fa58c;
        case 0x1fa590u: goto label_1fa590;
        case 0x1fa594u: goto label_1fa594;
        case 0x1fa598u: goto label_1fa598;
        case 0x1fa59cu: goto label_1fa59c;
        case 0x1fa5a0u: goto label_1fa5a0;
        case 0x1fa5a4u: goto label_1fa5a4;
        case 0x1fa5a8u: goto label_1fa5a8;
        case 0x1fa5acu: goto label_1fa5ac;
        case 0x1fa5b0u: goto label_1fa5b0;
        case 0x1fa5b4u: goto label_1fa5b4;
        case 0x1fa5b8u: goto label_1fa5b8;
        case 0x1fa5bcu: goto label_1fa5bc;
        case 0x1fa5c0u: goto label_1fa5c0;
        case 0x1fa5c4u: goto label_1fa5c4;
        case 0x1fa5c8u: goto label_1fa5c8;
        case 0x1fa5ccu: goto label_1fa5cc;
        case 0x1fa5d0u: goto label_1fa5d0;
        case 0x1fa5d4u: goto label_1fa5d4;
        case 0x1fa5d8u: goto label_1fa5d8;
        case 0x1fa5dcu: goto label_1fa5dc;
        case 0x1fa5e0u: goto label_1fa5e0;
        case 0x1fa5e4u: goto label_1fa5e4;
        case 0x1fa5e8u: goto label_1fa5e8;
        case 0x1fa5ecu: goto label_1fa5ec;
        default: break;
    }

    ctx->pc = 0x1fa4d0u;

label_1fa4d0:
    // 0x1fa4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fa4d4:
    // 0x1fa4d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1fa4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fa4d8:
    // 0x1fa4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fa4dc:
    // 0x1fa4dc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fa4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fa4e0:
    // 0x1fa4e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa4e4:
    // 0x1fa4e4: 0x8ca5ea64  lw          $a1, -0x159C($a1)
    ctx->pc = 0x1fa4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961764)));
label_1fa4e8:
    // 0x1fa4e8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fa4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fa4ec:
    // 0x1fa4ec: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x1fa4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_1fa4f0:
    // 0x1fa4f0: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1fa4f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fa4f4:
    // 0x1fa4f4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fa4f8:
    if (ctx->pc == 0x1FA4F8u) {
        ctx->pc = 0x1FA4F8u;
            // 0x1fa4f8: 0x2508ea60  addiu       $t0, $t0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961760));
        ctx->pc = 0x1FA4FCu;
        goto label_1fa4fc;
    }
    ctx->pc = 0x1FA4F4u;
    {
        const bool branch_taken_0x1fa4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA4F4u;
            // 0x1fa4f8: 0x2508ea60  addiu       $t0, $t0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4f4) {
            ctx->pc = 0x1FA524u;
            goto label_1fa524;
        }
    }
    ctx->pc = 0x1FA4FCu;
label_1fa4fc:
    // 0x1fa4fc: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x1fa4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1fa500:
    // 0x1fa500: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fa500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fa504:
    // 0x1fa504: 0x2463b078  addiu       $v1, $v1, -0x4F88
    ctx->pc = 0x1fa504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946936));
label_1fa508:
    // 0x1fa508: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1fa508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1fa50c:
    // 0x1fa50c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fa510:
    // 0x1fa510: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fa510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fa514:
    // 0x1fa514: 0x4009c803  .word       0x4009C803                   # mfc0        $t1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa514u;
    SET_GPR_S32(ctx, 9, (int32_t)ctx->cop0_perf);
label_1fa518:
    // 0x1fa518: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x1fa518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_1fa51c:
    // 0x1fa51c: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x1fa51cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
label_1fa520:
    // 0x1fa520: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1fa520u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_1fa524:
    // 0x1fa524: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x1fa524u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1fa528:
    // 0x1fa528: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x1fa528u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fa52c:
    // 0x1fa52c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1fa52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fa530:
    // 0x1fa530: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fa530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa534:
    // 0x1fa534: 0xc5030030  lwc1        $f3, 0x30($t0)
    ctx->pc = 0x1fa534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fa538:
    // 0x1fa538: 0xc5220030  lwc1        $f2, 0x30($t1)
    ctx->pc = 0x1fa538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa53c:
    // 0x1fa53c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1fa53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa540:
    // 0x1fa540: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1fa540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa544:
    // 0x1fa544: 0x46021941  sub.s       $f5, $f3, $f2
    ctx->pc = 0x1fa544u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1fa548:
    // 0x1fa548: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fa54c:
    // 0x1fa54c: 0xc5040034  lwc1        $f4, 0x34($t0)
    ctx->pc = 0x1fa54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fa550:
    // 0x1fa550: 0xc5230034  lwc1        $f3, 0x34($t1)
    ctx->pc = 0x1fa550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fa554:
    // 0x1fa554: 0xc5020038  lwc1        $f2, 0x38($t0)
    ctx->pc = 0x1fa554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa558:
    // 0x1fa558: 0xc5210038  lwc1        $f1, 0x38($t1)
    ctx->pc = 0x1fa558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa55c:
    // 0x1fa55c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1fa55cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1fa560:
    // 0x1fa560: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1fa560u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_1fa564:
    // 0x1fa564: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1fa564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1fa568:
    // 0x1fa568: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1fa568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1fa56c:
    // 0x1fa56c: 0x4605281e  madda.s     $f5, $f5
    ctx->pc = 0x1fa56cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_1fa570:
    // 0x1fa570: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x1fa570u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1fa574:
    // 0x1fa574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fa574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa578:
    // 0x1fa578: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1fa57c:
    if (ctx->pc == 0x1FA57Cu) {
        ctx->pc = 0x1FA580u;
        goto label_1fa580;
    }
    ctx->pc = 0x1FA578u;
    {
        const bool branch_taken_0x1fa578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa578) {
            ctx->pc = 0x1FA594u;
            goto label_1fa594;
        }
    }
    ctx->pc = 0x1FA580u;
label_1fa580:
    // 0x1fa580: 0x8cf90000  lw          $t9, 0x0($a3)
    ctx->pc = 0x1fa580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1fa584:
    // 0x1fa584: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fa584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa588:
    // 0x1fa588: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1fa588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1fa58c:
    // 0x1fa58c: 0x320f809  jalr        $t9
label_1fa590:
    if (ctx->pc == 0x1FA590u) {
        ctx->pc = 0x1FA590u;
            // 0x1fa590: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FA594u;
        goto label_1fa594;
    }
    ctx->pc = 0x1FA58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FA594u);
        ctx->pc = 0x1FA590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA58Cu;
            // 0x1fa590: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA594u; }
            if (ctx->pc != 0x1FA594u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA594u;
label_1fa594:
    // 0x1fa594: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa598:
    // 0x1fa598: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fa598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fa59c:
    // 0x1fa59c: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fa59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fa5a0:
    // 0x1fa5a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fa5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fa5a4:
    // 0x1fa5a4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fa5a8:
    // 0x1fa5a8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fa5a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fa5ac:
    // 0x1fa5ac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fa5b0:
    if (ctx->pc == 0x1FA5B0u) {
        ctx->pc = 0x1FA5B0u;
            // 0x1fa5b0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FA5B4u;
        goto label_1fa5b4;
    }
    ctx->pc = 0x1FA5ACu;
    {
        const bool branch_taken_0x1fa5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5ACu;
            // 0x1fa5b0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5ac) {
            ctx->pc = 0x1FA5DCu;
            goto label_1fa5dc;
        }
    }
    ctx->pc = 0x1FA5B4u;
label_1fa5b4:
    // 0x1fa5b4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fa5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fa5b8:
    // 0x1fa5b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fa5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fa5bc:
    // 0x1fa5bc: 0x2463b088  addiu       $v1, $v1, -0x4F78
    ctx->pc = 0x1fa5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946952));
label_1fa5c0:
    // 0x1fa5c0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fa5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fa5c4:
    // 0x1fa5c4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fa5c8:
    // 0x1fa5c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fa5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fa5cc:
    // 0x1fa5cc: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fa5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fa5d0:
    // 0x1fa5d0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fa5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fa5d4:
    // 0x1fa5d4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fa5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fa5d8:
    // 0x1fa5d8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fa5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fa5dc:
    // 0x1fa5dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa5e0:
    // 0x1fa5e0: 0x3e00008  jr          $ra
label_1fa5e4:
    if (ctx->pc == 0x1FA5E4u) {
        ctx->pc = 0x1FA5E4u;
            // 0x1fa5e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FA5E8u;
        goto label_1fa5e8;
    }
    ctx->pc = 0x1FA5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA5E0u;
            // 0x1fa5e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FA5E8u;
label_1fa5e8:
    // 0x1fa5e8: 0x0  nop
    ctx->pc = 0x1fa5e8u;
    // NOP
label_1fa5ec:
    // 0x1fa5ec: 0x0  nop
    ctx->pc = 0x1fa5ecu;
    // NOP
}
