#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5380
// Address: 0x1d5380 - 0x1d5800
void sub_001D5380_0x1d5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5380_0x1d5380");
#endif

    switch (ctx->pc) {
        case 0x1d5380u: goto label_1d5380;
        case 0x1d5384u: goto label_1d5384;
        case 0x1d5388u: goto label_1d5388;
        case 0x1d538cu: goto label_1d538c;
        case 0x1d5390u: goto label_1d5390;
        case 0x1d5394u: goto label_1d5394;
        case 0x1d5398u: goto label_1d5398;
        case 0x1d539cu: goto label_1d539c;
        case 0x1d53a0u: goto label_1d53a0;
        case 0x1d53a4u: goto label_1d53a4;
        case 0x1d53a8u: goto label_1d53a8;
        case 0x1d53acu: goto label_1d53ac;
        case 0x1d53b0u: goto label_1d53b0;
        case 0x1d53b4u: goto label_1d53b4;
        case 0x1d53b8u: goto label_1d53b8;
        case 0x1d53bcu: goto label_1d53bc;
        case 0x1d53c0u: goto label_1d53c0;
        case 0x1d53c4u: goto label_1d53c4;
        case 0x1d53c8u: goto label_1d53c8;
        case 0x1d53ccu: goto label_1d53cc;
        case 0x1d53d0u: goto label_1d53d0;
        case 0x1d53d4u: goto label_1d53d4;
        case 0x1d53d8u: goto label_1d53d8;
        case 0x1d53dcu: goto label_1d53dc;
        case 0x1d53e0u: goto label_1d53e0;
        case 0x1d53e4u: goto label_1d53e4;
        case 0x1d53e8u: goto label_1d53e8;
        case 0x1d53ecu: goto label_1d53ec;
        case 0x1d53f0u: goto label_1d53f0;
        case 0x1d53f4u: goto label_1d53f4;
        case 0x1d53f8u: goto label_1d53f8;
        case 0x1d53fcu: goto label_1d53fc;
        case 0x1d5400u: goto label_1d5400;
        case 0x1d5404u: goto label_1d5404;
        case 0x1d5408u: goto label_1d5408;
        case 0x1d540cu: goto label_1d540c;
        case 0x1d5410u: goto label_1d5410;
        case 0x1d5414u: goto label_1d5414;
        case 0x1d5418u: goto label_1d5418;
        case 0x1d541cu: goto label_1d541c;
        case 0x1d5420u: goto label_1d5420;
        case 0x1d5424u: goto label_1d5424;
        case 0x1d5428u: goto label_1d5428;
        case 0x1d542cu: goto label_1d542c;
        case 0x1d5430u: goto label_1d5430;
        case 0x1d5434u: goto label_1d5434;
        case 0x1d5438u: goto label_1d5438;
        case 0x1d543cu: goto label_1d543c;
        case 0x1d5440u: goto label_1d5440;
        case 0x1d5444u: goto label_1d5444;
        case 0x1d5448u: goto label_1d5448;
        case 0x1d544cu: goto label_1d544c;
        case 0x1d5450u: goto label_1d5450;
        case 0x1d5454u: goto label_1d5454;
        case 0x1d5458u: goto label_1d5458;
        case 0x1d545cu: goto label_1d545c;
        case 0x1d5460u: goto label_1d5460;
        case 0x1d5464u: goto label_1d5464;
        case 0x1d5468u: goto label_1d5468;
        case 0x1d546cu: goto label_1d546c;
        case 0x1d5470u: goto label_1d5470;
        case 0x1d5474u: goto label_1d5474;
        case 0x1d5478u: goto label_1d5478;
        case 0x1d547cu: goto label_1d547c;
        case 0x1d5480u: goto label_1d5480;
        case 0x1d5484u: goto label_1d5484;
        case 0x1d5488u: goto label_1d5488;
        case 0x1d548cu: goto label_1d548c;
        case 0x1d5490u: goto label_1d5490;
        case 0x1d5494u: goto label_1d5494;
        case 0x1d5498u: goto label_1d5498;
        case 0x1d549cu: goto label_1d549c;
        case 0x1d54a0u: goto label_1d54a0;
        case 0x1d54a4u: goto label_1d54a4;
        case 0x1d54a8u: goto label_1d54a8;
        case 0x1d54acu: goto label_1d54ac;
        case 0x1d54b0u: goto label_1d54b0;
        case 0x1d54b4u: goto label_1d54b4;
        case 0x1d54b8u: goto label_1d54b8;
        case 0x1d54bcu: goto label_1d54bc;
        case 0x1d54c0u: goto label_1d54c0;
        case 0x1d54c4u: goto label_1d54c4;
        case 0x1d54c8u: goto label_1d54c8;
        case 0x1d54ccu: goto label_1d54cc;
        case 0x1d54d0u: goto label_1d54d0;
        case 0x1d54d4u: goto label_1d54d4;
        case 0x1d54d8u: goto label_1d54d8;
        case 0x1d54dcu: goto label_1d54dc;
        case 0x1d54e0u: goto label_1d54e0;
        case 0x1d54e4u: goto label_1d54e4;
        case 0x1d54e8u: goto label_1d54e8;
        case 0x1d54ecu: goto label_1d54ec;
        case 0x1d54f0u: goto label_1d54f0;
        case 0x1d54f4u: goto label_1d54f4;
        case 0x1d54f8u: goto label_1d54f8;
        case 0x1d54fcu: goto label_1d54fc;
        case 0x1d5500u: goto label_1d5500;
        case 0x1d5504u: goto label_1d5504;
        case 0x1d5508u: goto label_1d5508;
        case 0x1d550cu: goto label_1d550c;
        case 0x1d5510u: goto label_1d5510;
        case 0x1d5514u: goto label_1d5514;
        case 0x1d5518u: goto label_1d5518;
        case 0x1d551cu: goto label_1d551c;
        case 0x1d5520u: goto label_1d5520;
        case 0x1d5524u: goto label_1d5524;
        case 0x1d5528u: goto label_1d5528;
        case 0x1d552cu: goto label_1d552c;
        case 0x1d5530u: goto label_1d5530;
        case 0x1d5534u: goto label_1d5534;
        case 0x1d5538u: goto label_1d5538;
        case 0x1d553cu: goto label_1d553c;
        case 0x1d5540u: goto label_1d5540;
        case 0x1d5544u: goto label_1d5544;
        case 0x1d5548u: goto label_1d5548;
        case 0x1d554cu: goto label_1d554c;
        case 0x1d5550u: goto label_1d5550;
        case 0x1d5554u: goto label_1d5554;
        case 0x1d5558u: goto label_1d5558;
        case 0x1d555cu: goto label_1d555c;
        case 0x1d5560u: goto label_1d5560;
        case 0x1d5564u: goto label_1d5564;
        case 0x1d5568u: goto label_1d5568;
        case 0x1d556cu: goto label_1d556c;
        case 0x1d5570u: goto label_1d5570;
        case 0x1d5574u: goto label_1d5574;
        case 0x1d5578u: goto label_1d5578;
        case 0x1d557cu: goto label_1d557c;
        case 0x1d5580u: goto label_1d5580;
        case 0x1d5584u: goto label_1d5584;
        case 0x1d5588u: goto label_1d5588;
        case 0x1d558cu: goto label_1d558c;
        case 0x1d5590u: goto label_1d5590;
        case 0x1d5594u: goto label_1d5594;
        case 0x1d5598u: goto label_1d5598;
        case 0x1d559cu: goto label_1d559c;
        case 0x1d55a0u: goto label_1d55a0;
        case 0x1d55a4u: goto label_1d55a4;
        case 0x1d55a8u: goto label_1d55a8;
        case 0x1d55acu: goto label_1d55ac;
        case 0x1d55b0u: goto label_1d55b0;
        case 0x1d55b4u: goto label_1d55b4;
        case 0x1d55b8u: goto label_1d55b8;
        case 0x1d55bcu: goto label_1d55bc;
        case 0x1d55c0u: goto label_1d55c0;
        case 0x1d55c4u: goto label_1d55c4;
        case 0x1d55c8u: goto label_1d55c8;
        case 0x1d55ccu: goto label_1d55cc;
        case 0x1d55d0u: goto label_1d55d0;
        case 0x1d55d4u: goto label_1d55d4;
        case 0x1d55d8u: goto label_1d55d8;
        case 0x1d55dcu: goto label_1d55dc;
        case 0x1d55e0u: goto label_1d55e0;
        case 0x1d55e4u: goto label_1d55e4;
        case 0x1d55e8u: goto label_1d55e8;
        case 0x1d55ecu: goto label_1d55ec;
        case 0x1d55f0u: goto label_1d55f0;
        case 0x1d55f4u: goto label_1d55f4;
        case 0x1d55f8u: goto label_1d55f8;
        case 0x1d55fcu: goto label_1d55fc;
        case 0x1d5600u: goto label_1d5600;
        case 0x1d5604u: goto label_1d5604;
        case 0x1d5608u: goto label_1d5608;
        case 0x1d560cu: goto label_1d560c;
        case 0x1d5610u: goto label_1d5610;
        case 0x1d5614u: goto label_1d5614;
        case 0x1d5618u: goto label_1d5618;
        case 0x1d561cu: goto label_1d561c;
        case 0x1d5620u: goto label_1d5620;
        case 0x1d5624u: goto label_1d5624;
        case 0x1d5628u: goto label_1d5628;
        case 0x1d562cu: goto label_1d562c;
        case 0x1d5630u: goto label_1d5630;
        case 0x1d5634u: goto label_1d5634;
        case 0x1d5638u: goto label_1d5638;
        case 0x1d563cu: goto label_1d563c;
        case 0x1d5640u: goto label_1d5640;
        case 0x1d5644u: goto label_1d5644;
        case 0x1d5648u: goto label_1d5648;
        case 0x1d564cu: goto label_1d564c;
        case 0x1d5650u: goto label_1d5650;
        case 0x1d5654u: goto label_1d5654;
        case 0x1d5658u: goto label_1d5658;
        case 0x1d565cu: goto label_1d565c;
        case 0x1d5660u: goto label_1d5660;
        case 0x1d5664u: goto label_1d5664;
        case 0x1d5668u: goto label_1d5668;
        case 0x1d566cu: goto label_1d566c;
        case 0x1d5670u: goto label_1d5670;
        case 0x1d5674u: goto label_1d5674;
        case 0x1d5678u: goto label_1d5678;
        case 0x1d567cu: goto label_1d567c;
        case 0x1d5680u: goto label_1d5680;
        case 0x1d5684u: goto label_1d5684;
        case 0x1d5688u: goto label_1d5688;
        case 0x1d568cu: goto label_1d568c;
        case 0x1d5690u: goto label_1d5690;
        case 0x1d5694u: goto label_1d5694;
        case 0x1d5698u: goto label_1d5698;
        case 0x1d569cu: goto label_1d569c;
        case 0x1d56a0u: goto label_1d56a0;
        case 0x1d56a4u: goto label_1d56a4;
        case 0x1d56a8u: goto label_1d56a8;
        case 0x1d56acu: goto label_1d56ac;
        case 0x1d56b0u: goto label_1d56b0;
        case 0x1d56b4u: goto label_1d56b4;
        case 0x1d56b8u: goto label_1d56b8;
        case 0x1d56bcu: goto label_1d56bc;
        case 0x1d56c0u: goto label_1d56c0;
        case 0x1d56c4u: goto label_1d56c4;
        case 0x1d56c8u: goto label_1d56c8;
        case 0x1d56ccu: goto label_1d56cc;
        case 0x1d56d0u: goto label_1d56d0;
        case 0x1d56d4u: goto label_1d56d4;
        case 0x1d56d8u: goto label_1d56d8;
        case 0x1d56dcu: goto label_1d56dc;
        case 0x1d56e0u: goto label_1d56e0;
        case 0x1d56e4u: goto label_1d56e4;
        case 0x1d56e8u: goto label_1d56e8;
        case 0x1d56ecu: goto label_1d56ec;
        case 0x1d56f0u: goto label_1d56f0;
        case 0x1d56f4u: goto label_1d56f4;
        case 0x1d56f8u: goto label_1d56f8;
        case 0x1d56fcu: goto label_1d56fc;
        case 0x1d5700u: goto label_1d5700;
        case 0x1d5704u: goto label_1d5704;
        case 0x1d5708u: goto label_1d5708;
        case 0x1d570cu: goto label_1d570c;
        case 0x1d5710u: goto label_1d5710;
        case 0x1d5714u: goto label_1d5714;
        case 0x1d5718u: goto label_1d5718;
        case 0x1d571cu: goto label_1d571c;
        case 0x1d5720u: goto label_1d5720;
        case 0x1d5724u: goto label_1d5724;
        case 0x1d5728u: goto label_1d5728;
        case 0x1d572cu: goto label_1d572c;
        case 0x1d5730u: goto label_1d5730;
        case 0x1d5734u: goto label_1d5734;
        case 0x1d5738u: goto label_1d5738;
        case 0x1d573cu: goto label_1d573c;
        case 0x1d5740u: goto label_1d5740;
        case 0x1d5744u: goto label_1d5744;
        case 0x1d5748u: goto label_1d5748;
        case 0x1d574cu: goto label_1d574c;
        case 0x1d5750u: goto label_1d5750;
        case 0x1d5754u: goto label_1d5754;
        case 0x1d5758u: goto label_1d5758;
        case 0x1d575cu: goto label_1d575c;
        case 0x1d5760u: goto label_1d5760;
        case 0x1d5764u: goto label_1d5764;
        case 0x1d5768u: goto label_1d5768;
        case 0x1d576cu: goto label_1d576c;
        case 0x1d5770u: goto label_1d5770;
        case 0x1d5774u: goto label_1d5774;
        case 0x1d5778u: goto label_1d5778;
        case 0x1d577cu: goto label_1d577c;
        case 0x1d5780u: goto label_1d5780;
        case 0x1d5784u: goto label_1d5784;
        case 0x1d5788u: goto label_1d5788;
        case 0x1d578cu: goto label_1d578c;
        case 0x1d5790u: goto label_1d5790;
        case 0x1d5794u: goto label_1d5794;
        case 0x1d5798u: goto label_1d5798;
        case 0x1d579cu: goto label_1d579c;
        case 0x1d57a0u: goto label_1d57a0;
        case 0x1d57a4u: goto label_1d57a4;
        case 0x1d57a8u: goto label_1d57a8;
        case 0x1d57acu: goto label_1d57ac;
        case 0x1d57b0u: goto label_1d57b0;
        case 0x1d57b4u: goto label_1d57b4;
        case 0x1d57b8u: goto label_1d57b8;
        case 0x1d57bcu: goto label_1d57bc;
        case 0x1d57c0u: goto label_1d57c0;
        case 0x1d57c4u: goto label_1d57c4;
        case 0x1d57c8u: goto label_1d57c8;
        case 0x1d57ccu: goto label_1d57cc;
        case 0x1d57d0u: goto label_1d57d0;
        case 0x1d57d4u: goto label_1d57d4;
        case 0x1d57d8u: goto label_1d57d8;
        case 0x1d57dcu: goto label_1d57dc;
        case 0x1d57e0u: goto label_1d57e0;
        case 0x1d57e4u: goto label_1d57e4;
        case 0x1d57e8u: goto label_1d57e8;
        case 0x1d57ecu: goto label_1d57ec;
        case 0x1d57f0u: goto label_1d57f0;
        case 0x1d57f4u: goto label_1d57f4;
        case 0x1d57f8u: goto label_1d57f8;
        case 0x1d57fcu: goto label_1d57fc;
        default: break;
    }

    ctx->pc = 0x1d5380u;

