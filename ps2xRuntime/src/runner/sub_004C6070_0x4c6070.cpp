#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C6070
// Address: 0x4c6070 - 0x4c63e0
void sub_004C6070_0x4c6070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C6070_0x4c6070");
#endif

    switch (ctx->pc) {
        case 0x4c6070u: goto label_4c6070;
        case 0x4c6074u: goto label_4c6074;
        case 0x4c6078u: goto label_4c6078;
        case 0x4c607cu: goto label_4c607c;
        case 0x4c6080u: goto label_4c6080;
        case 0x4c6084u: goto label_4c6084;
        case 0x4c6088u: goto label_4c6088;
        case 0x4c608cu: goto label_4c608c;
        case 0x4c6090u: goto label_4c6090;
        case 0x4c6094u: goto label_4c6094;
        case 0x4c6098u: goto label_4c6098;
        case 0x4c609cu: goto label_4c609c;
        case 0x4c60a0u: goto label_4c60a0;
        case 0x4c60a4u: goto label_4c60a4;
        case 0x4c60a8u: goto label_4c60a8;
        case 0x4c60acu: goto label_4c60ac;
        case 0x4c60b0u: goto label_4c60b0;
        case 0x4c60b4u: goto label_4c60b4;
        case 0x4c60b8u: goto label_4c60b8;
        case 0x4c60bcu: goto label_4c60bc;
        case 0x4c60c0u: goto label_4c60c0;
        case 0x4c60c4u: goto label_4c60c4;
        case 0x4c60c8u: goto label_4c60c8;
        case 0x4c60ccu: goto label_4c60cc;
        case 0x4c60d0u: goto label_4c60d0;
        case 0x4c60d4u: goto label_4c60d4;
        case 0x4c60d8u: goto label_4c60d8;
        case 0x4c60dcu: goto label_4c60dc;
        case 0x4c60e0u: goto label_4c60e0;
        case 0x4c60e4u: goto label_4c60e4;
        case 0x4c60e8u: goto label_4c60e8;
        case 0x4c60ecu: goto label_4c60ec;
        case 0x4c60f0u: goto label_4c60f0;
        case 0x4c60f4u: goto label_4c60f4;
        case 0x4c60f8u: goto label_4c60f8;
        case 0x4c60fcu: goto label_4c60fc;
        case 0x4c6100u: goto label_4c6100;
        case 0x4c6104u: goto label_4c6104;
        case 0x4c6108u: goto label_4c6108;
        case 0x4c610cu: goto label_4c610c;
        case 0x4c6110u: goto label_4c6110;
        case 0x4c6114u: goto label_4c6114;
        case 0x4c6118u: goto label_4c6118;
        case 0x4c611cu: goto label_4c611c;
        case 0x4c6120u: goto label_4c6120;
        case 0x4c6124u: goto label_4c6124;
        case 0x4c6128u: goto label_4c6128;
        case 0x4c612cu: goto label_4c612c;
        case 0x4c6130u: goto label_4c6130;
        case 0x4c6134u: goto label_4c6134;
        case 0x4c6138u: goto label_4c6138;
        case 0x4c613cu: goto label_4c613c;
        case 0x4c6140u: goto label_4c6140;
        case 0x4c6144u: goto label_4c6144;
        case 0x4c6148u: goto label_4c6148;
        case 0x4c614cu: goto label_4c614c;
        case 0x4c6150u: goto label_4c6150;
        case 0x4c6154u: goto label_4c6154;
        case 0x4c6158u: goto label_4c6158;
        case 0x4c615cu: goto label_4c615c;
        case 0x4c6160u: goto label_4c6160;
        case 0x4c6164u: goto label_4c6164;
        case 0x4c6168u: goto label_4c6168;
        case 0x4c616cu: goto label_4c616c;
        case 0x4c6170u: goto label_4c6170;
        case 0x4c6174u: goto label_4c6174;
        case 0x4c6178u: goto label_4c6178;
        case 0x4c617cu: goto label_4c617c;
        case 0x4c6180u: goto label_4c6180;
        case 0x4c6184u: goto label_4c6184;
        case 0x4c6188u: goto label_4c6188;
        case 0x4c618cu: goto label_4c618c;
        case 0x4c6190u: goto label_4c6190;
        case 0x4c6194u: goto label_4c6194;
        case 0x4c6198u: goto label_4c6198;
        case 0x4c619cu: goto label_4c619c;
        case 0x4c61a0u: goto label_4c61a0;
        case 0x4c61a4u: goto label_4c61a4;
        case 0x4c61a8u: goto label_4c61a8;
        case 0x4c61acu: goto label_4c61ac;
        case 0x4c61b0u: goto label_4c61b0;
        case 0x4c61b4u: goto label_4c61b4;
        case 0x4c61b8u: goto label_4c61b8;
        case 0x4c61bcu: goto label_4c61bc;
        case 0x4c61c0u: goto label_4c61c0;
        case 0x4c61c4u: goto label_4c61c4;
        case 0x4c61c8u: goto label_4c61c8;
        case 0x4c61ccu: goto label_4c61cc;
        case 0x4c61d0u: goto label_4c61d0;
        case 0x4c61d4u: goto label_4c61d4;
        case 0x4c61d8u: goto label_4c61d8;
        case 0x4c61dcu: goto label_4c61dc;
        case 0x4c61e0u: goto label_4c61e0;
        case 0x4c61e4u: goto label_4c61e4;
        case 0x4c61e8u: goto label_4c61e8;
        case 0x4c61ecu: goto label_4c61ec;
        case 0x4c61f0u: goto label_4c61f0;
        case 0x4c61f4u: goto label_4c61f4;
        case 0x4c61f8u: goto label_4c61f8;
        case 0x4c61fcu: goto label_4c61fc;
        case 0x4c6200u: goto label_4c6200;
        case 0x4c6204u: goto label_4c6204;
        case 0x4c6208u: goto label_4c6208;
        case 0x4c620cu: goto label_4c620c;
        case 0x4c6210u: goto label_4c6210;
        case 0x4c6214u: goto label_4c6214;
        case 0x4c6218u: goto label_4c6218;
        case 0x4c621cu: goto label_4c621c;
        case 0x4c6220u: goto label_4c6220;
        case 0x4c6224u: goto label_4c6224;
        case 0x4c6228u: goto label_4c6228;
        case 0x4c622cu: goto label_4c622c;
        case 0x4c6230u: goto label_4c6230;
        case 0x4c6234u: goto label_4c6234;
        case 0x4c6238u: goto label_4c6238;
        case 0x4c623cu: goto label_4c623c;
        case 0x4c6240u: goto label_4c6240;
        case 0x4c6244u: goto label_4c6244;
        case 0x4c6248u: goto label_4c6248;
        case 0x4c624cu: goto label_4c624c;
        case 0x4c6250u: goto label_4c6250;
        case 0x4c6254u: goto label_4c6254;
        case 0x4c6258u: goto label_4c6258;
        case 0x4c625cu: goto label_4c625c;
        case 0x4c6260u: goto label_4c6260;
        case 0x4c6264u: goto label_4c6264;
        case 0x4c6268u: goto label_4c6268;
        case 0x4c626cu: goto label_4c626c;
        case 0x4c6270u: goto label_4c6270;
        case 0x4c6274u: goto label_4c6274;
        case 0x4c6278u: goto label_4c6278;
        case 0x4c627cu: goto label_4c627c;
        case 0x4c6280u: goto label_4c6280;
        case 0x4c6284u: goto label_4c6284;
        case 0x4c6288u: goto label_4c6288;
        case 0x4c628cu: goto label_4c628c;
        case 0x4c6290u: goto label_4c6290;
        case 0x4c6294u: goto label_4c6294;
        case 0x4c6298u: goto label_4c6298;
        case 0x4c629cu: goto label_4c629c;
        case 0x4c62a0u: goto label_4c62a0;
        case 0x4c62a4u: goto label_4c62a4;
        case 0x4c62a8u: goto label_4c62a8;
        case 0x4c62acu: goto label_4c62ac;
        case 0x4c62b0u: goto label_4c62b0;
        case 0x4c62b4u: goto label_4c62b4;
        case 0x4c62b8u: goto label_4c62b8;
        case 0x4c62bcu: goto label_4c62bc;
        case 0x4c62c0u: goto label_4c62c0;
        case 0x4c62c4u: goto label_4c62c4;
        case 0x4c62c8u: goto label_4c62c8;
        case 0x4c62ccu: goto label_4c62cc;
        case 0x4c62d0u: goto label_4c62d0;
        case 0x4c62d4u: goto label_4c62d4;
        case 0x4c62d8u: goto label_4c62d8;
        case 0x4c62dcu: goto label_4c62dc;
        case 0x4c62e0u: goto label_4c62e0;
        case 0x4c62e4u: goto label_4c62e4;
        case 0x4c62e8u: goto label_4c62e8;
        case 0x4c62ecu: goto label_4c62ec;
        case 0x4c62f0u: goto label_4c62f0;
        case 0x4c62f4u: goto label_4c62f4;
        case 0x4c62f8u: goto label_4c62f8;
        case 0x4c62fcu: goto label_4c62fc;
        case 0x4c6300u: goto label_4c6300;
        case 0x4c6304u: goto label_4c6304;
        case 0x4c6308u: goto label_4c6308;
        case 0x4c630cu: goto label_4c630c;
        case 0x4c6310u: goto label_4c6310;
        case 0x4c6314u: goto label_4c6314;
        case 0x4c6318u: goto label_4c6318;
        case 0x4c631cu: goto label_4c631c;
        case 0x4c6320u: goto label_4c6320;
        case 0x4c6324u: goto label_4c6324;
        case 0x4c6328u: goto label_4c6328;
        case 0x4c632cu: goto label_4c632c;
        case 0x4c6330u: goto label_4c6330;
        case 0x4c6334u: goto label_4c6334;
        case 0x4c6338u: goto label_4c6338;
        case 0x4c633cu: goto label_4c633c;
        case 0x4c6340u: goto label_4c6340;
        case 0x4c6344u: goto label_4c6344;
        case 0x4c6348u: goto label_4c6348;
        case 0x4c634cu: goto label_4c634c;
        case 0x4c6350u: goto label_4c6350;
        case 0x4c6354u: goto label_4c6354;
        case 0x4c6358u: goto label_4c6358;
        case 0x4c635cu: goto label_4c635c;
        case 0x4c6360u: goto label_4c6360;
        case 0x4c6364u: goto label_4c6364;
        case 0x4c6368u: goto label_4c6368;
        case 0x4c636cu: goto label_4c636c;
        case 0x4c6370u: goto label_4c6370;
        case 0x4c6374u: goto label_4c6374;
        case 0x4c6378u: goto label_4c6378;
        case 0x4c637cu: goto label_4c637c;
        case 0x4c6380u: goto label_4c6380;
        case 0x4c6384u: goto label_4c6384;
        case 0x4c6388u: goto label_4c6388;
        case 0x4c638cu: goto label_4c638c;
        case 0x4c6390u: goto label_4c6390;
        case 0x4c6394u: goto label_4c6394;
        case 0x4c6398u: goto label_4c6398;
        case 0x4c639cu: goto label_4c639c;
        case 0x4c63a0u: goto label_4c63a0;
        case 0x4c63a4u: goto label_4c63a4;
        case 0x4c63a8u: goto label_4c63a8;
        case 0x4c63acu: goto label_4c63ac;
        case 0x4c63b0u: goto label_4c63b0;
        case 0x4c63b4u: goto label_4c63b4;
        case 0x4c63b8u: goto label_4c63b8;
        case 0x4c63bcu: goto label_4c63bc;
        case 0x4c63c0u: goto label_4c63c0;
        case 0x4c63c4u: goto label_4c63c4;
        case 0x4c63c8u: goto label_4c63c8;
        case 0x4c63ccu: goto label_4c63cc;
        case 0x4c63d0u: goto label_4c63d0;
        case 0x4c63d4u: goto label_4c63d4;
        case 0x4c63d8u: goto label_4c63d8;
        case 0x4c63dcu: goto label_4c63dc;
        default: break;
    }

    ctx->pc = 0x4c6070u;

