#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040F4C0
// Address: 0x40f4c0 - 0x40f930
void sub_0040F4C0_0x40f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F4C0_0x40f4c0");
#endif

    switch (ctx->pc) {
        case 0x40f4c0u: goto label_40f4c0;
        case 0x40f4c4u: goto label_40f4c4;
        case 0x40f4c8u: goto label_40f4c8;
        case 0x40f4ccu: goto label_40f4cc;
        case 0x40f4d0u: goto label_40f4d0;
        case 0x40f4d4u: goto label_40f4d4;
        case 0x40f4d8u: goto label_40f4d8;
        case 0x40f4dcu: goto label_40f4dc;
        case 0x40f4e0u: goto label_40f4e0;
        case 0x40f4e4u: goto label_40f4e4;
        case 0x40f4e8u: goto label_40f4e8;
        case 0x40f4ecu: goto label_40f4ec;
        case 0x40f4f0u: goto label_40f4f0;
        case 0x40f4f4u: goto label_40f4f4;
        case 0x40f4f8u: goto label_40f4f8;
        case 0x40f4fcu: goto label_40f4fc;
        case 0x40f500u: goto label_40f500;
        case 0x40f504u: goto label_40f504;
        case 0x40f508u: goto label_40f508;
        case 0x40f50cu: goto label_40f50c;
        case 0x40f510u: goto label_40f510;
        case 0x40f514u: goto label_40f514;
        case 0x40f518u: goto label_40f518;
        case 0x40f51cu: goto label_40f51c;
        case 0x40f520u: goto label_40f520;
        case 0x40f524u: goto label_40f524;
        case 0x40f528u: goto label_40f528;
        case 0x40f52cu: goto label_40f52c;
        case 0x40f530u: goto label_40f530;
        case 0x40f534u: goto label_40f534;
        case 0x40f538u: goto label_40f538;
        case 0x40f53cu: goto label_40f53c;
        case 0x40f540u: goto label_40f540;
        case 0x40f544u: goto label_40f544;
        case 0x40f548u: goto label_40f548;
        case 0x40f54cu: goto label_40f54c;
        case 0x40f550u: goto label_40f550;
        case 0x40f554u: goto label_40f554;
        case 0x40f558u: goto label_40f558;
        case 0x40f55cu: goto label_40f55c;
        case 0x40f560u: goto label_40f560;
        case 0x40f564u: goto label_40f564;
        case 0x40f568u: goto label_40f568;
        case 0x40f56cu: goto label_40f56c;
        case 0x40f570u: goto label_40f570;
        case 0x40f574u: goto label_40f574;
        case 0x40f578u: goto label_40f578;
        case 0x40f57cu: goto label_40f57c;
        case 0x40f580u: goto label_40f580;
        case 0x40f584u: goto label_40f584;
        case 0x40f588u: goto label_40f588;
        case 0x40f58cu: goto label_40f58c;
        case 0x40f590u: goto label_40f590;
        case 0x40f594u: goto label_40f594;
        case 0x40f598u: goto label_40f598;
        case 0x40f59cu: goto label_40f59c;
        case 0x40f5a0u: goto label_40f5a0;
        case 0x40f5a4u: goto label_40f5a4;
        case 0x40f5a8u: goto label_40f5a8;
        case 0x40f5acu: goto label_40f5ac;
        case 0x40f5b0u: goto label_40f5b0;
        case 0x40f5b4u: goto label_40f5b4;
        case 0x40f5b8u: goto label_40f5b8;
        case 0x40f5bcu: goto label_40f5bc;
        case 0x40f5c0u: goto label_40f5c0;
        case 0x40f5c4u: goto label_40f5c4;
        case 0x40f5c8u: goto label_40f5c8;
        case 0x40f5ccu: goto label_40f5cc;
        case 0x40f5d0u: goto label_40f5d0;
        case 0x40f5d4u: goto label_40f5d4;
        case 0x40f5d8u: goto label_40f5d8;
        case 0x40f5dcu: goto label_40f5dc;
        case 0x40f5e0u: goto label_40f5e0;
        case 0x40f5e4u: goto label_40f5e4;
        case 0x40f5e8u: goto label_40f5e8;
        case 0x40f5ecu: goto label_40f5ec;
        case 0x40f5f0u: goto label_40f5f0;
        case 0x40f5f4u: goto label_40f5f4;
        case 0x40f5f8u: goto label_40f5f8;
        case 0x40f5fcu: goto label_40f5fc;
        case 0x40f600u: goto label_40f600;
        case 0x40f604u: goto label_40f604;
        case 0x40f608u: goto label_40f608;
        case 0x40f60cu: goto label_40f60c;
        case 0x40f610u: goto label_40f610;
        case 0x40f614u: goto label_40f614;
        case 0x40f618u: goto label_40f618;
        case 0x40f61cu: goto label_40f61c;
        case 0x40f620u: goto label_40f620;
        case 0x40f624u: goto label_40f624;
        case 0x40f628u: goto label_40f628;
        case 0x40f62cu: goto label_40f62c;
        case 0x40f630u: goto label_40f630;
        case 0x40f634u: goto label_40f634;
        case 0x40f638u: goto label_40f638;
        case 0x40f63cu: goto label_40f63c;
        case 0x40f640u: goto label_40f640;
        case 0x40f644u: goto label_40f644;
        case 0x40f648u: goto label_40f648;
        case 0x40f64cu: goto label_40f64c;
        case 0x40f650u: goto label_40f650;
        case 0x40f654u: goto label_40f654;
        case 0x40f658u: goto label_40f658;
        case 0x40f65cu: goto label_40f65c;
        case 0x40f660u: goto label_40f660;
        case 0x40f664u: goto label_40f664;
        case 0x40f668u: goto label_40f668;
        case 0x40f66cu: goto label_40f66c;
        case 0x40f670u: goto label_40f670;
        case 0x40f674u: goto label_40f674;
        case 0x40f678u: goto label_40f678;
        case 0x40f67cu: goto label_40f67c;
        case 0x40f680u: goto label_40f680;
        case 0x40f684u: goto label_40f684;
        case 0x40f688u: goto label_40f688;
        case 0x40f68cu: goto label_40f68c;
        case 0x40f690u: goto label_40f690;
        case 0x40f694u: goto label_40f694;
        case 0x40f698u: goto label_40f698;
        case 0x40f69cu: goto label_40f69c;
        case 0x40f6a0u: goto label_40f6a0;
        case 0x40f6a4u: goto label_40f6a4;
        case 0x40f6a8u: goto label_40f6a8;
        case 0x40f6acu: goto label_40f6ac;
        case 0x40f6b0u: goto label_40f6b0;
        case 0x40f6b4u: goto label_40f6b4;
        case 0x40f6b8u: goto label_40f6b8;
        case 0x40f6bcu: goto label_40f6bc;
        case 0x40f6c0u: goto label_40f6c0;
        case 0x40f6c4u: goto label_40f6c4;
        case 0x40f6c8u: goto label_40f6c8;
        case 0x40f6ccu: goto label_40f6cc;
        case 0x40f6d0u: goto label_40f6d0;
        case 0x40f6d4u: goto label_40f6d4;
        case 0x40f6d8u: goto label_40f6d8;
        case 0x40f6dcu: goto label_40f6dc;
        case 0x40f6e0u: goto label_40f6e0;
        case 0x40f6e4u: goto label_40f6e4;
        case 0x40f6e8u: goto label_40f6e8;
        case 0x40f6ecu: goto label_40f6ec;
        case 0x40f6f0u: goto label_40f6f0;
        case 0x40f6f4u: goto label_40f6f4;
        case 0x40f6f8u: goto label_40f6f8;
        case 0x40f6fcu: goto label_40f6fc;
        case 0x40f700u: goto label_40f700;
        case 0x40f704u: goto label_40f704;
        case 0x40f708u: goto label_40f708;
        case 0x40f70cu: goto label_40f70c;
        case 0x40f710u: goto label_40f710;
        case 0x40f714u: goto label_40f714;
        case 0x40f718u: goto label_40f718;
        case 0x40f71cu: goto label_40f71c;
        case 0x40f720u: goto label_40f720;
        case 0x40f724u: goto label_40f724;
        case 0x40f728u: goto label_40f728;
        case 0x40f72cu: goto label_40f72c;
        case 0x40f730u: goto label_40f730;
        case 0x40f734u: goto label_40f734;
        case 0x40f738u: goto label_40f738;
        case 0x40f73cu: goto label_40f73c;
        case 0x40f740u: goto label_40f740;
        case 0x40f744u: goto label_40f744;
        case 0x40f748u: goto label_40f748;
        case 0x40f74cu: goto label_40f74c;
        case 0x40f750u: goto label_40f750;
        case 0x40f754u: goto label_40f754;
        case 0x40f758u: goto label_40f758;
        case 0x40f75cu: goto label_40f75c;
        case 0x40f760u: goto label_40f760;
        case 0x40f764u: goto label_40f764;
        case 0x40f768u: goto label_40f768;
        case 0x40f76cu: goto label_40f76c;
        case 0x40f770u: goto label_40f770;
        case 0x40f774u: goto label_40f774;
        case 0x40f778u: goto label_40f778;
        case 0x40f77cu: goto label_40f77c;
        case 0x40f780u: goto label_40f780;
        case 0x40f784u: goto label_40f784;
        case 0x40f788u: goto label_40f788;
        case 0x40f78cu: goto label_40f78c;
        case 0x40f790u: goto label_40f790;
        case 0x40f794u: goto label_40f794;
        case 0x40f798u: goto label_40f798;
        case 0x40f79cu: goto label_40f79c;
        case 0x40f7a0u: goto label_40f7a0;
        case 0x40f7a4u: goto label_40f7a4;
        case 0x40f7a8u: goto label_40f7a8;
        case 0x40f7acu: goto label_40f7ac;
        case 0x40f7b0u: goto label_40f7b0;
        case 0x40f7b4u: goto label_40f7b4;
        case 0x40f7b8u: goto label_40f7b8;
        case 0x40f7bcu: goto label_40f7bc;
        case 0x40f7c0u: goto label_40f7c0;
        case 0x40f7c4u: goto label_40f7c4;
        case 0x40f7c8u: goto label_40f7c8;
        case 0x40f7ccu: goto label_40f7cc;
        case 0x40f7d0u: goto label_40f7d0;
        case 0x40f7d4u: goto label_40f7d4;
        case 0x40f7d8u: goto label_40f7d8;
        case 0x40f7dcu: goto label_40f7dc;
        case 0x40f7e0u: goto label_40f7e0;
        case 0x40f7e4u: goto label_40f7e4;
        case 0x40f7e8u: goto label_40f7e8;
        case 0x40f7ecu: goto label_40f7ec;
        case 0x40f7f0u: goto label_40f7f0;
        case 0x40f7f4u: goto label_40f7f4;
        case 0x40f7f8u: goto label_40f7f8;
        case 0x40f7fcu: goto label_40f7fc;
        case 0x40f800u: goto label_40f800;
        case 0x40f804u: goto label_40f804;
        case 0x40f808u: goto label_40f808;
        case 0x40f80cu: goto label_40f80c;
        case 0x40f810u: goto label_40f810;
        case 0x40f814u: goto label_40f814;
        case 0x40f818u: goto label_40f818;
        case 0x40f81cu: goto label_40f81c;
        case 0x40f820u: goto label_40f820;
        case 0x40f824u: goto label_40f824;
        case 0x40f828u: goto label_40f828;
        case 0x40f82cu: goto label_40f82c;
        case 0x40f830u: goto label_40f830;
        case 0x40f834u: goto label_40f834;
        case 0x40f838u: goto label_40f838;
        case 0x40f83cu: goto label_40f83c;
        case 0x40f840u: goto label_40f840;
        case 0x40f844u: goto label_40f844;
        case 0x40f848u: goto label_40f848;
        case 0x40f84cu: goto label_40f84c;
        case 0x40f850u: goto label_40f850;
        case 0x40f854u: goto label_40f854;
        case 0x40f858u: goto label_40f858;
        case 0x40f85cu: goto label_40f85c;
        case 0x40f860u: goto label_40f860;
        case 0x40f864u: goto label_40f864;
        case 0x40f868u: goto label_40f868;
        case 0x40f86cu: goto label_40f86c;
        case 0x40f870u: goto label_40f870;
        case 0x40f874u: goto label_40f874;
        case 0x40f878u: goto label_40f878;
        case 0x40f87cu: goto label_40f87c;
        case 0x40f880u: goto label_40f880;
        case 0x40f884u: goto label_40f884;
        case 0x40f888u: goto label_40f888;
        case 0x40f88cu: goto label_40f88c;
        case 0x40f890u: goto label_40f890;
        case 0x40f894u: goto label_40f894;
        case 0x40f898u: goto label_40f898;
        case 0x40f89cu: goto label_40f89c;
        case 0x40f8a0u: goto label_40f8a0;
        case 0x40f8a4u: goto label_40f8a4;
        case 0x40f8a8u: goto label_40f8a8;
        case 0x40f8acu: goto label_40f8ac;
        case 0x40f8b0u: goto label_40f8b0;
        case 0x40f8b4u: goto label_40f8b4;
        case 0x40f8b8u: goto label_40f8b8;
        case 0x40f8bcu: goto label_40f8bc;
        case 0x40f8c0u: goto label_40f8c0;
        case 0x40f8c4u: goto label_40f8c4;
        case 0x40f8c8u: goto label_40f8c8;
        case 0x40f8ccu: goto label_40f8cc;
        case 0x40f8d0u: goto label_40f8d0;
        case 0x40f8d4u: goto label_40f8d4;
        case 0x40f8d8u: goto label_40f8d8;
        case 0x40f8dcu: goto label_40f8dc;
        case 0x40f8e0u: goto label_40f8e0;
        case 0x40f8e4u: goto label_40f8e4;
        case 0x40f8e8u: goto label_40f8e8;
        case 0x40f8ecu: goto label_40f8ec;
        case 0x40f8f0u: goto label_40f8f0;
        case 0x40f8f4u: goto label_40f8f4;
        case 0x40f8f8u: goto label_40f8f8;
        case 0x40f8fcu: goto label_40f8fc;
        case 0x40f900u: goto label_40f900;
        case 0x40f904u: goto label_40f904;
        case 0x40f908u: goto label_40f908;
        case 0x40f90cu: goto label_40f90c;
        case 0x40f910u: goto label_40f910;
        case 0x40f914u: goto label_40f914;
        case 0x40f918u: goto label_40f918;
        case 0x40f91cu: goto label_40f91c;
        case 0x40f920u: goto label_40f920;
        case 0x40f924u: goto label_40f924;
        case 0x40f928u: goto label_40f928;
        case 0x40f92cu: goto label_40f92c;
        default: break;
    }

    ctx->pc = 0x40f4c0u;

