#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00564560
// Address: 0x564560 - 0x564a50
void sub_00564560_0x564560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00564560_0x564560");
#endif

    switch (ctx->pc) {
        case 0x564560u: goto label_564560;
        case 0x564564u: goto label_564564;
        case 0x564568u: goto label_564568;
        case 0x56456cu: goto label_56456c;
        case 0x564570u: goto label_564570;
        case 0x564574u: goto label_564574;
        case 0x564578u: goto label_564578;
        case 0x56457cu: goto label_56457c;
        case 0x564580u: goto label_564580;
        case 0x564584u: goto label_564584;
        case 0x564588u: goto label_564588;
        case 0x56458cu: goto label_56458c;
        case 0x564590u: goto label_564590;
        case 0x564594u: goto label_564594;
        case 0x564598u: goto label_564598;
        case 0x56459cu: goto label_56459c;
        case 0x5645a0u: goto label_5645a0;
        case 0x5645a4u: goto label_5645a4;
        case 0x5645a8u: goto label_5645a8;
        case 0x5645acu: goto label_5645ac;
        case 0x5645b0u: goto label_5645b0;
        case 0x5645b4u: goto label_5645b4;
        case 0x5645b8u: goto label_5645b8;
        case 0x5645bcu: goto label_5645bc;
        case 0x5645c0u: goto label_5645c0;
        case 0x5645c4u: goto label_5645c4;
        case 0x5645c8u: goto label_5645c8;
        case 0x5645ccu: goto label_5645cc;
        case 0x5645d0u: goto label_5645d0;
        case 0x5645d4u: goto label_5645d4;
        case 0x5645d8u: goto label_5645d8;
        case 0x5645dcu: goto label_5645dc;
        case 0x5645e0u: goto label_5645e0;
        case 0x5645e4u: goto label_5645e4;
        case 0x5645e8u: goto label_5645e8;
        case 0x5645ecu: goto label_5645ec;
        case 0x5645f0u: goto label_5645f0;
        case 0x5645f4u: goto label_5645f4;
        case 0x5645f8u: goto label_5645f8;
        case 0x5645fcu: goto label_5645fc;
        case 0x564600u: goto label_564600;
        case 0x564604u: goto label_564604;
        case 0x564608u: goto label_564608;
        case 0x56460cu: goto label_56460c;
        case 0x564610u: goto label_564610;
        case 0x564614u: goto label_564614;
        case 0x564618u: goto label_564618;
        case 0x56461cu: goto label_56461c;
        case 0x564620u: goto label_564620;
        case 0x564624u: goto label_564624;
        case 0x564628u: goto label_564628;
        case 0x56462cu: goto label_56462c;
        case 0x564630u: goto label_564630;
        case 0x564634u: goto label_564634;
        case 0x564638u: goto label_564638;
        case 0x56463cu: goto label_56463c;
        case 0x564640u: goto label_564640;
        case 0x564644u: goto label_564644;
        case 0x564648u: goto label_564648;
        case 0x56464cu: goto label_56464c;
        case 0x564650u: goto label_564650;
        case 0x564654u: goto label_564654;
        case 0x564658u: goto label_564658;
        case 0x56465cu: goto label_56465c;
        case 0x564660u: goto label_564660;
        case 0x564664u: goto label_564664;
        case 0x564668u: goto label_564668;
        case 0x56466cu: goto label_56466c;
        case 0x564670u: goto label_564670;
        case 0x564674u: goto label_564674;
        case 0x564678u: goto label_564678;
        case 0x56467cu: goto label_56467c;
        case 0x564680u: goto label_564680;
        case 0x564684u: goto label_564684;
        case 0x564688u: goto label_564688;
        case 0x56468cu: goto label_56468c;
        case 0x564690u: goto label_564690;
        case 0x564694u: goto label_564694;
        case 0x564698u: goto label_564698;
        case 0x56469cu: goto label_56469c;
        case 0x5646a0u: goto label_5646a0;
        case 0x5646a4u: goto label_5646a4;
        case 0x5646a8u: goto label_5646a8;
        case 0x5646acu: goto label_5646ac;
        case 0x5646b0u: goto label_5646b0;
        case 0x5646b4u: goto label_5646b4;
        case 0x5646b8u: goto label_5646b8;
        case 0x5646bcu: goto label_5646bc;
        case 0x5646c0u: goto label_5646c0;
        case 0x5646c4u: goto label_5646c4;
        case 0x5646c8u: goto label_5646c8;
        case 0x5646ccu: goto label_5646cc;
        case 0x5646d0u: goto label_5646d0;
        case 0x5646d4u: goto label_5646d4;
        case 0x5646d8u: goto label_5646d8;
        case 0x5646dcu: goto label_5646dc;
        case 0x5646e0u: goto label_5646e0;
        case 0x5646e4u: goto label_5646e4;
        case 0x5646e8u: goto label_5646e8;
        case 0x5646ecu: goto label_5646ec;
        case 0x5646f0u: goto label_5646f0;
        case 0x5646f4u: goto label_5646f4;
        case 0x5646f8u: goto label_5646f8;
        case 0x5646fcu: goto label_5646fc;
        case 0x564700u: goto label_564700;
        case 0x564704u: goto label_564704;
        case 0x564708u: goto label_564708;
        case 0x56470cu: goto label_56470c;
        case 0x564710u: goto label_564710;
        case 0x564714u: goto label_564714;
        case 0x564718u: goto label_564718;
        case 0x56471cu: goto label_56471c;
        case 0x564720u: goto label_564720;
        case 0x564724u: goto label_564724;
        case 0x564728u: goto label_564728;
        case 0x56472cu: goto label_56472c;
        case 0x564730u: goto label_564730;
        case 0x564734u: goto label_564734;
        case 0x564738u: goto label_564738;
        case 0x56473cu: goto label_56473c;
        case 0x564740u: goto label_564740;
        case 0x564744u: goto label_564744;
        case 0x564748u: goto label_564748;
        case 0x56474cu: goto label_56474c;
        case 0x564750u: goto label_564750;
        case 0x564754u: goto label_564754;
        case 0x564758u: goto label_564758;
        case 0x56475cu: goto label_56475c;
        case 0x564760u: goto label_564760;
        case 0x564764u: goto label_564764;
        case 0x564768u: goto label_564768;
        case 0x56476cu: goto label_56476c;
        case 0x564770u: goto label_564770;
        case 0x564774u: goto label_564774;
        case 0x564778u: goto label_564778;
        case 0x56477cu: goto label_56477c;
        case 0x564780u: goto label_564780;
        case 0x564784u: goto label_564784;
        case 0x564788u: goto label_564788;
        case 0x56478cu: goto label_56478c;
        case 0x564790u: goto label_564790;
        case 0x564794u: goto label_564794;
        case 0x564798u: goto label_564798;
        case 0x56479cu: goto label_56479c;
        case 0x5647a0u: goto label_5647a0;
        case 0x5647a4u: goto label_5647a4;
        case 0x5647a8u: goto label_5647a8;
        case 0x5647acu: goto label_5647ac;
        case 0x5647b0u: goto label_5647b0;
        case 0x5647b4u: goto label_5647b4;
        case 0x5647b8u: goto label_5647b8;
        case 0x5647bcu: goto label_5647bc;
        case 0x5647c0u: goto label_5647c0;
        case 0x5647c4u: goto label_5647c4;
        case 0x5647c8u: goto label_5647c8;
        case 0x5647ccu: goto label_5647cc;
        case 0x5647d0u: goto label_5647d0;
        case 0x5647d4u: goto label_5647d4;
        case 0x5647d8u: goto label_5647d8;
        case 0x5647dcu: goto label_5647dc;
        case 0x5647e0u: goto label_5647e0;
        case 0x5647e4u: goto label_5647e4;
        case 0x5647e8u: goto label_5647e8;
        case 0x5647ecu: goto label_5647ec;
        case 0x5647f0u: goto label_5647f0;
        case 0x5647f4u: goto label_5647f4;
        case 0x5647f8u: goto label_5647f8;
        case 0x5647fcu: goto label_5647fc;
        case 0x564800u: goto label_564800;
        case 0x564804u: goto label_564804;
        case 0x564808u: goto label_564808;
        case 0x56480cu: goto label_56480c;
        case 0x564810u: goto label_564810;
        case 0x564814u: goto label_564814;
        case 0x564818u: goto label_564818;
        case 0x56481cu: goto label_56481c;
        case 0x564820u: goto label_564820;
        case 0x564824u: goto label_564824;
        case 0x564828u: goto label_564828;
        case 0x56482cu: goto label_56482c;
        case 0x564830u: goto label_564830;
        case 0x564834u: goto label_564834;
        case 0x564838u: goto label_564838;
        case 0x56483cu: goto label_56483c;
        case 0x564840u: goto label_564840;
        case 0x564844u: goto label_564844;
        case 0x564848u: goto label_564848;
        case 0x56484cu: goto label_56484c;
        case 0x564850u: goto label_564850;
        case 0x564854u: goto label_564854;
        case 0x564858u: goto label_564858;
        case 0x56485cu: goto label_56485c;
        case 0x564860u: goto label_564860;
        case 0x564864u: goto label_564864;
        case 0x564868u: goto label_564868;
        case 0x56486cu: goto label_56486c;
        case 0x564870u: goto label_564870;
        case 0x564874u: goto label_564874;
        case 0x564878u: goto label_564878;
        case 0x56487cu: goto label_56487c;
        case 0x564880u: goto label_564880;
        case 0x564884u: goto label_564884;
        case 0x564888u: goto label_564888;
        case 0x56488cu: goto label_56488c;
        case 0x564890u: goto label_564890;
        case 0x564894u: goto label_564894;
        case 0x564898u: goto label_564898;
        case 0x56489cu: goto label_56489c;
        case 0x5648a0u: goto label_5648a0;
        case 0x5648a4u: goto label_5648a4;
        case 0x5648a8u: goto label_5648a8;
        case 0x5648acu: goto label_5648ac;
        case 0x5648b0u: goto label_5648b0;
        case 0x5648b4u: goto label_5648b4;
        case 0x5648b8u: goto label_5648b8;
        case 0x5648bcu: goto label_5648bc;
        case 0x5648c0u: goto label_5648c0;
        case 0x5648c4u: goto label_5648c4;
        case 0x5648c8u: goto label_5648c8;
        case 0x5648ccu: goto label_5648cc;
        case 0x5648d0u: goto label_5648d0;
        case 0x5648d4u: goto label_5648d4;
        case 0x5648d8u: goto label_5648d8;
        case 0x5648dcu: goto label_5648dc;
        case 0x5648e0u: goto label_5648e0;
        case 0x5648e4u: goto label_5648e4;
        case 0x5648e8u: goto label_5648e8;
        case 0x5648ecu: goto label_5648ec;
        case 0x5648f0u: goto label_5648f0;
        case 0x5648f4u: goto label_5648f4;
        case 0x5648f8u: goto label_5648f8;
        case 0x5648fcu: goto label_5648fc;
        case 0x564900u: goto label_564900;
        case 0x564904u: goto label_564904;
        case 0x564908u: goto label_564908;
        case 0x56490cu: goto label_56490c;
        case 0x564910u: goto label_564910;
        case 0x564914u: goto label_564914;
        case 0x564918u: goto label_564918;
        case 0x56491cu: goto label_56491c;
        case 0x564920u: goto label_564920;
        case 0x564924u: goto label_564924;
        case 0x564928u: goto label_564928;
        case 0x56492cu: goto label_56492c;
        case 0x564930u: goto label_564930;
        case 0x564934u: goto label_564934;
        case 0x564938u: goto label_564938;
        case 0x56493cu: goto label_56493c;
        case 0x564940u: goto label_564940;
        case 0x564944u: goto label_564944;
        case 0x564948u: goto label_564948;
        case 0x56494cu: goto label_56494c;
        case 0x564950u: goto label_564950;
        case 0x564954u: goto label_564954;
        case 0x564958u: goto label_564958;
        case 0x56495cu: goto label_56495c;
        case 0x564960u: goto label_564960;
        case 0x564964u: goto label_564964;
        case 0x564968u: goto label_564968;
        case 0x56496cu: goto label_56496c;
        case 0x564970u: goto label_564970;
        case 0x564974u: goto label_564974;
        case 0x564978u: goto label_564978;
        case 0x56497cu: goto label_56497c;
        case 0x564980u: goto label_564980;
        case 0x564984u: goto label_564984;
        case 0x564988u: goto label_564988;
        case 0x56498cu: goto label_56498c;
        case 0x564990u: goto label_564990;
        case 0x564994u: goto label_564994;
        case 0x564998u: goto label_564998;
        case 0x56499cu: goto label_56499c;
        case 0x5649a0u: goto label_5649a0;
        case 0x5649a4u: goto label_5649a4;
        case 0x5649a8u: goto label_5649a8;
        case 0x5649acu: goto label_5649ac;
        case 0x5649b0u: goto label_5649b0;
        case 0x5649b4u: goto label_5649b4;
        case 0x5649b8u: goto label_5649b8;
        case 0x5649bcu: goto label_5649bc;
        case 0x5649c0u: goto label_5649c0;
        case 0x5649c4u: goto label_5649c4;
        case 0x5649c8u: goto label_5649c8;
        case 0x5649ccu: goto label_5649cc;
        case 0x5649d0u: goto label_5649d0;
        case 0x5649d4u: goto label_5649d4;
        case 0x5649d8u: goto label_5649d8;
        case 0x5649dcu: goto label_5649dc;
        case 0x5649e0u: goto label_5649e0;
        case 0x5649e4u: goto label_5649e4;
        case 0x5649e8u: goto label_5649e8;
        case 0x5649ecu: goto label_5649ec;
        case 0x5649f0u: goto label_5649f0;
        case 0x5649f4u: goto label_5649f4;
        case 0x5649f8u: goto label_5649f8;
        case 0x5649fcu: goto label_5649fc;
        case 0x564a00u: goto label_564a00;
        case 0x564a04u: goto label_564a04;
        case 0x564a08u: goto label_564a08;
        case 0x564a0cu: goto label_564a0c;
        case 0x564a10u: goto label_564a10;
        case 0x564a14u: goto label_564a14;
        case 0x564a18u: goto label_564a18;
        case 0x564a1cu: goto label_564a1c;
        case 0x564a20u: goto label_564a20;
        case 0x564a24u: goto label_564a24;
        case 0x564a28u: goto label_564a28;
        case 0x564a2cu: goto label_564a2c;
        case 0x564a30u: goto label_564a30;
        case 0x564a34u: goto label_564a34;
        case 0x564a38u: goto label_564a38;
        case 0x564a3cu: goto label_564a3c;
        case 0x564a40u: goto label_564a40;
        case 0x564a44u: goto label_564a44;
        case 0x564a48u: goto label_564a48;
        case 0x564a4cu: goto label_564a4c;
        default: break;
    }

    ctx->pc = 0x564560u;