label_4c6070:
    // 0x4c6070: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4c6070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4c6074:
    // 0x4c6074: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x4c6074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4c6078:
    // 0x4c6078: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4c6078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4c607c:
    // 0x4c607c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4c607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_4c6080:
    // 0x4c6080: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4c6080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4c6084:
    // 0x4c6084: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c6084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c6088:
    // 0x4c6088: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4c6088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4c608c:
    // 0x4c608c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4c608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4c6090:
    // 0x4c6090: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4c6090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4c6094:
    // 0x4c6094: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4c6094u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4c6098:
    // 0x4c6098: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4c6098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4c609c:
    // 0x4c609c: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x4c609cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_4c60a0:
    // 0x4c60a0: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x4c60a0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_4c60a4:
    // 0x4c60a4: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x4c60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_4c60a8:
    // 0x4c60a8: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x4c60a8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4c60ac:
    // 0x4c60ac: 0x2652a3e0  addiu       $s2, $s2, -0x5C20
    ctx->pc = 0x4c60acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943712));
label_4c60b0:
    // 0x4c60b0: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x4c60b0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4c60b4:
    // 0x4c60b4: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x4c60b4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_4c60b8:
    // 0x4c60b8: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x4c60b8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_4c60bc:
    // 0x4c60bc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x4c60bcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4c60c0:
    // 0x4c60c0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x4c60c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4c60c4:
    // 0x4c60c4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4c60c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4c60c8:
    // 0x4c60c8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4c60c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4c60cc:
    // 0x4c60cc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4c60ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4c60d0:
    // 0x4c60d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c60d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c60d4:
    // 0x4c60d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4c60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4c60d8:
    // 0x4c60d8: 0xc497000c  lwc1        $f23, 0xC($a0)
    ctx->pc = 0x4c60d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4c60dc:
    // 0x4c60dc: 0x90930008  lbu         $s3, 0x8($a0)
    ctx->pc = 0x4c60dcu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_4c60e0:
    // 0x4c60e0: 0x90500116  lbu         $s0, 0x116($v0)
    ctx->pc = 0x4c60e0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_4c60e4:
    // 0x4c60e4: 0x213082a  slt         $at, $s0, $s3
    ctx->pc = 0x4c60e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_4c60e8:
    // 0x4c60e8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4c60ec:
    if (ctx->pc == 0x4C60ECu) {
        ctx->pc = 0x4C60ECu;
            // 0x4c60ec: 0x26312120  addiu       $s1, $s1, 0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8480));
        ctx->pc = 0x4C60F0u;
        goto label_4c60f0;
    }
    ctx->pc = 0x4C60E8u;
    {
        const bool branch_taken_0x4c60e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C60ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C60E8u;
            // 0x4c60ec: 0x26312120  addiu       $s1, $s1, 0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c60e8) {
            ctx->pc = 0x4C60F4u;
            goto label_4c60f4;
        }
    }
    ctx->pc = 0x4C60F0u;
