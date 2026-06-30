#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055F6B0
// Address: 0x55f6b0 - 0x55fb90
void sub_0055F6B0_0x55f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055F6B0_0x55f6b0");
#endif

    switch (ctx->pc) {
        case 0x55f6b0u: goto label_55f6b0;
        case 0x55f6b4u: goto label_55f6b4;
        case 0x55f6b8u: goto label_55f6b8;
        case 0x55f6bcu: goto label_55f6bc;
        case 0x55f6c0u: goto label_55f6c0;
        case 0x55f6c4u: goto label_55f6c4;
        case 0x55f6c8u: goto label_55f6c8;
        case 0x55f6ccu: goto label_55f6cc;
        case 0x55f6d0u: goto label_55f6d0;
        case 0x55f6d4u: goto label_55f6d4;
        case 0x55f6d8u: goto label_55f6d8;
        case 0x55f6dcu: goto label_55f6dc;
        case 0x55f6e0u: goto label_55f6e0;
        case 0x55f6e4u: goto label_55f6e4;
        case 0x55f6e8u: goto label_55f6e8;
        case 0x55f6ecu: goto label_55f6ec;
        case 0x55f6f0u: goto label_55f6f0;
        case 0x55f6f4u: goto label_55f6f4;
        case 0x55f6f8u: goto label_55f6f8;
        case 0x55f6fcu: goto label_55f6fc;
        case 0x55f700u: goto label_55f700;
        case 0x55f704u: goto label_55f704;
        case 0x55f708u: goto label_55f708;
        case 0x55f70cu: goto label_55f70c;
        case 0x55f710u: goto label_55f710;
        case 0x55f714u: goto label_55f714;
        case 0x55f718u: goto label_55f718;
        case 0x55f71cu: goto label_55f71c;
        case 0x55f720u: goto label_55f720;
        case 0x55f724u: goto label_55f724;
        case 0x55f728u: goto label_55f728;
        case 0x55f72cu: goto label_55f72c;
        case 0x55f730u: goto label_55f730;
        case 0x55f734u: goto label_55f734;
        case 0x55f738u: goto label_55f738;
        case 0x55f73cu: goto label_55f73c;
        case 0x55f740u: goto label_55f740;
        case 0x55f744u: goto label_55f744;
        case 0x55f748u: goto label_55f748;
        case 0x55f74cu: goto label_55f74c;
        case 0x55f750u: goto label_55f750;
        case 0x55f754u: goto label_55f754;
        case 0x55f758u: goto label_55f758;
        case 0x55f75cu: goto label_55f75c;
        case 0x55f760u: goto label_55f760;
        case 0x55f764u: goto label_55f764;
        case 0x55f768u: goto label_55f768;
        case 0x55f76cu: goto label_55f76c;
        case 0x55f770u: goto label_55f770;
        case 0x55f774u: goto label_55f774;
        case 0x55f778u: goto label_55f778;
        case 0x55f77cu: goto label_55f77c;
        case 0x55f780u: goto label_55f780;
        case 0x55f784u: goto label_55f784;
        case 0x55f788u: goto label_55f788;
        case 0x55f78cu: goto label_55f78c;
        case 0x55f790u: goto label_55f790;
        case 0x55f794u: goto label_55f794;
        case 0x55f798u: goto label_55f798;
        case 0x55f79cu: goto label_55f79c;
        case 0x55f7a0u: goto label_55f7a0;
        case 0x55f7a4u: goto label_55f7a4;
        case 0x55f7a8u: goto label_55f7a8;
        case 0x55f7acu: goto label_55f7ac;
        case 0x55f7b0u: goto label_55f7b0;
        case 0x55f7b4u: goto label_55f7b4;
        case 0x55f7b8u: goto label_55f7b8;
        case 0x55f7bcu: goto label_55f7bc;
        case 0x55f7c0u: goto label_55f7c0;
        case 0x55f7c4u: goto label_55f7c4;
        case 0x55f7c8u: goto label_55f7c8;
        case 0x55f7ccu: goto label_55f7cc;
        case 0x55f7d0u: goto label_55f7d0;
        case 0x55f7d4u: goto label_55f7d4;
        case 0x55f7d8u: goto label_55f7d8;
        case 0x55f7dcu: goto label_55f7dc;
        case 0x55f7e0u: goto label_55f7e0;
        case 0x55f7e4u: goto label_55f7e4;
        case 0x55f7e8u: goto label_55f7e8;
        case 0x55f7ecu: goto label_55f7ec;
        case 0x55f7f0u: goto label_55f7f0;
        case 0x55f7f4u: goto label_55f7f4;
        case 0x55f7f8u: goto label_55f7f8;
        case 0x55f7fcu: goto label_55f7fc;
        case 0x55f800u: goto label_55f800;
        case 0x55f804u: goto label_55f804;
        case 0x55f808u: goto label_55f808;
        case 0x55f80cu: goto label_55f80c;
        case 0x55f810u: goto label_55f810;
        case 0x55f814u: goto label_55f814;
        case 0x55f818u: goto label_55f818;
        case 0x55f81cu: goto label_55f81c;
        case 0x55f820u: goto label_55f820;
        case 0x55f824u: goto label_55f824;
        case 0x55f828u: goto label_55f828;
        case 0x55f82cu: goto label_55f82c;
        case 0x55f830u: goto label_55f830;
        case 0x55f834u: goto label_55f834;
        case 0x55f838u: goto label_55f838;
        case 0x55f83cu: goto label_55f83c;
        case 0x55f840u: goto label_55f840;
        case 0x55f844u: goto label_55f844;
        case 0x55f848u: goto label_55f848;
        case 0x55f84cu: goto label_55f84c;
        case 0x55f850u: goto label_55f850;
        case 0x55f854u: goto label_55f854;
        case 0x55f858u: goto label_55f858;
        case 0x55f85cu: goto label_55f85c;
        case 0x55f860u: goto label_55f860;
        case 0x55f864u: goto label_55f864;
        case 0x55f868u: goto label_55f868;
        case 0x55f86cu: goto label_55f86c;
        case 0x55f870u: goto label_55f870;
        case 0x55f874u: goto label_55f874;
        case 0x55f878u: goto label_55f878;
        case 0x55f87cu: goto label_55f87c;
        case 0x55f880u: goto label_55f880;
        case 0x55f884u: goto label_55f884;
        case 0x55f888u: goto label_55f888;
        case 0x55f88cu: goto label_55f88c;
        case 0x55f890u: goto label_55f890;
        case 0x55f894u: goto label_55f894;
        case 0x55f898u: goto label_55f898;
        case 0x55f89cu: goto label_55f89c;
        case 0x55f8a0u: goto label_55f8a0;
        case 0x55f8a4u: goto label_55f8a4;
        case 0x55f8a8u: goto label_55f8a8;
        case 0x55f8acu: goto label_55f8ac;
        case 0x55f8b0u: goto label_55f8b0;
        case 0x55f8b4u: goto label_55f8b4;
        case 0x55f8b8u: goto label_55f8b8;
        case 0x55f8bcu: goto label_55f8bc;
        case 0x55f8c0u: goto label_55f8c0;
        case 0x55f8c4u: goto label_55f8c4;
        case 0x55f8c8u: goto label_55f8c8;
        case 0x55f8ccu: goto label_55f8cc;
        case 0x55f8d0u: goto label_55f8d0;
        case 0x55f8d4u: goto label_55f8d4;
        case 0x55f8d8u: goto label_55f8d8;
        case 0x55f8dcu: goto label_55f8dc;
        case 0x55f8e0u: goto label_55f8e0;
        case 0x55f8e4u: goto label_55f8e4;
        case 0x55f8e8u: goto label_55f8e8;
        case 0x55f8ecu: goto label_55f8ec;
        case 0x55f8f0u: goto label_55f8f0;
        case 0x55f8f4u: goto label_55f8f4;
        case 0x55f8f8u: goto label_55f8f8;
        case 0x55f8fcu: goto label_55f8fc;
        case 0x55f900u: goto label_55f900;
        case 0x55f904u: goto label_55f904;
        case 0x55f908u: goto label_55f908;
        case 0x55f90cu: goto label_55f90c;
        case 0x55f910u: goto label_55f910;
        case 0x55f914u: goto label_55f914;
        case 0x55f918u: goto label_55f918;
        case 0x55f91cu: goto label_55f91c;
        case 0x55f920u: goto label_55f920;
        case 0x55f924u: goto label_55f924;
        case 0x55f928u: goto label_55f928;
        case 0x55f92cu: goto label_55f92c;
        case 0x55f930u: goto label_55f930;
        case 0x55f934u: goto label_55f934;
        case 0x55f938u: goto label_55f938;
        case 0x55f93cu: goto label_55f93c;
        case 0x55f940u: goto label_55f940;
        case 0x55f944u: goto label_55f944;
        case 0x55f948u: goto label_55f948;
        case 0x55f94cu: goto label_55f94c;
        case 0x55f950u: goto label_55f950;
        case 0x55f954u: goto label_55f954;
        case 0x55f958u: goto label_55f958;
        case 0x55f95cu: goto label_55f95c;
        case 0x55f960u: goto label_55f960;
        case 0x55f964u: goto label_55f964;
        case 0x55f968u: goto label_55f968;
        case 0x55f96cu: goto label_55f96c;
        case 0x55f970u: goto label_55f970;
        case 0x55f974u: goto label_55f974;
        case 0x55f978u: goto label_55f978;
        case 0x55f97cu: goto label_55f97c;
        case 0x55f980u: goto label_55f980;
        case 0x55f984u: goto label_55f984;
        case 0x55f988u: goto label_55f988;
        case 0x55f98cu: goto label_55f98c;
        case 0x55f990u: goto label_55f990;
        case 0x55f994u: goto label_55f994;
        case 0x55f998u: goto label_55f998;
        case 0x55f99cu: goto label_55f99c;
        case 0x55f9a0u: goto label_55f9a0;
        case 0x55f9a4u: goto label_55f9a4;
        case 0x55f9a8u: goto label_55f9a8;
        case 0x55f9acu: goto label_55f9ac;
        case 0x55f9b0u: goto label_55f9b0;
        case 0x55f9b4u: goto label_55f9b4;
        case 0x55f9b8u: goto label_55f9b8;
        case 0x55f9bcu: goto label_55f9bc;
        case 0x55f9c0u: goto label_55f9c0;
        case 0x55f9c4u: goto label_55f9c4;
        case 0x55f9c8u: goto label_55f9c8;
        case 0x55f9ccu: goto label_55f9cc;
        case 0x55f9d0u: goto label_55f9d0;
        case 0x55f9d4u: goto label_55f9d4;
        case 0x55f9d8u: goto label_55f9d8;
        case 0x55f9dcu: goto label_55f9dc;
        case 0x55f9e0u: goto label_55f9e0;
        case 0x55f9e4u: goto label_55f9e4;
        case 0x55f9e8u: goto label_55f9e8;
        case 0x55f9ecu: goto label_55f9ec;
        case 0x55f9f0u: goto label_55f9f0;
        case 0x55f9f4u: goto label_55f9f4;
        case 0x55f9f8u: goto label_55f9f8;
        case 0x55f9fcu: goto label_55f9fc;
        case 0x55fa00u: goto label_55fa00;
        case 0x55fa04u: goto label_55fa04;
        case 0x55fa08u: goto label_55fa08;
        case 0x55fa0cu: goto label_55fa0c;
        case 0x55fa10u: goto label_55fa10;
        case 0x55fa14u: goto label_55fa14;
        case 0x55fa18u: goto label_55fa18;
        case 0x55fa1cu: goto label_55fa1c;
        case 0x55fa20u: goto label_55fa20;
        case 0x55fa24u: goto label_55fa24;
        case 0x55fa28u: goto label_55fa28;
        case 0x55fa2cu: goto label_55fa2c;
        case 0x55fa30u: goto label_55fa30;
        case 0x55fa34u: goto label_55fa34;
        case 0x55fa38u: goto label_55fa38;
        case 0x55fa3cu: goto label_55fa3c;
        case 0x55fa40u: goto label_55fa40;
        case 0x55fa44u: goto label_55fa44;
        case 0x55fa48u: goto label_55fa48;
        case 0x55fa4cu: goto label_55fa4c;
        case 0x55fa50u: goto label_55fa50;
        case 0x55fa54u: goto label_55fa54;
        case 0x55fa58u: goto label_55fa58;
        case 0x55fa5cu: goto label_55fa5c;
        case 0x55fa60u: goto label_55fa60;
        case 0x55fa64u: goto label_55fa64;
        case 0x55fa68u: goto label_55fa68;
        case 0x55fa6cu: goto label_55fa6c;
        case 0x55fa70u: goto label_55fa70;
        case 0x55fa74u: goto label_55fa74;
        case 0x55fa78u: goto label_55fa78;
        case 0x55fa7cu: goto label_55fa7c;
        case 0x55fa80u: goto label_55fa80;
        case 0x55fa84u: goto label_55fa84;
        case 0x55fa88u: goto label_55fa88;
        case 0x55fa8cu: goto label_55fa8c;
        case 0x55fa90u: goto label_55fa90;
        case 0x55fa94u: goto label_55fa94;
        case 0x55fa98u: goto label_55fa98;
        case 0x55fa9cu: goto label_55fa9c;
        case 0x55faa0u: goto label_55faa0;
        case 0x55faa4u: goto label_55faa4;
        case 0x55faa8u: goto label_55faa8;
        case 0x55faacu: goto label_55faac;
        case 0x55fab0u: goto label_55fab0;
        case 0x55fab4u: goto label_55fab4;
        case 0x55fab8u: goto label_55fab8;
        case 0x55fabcu: goto label_55fabc;
        case 0x55fac0u: goto label_55fac0;
        case 0x55fac4u: goto label_55fac4;
        case 0x55fac8u: goto label_55fac8;
        case 0x55faccu: goto label_55facc;
        case 0x55fad0u: goto label_55fad0;
        case 0x55fad4u: goto label_55fad4;
        case 0x55fad8u: goto label_55fad8;
        case 0x55fadcu: goto label_55fadc;
        case 0x55fae0u: goto label_55fae0;
        case 0x55fae4u: goto label_55fae4;
        case 0x55fae8u: goto label_55fae8;
        case 0x55faecu: goto label_55faec;
        case 0x55faf0u: goto label_55faf0;
        case 0x55faf4u: goto label_55faf4;
        case 0x55faf8u: goto label_55faf8;
        case 0x55fafcu: goto label_55fafc;
        case 0x55fb00u: goto label_55fb00;
        case 0x55fb04u: goto label_55fb04;
        case 0x55fb08u: goto label_55fb08;
        case 0x55fb0cu: goto label_55fb0c;
        case 0x55fb10u: goto label_55fb10;
        case 0x55fb14u: goto label_55fb14;
        case 0x55fb18u: goto label_55fb18;
        case 0x55fb1cu: goto label_55fb1c;
        case 0x55fb20u: goto label_55fb20;
        case 0x55fb24u: goto label_55fb24;
        case 0x55fb28u: goto label_55fb28;
        case 0x55fb2cu: goto label_55fb2c;
        case 0x55fb30u: goto label_55fb30;
        case 0x55fb34u: goto label_55fb34;
        case 0x55fb38u: goto label_55fb38;
        case 0x55fb3cu: goto label_55fb3c;
        case 0x55fb40u: goto label_55fb40;
        case 0x55fb44u: goto label_55fb44;
        case 0x55fb48u: goto label_55fb48;
        case 0x55fb4cu: goto label_55fb4c;
        case 0x55fb50u: goto label_55fb50;
        case 0x55fb54u: goto label_55fb54;
        case 0x55fb58u: goto label_55fb58;
        case 0x55fb5cu: goto label_55fb5c;
        case 0x55fb60u: goto label_55fb60;
        case 0x55fb64u: goto label_55fb64;
        case 0x55fb68u: goto label_55fb68;
        case 0x55fb6cu: goto label_55fb6c;
        case 0x55fb70u: goto label_55fb70;
        case 0x55fb74u: goto label_55fb74;
        case 0x55fb78u: goto label_55fb78;
        case 0x55fb7cu: goto label_55fb7c;
        case 0x55fb80u: goto label_55fb80;
        case 0x55fb84u: goto label_55fb84;
        case 0x55fb88u: goto label_55fb88;
        case 0x55fb8cu: goto label_55fb8c;
        default: break;
    }

    ctx->pc = 0x55f6b0u;

