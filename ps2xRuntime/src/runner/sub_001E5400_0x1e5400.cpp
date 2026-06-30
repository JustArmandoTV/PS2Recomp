#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5400
// Address: 0x1e5400 - 0x1e5640
void sub_001E5400_0x1e5400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5400_0x1e5400");
#endif

    switch (ctx->pc) {
        case 0x1e5400u: goto label_1e5400;
        case 0x1e5404u: goto label_1e5404;
        case 0x1e5408u: goto label_1e5408;
        case 0x1e540cu: goto label_1e540c;
        case 0x1e5410u: goto label_1e5410;
        case 0x1e5414u: goto label_1e5414;
        case 0x1e5418u: goto label_1e5418;
        case 0x1e541cu: goto label_1e541c;
        case 0x1e5420u: goto label_1e5420;
        case 0x1e5424u: goto label_1e5424;
        case 0x1e5428u: goto label_1e5428;
        case 0x1e542cu: goto label_1e542c;
        case 0x1e5430u: goto label_1e5430;
        case 0x1e5434u: goto label_1e5434;
        case 0x1e5438u: goto label_1e5438;
        case 0x1e543cu: goto label_1e543c;
        case 0x1e5440u: goto label_1e5440;
        case 0x1e5444u: goto label_1e5444;
        case 0x1e5448u: goto label_1e5448;
        case 0x1e544cu: goto label_1e544c;
        case 0x1e5450u: goto label_1e5450;
        case 0x1e5454u: goto label_1e5454;
        case 0x1e5458u: goto label_1e5458;
        case 0x1e545cu: goto label_1e545c;
        case 0x1e5460u: goto label_1e5460;
        case 0x1e5464u: goto label_1e5464;
        case 0x1e5468u: goto label_1e5468;
        case 0x1e546cu: goto label_1e546c;
        case 0x1e5470u: goto label_1e5470;
        case 0x1e5474u: goto label_1e5474;
        case 0x1e5478u: goto label_1e5478;
        case 0x1e547cu: goto label_1e547c;
        case 0x1e5480u: goto label_1e5480;
        case 0x1e5484u: goto label_1e5484;
        case 0x1e5488u: goto label_1e5488;
        case 0x1e548cu: goto label_1e548c;
        case 0x1e5490u: goto label_1e5490;
        case 0x1e5494u: goto label_1e5494;
        case 0x1e5498u: goto label_1e5498;
        case 0x1e549cu: goto label_1e549c;
        case 0x1e54a0u: goto label_1e54a0;
        case 0x1e54a4u: goto label_1e54a4;
        case 0x1e54a8u: goto label_1e54a8;
        case 0x1e54acu: goto label_1e54ac;
        case 0x1e54b0u: goto label_1e54b0;
        case 0x1e54b4u: goto label_1e54b4;
        case 0x1e54b8u: goto label_1e54b8;
        case 0x1e54bcu: goto label_1e54bc;
        case 0x1e54c0u: goto label_1e54c0;
        case 0x1e54c4u: goto label_1e54c4;
        case 0x1e54c8u: goto label_1e54c8;
        case 0x1e54ccu: goto label_1e54cc;
        case 0x1e54d0u: goto label_1e54d0;
        case 0x1e54d4u: goto label_1e54d4;
        case 0x1e54d8u: goto label_1e54d8;
        case 0x1e54dcu: goto label_1e54dc;
        case 0x1e54e0u: goto label_1e54e0;
        case 0x1e54e4u: goto label_1e54e4;
        case 0x1e54e8u: goto label_1e54e8;
        case 0x1e54ecu: goto label_1e54ec;
        case 0x1e54f0u: goto label_1e54f0;
        case 0x1e54f4u: goto label_1e54f4;
        case 0x1e54f8u: goto label_1e54f8;
        case 0x1e54fcu: goto label_1e54fc;
        case 0x1e5500u: goto label_1e5500;
        case 0x1e5504u: goto label_1e5504;
        case 0x1e5508u: goto label_1e5508;
        case 0x1e550cu: goto label_1e550c;
        case 0x1e5510u: goto label_1e5510;
        case 0x1e5514u: goto label_1e5514;
        case 0x1e5518u: goto label_1e5518;
        case 0x1e551cu: goto label_1e551c;
        case 0x1e5520u: goto label_1e5520;
        case 0x1e5524u: goto label_1e5524;
        case 0x1e5528u: goto label_1e5528;
        case 0x1e552cu: goto label_1e552c;
        case 0x1e5530u: goto label_1e5530;
        case 0x1e5534u: goto label_1e5534;
        case 0x1e5538u: goto label_1e5538;
        case 0x1e553cu: goto label_1e553c;
        case 0x1e5540u: goto label_1e5540;
        case 0x1e5544u: goto label_1e5544;
        case 0x1e5548u: goto label_1e5548;
        case 0x1e554cu: goto label_1e554c;
        case 0x1e5550u: goto label_1e5550;
        case 0x1e5554u: goto label_1e5554;
        case 0x1e5558u: goto label_1e5558;
        case 0x1e555cu: goto label_1e555c;
        case 0x1e5560u: goto label_1e5560;
        case 0x1e5564u: goto label_1e5564;
        case 0x1e5568u: goto label_1e5568;
        case 0x1e556cu: goto label_1e556c;
        case 0x1e5570u: goto label_1e5570;
        case 0x1e5574u: goto label_1e5574;
        case 0x1e5578u: goto label_1e5578;
        case 0x1e557cu: goto label_1e557c;
        case 0x1e5580u: goto label_1e5580;
        case 0x1e5584u: goto label_1e5584;
        case 0x1e5588u: goto label_1e5588;
        case 0x1e558cu: goto label_1e558c;
        case 0x1e5590u: goto label_1e5590;
        case 0x1e5594u: goto label_1e5594;
        case 0x1e5598u: goto label_1e5598;
        case 0x1e559cu: goto label_1e559c;
        case 0x1e55a0u: goto label_1e55a0;
        case 0x1e55a4u: goto label_1e55a4;
        case 0x1e55a8u: goto label_1e55a8;
        case 0x1e55acu: goto label_1e55ac;
        case 0x1e55b0u: goto label_1e55b0;
        case 0x1e55b4u: goto label_1e55b4;
        case 0x1e55b8u: goto label_1e55b8;
        case 0x1e55bcu: goto label_1e55bc;
        case 0x1e55c0u: goto label_1e55c0;
        case 0x1e55c4u: goto label_1e55c4;
        case 0x1e55c8u: goto label_1e55c8;
        case 0x1e55ccu: goto label_1e55cc;
        case 0x1e55d0u: goto label_1e55d0;
        case 0x1e55d4u: goto label_1e55d4;
        case 0x1e55d8u: goto label_1e55d8;
        case 0x1e55dcu: goto label_1e55dc;
        case 0x1e55e0u: goto label_1e55e0;
        case 0x1e55e4u: goto label_1e55e4;
        case 0x1e55e8u: goto label_1e55e8;
        case 0x1e55ecu: goto label_1e55ec;
        case 0x1e55f0u: goto label_1e55f0;
        case 0x1e55f4u: goto label_1e55f4;
        case 0x1e55f8u: goto label_1e55f8;
        case 0x1e55fcu: goto label_1e55fc;
        case 0x1e5600u: goto label_1e5600;
        case 0x1e5604u: goto label_1e5604;
        case 0x1e5608u: goto label_1e5608;
        case 0x1e560cu: goto label_1e560c;
        case 0x1e5610u: goto label_1e5610;
        case 0x1e5614u: goto label_1e5614;
        case 0x1e5618u: goto label_1e5618;
        case 0x1e561cu: goto label_1e561c;
        case 0x1e5620u: goto label_1e5620;
        case 0x1e5624u: goto label_1e5624;
        case 0x1e5628u: goto label_1e5628;
        case 0x1e562cu: goto label_1e562c;
        case 0x1e5630u: goto label_1e5630;
        case 0x1e5634u: goto label_1e5634;
        case 0x1e5638u: goto label_1e5638;
        case 0x1e563cu: goto label_1e563c;
        default: break;
    }

    ctx->pc = 0x1e5400u;