label_4c60f0:
    // 0x4c60f0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x4c60f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c60f4:
    // 0x4c60f4: 0x84660004  lh          $a2, 0x4($v1)
    ctx->pc = 0x4c60f4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_4c60f8:
    // 0x4c60f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c60fc:
    // 0x4c60fc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4c60fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4c6100:
    // 0x4c6100: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4c6100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c6104:
    // 0x4c6104: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4c6104u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c6108:
    // 0x4c6108: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x4c6108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_4c610c:
    // 0x4c610c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4c610cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4c6110:
    // 0x4c6110: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c6110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c6114:
    // 0x4c6114: 0xc0506ac  jal         func_141AB0
label_4c6118:
    if (ctx->pc == 0x4C6118u) {
        ctx->pc = 0x4C6118u;
            // 0x4c6118: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4C611Cu;
        goto label_4c611c;
    }
    ctx->pc = 0x4C6114u;
    SET_GPR_U32(ctx, 31, 0x4C611Cu);
    ctx->pc = 0x4C6118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6114u;
            // 0x4c6118: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C611Cu; }
        if (ctx->pc != 0x4C611Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C611Cu; }
        if (ctx->pc != 0x4C611Cu) { return; }
    }
    ctx->pc = 0x4C611Cu;
label_4c611c:
    // 0x4c611c: 0xc643012c  lwc1        $f3, 0x12C($s2)
    ctx->pc = 0x4c611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c6120:
    // 0x4c6120: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4c6120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4c6124:
    // 0x4c6124: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x4c6124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c6128:
    // 0x4c6128: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x4c6128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_4c612c:
    // 0x4c612c: 0x461718c2  mul.s       $f3, $f3, $f23
    ctx->pc = 0x4c612cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