label_55f6b0:
    // 0x55f6b0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x55f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_55f6b4:
    // 0x55f6b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x55f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_55f6b8:
    // 0x55f6b8: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x55f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_55f6bc:
    // 0x55f6bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x55f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_55f6c0:
    // 0x55f6c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x55f6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55f6c4:
    // 0x55f6c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x55f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_55f6c8:
    // 0x55f6c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x55f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_55f6cc:
    // 0x55f6cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x55f6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_55f6d0:
    // 0x55f6d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x55f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_55f6d4:
    // 0x55f6d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55f6d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55f6d8:
    // 0x55f6d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55f6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55f6dc:
    // 0x55f6dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55f6dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55f6e0:
    // 0x55f6e0: 0x8c9100dc  lw          $s1, 0xDC($a0)
    ctx->pc = 0x55f6e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_55f6e4:
    // 0x55f6e4: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x55f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55f6e8:
    // 0x55f6e8: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x55f6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55f6ec:
    // 0x55f6ec: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x55f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55f6f0:
    // 0x55f6f0: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x55f6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_55f6f4:
    // 0x55f6f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x55f6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55f6f8:
    // 0x55f6f8: 0xe7a10244  swc1        $f1, 0x244($sp)
    ctx->pc = 0x55f6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_55f6fc:
    // 0x55f6fc: 0xafa0024c  sw          $zero, 0x24C($sp)
    ctx->pc = 0x55f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