label_564560:
    // 0x564560: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x564560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_564564:
    // 0x564564: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x564564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_564568:
    // 0x564568: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x564568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_56456c:
    // 0x56456c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x56456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_564570:
    // 0x564570: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x564570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_564574:
    // 0x564574: 0x3c1e0064  lui         $fp, 0x64
    ctx->pc = 0x564574u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)100 << 16));
label_564578:
    // 0x564578: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x564578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_56457c:
    // 0x56457c: 0x27de2100  addiu       $fp, $fp, 0x2100
    ctx->pc = 0x56457cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8448));
label_564580:
    // 0x564580: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x564580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_564584:
    // 0x564584: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x564584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_564588:
    // 0x564588: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x564588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_56458c:
    // 0x56458c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x56458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_564590:
    // 0x564590: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x564590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_564594:
    // 0x564594: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x564594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_564598:
    // 0x564598: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x564598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_56459c:
    // 0x56459c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x56459cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_5645a0:
    // 0x5645a0: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x5645a0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_5645a4:
    // 0x5645a4: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x5645a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_5645a8:
    // 0x5645a8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x5645a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_5645ac:
    // 0x5645ac: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x5645acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_5645b0:
    // 0x5645b0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x5645b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_5645b4:
    // 0x5645b4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5645b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_5645b8:
    // 0x5645b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5645b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5645bc:
    // 0x5645bc: 0x8c550e80  lw          $s5, 0xE80($v0)
    ctx->pc = 0x5645bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5645c0:
    // 0x5645c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5645c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5645c4:
    // 0x5645c4: 0x8c5689e0  lw          $s6, -0x7620($v0)
    ctx->pc = 0x5645c4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_5645c8:
    // 0x5645c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5645c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5645cc:
    // 0x5645cc: 0x8c5489f0  lw          $s4, -0x7610($v0)
    ctx->pc = 0x5645ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_5645d0:
    // 0x5645d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5645d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5645d4:
    // 0x5645d4: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x5645d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_5645d8:
    // 0x5645d8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x5645d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_5645dc:
    // 0x5645dc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5645dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5645e0:
    // 0x5645e0: 0x2442a9a0  addiu       $v0, $v0, -0x5660
    ctx->pc = 0x5645e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945184));
