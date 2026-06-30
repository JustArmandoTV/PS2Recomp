#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C62A0
// Address: 0x3c62a0 - 0x3c6790
void sub_003C62A0_0x3c62a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C62A0_0x3c62a0");
#endif

    switch (ctx->pc) {
        case 0x3c62a0u: goto label_3c62a0;
        case 0x3c62a4u: goto label_3c62a4;
        case 0x3c62a8u: goto label_3c62a8;
        case 0x3c62acu: goto label_3c62ac;
        case 0x3c62b0u: goto label_3c62b0;
        case 0x3c62b4u: goto label_3c62b4;
        case 0x3c62b8u: goto label_3c62b8;
        case 0x3c62bcu: goto label_3c62bc;
        case 0x3c62c0u: goto label_3c62c0;
        case 0x3c62c4u: goto label_3c62c4;
        case 0x3c62c8u: goto label_3c62c8;
        case 0x3c62ccu: goto label_3c62cc;
        case 0x3c62d0u: goto label_3c62d0;
        case 0x3c62d4u: goto label_3c62d4;
        case 0x3c62d8u: goto label_3c62d8;
        case 0x3c62dcu: goto label_3c62dc;
        case 0x3c62e0u: goto label_3c62e0;
        case 0x3c62e4u: goto label_3c62e4;
        case 0x3c62e8u: goto label_3c62e8;
        case 0x3c62ecu: goto label_3c62ec;
        case 0x3c62f0u: goto label_3c62f0;
        case 0x3c62f4u: goto label_3c62f4;
        case 0x3c62f8u: goto label_3c62f8;
        case 0x3c62fcu: goto label_3c62fc;
        case 0x3c6300u: goto label_3c6300;
        case 0x3c6304u: goto label_3c6304;
        case 0x3c6308u: goto label_3c6308;
        case 0x3c630cu: goto label_3c630c;
        case 0x3c6310u: goto label_3c6310;
        case 0x3c6314u: goto label_3c6314;
        case 0x3c6318u: goto label_3c6318;
        case 0x3c631cu: goto label_3c631c;
        case 0x3c6320u: goto label_3c6320;
        case 0x3c6324u: goto label_3c6324;
        case 0x3c6328u: goto label_3c6328;
        case 0x3c632cu: goto label_3c632c;
        case 0x3c6330u: goto label_3c6330;
        case 0x3c6334u: goto label_3c6334;
        case 0x3c6338u: goto label_3c6338;
        case 0x3c633cu: goto label_3c633c;
        case 0x3c6340u: goto label_3c6340;
        case 0x3c6344u: goto label_3c6344;
        case 0x3c6348u: goto label_3c6348;
        case 0x3c634cu: goto label_3c634c;
        case 0x3c6350u: goto label_3c6350;
        case 0x3c6354u: goto label_3c6354;
        case 0x3c6358u: goto label_3c6358;
        case 0x3c635cu: goto label_3c635c;
        case 0x3c6360u: goto label_3c6360;
        case 0x3c6364u: goto label_3c6364;
        case 0x3c6368u: goto label_3c6368;
        case 0x3c636cu: goto label_3c636c;
        case 0x3c6370u: goto label_3c6370;
        case 0x3c6374u: goto label_3c6374;
        case 0x3c6378u: goto label_3c6378;
        case 0x3c637cu: goto label_3c637c;
        case 0x3c6380u: goto label_3c6380;
        case 0x3c6384u: goto label_3c6384;
        case 0x3c6388u: goto label_3c6388;
        case 0x3c638cu: goto label_3c638c;
        case 0x3c6390u: goto label_3c6390;
        case 0x3c6394u: goto label_3c6394;
        case 0x3c6398u: goto label_3c6398;
        case 0x3c639cu: goto label_3c639c;
        case 0x3c63a0u: goto label_3c63a0;
        case 0x3c63a4u: goto label_3c63a4;
        case 0x3c63a8u: goto label_3c63a8;
        case 0x3c63acu: goto label_3c63ac;
        case 0x3c63b0u: goto label_3c63b0;
        case 0x3c63b4u: goto label_3c63b4;
        case 0x3c63b8u: goto label_3c63b8;
        case 0x3c63bcu: goto label_3c63bc;
        case 0x3c63c0u: goto label_3c63c0;
        case 0x3c63c4u: goto label_3c63c4;
        case 0x3c63c8u: goto label_3c63c8;
        case 0x3c63ccu: goto label_3c63cc;
        case 0x3c63d0u: goto label_3c63d0;
        case 0x3c63d4u: goto label_3c63d4;
        case 0x3c63d8u: goto label_3c63d8;
        case 0x3c63dcu: goto label_3c63dc;
        case 0x3c63e0u: goto label_3c63e0;
        case 0x3c63e4u: goto label_3c63e4;
        case 0x3c63e8u: goto label_3c63e8;
        case 0x3c63ecu: goto label_3c63ec;
        case 0x3c63f0u: goto label_3c63f0;
        case 0x3c63f4u: goto label_3c63f4;
        case 0x3c63f8u: goto label_3c63f8;
        case 0x3c63fcu: goto label_3c63fc;
        case 0x3c6400u: goto label_3c6400;
        case 0x3c6404u: goto label_3c6404;
        case 0x3c6408u: goto label_3c6408;
        case 0x3c640cu: goto label_3c640c;
        case 0x3c6410u: goto label_3c6410;
        case 0x3c6414u: goto label_3c6414;
        case 0x3c6418u: goto label_3c6418;
        case 0x3c641cu: goto label_3c641c;
        case 0x3c6420u: goto label_3c6420;
        case 0x3c6424u: goto label_3c6424;
        case 0x3c6428u: goto label_3c6428;
        case 0x3c642cu: goto label_3c642c;
        case 0x3c6430u: goto label_3c6430;
        case 0x3c6434u: goto label_3c6434;
        case 0x3c6438u: goto label_3c6438;
        case 0x3c643cu: goto label_3c643c;
        case 0x3c6440u: goto label_3c6440;
        case 0x3c6444u: goto label_3c6444;
        case 0x3c6448u: goto label_3c6448;
        case 0x3c644cu: goto label_3c644c;
        case 0x3c6450u: goto label_3c6450;
        case 0x3c6454u: goto label_3c6454;
        case 0x3c6458u: goto label_3c6458;
        case 0x3c645cu: goto label_3c645c;
        case 0x3c6460u: goto label_3c6460;
        case 0x3c6464u: goto label_3c6464;
        case 0x3c6468u: goto label_3c6468;
        case 0x3c646cu: goto label_3c646c;
        case 0x3c6470u: goto label_3c6470;
        case 0x3c6474u: goto label_3c6474;
        case 0x3c6478u: goto label_3c6478;
        case 0x3c647cu: goto label_3c647c;
        case 0x3c6480u: goto label_3c6480;
        case 0x3c6484u: goto label_3c6484;
        case 0x3c6488u: goto label_3c6488;
        case 0x3c648cu: goto label_3c648c;
        case 0x3c6490u: goto label_3c6490;
        case 0x3c6494u: goto label_3c6494;
        case 0x3c6498u: goto label_3c6498;
        case 0x3c649cu: goto label_3c649c;
        case 0x3c64a0u: goto label_3c64a0;
        case 0x3c64a4u: goto label_3c64a4;
        case 0x3c64a8u: goto label_3c64a8;
        case 0x3c64acu: goto label_3c64ac;
        case 0x3c64b0u: goto label_3c64b0;
        case 0x3c64b4u: goto label_3c64b4;
        case 0x3c64b8u: goto label_3c64b8;
        case 0x3c64bcu: goto label_3c64bc;
        case 0x3c64c0u: goto label_3c64c0;
        case 0x3c64c4u: goto label_3c64c4;
        case 0x3c64c8u: goto label_3c64c8;
        case 0x3c64ccu: goto label_3c64cc;
        case 0x3c64d0u: goto label_3c64d0;
        case 0x3c64d4u: goto label_3c64d4;
        case 0x3c64d8u: goto label_3c64d8;
        case 0x3c64dcu: goto label_3c64dc;
        case 0x3c64e0u: goto label_3c64e0;
        case 0x3c64e4u: goto label_3c64e4;
        case 0x3c64e8u: goto label_3c64e8;
        case 0x3c64ecu: goto label_3c64ec;
        case 0x3c64f0u: goto label_3c64f0;
        case 0x3c64f4u: goto label_3c64f4;
        case 0x3c64f8u: goto label_3c64f8;
        case 0x3c64fcu: goto label_3c64fc;
        case 0x3c6500u: goto label_3c6500;
        case 0x3c6504u: goto label_3c6504;
        case 0x3c6508u: goto label_3c6508;
        case 0x3c650cu: goto label_3c650c;
        case 0x3c6510u: goto label_3c6510;
        case 0x3c6514u: goto label_3c6514;
        case 0x3c6518u: goto label_3c6518;
        case 0x3c651cu: goto label_3c651c;
        case 0x3c6520u: goto label_3c6520;
        case 0x3c6524u: goto label_3c6524;
        case 0x3c6528u: goto label_3c6528;
        case 0x3c652cu: goto label_3c652c;
        case 0x3c6530u: goto label_3c6530;
        case 0x3c6534u: goto label_3c6534;
        case 0x3c6538u: goto label_3c6538;
        case 0x3c653cu: goto label_3c653c;
        case 0x3c6540u: goto label_3c6540;
        case 0x3c6544u: goto label_3c6544;
        case 0x3c6548u: goto label_3c6548;
        case 0x3c654cu: goto label_3c654c;
        case 0x3c6550u: goto label_3c6550;
        case 0x3c6554u: goto label_3c6554;
        case 0x3c6558u: goto label_3c6558;
        case 0x3c655cu: goto label_3c655c;
        case 0x3c6560u: goto label_3c6560;
        case 0x3c6564u: goto label_3c6564;
        case 0x3c6568u: goto label_3c6568;
        case 0x3c656cu: goto label_3c656c;
        case 0x3c6570u: goto label_3c6570;
        case 0x3c6574u: goto label_3c6574;
        case 0x3c6578u: goto label_3c6578;
        case 0x3c657cu: goto label_3c657c;
        case 0x3c6580u: goto label_3c6580;
        case 0x3c6584u: goto label_3c6584;
        case 0x3c6588u: goto label_3c6588;
        case 0x3c658cu: goto label_3c658c;
        case 0x3c6590u: goto label_3c6590;
        case 0x3c6594u: goto label_3c6594;
        case 0x3c6598u: goto label_3c6598;
        case 0x3c659cu: goto label_3c659c;
        case 0x3c65a0u: goto label_3c65a0;
        case 0x3c65a4u: goto label_3c65a4;
        case 0x3c65a8u: goto label_3c65a8;
        case 0x3c65acu: goto label_3c65ac;
        case 0x3c65b0u: goto label_3c65b0;
        case 0x3c65b4u: goto label_3c65b4;
        case 0x3c65b8u: goto label_3c65b8;
        case 0x3c65bcu: goto label_3c65bc;
        case 0x3c65c0u: goto label_3c65c0;
        case 0x3c65c4u: goto label_3c65c4;
        case 0x3c65c8u: goto label_3c65c8;
        case 0x3c65ccu: goto label_3c65cc;
        case 0x3c65d0u: goto label_3c65d0;
        case 0x3c65d4u: goto label_3c65d4;
        case 0x3c65d8u: goto label_3c65d8;
        case 0x3c65dcu: goto label_3c65dc;
        case 0x3c65e0u: goto label_3c65e0;
        case 0x3c65e4u: goto label_3c65e4;
        case 0x3c65e8u: goto label_3c65e8;
        case 0x3c65ecu: goto label_3c65ec;
        case 0x3c65f0u: goto label_3c65f0;
        case 0x3c65f4u: goto label_3c65f4;
        case 0x3c65f8u: goto label_3c65f8;
        case 0x3c65fcu: goto label_3c65fc;
        case 0x3c6600u: goto label_3c6600;
        case 0x3c6604u: goto label_3c6604;
        case 0x3c6608u: goto label_3c6608;
        case 0x3c660cu: goto label_3c660c;
        case 0x3c6610u: goto label_3c6610;
        case 0x3c6614u: goto label_3c6614;
        case 0x3c6618u: goto label_3c6618;
        case 0x3c661cu: goto label_3c661c;
        case 0x3c6620u: goto label_3c6620;
        case 0x3c6624u: goto label_3c6624;
        case 0x3c6628u: goto label_3c6628;
        case 0x3c662cu: goto label_3c662c;
        case 0x3c6630u: goto label_3c6630;
        case 0x3c6634u: goto label_3c6634;
        case 0x3c6638u: goto label_3c6638;
        case 0x3c663cu: goto label_3c663c;
        case 0x3c6640u: goto label_3c6640;
        case 0x3c6644u: goto label_3c6644;
        case 0x3c6648u: goto label_3c6648;
        case 0x3c664cu: goto label_3c664c;
        case 0x3c6650u: goto label_3c6650;
        case 0x3c6654u: goto label_3c6654;
        case 0x3c6658u: goto label_3c6658;
        case 0x3c665cu: goto label_3c665c;
        case 0x3c6660u: goto label_3c6660;
        case 0x3c6664u: goto label_3c6664;
        case 0x3c6668u: goto label_3c6668;
        case 0x3c666cu: goto label_3c666c;
        case 0x3c6670u: goto label_3c6670;
        case 0x3c6674u: goto label_3c6674;
        case 0x3c6678u: goto label_3c6678;
        case 0x3c667cu: goto label_3c667c;
        case 0x3c6680u: goto label_3c6680;
        case 0x3c6684u: goto label_3c6684;
        case 0x3c6688u: goto label_3c6688;
        case 0x3c668cu: goto label_3c668c;
        case 0x3c6690u: goto label_3c6690;
        case 0x3c6694u: goto label_3c6694;
        case 0x3c6698u: goto label_3c6698;
        case 0x3c669cu: goto label_3c669c;
        case 0x3c66a0u: goto label_3c66a0;
        case 0x3c66a4u: goto label_3c66a4;
        case 0x3c66a8u: goto label_3c66a8;
        case 0x3c66acu: goto label_3c66ac;
        case 0x3c66b0u: goto label_3c66b0;
        case 0x3c66b4u: goto label_3c66b4;
        case 0x3c66b8u: goto label_3c66b8;
        case 0x3c66bcu: goto label_3c66bc;
        case 0x3c66c0u: goto label_3c66c0;
        case 0x3c66c4u: goto label_3c66c4;
        case 0x3c66c8u: goto label_3c66c8;
        case 0x3c66ccu: goto label_3c66cc;
        case 0x3c66d0u: goto label_3c66d0;
        case 0x3c66d4u: goto label_3c66d4;
        case 0x3c66d8u: goto label_3c66d8;
        case 0x3c66dcu: goto label_3c66dc;
        case 0x3c66e0u: goto label_3c66e0;
        case 0x3c66e4u: goto label_3c66e4;
        case 0x3c66e8u: goto label_3c66e8;
        case 0x3c66ecu: goto label_3c66ec;
        case 0x3c66f0u: goto label_3c66f0;
        case 0x3c66f4u: goto label_3c66f4;
        case 0x3c66f8u: goto label_3c66f8;
        case 0x3c66fcu: goto label_3c66fc;
        case 0x3c6700u: goto label_3c6700;
        case 0x3c6704u: goto label_3c6704;
        case 0x3c6708u: goto label_3c6708;
        case 0x3c670cu: goto label_3c670c;
        case 0x3c6710u: goto label_3c6710;
        case 0x3c6714u: goto label_3c6714;
        case 0x3c6718u: goto label_3c6718;
        case 0x3c671cu: goto label_3c671c;
        case 0x3c6720u: goto label_3c6720;
        case 0x3c6724u: goto label_3c6724;
        case 0x3c6728u: goto label_3c6728;
        case 0x3c672cu: goto label_3c672c;
        case 0x3c6730u: goto label_3c6730;
        case 0x3c6734u: goto label_3c6734;
        case 0x3c6738u: goto label_3c6738;
        case 0x3c673cu: goto label_3c673c;
        case 0x3c6740u: goto label_3c6740;
        case 0x3c6744u: goto label_3c6744;
        case 0x3c6748u: goto label_3c6748;
        case 0x3c674cu: goto label_3c674c;
        case 0x3c6750u: goto label_3c6750;
        case 0x3c6754u: goto label_3c6754;
        case 0x3c6758u: goto label_3c6758;
        case 0x3c675cu: goto label_3c675c;
        case 0x3c6760u: goto label_3c6760;
        case 0x3c6764u: goto label_3c6764;
        case 0x3c6768u: goto label_3c6768;
        case 0x3c676cu: goto label_3c676c;
        case 0x3c6770u: goto label_3c6770;
        case 0x3c6774u: goto label_3c6774;
        case 0x3c6778u: goto label_3c6778;
        case 0x3c677cu: goto label_3c677c;
        case 0x3c6780u: goto label_3c6780;
        case 0x3c6784u: goto label_3c6784;
        case 0x3c6788u: goto label_3c6788;
        case 0x3c678cu: goto label_3c678c;
        default: break;
    }

    ctx->pc = 0x3c62a0u;

