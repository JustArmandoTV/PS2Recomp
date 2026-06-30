#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5540
// Address: 0x1f5540 - 0x1f56c0
void sub_001F5540_0x1f5540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5540_0x1f5540");
#endif

    switch (ctx->pc) {
        case 0x1f5540u: goto label_1f5540;
        case 0x1f5544u: goto label_1f5544;
        case 0x1f5548u: goto label_1f5548;
        case 0x1f554cu: goto label_1f554c;
        case 0x1f5550u: goto label_1f5550;
        case 0x1f5554u: goto label_1f5554;
        case 0x1f5558u: goto label_1f5558;
        case 0x1f555cu: goto label_1f555c;
        case 0x1f5560u: goto label_1f5560;
        case 0x1f5564u: goto label_1f5564;
        case 0x1f5568u: goto label_1f5568;
        case 0x1f556cu: goto label_1f556c;
        case 0x1f5570u: goto label_1f5570;
        case 0x1f5574u: goto label_1f5574;
        case 0x1f5578u: goto label_1f5578;
        case 0x1f557cu: goto label_1f557c;
        case 0x1f5580u: goto label_1f5580;
        case 0x1f5584u: goto label_1f5584;
        case 0x1f5588u: goto label_1f5588;
        case 0x1f558cu: goto label_1f558c;
        case 0x1f5590u: goto label_1f5590;
        case 0x1f5594u: goto label_1f5594;
        case 0x1f5598u: goto label_1f5598;
        case 0x1f559cu: goto label_1f559c;
        case 0x1f55a0u: goto label_1f55a0;
        case 0x1f55a4u: goto label_1f55a4;
        case 0x1f55a8u: goto label_1f55a8;
        case 0x1f55acu: goto label_1f55ac;
        case 0x1f55b0u: goto label_1f55b0;
        case 0x1f55b4u: goto label_1f55b4;
        case 0x1f55b8u: goto label_1f55b8;
        case 0x1f55bcu: goto label_1f55bc;
        case 0x1f55c0u: goto label_1f55c0;
        case 0x1f55c4u: goto label_1f55c4;
        case 0x1f55c8u: goto label_1f55c8;
        case 0x1f55ccu: goto label_1f55cc;
        case 0x1f55d0u: goto label_1f55d0;
        case 0x1f55d4u: goto label_1f55d4;
        case 0x1f55d8u: goto label_1f55d8;
        case 0x1f55dcu: goto label_1f55dc;
        case 0x1f55e0u: goto label_1f55e0;
        case 0x1f55e4u: goto label_1f55e4;
        case 0x1f55e8u: goto label_1f55e8;
        case 0x1f55ecu: goto label_1f55ec;
        case 0x1f55f0u: goto label_1f55f0;
        case 0x1f55f4u: goto label_1f55f4;
        case 0x1f55f8u: goto label_1f55f8;
        case 0x1f55fcu: goto label_1f55fc;
        case 0x1f5600u: goto label_1f5600;
        case 0x1f5604u: goto label_1f5604;
        case 0x1f5608u: goto label_1f5608;
        case 0x1f560cu: goto label_1f560c;
        case 0x1f5610u: goto label_1f5610;
        case 0x1f5614u: goto label_1f5614;
        case 0x1f5618u: goto label_1f5618;
        case 0x1f561cu: goto label_1f561c;
        case 0x1f5620u: goto label_1f5620;
        case 0x1f5624u: goto label_1f5624;
        case 0x1f5628u: goto label_1f5628;
        case 0x1f562cu: goto label_1f562c;
        case 0x1f5630u: goto label_1f5630;
        case 0x1f5634u: goto label_1f5634;
        case 0x1f5638u: goto label_1f5638;
        case 0x1f563cu: goto label_1f563c;
        case 0x1f5640u: goto label_1f5640;
        case 0x1f5644u: goto label_1f5644;
        case 0x1f5648u: goto label_1f5648;
        case 0x1f564cu: goto label_1f564c;
        case 0x1f5650u: goto label_1f5650;
        case 0x1f5654u: goto label_1f5654;
        case 0x1f5658u: goto label_1f5658;
        case 0x1f565cu: goto label_1f565c;
        case 0x1f5660u: goto label_1f5660;
        case 0x1f5664u: goto label_1f5664;
        case 0x1f5668u: goto label_1f5668;
        case 0x1f566cu: goto label_1f566c;
        case 0x1f5670u: goto label_1f5670;
        case 0x1f5674u: goto label_1f5674;
        case 0x1f5678u: goto label_1f5678;
        case 0x1f567cu: goto label_1f567c;
        case 0x1f5680u: goto label_1f5680;
        case 0x1f5684u: goto label_1f5684;
        case 0x1f5688u: goto label_1f5688;
        case 0x1f568cu: goto label_1f568c;
        case 0x1f5690u: goto label_1f5690;
        case 0x1f5694u: goto label_1f5694;
        case 0x1f5698u: goto label_1f5698;
        case 0x1f569cu: goto label_1f569c;
        case 0x1f56a0u: goto label_1f56a0;
        case 0x1f56a4u: goto label_1f56a4;
        case 0x1f56a8u: goto label_1f56a8;
        case 0x1f56acu: goto label_1f56ac;
        case 0x1f56b0u: goto label_1f56b0;
        case 0x1f56b4u: goto label_1f56b4;
        case 0x1f56b8u: goto label_1f56b8;
        case 0x1f56bcu: goto label_1f56bc;
        default: break;
    }

    ctx->pc = 0x1f5540u;