label_5645e4:
    // 0x5645e4: 0xc45b0008  lwc1        $f27, 0x8($v0)
    ctx->pc = 0x5645e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_5645e8:
    // 0x5645e8: 0xc45a000c  lwc1        $f26, 0xC($v0)
    ctx->pc = 0x5645e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_5645ec:
    // 0x5645ec: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x5645ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_5645f0:
    // 0x5645f0: 0xc456c060  lwc1        $f22, -0x3FA0($v0)
    ctx->pc = 0x5645f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_5645f4:
    // 0x5645f4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x5645f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_5645f8:
    // 0x5645f8: 0xc455c058  lwc1        $f21, -0x3FA8($v0)
    ctx->pc = 0x5645f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5645fc:
    // 0x5645fc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x5645fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_564600:
    // 0x564600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x564600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_564604:
    // 0x564604: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x564604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_564608:
    // 0x564608: 0x320f809  jalr        $t9
label_56460c:
    if (ctx->pc == 0x56460Cu) {
        ctx->pc = 0x56460Cu;
            // 0x56460c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x564610u;
        goto label_564610;
    }
    ctx->pc = 0x564608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x564610u);
        ctx->pc = 0x56460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564608u;
            // 0x56460c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x564610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x564610u; }
            if (ctx->pc != 0x564610u) { return; }
        }
        }
    }
    ctx->pc = 0x564610u;
label_564610:
    // 0x564610: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x564610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_564614:
    // 0x564614: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x564614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_564618:
    // 0x564618: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x564618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_56461c:
    // 0x56461c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x56461cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_564620:
    // 0x564620: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x564620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_564624:
    // 0x564624: 0x8e090cd8  lw          $t1, 0xCD8($s0)
    ctx->pc = 0x564624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3288)));