label_1e5400:
    // 0x1e5400: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e5400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e5404:
    // 0x1e5404: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e5404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e5408:
    // 0x1e5408: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e5408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e540c:
    // 0x1e540c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e540cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5410:
    // 0x1e5410: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e5410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e5414:
    // 0x1e5414: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e5418:
    // 0x1e5418: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1e5418u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e541c:
    // 0x1e541c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e5420:
    // 0x1e5420: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e5420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e5424:
    // 0x1e5424: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5428:
    // 0x1e5428: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e5428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e542c:
    // 0x1e542c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5430:
    // 0x1e5430: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x1e5430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_1e5434:
    // 0x1e5434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5438:
    // 0x1e5438: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e5438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e543c:
    // 0x1e543c: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1e543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e5440:
    // 0x1e5440: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e5444:
    // 0x1e5444: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e5444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5448:
    // 0x1e5448: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e544c:
    if (ctx->pc == 0x1E544Cu) {
        ctx->pc = 0x1E544Cu;
            // 0x1e544c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x1E5450u;
        goto label_1e5450;
    }
    ctx->pc = 0x1E5448u;
    {
        const bool branch_taken_0x1e5448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5448u;
            // 0x1e544c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5448) {
            ctx->pc = 0x1E5484u;
            goto label_1e5484;
        }
    }
    ctx->pc = 0x1E5450u;