label_4c6130:
    // 0x4c6130: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x4c6130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_4c6134:
    // 0x4c6134: 0x46032f42  mul.s       $f29, $f5, $f3
    ctx->pc = 0x4c6134u;
    ctx->f[29] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_4c6138:
    // 0x4c6138: 0x46170702  mul.s       $f28, $f0, $f23
    ctx->pc = 0x4c6138u;
    ctx->f[28] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_4c613c:
    // 0x4c613c: 0xc6430178  lwc1        $f3, 0x178($s2)
    ctx->pc = 0x4c613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c6140:
    // 0x4c6140: 0xc640017c  lwc1        $f0, 0x17C($s2)
    ctx->pc = 0x4c6140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c6144:
    // 0x4c6144: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4c6144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4c6148:
    // 0x4c6148: 0x0  nop
    ctx->pc = 0x4c6148u;
    // NOP
label_4c614c:
    // 0x4c614c: 0x461718c2  mul.s       $f3, $f3, $f23
    ctx->pc = 0x4c614cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
label_4c6150:
    // 0x4c6150: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4c6150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4c6154:
    // 0x4c6154: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x4c6154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_4c6158:
    // 0x4c6158: 0x460316c2  mul.s       $f27, $f2, $f3
    ctx->pc = 0x4c6158u;
    ctx->f[27] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_4c615c:
    // 0x4c615c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4c615cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4c6160:
    // 0x4c6160: 0xc6440128  lwc1        $f4, 0x128($s2)
    ctx->pc = 0x4c6160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c6164:
    // 0x4c6164: 0x46002e82  mul.s       $f26, $f5, $f0
    ctx->pc = 0x4c6164u;
    ctx->f[26] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_4c6168:
    // 0x4c6168: 0x46172782  mul.s       $f30, $f4, $f23
    ctx->pc = 0x4c6168u;
    ctx->f[30] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