label_55f700:
    // 0x55f700: 0xc08af48  jal         func_22BD20
label_55f704:
    if (ctx->pc == 0x55F704u) {
        ctx->pc = 0x55F704u;
            // 0x55f704: 0xe7a20248  swc1        $f2, 0x248($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
        ctx->pc = 0x55F708u;
        goto label_55f708;
    }
    ctx->pc = 0x55F700u;
    SET_GPR_U32(ctx, 31, 0x55F708u);
    ctx->pc = 0x55F704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F700u;
            // 0x55f704: 0xe7a20248  swc1        $f2, 0x248($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BD20u;
    if (runtime->hasFunction(0x22BD20u)) {
        auto targetFn = runtime->lookupFunction(0x22BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F708u; }
        if (ctx->pc != 0x55F708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BD20_0x22bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F708u; }
        if (ctx->pc != 0x55F708u) { return; }
    }
    ctx->pc = 0x55F708u;
label_55f708:
    // 0x55f708: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x55f708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_55f70c:
    // 0x55f70c: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x55f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_55f710:
    // 0x55f710: 0x2463dfa0  addiu       $v1, $v1, -0x2060
    ctx->pc = 0x55f710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959008));
label_55f714:
    // 0x55f714: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x55f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_55f718:
    // 0x55f718: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x55f718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_55f71c:
    // 0x55f71c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x55f71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55f720:
    // 0x55f720: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x55f720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_55f724:
    // 0x55f724: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x55f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_55f728:
    // 0x55f728: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x55f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_55f72c:
    // 0x55f72c: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x55f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_55f730:
    // 0x55f730: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x55f730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_55f734:
    // 0x55f734: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x55f734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_55f738:
    // 0x55f738: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x55f738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_55f73c:
    // 0x55f73c: 0xa3a00124  sb          $zero, 0x124($sp)
    ctx->pc = 0x55f73cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 292), (uint8_t)GPR_U32(ctx, 0));
label_55f740:
    // 0x55f740: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x55f740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_55f744:
    // 0x55f744: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x55f744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_55f748:
    // 0x55f748: 0x320f809  jalr        $t9
label_55f74c:
    if (ctx->pc == 0x55F74Cu) {
        ctx->pc = 0x55F74Cu;
            // 0x55f74c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F750u;
        goto label_55f750;
    }
    ctx->pc = 0x55F748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F750u);
        ctx->pc = 0x55F74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F748u;
            // 0x55f74c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F750u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F750u; }
            if (ctx->pc != 0x55F750u) { return; }
        }
        }
    }
    ctx->pc = 0x55F750u;
label_55f750:
    // 0x55f750: 0x8fb2012c  lw          $s2, 0x12C($sp)
    ctx->pc = 0x55f750u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_55f754:
    // 0x55f754: 0x124000fa  beqz        $s2, . + 4 + (0xFA << 2)
label_55f758:
    if (ctx->pc == 0x55F758u) {
        ctx->pc = 0x55F75Cu;
        goto label_55f75c;
    }
    ctx->pc = 0x55F754u;
    {
        const bool branch_taken_0x55f754 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f754) {
            ctx->pc = 0x55FB40u;
            goto label_55fb40;
        }
    }
    ctx->pc = 0x55F75Cu;
label_55f75c:
    // 0x55f75c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x55f75cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55f760:
    // 0x55f760: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x55f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_55f764:
    // 0x55f764: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x55f764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_55f768:
    // 0x55f768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x55f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_55f76c:
    // 0x55f76c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x55f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_55f770:
    // 0x55f770: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x55f770u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_55f774:
    // 0x55f774: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x55f774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_55f778:
    // 0x55f778: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_55f77c:
    if (ctx->pc == 0x55F77Cu) {
        ctx->pc = 0x55F77Cu;
            // 0x55f77c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F780u;
        goto label_55f780;
    }
    ctx->pc = 0x55F778u;
    {
        const bool branch_taken_0x55f778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f778) {
            ctx->pc = 0x55F77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F778u;
            // 0x55f77c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F784u;
            goto label_55f784;
        }
    }
    ctx->pc = 0x55F780u;
label_55f780:
    // 0x55f780: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x55f780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_55f784:
    // 0x55f784: 0x126000ea  beqz        $s3, . + 4 + (0xEA << 2)
label_55f788:
    if (ctx->pc == 0x55F788u) {
        ctx->pc = 0x55F78Cu;
        goto label_55f78c;
    }
    ctx->pc = 0x55F784u;
    {
        const bool branch_taken_0x55f784 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f784) {
            ctx->pc = 0x55FB30u;
            goto label_55fb30;
        }
    }
    ctx->pc = 0x55F78Cu;