label_40f4c0:
    // 0x40f4c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x40f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_40f4c4:
    // 0x40f4c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x40f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_40f4c8:
    // 0x40f4c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x40f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_40f4cc:
    // 0x40f4cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x40f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40f4d0:
    // 0x40f4d0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x40f4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_40f4d4:
    // 0x40f4d4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x40f4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_40f4d8:
    // 0x40f4d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x40f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_40f4dc:
    // 0x40f4dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x40f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_40f4e0:
    // 0x40f4e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x40f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_40f4e4:
    // 0x40f4e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40f4e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40f4e8:
    // 0x40f4e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_40f4ec:
    // 0x40f4ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_40f4f0:
    // 0x40f4f0: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x40f4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40f4f4:
    // 0x40f4f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40f4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_40f4f8:
    // 0x40f4f8: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x40f4f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_40f4fc:
    // 0x40f4fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x40f4fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_40f500:
    // 0x40f500: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x40f500u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
label_40f504:
    // 0x40f504: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x40f504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_40f508:
    // 0x40f508: 0x2631a890  addiu       $s1, $s1, -0x5770
    ctx->pc = 0x40f508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944912));
label_40f50c:
    // 0x40f50c: 0x8c5789e0  lw          $s7, -0x7620($v0)
    ctx->pc = 0x40f50cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_40f510:
    // 0x40f510: 0x3c0242c2  lui         $v0, 0x42C2
    ctx->pc = 0x40f510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17090 << 16));
