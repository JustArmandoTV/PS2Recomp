#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F53C0
// Address: 0x1f53c0 - 0x1f5540
void sub_001F53C0_0x1f53c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F53C0_0x1f53c0");
#endif

    switch (ctx->pc) {
        case 0x1f53c0u: goto label_1f53c0;
        case 0x1f53c4u: goto label_1f53c4;
        case 0x1f53c8u: goto label_1f53c8;
        case 0x1f53ccu: goto label_1f53cc;
        case 0x1f53d0u: goto label_1f53d0;
        case 0x1f53d4u: goto label_1f53d4;
        case 0x1f53d8u: goto label_1f53d8;
        case 0x1f53dcu: goto label_1f53dc;
        case 0x1f53e0u: goto label_1f53e0;
        case 0x1f53e4u: goto label_1f53e4;
        case 0x1f53e8u: goto label_1f53e8;
        case 0x1f53ecu: goto label_1f53ec;
        case 0x1f53f0u: goto label_1f53f0;
        case 0x1f53f4u: goto label_1f53f4;
        case 0x1f53f8u: goto label_1f53f8;
        case 0x1f53fcu: goto label_1f53fc;
        case 0x1f5400u: goto label_1f5400;
        case 0x1f5404u: goto label_1f5404;
        case 0x1f5408u: goto label_1f5408;
        case 0x1f540cu: goto label_1f540c;
        case 0x1f5410u: goto label_1f5410;
        case 0x1f5414u: goto label_1f5414;
        case 0x1f5418u: goto label_1f5418;
        case 0x1f541cu: goto label_1f541c;
        case 0x1f5420u: goto label_1f5420;
        case 0x1f5424u: goto label_1f5424;
        case 0x1f5428u: goto label_1f5428;
        case 0x1f542cu: goto label_1f542c;
        case 0x1f5430u: goto label_1f5430;
        case 0x1f5434u: goto label_1f5434;
        case 0x1f5438u: goto label_1f5438;
        case 0x1f543cu: goto label_1f543c;
        case 0x1f5440u: goto label_1f5440;
        case 0x1f5444u: goto label_1f5444;
        case 0x1f5448u: goto label_1f5448;
        case 0x1f544cu: goto label_1f544c;
        case 0x1f5450u: goto label_1f5450;
        case 0x1f5454u: goto label_1f5454;
        case 0x1f5458u: goto label_1f5458;
        case 0x1f545cu: goto label_1f545c;
        case 0x1f5460u: goto label_1f5460;
        case 0x1f5464u: goto label_1f5464;
        case 0x1f5468u: goto label_1f5468;
        case 0x1f546cu: goto label_1f546c;
        case 0x1f5470u: goto label_1f5470;
        case 0x1f5474u: goto label_1f5474;
        case 0x1f5478u: goto label_1f5478;
        case 0x1f547cu: goto label_1f547c;
        case 0x1f5480u: goto label_1f5480;
        case 0x1f5484u: goto label_1f5484;
        case 0x1f5488u: goto label_1f5488;
        case 0x1f548cu: goto label_1f548c;
        case 0x1f5490u: goto label_1f5490;
        case 0x1f5494u: goto label_1f5494;
        case 0x1f5498u: goto label_1f5498;
        case 0x1f549cu: goto label_1f549c;
        case 0x1f54a0u: goto label_1f54a0;
        case 0x1f54a4u: goto label_1f54a4;
        case 0x1f54a8u: goto label_1f54a8;
        case 0x1f54acu: goto label_1f54ac;
        case 0x1f54b0u: goto label_1f54b0;
        case 0x1f54b4u: goto label_1f54b4;
        case 0x1f54b8u: goto label_1f54b8;
        case 0x1f54bcu: goto label_1f54bc;
        case 0x1f54c0u: goto label_1f54c0;
        case 0x1f54c4u: goto label_1f54c4;
        case 0x1f54c8u: goto label_1f54c8;
        case 0x1f54ccu: goto label_1f54cc;
        case 0x1f54d0u: goto label_1f54d0;
        case 0x1f54d4u: goto label_1f54d4;
        case 0x1f54d8u: goto label_1f54d8;
        case 0x1f54dcu: goto label_1f54dc;
        case 0x1f54e0u: goto label_1f54e0;
        case 0x1f54e4u: goto label_1f54e4;
        case 0x1f54e8u: goto label_1f54e8;
        case 0x1f54ecu: goto label_1f54ec;
        case 0x1f54f0u: goto label_1f54f0;
        case 0x1f54f4u: goto label_1f54f4;
        case 0x1f54f8u: goto label_1f54f8;
        case 0x1f54fcu: goto label_1f54fc;
        case 0x1f5500u: goto label_1f5500;
        case 0x1f5504u: goto label_1f5504;
        case 0x1f5508u: goto label_1f5508;
        case 0x1f550cu: goto label_1f550c;
        case 0x1f5510u: goto label_1f5510;
        case 0x1f5514u: goto label_1f5514;
        case 0x1f5518u: goto label_1f5518;
        case 0x1f551cu: goto label_1f551c;
        case 0x1f5520u: goto label_1f5520;
        case 0x1f5524u: goto label_1f5524;
        case 0x1f5528u: goto label_1f5528;
        case 0x1f552cu: goto label_1f552c;
        case 0x1f5530u: goto label_1f5530;
        case 0x1f5534u: goto label_1f5534;
        case 0x1f5538u: goto label_1f5538;
        case 0x1f553cu: goto label_1f553c;
        default: break;
    }

    ctx->pc = 0x1f53c0u;

