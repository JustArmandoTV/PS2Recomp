#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5500
// Address: 0x2a5500 - 0x2a5650
void sub_002A5500_0x2a5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5500_0x2a5500");
#endif

    switch (ctx->pc) {
        case 0x2a5500u: goto label_2a5500;
        case 0x2a5504u: goto label_2a5504;
        case 0x2a5508u: goto label_2a5508;
        case 0x2a550cu: goto label_2a550c;
        case 0x2a5510u: goto label_2a5510;
        case 0x2a5514u: goto label_2a5514;
        case 0x2a5518u: goto label_2a5518;
        case 0x2a551cu: goto label_2a551c;
        case 0x2a5520u: goto label_2a5520;
        case 0x2a5524u: goto label_2a5524;
        case 0x2a5528u: goto label_2a5528;
        case 0x2a552cu: goto label_2a552c;
        case 0x2a5530u: goto label_2a5530;
        case 0x2a5534u: goto label_2a5534;
        case 0x2a5538u: goto label_2a5538;
        case 0x2a553cu: goto label_2a553c;
        case 0x2a5540u: goto label_2a5540;
        case 0x2a5544u: goto label_2a5544;
        case 0x2a5548u: goto label_2a5548;
        case 0x2a554cu: goto label_2a554c;
        case 0x2a5550u: goto label_2a5550;
        case 0x2a5554u: goto label_2a5554;
        case 0x2a5558u: goto label_2a5558;
        case 0x2a555cu: goto label_2a555c;
        case 0x2a5560u: goto label_2a5560;
        case 0x2a5564u: goto label_2a5564;
        case 0x2a5568u: goto label_2a5568;
        case 0x2a556cu: goto label_2a556c;
        case 0x2a5570u: goto label_2a5570;
        case 0x2a5574u: goto label_2a5574;
        case 0x2a5578u: goto label_2a5578;
        case 0x2a557cu: goto label_2a557c;
        case 0x2a5580u: goto label_2a5580;
        case 0x2a5584u: goto label_2a5584;
        case 0x2a5588u: goto label_2a5588;
        case 0x2a558cu: goto label_2a558c;
        case 0x2a5590u: goto label_2a5590;
        case 0x2a5594u: goto label_2a5594;
        case 0x2a5598u: goto label_2a5598;
        case 0x2a559cu: goto label_2a559c;
        case 0x2a55a0u: goto label_2a55a0;
        case 0x2a55a4u: goto label_2a55a4;
        case 0x2a55a8u: goto label_2a55a8;
        case 0x2a55acu: goto label_2a55ac;
        case 0x2a55b0u: goto label_2a55b0;
        case 0x2a55b4u: goto label_2a55b4;
        case 0x2a55b8u: goto label_2a55b8;
        case 0x2a55bcu: goto label_2a55bc;
        case 0x2a55c0u: goto label_2a55c0;
        case 0x2a55c4u: goto label_2a55c4;
        case 0x2a55c8u: goto label_2a55c8;
        case 0x2a55ccu: goto label_2a55cc;
        case 0x2a55d0u: goto label_2a55d0;
        case 0x2a55d4u: goto label_2a55d4;
        case 0x2a55d8u: goto label_2a55d8;
        case 0x2a55dcu: goto label_2a55dc;
        case 0x2a55e0u: goto label_2a55e0;
        case 0x2a55e4u: goto label_2a55e4;
        case 0x2a55e8u: goto label_2a55e8;
        case 0x2a55ecu: goto label_2a55ec;
        case 0x2a55f0u: goto label_2a55f0;
        case 0x2a55f4u: goto label_2a55f4;
        case 0x2a55f8u: goto label_2a55f8;
        case 0x2a55fcu: goto label_2a55fc;
        case 0x2a5600u: goto label_2a5600;
        case 0x2a5604u: goto label_2a5604;
        case 0x2a5608u: goto label_2a5608;
        case 0x2a560cu: goto label_2a560c;
        case 0x2a5610u: goto label_2a5610;
        case 0x2a5614u: goto label_2a5614;
        case 0x2a5618u: goto label_2a5618;
        case 0x2a561cu: goto label_2a561c;
        case 0x2a5620u: goto label_2a5620;
        case 0x2a5624u: goto label_2a5624;
        case 0x2a5628u: goto label_2a5628;
        case 0x2a562cu: goto label_2a562c;
        case 0x2a5630u: goto label_2a5630;
        case 0x2a5634u: goto label_2a5634;
        case 0x2a5638u: goto label_2a5638;
        case 0x2a563cu: goto label_2a563c;
        case 0x2a5640u: goto label_2a5640;
        case 0x2a5644u: goto label_2a5644;
        case 0x2a5648u: goto label_2a5648;
        case 0x2a564cu: goto label_2a564c;
        default: break;
    }

    ctx->pc = 0x2a5500u;