label_40f514:
    // 0x40f514: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x40f514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40f518:
    // 0x40f518: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40f51c:
    // 0x40f51c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x40f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_40f520:
    // 0x40f520: 0xc0506ac  jal         func_141AB0
label_40f524:
    if (ctx->pc == 0x40F524u) {
        ctx->pc = 0x40F524u;
            // 0x40f524: 0x26102100  addiu       $s0, $s0, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
        ctx->pc = 0x40F528u;
        goto label_40f528;
    }
    ctx->pc = 0x40F520u;
    SET_GPR_U32(ctx, 31, 0x40F528u);
    ctx->pc = 0x40F524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F520u;
            // 0x40f524: 0x26102100  addiu       $s0, $s0, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F528u; }
        if (ctx->pc != 0x40F528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F528u; }
        if (ctx->pc != 0x40F528u) { return; }
    }
    ctx->pc = 0x40F528u;
label_40f528:
    // 0x40f528: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x40f528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_40f52c:
    // 0x40f52c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x40f52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_40f530:
    // 0x40f530: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x40f530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_40f534:
    // 0x40f534: 0x320f809  jalr        $t9
label_40f538:
    if (ctx->pc == 0x40F538u) {
        ctx->pc = 0x40F538u;
            // 0x40f538: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x40F53Cu;
        goto label_40f53c;
    }
    ctx->pc = 0x40F534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40F53Cu);
        ctx->pc = 0x40F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F534u;
            // 0x40f538: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40F53Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40F53Cu; }
            if (ctx->pc != 0x40F53Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40F53Cu;
label_40f53c:
    // 0x40f53c: 0x26420005  addiu       $v0, $s2, 0x5
    ctx->pc = 0x40f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
label_40f540:
    // 0x40f540: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x40f540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
label_40f544:
    // 0x40f544: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x40f544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_40f548:
    // 0x40f548: 0x3c08428e  lui         $t0, 0x428E
    ctx->pc = 0x40f548u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17038 << 16));