label_3c62a0:
    // 0x3c62a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c62a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3c62a4:
    // 0x3c62a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c62a8:
    // 0x3c62a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3c62a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3c62ac:
    // 0x3c62ac: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x3c62acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_3c62b0:
    // 0x3c62b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c62b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c62b4:
    // 0x3c62b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c62b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c62b8:
    // 0x3c62b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c62b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c62bc:
    // 0x3c62bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c62bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c62c0:
    // 0x3c62c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c62c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c62c4:
    // 0x3c62c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c62c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c62c8:
    // 0x3c62c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c62c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c62cc:
    // 0x3c62cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c62ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c62d0:
    // 0x3c62d0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3c62d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c62d4:
    // 0x3c62d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c62d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c62d8:
    // 0x3c62d8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3c62d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c62dc:
    // 0x3c62dc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3c62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3c62e0:
    // 0x3c62e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3c62e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c62e4:
    // 0x3c62e4: 0x8c550eac  lw          $s5, 0xEAC($v0)
    ctx->pc = 0x3c62e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3c62e8:
    // 0x3c62e8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3c62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3c62ec:
    // 0x3c62ec: 0x2a23021  addu        $a2, $s5, $v0
    ctx->pc = 0x3c62ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3c62f0:
    // 0x3c62f0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3c62f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_3c62f4:
    // 0x3c62f4: 0x8cc90094  lw          $t1, 0x94($a2)
    ctx->pc = 0x3c62f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_3c62f8:
    // 0x3c62f8: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3c62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_3c62fc:
    // 0x3c62fc: 0x8cc8009c  lw          $t0, 0x9C($a2)
    ctx->pc = 0x3c62fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