label_2a5500:
    // 0x2a5500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a5504:
    // 0x2a5504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a5504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a5508:
    // 0x2a5508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a5508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a550c:
    // 0x2a550c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a550cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5510:
    // 0x2a5510: 0x8c8401c8  lw          $a0, 0x1C8($a0)
    ctx->pc = 0x2a5510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
label_2a5514:
    // 0x2a5514: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_2a5518:
    if (ctx->pc == 0x2A5518u) {
        ctx->pc = 0x2A5518u;
            // 0x2a5518: 0xc60c01a4  lwc1        $f12, 0x1A4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2A551Cu;
        goto label_2a551c;
    }
    ctx->pc = 0x2A5514u;
    {
        const bool branch_taken_0x2a5514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5514) {
            ctx->pc = 0x2A5518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5514u;
            // 0x2a5518: 0xc60c01a4  lwc1        $f12, 0x1A4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5544u;
            goto label_2a5544;
        }
    }
    ctx->pc = 0x2A551Cu;
label_2a551c:
    // 0x2a551c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2a551cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2a5520:
    // 0x2a5520: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2a5520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2a5524:
    // 0x2a5524: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x2a5524u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_2a5528:
    // 0x2a5528: 0x54600045  bnel        $v1, $zero, . + 4 + (0x45 << 2)
label_2a552c:
    if (ctx->pc == 0x2A552Cu) {
        ctx->pc = 0x2A552Cu;
            // 0x2a552c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2A5530u;
        goto label_2a5530;
    }
    ctx->pc = 0x2A5528u;
    {
        const bool branch_taken_0x2a5528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5528) {
            ctx->pc = 0x2A552Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5528u;
            // 0x2a552c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A5640u;
            goto label_2a5640;
        }
    }
    ctx->pc = 0x2A5530u;
label_2a5530:
    // 0x2a5530: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a5530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a5534:
    // 0x2a5534: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a5534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a5538:
    // 0x2a5538: 0x320f809  jalr        $t9
label_2a553c:
    if (ctx->pc == 0x2A553Cu) {
        ctx->pc = 0x2A5540u;
        goto label_2a5540;
    }
    ctx->pc = 0x2A5538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A5540u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A5540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A5540u; }
            if (ctx->pc != 0x2A5540u) { return; }
        }
        }
    }
    ctx->pc = 0x2A5540u;
label_2a5540:
    // 0x2a5540: 0xc60c01a4  lwc1        $f12, 0x1A4($s0)
    ctx->pc = 0x2a5540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a5544:
    // 0x2a5544: 0xc60d01a8  lwc1        $f13, 0x1A8($s0)
    ctx->pc = 0x2a5544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a5548:
    // 0x2a5548: 0xc60e01ac  lwc1        $f14, 0x1AC($s0)
    ctx->pc = 0x2a5548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a554c:
    // 0x2a554c: 0xc04cbd8  jal         func_132F60
label_2a5550:
    if (ctx->pc == 0x2A5550u) {
        ctx->pc = 0x2A5550u;
            // 0x2a5550: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->pc = 0x2A5554u;
        goto label_2a5554;
    }
    ctx->pc = 0x2A554Cu;
    SET_GPR_U32(ctx, 31, 0x2A5554u);
    ctx->pc = 0x2A5550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A554Cu;
            // 0x2a5550: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5554u; }
        if (ctx->pc != 0x2A5554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5554u; }
        if (ctx->pc != 0x2A5554u) { return; }
    }
    ctx->pc = 0x2A5554u;