label_40f54c:
    // 0x40f54c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x40f54cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_40f550:
    // 0x40f550: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x40f550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40f554:
    // 0x40f554: 0x2242821  addu        $a1, $s1, $a0
    ctx->pc = 0x40f554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_40f558:
    // 0x40f558: 0x86090002  lh          $t1, 0x2($s0)
    ctx->pc = 0x40f558u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_40f55c:
    // 0x40f55c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x40f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_40f560:
    // 0x40f560: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40f564:
    // 0x40f564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40f564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f568:
    // 0x40f568: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40f568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40f56c:
    // 0x40f56c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40f56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40f570:
    // 0x40f570: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x40f570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_40f574:
    // 0x40f574: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f578:
    // 0x40f578: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x40f578u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f57c:
    // 0x40f57c: 0x0  nop
    ctx->pc = 0x40f57cu;
    // NOP
label_40f580:
    // 0x40f580: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40f580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40f584:
    // 0x40f584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40f584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f588:
    // 0x40f588: 0x0  nop
    ctx->pc = 0x40f588u;
    // NOP
label_40f58c:
    // 0x40f58c: 0x461403c0  add.s       $f15, $f0, $f20
    ctx->pc = 0x40f58cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_40f590:
    // 0x40f590: 0x44887000  mtc1        $t0, $f14
    ctx->pc = 0x40f590u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_40f594:
    // 0x40f594: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x40f594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40f598:
    // 0x40f598: 0xc0bc284  jal         func_2F0A10
label_40f59c:
    if (ctx->pc == 0x40F59Cu) {
        ctx->pc = 0x40F59Cu;
            // 0x40f59c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x40F5A0u;
        goto label_40f5a0;
    }
    ctx->pc = 0x40F598u;
    SET_GPR_U32(ctx, 31, 0x40F5A0u);
    ctx->pc = 0x40F59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F598u;
            // 0x40f59c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F5A0u; }
        if (ctx->pc != 0x40F5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F5A0u; }
        if (ctx->pc != 0x40F5A0u) { return; }
    }
    ctx->pc = 0x40F5A0u;
label_40f5a0:
    // 0x40f5a0: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x40f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
label_40f5a4:
    // 0x40f5a4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x40f5a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_40f5a8:
    // 0x40f5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40f5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f5ac:
    // 0x40f5ac: 0x1e40ffe3  bgtz        $s2, . + 4 + (-0x1D << 2)