label_4c616c:
    // 0x4c616c: 0xc6430138  lwc1        $f3, 0x138($s2)
    ctx->pc = 0x4c616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4c6170:
    // 0x4c6170: 0xc642013c  lwc1        $f2, 0x13C($s2)
    ctx->pc = 0x4c6170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c6174:
    // 0x4c6174: 0xc644015c  lwc1        $f4, 0x15C($s2)
    ctx->pc = 0x4c6174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4c6178:
    // 0x4c6178: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c6178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c617c:
    // 0x4c617c: 0x461718c2  mul.s       $f3, $f3, $f23
    ctx->pc = 0x4c617cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
label_4c6180:
    // 0x4c6180: 0xc6860010  lwc1        $f6, 0x10($s4)
    ctx->pc = 0x4c6180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4c6184:
    // 0x4c6184: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x4c6184u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
label_4c6188:
    // 0x4c6188: 0x46172102  mul.s       $f4, $f4, $f23
    ctx->pc = 0x4c6188u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[23]);
label_4c618c:
    // 0x4c618c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x4c618cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4c6190:
    // 0x4c6190: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4c6190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c6194:
    // 0x4c6194: 0x0  nop
    ctx->pc = 0x4c6194u;
    // NOP
label_4c6198:
    // 0x4c6198: 0x461e0018  adda.s      $f0, $f30
    ctx->pc = 0x4c6198u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[30]);
label_4c619c:
    // 0x4c619c: 0x461c085c  madd.s      $f1, $f1, $f28
    ctx->pc = 0x4c619cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[28]));
label_4c61a0:
    // 0x4c61a0: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x4c61a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_4c61a4:
    // 0x4c61a4: 0x46033642  mul.s       $f25, $f6, $f3
    ctx->pc = 0x4c61a4u;
    ctx->f[25] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_4c61a8:
    // 0x4c61a8: 0x4601d800  add.s       $f0, $f27, $f1
    ctx->pc = 0x4c61a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[27], ctx->f[1]);
label_4c61ac:
    // 0x4c61ac: 0x4600c800  add.s       $f0, $f25, $f0
    ctx->pc = 0x4c61acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_4c61b0:
    // 0x4c61b0: 0x46042d82  mul.s       $f22, $f5, $f4
    ctx->pc = 0x4c61b0u;
    ctx->f[22] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_4c61b4:
    // 0x4c61b4: 0x46022e02  mul.s       $f24, $f5, $f2
    ctx->pc = 0x4c61b4u;
    ctx->f[24] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4c61b8:
    // 0x4c61b8: 0xc0bcf34  jal         func_2F3CD0
label_4c61bc:
    if (ctx->pc == 0x4C61BCu) {
        ctx->pc = 0x4C61BCu;
            // 0x4c61bc: 0x46002d5d  msub.s      $f21, $f5, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
        ctx->pc = 0x4C61C0u;
        goto label_4c61c0;
    }
    ctx->pc = 0x4C61B8u;
    SET_GPR_U32(ctx, 31, 0x4C61C0u);
    ctx->pc = 0x4C61BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C61B8u;
            // 0x4c61bc: 0x46002d5d  msub.s      $f21, $f5, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C61C0u; }
        if (ctx->pc != 0x4C61C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C61C0u; }
        if (ctx->pc != 0x4C61C0u) { return; }
    }
    ctx->pc = 0x4C61C0u;
label_4c61c0:
    // 0x4c61c0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x4c61c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c61c4:
    // 0x4c61c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c61c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c61c8:
    // 0x4c61c8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c61c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c61cc:
    // 0x4c61cc: 0x320f809  jalr        $t9