label_1d5380:
    // 0x1d5380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d5384:
    // 0x1d5384: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1d5384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1d5388:
    // 0x1d5388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d5388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d538c:
    // 0x1d538c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d538cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5390:
    // 0x1d5390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d5390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d5394:
    // 0x1d5394: 0x2463c5c0  addiu       $v1, $v1, -0x3A40
    ctx->pc = 0x1d5394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952384));
label_1d5398:
    // 0x1d5398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d5398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d539c:
    // 0x1d539c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d53a0:
    // 0x1d53a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d53a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d53a4:
    // 0x1d53a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d53a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d53a8:
    // 0x1d53a8: 0x8c8600fc  lw          $a2, 0xFC($a0)
    ctx->pc = 0x1d53a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
label_1d53ac:
    // 0x1d53ac: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1d53acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d53b0:
    // 0x1d53b0: 0xc4810108  lwc1        $f1, 0x108($a0)
    ctx->pc = 0x1d53b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d53b4:
    // 0x1d53b4: 0xc4c20074  lwc1        $f2, 0x74($a2)
    ctx->pc = 0x1d53b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d53b8:
    // 0x1d53b8: 0x8cd100c8  lw          $s1, 0xC8($a2)
    ctx->pc = 0x1d53b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
label_1d53bc:
    // 0x1d53bc: 0xc4c4005c  lwc1        $f4, 0x5C($a2)
    ctx->pc = 0x1d53bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d53c0:
    // 0x1d53c0: 0x24c2005c  addiu       $v0, $a2, 0x5C
    ctx->pc = 0x1d53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