label_55f78c:
    // 0x55f78c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x55f78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_55f790:
    // 0x55f790: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x55f790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_55f794:
    // 0x55f794: 0x320f809  jalr        $t9
label_55f798:
    if (ctx->pc == 0x55F798u) {
        ctx->pc = 0x55F798u;
            // 0x55f798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F79Cu;
        goto label_55f79c;
    }
    ctx->pc = 0x55F794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F79Cu);
        ctx->pc = 0x55F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F794u;
            // 0x55f798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F79Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F79Cu; }
            if (ctx->pc != 0x55F79Cu) { return; }
        }
        }
    }
    ctx->pc = 0x55F79Cu;
label_55f79c:
    // 0x55f79c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x55f79cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55f7a0:
    // 0x55f7a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x55f7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_55f7a4:
    // 0x55f7a4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x55f7a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_55f7a8:
    // 0x55f7a8: 0x320f809  jalr        $t9
label_55f7ac:
    if (ctx->pc == 0x55F7ACu) {
        ctx->pc = 0x55F7ACu;
            // 0x55f7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F7B0u;
        goto label_55f7b0;
    }
    ctx->pc = 0x55F7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F7B0u);
        ctx->pc = 0x55F7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F7A8u;
            // 0x55f7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F7B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F7B0u; }
            if (ctx->pc != 0x55F7B0u) { return; }
        }
        }
    }
    ctx->pc = 0x55F7B0u;
label_55f7b0:
    // 0x55f7b0: 0x122200df  beq         $s1, $v0, . + 4 + (0xDF << 2)
label_55f7b4:
    if (ctx->pc == 0x55F7B4u) {
        ctx->pc = 0x55F7B8u;
        goto label_55f7b8;
    }
    ctx->pc = 0x55F7B0u;
    {
        const bool branch_taken_0x55f7b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x55f7b0) {
            ctx->pc = 0x55FB30u;
            goto label_55fb30;
        }
    }
    ctx->pc = 0x55F7B8u;
label_55f7b8:
    // 0x55f7b8: 0x240207ee  addiu       $v0, $zero, 0x7EE
    ctx->pc = 0x55f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2030));
label_55f7bc:
    // 0x55f7bc: 0x122200dc  beq         $s1, $v0, . + 4 + (0xDC << 2)
label_55f7c0:
    if (ctx->pc == 0x55F7C0u) {
        ctx->pc = 0x55F7C4u;
        goto label_55f7c4;
    }
    ctx->pc = 0x55F7BCu;
    {
        const bool branch_taken_0x55f7bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x55f7bc) {
            ctx->pc = 0x55FB30u;
            goto label_55fb30;
        }
    }
    ctx->pc = 0x55F7C4u;
label_55f7c4:
    // 0x55f7c4: 0x240207e4  addiu       $v0, $zero, 0x7E4
    ctx->pc = 0x55f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2020));
label_55f7c8:
    // 0x55f7c8: 0x122200d9  beq         $s1, $v0, . + 4 + (0xD9 << 2)
label_55f7cc:
    if (ctx->pc == 0x55F7CCu) {
        ctx->pc = 0x55F7D0u;
        goto label_55f7d0;
    }
    ctx->pc = 0x55F7C8u;
    {
        const bool branch_taken_0x55f7c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x55f7c8) {
            ctx->pc = 0x55FB30u;
            goto label_55fb30;
        }
    }
    ctx->pc = 0x55F7D0u;
label_55f7d0:
    // 0x55f7d0: 0x240207f8  addiu       $v0, $zero, 0x7F8
    ctx->pc = 0x55f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
label_55f7d4:
    // 0x55f7d4: 0x122200d6  beq         $s1, $v0, . + 4 + (0xD6 << 2)
label_55f7d8:
    if (ctx->pc == 0x55F7D8u) {
        ctx->pc = 0x55F7DCu;
        goto label_55f7dc;
    }
    ctx->pc = 0x55F7D4u;
    {
        const bool branch_taken_0x55f7d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x55f7d4) {
            ctx->pc = 0x55FB30u;
            goto label_55fb30;
        }
    }
    ctx->pc = 0x55F7DCu;
label_55f7dc:
    // 0x55f7dc: 0xc089230  jal         func_2248C0
label_55f7e0:
    if (ctx->pc == 0x55F7E0u) {
        ctx->pc = 0x55F7E0u;
            // 0x55f7e0: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->pc = 0x55F7E4u;
        goto label_55f7e4;
    }
    ctx->pc = 0x55F7DCu;
    SET_GPR_U32(ctx, 31, 0x55F7E4u);
    ctx->pc = 0x55F7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F7DCu;
            // 0x55f7e0: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2248C0u;
    if (runtime->hasFunction(0x2248C0u)) {
        auto targetFn = runtime->lookupFunction(0x2248C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F7E4u; }
        if (ctx->pc != 0x55F7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002248C0_0x2248c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F7E4u; }
        if (ctx->pc != 0x55F7E4u) { return; }
    }
    ctx->pc = 0x55F7E4u;
label_55f7e4:
    // 0x55f7e4: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_55f7e8:
    if (ctx->pc == 0x55F7E8u) {
        ctx->pc = 0x55F7ECu;
        goto label_55f7ec;
    }
    ctx->pc = 0x55F7E4u;
    {
        const bool branch_taken_0x55f7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55f7e4) {
            ctx->pc = 0x55FB30u;
            goto label_55fb30;
        }
    }
    ctx->pc = 0x55F7ECu;
label_55f7ec:
    // 0x55f7ec: 0x8e6200ac  lw          $v0, 0xAC($s3)
    ctx->pc = 0x55f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
label_55f7f0:
    // 0x55f7f0: 0x1c4000cf  bgtz        $v0, . + 4 + (0xCF << 2)
label_55f7f4:
    if (ctx->pc == 0x55F7F4u) {
        ctx->pc = 0x55F7F8u;
        goto label_55f7f8;
    }
    ctx->pc = 0x55F7F0u;
    {
        const bool branch_taken_0x55f7f0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x55f7f0) {
            ctx->pc = 0x55FB30u;
            goto label_55fb30;
        }
    }
    ctx->pc = 0x55F7F8u;
label_55f7f8:
    // 0x55f7f8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x55f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_55f7fc:
    // 0x55f7fc: 0xc04cc1c  jal         func_133070
label_55f800:
    if (ctx->pc == 0x55F800u) {
        ctx->pc = 0x55F800u;
            // 0x55f800: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x55F804u;
        goto label_55f804;
    }
    ctx->pc = 0x55F7FCu;
    SET_GPR_U32(ctx, 31, 0x55F804u);
    ctx->pc = 0x55F800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F7FCu;
            // 0x55f800: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F804u; }
        if (ctx->pc != 0x55F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F804u; }
        if (ctx->pc != 0x55F804u) { return; }
    }
    ctx->pc = 0x55F804u;
label_55f804:
    // 0x55f804: 0xc6010170  lwc1        $f1, 0x170($s0)
    ctx->pc = 0x55f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55f808:
    // 0x55f808: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x55f808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55f80c:
    // 0x55f80c: 0x450100c8  bc1t        . + 4 + (0xC8 << 2)
label_55f810:
    if (ctx->pc == 0x55F810u) {
        ctx->pc = 0x55F814u;
        goto label_55f814;
    }
    ctx->pc = 0x55F80Cu;
    {
        const bool branch_taken_0x55f80c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x55f80c) {
            ctx->pc = 0x55FB30u;
            goto label_55fb30;
        }
    }
    ctx->pc = 0x55F814u;