label_1f53c0:
    // 0x1f53c0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1f53c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_1f53c4:
    // 0x1f53c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f53c8:
    // 0x1f53c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f53c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f53cc:
    // 0x1f53cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f53ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f53d0:
    // 0x1f53d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f53d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f53d4:
    // 0x1f53d4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1f53d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f53d8:
    // 0x1f53d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f53d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f53dc:
    // 0x1f53dc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f53dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f53e0:
    // 0x1f53e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f53e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f53e4:
    // 0x1f53e4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f53e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f53e8:
    // 0x1f53e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f53e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f53ec:
    // 0x1f53ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f53f0:
    // 0x1f53f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f53f4:
    // 0x1f53f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f53f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f53f8:
    // 0x1f53f8: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1f53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1f53fc:
    // 0x1f53fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f53fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f5400:
    // 0x1f5400: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5404:
    // 0x1f5404: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f5404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f5408:
    // 0x1f5408: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f5408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f540c:
    // 0x1f540c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f540cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f5410:
    // 0x1f5410: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f5414:
    if (ctx->pc == 0x1F5414u) {
        ctx->pc = 0x1F5414u;
            // 0x1f5414: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F5418u;
        goto label_1f5418;
    }
    ctx->pc = 0x1F5410u;
    {
        const bool branch_taken_0x1f5410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5410u;
            // 0x1f5414: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5410) {
            ctx->pc = 0x1F5440u;
            goto label_1f5440;
        }
    }
    ctx->pc = 0x1F5418u;
label_1f5418:
    // 0x1f5418: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f5418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f541c:
    // 0x1f541c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f5420:
    // 0x1f5420: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x1f5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
label_1f5424:
    // 0x1f5424: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f5424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f5428:
    // 0x1f5428: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5428u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f542c:
    // 0x1f542c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f542cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f5430:
    // 0x1f5430: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5430u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f5434:
    // 0x1f5434: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f5434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f5438:
    // 0x1f5438: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f5438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f543c:
    // 0x1f543c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f543cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f5440:
    // 0x1f5440: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f5444:
    // 0x1f5444: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f5444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5448:
    // 0x1f5448: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f5448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f544c:
    // 0x1f544c: 0x320f809  jalr        $t9
label_1f5450:
    if (ctx->pc == 0x1F5450u) {
        ctx->pc = 0x1F5454u;
        goto label_1f5454;
    }
    ctx->pc = 0x1F544Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5454u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5454u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5454u; }
            if (ctx->pc != 0x1F5454u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5454u;
label_1f5454:
    // 0x1f5454: 0xafb0028c  sw          $s0, 0x28C($sp)
    ctx->pc = 0x1f5454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 16));
label_1f5458:
    // 0x1f5458: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f5458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f545c:
    // 0x1f545c: 0xafa30288  sw          $v1, 0x288($sp)
    ctx->pc = 0x1f545cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 3));
label_1f5460:
    // 0x1f5460: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x1f5460u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f5464:
    // 0x1f5464: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1f5464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f5468:
    // 0x1f5468: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x1f5468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f546c:
    // 0x1f546c: 0x6200016  bltz        $s1, . + 4 + (0x16 << 2)
label_1f5470:
    if (ctx->pc == 0x1F5470u) {
        ctx->pc = 0x1F5470u;
            // 0x1f5470: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5474u;
        goto label_1f5474;
    }
    ctx->pc = 0x1F546Cu;
    {
        const bool branch_taken_0x1f546c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F5470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F546Cu;
            // 0x1f5470: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f546c) {
            ctx->pc = 0x1F54C8u;
            goto label_1f54c8;
        }
    }
    ctx->pc = 0x1F5474u;
label_1f5474:
    // 0x1f5474: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1f5474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f5478:
    // 0x1f5478: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f5478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f547c:
    // 0x1f547c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1f547cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f5480:
    // 0x1f5480: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1f5480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f5484:
    // 0x1f5484: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f5484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f5488:
    // 0x1f5488: 0x320f809  jalr        $t9