label_564628:
    // 0x564628: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x564628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_56462c:
    // 0x56462c: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x56462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_564630:
    // 0x564630: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x564630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_564634:
    // 0x564634: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x564634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_564638:
    // 0x564638: 0x8c920130  lw          $s2, 0x130($a0)
    ctx->pc = 0x564638u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_56463c:
    // 0x56463c: 0x8c65d120  lw          $a1, -0x2EE0($v1)
    ctx->pc = 0x56463cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_564640:
    // 0x564640: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x564640u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_564644:
    // 0x564644: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x564644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_564648:
    // 0x564648: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x564648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_56464c:
    // 0x56464c: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x56464cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_564650:
    // 0x564650: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x564650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_564654:
    // 0x564654: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x564654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_564658:
    // 0x564658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x564658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_56465c:
    // 0x56465c: 0x80c6007a  lb          $a2, 0x7A($a2)
    ctx->pc = 0x56465cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
label_564660:
    // 0x564660: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x564660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_564664:
    // 0x564664: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x564664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_564668:
    // 0x564668: 0x2463fab0  addiu       $v1, $v1, -0x550
    ctx->pc = 0x564668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965936));
label_56466c:
    // 0x56466c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x56466cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_564670:
    // 0x564670: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x564670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_564674:
    // 0x564674: 0x24f70150  addiu       $s7, $a3, 0x150
    ctx->pc = 0x564674u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
label_564678:
    // 0x564678: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x564678u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_56467c:
    // 0x56467c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x56467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_564680:
    // 0x564680: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x564680u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_564684:
    // 0x564684: 0xc474fffc  lwc1        $f20, -0x4($v1)
    ctx->pc = 0x564684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_564688:
    // 0x564688: 0x24e20200  addiu       $v0, $a3, 0x200
    ctx->pc = 0x564688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
label_56468c:
    // 0x56468c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x56468cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_564690:
    // 0x564690: 0x8e220d6c  lw          $v0, 0xD6C($s1)
    ctx->pc = 0x564690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_564694:
    // 0x564694: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x564694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_564698:
    // 0x564698: 0x320f809  jalr        $t9
label_56469c:
    if (ctx->pc == 0x56469Cu) {
        ctx->pc = 0x56469Cu;
            // 0x56469c: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x5646A0u;
        goto label_5646a0;
    }
    ctx->pc = 0x564698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5646A0u);
        ctx->pc = 0x56469Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564698u;
            // 0x56469c: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5646A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5646A0u; }
            if (ctx->pc != 0x5646A0u) { return; }
        }
        }
    }
    ctx->pc = 0x5646A0u;
label_5646a0:
    // 0x5646a0: 0x145200ab  bne         $v0, $s2, . + 4 + (0xAB << 2)
label_5646a4:
    if (ctx->pc == 0x5646A4u) {
        ctx->pc = 0x5646A8u;
        goto label_5646a8;
    }
    ctx->pc = 0x5646A0u;
    {
        const bool branch_taken_0x5646a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x5646a0) {
            ctx->pc = 0x564950u;
            goto label_564950;
        }
    }
    ctx->pc = 0x5646A8u;
label_5646a8:
    // 0x5646a8: 0x8e030cec  lw          $v1, 0xCEC($s0)
    ctx->pc = 0x5646a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3308)));
label_5646ac:
    // 0x5646ac: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_5646b0:
    if (ctx->pc == 0x5646B0u) {
        ctx->pc = 0x5646B4u;
        goto label_5646b4;
    }
    ctx->pc = 0x5646ACu;
    {
        const bool branch_taken_0x5646ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5646ac) {
            ctx->pc = 0x564950u;
            goto label_564950;
        }
    }
    ctx->pc = 0x5646B4u;
label_5646b4:
    // 0x5646b4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x5646b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_5646b8:
    // 0x5646b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5646b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5646bc:
    // 0x5646bc: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x5646bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_5646c0:
    // 0x5646c0: 0x320f809  jalr        $t9
label_5646c4:
    if (ctx->pc == 0x5646C4u) {
        ctx->pc = 0x5646C4u;
            // 0x5646c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x5646C8u;
        goto label_5646c8;
    }
    ctx->pc = 0x5646C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5646C8u);
        ctx->pc = 0x5646C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5646C0u;
            // 0x5646c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5646C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5646C8u; }
            if (ctx->pc != 0x5646C8u) { return; }
        }
        }
    }
    ctx->pc = 0x5646C8u;
label_5646c8:
    // 0x5646c8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x5646c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_5646cc:
    // 0x5646cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x5646ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_5646d0:
    // 0x5646d0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x5646d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_5646d4:
    // 0x5646d4: 0x320f809  jalr        $t9
label_5646d8:
    if (ctx->pc == 0x5646D8u) {
        ctx->pc = 0x5646D8u;
            // 0x5646d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5646DCu;
        goto label_5646dc;
    }
    ctx->pc = 0x5646D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5646DCu);
        ctx->pc = 0x5646D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5646D4u;
            // 0x5646d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5646DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5646DCu; }
            if (ctx->pc != 0x5646DCu) { return; }
        }
        }
    }
    ctx->pc = 0x5646DCu;
label_5646dc:
    // 0x5646dc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x5646dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_5646e0:
    // 0x5646e0: 0xc62002c4  lwc1        $f0, 0x2C4($s1)
    ctx->pc = 0x5646e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5646e4:
    // 0x5646e4: 0xc62c02c0  lwc1        $f12, 0x2C0($s1)
    ctx->pc = 0x5646e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5646e8:
    // 0x5646e8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x5646e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5646ec:
    // 0x5646ec: 0xc62e02c8  lwc1        $f14, 0x2C8($s1)
    ctx->pc = 0x5646ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_5646f0:
    // 0x5646f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x5646f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5646f4:
    // 0x5646f4: 0xc04cbd8  jal         func_132F60
label_5646f8:
    if (ctx->pc == 0x5646F8u) {
        ctx->pc = 0x5646F8u;
            // 0x5646f8: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x5646FCu;
        goto label_5646fc;
    }
    ctx->pc = 0x5646F4u;
    SET_GPR_U32(ctx, 31, 0x5646FCu);
    ctx->pc = 0x5646F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5646F4u;
            // 0x5646f8: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5646FCu; }
        if (ctx->pc != 0x5646FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5646FCu; }
        if (ctx->pc != 0x5646FCu) { return; }
    }
    ctx->pc = 0x5646FCu;
label_5646fc:
    // 0x5646fc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x5646fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_564700:
    // 0x564700: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x564700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_564704:
    // 0x564704: 0xc075094  jal         func_1D4250
label_564708:
    if (ctx->pc == 0x564708u) {
        ctx->pc = 0x564708u;
            // 0x564708: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x56470Cu;
        goto label_56470c;
    }
    ctx->pc = 0x564704u;
    SET_GPR_U32(ctx, 31, 0x56470Cu);
    ctx->pc = 0x564708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564704u;
            // 0x564708: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56470Cu; }
        if (ctx->pc != 0x56470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56470Cu; }
        if (ctx->pc != 0x56470Cu) { return; }
    }
    ctx->pc = 0x56470Cu;