label_3c6300:
    // 0x3c6300: 0x8cc70098  lw          $a3, 0x98($a2)
    ctx->pc = 0x3c6300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
label_3c6304:
    // 0x3c6304: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x3c6304u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3c6308:
    // 0x3c6308: 0x8cc600a0  lw          $a2, 0xA0($a2)
    ctx->pc = 0x3c6308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
label_3c630c:
    // 0x3c630c: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x3c630cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
label_3c6310:
    // 0x3c6310: 0x128a021  addu        $s4, $t1, $t0
    ctx->pc = 0x3c6310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_3c6314:
    // 0x3c6314: 0xac8500a4  sw          $a1, 0xA4($a0)
    ctx->pc = 0x3c6314u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 5));
label_3c6318:
    // 0x3c6318: 0xac8300a8  sw          $v1, 0xA8($a0)
    ctx->pc = 0x3c6318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 3));
label_3c631c:
    // 0x3c631c: 0xc71823  subu        $v1, $a2, $a3
    ctx->pc = 0x3c631cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3c6320:
    // 0x3c6320: 0xac8200ac  sw          $v0, 0xAC($a0)
    ctx->pc = 0x3c6320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 2));
label_3c6324:
    // 0x3c6324: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x3c6324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_3c6328:
    // 0x3c6328: 0xe29821  addu        $s3, $a3, $v0
    ctx->pc = 0x3c6328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3c632c:
    // 0x3c632c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3c632cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_3c6330:
    // 0x3c6330: 0xa5400070  sh          $zero, 0x70($t2)
    ctx->pc = 0x3c6330u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 112), (uint16_t)GPR_U32(ctx, 0));
label_3c6334:
    // 0x3c6334: 0x29620009  slti        $v0, $t3, 0x9
    ctx->pc = 0x3c6334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
label_3c6338:
    // 0x3c6338: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x3c6338u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