label_40f5b0:
    if (ctx->pc == 0x40F5B0u) {
        ctx->pc = 0x40F5B0u;
            // 0x40f5b0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x40F5B4u;
        goto label_40f5b4;
    }
    ctx->pc = 0x40F5ACu;
    {
        const bool branch_taken_0x40f5ac = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x40F5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F5ACu;
            // 0x40f5b0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f5ac) {
            ctx->pc = 0x40F53Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40f53c;
        }
    }
    ctx->pc = 0x40F5B4u;
label_40f5b4:
    // 0x40f5b4: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x40f5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_40f5b8:
    // 0x40f5b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x40f5b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_40f5bc:
    // 0x40f5bc: 0x320f809  jalr        $t9
label_40f5c0:
    if (ctx->pc == 0x40F5C0u) {
        ctx->pc = 0x40F5C0u;
            // 0x40f5c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F5C4u;
        goto label_40f5c4;
    }
    ctx->pc = 0x40F5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40F5C4u);
        ctx->pc = 0x40F5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F5BCu;
            // 0x40f5c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40F5C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40F5C4u; }
            if (ctx->pc != 0x40F5C4u) { return; }
        }
        }
    }
    ctx->pc = 0x40F5C4u;
label_40f5c4:
    // 0x40f5c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40f5c8:
    // 0x40f5c8: 0x3c0342d0  lui         $v1, 0x42D0
    ctx->pc = 0x40f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17104 << 16));
label_40f5cc:
    // 0x40f5cc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x40f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_40f5d0:
    // 0x40f5d0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x40f5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_40f5d4:
    // 0x40f5d4: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x40f5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_40f5d8:
    // 0x40f5d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40f5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f5dc:
    // 0x40f5dc: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x40f5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_40f5e0:
    // 0x40f5e0: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x40f5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
label_40f5e4:
    // 0x40f5e4: 0xc0506ac  jal         func_141AB0
label_40f5e8:
    if (ctx->pc == 0x40F5E8u) {
        ctx->pc = 0x40F5E8u;
            // 0x40f5e8: 0x26312100  addiu       $s1, $s1, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
        ctx->pc = 0x40F5ECu;
        goto label_40f5ec;
    }
    ctx->pc = 0x40F5E4u;
    SET_GPR_U32(ctx, 31, 0x40F5ECu);
    ctx->pc = 0x40F5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F5E4u;
            // 0x40f5e8: 0x26312100  addiu       $s1, $s1, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F5ECu; }
        if (ctx->pc != 0x40F5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F5ECu; }
        if (ctx->pc != 0x40F5ECu) { return; }
    }
    ctx->pc = 0x40F5ECu;
label_40f5ec:
    // 0x40f5ec: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x40f5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_40f5f0:
    // 0x40f5f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x40f5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_40f5f4:
    // 0x40f5f4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x40f5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_40f5f8:
    // 0x40f5f8: 0x320f809  jalr        $t9
label_40f5fc:
    if (ctx->pc == 0x40F5FCu) {
        ctx->pc = 0x40F5FCu;
            // 0x40f5fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x40F600u;
        goto label_40f600;
    }
    ctx->pc = 0x40F5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40F600u);
        ctx->pc = 0x40F5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F5F8u;
            // 0x40f5fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40F600u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40F600u; }
            if (ctx->pc != 0x40F600u) { return; }
        }
        }
    }
    ctx->pc = 0x40F600u;
label_40f600:
    // 0x40f600: 0x3c160065  lui         $s6, 0x65
    ctx->pc = 0x40f600u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)101 << 16));
label_40f604:
    // 0x40f604: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x40f604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40f608:
    // 0x40f608: 0x26d6fec8  addiu       $s6, $s6, -0x138
    ctx->pc = 0x40f608u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966984));
label_40f60c:
    // 0x40f60c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x40f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_40f610:
    // 0x40f610: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x40f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_40f614:
    // 0x40f614: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x40f614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_40f618:
    // 0x40f618: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x40f618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_40f61c:
    // 0x40f61c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x40f61cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_40f620:
    // 0x40f620: 0xc6400668  lwc1        $f0, 0x668($s2)
    ctx->pc = 0x40f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f624:
    // 0x40f624: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x40f624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_40f628:
    // 0x40f628: 0x26550660  addiu       $s5, $s2, 0x660
    ctx->pc = 0x40f628u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
label_40f62c:
    // 0x40f62c: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x40f62cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_40f630:
    // 0x40f630: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40f630u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_40f634:
    // 0x40f634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x40f634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40f638:
    // 0x40f638: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x40f638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_40f63c:
    // 0x40f63c: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x40f63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40f640:
    // 0x40f640: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x40f640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_40f644:
    // 0x40f644: 0xc58018  mult        $s0, $a2, $a1
    ctx->pc = 0x40f644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_40f648:
    // 0x40f648: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40f648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40f64c:
    // 0x40f64c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f650:
    // 0x40f650: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40f650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40f654:
    // 0x40f654: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40f654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40f658:
    // 0x40f658: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x40f658u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_40f65c:
    // 0x40f65c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x40f65cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40f660:
    // 0x40f660: 0xc640066c  lwc1        $f0, 0x66C($s2)
    ctx->pc = 0x40f660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f664:
    // 0x40f664: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x40f664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40f668:
    // 0x40f668: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x40f668u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_40f66c:
    // 0x40f66c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x40f66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40f670:
    // 0x40f670: 0xc0bc284  jal         func_2F0A10