label_1f5540:
    // 0x1f5540: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1f5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_1f5544:
    // 0x1f5544: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f5544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f5548:
    // 0x1f5548: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f5548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f554c:
    // 0x1f554c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f554cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f5550:
    // 0x1f5550: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f5550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f5554:
    // 0x1f5554: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1f5554u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f5558:
    // 0x1f5558: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f555c:
    // 0x1f555c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f555cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f5560:
    // 0x1f5560: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f5564:
    // 0x1f5564: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f5564u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f5568:
    // 0x1f5568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f556c:
    // 0x1f556c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f556cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5570:
    // 0x1f5570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5574:
    // 0x1f5574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5578:
    // 0x1f5578: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1f5578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1f557c:
    // 0x1f557c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f557cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f5580:
    // 0x1f5580: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5584:
    // 0x1f5584: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f5584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f5588:
    // 0x1f5588: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f5588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f558c:
    // 0x1f558c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f558cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f5590:
    // 0x1f5590: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f5594:
    if (ctx->pc == 0x1F5594u) {
        ctx->pc = 0x1F5594u;
            // 0x1f5594: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F5598u;
        goto label_1f5598;
    }
    ctx->pc = 0x1F5590u;
    {
        const bool branch_taken_0x1f5590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5590u;
            // 0x1f5594: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5590) {
            ctx->pc = 0x1F55C0u;
            goto label_1f55c0;
        }
    }
    ctx->pc = 0x1F5598u;
label_1f5598:
    // 0x1f5598: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f5598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f559c:
    // 0x1f559c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f559cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f55a0:
    // 0x1f55a0: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x1f55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
label_1f55a4:
    // 0x1f55a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f55a8:
    // 0x1f55a8: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f55ac:
    // 0x1f55ac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f55acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f55b0:
    // 0x1f55b0: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f55b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f55b4:
    // 0x1f55b4: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f55b8:
    // 0x1f55b8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f55bc:
    // 0x1f55bc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f55c0:
    // 0x1f55c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f55c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f55c4:
    // 0x1f55c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f55c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f55c8:
    // 0x1f55c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f55c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f55cc:
    // 0x1f55cc: 0x320f809  jalr        $t9
label_1f55d0:
    if (ctx->pc == 0x1F55D0u) {
        ctx->pc = 0x1F55D4u;
        goto label_1f55d4;
    }
    ctx->pc = 0x1F55CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F55D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F55D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F55D4u; }
            if (ctx->pc != 0x1F55D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F55D4u;
label_1f55d4:
    // 0x1f55d4: 0xafb0028c  sw          $s0, 0x28C($sp)
    ctx->pc = 0x1f55d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 16));
label_1f55d8:
    // 0x1f55d8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f55dc:
    // 0x1f55dc: 0xafa30288  sw          $v1, 0x288($sp)
    ctx->pc = 0x1f55dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 3));
label_1f55e0:
    // 0x1f55e0: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x1f55e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f55e4:
    // 0x1f55e4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1f55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f55e8:
    // 0x1f55e8: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1f55e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f55ec:
    // 0x1f55ec: 0x6200016  bltz        $s1, . + 4 + (0x16 << 2)
label_1f55f0:
    if (ctx->pc == 0x1F55F0u) {
        ctx->pc = 0x1F55F0u;
            // 0x1f55f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F55F4u;
        goto label_1f55f4;
    }
    ctx->pc = 0x1F55ECu;
    {
        const bool branch_taken_0x1f55ec = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F55F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F55ECu;
            // 0x1f55f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f55ec) {
            ctx->pc = 0x1F5648u;
            goto label_1f5648;
        }
    }
    ctx->pc = 0x1F55F4u;
label_1f55f4:
    // 0x1f55f4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f55f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f55f8:
    // 0x1f55f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f55f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f55fc:
    // 0x1f55fc: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1f55fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f5600:
    // 0x1f5600: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1f5600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f5604:
    // 0x1f5604: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f5604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f5608:
    // 0x1f5608: 0x320f809  jalr        $t9