label_56470c:
    // 0x56470c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x56470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_564710:
    // 0x564710: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x564710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_564714:
    // 0x564714: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_564718:
    if (ctx->pc == 0x564718u) {
        ctx->pc = 0x564718u;
            // 0x564718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56471Cu;
        goto label_56471c;
    }
    ctx->pc = 0x564714u;
    {
        const bool branch_taken_0x564714 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x564718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564714u;
            // 0x564718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564714) {
            ctx->pc = 0x564720u;
            goto label_564720;
        }
    }
    ctx->pc = 0x56471Cu;
label_56471c:
    // 0x56471c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x56471cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_564720:
    // 0x564720: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x564720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_564724:
    // 0x564724: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x564724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_564728:
    // 0x564728: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_56472c:
    if (ctx->pc == 0x56472Cu) {
        ctx->pc = 0x56472Cu;
            // 0x56472c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x564730u;
        goto label_564730;
    }
    ctx->pc = 0x564728u;
    {
        const bool branch_taken_0x564728 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x56472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564728u;
            // 0x56472c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564728) {
            ctx->pc = 0x564734u;
            goto label_564734;
        }
    }
    ctx->pc = 0x564730u;
label_564730:
    // 0x564730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x564730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_564734:
    // 0x564734: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x564734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_564738:
    // 0x564738: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x564738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_56473c:
    // 0x56473c: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_564740:
    if (ctx->pc == 0x564740u) {
        ctx->pc = 0x564744u;
        goto label_564744;
    }
    ctx->pc = 0x56473Cu;
    {
        const bool branch_taken_0x56473c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x56473c) {
            ctx->pc = 0x564928u;
            goto label_564928;
        }
    }
    ctx->pc = 0x564744u;
label_564744:
    // 0x564744: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x564744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_564748:
    // 0x564748: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x564748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_56474c:
    // 0x56474c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x56474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_564750:
    // 0x564750: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x564750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_564754:
    // 0x564754: 0x27a5011c  addiu       $a1, $sp, 0x11C
    ctx->pc = 0x564754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_564758:
    // 0x564758: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x564758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_56475c:
    // 0x56475c: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x56475cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_564760:
    // 0x564760: 0x320f809  jalr        $t9
label_564764:
    if (ctx->pc == 0x564764u) {
        ctx->pc = 0x564764u;
            // 0x564764: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x564768u;
        goto label_564768;
    }
    ctx->pc = 0x564760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x564768u);
        ctx->pc = 0x564764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564760u;
            // 0x564764: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x564768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x564768u; }
            if (ctx->pc != 0x564768u) { return; }
        }
        }
    }
    ctx->pc = 0x564768u;
label_564768:
    // 0x564768: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x564768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_56476c:
    // 0x56476c: 0x87b0011c  lh          $s0, 0x11C($sp)
    ctx->pc = 0x56476cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 284)));
label_564770:
    // 0x564770: 0x87b7011e  lh          $s7, 0x11E($sp)
    ctx->pc = 0x564770u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 286)));
label_564774:
    // 0x564774: 0xc04cc1c  jal         func_133070
label_564778:
    if (ctx->pc == 0x564778u) {
        ctx->pc = 0x564778u;
            // 0x564778: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x56477Cu;
        goto label_56477c;
    }
    ctx->pc = 0x564774u;
    SET_GPR_U32(ctx, 31, 0x56477Cu);
    ctx->pc = 0x564778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564774u;
            // 0x564778: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56477Cu; }
        if (ctx->pc != 0x56477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56477Cu; }
        if (ctx->pc != 0x56477Cu) { return; }
    }
    ctx->pc = 0x56477Cu;
label_56477c:
    // 0x56477c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56477cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_564780:
    // 0x564780: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x564780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_564784:
    // 0x564784: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x564784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_564788:
    // 0x564788: 0x1a000067  blez        $s0, . + 4 + (0x67 << 2)
label_56478c:
    if (ctx->pc == 0x56478Cu) {
        ctx->pc = 0x56478Cu;
            // 0x56478c: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->pc = 0x564790u;
        goto label_564790;
    }
    ctx->pc = 0x564788u;
    {
        const bool branch_taken_0x564788 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x56478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564788u;
            // 0x56478c: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564788) {
            ctx->pc = 0x564928u;
            goto label_564928;
        }
    }
    ctx->pc = 0x564790u;
label_564790:
    // 0x564790: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x564790u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_564794:
    // 0x564794: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
label_564798:
    if (ctx->pc == 0x564798u) {
        ctx->pc = 0x56479Cu;
        goto label_56479c;
    }
    ctx->pc = 0x564794u;
    {
        const bool branch_taken_0x564794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x564794) {
            ctx->pc = 0x564928u;
            goto label_564928;
        }
    }
    ctx->pc = 0x56479Cu;
label_56479c:
    // 0x56479c: 0x1ae00062  blez        $s7, . + 4 + (0x62 << 2)
label_5647a0:
    if (ctx->pc == 0x5647A0u) {
        ctx->pc = 0x5647A4u;
        goto label_5647a4;
    }
    ctx->pc = 0x56479Cu;
    {
        const bool branch_taken_0x56479c = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x56479c) {
            ctx->pc = 0x564928u;
            goto label_564928;
        }
    }
    ctx->pc = 0x5647A4u;
label_5647a4:
    // 0x5647a4: 0x2e2082a  slt         $at, $s7, $v0
    ctx->pc = 0x5647a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_5647a8:
    // 0x5647a8: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
label_5647ac:
    if (ctx->pc == 0x5647ACu) {
        ctx->pc = 0x5647B0u;
        goto label_5647b0;
    }
    ctx->pc = 0x5647A8u;
    {
        const bool branch_taken_0x5647a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5647a8) {
            ctx->pc = 0x564928u;
            goto label_564928;
        }
    }
    ctx->pc = 0x5647B0u;
label_5647b0:
    // 0x5647b0: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x5647b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_5647b4:
    // 0x5647b4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x5647b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_5647b8:
    // 0x5647b8: 0x3444f000  ori         $a0, $v0, 0xF000
    ctx->pc = 0x5647b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_5647bc:
    // 0x5647bc: 0xc6210de4  lwc1        $f1, 0xDE4($s1)
    ctx->pc = 0x5647bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5647c0:
    // 0x5647c0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x5647c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_5647c4:
    // 0x5647c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x5647c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5647c8:
    // 0x5647c8: 0x0  nop
    ctx->pc = 0x5647c8u;
    // NOP