label_40f674:
    if (ctx->pc == 0x40F674u) {
        ctx->pc = 0x40F674u;
            // 0x40f674: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x40F678u;
        goto label_40f678;
    }
    ctx->pc = 0x40F670u;
    SET_GPR_U32(ctx, 31, 0x40F678u);
    ctx->pc = 0x40F674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F670u;
            // 0x40f674: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F678u; }
        if (ctx->pc != 0x40F678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F678u; }
        if (ctx->pc != 0x40F678u) { return; }
    }
    ctx->pc = 0x40F678u;
label_40f678:
    // 0x40f678: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x40f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f67c:
    // 0x40f67c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x40f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_40f680:
    // 0x40f680: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x40f680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_40f684:
    // 0x40f684: 0x34486667  ori         $t0, $v0, 0x6667
    ctx->pc = 0x40f684u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_40f688:
    // 0x40f688: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x40f688u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_40f68c:
    // 0x40f68c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40f68cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40f690:
    // 0x40f690: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x40f690u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_40f694:
    // 0x40f694: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x40f694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_40f698:
    // 0x40f698: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x40f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_40f69c:
    // 0x40f69c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40f6a0:
    // 0x40f6a0: 0x80490000  lb          $t1, 0x0($v0)
    ctx->pc = 0x40f6a0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_40f6a4:
    // 0x40f6a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40f6a8:
    // 0x40f6a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f6ac:
    // 0x40f6ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40f6acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f6b0:
    // 0x40f6b0: 0x0  nop
    ctx->pc = 0x40f6b0u;
    // NOP
label_40f6b4:
    // 0x40f6b4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40f6b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40f6b8:
    // 0x40f6b8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x40f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_40f6bc:
    // 0x40f6bc: 0x1090018  mult        $zero, $t0, $t1
    ctx->pc = 0x40f6bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_40f6c0:
    // 0x40f6c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40f6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f6c4:
    // 0x40f6c4: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x40f6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_40f6c8:
    // 0x40f6c8: 0x2810  mfhi        $a1
    ctx->pc = 0x40f6c8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_40f6cc:
    // 0x40f6cc: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x40f6ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_40f6d0:
    // 0x40f6d0: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x40f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_40f6d4:
    // 0x40f6d4: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x40f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_40f6d8:
    // 0x40f6d8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x40f6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_40f6dc:
    // 0x40f6dc: 0x245a821  addu        $s5, $s2, $a1
    ctx->pc = 0x40f6dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_40f6e0:
    // 0x40f6e0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40f6e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40f6e4:
    // 0x40f6e4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40f6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40f6e8:
    // 0x40f6e8: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x40f6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f6ec:
    // 0x40f6ec: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x40f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f6f0:
    // 0x40f6f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40f6f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_40f6f4:
    // 0x40f6f4: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x40f6f4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_40f6f8:
    // 0x40f6f8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x40f6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40f6fc:
    // 0x40f6fc: 0xc0bc284  jal         func_2F0A10
label_40f700:
    if (ctx->pc == 0x40F700u) {
        ctx->pc = 0x40F700u;
            // 0x40f700: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x40F704u;
        goto label_40f704;
    }
    ctx->pc = 0x40F6FCu;
    SET_GPR_U32(ctx, 31, 0x40F704u);
    ctx->pc = 0x40F700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F6FCu;
            // 0x40f700: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F704u; }
        if (ctx->pc != 0x40F704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F704u; }
        if (ctx->pc != 0x40F704u) { return; }
    }
    ctx->pc = 0x40F704u;
label_40f704:
    // 0x40f704: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x40f704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_40f708:
    // 0x40f708: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x40f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f70c:
    // 0x40f70c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x40f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_40f710:
    // 0x40f710: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x40f710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_40f714:
    // 0x40f714: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x40f714u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_40f718:
    // 0x40f718: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x40f718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40f71c:
    // 0x40f71c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x40f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_40f720:
    // 0x40f720: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x40f720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_40f724:
    // 0x40f724: 0x80890000  lb          $t1, 0x0($a0)
    ctx->pc = 0x40f724u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_40f728:
    // 0x40f728: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x40f728u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_40f72c:
    // 0x40f72c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40f730:
    // 0x40f730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f734:
    // 0x40f734: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x40f734u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_40f738:
    // 0x40f738: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40f738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40f73c:
    // 0x40f73c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40f73cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f740:
    // 0x40f740: 0x0  nop
    ctx->pc = 0x40f740u;
    // NOP
label_40f744:
    // 0x40f744: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40f744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40f748:
    // 0x40f748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40f748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f74c:
    // 0x40f74c: 0x0  nop
    ctx->pc = 0x40f74cu;
    // NOP
label_40f750:
    // 0x40f750: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40f750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40f754:
    // 0x40f754: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40f754u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40f758:
    // 0x40f758: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40f758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_40f75c:
    // 0x40f75c: 0x1010  mfhi        $v0
    ctx->pc = 0x40f75cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_40f760:
    // 0x40f760: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x40f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_40f764:
    // 0x40f764: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x40f764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_40f768:
    // 0x40f768: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x40f768u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_40f76c:
    // 0x40f76c: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x40f76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f770:
    // 0x40f770: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40f770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40f774:
    // 0x40f774: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x40f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f778:
    // 0x40f778: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x40f778u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_40f77c:
    // 0x40f77c: 0xc0bc284  jal         func_2F0A10