label_4c61d0:
    if (ctx->pc == 0x4C61D0u) {
        ctx->pc = 0x4C61D0u;
            // 0x4c61d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4C61D4u;
        goto label_4c61d4;
    }
    ctx->pc = 0x4C61CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C61D4u);
        ctx->pc = 0x4C61D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C61CCu;
            // 0x4c61d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C61D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C61D4u; }
            if (ctx->pc != 0x4C61D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C61D4u;
label_4c61d4:
    // 0x4c61d4: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4c61d4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c61d8:
    // 0x4c61d8: 0x4616a5c0  add.s       $f23, $f20, $f22
    ctx->pc = 0x4c61d8u;
    ctx->f[23] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_4c61dc:
    // 0x4c61dc: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x4c61dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_4c61e0:
    // 0x4c61e0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c61e4:
    // 0x4c61e4: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x4c61e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c61e8:
    // 0x4c61e8: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x4c61e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_4c61ec:
    // 0x4c61ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c61f0:
    // 0x4c61f0: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c61f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c61f4:
    // 0x4c61f4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c61f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c61f8:
    // 0x4c61f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c61fc:
    // 0x4c61fc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c61fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c6200:
    // 0x4c6200: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4c6200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c6204:
    // 0x4c6204: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c6204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c6208:
    // 0x4c6208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c6208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c620c:
    // 0x4c620c: 0x4616a581  sub.s       $f22, $f20, $f22
    ctx->pc = 0x4c620cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_4c6210:
    // 0x4c6210: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c6210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c6214:
    // 0x4c6214: 0x461cab00  add.s       $f12, $f21, $f28
    ctx->pc = 0x4c6214u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[28]);
label_4c6218:
    // 0x4c6218: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x4c6218u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_4c621c:
    // 0x4c621c: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x4c621cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_4c6220:
    // 0x4c6220: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c6220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c6224:
    // 0x4c6224: 0xc0bc284  jal         func_2F0A10
label_4c6228:
    if (ctx->pc == 0x4C6228u) {
        ctx->pc = 0x4C6228u;
            // 0x4c6228: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x4C622Cu;
        goto label_4c622c;
    }
    ctx->pc = 0x4C6224u;
    SET_GPR_U32(ctx, 31, 0x4C622Cu);
    ctx->pc = 0x4C6228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6224u;
            // 0x4c6228: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C622Cu; }
        if (ctx->pc != 0x4C622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C622Cu; }
        if (ctx->pc != 0x4C622Cu) { return; }
    }
    ctx->pc = 0x4C622Cu;
label_4c622c:
    // 0x4c622c: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4c622cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c6230:
    // 0x4c6230: 0x461cad40  add.s       $f21, $f21, $f28
    ctx->pc = 0x4c6230u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[28]);
label_4c6234:
    // 0x4c6234: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c6234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c6238:
    // 0x4c6238: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c6238u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c623c:
    // 0x4c623c: 0x2023025  or          $a2, $s0, $v0
    ctx->pc = 0x4c623cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4c6240:
    // 0x4c6240: 0x26450120  addiu       $a1, $s2, 0x120
    ctx->pc = 0x4c6240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
label_4c6244:
    // 0x4c6244: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c6244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c6248:
    // 0x4c6248: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c6248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c624c:
    // 0x4c624c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4c624cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c6250:
    // 0x4c6250: 0x0  nop
    ctx->pc = 0x4c6250u;
    // NOP
label_4c6254:
    // 0x4c6254: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c6254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c6258:
    // 0x4c6258: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c6258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c625c:
    // 0x4c625c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c625cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c6260:
    // 0x4c6260: 0x0  nop
    ctx->pc = 0x4c6260u;
    // NOP
label_4c6264:
    // 0x4c6264: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c6264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c6268:
    // 0x4c6268: 0x461da341  sub.s       $f13, $f20, $f29
    ctx->pc = 0x4c6268u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[29]);
label_4c626c:
    // 0x4c626c: 0x461da3c0  add.s       $f15, $f20, $f29
    ctx->pc = 0x4c626cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[29]);
label_4c6270:
    // 0x4c6270: 0x461eab80  add.s       $f14, $f21, $f30
    ctx->pc = 0x4c6270u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
label_4c6274:
    // 0x4c6274: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c6274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c6278:
    // 0x4c6278: 0xc0bc284  jal         func_2F0A10
label_4c627c:
    if (ctx->pc == 0x4C627Cu) {
        ctx->pc = 0x4C627Cu;
            // 0x4c627c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4C6280u;
        goto label_4c6280;
    }
    ctx->pc = 0x4C6278u;
    SET_GPR_U32(ctx, 31, 0x4C6280u);
    ctx->pc = 0x4C627Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6278u;
            // 0x4c627c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6280u; }
        if (ctx->pc != 0x4C6280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6280u; }
        if (ctx->pc != 0x4C6280u) { return; }
    }
    ctx->pc = 0x4C6280u;
label_4c6280:
    // 0x4c6280: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4c6280u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c6284:
    // 0x4c6284: 0x461ead40  add.s       $f21, $f21, $f30
    ctx->pc = 0x4c6284u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[30]);
label_4c6288:
    // 0x4c6288: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c6288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c628c:
    // 0x4c628c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c628cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c6290:
    // 0x4c6290: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4c6290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c6294:
    // 0x4c6294: 0x26450150  addiu       $a1, $s2, 0x150
    ctx->pc = 0x4c6294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_4c6298:
    // 0x4c6298: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c6298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c629c:
    // 0x4c629c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x4c629cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c62a0:
    // 0x4c62a0: 0x0  nop
    ctx->pc = 0x4c62a0u;
    // NOP