label_5647cc:
    // 0x5647cc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x5647ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_5647d0:
    // 0x5647d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5647d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5647d4:
    // 0x5647d4: 0x0  nop
    ctx->pc = 0x5647d4u;
    // NOP
label_5647d8:
    // 0x5647d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x5647d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_5647dc:
    // 0x5647dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5647dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5647e0:
    // 0x5647e0: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x5647e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_5647e4:
    // 0x5647e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5647e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5647e8:
    // 0x5647e8: 0x0  nop
    ctx->pc = 0x5647e8u;
    // NOP
label_5647ec:
    // 0x5647ec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x5647ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5647f0:
    // 0x5647f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_5647f4:
    if (ctx->pc == 0x5647F4u) {
        ctx->pc = 0x5647F4u;
            // 0x5647f4: 0x4600a646  mov.s       $f25, $f20 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5647F8u;
        goto label_5647f8;
    }
    ctx->pc = 0x5647F0u;
    {
        const bool branch_taken_0x5647f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5647F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5647F0u;
            // 0x5647f4: 0x4600a646  mov.s       $f25, $f20 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5647f0) {
            ctx->pc = 0x564800u;
            goto label_564800;
        }
    }
    ctx->pc = 0x5647F8u;
label_5647f8:
    // 0x5647f8: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x5647f8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
label_5647fc:
    // 0x5647fc: 0x0  nop
    ctx->pc = 0x5647fcu;
    // NOP
label_564800:
    // 0x564800: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_564804:
    if (ctx->pc == 0x564804u) {
        ctx->pc = 0x564808u;
        goto label_564808;
    }
    ctx->pc = 0x564800u;
    {
        const bool branch_taken_0x564800 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x564800) {
            ctx->pc = 0x564810u;
            goto label_564810;
        }
    }
    ctx->pc = 0x564808u;
label_564808:
    // 0x564808: 0x10000005  b           . + 4 + (0x5 << 2)
label_56480c:
    if (ctx->pc == 0x56480Cu) {
        ctx->pc = 0x56480Cu;
            // 0x56480c: 0x129023  negu        $s2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->pc = 0x564810u;
        goto label_564810;
    }
    ctx->pc = 0x564808u;
    {
        const bool branch_taken_0x564808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564808u;
            // 0x56480c: 0x129023  negu        $s2, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x564808) {
            ctx->pc = 0x564820u;
            goto label_564820;
        }
    }
    ctx->pc = 0x564810u;
label_564810:
    // 0x564810: 0x2a4103e8  slti        $at, $s2, 0x3E8
    ctx->pc = 0x564810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1000) ? 1 : 0);
label_564814:
    // 0x564814: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_564818:
    if (ctx->pc == 0x564818u) {
        ctx->pc = 0x56481Cu;
        goto label_56481c;
    }
    ctx->pc = 0x564814u;
    {
        const bool branch_taken_0x564814 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x564814) {
            ctx->pc = 0x564820u;
            goto label_564820;
        }
    }
    ctx->pc = 0x56481Cu;
label_56481c:
    // 0x56481c: 0x241203e7  addiu       $s2, $zero, 0x3E7
    ctx->pc = 0x56481cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_564820:
    // 0x564820: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x564820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_564824:
    // 0x564824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x564824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564828:
    // 0x564828: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x564828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56482c:
    // 0x56482c: 0x4614d842  mul.s       $f1, $f27, $f20
    ctx->pc = 0x56482cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[20]);
label_564830:
    // 0x564830: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x564830u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_564834:
    // 0x564834: 0x24510060  addiu       $s1, $v0, 0x60
    ctx->pc = 0x564834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_564838:
    // 0x564838: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x564838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56483c:
    // 0x56483c: 0x46010602  mul.s       $f24, $f0, $f1
    ctx->pc = 0x56483cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_564840:
    // 0x564840: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x564840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_564844:
    // 0x564844: 0xc0506ac  jal         func_141AB0
label_564848:
    if (ctx->pc == 0x564848u) {
        ctx->pc = 0x564848u;
            // 0x564848: 0x4614d5c2  mul.s       $f23, $f26, $f20 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[26], ctx->f[20]);
        ctx->pc = 0x56484Cu;
        goto label_56484c;
    }
    ctx->pc = 0x564844u;
    SET_GPR_U32(ctx, 31, 0x56484Cu);
    ctx->pc = 0x564848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x564844u;
            // 0x564848: 0x4614d5c2  mul.s       $f23, $f26, $f20 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[26], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56484Cu; }
        if (ctx->pc != 0x56484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56484Cu; }
        if (ctx->pc != 0x56484Cu) { return; }
    }
    ctx->pc = 0x56484Cu;
label_56484c:
    // 0x56484c: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x56484cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_564850:
    // 0x564850: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x564850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_564854:
    // 0x564854: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x564854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_564858:
    // 0x564858: 0x320f809  jalr        $t9
label_56485c:
    if (ctx->pc == 0x56485Cu) {
        ctx->pc = 0x56485Cu;
            // 0x56485c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x564860u;
        goto label_564860;
    }
    ctx->pc = 0x564858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x564860u);
        ctx->pc = 0x56485Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564858u;
            // 0x56485c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x564860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x564860u; }
            if (ctx->pc != 0x564860u) { return; }
        }
        }
    }
    ctx->pc = 0x564860u;
label_564860:
    // 0x564860: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x564860u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564864:
    // 0x564864: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x564864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_564868:
    // 0x564868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x564868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_56486c:
    // 0x56486c: 0x87c80000  lh          $t0, 0x0($fp)
    ctx->pc = 0x56486cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
label_564870:
    // 0x564870: 0x87c30002  lh          $v1, 0x2($fp)
    ctx->pc = 0x564870u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_564874:
    // 0x564874: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x564874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_564878:
    // 0x564878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x564878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56487c:
    // 0x56487c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x56487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_564880:
    // 0x564880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x564880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_564884:
    // 0x564884: 0x46170501  sub.s       $f20, $f0, $f23
    ctx->pc = 0x564884u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
label_564888:
    // 0x564888: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x564888u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56488c:
    // 0x56488c: 0x0  nop
    ctx->pc = 0x56488cu;
    // NOP
label_564890:
    // 0x564890: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x564890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_564894:
    // 0x564894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x564894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_564898:
    // 0x564898: 0x0  nop
    ctx->pc = 0x564898u;
    // NOP
