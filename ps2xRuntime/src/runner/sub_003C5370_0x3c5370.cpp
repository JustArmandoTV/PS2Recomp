#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C5370
// Address: 0x3c5370 - 0x3c54e0
void sub_003C5370_0x3c5370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5370_0x3c5370");
#endif

    switch (ctx->pc) {
        case 0x3c5370u: goto label_3c5370;
        case 0x3c5374u: goto label_3c5374;
        case 0x3c5378u: goto label_3c5378;
        case 0x3c537cu: goto label_3c537c;
        case 0x3c5380u: goto label_3c5380;
        case 0x3c5384u: goto label_3c5384;
        case 0x3c5388u: goto label_3c5388;
        case 0x3c538cu: goto label_3c538c;
        case 0x3c5390u: goto label_3c5390;
        case 0x3c5394u: goto label_3c5394;
        case 0x3c5398u: goto label_3c5398;
        case 0x3c539cu: goto label_3c539c;
        case 0x3c53a0u: goto label_3c53a0;
        case 0x3c53a4u: goto label_3c53a4;
        case 0x3c53a8u: goto label_3c53a8;
        case 0x3c53acu: goto label_3c53ac;
        case 0x3c53b0u: goto label_3c53b0;
        case 0x3c53b4u: goto label_3c53b4;
        case 0x3c53b8u: goto label_3c53b8;
        case 0x3c53bcu: goto label_3c53bc;
        case 0x3c53c0u: goto label_3c53c0;
        case 0x3c53c4u: goto label_3c53c4;
        case 0x3c53c8u: goto label_3c53c8;
        case 0x3c53ccu: goto label_3c53cc;
        case 0x3c53d0u: goto label_3c53d0;
        case 0x3c53d4u: goto label_3c53d4;
        case 0x3c53d8u: goto label_3c53d8;
        case 0x3c53dcu: goto label_3c53dc;
        case 0x3c53e0u: goto label_3c53e0;
        case 0x3c53e4u: goto label_3c53e4;
        case 0x3c53e8u: goto label_3c53e8;
        case 0x3c53ecu: goto label_3c53ec;
        case 0x3c53f0u: goto label_3c53f0;
        case 0x3c53f4u: goto label_3c53f4;
        case 0x3c53f8u: goto label_3c53f8;
        case 0x3c53fcu: goto label_3c53fc;
        case 0x3c5400u: goto label_3c5400;
        case 0x3c5404u: goto label_3c5404;
        case 0x3c5408u: goto label_3c5408;
        case 0x3c540cu: goto label_3c540c;
        case 0x3c5410u: goto label_3c5410;
        case 0x3c5414u: goto label_3c5414;
        case 0x3c5418u: goto label_3c5418;
        case 0x3c541cu: goto label_3c541c;
        case 0x3c5420u: goto label_3c5420;
        case 0x3c5424u: goto label_3c5424;
        case 0x3c5428u: goto label_3c5428;
        case 0x3c542cu: goto label_3c542c;
        case 0x3c5430u: goto label_3c5430;
        case 0x3c5434u: goto label_3c5434;
        case 0x3c5438u: goto label_3c5438;
        case 0x3c543cu: goto label_3c543c;
        case 0x3c5440u: goto label_3c5440;
        case 0x3c5444u: goto label_3c5444;
        case 0x3c5448u: goto label_3c5448;
        case 0x3c544cu: goto label_3c544c;
        case 0x3c5450u: goto label_3c5450;
        case 0x3c5454u: goto label_3c5454;
        case 0x3c5458u: goto label_3c5458;
        case 0x3c545cu: goto label_3c545c;
        case 0x3c5460u: goto label_3c5460;
        case 0x3c5464u: goto label_3c5464;
        case 0x3c5468u: goto label_3c5468;
        case 0x3c546cu: goto label_3c546c;
        case 0x3c5470u: goto label_3c5470;
        case 0x3c5474u: goto label_3c5474;
        case 0x3c5478u: goto label_3c5478;
        case 0x3c547cu: goto label_3c547c;
        case 0x3c5480u: goto label_3c5480;
        case 0x3c5484u: goto label_3c5484;
        case 0x3c5488u: goto label_3c5488;
        case 0x3c548cu: goto label_3c548c;
        case 0x3c5490u: goto label_3c5490;
        case 0x3c5494u: goto label_3c5494;
        case 0x3c5498u: goto label_3c5498;
        case 0x3c549cu: goto label_3c549c;
        case 0x3c54a0u: goto label_3c54a0;
        case 0x3c54a4u: goto label_3c54a4;
        case 0x3c54a8u: goto label_3c54a8;
        case 0x3c54acu: goto label_3c54ac;
        case 0x3c54b0u: goto label_3c54b0;
        case 0x3c54b4u: goto label_3c54b4;
        case 0x3c54b8u: goto label_3c54b8;
        case 0x3c54bcu: goto label_3c54bc;
        case 0x3c54c0u: goto label_3c54c0;
        case 0x3c54c4u: goto label_3c54c4;
        case 0x3c54c8u: goto label_3c54c8;
        case 0x3c54ccu: goto label_3c54cc;
        case 0x3c54d0u: goto label_3c54d0;
        case 0x3c54d4u: goto label_3c54d4;
        case 0x3c54d8u: goto label_3c54d8;
        case 0x3c54dcu: goto label_3c54dc;
        default: break;
    }

    ctx->pc = 0x3c5370u;