label_55f814:
    // 0x55f814: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x55f814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_55f818:
    // 0x55f818: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x55f818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_55f81c:
    // 0x55f81c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f820:
    // 0x55f820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x55f820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55f824:
    // 0x55f824: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x55f824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_55f828:
    // 0x55f828: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x55f828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55f82c:
    // 0x55f82c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x55f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_55f830:
    // 0x55f830: 0xc08bff0  jal         func_22FFC0
label_55f834:
    if (ctx->pc == 0x55F834u) {
        ctx->pc = 0x55F834u;
            // 0x55f834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F838u;
        goto label_55f838;
    }
    ctx->pc = 0x55F830u;
    SET_GPR_U32(ctx, 31, 0x55F838u);
    ctx->pc = 0x55F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F830u;
            // 0x55f834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F838u; }
        if (ctx->pc != 0x55F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F838u; }
        if (ctx->pc != 0x55F838u) { return; }
    }
    ctx->pc = 0x55F838u;
label_55f838:
    // 0x55f838: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x55f838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_55f83c:
    // 0x55f83c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x55f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55f840:
    // 0x55f840: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x55f840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_55f844:
    // 0x55f844: 0xc08914c  jal         func_224530
label_55f848:
    if (ctx->pc == 0x55F848u) {
        ctx->pc = 0x55F848u;
            // 0x55f848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F84Cu;
        goto label_55f84c;
    }
    ctx->pc = 0x55F844u;
    SET_GPR_U32(ctx, 31, 0x55F84Cu);
    ctx->pc = 0x55F848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F844u;
            // 0x55f848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F84Cu; }
        if (ctx->pc != 0x55F84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F84Cu; }
        if (ctx->pc != 0x55F84Cu) { return; }
    }
    ctx->pc = 0x55F84Cu;
label_55f84c:
    // 0x55f84c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55f850:
    // 0x55f850: 0xc04f278  jal         func_13C9E0
label_55f854:
    if (ctx->pc == 0x55F854u) {
        ctx->pc = 0x55F854u;
            // 0x55f854: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x55F858u;
        goto label_55f858;
    }
    ctx->pc = 0x55F850u;
    SET_GPR_U32(ctx, 31, 0x55F858u);
    ctx->pc = 0x55F854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F850u;
            // 0x55f854: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F858u; }
        if (ctx->pc != 0x55F858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F858u; }
        if (ctx->pc != 0x55F858u) { return; }
    }
    ctx->pc = 0x55F858u;
label_55f858:
    // 0x55f858: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55f858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55f85c:
    // 0x55f85c: 0xc04ce80  jal         func_133A00
label_55f860:
    if (ctx->pc == 0x55F860u) {
        ctx->pc = 0x55F860u;
            // 0x55f860: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x55F864u;
        goto label_55f864;
    }
    ctx->pc = 0x55F85Cu;
    SET_GPR_U32(ctx, 31, 0x55F864u);
    ctx->pc = 0x55F860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F85Cu;
            // 0x55f860: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F864u; }
        if (ctx->pc != 0x55F864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F864u; }
        if (ctx->pc != 0x55F864u) { return; }
    }
    ctx->pc = 0x55F864u;
label_55f864:
    // 0x55f864: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x55f864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55f868:
    // 0x55f868: 0xc04ccf4  jal         func_1333D0
label_55f86c:
    if (ctx->pc == 0x55F86Cu) {
        ctx->pc = 0x55F86Cu;
            // 0x55f86c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F870u;
        goto label_55f870;
    }
    ctx->pc = 0x55F868u;
    SET_GPR_U32(ctx, 31, 0x55F870u);
    ctx->pc = 0x55F86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F868u;
            // 0x55f86c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F870u; }
        if (ctx->pc != 0x55F870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F870u; }
        if (ctx->pc != 0x55F870u) { return; }
    }
    ctx->pc = 0x55F870u;
label_55f870:
    // 0x55f870: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x55f870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55f874:
    // 0x55f874: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x55f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_55f878:
    // 0x55f878: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x55f878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_55f87c:
    // 0x55f87c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x55f87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_55f880:
    // 0x55f880: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x55f880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_55f884:
    // 0x55f884: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x55f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55f888:
    // 0x55f888: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x55f888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_55f88c:
    // 0x55f88c: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x55f88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55f890:
    // 0x55f890: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x55f890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_55f894:
    // 0x55f894: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x55f894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55f898:
    // 0x55f898: 0xc04cca0  jal         func_133280
label_55f89c:
    if (ctx->pc == 0x55F89Cu) {
        ctx->pc = 0x55F89Cu;
            // 0x55f89c: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->pc = 0x55F8A0u;
        goto label_55f8a0;
    }
    ctx->pc = 0x55F898u;
    SET_GPR_U32(ctx, 31, 0x55F8A0u);
    ctx->pc = 0x55F89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F898u;
            // 0x55f89c: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F8A0u; }
        if (ctx->pc != 0x55F8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F8A0u; }
        if (ctx->pc != 0x55F8A0u) { return; }
    }
    ctx->pc = 0x55F8A0u;
label_55f8a0:
    // 0x55f8a0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x55f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_55f8a4:
    // 0x55f8a4: 0xc04cc44  jal         func_133110
label_55f8a8:
    if (ctx->pc == 0x55F8A8u) {
        ctx->pc = 0x55F8A8u;
            // 0x55f8a8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x55F8ACu;
        goto label_55f8ac;
    }
    ctx->pc = 0x55F8A4u;
    SET_GPR_U32(ctx, 31, 0x55F8ACu);
    ctx->pc = 0x55F8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F8A4u;
            // 0x55f8a8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F8ACu; }
        if (ctx->pc != 0x55F8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F8ACu; }
        if (ctx->pc != 0x55F8ACu) { return; }
    }
    ctx->pc = 0x55F8ACu;
label_55f8ac:
    // 0x55f8ac: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x55f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_55f8b0:
    // 0x55f8b0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x55f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_55f8b4:
    // 0x55f8b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x55f8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_55f8b8:
    // 0x55f8b8: 0xc04cc70  jal         func_1331C0
label_55f8bc:
    if (ctx->pc == 0x55F8BCu) {
        ctx->pc = 0x55F8BCu;
            // 0x55f8bc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x55F8C0u;
        goto label_55f8c0;
    }
    ctx->pc = 0x55F8B8u;
    SET_GPR_U32(ctx, 31, 0x55F8C0u);
    ctx->pc = 0x55F8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F8B8u;
            // 0x55f8bc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F8C0u; }
        if (ctx->pc != 0x55F8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F8C0u; }
        if (ctx->pc != 0x55F8C0u) { return; }
    }
    ctx->pc = 0x55F8C0u;
label_55f8c0:
    // 0x55f8c0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x55f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_55f8c4:
    // 0x55f8c4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x55f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_55f8c8:
    // 0x55f8c8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x55f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_55f8cc:
    // 0x55f8cc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x55f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_55f8d0:
    // 0x55f8d0: 0x8e710050  lw          $s1, 0x50($s3)
    ctx->pc = 0x55f8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_55f8d4:
    // 0x55f8d4: 0xc088b74  jal         func_222DD0