label_56489c:
    // 0x56489c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x56489cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5648a0:
    // 0x5648a0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5648a0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5648a4:
    // 0x5648a4: 0x0  nop
    ctx->pc = 0x5648a4u;
    // NOP
label_5648a8:
    // 0x5648a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5648a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5648ac:
    // 0x5648ac: 0x46180300  add.s       $f12, $f0, $f24
    ctx->pc = 0x5648acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_5648b0:
    // 0x5648b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5648b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5648b4:
    // 0x5648b4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x5648b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5648b8:
    // 0x5648b8: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x5648b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_5648bc:
    // 0x5648bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x5648bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_5648c0:
    // 0x5648c0: 0x46190b9c  madd.s      $f14, $f1, $f25
    ctx->pc = 0x5648c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[25]));
label_5648c4:
    // 0x5648c4: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x5648c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_5648c8:
    // 0x5648c8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x5648c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5648cc:
    // 0x5648cc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5648ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5648d0:
    // 0x5648d0: 0xc0bc284  jal         func_2F0A10
label_5648d4:
    if (ctx->pc == 0x5648D4u) {
        ctx->pc = 0x5648D4u;
            // 0x5648d4: 0x461903dc  madd.s      $f15, $f0, $f25 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[25]));
        ctx->pc = 0x5648D8u;
        goto label_5648d8;
    }
    ctx->pc = 0x5648D0u;
    SET_GPR_U32(ctx, 31, 0x5648D8u);
    ctx->pc = 0x5648D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5648D0u;
            // 0x5648d4: 0x461903dc  madd.s      $f15, $f0, $f25 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[25]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5648D8u; }
        if (ctx->pc != 0x5648D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5648D8u; }
        if (ctx->pc != 0x5648D8u) { return; }
    }
    ctx->pc = 0x5648D8u;
label_5648d8:
    // 0x5648d8: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x5648d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_5648dc:
    // 0x5648dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x5648dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_5648e0:
    // 0x5648e0: 0x320f809  jalr        $t9
label_5648e4:
    if (ctx->pc == 0x5648E4u) {
        ctx->pc = 0x5648E4u;
            // 0x5648e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5648E8u;
        goto label_5648e8;
    }
    ctx->pc = 0x5648E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5648E8u);
        ctx->pc = 0x5648E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5648E0u;
            // 0x5648e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5648E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5648E8u; }
            if (ctx->pc != 0x5648E8u) { return; }
        }
        }
    }
    ctx->pc = 0x5648E8u;
label_5648e8:
    // 0x5648e8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5648e8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5648ec:
    // 0x5648ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5648ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5648f0:
    // 0x5648f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x5648f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_5648f4:
    // 0x5648f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5648f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5648f8:
    // 0x5648f8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x5648f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_5648fc:
    // 0x5648fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x5648fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_564900:
    // 0x564900: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x564900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_564904:
    // 0x564904: 0x46170300  add.s       $f12, $f0, $f23
    ctx->pc = 0x564904u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_564908:
    // 0x564908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x564908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56490c:
    // 0x56490c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x56490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_564910:
    // 0x564910: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x564910u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_564914:
    // 0x564914: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x564914u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
label_564918:
    // 0x564918: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x564918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_56491c:
    // 0x56491c: 0xc15706c  jal         func_55C1B0
label_564920:
    if (ctx->pc == 0x564920u) {
        ctx->pc = 0x564920u;
            // 0x564920: 0x46190b5c  madd.s      $f13, $f1, $f25 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[25]));
        ctx->pc = 0x564924u;
        goto label_564924;
    }
    ctx->pc = 0x56491Cu;
    SET_GPR_U32(ctx, 31, 0x564924u);
    ctx->pc = 0x564920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56491Cu;
            // 0x564920: 0x46190b5c  madd.s      $f13, $f1, $f25 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[25]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564924u; }
        if (ctx->pc != 0x564924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x564924u; }
        if (ctx->pc != 0x564924u) { return; }
    }
    ctx->pc = 0x564924u;
label_564924:
    // 0x564924: 0x0  nop
    ctx->pc = 0x564924u;
    // NOP
label_564928:
    // 0x564928: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x564928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_56492c:
    // 0x56492c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x56492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_564930:
    // 0x564930: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x564930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_564934:
    // 0x564934: 0x320f809  jalr        $t9
label_564938:
    if (ctx->pc == 0x564938u) {
        ctx->pc = 0x564938u;
            // 0x564938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56493Cu;
        goto label_56493c;
    }
    ctx->pc = 0x564934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56493Cu);
        ctx->pc = 0x564938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564934u;
            // 0x564938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56493Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56493Cu; }
            if (ctx->pc != 0x56493Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56493Cu;
label_56493c:
    // 0x56493c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x56493cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_564940:
    // 0x564940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x564940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_564944:
    // 0x564944: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x564944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_564948:
    // 0x564948: 0x320f809  jalr        $t9
label_56494c:
    if (ctx->pc == 0x56494Cu) {
        ctx->pc = 0x56494Cu;
            // 0x56494c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x564950u;
        goto label_564950;
    }
    ctx->pc = 0x564948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x564950u);
        ctx->pc = 0x56494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564948u;
            // 0x56494c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x564950u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x564950u; }
            if (ctx->pc != 0x564950u) { return; }
        }
        }
    }
    ctx->pc = 0x564950u;
label_564950:
    // 0x564950: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x564950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_564954:
    // 0x564954: 0x2e630002  sltiu       $v1, $s3, 0x2
    ctx->pc = 0x564954u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_564958:
    // 0x564958: 0x5460ff29  bnel        $v1, $zero, . + 4 + (-0xD7 << 2)
label_56495c:
    if (ctx->pc == 0x56495Cu) {
        ctx->pc = 0x56495Cu;
            // 0x56495c: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x564960u;
        goto label_564960;
    }
    ctx->pc = 0x564958u;
    {
        const bool branch_taken_0x564958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x564958) {
            ctx->pc = 0x56495Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x564958u;
            // 0x56495c: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x564600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_564600;
        }
    }
    ctx->pc = 0x564960u;