label_2a5554:
    // 0x2a5554: 0x8e050194  lw          $a1, 0x194($s0)
    ctx->pc = 0x2a5554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_2a5558:
    // 0x2a5558: 0xc60c0198  lwc1        $f12, 0x198($s0)
    ctx->pc = 0x2a5558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a555c:
    // 0x2a555c: 0xc60d019c  lwc1        $f13, 0x19C($s0)
    ctx->pc = 0x2a555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a5560:
    // 0x2a5560: 0xc60e01a0  lwc1        $f14, 0x1A0($s0)
    ctx->pc = 0x2a5560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a5564:
    // 0x2a5564: 0xc04f408  jal         func_13D020
label_2a5568:
    if (ctx->pc == 0x2A5568u) {
        ctx->pc = 0x2A5568u;
            // 0x2a5568: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x2A556Cu;
        goto label_2a556c;
    }
    ctx->pc = 0x2A5564u;
    SET_GPR_U32(ctx, 31, 0x2A556Cu);
    ctx->pc = 0x2A5568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5564u;
            // 0x2a5568: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D020u;
    if (runtime->hasFunction(0x13D020u)) {
        auto targetFn = runtime->lookupFunction(0x13D020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A556Cu; }
        if (ctx->pc != 0x2A556Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D020_0x13d020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A556Cu; }
        if (ctx->pc != 0x2A556Cu) { return; }
    }
    ctx->pc = 0x2A556Cu;
label_2a556c:
    // 0x2a556c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2a556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2a5570:
    // 0x2a5570: 0xc04f700  jal         func_13DC00
label_2a5574:
    if (ctx->pc == 0x2A5574u) {
        ctx->pc = 0x2A5574u;
            // 0x2a5574: 0x26050190  addiu       $a1, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->pc = 0x2A5578u;
        goto label_2a5578;
    }
    ctx->pc = 0x2A5570u;
    SET_GPR_U32(ctx, 31, 0x2A5578u);
    ctx->pc = 0x2A5574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5570u;
            // 0x2a5574: 0x26050190  addiu       $a1, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC00u;
    if (runtime->hasFunction(0x13DC00u)) {
        auto targetFn = runtime->lookupFunction(0x13DC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5578u; }
        if (ctx->pc != 0x2A5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC00_0x13dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5578u; }
        if (ctx->pc != 0x2A5578u) { return; }
    }
    ctx->pc = 0x2A5578u;
label_2a5578:
    // 0x2a5578: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2a5578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2a557c:
    // 0x2a557c: 0xc04cce8  jal         func_1333A0
label_2a5580:
    if (ctx->pc == 0x2A5580u) {
        ctx->pc = 0x2A5580u;
            // 0x2a5580: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2A5584u;
        goto label_2a5584;
    }
    ctx->pc = 0x2A557Cu;
    SET_GPR_U32(ctx, 31, 0x2A5584u);
    ctx->pc = 0x2A5580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A557Cu;
            // 0x2a5580: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5584u; }
        if (ctx->pc != 0x2A5584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5584u; }
        if (ctx->pc != 0x2A5584u) { return; }
    }
    ctx->pc = 0x2A5584u;
label_2a5584:
    // 0x2a5584: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2a5584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2a5588:
    // 0x2a5588: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2a5588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2a558c:
    // 0x2a558c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2a558cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_2a5590:
    // 0x2a5590: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a5590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5594:
    // 0x2a5594: 0xc04ccf4  jal         func_1333D0
label_2a5598:
    if (ctx->pc == 0x2A5598u) {
        ctx->pc = 0x2A5598u;
            // 0x2a5598: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2A559Cu;
        goto label_2a559c;
    }
    ctx->pc = 0x2A5594u;
    SET_GPR_U32(ctx, 31, 0x2A559Cu);
    ctx->pc = 0x2A5598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5594u;
            // 0x2a5598: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A559Cu; }
        if (ctx->pc != 0x2A559Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A559Cu; }
        if (ctx->pc != 0x2A559Cu) { return; }
    }
    ctx->pc = 0x2A559Cu;