label_40f780:
    if (ctx->pc == 0x40F780u) {
        ctx->pc = 0x40F780u;
            // 0x40f780: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x40F784u;
        goto label_40f784;
    }
    ctx->pc = 0x40F77Cu;
    SET_GPR_U32(ctx, 31, 0x40F784u);
    ctx->pc = 0x40F780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F77Cu;
            // 0x40f780: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F784u; }
        if (ctx->pc != 0x40F784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F784u; }
        if (ctx->pc != 0x40F784u) { return; }
    }
    ctx->pc = 0x40F784u;
label_40f784:
    // 0x40f784: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x40f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40f788:
    // 0x40f788: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x40f788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_40f78c:
    // 0x40f78c: 0xc64006ac  lwc1        $f0, 0x6AC($s2)
    ctx->pc = 0x40f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f790:
    // 0x40f790: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x40f790u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_40f794:
    // 0x40f794: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x40f794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_40f798:
    // 0x40f798: 0xc64106a8  lwc1        $f1, 0x6A8($s2)
    ctx->pc = 0x40f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f79c:
    // 0x40f79c: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x40f79cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_40f7a0:
    // 0x40f7a0: 0x265506a0  addiu       $s5, $s2, 0x6A0
    ctx->pc = 0x40f7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1696));
label_40f7a4:
    // 0x40f7a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40f7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40f7a8:
    // 0x40f7a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40f7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40f7ac:
    // 0x40f7ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40f7b0:
    // 0x40f7b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f7b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f7b4:
    // 0x40f7b4: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x40f7b4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40f7b8:
    // 0x40f7b8: 0x0  nop
    ctx->pc = 0x40f7b8u;
    // NOP
label_40f7bc:
    // 0x40f7bc: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x40f7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40f7c0:
    // 0x40f7c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x40f7c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_40f7c4:
    // 0x40f7c4: 0x0  nop
    ctx->pc = 0x40f7c4u;
    // NOP
label_40f7c8:
    // 0x40f7c8: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x40f7c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40f7cc:
    // 0x40f7cc: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x40f7ccu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_40f7d0:
    // 0x40f7d0: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x40f7d0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_40f7d4:
    // 0x40f7d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40f7d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40f7d8:
    // 0x40f7d8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x40f7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40f7dc:
    // 0x40f7dc: 0xc0bc284  jal         func_2F0A10
label_40f7e0:
    if (ctx->pc == 0x40F7E0u) {
        ctx->pc = 0x40F7E0u;
            // 0x40f7e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x40F7E4u;
        goto label_40f7e4;
    }
    ctx->pc = 0x40F7DCu;
    SET_GPR_U32(ctx, 31, 0x40F7E4u);
    ctx->pc = 0x40F7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F7DCu;
            // 0x40f7e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F7E4u; }
        if (ctx->pc != 0x40F7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F7E4u; }
        if (ctx->pc != 0x40F7E4u) { return; }
    }
    ctx->pc = 0x40F7E4u;
label_40f7e4:
    // 0x40f7e4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x40f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f7e8:
    // 0x40f7e8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x40f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_40f7ec:
    // 0x40f7ec: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x40f7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_40f7f0:
    // 0x40f7f0: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x40f7f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_40f7f4:
    // 0x40f7f4: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x40f7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_40f7f8:
    // 0x40f7f8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x40f7f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_40f7fc:
    // 0x40f7fc: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x40f7fcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_40f800:
    // 0x40f800: 0x1047c2  srl         $t0, $s0, 31
    ctx->pc = 0x40f800u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_40f804:
    // 0x40f804: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40f804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40f808:
    // 0x40f808: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40f808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40f80c:
    // 0x40f80c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f810:
    // 0x40f810: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40f810u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f814:
    // 0x40f814: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x40f814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_40f818:
    // 0x40f818: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40f818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40f81c:
    // 0x40f81c: 0x2810  mfhi        $a1
    ctx->pc = 0x40f81cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_40f820:
    // 0x40f820: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x40f820u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_40f824:
    // 0x40f824: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x40f824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_40f828:
    // 0x40f828: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x40f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_40f82c:
    // 0x40f82c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x40f82cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_40f830:
    // 0x40f830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40f830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f834:
    // 0x40f834: 0x245a821  addu        $s5, $s2, $a1
    ctx->pc = 0x40f834u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_40f838:
    // 0x40f838: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40f838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40f83c:
    // 0x40f83c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x40f83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_40f840:
    // 0x40f840: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x40f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f844:
    // 0x40f844: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x40f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f848:
    // 0x40f848: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40f848u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40f84c:
    // 0x40f84c: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x40f84cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_40f850:
    // 0x40f850: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x40f850u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_40f854:
    // 0x40f854: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x40f854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40f858:
    // 0x40f858: 0xc0bc284  jal         func_2F0A10
label_40f85c:
    if (ctx->pc == 0x40F85Cu) {
        ctx->pc = 0x40F85Cu;
            // 0x40f85c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x40F860u;
        goto label_40f860;
    }
    ctx->pc = 0x40F858u;
    SET_GPR_U32(ctx, 31, 0x40F860u);
    ctx->pc = 0x40F85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F858u;
            // 0x40f85c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F860u; }
        if (ctx->pc != 0x40F860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F860u; }
        if (ctx->pc != 0x40F860u) { return; }
    }
    ctx->pc = 0x40F860u;