label_4c62a4:
    // 0x4c62a4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c62a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c62a8:
    // 0x4c62a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c62a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c62ac:
    // 0x4c62ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c62acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c62b0:
    // 0x4c62b0: 0x0  nop
    ctx->pc = 0x4c62b0u;
    // NOP
label_4c62b4:
    // 0x4c62b4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c62b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c62b8:
    // 0x4c62b8: 0x461cab80  add.s       $f14, $f21, $f28
    ctx->pc = 0x4c62b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[28]);
label_4c62bc:
    // 0x4c62bc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x4c62bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_4c62c0:
    // 0x4c62c0: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x4c62c0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
label_4c62c4:
    // 0x4c62c4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c62c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c62c8:
    // 0x4c62c8: 0xc0bc284  jal         func_2F0A10
label_4c62cc:
    if (ctx->pc == 0x4C62CCu) {
        ctx->pc = 0x4C62CCu;
            // 0x4c62cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4C62D0u;
        goto label_4c62d0;
    }
    ctx->pc = 0x4C62C8u;
    SET_GPR_U32(ctx, 31, 0x4C62D0u);
    ctx->pc = 0x4C62CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C62C8u;
            // 0x4c62cc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C62D0u; }
        if (ctx->pc != 0x4C62D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C62D0u; }
        if (ctx->pc != 0x4C62D0u) { return; }
    }
    ctx->pc = 0x4C62D0u;
label_4c62d0:
    // 0x4c62d0: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4c62d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c62d4:
    // 0x4c62d4: 0x461cad40  add.s       $f21, $f21, $f28
    ctx->pc = 0x4c62d4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[28]);
label_4c62d8:
    // 0x4c62d8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c62dc:
    // 0x4c62dc: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c62dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c62e0:
    // 0x4c62e0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x4c62e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_4c62e4:
    // 0x4c62e4: 0x26450170  addiu       $a1, $s2, 0x170
    ctx->pc = 0x4c62e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
label_4c62e8:
    // 0x4c62e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c62ec:
    // 0x4c62ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c62ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c62f0:
    // 0x4c62f0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4c62f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c62f4:
    // 0x4c62f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c62f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c62f8:
    // 0x4c62f8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c62f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c62fc:
    // 0x4c62fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c62fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c6300:
    // 0x4c6300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c6300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c6304:
    // 0x4c6304: 0x0  nop
    ctx->pc = 0x4c6304u;
    // NOP
label_4c6308:
    // 0x4c6308: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c6308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c630c:
    // 0x4c630c: 0x461aa341  sub.s       $f13, $f20, $f26
    ctx->pc = 0x4c630cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[26]);
label_4c6310:
    // 0x4c6310: 0x461aa3c0  add.s       $f15, $f20, $f26
    ctx->pc = 0x4c6310u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
label_4c6314:
    // 0x4c6314: 0x461bab80  add.s       $f14, $f21, $f27
    ctx->pc = 0x4c6314u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[27]);
label_4c6318:
    // 0x4c6318: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c6318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c631c:
    // 0x4c631c: 0xc0bc284  jal         func_2F0A10
label_4c6320:
    if (ctx->pc == 0x4C6320u) {
        ctx->pc = 0x4C6320u;
            // 0x4c6320: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x4C6324u;
        goto label_4c6324;
    }
    ctx->pc = 0x4C631Cu;
    SET_GPR_U32(ctx, 31, 0x4C6324u);
    ctx->pc = 0x4C6320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C631Cu;
            // 0x4c6320: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6324u; }
        if (ctx->pc != 0x4C6324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6324u; }
        if (ctx->pc != 0x4C6324u) { return; }
    }
    ctx->pc = 0x4C6324u;
label_4c6324:
    // 0x4c6324: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4c6324u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4c6328:
    // 0x4c6328: 0x461bab00  add.s       $f12, $f21, $f27
    ctx->pc = 0x4c6328u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[27]);
label_4c632c:
    // 0x4c632c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c6330:
    // 0x4c6330: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4c6330u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4c6334:
    // 0x4c6334: 0x26450130  addiu       $a1, $s2, 0x130
    ctx->pc = 0x4c6334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
label_4c6338:
    // 0x4c6338: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4c6338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c633c:
    // 0x4c633c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c6340:
    // 0x4c6340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c6340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c6344:
    // 0x4c6344: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c6344u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c6348:
    // 0x4c6348: 0x0  nop
    ctx->pc = 0x4c6348u;
    // NOP