label_1e5450:
    // 0x1e5450: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1e5450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1e5454:
    // 0x1e5454: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e5454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e5458:
    // 0x1e5458: 0x2463a940  addiu       $v1, $v1, -0x56C0
    ctx->pc = 0x1e5458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945088));
label_1e545c:
    // 0x1e545c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e545cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e5460:
    // 0x1e5460: 0x2442a950  addiu       $v0, $v0, -0x56B0
    ctx->pc = 0x1e5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945104));
label_1e5464:
    // 0x1e5464: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e5464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1e5468:
    // 0x1e5468: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1e5468u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1e546c:
    // 0x1e546c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e5470:
    // 0x1e5470: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e5470u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1e5474:
    // 0x1e5474: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e5478:
    // 0x1e5478: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1e5478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1e547c:
    // 0x1e547c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1e547cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1e5480:
    // 0x1e5480: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1e5480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1e5484:
    // 0x1e5484: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1e5484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5488:
    // 0x1e5488: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e5488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e548c:
    // 0x1e548c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e548cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e5490:
    // 0x1e5490: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1e5490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e5494:
    // 0x1e5494: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e5494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e5498:
    // 0x1e5498: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e5498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e549c:
    // 0x1e549c: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x1e549cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_1e54a0:
    // 0x1e54a0: 0x2442dfe0  addiu       $v0, $v0, -0x2020
    ctx->pc = 0x1e54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959072));
label_1e54a4:
    // 0x1e54a4: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x1e54a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e54a8:
    // 0x1e54a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e54a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e54ac:
    // 0x1e54ac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1e54acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e54b0:
    // 0x1e54b0: 0xafa900a8  sw          $t1, 0xA8($sp)
    ctx->pc = 0x1e54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 9));
label_1e54b4:
    // 0x1e54b4: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x1e54b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1e54b8:
    // 0x1e54b8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1e54b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e54bc:
    // 0x1e54bc: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x1e54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_1e54c0:
    // 0x1e54c0: 0xafa900a0  sw          $t1, 0xA0($sp)
    ctx->pc = 0x1e54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 9));