label_3c5370:
    // 0x3c5370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c5370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c5374:
    // 0x3c5374: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3c5374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c5378:
    // 0x3c5378: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c5378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c537c:
    // 0x3c537c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c5380:
    // 0x3c5380: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c5380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c5384:
    // 0x3c5384: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c5388:
    // 0x3c5388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c5388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c538c:
    // 0x3c538c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c538cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c5390:
    // 0x3c5390: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3c5390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c5394:
    // 0x3c5394: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x3c5394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_3c5398:
    // 0x3c5398: 0xc10ca68  jal         func_4329A0
label_3c539c:
    if (ctx->pc == 0x3C539Cu) {
        ctx->pc = 0x3C539Cu;
            // 0x3c539c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3C53A0u;
        goto label_3c53a0;
    }
    ctx->pc = 0x3C5398u;
    SET_GPR_U32(ctx, 31, 0x3C53A0u);
    ctx->pc = 0x3C539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5398u;
            // 0x3c539c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C53A0u; }
        if (ctx->pc != 0x3C53A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C53A0u; }
        if (ctx->pc != 0x3C53A0u) { return; }
    }
    ctx->pc = 0x3C53A0u;
label_3c53a0:
    // 0x3c53a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c53a4:
    // 0x3c53a4: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x3c53a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_3c53a8:
    // 0x3c53a8: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3c53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3c53ac:
    // 0x3c53ac: 0xc0d3594  jal         func_34D650
label_3c53b0:
    if (ctx->pc == 0x3C53B0u) {
        ctx->pc = 0x3C53B0u;
            // 0x3c53b0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C53B4u;
        goto label_3c53b4;
    }
    ctx->pc = 0x3C53ACu;
    SET_GPR_U32(ctx, 31, 0x3C53B4u);
    ctx->pc = 0x3C53B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C53ACu;
            // 0x3c53b0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34D650u;
    if (runtime->hasFunction(0x34D650u)) {
        auto targetFn = runtime->lookupFunction(0x34D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C53B4u; }
        if (ctx->pc != 0x3C53B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034D650_0x34d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C53B4u; }
        if (ctx->pc != 0x3C53B4u) { return; }
    }
    ctx->pc = 0x3C53B4u;
label_3c53b4:
    // 0x3c53b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c53b8:
    // 0x3c53b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3c53b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3c53bc:
    // 0x3c53bc: 0x24428d00  addiu       $v0, $v0, -0x7300
    ctx->pc = 0x3c53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
label_3c53c0:
    // 0x3c53c0: 0x24638d30  addiu       $v1, $v1, -0x72D0
    ctx->pc = 0x3c53c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937904));
label_3c53c4:
    // 0x3c53c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3c53c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3c53c8:
    // 0x3c53c8: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3c53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3c53cc:
    // 0x3c53cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c53ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c53d0:
    // 0x3c53d0: 0xa2510070  sb          $s1, 0x70($s2)
    ctx->pc = 0x3c53d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 17));
label_3c53d4:
    // 0x3c53d4: 0xae500074  sw          $s0, 0x74($s2)
    ctx->pc = 0x3c53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 16));
label_3c53d8:
    // 0x3c53d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c53d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c53dc:
    // 0x3c53dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c53dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c53e0:
    // 0x3c53e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c53e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c53e4:
    // 0x3c53e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c53e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c53e8:
    // 0x3c53e8: 0x3e00008  jr          $ra
label_3c53ec:
    if (ctx->pc == 0x3C53ECu) {
        ctx->pc = 0x3C53ECu;
            // 0x3c53ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3C53F0u;
        goto label_3c53f0;
    }
    ctx->pc = 0x3C53E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C53ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C53E8u;
            // 0x3c53ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C53F0u;
label_3c53f0:
    // 0x3c53f0: 0x80f143c  j           func_3C50F0