label_1d53c4:
    // 0x1d53c4: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1d53c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d53c8:
    // 0x1d53c8: 0x8e250d6c  lw          $a1, 0xD6C($s1)
    ctx->pc = 0x1d53c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_1d53cc:
    // 0x1d53cc: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1d53ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_1d53d0:
    // 0x1d53d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1d53d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1d53d4:
    // 0x1d53d4: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1d53d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1d53d8:
    // 0x1d53d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d53d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d53dc:
    // 0x1d53dc: 0xe48100a8  swc1        $f1, 0xA8($a0)
    ctx->pc = 0x1d53dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
label_1d53e0:
    // 0x1d53e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d53e4:
    // 0x1d53e4: 0xc4c30080  lwc1        $f3, 0x80($a2)
    ctx->pc = 0x1d53e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d53e8:
    // 0x1d53e8: 0xc485000c  lwc1        $f5, 0xC($a0)
    ctx->pc = 0x1d53e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d53ec:
    // 0x1d53ec: 0xc4c40060  lwc1        $f4, 0x60($a2)
    ctx->pc = 0x1d53ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d53f0:
    // 0x1d53f0: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x1d53f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1d53f4:
    // 0x1d53f4: 0xc482010c  lwc1        $f2, 0x10C($a0)
    ctx->pc = 0x1d53f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d53f8:
    // 0x1d53f8: 0x460428dc  madd.s      $f3, $f5, $f4
    ctx->pc = 0x1d53f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1d53fc:
    // 0x1d53fc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1d53fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5400:
    // 0x1d5400: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d5400u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1d5404:
    // 0x1d5404: 0xe48200b4  swc1        $f2, 0xB4($a0)
    ctx->pc = 0x1d5404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
label_1d5408:
    // 0x1d5408: 0xc4c30078  lwc1        $f3, 0x78($a2)
    ctx->pc = 0x1d5408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d540c:
    // 0x1d540c: 0xc4c5005c  lwc1        $f5, 0x5C($a2)
    ctx->pc = 0x1d540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d5410:
    // 0x1d5410: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x1d5410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d5414:
    // 0x1d5414: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x1d5414u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1d5418:
    // 0x1d5418: 0xc4820108  lwc1        $f2, 0x108($a0)
    ctx->pc = 0x1d5418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d541c:
    // 0x1d541c: 0x460428dc  madd.s      $f3, $f5, $f4
    ctx->pc = 0x1d541cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1d5420:
    // 0x1d5420: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d5420u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1d5424:
    // 0x1d5424: 0xe48200ac  swc1        $f2, 0xAC($a0)
    ctx->pc = 0x1d5424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_1d5428:
    // 0x1d5428: 0xc4c30084  lwc1        $f3, 0x84($a2)
    ctx->pc = 0x1d5428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d542c:
    // 0x1d542c: 0xc4850010  lwc1        $f5, 0x10($a0)
    ctx->pc = 0x1d542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d5430:
    // 0x1d5430: 0xc4c40060  lwc1        $f4, 0x60($a2)
    ctx->pc = 0x1d5430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d5434:
    // 0x1d5434: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x1d5434u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1d5438:
    // 0x1d5438: 0xc482010c  lwc1        $f2, 0x10C($a0)
    ctx->pc = 0x1d5438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d543c:
    // 0x1d543c: 0x460428dc  madd.s      $f3, $f5, $f4
    ctx->pc = 0x1d543cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1d5440:
    // 0x1d5440: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d5440u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1d5444:
    // 0x1d5444: 0xe48200b8  swc1        $f2, 0xB8($a0)
    ctx->pc = 0x1d5444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