label_1f548c:
    if (ctx->pc == 0x1F548Cu) {
        ctx->pc = 0x1F548Cu;
            // 0x1f548c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5490u;
        goto label_1f5490;
    }
    ctx->pc = 0x1F5488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5490u);
        ctx->pc = 0x1F548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5488u;
            // 0x1f548c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5490u; }
            if (ctx->pc != 0x1F5490u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5490u;
label_1f5490:
    // 0x1f5490: 0xafb00284  sw          $s0, 0x284($sp)
    ctx->pc = 0x1f5490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 16));
label_1f5494:
    // 0x1f5494: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x1f5494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1f5498:
    // 0x1f5498: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x1f5498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_1f549c:
    // 0x1f549c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f549cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f54a0:
    // 0x1f54a0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1f54a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f54a4:
    // 0x1f54a4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f54a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f54a8:
    // 0x1f54a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f54a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f54ac:
    // 0x1f54ac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f54acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f54b0:
    // 0x1f54b0: 0x320f809  jalr        $t9
label_1f54b4:
    if (ctx->pc == 0x1F54B4u) {
        ctx->pc = 0x1F54B4u;
            // 0x1f54b4: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F54B8u;
        goto label_1f54b8;
    }
    ctx->pc = 0x1F54B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F54B8u);
        ctx->pc = 0x1F54B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F54B0u;
            // 0x1f54b4: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F54B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F54B8u; }
            if (ctx->pc != 0x1F54B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F54B8u;
label_1f54b8:
    // 0x1f54b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f54b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f54bc:
    // 0x1f54bc: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
label_1f54c0:
    if (ctx->pc == 0x1F54C0u) {
        ctx->pc = 0x1F54C0u;
            // 0x1f54c0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x1F54C4u;
        goto label_1f54c4;
    }
    ctx->pc = 0x1F54BCu;
    {
        const bool branch_taken_0x1f54bc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F54C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F54BCu;
            // 0x1f54c0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54bc) {
            ctx->pc = 0x1F5474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5474;
        }
    }
    ctx->pc = 0x1F54C4u;
label_1f54c4:
    // 0x1f54c4: 0x0  nop
    ctx->pc = 0x1f54c4u;
    // NOP
label_1f54c8:
    // 0x1f54c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f54c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f54cc:
    // 0x1f54cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f54d0:
    // 0x1f54d0: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1f54d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1f54d4:
    // 0x1f54d4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f54d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f54d8:
    // 0x1f54d8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f54d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f54dc:
    // 0x1f54dc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f54dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f54e0:
    // 0x1f54e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f54e4:
    if (ctx->pc == 0x1F54E4u) {
        ctx->pc = 0x1F54E4u;
            // 0x1f54e4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F54E8u;
        goto label_1f54e8;
    }
    ctx->pc = 0x1F54E0u;
    {
        const bool branch_taken_0x1f54e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F54E0u;
            // 0x1f54e4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54e0) {
            ctx->pc = 0x1F5510u;
            goto label_1f5510;
        }
    }
    ctx->pc = 0x1F54E8u;
label_1f54e8:
    // 0x1f54e8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f54ec:
    // 0x1f54ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f54f0:
    // 0x1f54f0: 0x2463af88  addiu       $v1, $v1, -0x5078
    ctx->pc = 0x1f54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946696));
label_1f54f4:
    // 0x1f54f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f54f8:
    // 0x1f54f8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f54fc:
    // 0x1f54fc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f5500:
    // 0x1f5500: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5500u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f5504:
    // 0x1f5504: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f5504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f5508:
    // 0x1f5508: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f5508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f550c:
    // 0x1f550c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f550cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f5510:
    // 0x1f5510: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f5510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5514:
    // 0x1f5514: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f5514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5518:
    // 0x1f5518: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f551c:
    // 0x1f551c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f551cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5520:
    // 0x1f5520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5524:
    // 0x1f5524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5528:
    // 0x1f5528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f552c:
    // 0x1f552c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f552cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5530:
    // 0x1f5530: 0x3e00008  jr          $ra
label_1f5534:
    if (ctx->pc == 0x1F5534u) {
        ctx->pc = 0x1F5534u;
            // 0x1f5534: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1F5538u;
        goto label_1f5538;
    }
    ctx->pc = 0x1F5530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5530u;
            // 0x1f5534: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5538u;
label_1f5538:
    // 0x1f5538: 0x0  nop
    ctx->pc = 0x1f5538u;
    // NOP
label_1f553c:
    // 0x1f553c: 0x0  nop
    ctx->pc = 0x1f553cu;
    // NOP
}