label_3c633c:
    // 0x3c633c: 0x0  nop
    ctx->pc = 0x3c633cu;
    // NOP
label_3c6340:
    // 0x3c6340: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3c6344:
    if (ctx->pc == 0x3C6344u) {
        ctx->pc = 0x3C6348u;
        goto label_3c6348;
    }
    ctx->pc = 0x3C6340u;
    {
        const bool branch_taken_0x3c6340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6340) {
            ctx->pc = 0x3C632Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c632c;
        }
    }
    ctx->pc = 0x3C6348u;
label_3c6348:
    // 0x3c6348: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3c6348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c634c:
    // 0x3c634c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c6350:
    // 0x3c6350: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c6350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c6354:
    // 0x3c6354: 0x320f809  jalr        $t9
label_3c6358:
    if (ctx->pc == 0x3C6358u) {
        ctx->pc = 0x3C6358u;
            // 0x3c6358: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C635Cu;
        goto label_3c635c;
    }
    ctx->pc = 0x3C6354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C635Cu);
        ctx->pc = 0x3C6358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6354u;
            // 0x3c6358: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C635Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C635Cu; }
            if (ctx->pc != 0x3C635Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C635Cu;
label_3c635c:
    // 0x3c635c: 0x924300c0  lbu         $v1, 0xC0($s2)
    ctx->pc = 0x3c635cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c6360:
    // 0x3c6360: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3c6364:
    if (ctx->pc == 0x3C6364u) {
        ctx->pc = 0x3C6364u;
            // 0x3c6364: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3C6368u;
        goto label_3c6368;
    }
    ctx->pc = 0x3C6360u;
    {
        const bool branch_taken_0x3c6360 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3c6360) {
            ctx->pc = 0x3C6364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6360u;
            // 0x3c6364: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6374u;
            goto label_3c6374;
        }
    }
    ctx->pc = 0x3C6368u;
label_3c6368:
    // 0x3c6368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c6368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c636c:
    // 0x3c636c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c6370:
    if (ctx->pc == 0x3C6370u) {
        ctx->pc = 0x3C6370u;
            // 0x3c6370: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C6374u;
        goto label_3c6374;
    }
    ctx->pc = 0x3C636Cu;
    {
        const bool branch_taken_0x3c636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C636Cu;
            // 0x3c6370: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c636c) {
            ctx->pc = 0x3C638Cu;
            goto label_3c638c;
        }
    }
    ctx->pc = 0x3C6374u;
label_3c6374:
    // 0x3c6374: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c6374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3c6378:
    // 0x3c6378: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c6378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c637c:
    // 0x3c637c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c637cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6380:
    // 0x3c6380: 0x0  nop
    ctx->pc = 0x3c6380u;
    // NOP
label_3c6384:
    // 0x3c6384: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c6384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c6388:
    // 0x3c6388: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c6388u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c638c:
    // 0x3c638c: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x3c638cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
label_3c6390:
    // 0x3c6390: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c6390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6394:
    // 0x3c6394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c6394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6398:
    // 0x3c6398: 0x0  nop
    ctx->pc = 0x3c6398u;
    // NOP
label_3c639c:
    // 0x3c639c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3c639cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3c63a0:
    // 0x3c63a0: 0xe64000a0  swc1        $f0, 0xA0($s2)
    ctx->pc = 0x3c63a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
label_3c63a4:
    // 0x3c63a4: 0x924500c0  lbu         $a1, 0xC0($s2)
    ctx->pc = 0x3c63a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c63a8:
    // 0x3c63a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c63a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c63ac:
    // 0x3c63ac: 0x924800c1  lbu         $t0, 0xC1($s2)
    ctx->pc = 0x3c63acu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 193)));
label_3c63b0:
    // 0x3c63b0: 0x8e4700b0  lw          $a3, 0xB0($s2)
    ctx->pc = 0x3c63b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3c63b4:
    // 0x3c63b4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3c63b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3c63b8:
    // 0x3c63b8: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x3c63b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c63bc:
    // 0x3c63bc: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3c63bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3c63c0:
    // 0x3c63c0: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x3c63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3c63c4:
    // 0x3c63c4: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x3c63c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
label_3c63c8:
    // 0x3c63c8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3c63c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_3c63cc:
    // 0x3c63cc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3c63ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3c63d0:
    // 0x3c63d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c63d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c63d4:
    // 0x3c63d4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x3c63d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c63d8:
    // 0x3c63d8: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_3c63dc:
    if (ctx->pc == 0x3C63DCu) {
        ctx->pc = 0x3C63DCu;
            // 0x3c63dc: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x3C63E0u;
        goto label_3c63e0;
    }
    ctx->pc = 0x3C63D8u;
    {
        const bool branch_taken_0x3c63d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C63DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C63D8u;
            // 0x3c63dc: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c63d8) {
            ctx->pc = 0x3C63E8u;
            goto label_3c63e8;
        }
    }
    ctx->pc = 0x3C63E0u;
label_3c63e0:
    // 0x3c63e0: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x3c63e0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_3c63e4:
    // 0x3c63e4: 0x0  nop
    ctx->pc = 0x3c63e4u;
    // NOP
label_3c63e8:
    // 0x3c63e8: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x3c63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_3c63ec:
    // 0x3c63ec: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3c63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_3c63f0:
    // 0x3c63f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3c63f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3c63f4:
    // 0x3c63f4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3c63f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c63f8:
    // 0x3c63f8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3c63f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3c63fc:
    // 0x3c63fc: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x3c63fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3c6400:
    // 0x3c6400: 0x126182a  slt         $v1, $t1, $a2
    ctx->pc = 0x3c6400u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3c6404:
    // 0x3c6404: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_3c6408:
    if (ctx->pc == 0x3C6408u) {
        ctx->pc = 0x3C6408u;
            // 0x3c6408: 0x46040d1c  madd.s      $f20, $f1, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->pc = 0x3C640Cu;
        goto label_3c640c;
    }
    ctx->pc = 0x3C6404u;
    {
        const bool branch_taken_0x3c6404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6404u;
            // 0x3c6408: 0x46040d1c  madd.s      $f20, $f1, $f4 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6404) {
            ctx->pc = 0x3C63D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c63d8;
        }
    }
    ctx->pc = 0x3C640Cu;
label_3c640c:
    // 0x3c640c: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_3c6410:
    if (ctx->pc == 0x3C6410u) {
        ctx->pc = 0x3C6410u;
            // 0x3c6410: 0x8ea50110  lw          $a1, 0x110($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
        ctx->pc = 0x3C6414u;
        goto label_3c6414;
    }
    ctx->pc = 0x3C640Cu;
    {
        const bool branch_taken_0x3c640c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c640c) {
            ctx->pc = 0x3C6410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C640Cu;
            // 0x3c6410: 0x8ea50110  lw          $a1, 0x110($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C643Cu;
            goto label_3c643c;
        }
    }
    ctx->pc = 0x3C6414u;