label_1d5448:
    // 0x1d5448: 0xc4c3007c  lwc1        $f3, 0x7C($a2)
    ctx->pc = 0x1d5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d544c:
    // 0x1d544c: 0xc4c5005c  lwc1        $f5, 0x5C($a2)
    ctx->pc = 0x1d544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d5450:
    // 0x1d5450: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1d5450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d5454:
    // 0x1d5454: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x1d5454u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1d5458:
    // 0x1d5458: 0xc4820108  lwc1        $f2, 0x108($a0)
    ctx->pc = 0x1d5458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d545c:
    // 0x1d545c: 0x460428dc  madd.s      $f3, $f5, $f4
    ctx->pc = 0x1d545cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1d5460:
    // 0x1d5460: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d5460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1d5464:
    // 0x1d5464: 0xe48200b0  swc1        $f2, 0xB0($a0)
    ctx->pc = 0x1d5464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
label_1d5468:
    // 0x1d5468: 0xc4c30088  lwc1        $f3, 0x88($a2)
    ctx->pc = 0x1d5468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d546c:
    // 0x1d546c: 0xc4850014  lwc1        $f5, 0x14($a0)
    ctx->pc = 0x1d546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1d5470:
    // 0x1d5470: 0xc4c40060  lwc1        $f4, 0x60($a2)
    ctx->pc = 0x1d5470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d5474:
    // 0x1d5474: 0x46030018  adda.s      $f0, $f3
    ctx->pc = 0x1d5474u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1d5478:
    // 0x1d5478: 0xc482010c  lwc1        $f2, 0x10C($a0)
    ctx->pc = 0x1d5478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d547c:
    // 0x1d547c: 0x460428dc  madd.s      $f3, $f5, $f4
    ctx->pc = 0x1d547cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1d5480:
    // 0x1d5480: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d5480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1d5484:
    // 0x1d5484: 0xe48200bc  swc1        $f2, 0xBC($a0)
    ctx->pc = 0x1d5484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
label_1d5488:
    // 0x1d5488: 0xc4c2008c  lwc1        $f2, 0x8C($a2)
    ctx->pc = 0x1d5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d548c:
    // 0x1d548c: 0xc4840018  lwc1        $f4, 0x18($a0)
    ctx->pc = 0x1d548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d5490:
    // 0x1d5490: 0xc4c30064  lwc1        $f3, 0x64($a2)
    ctx->pc = 0x1d5490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d5494:
    // 0x1d5494: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1d5494u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d5498:
    // 0x1d5498: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1d5498u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_1d549c:
    // 0x1d549c: 0xe48200c0  swc1        $f2, 0xC0($a0)
    ctx->pc = 0x1d549cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
label_1d54a0:
    // 0x1d54a0: 0xc4c20090  lwc1        $f2, 0x90($a2)
    ctx->pc = 0x1d54a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d54a4:
    // 0x1d54a4: 0xc484001c  lwc1        $f4, 0x1C($a0)
    ctx->pc = 0x1d54a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d54a8:
    // 0x1d54a8: 0xc4c30068  lwc1        $f3, 0x68($a2)
    ctx->pc = 0x1d54a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d54ac:
    // 0x1d54ac: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1d54acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d54b0:
    // 0x1d54b0: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1d54b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_1d54b4:
    // 0x1d54b4: 0xe48200c4  swc1        $f2, 0xC4($a0)
    ctx->pc = 0x1d54b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
label_1d54b8:
    // 0x1d54b8: 0xc4c20094  lwc1        $f2, 0x94($a2)
    ctx->pc = 0x1d54b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d54bc:
    // 0x1d54bc: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x1d54bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d54c0:
    // 0x1d54c0: 0xc4c3006c  lwc1        $f3, 0x6C($a2)
    ctx->pc = 0x1d54c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d54c4:
    // 0x1d54c4: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1d54c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d54c8:
    // 0x1d54c8: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1d54c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_1d54cc:
    // 0x1d54cc: 0xe48200c8  swc1        $f2, 0xC8($a0)
    ctx->pc = 0x1d54ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
label_1d54d0:
    // 0x1d54d0: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x1d54d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d54d4:
    // 0x1d54d4: 0xe48200cc  swc1        $f2, 0xCC($a0)
    ctx->pc = 0x1d54d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 204), bits); }
label_1d54d8:
    // 0x1d54d8: 0xc482007c  lwc1        $f2, 0x7C($a0)
    ctx->pc = 0x1d54d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d54dc:
    // 0x1d54dc: 0xe48200d0  swc1        $f2, 0xD0($a0)
    ctx->pc = 0x1d54dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
label_1d54e0:
    // 0x1d54e0: 0xc4c200a0  lwc1        $f2, 0xA0($a2)
    ctx->pc = 0x1d54e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d54e4:
    // 0x1d54e4: 0xc484002c  lwc1        $f4, 0x2C($a0)
    ctx->pc = 0x1d54e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d54e8:
    // 0x1d54e8: 0xc4c30070  lwc1        $f3, 0x70($a2)
    ctx->pc = 0x1d54e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d54ec:
    // 0x1d54ec: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1d54ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d54f0:
    // 0x1d54f0: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x1d54f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_1d54f4:
    // 0x1d54f4: 0xe48200d4  swc1        $f2, 0xD4($a0)
    ctx->pc = 0x1d54f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1d54f8:
    // 0x1d54f8: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x1d54f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d54fc:
    // 0x1d54fc: 0xc4c200a8  lwc1        $f2, 0xA8($a2)
    ctx->pc = 0x1d54fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d5500:
    // 0x1d5500: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1d5500u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1d5504:
    // 0x1d5504: 0xe48200dc  swc1        $f2, 0xDC($a0)
    ctx->pc = 0x1d5504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
label_1d5508:
    // 0x1d5508: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1d5508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1d550c:
    // 0x1d550c: 0x8cc300a4  lw          $v1, 0xA4($a2)
    ctx->pc = 0x1d550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_1d5510:
    // 0x1d5510: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1d5510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1d5514:
    // 0x1d5514: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x1d5514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