label_40f860:
    // 0x40f860: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x40f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_40f864:
    // 0x40f864: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x40f864u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_40f868:
    // 0x40f868: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x40f868u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_40f86c:
    // 0x40f86c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x40f86cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_40f870:
    // 0x40f870: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x40f870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f874:
    // 0x40f874: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x40f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40f878:
    // 0x40f878: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40f878u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_40f87c:
    // 0x40f87c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x40f87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40f880:
    // 0x40f880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40f880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40f884:
    // 0x40f884: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x40f884u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_40f888:
    // 0x40f888: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x40f888u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f88c:
    // 0x40f88c: 0x0  nop
    ctx->pc = 0x40f88cu;
    // NOP
label_40f890:
    // 0x40f890: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x40f890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_40f894:
    // 0x40f894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40f894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f898:
    // 0x40f898: 0x0  nop
    ctx->pc = 0x40f898u;
    // NOP
label_40f89c:
    // 0x40f89c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x40f89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_40f8a0:
    // 0x40f8a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x40f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_40f8a4:
    // 0x40f8a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x40f8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_40f8a8:
    // 0x40f8a8: 0x1010  mfhi        $v0
    ctx->pc = 0x40f8a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_40f8ac:
    // 0x40f8ac: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x40f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_40f8b0:
    // 0x40f8b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x40f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_40f8b4:
    // 0x40f8b4: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x40f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_40f8b8:
    // 0x40f8b8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x40f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40f8bc:
    // 0x40f8bc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x40f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40f8c0:
    // 0x40f8c0: 0x46016380  add.s       $f14, $f12, $f1
    ctx->pc = 0x40f8c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_40f8c4:
    // 0x40f8c4: 0xc0bc284  jal         func_2F0A10
label_40f8c8:
    if (ctx->pc == 0x40F8C8u) {
        ctx->pc = 0x40F8C8u;
            // 0x40f8c8: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x40F8CCu;
        goto label_40f8cc;
    }
    ctx->pc = 0x40F8C4u;
    SET_GPR_U32(ctx, 31, 0x40F8CCu);
    ctx->pc = 0x40F8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40F8C4u;
            // 0x40f8c8: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F8CCu; }
        if (ctx->pc != 0x40F8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40F8CCu; }
        if (ctx->pc != 0x40F8CCu) { return; }
    }
    ctx->pc = 0x40F8CCu;
label_40f8cc:
    // 0x40f8cc: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x40f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
label_40f8d0:
    // 0x40f8d0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x40f8d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_40f8d4:
    // 0x40f8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40f8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40f8d8:
    // 0x40f8d8: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x40f8d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
label_40f8dc:
    // 0x40f8dc: 0x1e60ff4b  bgtz        $s3, . + 4 + (-0xB5 << 2)
label_40f8e0:
    if (ctx->pc == 0x40F8E0u) {
        ctx->pc = 0x40F8E0u;
            // 0x40f8e0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x40F8E4u;
        goto label_40f8e4;
    }
    ctx->pc = 0x40F8DCu;
    {
        const bool branch_taken_0x40f8dc = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x40F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F8DCu;
            // 0x40f8e0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f8dc) {
            ctx->pc = 0x40F60Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40f60c;
        }
    }
    ctx->pc = 0x40F8E4u;
label_40f8e4:
    // 0x40f8e4: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x40f8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_40f8e8:
    // 0x40f8e8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x40f8e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_40f8ec:
    // 0x40f8ec: 0x320f809  jalr        $t9
label_40f8f0:
    if (ctx->pc == 0x40F8F0u) {
        ctx->pc = 0x40F8F0u;
            // 0x40f8f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40F8F4u;
        goto label_40f8f4;
    }
    ctx->pc = 0x40F8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40F8F4u);
        ctx->pc = 0x40F8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F8ECu;
            // 0x40f8f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40F8F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40F8F4u; }
            if (ctx->pc != 0x40F8F4u) { return; }
        }
        }
    }
    ctx->pc = 0x40F8F4u;
label_40f8f4:
    // 0x40f8f4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x40f8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_40f8f8:
    // 0x40f8f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x40f8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40f8fc:
    // 0x40f8fc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x40f8fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40f900:
    // 0x40f900: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40f904:
    // 0x40f904: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x40f904u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40f908:
    // 0x40f908: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x40f908u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40f90c:
    // 0x40f90c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x40f90cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40f910:
    // 0x40f910: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x40f910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40f914:
    // 0x40f914: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40f914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40f918:
    // 0x40f918: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40f918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40f91c:
    // 0x40f91c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40f91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40f920:
    // 0x40f920: 0x3e00008  jr          $ra
label_40f924:
    if (ctx->pc == 0x40F924u) {
        ctx->pc = 0x40F924u;
            // 0x40f924: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x40F928u;
        goto label_40f928;
    }
    ctx->pc = 0x40F920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40F924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40F920u;
            // 0x40f924: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40F928u;
label_40f928:
    // 0x40f928: 0x0  nop
    ctx->pc = 0x40f928u;
    // NOP
label_40f92c:
    // 0x40f92c: 0x0  nop
    ctx->pc = 0x40f92cu;
    // NOP
}