label_3c6414:
    // 0x3c6414: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x3c6414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3c6418:
    // 0x3c6418: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3c6418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3c641c:
    // 0x3c641c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3c641cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3c6420:
    // 0x3c6420: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x3c6420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_3c6424:
    // 0x3c6424: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3c6424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c6428:
    // 0x3c6428: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x3c6428u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3c642c:
    // 0x3c642c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c642cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6430:
    // 0x3c6430: 0x0  nop
    ctx->pc = 0x3c6430u;
    // NOP
label_3c6434:
    // 0x3c6434: 0x4601051c  madd.s      $f20, $f0, $f1
    ctx->pc = 0x3c6434u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_3c6438:
    // 0x3c6438: 0x8ea50110  lw          $a1, 0x110($s5)
    ctx->pc = 0x3c6438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 272)));
label_3c643c:
    // 0x3c643c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c6440:
    // 0x3c6440: 0x50a3007b  beql        $a1, $v1, . + 4 + (0x7B << 2)
label_3c6444:
    if (ctx->pc == 0x3C6444u) {
        ctx->pc = 0x3C6444u;
            // 0x3c6444: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x3C6448u;
        goto label_3c6448;
    }
    ctx->pc = 0x3C6440u;
    {
        const bool branch_taken_0x3c6440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c6440) {
            ctx->pc = 0x3C6444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6440u;
            // 0x3c6444: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6630u;
            goto label_3c6630;
        }
    }
    ctx->pc = 0x3C6448u;
label_3c6448:
    // 0x3c6448: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c6448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c644c:
    // 0x3c644c: 0x10a30077  beq         $a1, $v1, . + 4 + (0x77 << 2)
label_3c6450:
    if (ctx->pc == 0x3C6450u) {
        ctx->pc = 0x3C6454u;
        goto label_3c6454;
    }
    ctx->pc = 0x3C644Cu;
    {
        const bool branch_taken_0x3c644c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c644c) {
            ctx->pc = 0x3C662Cu;
            goto label_3c662c;
        }
    }
    ctx->pc = 0x3C6454u;
label_3c6454:
    // 0x3c6454: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c6454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c6458:
    // 0x3c6458: 0x50a3003a  beql        $a1, $v1, . + 4 + (0x3A << 2)
label_3c645c:
    if (ctx->pc == 0x3C645Cu) {
        ctx->pc = 0x3C645Cu;
            // 0x3c645c: 0x3c05404c  lui         $a1, 0x404C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16460 << 16));
        ctx->pc = 0x3C6460u;
        goto label_3c6460;
    }
    ctx->pc = 0x3C6458u;
    {
        const bool branch_taken_0x3c6458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c6458) {
            ctx->pc = 0x3C645Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6458u;
            // 0x3c645c: 0x3c05404c  lui         $a1, 0x404C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16460 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6544u;
            goto label_3c6544;
        }
    }
    ctx->pc = 0x3C6460u;
label_3c6460:
    // 0x3c6460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c6460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6464:
    // 0x3c6464: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3c6468:
    if (ctx->pc == 0x3C6468u) {
        ctx->pc = 0x3C6468u;
            // 0x3c6468: 0x3c05404c  lui         $a1, 0x404C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16460 << 16));
        ctx->pc = 0x3C646Cu;
        goto label_3c646c;
    }
    ctx->pc = 0x3C6464u;
    {
        const bool branch_taken_0x3c6464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c6464) {
            ctx->pc = 0x3C6468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6464u;
            // 0x3c6468: 0x3c05404c  lui         $a1, 0x404C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16460 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6474u;
            goto label_3c6474;
        }
    }
    ctx->pc = 0x3C646Cu;
label_3c646c:
    // 0x3c646c: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_3c6470:
    if (ctx->pc == 0x3C6470u) {
        ctx->pc = 0x3C6470u;
            // 0x3c6470: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3C6474u;
        goto label_3c6474;
    }
    ctx->pc = 0x3C646Cu;
    {
        const bool branch_taken_0x3c646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C646Cu;
            // 0x3c6470: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c646c) {
            ctx->pc = 0x3C670Cu;
            goto label_3c670c;
        }
    }
    ctx->pc = 0x3C6474u;
label_3c6474:
    // 0x3c6474: 0x3c034019  lui         $v1, 0x4019
    ctx->pc = 0x3c6474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16409 << 16));
label_3c6478:
    // 0x3c6478: 0x34a6cccd  ori         $a2, $a1, 0xCCCD
    ctx->pc = 0x3c6478u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_3c647c:
    // 0x3c647c: 0x2410ffb0  addiu       $s0, $zero, -0x50
    ctx->pc = 0x3c647cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967216));
label_3c6480:
    // 0x3c6480: 0x3465999a  ori         $a1, $v1, 0x999A
    ctx->pc = 0x3c6480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_3c6484:
    // 0x3c6484: 0xae460098  sw          $a2, 0x98($s2)
    ctx->pc = 0x3c6484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 6));
label_3c6488:
    // 0x3c6488: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x3c6488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
label_3c648c:
    // 0x3c648c: 0xae45009c  sw          $a1, 0x9C($s2)
    ctx->pc = 0x3c648cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 5));
label_3c6490:
    // 0x3c6490: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x3c6490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_3c6494:
    // 0x3c6494: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c6494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6498:
    // 0x3c6498: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x3c6498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
label_3c649c:
    // 0x3c649c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3c649cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c64a0:
    // 0x3c64a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3c64a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c64a4:
    // 0x3c64a4: 0x924500c0  lbu         $a1, 0xC0($s2)
    ctx->pc = 0x3c64a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c64a8:
    // 0x3c64a8: 0x53843  sra         $a3, $a1, 1
    ctx->pc = 0x3c64a8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 1));
label_3c64ac:
    // 0x3c64ac: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x3c64acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_3c64b0:
    // 0x3c64b0: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x3c64b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3c64b4:
    // 0x3c64b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c64b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c64b8:
    // 0x3c64b8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3c64b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3c64bc:
    // 0x3c64bc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3c64bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3c64c0:
    // 0x3c64c0: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x3c64c0u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c64c4:
    // 0x3c64c4: 0x2812  mflo        $a1
    ctx->pc = 0x3c64c4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_3c64c8:
    // 0x3c64c8: 0xa5050082  sh          $a1, 0x82($t0)
    ctx->pc = 0x3c64c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 130), (uint16_t)GPR_U32(ctx, 5));
label_3c64cc:
    // 0x3c64cc: 0x924500c0  lbu         $a1, 0xC0($s2)
    ctx->pc = 0x3c64ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c64d0:
    // 0x3c64d0: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x3c64d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3c64d4:
    // 0x3c64d4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3c64d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_3c64d8:
    // 0x3c64d8: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x3c64d8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c64dc:
    // 0x3c64dc: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_3c64e0:
    if (ctx->pc == 0x3C64E0u) {
        ctx->pc = 0x3C64E0u;
            // 0x3c64e0: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x3C64E4u;
        goto label_3c64e4;
    }
    ctx->pc = 0x3C64DCu;
    {
        const bool branch_taken_0x3c64dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C64E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C64DCu;
            // 0x3c64e0: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c64dc) {
            ctx->pc = 0x3C64A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c64a4;
        }
    }
    ctx->pc = 0x3C64E4u;