label_1d5518:
    // 0x1d5518: 0xc4830038  lwc1        $f3, 0x38($a0)
    ctx->pc = 0x1d5518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d551c:
    // 0x1d551c: 0xc4c200ac  lwc1        $f2, 0xAC($a2)
    ctx->pc = 0x1d551cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d5520:
    // 0x1d5520: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1d5520u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1d5524:
    // 0x1d5524: 0xe48200e0  swc1        $f2, 0xE0($a0)
    ctx->pc = 0x1d5524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_1d5528:
    // 0x1d5528: 0xc483003c  lwc1        $f3, 0x3C($a0)
    ctx->pc = 0x1d5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d552c:
    // 0x1d552c: 0xc4c200b0  lwc1        $f2, 0xB0($a2)
    ctx->pc = 0x1d552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d5530:
    // 0x1d5530: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d5530u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1d5534:
    // 0x1d5534: 0xe48200e4  swc1        $f2, 0xE4($a0)
    ctx->pc = 0x1d5534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
label_1d5538:
    // 0x1d5538: 0xc4c200b4  lwc1        $f2, 0xB4($a2)
    ctx->pc = 0x1d5538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d553c:
    // 0x1d553c: 0xc4830040  lwc1        $f3, 0x40($a0)
    ctx->pc = 0x1d553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d5540:
    // 0x1d5540: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1d5540u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1d5544:
    // 0x1d5544: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1d5544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5548:
    // 0x1d5548: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d554c:
    if (ctx->pc == 0x1D554Cu) {
        ctx->pc = 0x1D554Cu;
            // 0x1d554c: 0xe48200e8  swc1        $f2, 0xE8($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
        ctx->pc = 0x1D5550u;
        goto label_1d5550;
    }
    ctx->pc = 0x1D5548u;
    {
        const bool branch_taken_0x1d5548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D554Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5548u;
            // 0x1d554c: 0xe48200e8  swc1        $f2, 0xE8($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5548) {
            ctx->pc = 0x1D5554u;
            goto label_1d5554;
        }
    }
    ctx->pc = 0x1D5550u;
label_1d5550:
    // 0x1d5550: 0xe64000e8  swc1        $f0, 0xE8($s2)
    ctx->pc = 0x1d5550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 232), bits); }
label_1d5554:
    // 0x1d5554: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x1d5554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5558:
    // 0x1d5558: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x1d5558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d555c:
    // 0x1d555c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1d555cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d5560:
    // 0x1d5560: 0x0  nop
    ctx->pc = 0x1d5560u;
    // NOP
label_1d5564:
    // 0x1d5564: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1d5564u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1d5568:
    // 0x1d5568: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1d5568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_1d556c:
    // 0x1d556c: 0xe64000ec  swc1        $f0, 0xEC($s2)
    ctx->pc = 0x1d556cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
label_1d5570:
    // 0x1d5570: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1d5570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5574:
    // 0x1d5574: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x1d5574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d5578:
    // 0x1d5578: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x1d5578u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1d557c:
    // 0x1d557c: 0x4601101c  madd.s      $f0, $f2, $f1
    ctx->pc = 0x1d557cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_1d5580:
    // 0x1d5580: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d5580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
label_1d5584:
    // 0x1d5584: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x1d5584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_1d5588:
    // 0x1d5588: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1d5588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1d558c:
    // 0x1d558c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d5590:
    // 0x1d5590: 0xae4300f4  sw          $v1, 0xF4($s2)
    ctx->pc = 0x1d5590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 3));
label_1d5594:
    // 0x1d5594: 0x86440050  lh          $a0, 0x50($s2)
    ctx->pc = 0x1d5594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_1d5598:
    // 0x1d5598: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1d5598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1d559c:
    // 0x1d559c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d55a0:
    // 0x1d55a0: 0xa64300f8  sh          $v1, 0xF8($s2)
    ctx->pc = 0x1d55a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 248), (uint16_t)GPR_U32(ctx, 3));
label_1d55a4:
    // 0x1d55a4: 0x82440052  lb          $a0, 0x52($s2)
    ctx->pc = 0x1d55a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
label_1d55a8:
    // 0x1d55a8: 0x8043006a  lb          $v1, 0x6A($v0)
    ctx->pc = 0x1d55a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 106)));
label_1d55ac:
    // 0x1d55ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d55acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d55b0:
    // 0x1d55b0: 0xa24300fa  sb          $v1, 0xFA($s2)
    ctx->pc = 0x1d55b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 250), (uint8_t)GPR_U32(ctx, 3));
label_1d55b4:
    // 0x1d55b4: 0x82440053  lb          $a0, 0x53($s2)
    ctx->pc = 0x1d55b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 83)));
label_1d55b8:
    // 0x1d55b8: 0x8043006b  lb          $v1, 0x6B($v0)
    ctx->pc = 0x1d55b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 107)));
label_1d55bc:
    // 0x1d55bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d55c0:
    // 0x1d55c0: 0xa24300fb  sb          $v1, 0xFB($s2)
    ctx->pc = 0x1d55c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 251), (uint8_t)GPR_U32(ctx, 3));
label_1d55c4:
    // 0x1d55c4: 0x86440050  lh          $a0, 0x50($s2)
    ctx->pc = 0x1d55c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_1d55c8:
    // 0x1d55c8: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x1d55c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1d55cc:
    // 0x1d55cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d55d0:
    // 0x1d55d0: 0xa64300a4  sh          $v1, 0xA4($s2)
    ctx->pc = 0x1d55d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 164), (uint16_t)GPR_U32(ctx, 3));
label_1d55d4:
    // 0x1d55d4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1d55d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d55d8:
    // 0x1d55d8: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x1d55d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d55dc:
    // 0x1d55dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d55dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d55e0:
    // 0x1d55e0: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x1d55e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
label_1d55e4:
    // 0x1d55e4: 0x8e220da0  lw          $v0, 0xDA0($s1)
    ctx->pc = 0x1d55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_1d55e8:
    // 0x1d55e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d55e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1d55ec:
    // 0x1d55ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1d55f0:
    if (ctx->pc == 0x1D55F0u) {
        ctx->pc = 0x1D55F0u;
            // 0x1d55f0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D55F4u;
        goto label_1d55f4;
    }
    ctx->pc = 0x1D55ECu;
    {
        const bool branch_taken_0x1d55ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d55ec) {
            ctx->pc = 0x1D55F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D55ECu;
            // 0x1d55f0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D55FCu;
            goto label_1d55fc;
        }
    }
    ctx->pc = 0x1D55F4u;
label_1d55f4:
    // 0x1d55f4: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x1d55f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_1d55f8:
    // 0x1d55f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d55f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d55fc:
    // 0x1d55fc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x1d55fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_1d5600:
    // 0x1d5600: 0x320f809  jalr        $t9