label_3c53f4:
    if (ctx->pc == 0x3C53F4u) {
        ctx->pc = 0x3C53F4u;
            // 0x3c53f4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->pc = 0x3C53F8u;
        goto label_3c53f8;
    }
    ctx->pc = 0x3C53F0u;
    ctx->pc = 0x3C53F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C53F0u;
            // 0x3c53f4: 0x2484ffac  addiu       $a0, $a0, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C50F0u;
    {
        auto targetFn = runtime->lookupFunction(0x3C50F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3C53F8u;
label_3c53f8:
    // 0x3c53f8: 0x0  nop
    ctx->pc = 0x3c53f8u;
    // NOP
label_3c53fc:
    // 0x3c53fc: 0x0  nop
    ctx->pc = 0x3c53fcu;
    // NOP
label_3c5400:
    // 0x3c5400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c5400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c5404:
    // 0x3c5404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c5404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c5408:
    // 0x3c5408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c5408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c540c:
    // 0x3c540c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c5410:
    // 0x3c5410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c5410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c5414:
    // 0x3c5414: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3c5418:
    if (ctx->pc == 0x3C5418u) {
        ctx->pc = 0x3C5418u;
            // 0x3c5418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C541Cu;
        goto label_3c541c;
    }
    ctx->pc = 0x3C5414u;
    {
        const bool branch_taken_0x3c5414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5414u;
            // 0x3c5418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5414) {
            ctx->pc = 0x3C5458u;
            goto label_3c5458;
        }
    }
    ctx->pc = 0x3C541Cu;
label_3c541c:
    // 0x3c541c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c5420:
    // 0x3c5420: 0x24428d40  addiu       $v0, $v0, -0x72C0
    ctx->pc = 0x3c5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937920));
label_3c5424:
    // 0x3c5424: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3c5428:
    if (ctx->pc == 0x3C5428u) {
        ctx->pc = 0x3C5428u;
            // 0x3c5428: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C542Cu;
        goto label_3c542c;
    }
    ctx->pc = 0x3C5424u;
    {
        const bool branch_taken_0x3c5424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5424u;
            // 0x3c5428: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5424) {
            ctx->pc = 0x3C5440u;
            goto label_3c5440;
        }
    }
    ctx->pc = 0x3C542Cu;
label_3c542c:
    // 0x3c542c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3c542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3c5430:
    // 0x3c5430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c5430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5434:
    // 0x3c5434: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3c5434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3c5438:
    // 0x3c5438: 0xc057a68  jal         func_15E9A0
label_3c543c:
    if (ctx->pc == 0x3C543Cu) {
        ctx->pc = 0x3C543Cu;
            // 0x3c543c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C5440u;
        goto label_3c5440;
    }
    ctx->pc = 0x3C5438u;
    SET_GPR_U32(ctx, 31, 0x3C5440u);
    ctx->pc = 0x3C543Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5438u;
            // 0x3c543c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5440u; }
        if (ctx->pc != 0x3C5440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5440u; }
        if (ctx->pc != 0x3C5440u) { return; }
    }
    ctx->pc = 0x3C5440u;
label_3c5440:
    // 0x3c5440: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c5440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c5444:
    // 0x3c5444: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c5444u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c5448:
    // 0x3c5448: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c544c:
    if (ctx->pc == 0x3C544Cu) {
        ctx->pc = 0x3C544Cu;
            // 0x3c544c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5450u;
        goto label_3c5450;
    }
    ctx->pc = 0x3C5448u;
    {
        const bool branch_taken_0x3c5448 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c5448) {
            ctx->pc = 0x3C544Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5448u;
            // 0x3c544c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C545Cu;
            goto label_3c545c;
        }
    }
    ctx->pc = 0x3C5450u;
label_3c5450:
    // 0x3c5450: 0xc0400a8  jal         func_1002A0
label_3c5454:
    if (ctx->pc == 0x3C5454u) {
        ctx->pc = 0x3C5454u;
            // 0x3c5454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C5458u;
        goto label_3c5458;
    }
    ctx->pc = 0x3C5450u;
    SET_GPR_U32(ctx, 31, 0x3C5458u);
    ctx->pc = 0x3C5454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5450u;
            // 0x3c5454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5458u; }
        if (ctx->pc != 0x3C5458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C5458u; }
        if (ctx->pc != 0x3C5458u) { return; }
    }
    ctx->pc = 0x3C5458u;
label_3c5458:
    // 0x3c5458: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c5458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c545c:
    // 0x3c545c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c545cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c5460:
    // 0x3c5460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c5460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c5464:
    // 0x3c5464: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c5468:
    // 0x3c5468: 0x3e00008  jr          $ra
label_3c546c:
    if (ctx->pc == 0x3C546Cu) {
        ctx->pc = 0x3C546Cu;
            // 0x3c546c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C5470u;
        goto label_3c5470;
    }
    ctx->pc = 0x3C5468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5468u;
            // 0x3c546c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C5470u;