label_3c64e4:
    // 0x3c64e4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3c64e8:
    if (ctx->pc == 0x3C64E8u) {
        ctx->pc = 0x3C64E8u;
            // 0x3c64e8: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3C64ECu;
        goto label_3c64ec;
    }
    ctx->pc = 0x3C64E4u;
    {
        const bool branch_taken_0x3c64e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c64e4) {
            ctx->pc = 0x3C64E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C64E4u;
            // 0x3c64e8: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C6500u;
            goto label_3c6500;
        }
    }
    ctx->pc = 0x3C64ECu;
label_3c64ec:
    // 0x3c64ec: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3c64ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3c64f0:
    // 0x3c64f0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3c64f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3c64f4:
    // 0x3c64f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c64f8:
    // 0x3c64f8: 0xa4800082  sh          $zero, 0x82($a0)
    ctx->pc = 0x3c64f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 0));
label_3c64fc:
    // 0x3c64fc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3c64fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3c6500:
    // 0x3c6500: 0x2443821  addu        $a3, $s2, $a0
    ctx->pc = 0x3c6500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3c6504:
    // 0x3c6504: 0x924400c0  lbu         $a0, 0xC0($s2)
    ctx->pc = 0x3c6504u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c6508:
    // 0x3c6508: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x3c6508u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
label_3c650c:
    // 0x3c650c: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x3c650cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3c6510:
    // 0x3c6510: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x3c6510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3c6514:
    // 0x3c6514: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c6514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c6518:
    // 0x3c6518: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x3c6518u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3c651c:
    // 0x3c651c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3c651cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3c6520:
    // 0x3c6520: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x3c6520u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c6524:
    // 0x3c6524: 0x2012  mflo        $a0
    ctx->pc = 0x3c6524u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3c6528:
    // 0x3c6528: 0xa4e40082  sh          $a0, 0x82($a3)
    ctx->pc = 0x3c6528u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 130), (uint16_t)GPR_U32(ctx, 4));
label_3c652c:
    // 0x3c652c: 0x924400c0  lbu         $a0, 0xC0($s2)
    ctx->pc = 0x3c652cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c6530:
    // 0x3c6530: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x3c6530u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c6534:
    // 0x3c6534: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_3c6538:
    if (ctx->pc == 0x3C6538u) {
        ctx->pc = 0x3C6538u;
            // 0x3c6538: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x3C653Cu;
        goto label_3c653c;
    }
    ctx->pc = 0x3C6534u;
    {
        const bool branch_taken_0x3c6534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6534u;
            // 0x3c6538: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6534) {
            ctx->pc = 0x3C6504u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c6504;
        }
    }
    ctx->pc = 0x3C653Cu;
label_3c653c:
    // 0x3c653c: 0x10000077  b           . + 4 + (0x77 << 2)
label_3c6540:
    if (ctx->pc == 0x3C6540u) {
        ctx->pc = 0x3C6544u;
        goto label_3c6544;
    }
    ctx->pc = 0x3C653Cu;
    {
        const bool branch_taken_0x3c653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c653c) {
            ctx->pc = 0x3C671Cu;
            goto label_3c671c;
        }
    }
    ctx->pc = 0x3C6544u;
label_3c6544:
    // 0x3c6544: 0x3c034019  lui         $v1, 0x4019
    ctx->pc = 0x3c6544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16409 << 16));
label_3c6548:
    // 0x3c6548: 0x34a6cccd  ori         $a2, $a1, 0xCCCD
    ctx->pc = 0x3c6548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_3c654c:
    // 0x3c654c: 0x3465999a  ori         $a1, $v1, 0x999A
    ctx->pc = 0x3c654cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_3c6550:
    // 0x3c6550: 0xae460098  sw          $a2, 0x98($s2)
    ctx->pc = 0x3c6550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 6));
label_3c6554:
    // 0x3c6554: 0x3c033fe6  lui         $v1, 0x3FE6
    ctx->pc = 0x3c6554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16358 << 16));
label_3c6558:
    // 0x3c6558: 0xae45009c  sw          $a1, 0x9C($s2)
    ctx->pc = 0x3c6558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 5));
label_3c655c:
    // 0x3c655c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x3c655cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_3c6560:
    // 0x3c6560: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x3c6560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
label_3c6564:
    // 0x3c6564: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x3c6564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3c6568:
    // 0x3c6568: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c6568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3c656c:
    // 0x3c656c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3c6570:
    if (ctx->pc == 0x3C6570u) {
        ctx->pc = 0x3C6570u;
            // 0x3c6570: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3C6574u;
        goto label_3c6574;
    }
    ctx->pc = 0x3C656Cu;
    {
        const bool branch_taken_0x3c656c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C656Cu;
            // 0x3c6570: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c656c) {
            ctx->pc = 0x3C657Cu;
            goto label_3c657c;
        }
    }
    ctx->pc = 0x3C6574u;
label_3c6574:
    // 0x3c6574: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c6578:
    if (ctx->pc == 0x3C6578u) {
        ctx->pc = 0x3C6578u;
            // 0x3c6578: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3C657Cu;
        goto label_3c657c;
    }
    ctx->pc = 0x3C6574u;
    {
        const bool branch_taken_0x3c6574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6574u;
            // 0x3c6578: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6574) {
            ctx->pc = 0x3C6580u;
            goto label_3c6580;
        }
    }
    ctx->pc = 0x3C657Cu;
label_3c657c:
    // 0x3c657c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3c657cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6580:
    // 0x3c6580: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3c6580u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6584:
    // 0x3c6584: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3c6584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c6588:
    // 0x3c6588: 0x924500c0  lbu         $a1, 0xC0($s2)
    ctx->pc = 0x3c6588u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c658c:
    // 0x3c658c: 0x53843  sra         $a3, $a1, 1
    ctx->pc = 0x3c658cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 1));
label_3c6590:
    // 0x3c6590: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x3c6590u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_3c6594:
    // 0x3c6594: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3c6594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3c6598:
    // 0x3c6598: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c6598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c659c:
    // 0x3c659c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3c659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3c65a0:
    // 0x3c65a0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3c65a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3c65a4:
    // 0x3c65a4: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x3c65a4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c65a8:
    // 0x3c65a8: 0x2812  mflo        $a1
    ctx->pc = 0x3c65a8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_3c65ac:
    // 0x3c65ac: 0xa5050082  sh          $a1, 0x82($t0)
    ctx->pc = 0x3c65acu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 130), (uint16_t)GPR_U32(ctx, 5));