label_1d5604:
    if (ctx->pc == 0x1D5604u) {
        ctx->pc = 0x1D5604u;
            // 0x1d5604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D5608u;
        goto label_1d5608;
    }
    ctx->pc = 0x1D5600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D5608u);
        ctx->pc = 0x1D5604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5600u;
            // 0x1d5604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D5608u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D5608u; }
            if (ctx->pc != 0x1D5608u) { return; }
        }
        }
    }
    ctx->pc = 0x1D5608u;
label_1d5608:
    // 0x1d5608: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d560c:
    // 0x1d560c: 0x5043002f  beql        $v0, $v1, . + 4 + (0x2F << 2)
label_1d5610:
    if (ctx->pc == 0x1D5610u) {
        ctx->pc = 0x1D5610u;
            // 0x1d5610: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->pc = 0x1D5614u;
        goto label_1d5614;
    }
    ctx->pc = 0x1D560Cu;
    {
        const bool branch_taken_0x1d560c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d560c) {
            ctx->pc = 0x1D5610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D560Cu;
            // 0x1d5610: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D56CCu;
            goto label_1d56cc;
        }
    }
    ctx->pc = 0x1D5614u;
label_1d5614:
    // 0x1d5614: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x1d5614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_1d5618:
    // 0x1d5618: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d5618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1d561c:
    // 0x1d561c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_1d5620:
    if (ctx->pc == 0x1D5620u) {
        ctx->pc = 0x1D5620u;
            // 0x1d5620: 0x8e220d6c  lw          $v0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->pc = 0x1D5624u;
        goto label_1d5624;
    }
    ctx->pc = 0x1D561Cu;
    {
        const bool branch_taken_0x1d561c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d561c) {
            ctx->pc = 0x1D5620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D561Cu;
            // 0x1d5620: 0x8e220d6c  lw          $v0, 0xD6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5684u;
            goto label_1d5684;
        }
    }
    ctx->pc = 0x1D5624u;
label_1d5624:
    // 0x1d5624: 0x8e230d6c  lw          $v1, 0xD6C($s1)
    ctx->pc = 0x1d5624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_1d5628:
    // 0x1d5628: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1d5628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1d562c:
    // 0x1d562c: 0x3444999a  ori         $a0, $v0, 0x999A
    ctx->pc = 0x1d562cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1d5630:
    // 0x1d5630: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x1d5630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
label_1d5634:
    // 0x1d5634: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d5634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_1d5638:
    // 0x1d5638: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x1d5638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
label_1d563c:
    // 0x1d563c: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x1d563cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1d5640:
    // 0x1d5640: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x1d5640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_1d5644:
    // 0x1d5644: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d5644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d5648:
    // 0x1d5648: 0xae0302c8  sw          $v1, 0x2C8($s0)
    ctx->pc = 0x1d5648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 3));
label_1d564c:
    // 0x1d564c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d5650:
    // 0x1d5650: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1d5650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d5654:
    // 0x1d5654: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1d5654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1d5658:
    // 0x1d5658: 0xc0a545c  jal         func_295170
label_1d565c:
    if (ctx->pc == 0x1D565Cu) {
        ctx->pc = 0x1D565Cu;
            // 0x1d565c: 0x439824  and         $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->pc = 0x1D5660u;
        goto label_1d5660;
    }
    ctx->pc = 0x1D5658u;
    SET_GPR_U32(ctx, 31, 0x1D5660u);
    ctx->pc = 0x1D565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5658u;
            // 0x1d565c: 0x439824  and         $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5660u; }
        if (ctx->pc != 0x1D5660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5660u; }
        if (ctx->pc != 0x1D5660u) { return; }
    }
    ctx->pc = 0x1D5660u;
label_1d5660:
    // 0x1d5660: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x1d5660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_1d5664:
    // 0x1d5664: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d5664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d5668:
    // 0x1d5668: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d5668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d566c:
    // 0x1d566c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x1d566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_1d5670:
    // 0x1d5670: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d5670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d5674:
    // 0x1d5674: 0xc08bf20  jal         func_22FC80
label_1d5678:
    if (ctx->pc == 0x1D5678u) {
        ctx->pc = 0x1D5678u;
            // 0x1d5678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D567Cu;
        goto label_1d567c;
    }
    ctx->pc = 0x1D5674u;
    SET_GPR_U32(ctx, 31, 0x1D567Cu);
    ctx->pc = 0x1D5678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5674u;
            // 0x1d5678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D567Cu; }
        if (ctx->pc != 0x1D567Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D567Cu; }
        if (ctx->pc != 0x1D567Cu) { return; }
    }
    ctx->pc = 0x1D567Cu;
label_1d567c:
    // 0x1d567c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1d5680:
    if (ctx->pc == 0x1D5680u) {
        ctx->pc = 0x1D5684u;
        goto label_1d5684;
    }
    ctx->pc = 0x1D567Cu;
    {
        const bool branch_taken_0x1d567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d567c) {
            ctx->pc = 0x1D56C8u;
            goto label_1d56c8;
        }
    }
    ctx->pc = 0x1D5684u;
label_1d5684:
    // 0x1d5684: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d5684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d5688:
    // 0x1d5688: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d5688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d568c:
    // 0x1d568c: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x1d568cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
label_1d5690:
    // 0x1d5690: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1d5694:
    // 0x1d5694: 0xae0302c8  sw          $v1, 0x2C8($s0)
    ctx->pc = 0x1d5694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 3));
label_1d5698:
    // 0x1d5698: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d5698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d569c:
    // 0x1d569c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1d569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d56a0:
    // 0x1d56a0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1d56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1d56a4:
    // 0x1d56a4: 0xc0a545c  jal         func_295170
label_1d56a8:
    if (ctx->pc == 0x1D56A8u) {
        ctx->pc = 0x1D56A8u;
            // 0x1d56a8: 0x439824  and         $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->pc = 0x1D56ACu;
        goto label_1d56ac;
    }
    ctx->pc = 0x1D56A4u;
    SET_GPR_U32(ctx, 31, 0x1D56ACu);
    ctx->pc = 0x1D56A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56A4u;
            // 0x1d56a8: 0x439824  and         $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56ACu; }
        if (ctx->pc != 0x1D56ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56ACu; }
        if (ctx->pc != 0x1D56ACu) { return; }
    }
    ctx->pc = 0x1D56ACu;
label_1d56ac:
    // 0x1d56ac: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x1d56acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_1d56b0:
    // 0x1d56b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d56b4:
    // 0x1d56b4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1d56b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d56b8:
    // 0x1d56b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x1d56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_1d56bc:
    // 0x1d56bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1d56bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d56c0:
    // 0x1d56c0: 0xc08bf20  jal         func_22FC80