label_1e54c4:
    // 0x1e54c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e54c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e54c8:
    // 0x1e54c8: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x1e54c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e54cc:
    // 0x1e54cc: 0x8d29000c  lw          $t1, 0xC($t1)
    ctx->pc = 0x1e54ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1e54d0:
    // 0x1e54d0: 0x8e6b0000  lw          $t3, 0x0($s3)
    ctx->pc = 0x1e54d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e54d4:
    // 0x1e54d4: 0x8d50000c  lw          $s0, 0xC($t2)
    ctx->pc = 0x1e54d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_1e54d8:
    // 0x1e54d8: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x1e54d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1e54dc:
    // 0x1e54dc: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1e54dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_1e54e0:
    // 0x1e54e0: 0x2094821  addu        $t1, $s0, $t1
    ctx->pc = 0x1e54e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_1e54e4:
    // 0x1e54e4: 0x912a01a0  lbu         $t2, 0x1A0($t1)
    ctx->pc = 0x1e54e4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 416)));
label_1e54e8:
    // 0x1e54e8: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x1e54e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1e54ec:
    // 0x1e54ec: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1e54ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1e54f0:
    // 0x1e54f0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1e54f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1e54f4:
    // 0x1e54f4: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1e54f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_1e54f8:
    // 0x1e54f8: 0x8d2909ac  lw          $t1, 0x9AC($t1)
    ctx->pc = 0x1e54f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2476)));
label_1e54fc:
    // 0x1e54fc: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1e54fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1e5500:
    // 0x1e5500: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x1e5500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_1e5504:
    // 0x1e5504: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1e5504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_1e5508:
    // 0x1e5508: 0x120f809  jalr        $t1
label_1e550c:
    if (ctx->pc == 0x1E550Cu) {
        ctx->pc = 0x1E550Cu;
            // 0x1e550c: 0xa3a00078  sb          $zero, 0x78($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1E5510u;
        goto label_1e5510;
    }
    ctx->pc = 0x1E5508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x1E5510u);
        ctx->pc = 0x1E550Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5508u;
            // 0x1e550c: 0xa3a00078  sb          $zero, 0x78($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5510u; }
            if (ctx->pc != 0x1E5510u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5510u;
label_1e5510:
    // 0x1e5510: 0x83a30078  lb          $v1, 0x78($sp)
    ctx->pc = 0x1e5510u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
label_1e5514:
    // 0x1e5514: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_1e5518:
    if (ctx->pc == 0x1E5518u) {
        ctx->pc = 0x1E551Cu;
        goto label_1e551c;
    }
    ctx->pc = 0x1E5514u;
    {
        const bool branch_taken_0x1e5514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5514) {
            ctx->pc = 0x1E55BCu;
            goto label_1e55bc;
        }
    }
    ctx->pc = 0x1E551Cu;
label_1e551c:
    // 0x1e551c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e551cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e5520:
    // 0x1e5520: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e5520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e5524:
    // 0x1e5524: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e5524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e5528:
    // 0x1e5528: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e5528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e552c:
    // 0x1e552c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e5530:
    // 0x1e5530: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e5530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e5534:
    // 0x1e5534: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e5538:
    if (ctx->pc == 0x1E5538u) {
        ctx->pc = 0x1E5538u;
            // 0x1e5538: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E553Cu;
        goto label_1e553c;
    }
    ctx->pc = 0x1E5534u;
    {
        const bool branch_taken_0x1e5534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5534u;
            // 0x1e5538: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5534) {
            ctx->pc = 0x1E5564u;
            goto label_1e5564;
        }
    }
    ctx->pc = 0x1E553Cu;
label_1e553c:
    // 0x1e553c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e5540:
    // 0x1e5540: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e5540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e5544:
    // 0x1e5544: 0x2442a960  addiu       $v0, $v0, -0x56A0
    ctx->pc = 0x1e5544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945120));