label_564960:
    // 0x564960: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x564960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_564964:
    // 0x564964: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x564964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_564968:
    // 0x564968: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x564968u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_56496c:
    // 0x56496c: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x56496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_564970:
    // 0x564970: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x564970u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_564974:
    // 0x564974: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x564974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_564978:
    // 0x564978: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x564978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_56497c:
    // 0x56497c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x56497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_564980:
    // 0x564980: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x564980u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_564984:
    // 0x564984: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x564984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_564988:
    // 0x564988: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x564988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_56498c:
    // 0x56498c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x56498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_564990:
    // 0x564990: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x564990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_564994:
    // 0x564994: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x564994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_564998:
    // 0x564998: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x564998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_56499c:
    // 0x56499c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x56499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5649a0:
    // 0x5649a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x5649a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5649a4:
    // 0x5649a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x5649a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5649a8:
    // 0x5649a8: 0x3e00008  jr          $ra
label_5649ac:
    if (ctx->pc == 0x5649ACu) {
        ctx->pc = 0x5649ACu;
            // 0x5649ac: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x5649B0u;
        goto label_5649b0;
    }
    ctx->pc = 0x5649A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5649ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5649A8u;
            // 0x5649ac: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5649B0u;
label_5649b0:
    // 0x5649b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5649b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_5649b4:
    // 0x5649b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5649b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5649b8:
    // 0x5649b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5649b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_5649bc:
    // 0x5649bc: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x5649bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_5649c0:
    // 0x5649c0: 0x8ce30cb4  lw          $v1, 0xCB4($a3)
    ctx->pc = 0x5649c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
label_5649c4:
    // 0x5649c4: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x5649c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_5649c8:
    // 0x5649c8: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
label_5649cc:
    if (ctx->pc == 0x5649CCu) {
        ctx->pc = 0x5649CCu;
            // 0x5649cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x5649D0u;
        goto label_5649d0;
    }
    ctx->pc = 0x5649C8u;
    {
        const bool branch_taken_0x5649c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5649c8) {
            ctx->pc = 0x5649CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5649C8u;
            // 0x5649cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x564A40u;
            goto label_564a40;
        }
    }
    ctx->pc = 0x5649D0u;
label_5649d0:
    // 0x5649d0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5649d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5649d4:
    // 0x5649d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x5649d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5649d8:
    // 0x5649d8: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x5649d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_5649dc:
    // 0x5649dc: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x5649dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_5649e0:
    // 0x5649e0: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x5649e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5649e4:
    // 0x5649e4: 0x10c5000f  beq         $a2, $a1, . + 4 + (0xF << 2)
label_5649e8:
    if (ctx->pc == 0x5649E8u) {
        ctx->pc = 0x5649ECu;
        goto label_5649ec;
    }
    ctx->pc = 0x5649E4u;
    {
        const bool branch_taken_0x5649e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x5649e4) {
            ctx->pc = 0x564A24u;
            goto label_564a24;
        }
    }
    ctx->pc = 0x5649ECu;
label_5649ec:
    // 0x5649ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5649ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5649f0:
    // 0x5649f0: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_5649f4:
    if (ctx->pc == 0x5649F4u) {
        ctx->pc = 0x5649F4u;
            // 0x5649f4: 0x8ce50cb4  lw          $a1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->pc = 0x5649F8u;
        goto label_5649f8;
    }
    ctx->pc = 0x5649F0u;
    {
        const bool branch_taken_0x5649f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x5649f0) {
            ctx->pc = 0x5649F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5649F0u;
            // 0x5649f4: 0x8ce50cb4  lw          $a1, 0xCB4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x564A00u;
            goto label_564a00;
        }
    }
    ctx->pc = 0x5649F8u;
label_5649f8:
    // 0x5649f8: 0x1000000c  b           . + 4 + (0xC << 2)
label_5649fc:
    if (ctx->pc == 0x5649FCu) {
        ctx->pc = 0x564A00u;
        goto label_564a00;
    }
    ctx->pc = 0x5649F8u;
    {
        const bool branch_taken_0x5649f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5649f8) {
            ctx->pc = 0x564A2Cu;
            goto label_564a2c;
        }
    }
    ctx->pc = 0x564A00u;
label_564a00:
    // 0x564a00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x564a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_564a04:
    // 0x564a04: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_564a08:
    if (ctx->pc == 0x564A08u) {
        ctx->pc = 0x564A0Cu;
        goto label_564a0c;
    }
    ctx->pc = 0x564A04u;
    {
        const bool branch_taken_0x564a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x564a04) {
            ctx->pc = 0x564A2Cu;
            goto label_564a2c;
        }
    }
    ctx->pc = 0x564A0Cu;
label_564a0c:
    // 0x564a0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x564a0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_564a10:
    // 0x564a10: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x564a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_564a14:
    // 0x564a14: 0x320f809  jalr        $t9
label_564a18:
    if (ctx->pc == 0x564A18u) {
        ctx->pc = 0x564A1Cu;
        goto label_564a1c;
    }
    ctx->pc = 0x564A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x564A1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x564A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x564A1Cu; }
            if (ctx->pc != 0x564A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x564A1Cu;
label_564a1c:
    // 0x564a1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_564a20:
    if (ctx->pc == 0x564A20u) {
        ctx->pc = 0x564A24u;
        goto label_564a24;
    }
    ctx->pc = 0x564A1Cu;
    {
        const bool branch_taken_0x564a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x564a1c) {
            ctx->pc = 0x564A2Cu;
            goto label_564a2c;
        }
    }
    ctx->pc = 0x564A24u;
label_564a24:
    // 0x564a24: 0xc159158  jal         func_564560
label_564a28:
    if (ctx->pc == 0x564A28u) {
        ctx->pc = 0x564A2Cu;
        goto label_564a2c;
    }
    ctx->pc = 0x564A24u;
    SET_GPR_U32(ctx, 31, 0x564A2Cu);
    ctx->pc = 0x564560u;
    goto label_564560;
    ctx->pc = 0x564A2Cu;
label_564a2c:
    // 0x564a2c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x564a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_564a30:
    // 0x564a30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x564a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_564a34:
    // 0x564a34: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x564a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_564a38:
    // 0x564a38: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x564a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_564a3c:
    // 0x564a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x564a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_564a40:
    // 0x564a40: 0x3e00008  jr          $ra
label_564a44:
    if (ctx->pc == 0x564A44u) {
        ctx->pc = 0x564A44u;
            // 0x564a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x564A48u;
        goto label_564a48;
    }
    ctx->pc = 0x564A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x564A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x564A40u;
            // 0x564a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x564A48u;
label_564a48:
    // 0x564a48: 0x0  nop
    ctx->pc = 0x564a48u;
    // NOP
label_564a4c:
    // 0x564a4c: 0x0  nop
    ctx->pc = 0x564a4cu;
    // NOP
}