label_1d56c4:
    if (ctx->pc == 0x1D56C4u) {
        ctx->pc = 0x1D56C4u;
            // 0x1d56c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D56C8u;
        goto label_1d56c8;
    }
    ctx->pc = 0x1D56C0u;
    SET_GPR_U32(ctx, 31, 0x1D56C8u);
    ctx->pc = 0x1D56C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56C0u;
            // 0x1d56c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56C8u; }
        if (ctx->pc != 0x1D56C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D56C8u; }
        if (ctx->pc != 0x1D56C8u) { return; }
    }
    ctx->pc = 0x1D56C8u;
label_1d56c8:
    // 0x1d56c8: 0x8e4400d8  lw          $a0, 0xD8($s2)
    ctx->pc = 0x1d56c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_1d56cc:
    // 0x1d56cc: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1d56ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_1d56d0:
    // 0x1d56d0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_1d56d4:
    if (ctx->pc == 0x1D56D4u) {
        ctx->pc = 0x1D56D4u;
            // 0x1d56d4: 0x8e5000fc  lw          $s0, 0xFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
        ctx->pc = 0x1D56D8u;
        goto label_1d56d8;
    }
    ctx->pc = 0x1D56D0u;
    {
        const bool branch_taken_0x1d56d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D56D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56D0u;
            // 0x1d56d4: 0x8e5000fc  lw          $s0, 0xFC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56d0) {
            ctx->pc = 0x1D574Cu;
            goto label_1d574c;
        }
    }
    ctx->pc = 0x1D56D8u;
label_1d56d8:
    // 0x1d56d8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1d56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1d56dc:
    // 0x1d56dc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1d56dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1d56e0:
    // 0x1d56e0: 0x5460001b  bnel        $v1, $zero, . + 4 + (0x1B << 2)
label_1d56e4:
    if (ctx->pc == 0x1D56E4u) {
        ctx->pc = 0x1D56E4u;
            // 0x1d56e4: 0x3c04c120  lui         $a0, 0xC120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
        ctx->pc = 0x1D56E8u;
        goto label_1d56e8;
    }
    ctx->pc = 0x1D56E0u;
    {
        const bool branch_taken_0x1d56e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d56e0) {
            ctx->pc = 0x1D56E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56E0u;
            // 0x1d56e4: 0x3c04c120  lui         $a0, 0xC120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5750u;
            goto label_1d5750;
        }
    }
    ctx->pc = 0x1D56E8u;
label_1d56e8:
    // 0x1d56e8: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x1d56e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d56ec:
    // 0x1d56ec: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x1d56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
label_1d56f0:
    // 0x1d56f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d56f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d56f4:
    // 0x1d56f4: 0x0  nop
    ctx->pc = 0x1d56f4u;
    // NOP
label_1d56f8:
    // 0x1d56f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d56f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d56fc:
    // 0x1d56fc: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_1d5700:
    if (ctx->pc == 0x1D5700u) {
        ctx->pc = 0x1D5700u;
            // 0x1d5700: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x1D5704u;
        goto label_1d5704;
    }
    ctx->pc = 0x1D56FCu;
    {
        const bool branch_taken_0x1d56fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d56fc) {
            ctx->pc = 0x1D5700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D56FCu;
            // 0x1d5700: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5728u;
            goto label_1d5728;
        }
    }
    ctx->pc = 0x1D5704u;
label_1d5704:
    // 0x1d5704: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1d5704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
label_1d5708:
    // 0x1d5708: 0x26240a50  addiu       $a0, $s1, 0xA50
    ctx->pc = 0x1d5708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2640));
label_1d570c:
    // 0x1d570c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d570cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1d5710:
    // 0x1d5710: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x1d5710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
label_1d5714:
    // 0x1d5714: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x1d5714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5718:
    // 0x1d5718: 0xc0eea24  jal         func_3BA890
label_1d571c:
    if (ctx->pc == 0x1D571Cu) {
        ctx->pc = 0x1D571Cu;
            // 0x1d571c: 0xe6200a7c  swc1        $f0, 0xA7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2684), bits); }
        ctx->pc = 0x1D5720u;
        goto label_1d5720;
    }
    ctx->pc = 0x1D5718u;
    SET_GPR_U32(ctx, 31, 0x1D5720u);
    ctx->pc = 0x1D571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5718u;
            // 0x1d571c: 0xe6200a7c  swc1        $f0, 0xA7C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5720u; }
        if (ctx->pc != 0x1D5720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5720u; }
        if (ctx->pc != 0x1D5720u) { return; }
    }
    ctx->pc = 0x1D5720u;
label_1d5720:
    // 0x1d5720: 0x10000014  b           . + 4 + (0x14 << 2)
label_1d5724:
    if (ctx->pc == 0x1D5724u) {
        ctx->pc = 0x1D5724u;
            // 0x1d5724: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x1D5728u;
        goto label_1d5728;
    }
    ctx->pc = 0x1D5720u;
    {
        const bool branch_taken_0x1d5720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5720u;
            // 0x1d5724: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5720) {
            ctx->pc = 0x1D5774u;
            goto label_1d5774;
        }
    }
    ctx->pc = 0x1D5728u;
label_1d5728:
    // 0x1d5728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d5728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d572c:
    // 0x1d572c: 0x0  nop
    ctx->pc = 0x1d572cu;
    // NOP
label_1d5730:
    // 0x1d5730: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d5730u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5734:
    // 0x1d5734: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1d5738:
    if (ctx->pc == 0x1D5738u) {
        ctx->pc = 0x1D573Cu;
        goto label_1d573c;
    }
    ctx->pc = 0x1D5734u;
    {
        const bool branch_taken_0x1d5734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5734) {
            ctx->pc = 0x1D5770u;
            goto label_1d5770;
        }
    }
    ctx->pc = 0x1D573Cu;
label_1d573c:
    // 0x1d573c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1d573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_1d5740:
    // 0x1d5740: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d5740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d5744:
    // 0x1d5744: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d5748:
    if (ctx->pc == 0x1D5748u) {
        ctx->pc = 0x1D5748u;
            // 0x1d5748: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->pc = 0x1D574Cu;
        goto label_1d574c;
    }
    ctx->pc = 0x1D5744u;
    {
        const bool branch_taken_0x1d5744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5744u;
            // 0x1d5748: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5744) {
            ctx->pc = 0x1D5770u;
            goto label_1d5770;
        }
    }
    ctx->pc = 0x1D574Cu;
label_1d574c:
    // 0x1d574c: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x1d574cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
label_1d5750:
    // 0x1d5750: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x1d5750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1d5754:
    // 0x1d5754: 0xae440104  sw          $a0, 0x104($s2)
    ctx->pc = 0x1d5754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 4));