label_1f560c:
    if (ctx->pc == 0x1F560Cu) {
        ctx->pc = 0x1F560Cu;
            // 0x1f560c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5610u;
        goto label_1f5610;
    }
    ctx->pc = 0x1F5608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5610u);
        ctx->pc = 0x1F560Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5608u;
            // 0x1f560c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5610u; }
            if (ctx->pc != 0x1F5610u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5610u;
label_1f5610:
    // 0x1f5610: 0xafb00284  sw          $s0, 0x284($sp)
    ctx->pc = 0x1f5610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 16));
label_1f5614:
    // 0x1f5614: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x1f5614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1f5618:
    // 0x1f5618: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x1f5618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_1f561c:
    // 0x1f561c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f561cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f5620:
    // 0x1f5620: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1f5620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f5624:
    // 0x1f5624: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f5624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f5628:
    // 0x1f5628: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f5628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f562c:
    // 0x1f562c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f562cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f5630:
    // 0x1f5630: 0x320f809  jalr        $t9
label_1f5634:
    if (ctx->pc == 0x1F5634u) {
        ctx->pc = 0x1F5634u;
            // 0x1f5634: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5638u;
        goto label_1f5638;
    }
    ctx->pc = 0x1F5630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5638u);
        ctx->pc = 0x1F5634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5630u;
            // 0x1f5634: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5638u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5638u; }
            if (ctx->pc != 0x1F5638u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5638u;
label_1f5638:
    // 0x1f5638: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f5638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f563c:
    // 0x1f563c: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
label_1f5640:
    if (ctx->pc == 0x1F5640u) {
        ctx->pc = 0x1F5640u;
            // 0x1f5640: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x1F5644u;
        goto label_1f5644;
    }
    ctx->pc = 0x1F563Cu;
    {
        const bool branch_taken_0x1f563c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F5640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F563Cu;
            // 0x1f5640: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f563c) {
            ctx->pc = 0x1F55F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f55f4;
        }
    }
    ctx->pc = 0x1F5644u;
label_1f5644:
    // 0x1f5644: 0x0  nop
    ctx->pc = 0x1f5644u;
    // NOP
label_1f5648:
    // 0x1f5648: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f5648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f564c:
    // 0x1f564c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f564cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f5650:
    // 0x1f5650: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1f5650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1f5654:
    // 0x1f5654: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f5654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f5658:
    // 0x1f5658: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f5658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f565c:
    // 0x1f565c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f565cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f5660:
    // 0x1f5660: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f5664:
    if (ctx->pc == 0x1F5664u) {
        ctx->pc = 0x1F5664u;
            // 0x1f5664: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F5668u;
        goto label_1f5668;
    }
    ctx->pc = 0x1F5660u;
    {
        const bool branch_taken_0x1f5660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5660u;
            // 0x1f5664: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5660) {
            ctx->pc = 0x1F5690u;
            goto label_1f5690;
        }
    }
    ctx->pc = 0x1F5668u;
label_1f5668:
    // 0x1f5668: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f5668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f566c:
    // 0x1f566c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f566cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f5670:
    // 0x1f5670: 0x2463af88  addiu       $v1, $v1, -0x5078
    ctx->pc = 0x1f5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946696));
label_1f5674:
    // 0x1f5674: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f5674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f5678:
    // 0x1f5678: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5678u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f567c:
    // 0x1f567c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f567cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f5680:
    // 0x1f5680: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5680u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f5684:
    // 0x1f5684: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f5684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f5688:
    // 0x1f5688: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f5688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f568c:
    // 0x1f568c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f568cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f5690:
    // 0x1f5690: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f5690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5694:
    // 0x1f5694: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f5694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5698:
    // 0x1f5698: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f569c:
    // 0x1f569c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f569cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f56a0:
    // 0x1f56a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f56a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f56a4:
    // 0x1f56a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f56a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f56a8:
    // 0x1f56a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f56a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f56ac:
    // 0x1f56ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f56acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f56b0:
    // 0x1f56b0: 0x3e00008  jr          $ra
label_1f56b4:
    if (ctx->pc == 0x1F56B4u) {
        ctx->pc = 0x1F56B4u;
            // 0x1f56b4: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1F56B8u;
        goto label_1f56b8;
    }
    ctx->pc = 0x1F56B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F56B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F56B0u;
            // 0x1f56b4: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F56B8u;
label_1f56b8:
    // 0x1f56b8: 0x0  nop
    ctx->pc = 0x1f56b8u;
    // NOP
label_1f56bc:
    // 0x1f56bc: 0x0  nop
    ctx->pc = 0x1f56bcu;
    // NOP
}