label_55f8d8:
    if (ctx->pc == 0x55F8D8u) {
        ctx->pc = 0x55F8D8u;
            // 0x55f8d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F8DCu;
        goto label_55f8dc;
    }
    ctx->pc = 0x55F8D4u;
    SET_GPR_U32(ctx, 31, 0x55F8DCu);
    ctx->pc = 0x55F8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F8D4u;
            // 0x55f8d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F8DCu; }
        if (ctx->pc != 0x55F8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F8DCu; }
        if (ctx->pc != 0x55F8DCu) { return; }
    }
    ctx->pc = 0x55F8DCu;
label_55f8dc:
    // 0x55f8dc: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x55f8dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_55f8e0:
    // 0x55f8e0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x55f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_55f8e4:
    // 0x55f8e4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x55f8e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_55f8e8:
    // 0x55f8e8: 0x320f809  jalr        $t9
label_55f8ec:
    if (ctx->pc == 0x55F8ECu) {
        ctx->pc = 0x55F8ECu;
            // 0x55f8ec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x55F8F0u;
        goto label_55f8f0;
    }
    ctx->pc = 0x55F8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F8F0u);
        ctx->pc = 0x55F8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F8E8u;
            // 0x55f8ec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F8F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F8F0u; }
            if (ctx->pc != 0x55F8F0u) { return; }
        }
        }
    }
    ctx->pc = 0x55F8F0u;
label_55f8f0:
    // 0x55f8f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f8f4:
    // 0x55f8f4: 0x8e710050  lw          $s1, 0x50($s3)
    ctx->pc = 0x55f8f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_55f8f8:
    // 0x55f8f8: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x55f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_55f8fc:
    // 0x55f8fc: 0xc7a60100  lwc1        $f6, 0x100($sp)
    ctx->pc = 0x55f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_55f900:
    // 0x55f900: 0xc7a50104  lwc1        $f5, 0x104($sp)
    ctx->pc = 0x55f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_55f904:
    // 0x55f904: 0xc7a40108  lwc1        $f4, 0x108($sp)
    ctx->pc = 0x55f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_55f908:
    // 0x55f908: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x55f908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_55f90c:
    // 0x55f90c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55f910:
    // 0x55f910: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x55f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_55f914:
    // 0x55f914: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x55f914u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_55f918:
    // 0x55f918: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x55f918u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_55f91c:
    // 0x55f91c: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x55f91cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_55f920:
    // 0x55f920: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x55f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55f924:
    // 0x55f924: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x55f924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55f928:
    // 0x55f928: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x55f928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_55f92c:
    // 0x55f92c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x55f92cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_55f930:
    // 0x55f930: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x55f930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_55f934:
    // 0x55f934: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x55f934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_55f938:
    // 0x55f938: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x55f938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_55f93c:
    // 0x55f93c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x55f93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_55f940:
    // 0x55f940: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x55f940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_55f944:
    // 0x55f944: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x55f944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_55f948:
    // 0x55f948: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x55f948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_55f94c:
    // 0x55f94c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x55f94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_55f950:
    // 0x55f950: 0xc4740018  lwc1        $f20, 0x18($v1)
    ctx->pc = 0x55f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55f954:
    // 0x55f954: 0xc088b74  jal         func_222DD0
label_55f958:
    if (ctx->pc == 0x55F958u) {
        ctx->pc = 0x55F958u;
            // 0x55f958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55F95Cu;
        goto label_55f95c;
    }
    ctx->pc = 0x55F954u;
    SET_GPR_U32(ctx, 31, 0x55F95Cu);
    ctx->pc = 0x55F958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F954u;
            // 0x55f958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F95Cu; }
        if (ctx->pc != 0x55F95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F95Cu; }
        if (ctx->pc != 0x55F95Cu) { return; }
    }
    ctx->pc = 0x55F95Cu;
label_55f95c:
    // 0x55f95c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x55f95cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_55f960:
    // 0x55f960: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x55f960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_55f964:
    // 0x55f964: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x55f964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_55f968:
    // 0x55f968: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x55f968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_55f96c:
    // 0x55f96c: 0x320f809  jalr        $t9
label_55f970:
    if (ctx->pc == 0x55F970u) {
        ctx->pc = 0x55F970u;
            // 0x55f970: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x55F974u;
        goto label_55f974;
    }
    ctx->pc = 0x55F96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55F974u);
        ctx->pc = 0x55F970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F96Cu;
            // 0x55f970: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55F974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55F974u; }
            if (ctx->pc != 0x55F974u) { return; }
        }
        }
    }
    ctx->pc = 0x55F974u;
label_55f974:
    // 0x55f974: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f978:
    // 0x55f978: 0xc074740  jal         func_1D1D00
label_55f97c:
    if (ctx->pc == 0x55F97Cu) {
        ctx->pc = 0x55F97Cu;
            // 0x55f97c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x55F980u;
        goto label_55f980;
    }
    ctx->pc = 0x55F978u;
    SET_GPR_U32(ctx, 31, 0x55F980u);
    ctx->pc = 0x55F97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F978u;
            // 0x55f97c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F980u; }
        if (ctx->pc != 0x55F980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F980u; }
        if (ctx->pc != 0x55F980u) { return; }
    }
    ctx->pc = 0x55F980u;
label_55f980:
    // 0x55f980: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_55f984:
    if (ctx->pc == 0x55F984u) {
        ctx->pc = 0x55F984u;
            // 0x55f984: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x55F988u;
        goto label_55f988;
    }
    ctx->pc = 0x55F980u;
    {
        const bool branch_taken_0x55f980 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x55f980) {
            ctx->pc = 0x55F984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F980u;
            // 0x55f984: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F994u;
            goto label_55f994;
        }
    }
    ctx->pc = 0x55F988u;
label_55f988:
    // 0x55f988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55f988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55f98c:
    // 0x55f98c: 0x10000007  b           . + 4 + (0x7 << 2)
label_55f990:
    if (ctx->pc == 0x55F990u) {
        ctx->pc = 0x55F990u;
            // 0x55f990: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55F994u;
        goto label_55f994;
    }
    ctx->pc = 0x55F98Cu;
    {
        const bool branch_taken_0x55f98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F98Cu;
            // 0x55f990: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f98c) {
            ctx->pc = 0x55F9ACu;
            goto label_55f9ac;
        }
    }
    ctx->pc = 0x55F994u;
label_55f994:
    // 0x55f994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x55f994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_55f998:
    // 0x55f998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55f998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55f99c:
    // 0x55f99c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55f99cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55f9a0:
    // 0x55f9a0: 0x0  nop
    ctx->pc = 0x55f9a0u;
    // NOP
label_55f9a4:
    // 0x55f9a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x55f9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_55f9a8:
    // 0x55f9a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x55f9a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_55f9ac:
    // 0x55f9ac: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x55f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_55f9b0:
    // 0x55f9b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f9b4:
    // 0x55f9b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55f9b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55f9b8:
    // 0x55f9b8: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x55f9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_55f9bc:
    // 0x55f9bc: 0xc074740  jal         func_1D1D00
label_55f9c0:
    if (ctx->pc == 0x55F9C0u) {
        ctx->pc = 0x55F9C0u;
            // 0x55f9c0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x55F9C4u;
        goto label_55f9c4;
    }
    ctx->pc = 0x55F9BCu;
    SET_GPR_U32(ctx, 31, 0x55F9C4u);
    ctx->pc = 0x55F9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55F9BCu;
            // 0x55f9c0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F9C4u; }
        if (ctx->pc != 0x55F9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55F9C4u; }
        if (ctx->pc != 0x55F9C4u) { return; }
    }
    ctx->pc = 0x55F9C4u;