label_3c5470:
    // 0x3c5470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c5474:
    // 0x3c5474: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c5478:
    // 0x3c5478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c547c:
    // 0x3c547c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c5480:
    // 0x3c5480: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c5480u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c5484:
    // 0x3c5484: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_3c5488:
    if (ctx->pc == 0x3C5488u) {
        ctx->pc = 0x3C5488u;
            // 0x3c5488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C548Cu;
        goto label_3c548c;
    }
    ctx->pc = 0x3C5484u;
    {
        const bool branch_taken_0x3c5484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C5488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5484u;
            // 0x3c5488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5484) {
            ctx->pc = 0x3C54ACu;
            goto label_3c54ac;
        }
    }
    ctx->pc = 0x3C548Cu;
label_3c548c:
    // 0x3c548c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c548cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c5490:
    // 0x3c5490: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3c5494:
    if (ctx->pc == 0x3C5494u) {
        ctx->pc = 0x3C5494u;
            // 0x3c5494: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C5498u;
        goto label_3c5498;
    }
    ctx->pc = 0x3C5490u;
    {
        const bool branch_taken_0x3c5490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c5490) {
            ctx->pc = 0x3C5494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5490u;
            // 0x3c5494: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C54A0u;
            goto label_3c54a0;
        }
    }
    ctx->pc = 0x3C5498u;
label_3c5498:
    // 0x3c5498: 0x1000000b  b           . + 4 + (0xB << 2)
label_3c549c:
    if (ctx->pc == 0x3C549Cu) {
        ctx->pc = 0x3C549Cu;
            // 0x3c549c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3C54A0u;
        goto label_3c54a0;
    }
    ctx->pc = 0x3C5498u;
    {
        const bool branch_taken_0x3c5498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C549Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5498u;
            // 0x3c549c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5498) {
            ctx->pc = 0x3C54C8u;
            goto label_3c54c8;
        }
    }
    ctx->pc = 0x3C54A0u;
label_3c54a0:
    // 0x3c54a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c54a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c54a4:
    // 0x3c54a4: 0x320f809  jalr        $t9
label_3c54a8:
    if (ctx->pc == 0x3C54A8u) {
        ctx->pc = 0x3C54ACu;
        goto label_3c54ac;
    }
    ctx->pc = 0x3C54A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C54ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C54ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C54ACu; }
            if (ctx->pc != 0x3C54ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3C54ACu;
label_3c54ac:
    // 0x3c54ac: 0x92030055  lbu         $v1, 0x55($s0)
    ctx->pc = 0x3c54acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 85)));
label_3c54b0:
    // 0x3c54b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c54b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3c54b4:
    // 0x3c54b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3c54b8:
    if (ctx->pc == 0x3C54B8u) {
        ctx->pc = 0x3C54BCu;
        goto label_3c54bc;
    }
    ctx->pc = 0x3C54B4u;
    {
        const bool branch_taken_0x3c54b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c54b4) {
            ctx->pc = 0x3C54C4u;
            goto label_3c54c4;
        }
    }
    ctx->pc = 0x3C54BCu;
label_3c54bc:
    // 0x3c54bc: 0xc0f1538  jal         func_3C54E0
label_3c54c0:
    if (ctx->pc == 0x3C54C0u) {
        ctx->pc = 0x3C54C0u;
            // 0x3c54c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C54C4u;
        goto label_3c54c4;
    }
    ctx->pc = 0x3C54BCu;
    SET_GPR_U32(ctx, 31, 0x3C54C4u);
    ctx->pc = 0x3C54C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C54BCu;
            // 0x3c54c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C54E0u;
    if (runtime->hasFunction(0x3C54E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C54E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C54C4u; }
        if (ctx->pc != 0x3C54C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C54E0_0x3c54e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C54C4u; }
        if (ctx->pc != 0x3C54C4u) { return; }
    }
    ctx->pc = 0x3C54C4u;
label_3c54c4:
    // 0x3c54c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c54c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c54c8:
    // 0x3c54c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c54c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c54cc:
    // 0x3c54cc: 0x3e00008  jr          $ra
label_3c54d0:
    if (ctx->pc == 0x3C54D0u) {
        ctx->pc = 0x3C54D0u;
            // 0x3c54d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3C54D4u;
        goto label_3c54d4;
    }
    ctx->pc = 0x3C54CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C54D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C54CCu;
            // 0x3c54d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C54D4u;
label_3c54d4:
    // 0x3c54d4: 0x0  nop
    ctx->pc = 0x3c54d4u;
    // NOP
label_3c54d8:
    // 0x3c54d8: 0x0  nop
    ctx->pc = 0x3c54d8u;
    // NOP
label_3c54dc:
    // 0x3c54dc: 0x0  nop
    ctx->pc = 0x3c54dcu;
    // NOP
}