label_3c65b0:
    // 0x3c65b0: 0x924500c0  lbu         $a1, 0xC0($s2)
    ctx->pc = 0x3c65b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c65b4:
    // 0x3c65b4: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x3c65b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3c65b8:
    // 0x3c65b8: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3c65b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_3c65bc:
    // 0x3c65bc: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x3c65bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c65c0:
    // 0x3c65c0: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_3c65c4:
    if (ctx->pc == 0x3C65C4u) {
        ctx->pc = 0x3C65C4u;
            // 0x3c65c4: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x3C65C8u;
        goto label_3c65c8;
    }
    ctx->pc = 0x3C65C0u;
    {
        const bool branch_taken_0x3c65c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C65C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C65C0u;
            // 0x3c65c4: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c65c0) {
            ctx->pc = 0x3C6588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c6588;
        }
    }
    ctx->pc = 0x3C65C8u;
label_3c65c8:
    // 0x3c65c8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3c65cc:
    if (ctx->pc == 0x3C65CCu) {
        ctx->pc = 0x3C65CCu;
            // 0x3c65cc: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3C65D0u;
        goto label_3c65d0;
    }
    ctx->pc = 0x3C65C8u;
    {
        const bool branch_taken_0x3c65c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c65c8) {
            ctx->pc = 0x3C65CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C65C8u;
            // 0x3c65cc: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C65E4u;
            goto label_3c65e4;
        }
    }
    ctx->pc = 0x3C65D0u;
label_3c65d0:
    // 0x3c65d0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3c65d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3c65d4:
    // 0x3c65d4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3c65d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3c65d8:
    // 0x3c65d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c65dc:
    // 0x3c65dc: 0xa4800082  sh          $zero, 0x82($a0)
    ctx->pc = 0x3c65dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 0));
label_3c65e0:
    // 0x3c65e0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3c65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3c65e4:
    // 0x3c65e4: 0x2443821  addu        $a3, $s2, $a0
    ctx->pc = 0x3c65e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3c65e8:
    // 0x3c65e8: 0x924400c0  lbu         $a0, 0xC0($s2)
    ctx->pc = 0x3c65e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c65ec:
    // 0x3c65ec: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x3c65ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
label_3c65f0:
    // 0x3c65f0: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x3c65f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3c65f4:
    // 0x3c65f4: 0x52023  negu        $a0, $a1
    ctx->pc = 0x3c65f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_3c65f8:
    // 0x3c65f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c65fc:
    // 0x3c65fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3c65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3c6600:
    // 0x3c6600: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3c6600u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3c6604:
    // 0x3c6604: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3c6604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3c6608:
    // 0x3c6608: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x3c6608u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c660c:
    // 0x3c660c: 0x2012  mflo        $a0
    ctx->pc = 0x3c660cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3c6610:
    // 0x3c6610: 0xa4e40082  sh          $a0, 0x82($a3)
    ctx->pc = 0x3c6610u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 130), (uint16_t)GPR_U32(ctx, 4));
label_3c6614:
    // 0x3c6614: 0x924400c0  lbu         $a0, 0xC0($s2)
    ctx->pc = 0x3c6614u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c6618:
    // 0x3c6618: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x3c6618u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c661c:
    // 0x3c661c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
label_3c6620:
    if (ctx->pc == 0x3C6620u) {
        ctx->pc = 0x3C6620u;
            // 0x3c6620: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x3C6624u;
        goto label_3c6624;
    }
    ctx->pc = 0x3C661Cu;
    {
        const bool branch_taken_0x3c661c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C661Cu;
            // 0x3c6620: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c661c) {
            ctx->pc = 0x3C65E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c65e8;
        }
    }
    ctx->pc = 0x3C6624u;
label_3c6624:
    // 0x3c6624: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3c6628:
    if (ctx->pc == 0x3C6628u) {
        ctx->pc = 0x3C662Cu;
        goto label_3c662c;
    }
    ctx->pc = 0x3C6624u;
    {
        const bool branch_taken_0x3c6624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6624) {
            ctx->pc = 0x3C671Cu;
            goto label_3c671c;
        }
    }
    ctx->pc = 0x3C662Cu;
label_3c662c:
    // 0x3c662c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3c662cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_3c6630:
    // 0x3c6630: 0x3c033fcc  lui         $v1, 0x3FCC
    ctx->pc = 0x3c6630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16332 << 16));
label_3c6634:
    // 0x3c6634: 0xae450098  sw          $a1, 0x98($s2)
    ctx->pc = 0x3c6634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 5));
label_3c6638:
    // 0x3c6638: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3c6638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3c663c:
    // 0x3c663c: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x3c663cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_3c6640:
    // 0x3c6640: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c6640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3c6644:
    // 0x3c6644: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x3c6644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
label_3c6648:
    // 0x3c6648: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x3c6648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3c664c:
    // 0x3c664c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3c664cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3c6650:
    // 0x3c6650: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3c6654:
    if (ctx->pc == 0x3C6654u) {
        ctx->pc = 0x3C6654u;
            // 0x3c6654: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3C6658u;
        goto label_3c6658;
    }
    ctx->pc = 0x3C6650u;
    {
        const bool branch_taken_0x3c6650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6650u;
            // 0x3c6654: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6650) {
            ctx->pc = 0x3C6660u;
            goto label_3c6660;
        }
    }
    ctx->pc = 0x3C6658u;
label_3c6658:
    // 0x3c6658: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c665c:
    if (ctx->pc == 0x3C665Cu) {
        ctx->pc = 0x3C665Cu;
            // 0x3c665c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3C6660u;
        goto label_3c6660;
    }
    ctx->pc = 0x3C6658u;
    {
        const bool branch_taken_0x3c6658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C665Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6658u;
            // 0x3c665c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6658) {
            ctx->pc = 0x3C6664u;
            goto label_3c6664;
        }
    }
    ctx->pc = 0x3C6660u;
label_3c6660:
    // 0x3c6660: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3c6660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c6664:
    // 0x3c6664: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3c6664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6668:
    // 0x3c6668: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3c6668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c666c:
    // 0x3c666c: 0x924500c0  lbu         $a1, 0xC0($s2)
    ctx->pc = 0x3c666cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c6670:
    // 0x3c6670: 0x53843  sra         $a3, $a1, 1
    ctx->pc = 0x3c6670u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 1));
label_3c6674:
    // 0x3c6674: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x3c6674u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_3c6678:
    // 0x3c6678: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x3c6678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3c667c:
    // 0x3c667c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c6680:
    // 0x3c6680: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3c6680u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3c6684:
    // 0x3c6684: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3c6684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3c6688:
    // 0x3c6688: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x3c6688u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c668c:
    // 0x3c668c: 0x2812  mflo        $a1
    ctx->pc = 0x3c668cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_3c6690:
    // 0x3c6690: 0xa5050082  sh          $a1, 0x82($t0)
    ctx->pc = 0x3c6690u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 130), (uint16_t)GPR_U32(ctx, 5));