label_1d5758:
    // 0x1d5758: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d5758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1d575c:
    // 0x1d575c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1d5760:
    if (ctx->pc == 0x1D5760u) {
        ctx->pc = 0x1D5764u;
        goto label_1d5764;
    }
    ctx->pc = 0x1D575Cu;
    {
        const bool branch_taken_0x1d575c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d575c) {
            ctx->pc = 0x1D5770u;
            goto label_1d5770;
        }
    }
    ctx->pc = 0x1D5764u;
label_1d5764:
    // 0x1d5764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5768:
    // 0x1d5768: 0xc0bd6b0  jal         func_2F5AC0
label_1d576c:
    if (ctx->pc == 0x1D576Cu) {
        ctx->pc = 0x1D576Cu;
            // 0x1d576c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1D5770u;
        goto label_1d5770;
    }
    ctx->pc = 0x1D5768u;
    SET_GPR_U32(ctx, 31, 0x1D5770u);
    ctx->pc = 0x1D576Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5768u;
            // 0x1d576c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5AC0u;
    if (runtime->hasFunction(0x2F5AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5770u; }
        if (ctx->pc != 0x1D5770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5AC0_0x2f5ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5770u; }
        if (ctx->pc != 0x1D5770u) { return; }
    }
    ctx->pc = 0x1D5770u;
label_1d5770:
    // 0x1d5770: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d5770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1d5774:
    // 0x1d5774: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x1d5774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1d5778:
    // 0x1d5778: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_1d577c:
    if (ctx->pc == 0x1D577Cu) {
        ctx->pc = 0x1D5780u;
        goto label_1d5780;
    }
    ctx->pc = 0x1D5778u;
    {
        const bool branch_taken_0x1d5778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5778) {
            ctx->pc = 0x1D57A4u;
            goto label_1d57a4;
        }
    }
    ctx->pc = 0x1D5780u;
label_1d5780:
    // 0x1d5780: 0x9203001b  lbu         $v1, 0x1B($s0)
    ctx->pc = 0x1d5780u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
label_1d5784:
    // 0x1d5784: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1d5788:
    if (ctx->pc == 0x1D5788u) {
        ctx->pc = 0x1D578Cu;
        goto label_1d578c;
    }
    ctx->pc = 0x1D5784u;
    {
        const bool branch_taken_0x1d5784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5784) {
            ctx->pc = 0x1D57A4u;
            goto label_1d57a4;
        }
    }
    ctx->pc = 0x1D578Cu;
label_1d578c:
    // 0x1d578c: 0x3c04c120  lui         $a0, 0xC120
    ctx->pc = 0x1d578cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49440 << 16));
label_1d5790:
    // 0x1d5790: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1d5790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_1d5794:
    // 0x1d5794: 0xae440104  sw          $a0, 0x104($s2)
    ctx->pc = 0x1d5794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 4));
label_1d5798:
    // 0x1d5798: 0x8e4400d8  lw          $a0, 0xD8($s2)
    ctx->pc = 0x1d5798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_1d579c:
    // 0x1d579c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d579cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d57a0:
    // 0x1d57a0: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x1d57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
label_1d57a4:
    // 0x1d57a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1d57a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1d57a8:
    // 0x1d57a8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1d57a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d57ac:
    // 0x1d57ac: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1d57acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_1d57b0:
    // 0x1d57b0: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x1d57b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1d57b4:
    // 0x1d57b4: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
label_1d57b8:
    if (ctx->pc == 0x1D57B8u) {
        ctx->pc = 0x1D57B8u;
            // 0x1d57b8: 0xc64000b0  lwc1        $f0, 0xB0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1D57BCu;
        goto label_1d57bc;
    }
    ctx->pc = 0x1D57B4u;
    {
        const bool branch_taken_0x1d57b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d57b4) {
            ctx->pc = 0x1D57B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57B4u;
            // 0x1d57b8: 0xc64000b0  lwc1        $f0, 0xB0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D57CCu;
            goto label_1d57cc;
        }
    }
    ctx->pc = 0x1D57BCu;
label_1d57bc:
    // 0x1d57bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d57bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d57c0:
    // 0x1d57c0: 0xc075600  jal         func_1D5800
label_1d57c4:
    if (ctx->pc == 0x1D57C4u) {
        ctx->pc = 0x1D57C4u;
            // 0x1d57c4: 0x264500a8  addiu       $a1, $s2, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
        ctx->pc = 0x1D57C8u;
        goto label_1d57c8;
    }
    ctx->pc = 0x1D57C0u;
    SET_GPR_U32(ctx, 31, 0x1D57C8u);
    ctx->pc = 0x1D57C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57C0u;
            // 0x1d57c4: 0x264500a8  addiu       $a1, $s2, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5800u;
    if (runtime->hasFunction(0x1D5800u)) {
        auto targetFn = runtime->lookupFunction(0x1D5800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57C8u; }
        if (ctx->pc != 0x1D57C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5800_0x1d5800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D57C8u; }
        if (ctx->pc != 0x1D57C8u) { return; }
    }
    ctx->pc = 0x1D57C8u;
label_1d57c8:
    // 0x1d57c8: 0xc64000b0  lwc1        $f0, 0xB0($s2)
    ctx->pc = 0x1d57c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d57cc:
    // 0x1d57cc: 0xe6200de0  swc1        $f0, 0xDE0($s1)
    ctx->pc = 0x1d57ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
label_1d57d0:
    // 0x1d57d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d57d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d57d4:
    // 0x1d57d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d57d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d57d8:
    // 0x1d57d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d57d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d57dc:
    // 0x1d57dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d57dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d57e0:
    // 0x1d57e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d57e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d57e4:
    // 0x1d57e4: 0x3e00008  jr          $ra
label_1d57e8:
    if (ctx->pc == 0x1D57E8u) {
        ctx->pc = 0x1D57E8u;
            // 0x1d57e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D57ECu;
        goto label_1d57ec;
    }
    ctx->pc = 0x1D57E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D57E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57E4u;
            // 0x1d57e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D57ECu;
label_1d57ec:
    // 0x1d57ec: 0x0  nop
    ctx->pc = 0x1d57ecu;
    // NOP
label_1d57f0:
    // 0x1d57f0: 0x3e00008  jr          $ra
label_1d57f4:
    if (ctx->pc == 0x1D57F4u) {
        ctx->pc = 0x1D57F4u;
            // 0x1d57f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D57F8u;
        goto label_1d57f8;
    }
    ctx->pc = 0x1D57F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D57F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D57F0u;
            // 0x1d57f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D57F8u;
label_1d57f8:
    // 0x1d57f8: 0x0  nop
    ctx->pc = 0x1d57f8u;
    // NOP
label_1d57fc:
    // 0x1d57fc: 0x0  nop
    ctx->pc = 0x1d57fcu;
    // NOP
}