label_55f9c4:
    // 0x55f9c4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_55f9c8:
    if (ctx->pc == 0x55F9C8u) {
        ctx->pc = 0x55F9C8u;
            // 0x55f9c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x55F9CCu;
        goto label_55f9cc;
    }
    ctx->pc = 0x55F9C4u;
    {
        const bool branch_taken_0x55f9c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x55f9c4) {
            ctx->pc = 0x55F9C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55F9C4u;
            // 0x55f9c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F9D8u;
            goto label_55f9d8;
        }
    }
    ctx->pc = 0x55F9CCu;
label_55f9cc:
    // 0x55f9cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55f9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55f9d0:
    // 0x55f9d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_55f9d4:
    if (ctx->pc == 0x55F9D4u) {
        ctx->pc = 0x55F9D4u;
            // 0x55f9d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55F9D8u;
        goto label_55f9d8;
    }
    ctx->pc = 0x55F9D0u;
    {
        const bool branch_taken_0x55f9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55F9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55F9D0u;
            // 0x55f9d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55f9d0) {
            ctx->pc = 0x55F9F0u;
            goto label_55f9f0;
        }
    }
    ctx->pc = 0x55F9D8u;
label_55f9d8:
    // 0x55f9d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x55f9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_55f9dc:
    // 0x55f9dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55f9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55f9e0:
    // 0x55f9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55f9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55f9e4:
    // 0x55f9e4: 0x0  nop
    ctx->pc = 0x55f9e4u;
    // NOP
label_55f9e8:
    // 0x55f9e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x55f9e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_55f9ec:
    // 0x55f9ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x55f9ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_55f9f0:
    // 0x55f9f0: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x55f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_55f9f4:
    // 0x55f9f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55f9f8:
    // 0x55f9f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55f9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55f9fc:
    // 0x55f9fc: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x55f9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_55fa00:
    // 0x55fa00: 0xc074740  jal         func_1D1D00
label_55fa04:
    if (ctx->pc == 0x55FA04u) {
        ctx->pc = 0x55FA04u;
            // 0x55fa04: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x55FA08u;
        goto label_55fa08;
    }
    ctx->pc = 0x55FA00u;
    SET_GPR_U32(ctx, 31, 0x55FA08u);
    ctx->pc = 0x55FA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FA00u;
            // 0x55fa04: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FA08u; }
        if (ctx->pc != 0x55FA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FA08u; }
        if (ctx->pc != 0x55FA08u) { return; }
    }
    ctx->pc = 0x55FA08u;
label_55fa08:
    // 0x55fa08: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_55fa0c:
    if (ctx->pc == 0x55FA0Cu) {
        ctx->pc = 0x55FA0Cu;
            // 0x55fa0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x55FA10u;
        goto label_55fa10;
    }
    ctx->pc = 0x55FA08u;
    {
        const bool branch_taken_0x55fa08 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x55fa08) {
            ctx->pc = 0x55FA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55FA08u;
            // 0x55fa0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55FA1Cu;
            goto label_55fa1c;
        }
    }
    ctx->pc = 0x55FA10u;
label_55fa10:
    // 0x55fa10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55fa10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55fa14:
    // 0x55fa14: 0x10000007  b           . + 4 + (0x7 << 2)
label_55fa18:
    if (ctx->pc == 0x55FA18u) {
        ctx->pc = 0x55FA18u;
            // 0x55fa18: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55FA1Cu;
        goto label_55fa1c;
    }
    ctx->pc = 0x55FA14u;
    {
        const bool branch_taken_0x55fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55FA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FA14u;
            // 0x55fa18: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55fa14) {
            ctx->pc = 0x55FA34u;
            goto label_55fa34;
        }
    }
    ctx->pc = 0x55FA1Cu;
label_55fa1c:
    // 0x55fa1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x55fa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_55fa20:
    // 0x55fa20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x55fa20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_55fa24:
    // 0x55fa24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55fa24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55fa28:
    // 0x55fa28: 0x0  nop
    ctx->pc = 0x55fa28u;
    // NOP
label_55fa2c:
    // 0x55fa2c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x55fa2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_55fa30:
    // 0x55fa30: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x55fa30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_55fa34:
    // 0x55fa34: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x55fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_55fa38:
    // 0x55fa38: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x55fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_55fa3c:
    // 0x55fa3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55fa3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55fa40:
    // 0x55fa40: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x55fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_55fa44:
    // 0x55fa44: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x55fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
label_55fa48:
    // 0x55fa48: 0x3444fa35  ori         $a0, $v0, 0xFA35
    ctx->pc = 0x55fa48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_55fa4c:
    // 0x55fa4c: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x55fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_55fa50:
    // 0x55fa50: 0x3447fa35  ori         $a3, $v0, 0xFA35
    ctx->pc = 0x55fa50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_55fa54:
    // 0x55fa54: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x55fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_55fa58:
    // 0x55fa58: 0x34467750  ori         $a2, $v0, 0x7750
    ctx->pc = 0x55fa58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_55fa5c:
    // 0x55fa5c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x55fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
label_55fa60:
    // 0x55fa60: 0x34457750  ori         $a1, $v0, 0x7750
    ctx->pc = 0x55fa60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_55fa64:
    // 0x55fa64: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x55fa64u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_55fa68:
    // 0x55fa68: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x55fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
label_55fa6c:
    // 0x55fa6c: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x55fa6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_55fa70:
    // 0x55fa70: 0x3444fa35  ori         $a0, $v0, 0xFA35
    ctx->pc = 0x55fa70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_55fa74:
    // 0x55fa74: 0x44872800  mtc1        $a3, $f5
    ctx->pc = 0x55fa74u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_55fa78:
    // 0x55fa78: 0x3c0240d5  lui         $v0, 0x40D5
    ctx->pc = 0x55fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16597 << 16));
label_55fa7c:
    // 0x55fa7c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x55fa7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_55fa80:
    // 0x55fa80: 0x0  nop
    ctx->pc = 0x55fa80u;
    // NOP
label_55fa84:
    // 0x55fa84: 0x46052018  adda.s      $f4, $f5
    ctx->pc = 0x55fa84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_55fa88:
    // 0x55fa88: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x55fa88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_55fa8c:
    // 0x55fa8c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x55fa8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55fa90:
    // 0x55fa90: 0x34435555  ori         $v1, $v0, 0x5555
    ctx->pc = 0x55fa90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
label_55fa94:
    // 0x55fa94: 0x4607315d  msub.s      $f5, $f6, $f7
    ctx->pc = 0x55fa94u;
    ctx->f[5] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
label_55fa98:
    // 0x55fa98: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x55fa98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55fa9c:
    // 0x55fa9c: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x55fa9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_55faa0:
    // 0x55faa0: 0x4614105d  msub.s      $f1, $f2, $f20
    ctx->pc = 0x55faa0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
label_55faa4:
    // 0x55faa4: 0x46051882  mul.s       $f2, $f3, $f5
    ctx->pc = 0x55faa4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_55faa8:
    // 0x55faa8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x55faa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_55faac:
    // 0x55faac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x55faacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55fab0:
    // 0x55fab0: 0x46062018  adda.s      $f4, $f6
    ctx->pc = 0x55fab0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
label_55fab4:
    // 0x55fab4: 0x4615001d  msub.s      $f0, $f0, $f21
    ctx->pc = 0x55fab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[21]));
label_55fab8:
    // 0x55fab8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x55fab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_55fabc:
    // 0x55fabc: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x55fabcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_55fac0:
    // 0x55fac0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x55fac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_55fac4:
    // 0x55fac4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x55fac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_55fac8:
    // 0x55fac8: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x55fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_55facc:
    // 0x55facc: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x55faccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_55fad0:
    // 0x55fad0: 0x8e710050  lw          $s1, 0x50($s3)
    ctx->pc = 0x55fad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_55fad4:
    // 0x55fad4: 0xc088b74  jal         func_222DD0