label_3c6694:
    // 0x3c6694: 0x924500c0  lbu         $a1, 0xC0($s2)
    ctx->pc = 0x3c6694u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c6698:
    // 0x3c6698: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x3c6698u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3c669c:
    // 0x3c669c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3c669cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_3c66a0:
    // 0x3c66a0: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x3c66a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c66a4:
    // 0x3c66a4: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_3c66a8:
    if (ctx->pc == 0x3C66A8u) {
        ctx->pc = 0x3C66A8u;
            // 0x3c66a8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->pc = 0x3C66ACu;
        goto label_3c66ac;
    }
    ctx->pc = 0x3C66A4u;
    {
        const bool branch_taken_0x3c66a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C66A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C66A4u;
            // 0x3c66a8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c66a4) {
            ctx->pc = 0x3C666Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c666c;
        }
    }
    ctx->pc = 0x3C66ACu;
label_3c66ac:
    // 0x3c66ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3c66b0:
    if (ctx->pc == 0x3C66B0u) {
        ctx->pc = 0x3C66B0u;
            // 0x3c66b0: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3C66B4u;
        goto label_3c66b4;
    }
    ctx->pc = 0x3C66ACu;
    {
        const bool branch_taken_0x3c66ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c66ac) {
            ctx->pc = 0x3C66B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C66ACu;
            // 0x3c66b0: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C66C8u;
            goto label_3c66c8;
        }
    }
    ctx->pc = 0x3C66B4u;
label_3c66b4:
    // 0x3c66b4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3c66b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3c66b8:
    // 0x3c66b8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x3c66b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_3c66bc:
    // 0x3c66bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c66c0:
    // 0x3c66c0: 0xa4800082  sh          $zero, 0x82($a0)
    ctx->pc = 0x3c66c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 130), (uint16_t)GPR_U32(ctx, 0));
label_3c66c4:
    // 0x3c66c4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3c66c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3c66c8:
    // 0x3c66c8: 0x2443821  addu        $a3, $s2, $a0
    ctx->pc = 0x3c66c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3c66cc:
    // 0x3c66cc: 0x924400c0  lbu         $a0, 0xC0($s2)
    ctx->pc = 0x3c66ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c66d0:
    // 0x3c66d0: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x3c66d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
label_3c66d4:
    // 0x3c66d4: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x3c66d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3c66d8:
    // 0x3c66d8: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x3c66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3c66dc:
    // 0x3c66dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c66e0:
    // 0x3c66e0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x3c66e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3c66e4:
    // 0x3c66e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3c66e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3c66e8:
    // 0x3c66e8: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x3c66e8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3c66ec:
    // 0x3c66ec: 0x2012  mflo        $a0
    ctx->pc = 0x3c66ecu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3c66f0:
    // 0x3c66f0: 0xa4e40082  sh          $a0, 0x82($a3)
    ctx->pc = 0x3c66f0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 130), (uint16_t)GPR_U32(ctx, 4));
label_3c66f4:
    // 0x3c66f4: 0x924400c0  lbu         $a0, 0xC0($s2)
    ctx->pc = 0x3c66f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3c66f8:
    // 0x3c66f8: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x3c66f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c66fc:
    // 0x3c66fc: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_3c6700:
    if (ctx->pc == 0x3C6700u) {
        ctx->pc = 0x3C6700u;
            // 0x3c6700: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x3C6704u;
        goto label_3c6704;
    }
    ctx->pc = 0x3C66FCu;
    {
        const bool branch_taken_0x3c66fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C66FCu;
            // 0x3c6700: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c66fc) {
            ctx->pc = 0x3C66CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3c66cc;
        }
    }
    ctx->pc = 0x3C6704u;
label_3c6704:
    // 0x3c6704: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c6708:
    if (ctx->pc == 0x3C6708u) {
        ctx->pc = 0x3C670Cu;
        goto label_3c670c;
    }
    ctx->pc = 0x3C6704u;
    {
        const bool branch_taken_0x3c6704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6704) {
            ctx->pc = 0x3C671Cu;
            goto label_3c671c;
        }
    }
    ctx->pc = 0x3C670Cu;
label_3c670c:
    // 0x3c670c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c670cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c6710:
    // 0x3c6710: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c6710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c6714:
    // 0x3c6714: 0x320f809  jalr        $t9
label_3c6718:
    if (ctx->pc == 0x3C6718u) {
        ctx->pc = 0x3C6718u;
            // 0x3c6718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C671Cu;
        goto label_3c671c;
    }
    ctx->pc = 0x3C6714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C671Cu);
        ctx->pc = 0x3C6718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6714u;
            // 0x3c6718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C671Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C671Cu; }
            if (ctx->pc != 0x3C671Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C671Cu;
label_3c671c:
    // 0x3c671c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3c671cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6720:
    // 0x3c6720: 0xae540064  sw          $s4, 0x64($s2)
    ctx->pc = 0x3c6720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 20));
label_3c6724:
    // 0x3c6724: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3c6724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3c6728:
    // 0x3c6728: 0x2111818  mult        $v1, $s0, $s1
    ctx->pc = 0x3c6728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3c672c:
    // 0x3c672c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3c672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_3c6730:
    // 0x3c6730: 0xe6540068  swc1        $f20, 0x68($s2)
    ctx->pc = 0x3c6730u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
label_3c6734:
    // 0x3c6734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c6734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c6738:
    // 0x3c6738: 0xc642006c  lwc1        $f2, 0x6C($s2)
    ctx->pc = 0x3c6738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c673c:
    // 0x3c673c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3c673cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c6740:
    // 0x3c6740: 0x4602a01d  msub.s      $f0, $f20, $f2
    ctx->pc = 0x3c6740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_3c6744:
    // 0x3c6744: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c6744u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c6748:
    // 0x3c6748: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3c6748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3c674c:
    // 0x3c674c: 0x0  nop
    ctx->pc = 0x3c674cu;
    // NOP
label_3c6750:
    // 0x3c6750: 0xa6440060  sh          $a0, 0x60($s2)
    ctx->pc = 0x3c6750u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 4));
label_3c6754:
    // 0x3c6754: 0xa6430062  sh          $v1, 0x62($s2)
    ctx->pc = 0x3c6754u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 98), (uint16_t)GPR_U32(ctx, 3));
label_3c6758:
    // 0x3c6758: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x3c6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c675c:
    // 0x3c675c: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x3c675cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
label_3c6760:
    // 0x3c6760: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3c6760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3c6764:
    // 0x3c6764: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c6764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c6768:
    // 0x3c6768: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c6768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c676c:
    // 0x3c676c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c676cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c6770:
    // 0x3c6770: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c6770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c6774:
    // 0x3c6774: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c6774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6778:
    // 0x3c6778: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c6778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c677c:
    // 0x3c677c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c677cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6780:
    // 0x3c6780: 0x3e00008  jr          $ra
label_3c6784:
    if (ctx->pc == 0x3C6784u) {
        ctx->pc = 0x3C6784u;
            // 0x3c6784: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3C6788u;
        goto label_3c6788;
    }
    ctx->pc = 0x3C6780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C6780u;
            // 0x3c6784: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C6788u;
label_3c6788:
    // 0x3c6788: 0x0  nop
    ctx->pc = 0x3c6788u;
    // NOP
label_3c678c:
    // 0x3c678c: 0x0  nop
    ctx->pc = 0x3c678cu;
    // NOP
}