label_4c634c:
    // 0x4c634c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c634cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c6350:
    // 0x4c6350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c6350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c6354:
    // 0x4c6354: 0x0  nop
    ctx->pc = 0x4c6354u;
    // NOP
label_4c6358:
    // 0x4c6358: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c6358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c635c:
    // 0x4c635c: 0x46196380  add.s       $f14, $f12, $f25
    ctx->pc = 0x4c635cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[25]);
label_4c6360:
    // 0x4c6360: 0x4618a341  sub.s       $f13, $f20, $f24
    ctx->pc = 0x4c6360u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[24]);
label_4c6364:
    // 0x4c6364: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c6364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c6368:
    // 0x4c6368: 0xc0bc284  jal         func_2F0A10
label_4c636c:
    if (ctx->pc == 0x4C636Cu) {
        ctx->pc = 0x4C636Cu;
            // 0x4c636c: 0x4618a3c0  add.s       $f15, $f20, $f24 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
        ctx->pc = 0x4C6370u;
        goto label_4c6370;
    }
    ctx->pc = 0x4C6368u;
    SET_GPR_U32(ctx, 31, 0x4C6370u);
    ctx->pc = 0x4C636Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6368u;
            // 0x4c636c: 0x4618a3c0  add.s       $f15, $f20, $f24 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6370u; }
        if (ctx->pc != 0x4C6370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6370u; }
        if (ctx->pc != 0x4C6370u) { return; }
    }
    ctx->pc = 0x4C6370u;
label_4c6370:
    // 0x4c6370: 0xc0bcf34  jal         func_2F3CD0
label_4c6374:
    if (ctx->pc == 0x4C6374u) {
        ctx->pc = 0x4C6378u;
        goto label_4c6378;
    }
    ctx->pc = 0x4C6370u;
    SET_GPR_U32(ctx, 31, 0x4C6378u);
    ctx->pc = 0x2F3CD0u;
    if (runtime->hasFunction(0x2F3CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F3CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6378u; }
        if (ctx->pc != 0x4C6378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F3CD0_0x2f3cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C6378u; }
        if (ctx->pc != 0x4C6378u) { return; }
    }
    ctx->pc = 0x4C6378u;
label_4c6378:
    // 0x4c6378: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x4c6378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c637c:
    // 0x4c637c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c637cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c6380:
    // 0x4c6380: 0x320f809  jalr        $t9
label_4c6384:
    if (ctx->pc == 0x4C6384u) {
        ctx->pc = 0x4C6384u;
            // 0x4c6384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C6388u;
        goto label_4c6388;
    }
    ctx->pc = 0x4C6380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C6388u);
        ctx->pc = 0x4C6384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C6380u;
            // 0x4c6384: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C6388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C6388u; }
            if (ctx->pc != 0x4C6388u) { return; }
        }
        }
    }
    ctx->pc = 0x4C6388u;
label_4c6388:
    // 0x4c6388: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4c6388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4c638c:
    // 0x4c638c: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x4c638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_4c6390:
    // 0x4c6390: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4c6390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c6394:
    // 0x4c6394: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x4c6394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_4c6398:
    // 0x4c6398: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4c6398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c639c:
    // 0x4c639c: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x4c639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_4c63a0:
    // 0x4c63a0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4c63a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c63a4:
    // 0x4c63a4: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x4c63a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_4c63a8:
    // 0x4c63a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4c63a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c63ac:
    // 0x4c63ac: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x4c63acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4c63b0:
    // 0x4c63b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4c63b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c63b4:
    // 0x4c63b4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4c63b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4c63b8:
    // 0x4c63b8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4c63b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4c63bc:
    // 0x4c63bc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4c63bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4c63c0:
    // 0x4c63c0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4c63c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4c63c4:
    // 0x4c63c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4c63c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4c63c8:
    // 0x4c63c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c63c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c63cc:
    // 0x4c63cc: 0x3e00008  jr          $ra
label_4c63d0:
    if (ctx->pc == 0x4C63D0u) {
        ctx->pc = 0x4C63D0u;
            // 0x4c63d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C63D4u;
        goto label_4c63d4;
    }
    ctx->pc = 0x4C63CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C63D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C63CCu;
            // 0x4c63d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C63D4u;
label_4c63d4:
    // 0x4c63d4: 0x0  nop
    ctx->pc = 0x4c63d4u;
    // NOP
label_4c63d8:
    // 0x4c63d8: 0x0  nop
    ctx->pc = 0x4c63d8u;
    // NOP
label_4c63dc:
    // 0x4c63dc: 0x0  nop
    ctx->pc = 0x4c63dcu;
    // NOP
}