label_2a559c:
    // 0x2a559c: 0xc60301b0  lwc1        $f3, 0x1B0($s0)
    ctx->pc = 0x2a559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2a55a0:
    // 0x2a55a0: 0xc60201a4  lwc1        $f2, 0x1A4($s0)
    ctx->pc = 0x2a55a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2a55a4:
    // 0x2a55a4: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x2a55a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a55a8:
    // 0x2a55a8: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x2a55a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a55ac:
    // 0x2a55ac: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2a55acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2a55b0:
    // 0x2a55b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a55b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2a55b4:
    // 0x2a55b4: 0x46001307  neg.s       $f12, $f2
    ctx->pc = 0x2a55b4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
label_2a55b8:
    // 0x2a55b8: 0xc04780a  jal         func_11E028
label_2a55bc:
    if (ctx->pc == 0x2A55BCu) {
        ctx->pc = 0x2A55BCu;
            // 0x2a55bc: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x2A55C0u;
        goto label_2a55c0;
    }
    ctx->pc = 0x2A55B8u;
    SET_GPR_U32(ctx, 31, 0x2A55C0u);
    ctx->pc = 0x2A55BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A55B8u;
            // 0x2a55bc: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A55C0u; }
        if (ctx->pc != 0x2A55C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A55C0u; }
        if (ctx->pc != 0x2A55C0u) { return; }
    }
    ctx->pc = 0x2A55C0u;
label_2a55c0:
    // 0x2a55c0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x2a55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_2a55c4:
    // 0x2a55c4: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2a55c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_2a55c8:
    // 0x2a55c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a55c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a55cc:
    // 0x2a55cc: 0x0  nop
    ctx->pc = 0x2a55ccu;
    // NOP
label_2a55d0:
    // 0x2a55d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a55d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2a55d4:
    // 0x2a55d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a55d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2a55d8:
    // 0x2a55d8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2a55d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2a55dc:
    // 0x2a55dc: 0xc04f2b8  jal         func_13CAE0
label_2a55e0:
    if (ctx->pc == 0x2A55E0u) {
        ctx->pc = 0x2A55E0u;
            // 0x2a55e0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x2A55E4u;
        goto label_2a55e4;
    }
    ctx->pc = 0x2A55DCu;
    SET_GPR_U32(ctx, 31, 0x2A55E4u);
    ctx->pc = 0x2A55E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A55DCu;
            // 0x2a55e0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAE0u;
    if (runtime->hasFunction(0x13CAE0u)) {
        auto targetFn = runtime->lookupFunction(0x13CAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A55E4u; }
        if (ctx->pc != 0x2A55E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CAE0_0x13cae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A55E4u; }
        if (ctx->pc != 0x2A55E4u) { return; }
    }
    ctx->pc = 0x2A55E4u;
label_2a55e4:
    // 0x2a55e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a55e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a55e8:
    // 0x2a55e8: 0xc04cce8  jal         func_1333A0
label_2a55ec:
    if (ctx->pc == 0x2A55ECu) {
        ctx->pc = 0x2A55ECu;
            // 0x2a55ec: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2A55F0u;
        goto label_2a55f0;
    }
    ctx->pc = 0x2A55E8u;
    SET_GPR_U32(ctx, 31, 0x2A55F0u);
    ctx->pc = 0x2A55ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A55E8u;
            // 0x2a55ec: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A55F0u; }
        if (ctx->pc != 0x2A55F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A55F0u; }
        if (ctx->pc != 0x2A55F0u) { return; }
    }
    ctx->pc = 0x2A55F0u;
label_2a55f0:
    // 0x2a55f0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2a55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2a55f4:
    // 0x2a55f4: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x2a55f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_2a55f8:
    // 0x2a55f8: 0xc04cd60  jal         func_133580
label_2a55fc:
    if (ctx->pc == 0x2A55FCu) {
        ctx->pc = 0x2A55FCu;
            // 0x2a55fc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2A5600u;
        goto label_2a5600;
    }
    ctx->pc = 0x2A55F8u;
    SET_GPR_U32(ctx, 31, 0x2A5600u);
    ctx->pc = 0x2A55FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A55F8u;
            // 0x2a55fc: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5600u; }
        if (ctx->pc != 0x2A5600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5600u; }
        if (ctx->pc != 0x2A5600u) { return; }
    }
    ctx->pc = 0x2A5600u;