label_55fad8:
    if (ctx->pc == 0x55FAD8u) {
        ctx->pc = 0x55FAD8u;
            // 0x55fad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55FADCu;
        goto label_55fadc;
    }
    ctx->pc = 0x55FAD4u;
    SET_GPR_U32(ctx, 31, 0x55FADCu);
    ctx->pc = 0x55FAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FAD4u;
            // 0x55fad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FADCu; }
        if (ctx->pc != 0x55FADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FADCu; }
        if (ctx->pc != 0x55FADCu) { return; }
    }
    ctx->pc = 0x55FADCu;
label_55fadc:
    // 0x55fadc: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x55fadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_55fae0:
    // 0x55fae0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x55fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_55fae4:
    // 0x55fae4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x55fae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_55fae8:
    // 0x55fae8: 0x320f809  jalr        $t9
label_55faec:
    if (ctx->pc == 0x55FAECu) {
        ctx->pc = 0x55FAECu;
            // 0x55faec: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x55FAF0u;
        goto label_55faf0;
    }
    ctx->pc = 0x55FAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55FAF0u);
        ctx->pc = 0x55FAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FAE8u;
            // 0x55faec: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55FAF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55FAF0u; }
            if (ctx->pc != 0x55FAF0u) { return; }
        }
        }
    }
    ctx->pc = 0x55FAF0u;
label_55faf0:
    // 0x55faf0: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x55faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_55faf4:
    // 0x55faf4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x55faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_55faf8:
    // 0x55faf8: 0x34466666  ori         $a2, $v0, 0x6666
    ctx->pc = 0x55faf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_55fafc:
    // 0x55fafc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x55fafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55fb00:
    // 0x55fb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x55fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55fb04:
    // 0x55fb04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x55fb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55fb08:
    // 0x55fb08: 0xac660160  sw          $a2, 0x160($v1)
    ctx->pc = 0x55fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 6));
label_55fb0c:
    // 0x55fb0c: 0xae620084  sw          $v0, 0x84($s3)
    ctx->pc = 0x55fb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
label_55fb10:
    // 0x55fb10: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x55fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55fb14:
    // 0x55fb14: 0xc0e32a4  jal         func_38CA90
label_55fb18:
    if (ctx->pc == 0x55FB18u) {
        ctx->pc = 0x55FB18u;
            // 0x55fb18: 0xe6600074  swc1        $f0, 0x74($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
        ctx->pc = 0x55FB1Cu;
        goto label_55fb1c;
    }
    ctx->pc = 0x55FB14u;
    SET_GPR_U32(ctx, 31, 0x55FB1Cu);
    ctx->pc = 0x55FB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FB14u;
            // 0x55fb18: 0xe6600074  swc1        $f0, 0x74($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FB1Cu; }
        if (ctx->pc != 0x55FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FB1Cu; }
        if (ctx->pc != 0x55FB1Cu) { return; }
    }
    ctx->pc = 0x55FB1Cu;
label_55fb1c:
    // 0x55fb1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x55fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55fb20:
    // 0x55fb20: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x55fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_55fb24:
    // 0x55fb24: 0xae6300b4  sw          $v1, 0xB4($s3)
    ctx->pc = 0x55fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 3));
label_55fb28:
    // 0x55fb28: 0xa262004c  sb          $v0, 0x4C($s3)
    ctx->pc = 0x55fb28u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 76), (uint8_t)GPR_U32(ctx, 2));
label_55fb2c:
    // 0x55fb2c: 0x0  nop
    ctx->pc = 0x55fb2cu;
    // NOP
label_55fb30:
    // 0x55fb30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x55fb30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_55fb34:
    // 0x55fb34: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x55fb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_55fb38:
    // 0x55fb38: 0x5440ff0a  bnel        $v0, $zero, . + 4 + (-0xF6 << 2)
label_55fb3c:
    if (ctx->pc == 0x55FB3Cu) {
        ctx->pc = 0x55FB3Cu;
            // 0x55fb3c: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->pc = 0x55FB40u;
        goto label_55fb40;
    }
    ctx->pc = 0x55FB38u;
    {
        const bool branch_taken_0x55fb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x55fb38) {
            ctx->pc = 0x55FB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55FB38u;
            // 0x55fb3c: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55F764u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_55f764;
        }
    }
    ctx->pc = 0x55FB40u;
label_55fb40:
    // 0x55fb40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x55fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_55fb44:
    // 0x55fb44: 0x2442dfa0  addiu       $v0, $v0, -0x2060
    ctx->pc = 0x55fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959008));
label_55fb48:
    // 0x55fb48: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x55fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_55fb4c:
    // 0x55fb4c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x55fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_55fb50:
    // 0x55fb50: 0xc07f7a4  jal         func_1FDE90
label_55fb54:
    if (ctx->pc == 0x55FB54u) {
        ctx->pc = 0x55FB54u;
            // 0x55fb54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x55FB58u;
        goto label_55fb58;
    }
    ctx->pc = 0x55FB50u;
    SET_GPR_U32(ctx, 31, 0x55FB58u);
    ctx->pc = 0x55FB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FB50u;
            // 0x55fb54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDE90u;
    if (runtime->hasFunction(0x1FDE90u)) {
        auto targetFn = runtime->lookupFunction(0x1FDE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FB58u; }
        if (ctx->pc != 0x55FB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDE90_0x1fde90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FB58u; }
        if (ctx->pc != 0x55FB58u) { return; }
    }
    ctx->pc = 0x55FB58u;
label_55fb58:
    // 0x55fb58: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x55fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_55fb5c:
    // 0x55fb5c: 0xc0793f4  jal         func_1E4FD0
label_55fb60:
    if (ctx->pc == 0x55FB60u) {
        ctx->pc = 0x55FB60u;
            // 0x55fb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55FB64u;
        goto label_55fb64;
    }
    ctx->pc = 0x55FB5Cu;
    SET_GPR_U32(ctx, 31, 0x55FB64u);
    ctx->pc = 0x55FB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55FB5Cu;
            // 0x55fb60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4FD0u;
    if (runtime->hasFunction(0x1E4FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E4FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FB64u; }
        if (ctx->pc != 0x55FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4FD0_0x1e4fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55FB64u; }
        if (ctx->pc != 0x55FB64u) { return; }
    }
    ctx->pc = 0x55FB64u;
label_55fb64:
    // 0x55fb64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x55fb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_55fb68:
    // 0x55fb68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55fb6c:
    // 0x55fb6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x55fb6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55fb70:
    // 0x55fb70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55fb74:
    // 0x55fb74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x55fb74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55fb78:
    // 0x55fb78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55fb78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55fb7c:
    // 0x55fb7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x55fb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55fb80:
    // 0x55fb80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x55fb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_55fb84:
    // 0x55fb84: 0x3e00008  jr          $ra
label_55fb88:
    if (ctx->pc == 0x55FB88u) {
        ctx->pc = 0x55FB88u;
            // 0x55fb88: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x55FB8Cu;
        goto label_55fb8c;
    }
    ctx->pc = 0x55FB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55FB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55FB84u;
            // 0x55fb88: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55FB8Cu;
label_55fb8c:
    // 0x55fb8c: 0x0  nop
    ctx->pc = 0x55fb8cu;
    // NOP
}