label_1e5548:
    // 0x1e5548: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e5548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e554c:
    // 0x1e554c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e5550:
    // 0x1e5550: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e5550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e5554:
    // 0x1e5554: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5554u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e5558:
    // 0x1e5558: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e5558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e555c:
    // 0x1e555c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e555cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e5560:
    // 0x1e5560: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e5560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e5564:
    // 0x1e5564: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1e5564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e5568:
    // 0x1e5568: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e5568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e556c:
    // 0x1e556c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1e556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1e5570:
    // 0x1e5570: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1e5570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5574:
    // 0x1e5574: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1e5574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e5578:
    // 0x1e5578: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e5578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e557c:
    // 0x1e557c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1e5580:
    // 0x1e5580: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1e5580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_1e5584:
    // 0x1e5584: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1e5584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1e5588:
    // 0x1e5588: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e5588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e558c:
    // 0x1e558c: 0x8e690000  lw          $t1, 0x0($s3)
    ctx->pc = 0x1e558cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e5590:
    // 0x1e5590: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e5590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e5594:
    // 0x1e5594: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1e5594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1e5598:
    // 0x1e5598: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e5598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e559c:
    // 0x1e559c: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1e559cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1e55a0:
    // 0x1e55a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e55a4:
    // 0x1e55a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e55a8:
    // 0x1e55a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e55ac:
    // 0x1e55ac: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1e55acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1e55b0:
    // 0x1e55b0: 0x8c4209ac  lw          $v0, 0x9AC($v0)
    ctx->pc = 0x1e55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2476)));
label_1e55b4:
    // 0x1e55b4: 0x40f809  jalr        $v0
label_1e55b8:
    if (ctx->pc == 0x1E55B8u) {
        ctx->pc = 0x1E55B8u;
            // 0x1e55b8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E55BCu;
        goto label_1e55bc;
    }
    ctx->pc = 0x1E55B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E55BCu);
        ctx->pc = 0x1E55B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55B4u;
            // 0x1e55b8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E55BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E55BCu; }
            if (ctx->pc != 0x1E55BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E55BCu;
label_1e55bc:
    // 0x1e55bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e55c0:
    // 0x1e55c0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e55c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e55c4:
    // 0x1e55c4: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e55c8:
    // 0x1e55c8: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1e55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1e55cc:
    // 0x1e55cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e55d0:
    // 0x1e55d0: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e55d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e55d4:
    // 0x1e55d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e55d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e55d8:
    // 0x1e55d8: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e55dc:
    // 0x1e55dc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e55dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e55e0:
    // 0x1e55e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e55e4:
    if (ctx->pc == 0x1E55E4u) {
        ctx->pc = 0x1E55E4u;
            // 0x1e55e4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E55E8u;
        goto label_1e55e8;
    }
    ctx->pc = 0x1E55E0u;
    {
        const bool branch_taken_0x1e55e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55E0u;
            // 0x1e55e4: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55e0) {
            ctx->pc = 0x1E5610u;
            goto label_1e5610;
        }
    }
    ctx->pc = 0x1E55E8u;
label_1e55e8:
    // 0x1e55e8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e55ec:
    // 0x1e55ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e55f0:
    // 0x1e55f0: 0x2463a968  addiu       $v1, $v1, -0x5698
    ctx->pc = 0x1e55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945128));
label_1e55f4:
    // 0x1e55f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e55f8:
    // 0x1e55f8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e55fc:
    // 0x1e55fc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e55fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e5600:
    // 0x1e5600: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e5604:
    // 0x1e5604: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e5604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e5608:
    // 0x1e5608: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e5608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e560c:
    // 0x1e560c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e560cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e5610:
    // 0x1e5610: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e5610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e5614:
    // 0x1e5614: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e5614u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e5618:
    // 0x1e5618: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e561c:
    // 0x1e561c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e561cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5620:
    // 0x1e5620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5624:
    // 0x1e5624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5628:
    // 0x1e5628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e562c:
    // 0x1e562c: 0x3e00008  jr          $ra
label_1e5630:
    if (ctx->pc == 0x1E5630u) {
        ctx->pc = 0x1E5630u;
            // 0x1e5630: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E5634u;
        goto label_1e5634;
    }
    ctx->pc = 0x1E562Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E562Cu;
            // 0x1e5630: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5634u;
label_1e5634:
    // 0x1e5634: 0x0  nop
    ctx->pc = 0x1e5634u;
    // NOP
label_1e5638:
    // 0x1e5638: 0x0  nop
    ctx->pc = 0x1e5638u;
    // NOP
label_1e563c:
    // 0x1e563c: 0x0  nop
    ctx->pc = 0x1e563cu;
    // NOP
}