label_2a5600:
    // 0x2a5600: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x2a5600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a5604:
    // 0x2a5604: 0xc60d0020  lwc1        $f13, 0x20($s0)
    ctx->pc = 0x2a5604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a5608:
    // 0x2a5608: 0xc60e0030  lwc1        $f14, 0x30($s0)
    ctx->pc = 0x2a5608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a560c:
    // 0x2a560c: 0xc04cbd8  jal         func_132F60
label_2a5610:
    if (ctx->pc == 0x2A5610u) {
        ctx->pc = 0x2A5610u;
            // 0x2a5610: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->pc = 0x2A5614u;
        goto label_2a5614;
    }
    ctx->pc = 0x2A560Cu;
    SET_GPR_U32(ctx, 31, 0x2A5614u);
    ctx->pc = 0x2A5610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A560Cu;
            // 0x2a5610: 0x260401d0  addiu       $a0, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5614u; }
        if (ctx->pc != 0x2A5614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5614u; }
        if (ctx->pc != 0x2A5614u) { return; }
    }
    ctx->pc = 0x2A5614u;
label_2a5614:
    // 0x2a5614: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x2a5614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a5618:
    // 0x2a5618: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x2a5618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a561c:
    // 0x2a561c: 0xc60e0034  lwc1        $f14, 0x34($s0)
    ctx->pc = 0x2a561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a5620:
    // 0x2a5620: 0xc04cbd8  jal         func_132F60
label_2a5624:
    if (ctx->pc == 0x2A5624u) {
        ctx->pc = 0x2A5624u;
            // 0x2a5624: 0x260401e0  addiu       $a0, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->pc = 0x2A5628u;
        goto label_2a5628;
    }
    ctx->pc = 0x2A5620u;
    SET_GPR_U32(ctx, 31, 0x2A5628u);
    ctx->pc = 0x2A5624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5620u;
            // 0x2a5624: 0x260401e0  addiu       $a0, $s0, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5628u; }
        if (ctx->pc != 0x2A5628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5628u; }
        if (ctx->pc != 0x2A5628u) { return; }
    }
    ctx->pc = 0x2A5628u;
label_2a5628:
    // 0x2a5628: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x2a5628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a562c:
    // 0x2a562c: 0xc60d0028  lwc1        $f13, 0x28($s0)
    ctx->pc = 0x2a562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2a5630:
    // 0x2a5630: 0xc60e0038  lwc1        $f14, 0x38($s0)
    ctx->pc = 0x2a5630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2a5634:
    // 0x2a5634: 0xc04cbd8  jal         func_132F60
label_2a5638:
    if (ctx->pc == 0x2A5638u) {
        ctx->pc = 0x2A5638u;
            // 0x2a5638: 0x260401f0  addiu       $a0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->pc = 0x2A563Cu;
        goto label_2a563c;
    }
    ctx->pc = 0x2A5634u;
    SET_GPR_U32(ctx, 31, 0x2A563Cu);
    ctx->pc = 0x2A5638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5634u;
            // 0x2a5638: 0x260401f0  addiu       $a0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A563Cu; }
        if (ctx->pc != 0x2A563Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A563Cu; }
        if (ctx->pc != 0x2A563Cu) { return; }
    }
    ctx->pc = 0x2A563Cu;
label_2a563c:
    // 0x2a563c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a563cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a5640:
    // 0x2a5640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a5644:
    // 0x2a5644: 0x3e00008  jr          $ra
label_2a5648:
    if (ctx->pc == 0x2A5648u) {
        ctx->pc = 0x2A5648u;
            // 0x2a5648: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2A564Cu;
        goto label_2a564c;
    }
    ctx->pc = 0x2A5644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5644u;
            // 0x2a5648: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A564Cu;
label_2a564c:
    // 0x2a564c: 0x0  nop
    ctx->pc = 0x2a564cu;
    // NOP
}
