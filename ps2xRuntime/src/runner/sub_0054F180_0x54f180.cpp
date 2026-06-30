#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0054F180
// Address: 0x54f180 - 0x54f500
void sub_0054F180_0x54f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0054F180_0x54f180");
#endif

    switch (ctx->pc) {
        case 0x54f180u: goto label_54f180;
        case 0x54f184u: goto label_54f184;
        case 0x54f188u: goto label_54f188;
        case 0x54f18cu: goto label_54f18c;
        case 0x54f190u: goto label_54f190;
        case 0x54f194u: goto label_54f194;
        case 0x54f198u: goto label_54f198;
        case 0x54f19cu: goto label_54f19c;
        case 0x54f1a0u: goto label_54f1a0;
        case 0x54f1a4u: goto label_54f1a4;
        case 0x54f1a8u: goto label_54f1a8;
        case 0x54f1acu: goto label_54f1ac;
        case 0x54f1b0u: goto label_54f1b0;
        case 0x54f1b4u: goto label_54f1b4;
        case 0x54f1b8u: goto label_54f1b8;
        case 0x54f1bcu: goto label_54f1bc;
        case 0x54f1c0u: goto label_54f1c0;
        case 0x54f1c4u: goto label_54f1c4;
        case 0x54f1c8u: goto label_54f1c8;
        case 0x54f1ccu: goto label_54f1cc;
        case 0x54f1d0u: goto label_54f1d0;
        case 0x54f1d4u: goto label_54f1d4;
        case 0x54f1d8u: goto label_54f1d8;
        case 0x54f1dcu: goto label_54f1dc;
        case 0x54f1e0u: goto label_54f1e0;
        case 0x54f1e4u: goto label_54f1e4;
        case 0x54f1e8u: goto label_54f1e8;
        case 0x54f1ecu: goto label_54f1ec;
        case 0x54f1f0u: goto label_54f1f0;
        case 0x54f1f4u: goto label_54f1f4;
        case 0x54f1f8u: goto label_54f1f8;
        case 0x54f1fcu: goto label_54f1fc;
        case 0x54f200u: goto label_54f200;
        case 0x54f204u: goto label_54f204;
        case 0x54f208u: goto label_54f208;
        case 0x54f20cu: goto label_54f20c;
        case 0x54f210u: goto label_54f210;
        case 0x54f214u: goto label_54f214;
        case 0x54f218u: goto label_54f218;
        case 0x54f21cu: goto label_54f21c;
        case 0x54f220u: goto label_54f220;
        case 0x54f224u: goto label_54f224;
        case 0x54f228u: goto label_54f228;
        case 0x54f22cu: goto label_54f22c;
        case 0x54f230u: goto label_54f230;
        case 0x54f234u: goto label_54f234;
        case 0x54f238u: goto label_54f238;
        case 0x54f23cu: goto label_54f23c;
        case 0x54f240u: goto label_54f240;
        case 0x54f244u: goto label_54f244;
        case 0x54f248u: goto label_54f248;
        case 0x54f24cu: goto label_54f24c;
        case 0x54f250u: goto label_54f250;
        case 0x54f254u: goto label_54f254;
        case 0x54f258u: goto label_54f258;
        case 0x54f25cu: goto label_54f25c;
        case 0x54f260u: goto label_54f260;
        case 0x54f264u: goto label_54f264;
        case 0x54f268u: goto label_54f268;
        case 0x54f26cu: goto label_54f26c;
        case 0x54f270u: goto label_54f270;
        case 0x54f274u: goto label_54f274;
        case 0x54f278u: goto label_54f278;
        case 0x54f27cu: goto label_54f27c;
        case 0x54f280u: goto label_54f280;
        case 0x54f284u: goto label_54f284;
        case 0x54f288u: goto label_54f288;
        case 0x54f28cu: goto label_54f28c;
        case 0x54f290u: goto label_54f290;
        case 0x54f294u: goto label_54f294;
        case 0x54f298u: goto label_54f298;
        case 0x54f29cu: goto label_54f29c;
        case 0x54f2a0u: goto label_54f2a0;
        case 0x54f2a4u: goto label_54f2a4;
        case 0x54f2a8u: goto label_54f2a8;
        case 0x54f2acu: goto label_54f2ac;
        case 0x54f2b0u: goto label_54f2b0;
        case 0x54f2b4u: goto label_54f2b4;
        case 0x54f2b8u: goto label_54f2b8;
        case 0x54f2bcu: goto label_54f2bc;
        case 0x54f2c0u: goto label_54f2c0;
        case 0x54f2c4u: goto label_54f2c4;
        case 0x54f2c8u: goto label_54f2c8;
        case 0x54f2ccu: goto label_54f2cc;
        case 0x54f2d0u: goto label_54f2d0;
        case 0x54f2d4u: goto label_54f2d4;
        case 0x54f2d8u: goto label_54f2d8;
        case 0x54f2dcu: goto label_54f2dc;
        case 0x54f2e0u: goto label_54f2e0;
        case 0x54f2e4u: goto label_54f2e4;
        case 0x54f2e8u: goto label_54f2e8;
        case 0x54f2ecu: goto label_54f2ec;
        case 0x54f2f0u: goto label_54f2f0;
        case 0x54f2f4u: goto label_54f2f4;
        case 0x54f2f8u: goto label_54f2f8;
        case 0x54f2fcu: goto label_54f2fc;
        case 0x54f300u: goto label_54f300;
        case 0x54f304u: goto label_54f304;
        case 0x54f308u: goto label_54f308;
        case 0x54f30cu: goto label_54f30c;
        case 0x54f310u: goto label_54f310;
        case 0x54f314u: goto label_54f314;
        case 0x54f318u: goto label_54f318;
        case 0x54f31cu: goto label_54f31c;
        case 0x54f320u: goto label_54f320;
        case 0x54f324u: goto label_54f324;
        case 0x54f328u: goto label_54f328;
        case 0x54f32cu: goto label_54f32c;
        case 0x54f330u: goto label_54f330;
        case 0x54f334u: goto label_54f334;
        case 0x54f338u: goto label_54f338;
        case 0x54f33cu: goto label_54f33c;
        case 0x54f340u: goto label_54f340;
        case 0x54f344u: goto label_54f344;
        case 0x54f348u: goto label_54f348;
        case 0x54f34cu: goto label_54f34c;
        case 0x54f350u: goto label_54f350;
        case 0x54f354u: goto label_54f354;
        case 0x54f358u: goto label_54f358;
        case 0x54f35cu: goto label_54f35c;
        case 0x54f360u: goto label_54f360;
        case 0x54f364u: goto label_54f364;
        case 0x54f368u: goto label_54f368;
        case 0x54f36cu: goto label_54f36c;
        case 0x54f370u: goto label_54f370;
        case 0x54f374u: goto label_54f374;
        case 0x54f378u: goto label_54f378;
        case 0x54f37cu: goto label_54f37c;
        case 0x54f380u: goto label_54f380;
        case 0x54f384u: goto label_54f384;
        case 0x54f388u: goto label_54f388;
        case 0x54f38cu: goto label_54f38c;
        case 0x54f390u: goto label_54f390;
        case 0x54f394u: goto label_54f394;
        case 0x54f398u: goto label_54f398;
        case 0x54f39cu: goto label_54f39c;
        case 0x54f3a0u: goto label_54f3a0;
        case 0x54f3a4u: goto label_54f3a4;
        case 0x54f3a8u: goto label_54f3a8;
        case 0x54f3acu: goto label_54f3ac;
        case 0x54f3b0u: goto label_54f3b0;
        case 0x54f3b4u: goto label_54f3b4;
        case 0x54f3b8u: goto label_54f3b8;
        case 0x54f3bcu: goto label_54f3bc;
        case 0x54f3c0u: goto label_54f3c0;
        case 0x54f3c4u: goto label_54f3c4;
        case 0x54f3c8u: goto label_54f3c8;
        case 0x54f3ccu: goto label_54f3cc;
        case 0x54f3d0u: goto label_54f3d0;
        case 0x54f3d4u: goto label_54f3d4;
        case 0x54f3d8u: goto label_54f3d8;
        case 0x54f3dcu: goto label_54f3dc;
        case 0x54f3e0u: goto label_54f3e0;
        case 0x54f3e4u: goto label_54f3e4;
        case 0x54f3e8u: goto label_54f3e8;
        case 0x54f3ecu: goto label_54f3ec;
        case 0x54f3f0u: goto label_54f3f0;
        case 0x54f3f4u: goto label_54f3f4;
        case 0x54f3f8u: goto label_54f3f8;
        case 0x54f3fcu: goto label_54f3fc;
        case 0x54f400u: goto label_54f400;
        case 0x54f404u: goto label_54f404;
        case 0x54f408u: goto label_54f408;
        case 0x54f40cu: goto label_54f40c;
        case 0x54f410u: goto label_54f410;
        case 0x54f414u: goto label_54f414;
        case 0x54f418u: goto label_54f418;
        case 0x54f41cu: goto label_54f41c;
        case 0x54f420u: goto label_54f420;
        case 0x54f424u: goto label_54f424;
        case 0x54f428u: goto label_54f428;
        case 0x54f42cu: goto label_54f42c;
        case 0x54f430u: goto label_54f430;
        case 0x54f434u: goto label_54f434;
        case 0x54f438u: goto label_54f438;
        case 0x54f43cu: goto label_54f43c;
        case 0x54f440u: goto label_54f440;
        case 0x54f444u: goto label_54f444;
        case 0x54f448u: goto label_54f448;
        case 0x54f44cu: goto label_54f44c;
        case 0x54f450u: goto label_54f450;
        case 0x54f454u: goto label_54f454;
        case 0x54f458u: goto label_54f458;
        case 0x54f45cu: goto label_54f45c;
        case 0x54f460u: goto label_54f460;
        case 0x54f464u: goto label_54f464;
        case 0x54f468u: goto label_54f468;
        case 0x54f46cu: goto label_54f46c;
        case 0x54f470u: goto label_54f470;
        case 0x54f474u: goto label_54f474;
        case 0x54f478u: goto label_54f478;
        case 0x54f47cu: goto label_54f47c;
        case 0x54f480u: goto label_54f480;
        case 0x54f484u: goto label_54f484;
        case 0x54f488u: goto label_54f488;
        case 0x54f48cu: goto label_54f48c;
        case 0x54f490u: goto label_54f490;
        case 0x54f494u: goto label_54f494;
        case 0x54f498u: goto label_54f498;
        case 0x54f49cu: goto label_54f49c;
        case 0x54f4a0u: goto label_54f4a0;
        case 0x54f4a4u: goto label_54f4a4;
        case 0x54f4a8u: goto label_54f4a8;
        case 0x54f4acu: goto label_54f4ac;
        case 0x54f4b0u: goto label_54f4b0;
        case 0x54f4b4u: goto label_54f4b4;
        case 0x54f4b8u: goto label_54f4b8;
        case 0x54f4bcu: goto label_54f4bc;
        case 0x54f4c0u: goto label_54f4c0;
        case 0x54f4c4u: goto label_54f4c4;
        case 0x54f4c8u: goto label_54f4c8;
        case 0x54f4ccu: goto label_54f4cc;
        case 0x54f4d0u: goto label_54f4d0;
        case 0x54f4d4u: goto label_54f4d4;
        case 0x54f4d8u: goto label_54f4d8;
        case 0x54f4dcu: goto label_54f4dc;
        case 0x54f4e0u: goto label_54f4e0;
        case 0x54f4e4u: goto label_54f4e4;
        case 0x54f4e8u: goto label_54f4e8;
        case 0x54f4ecu: goto label_54f4ec;
        case 0x54f4f0u: goto label_54f4f0;
        case 0x54f4f4u: goto label_54f4f4;
        case 0x54f4f8u: goto label_54f4f8;
        case 0x54f4fcu: goto label_54f4fc;
        default: break;
    }

    ctx->pc = 0x54f180u;

label_54f180:
    // 0x54f180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x54f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_54f184:
    // 0x54f184: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54f184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54f188:
    // 0x54f188: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x54f188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_54f18c:
    // 0x54f18c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x54f18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_54f190:
    // 0x54f190: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x54f190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_54f194:
    // 0x54f194: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x54f194u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_54f198:
    // 0x54f198: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x54f198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_54f19c:
    // 0x54f19c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x54f19cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_54f1a0:
    // 0x54f1a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x54f1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_54f1a4:
    // 0x54f1a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x54f1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f1a8:
    // 0x54f1a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x54f1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_54f1ac:
    // 0x54f1ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x54f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_54f1b0:
    // 0x54f1b0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x54f1b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_54f1b4:
    // 0x54f1b4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x54f1b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_54f1b8:
    // 0x54f1b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x54f1b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_54f1bc:
    // 0x54f1bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x54f1bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_54f1c0:
    // 0x54f1c0: 0x9453dad8  lhu         $s3, -0x2528($v0)
    ctx->pc = 0x54f1c0u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957784)));
label_54f1c4:
    // 0x54f1c4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54f1c8:
    // 0x54f1c8: 0x9452dada  lhu         $s2, -0x2526($v0)
    ctx->pc = 0x54f1c8u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957786)));
label_54f1cc:
    // 0x54f1cc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54f1d0:
    // 0x54f1d0: 0x9451dae0  lhu         $s1, -0x2520($v0)
    ctx->pc = 0x54f1d0u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957792)));
label_54f1d4:
    // 0x54f1d4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54f1d8:
    // 0x54f1d8: 0x9450dae2  lhu         $s0, -0x251E($v0)
    ctx->pc = 0x54f1d8u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957794)));
label_54f1dc:
    // 0x54f1dc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54f1e0:
    // 0x54f1e0: 0x8446d960  lh          $a2, -0x26A0($v0)
    ctx->pc = 0x54f1e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957408)));
label_54f1e4:
    // 0x54f1e4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x54f1e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f1e8:
    // 0x54f1e8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x54f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_54f1ec:
    // 0x54f1ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54f1ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54f1f0:
    // 0x54f1f0: 0x8443d962  lh          $v1, -0x269E($v0)
    ctx->pc = 0x54f1f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957410)));
label_54f1f4:
    // 0x54f1f4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x54f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_54f1f8:
    // 0x54f1f8: 0x46006540  add.s       $f21, $f12, $f0
    ctx->pc = 0x54f1f8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_54f1fc:
    // 0x54f1fc: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x54f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_54f200:
    // 0x54f200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f204:
    // 0x54f204: 0x0  nop
    ctx->pc = 0x54f204u;
    // NOP
label_54f208:
    // 0x54f208: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x54f208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_54f20c:
    // 0x54f20c: 0xc0506ac  jal         func_141AB0
label_54f210:
    if (ctx->pc == 0x54F210u) {
        ctx->pc = 0x54F210u;
            // 0x54f210: 0x46006d00  add.s       $f20, $f13, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x54F214u;
        goto label_54f214;
    }
    ctx->pc = 0x54F20Cu;
    SET_GPR_U32(ctx, 31, 0x54F214u);
    ctx->pc = 0x54F210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F20Cu;
            // 0x54f210: 0x46006d00  add.s       $f20, $f13, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F214u; }
        if (ctx->pc != 0x54F214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F214u; }
        if (ctx->pc != 0x54F214u) { return; }
    }
    ctx->pc = 0x54F214u;
label_54f214:
    // 0x54f214: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54f214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54f218:
    // 0x54f218: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54f218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54f21c:
    // 0x54f21c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54f21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54f220:
    // 0x54f220: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54f220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54f224:
    // 0x54f224: 0x320f809  jalr        $t9
label_54f228:
    if (ctx->pc == 0x54F228u) {
        ctx->pc = 0x54F228u;
            // 0x54f228: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54F22Cu;
        goto label_54f22c;
    }
    ctx->pc = 0x54F224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54F22Cu);
        ctx->pc = 0x54F228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F224u;
            // 0x54f228: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54F22Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54F22Cu; }
            if (ctx->pc != 0x54F22Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54F22Cu;
label_54f22c:
    // 0x54f22c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x54f22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_54f230:
    // 0x54f230: 0x24a5e0c0  addiu       $a1, $a1, -0x1F40
    ctx->pc = 0x54f230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959296));
label_54f234:
    // 0x54f234: 0xc4b6000c  lwc1        $f22, 0xC($a1)
    ctx->pc = 0x54f234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54f238:
    // 0x54f238: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
label_54f23c:
    if (ctx->pc == 0x54F23Cu) {
        ctx->pc = 0x54F23Cu;
            // 0x54f23c: 0xc4b70008  lwc1        $f23, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->pc = 0x54F240u;
        goto label_54f240;
    }
    ctx->pc = 0x54F238u;
    {
        const bool branch_taken_0x54f238 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x54F23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F238u;
            // 0x54f23c: 0xc4b70008  lwc1        $f23, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f238) {
            ctx->pc = 0x54F24Cu;
            goto label_54f24c;
        }
    }
    ctx->pc = 0x54F240u;
label_54f240:
    // 0x54f240: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x54f240u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f244:
    // 0x54f244: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f248:
    if (ctx->pc == 0x54F248u) {
        ctx->pc = 0x54F248u;
            // 0x54f248: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F24Cu;
        goto label_54f24c;
    }
    ctx->pc = 0x54F244u;
    {
        const bool branch_taken_0x54f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F244u;
            // 0x54f248: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f244) {
            ctx->pc = 0x54F268u;
            goto label_54f268;
        }
    }
    ctx->pc = 0x54F24Cu;
label_54f24c:
    // 0x54f24c: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x54f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_54f250:
    // 0x54f250: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x54f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_54f254:
    // 0x54f254: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f258:
    // 0x54f258: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f25c:
    // 0x54f25c: 0x0  nop
    ctx->pc = 0x54f25cu;
    // NOP
label_54f260:
    // 0x54f260: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f264:
    // 0x54f264: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f264u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f268:
    // 0x54f268: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
label_54f26c:
    if (ctx->pc == 0x54F26Cu) {
        ctx->pc = 0x54F26Cu;
            // 0x54f26c: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x54F270u;
        goto label_54f270;
    }
    ctx->pc = 0x54F268u;
    {
        const bool branch_taken_0x54f268 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x54f268) {
            ctx->pc = 0x54F26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F268u;
            // 0x54f26c: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F27Cu;
            goto label_54f27c;
        }
    }
    ctx->pc = 0x54F270u;
label_54f270:
    // 0x54f270: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x54f270u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f274:
    // 0x54f274: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f278:
    if (ctx->pc == 0x54F278u) {
        ctx->pc = 0x54F278u;
            // 0x54f278: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F27Cu;
        goto label_54f27c;
    }
    ctx->pc = 0x54F274u;
    {
        const bool branch_taken_0x54f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F274u;
            // 0x54f278: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f274) {
            ctx->pc = 0x54F294u;
            goto label_54f294;
        }
    }
    ctx->pc = 0x54F27Cu;
label_54f27c:
    // 0x54f27c: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x54f27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_54f280:
    // 0x54f280: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f284:
    // 0x54f284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f288:
    // 0x54f288: 0x0  nop
    ctx->pc = 0x54f288u;
    // NOP
label_54f28c:
    // 0x54f28c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f28cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f290:
    // 0x54f290: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f290u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f294:
    // 0x54f294: 0x4617ab80  add.s       $f14, $f21, $f23
    ctx->pc = 0x54f294u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_54f298:
    // 0x54f298: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f29c:
    // 0x54f29c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f2a0:
    // 0x54f2a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54f2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54f2a4:
    // 0x54f2a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54f2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f2a8:
    // 0x54f2a8: 0x4616a3c0  add.s       $f15, $f20, $f22
    ctx->pc = 0x54f2a8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_54f2ac:
    // 0x54f2ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x54f2acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_54f2b0:
    // 0x54f2b0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f2b4:
    // 0x54f2b4: 0xc0bc284  jal         func_2F0A10
label_54f2b8:
    if (ctx->pc == 0x54F2B8u) {
        ctx->pc = 0x54F2B8u;
            // 0x54f2b8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x54F2BCu;
        goto label_54f2bc;
    }
    ctx->pc = 0x54F2B4u;
    SET_GPR_U32(ctx, 31, 0x54F2BCu);
    ctx->pc = 0x54F2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F2B4u;
            // 0x54f2b8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F2BCu; }
        if (ctx->pc != 0x54F2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F2BCu; }
        if (ctx->pc != 0x54F2BCu) { return; }
    }
    ctx->pc = 0x54F2BCu;
label_54f2bc:
    // 0x54f2bc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54f2c0:
    // 0x54f2c0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54f2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54f2c4:
    // 0x54f2c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54f2c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54f2c8:
    // 0x54f2c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54f2c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54f2cc:
    // 0x54f2cc: 0x320f809  jalr        $t9
label_54f2d0:
    if (ctx->pc == 0x54F2D0u) {
        ctx->pc = 0x54F2D4u;
        goto label_54f2d4;
    }
    ctx->pc = 0x54F2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54F2D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54F2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54F2D4u; }
            if (ctx->pc != 0x54F2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x54F2D4u;
label_54f2d4:
    // 0x54f2d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x54f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_54f2d8:
    // 0x54f2d8: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x54f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_54f2dc:
    // 0x54f2dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x54f2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f2e0:
    // 0x54f2e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x54f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f2e4:
    // 0x54f2e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54f2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54f2e8:
    // 0x54f2e8: 0x0  nop
    ctx->pc = 0x54f2e8u;
    // NOP
label_54f2ec:
    // 0x54f2ec: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x54f2ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_54f2f0:
    // 0x54f2f0: 0x46170d5c  madd.s      $f21, $f1, $f23
    ctx->pc = 0x54f2f0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[23]));
label_54f2f4:
    // 0x54f2f4: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x54f2f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_54f2f8:
    // 0x54f2f8: 0xc0c9a58  jal         func_326960
label_54f2fc:
    if (ctx->pc == 0x54F2FCu) {
        ctx->pc = 0x54F2FCu;
            // 0x54f2fc: 0x46160d1c  madd.s      $f20, $f1, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
        ctx->pc = 0x54F300u;
        goto label_54f300;
    }
    ctx->pc = 0x54F2F8u;
    SET_GPR_U32(ctx, 31, 0x54F300u);
    ctx->pc = 0x54F2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F2F8u;
            // 0x54f2fc: 0x46160d1c  madd.s      $f20, $f1, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F300u; }
        if (ctx->pc != 0x54F300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F300u; }
        if (ctx->pc != 0x54F300u) { return; }
    }
    ctx->pc = 0x54F300u;
label_54f300:
    // 0x54f300: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x54f300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_54f304:
    // 0x54f304: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54f304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54f308:
    // 0x54f308: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x54f308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_54f30c:
    // 0x54f30c: 0x320f809  jalr        $t9
label_54f310:
    if (ctx->pc == 0x54F310u) {
        ctx->pc = 0x54F310u;
            // 0x54f310: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x54F314u;
        goto label_54f314;
    }
    ctx->pc = 0x54F30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54F314u);
        ctx->pc = 0x54F310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F30Cu;
            // 0x54f310: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54F314u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54F314u; }
            if (ctx->pc != 0x54F314u) { return; }
        }
        }
    }
    ctx->pc = 0x54F314u;
label_54f314:
    // 0x54f314: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x54f314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
label_54f318:
    // 0x54f318: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_54f31c:
    if (ctx->pc == 0x54F31Cu) {
        ctx->pc = 0x54F31Cu;
            // 0x54f31c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54F320u;
        goto label_54f320;
    }
    ctx->pc = 0x54F318u;
    {
        const bool branch_taken_0x54f318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x54F31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F318u;
            // 0x54f31c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f318) {
            ctx->pc = 0x54F324u;
            goto label_54f324;
        }
    }
    ctx->pc = 0x54F320u;
label_54f320:
    // 0x54f320: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x54f320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_54f324:
    // 0x54f324: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x54f324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
label_54f328:
    // 0x54f328: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_54f32c:
    if (ctx->pc == 0x54F32Cu) {
        ctx->pc = 0x54F32Cu;
            // 0x54f32c: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->pc = 0x54F330u;
        goto label_54f330;
    }
    ctx->pc = 0x54F328u;
    {
        const bool branch_taken_0x54f328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x54f328) {
            ctx->pc = 0x54F32Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F328u;
            // 0x54f32c: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F338u;
            goto label_54f338;
        }
    }
    ctx->pc = 0x54F330u;
label_54f330:
    // 0x54f330: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x54f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_54f334:
    // 0x54f334: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x54f334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_54f338:
    // 0x54f338: 0x5282002a  beql        $s4, $v0, . + 4 + (0x2A << 2)
label_54f33c:
    if (ctx->pc == 0x54F33Cu) {
        ctx->pc = 0x54F33Cu;
            // 0x54f33c: 0x3c0243f0  lui         $v0, 0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
        ctx->pc = 0x54F340u;
        goto label_54f340;
    }
    ctx->pc = 0x54F338u;
    {
        const bool branch_taken_0x54f338 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x54f338) {
            ctx->pc = 0x54F33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F338u;
            // 0x54f33c: 0x3c0243f0  lui         $v0, 0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F3E4u;
            goto label_54f3e4;
        }
    }
    ctx->pc = 0x54F340u;
label_54f340:
    // 0x54f340: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x54f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_54f344:
    // 0x54f344: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x54f344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_54f348:
    // 0x54f348: 0x440019  multu       $v0, $a0
    ctx->pc = 0x54f348u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_54f34c:
    // 0x54f34c: 0x1010  mfhi        $v0
    ctx->pc = 0x54f34cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_54f350:
    // 0x54f350: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x54f350u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_54f354:
    // 0x54f354: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_54f358:
    if (ctx->pc == 0x54F358u) {
        ctx->pc = 0x54F358u;
            // 0x54f358: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x54F35Cu;
        goto label_54f35c;
    }
    ctx->pc = 0x54F354u;
    {
        const bool branch_taken_0x54f354 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x54f354) {
            ctx->pc = 0x54F358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F354u;
            // 0x54f358: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F368u;
            goto label_54f368;
        }
    }
    ctx->pc = 0x54F35Cu;
label_54f35c:
    // 0x54f35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54f35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f360:
    // 0x54f360: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f364:
    if (ctx->pc == 0x54F364u) {
        ctx->pc = 0x54F364u;
            // 0x54f364: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F368u;
        goto label_54f368;
    }
    ctx->pc = 0x54F360u;
    {
        const bool branch_taken_0x54f360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F360u;
            // 0x54f364: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f360) {
            ctx->pc = 0x54F380u;
            goto label_54f380;
        }
    }
    ctx->pc = 0x54F368u;
label_54f368:
    // 0x54f368: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54f368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54f36c:
    // 0x54f36c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f370:
    // 0x54f370: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f374:
    // 0x54f374: 0x0  nop
    ctx->pc = 0x54f374u;
    // NOP
label_54f378:
    // 0x54f378: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54f378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54f37c:
    // 0x54f37c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x54f37cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_54f380:
    // 0x54f380: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x54f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_54f384:
    // 0x54f384: 0x3c03430e  lui         $v1, 0x430E
    ctx->pc = 0x54f384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17166 << 16));
label_54f388:
    // 0x54f388: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x54f388u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_54f38c:
    // 0x54f38c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f38cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f390:
    // 0x54f390: 0x0  nop
    ctx->pc = 0x54f390u;
    // NOP
label_54f394:
    // 0x54f394: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x54f394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_54f398:
    // 0x54f398: 0x1010  mfhi        $v0
    ctx->pc = 0x54f398u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_54f39c:
    // 0x54f39c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_54f3a0:
    if (ctx->pc == 0x54F3A0u) {
        ctx->pc = 0x54F3A0u;
            // 0x54f3a0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->pc = 0x54F3A4u;
        goto label_54f3a4;
    }
    ctx->pc = 0x54F39Cu;
    {
        const bool branch_taken_0x54f39c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x54F3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F39Cu;
            // 0x54f3a0: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f39c) {
            ctx->pc = 0x54F3B0u;
            goto label_54f3b0;
        }
    }
    ctx->pc = 0x54F3A4u;
label_54f3a4:
    // 0x54f3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54f3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f3a8:
    // 0x54f3a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_54f3ac:
    if (ctx->pc == 0x54F3ACu) {
        ctx->pc = 0x54F3ACu;
            // 0x54f3ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F3B0u;
        goto label_54f3b0;
    }
    ctx->pc = 0x54F3A8u;
    {
        const bool branch_taken_0x54f3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F3A8u;
            // 0x54f3ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f3a8) {
            ctx->pc = 0x54F3CCu;
            goto label_54f3cc;
        }
    }
    ctx->pc = 0x54F3B0u;
label_54f3b0:
    // 0x54f3b0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x54f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_54f3b4:
    // 0x54f3b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x54f3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_54f3b8:
    // 0x54f3b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f3bc:
    // 0x54f3bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f3c0:
    // 0x54f3c0: 0x0  nop
    ctx->pc = 0x54f3c0u;
    // NOP
label_54f3c4:
    // 0x54f3c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x54f3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_54f3c8:
    // 0x54f3c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x54f3c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_54f3cc:
    // 0x54f3cc: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x54f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_54f3d0:
    // 0x54f3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x54f3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f3d4:
    // 0x54f3d4: 0x0  nop
    ctx->pc = 0x54f3d4u;
    // NOP
label_54f3d8:
    // 0x54f3d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x54f3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_54f3dc:
    // 0x54f3dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_54f3e0:
    if (ctx->pc == 0x54F3E0u) {
        ctx->pc = 0x54F3E0u;
            // 0x54f3e0: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x54F3E4u;
        goto label_54f3e4;
    }
    ctx->pc = 0x54F3DCu;
    {
        const bool branch_taken_0x54f3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F3DCu;
            // 0x54f3e0: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f3dc) {
            ctx->pc = 0x54F3ECu;
            goto label_54f3ec;
        }
    }
    ctx->pc = 0x54F3E4u;
label_54f3e4:
    // 0x54f3e4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x54f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_54f3e8:
    // 0x54f3e8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x54f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_54f3ec:
    // 0x54f3ec: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x54f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_54f3f0:
    // 0x54f3f0: 0x3c03430e  lui         $v1, 0x430E
    ctx->pc = 0x54f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17166 << 16));
label_54f3f4:
    // 0x54f3f4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x54f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_54f3f8:
    // 0x54f3f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x54f3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_54f3fc:
    // 0x54f3fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54f400:
    // 0x54f400: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x54f400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_54f404:
    // 0x54f404: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54f404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54f408:
    // 0x54f408: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x54f408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_54f40c:
    // 0x54f40c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x54f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_54f410:
    // 0x54f410: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x54f410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f414:
    // 0x54f414: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f414u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f418:
    // 0x54f418: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54f418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54f41c:
    // 0x54f41c: 0x460205c2  mul.s       $f23, $f0, $f2
    ctx->pc = 0x54f41cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_54f420:
    // 0x54f420: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x54f420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_54f424:
    // 0x54f424: 0x320f809  jalr        $t9
label_54f428:
    if (ctx->pc == 0x54F428u) {
        ctx->pc = 0x54F428u;
            // 0x54f428: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x54F42Cu;
        goto label_54f42c;
    }
    ctx->pc = 0x54F424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54F42Cu);
        ctx->pc = 0x54F428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F424u;
            // 0x54f428: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54F42Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54F42Cu; }
            if (ctx->pc != 0x54F42Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54F42Cu;
label_54f42c:
    // 0x54f42c: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_54f430:
    if (ctx->pc == 0x54F430u) {
        ctx->pc = 0x54F430u;
            // 0x54f430: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x54F434u;
        goto label_54f434;
    }
    ctx->pc = 0x54F42Cu;
    {
        const bool branch_taken_0x54f42c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x54f42c) {
            ctx->pc = 0x54F430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F42Cu;
            // 0x54f430: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F440u;
            goto label_54f440;
        }
    }
    ctx->pc = 0x54F434u;
label_54f434:
    // 0x54f434: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x54f434u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f438:
    // 0x54f438: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f43c:
    if (ctx->pc == 0x54F43Cu) {
        ctx->pc = 0x54F43Cu;
            // 0x54f43c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F440u;
        goto label_54f440;
    }
    ctx->pc = 0x54F438u;
    {
        const bool branch_taken_0x54f438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F438u;
            // 0x54f43c: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f438) {
            ctx->pc = 0x54F458u;
            goto label_54f458;
        }
    }
    ctx->pc = 0x54F440u;
label_54f440:
    // 0x54f440: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x54f440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_54f444:
    // 0x54f444: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f448:
    // 0x54f448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f44c:
    // 0x54f44c: 0x0  nop
    ctx->pc = 0x54f44cu;
    // NOP
label_54f450:
    // 0x54f450: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x54f450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_54f454:
    // 0x54f454: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x54f454u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_54f458:
    // 0x54f458: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_54f45c:
    if (ctx->pc == 0x54F45Cu) {
        ctx->pc = 0x54F45Cu;
            // 0x54f45c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x54F460u;
        goto label_54f460;
    }
    ctx->pc = 0x54F458u;
    {
        const bool branch_taken_0x54f458 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x54f458) {
            ctx->pc = 0x54F45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54F458u;
            // 0x54f45c: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54F46Cu;
            goto label_54f46c;
        }
    }
    ctx->pc = 0x54F460u;
label_54f460:
    // 0x54f460: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x54f460u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f464:
    // 0x54f464: 0x10000007  b           . + 4 + (0x7 << 2)
label_54f468:
    if (ctx->pc == 0x54F468u) {
        ctx->pc = 0x54F468u;
            // 0x54f468: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x54F46Cu;
        goto label_54f46c;
    }
    ctx->pc = 0x54F464u;
    {
        const bool branch_taken_0x54f464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x54F468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F464u;
            // 0x54f468: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x54f464) {
            ctx->pc = 0x54F484u;
            goto label_54f484;
        }
    }
    ctx->pc = 0x54F46Cu;
label_54f46c:
    // 0x54f46c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x54f46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_54f470:
    // 0x54f470: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x54f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54f474:
    // 0x54f474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x54f474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_54f478:
    // 0x54f478: 0x0  nop
    ctx->pc = 0x54f478u;
    // NOP
label_54f47c:
    // 0x54f47c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x54f47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_54f480:
    // 0x54f480: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x54f480u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_54f484:
    // 0x54f484: 0x4617ab01  sub.s       $f12, $f21, $f23
    ctx->pc = 0x54f484u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
label_54f488:
    // 0x54f488: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x54f488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_54f48c:
    // 0x54f48c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x54f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54f490:
    // 0x54f490: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x54f490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_54f494:
    // 0x54f494: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x54f494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_54f498:
    // 0x54f498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x54f498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_54f49c:
    // 0x54f49c: 0x4617ab80  add.s       $f14, $f21, $f23
    ctx->pc = 0x54f49cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_54f4a0:
    // 0x54f4a0: 0x4616a341  sub.s       $f13, $f20, $f22
    ctx->pc = 0x54f4a0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_54f4a4:
    // 0x54f4a4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x54f4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_54f4a8:
    // 0x54f4a8: 0xc0bc284  jal         func_2F0A10
label_54f4ac:
    if (ctx->pc == 0x54F4ACu) {
        ctx->pc = 0x54F4ACu;
            // 0x54f4ac: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->pc = 0x54F4B0u;
        goto label_54f4b0;
    }
    ctx->pc = 0x54F4A8u;
    SET_GPR_U32(ctx, 31, 0x54F4B0u);
    ctx->pc = 0x54F4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54F4A8u;
            // 0x54f4ac: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F4B0u; }
        if (ctx->pc != 0x54F4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54F4B0u; }
        if (ctx->pc != 0x54F4B0u) { return; }
    }
    ctx->pc = 0x54F4B0u;
label_54f4b0:
    // 0x54f4b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x54f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_54f4b4:
    // 0x54f4b4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x54f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_54f4b8:
    // 0x54f4b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x54f4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_54f4bc:
    // 0x54f4bc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x54f4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_54f4c0:
    // 0x54f4c0: 0x320f809  jalr        $t9
label_54f4c4:
    if (ctx->pc == 0x54F4C4u) {
        ctx->pc = 0x54F4C8u;
        goto label_54f4c8;
    }
    ctx->pc = 0x54F4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54F4C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x54F4C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54F4C8u; }
            if (ctx->pc != 0x54F4C8u) { return; }
        }
        }
    }
    ctx->pc = 0x54F4C8u;
label_54f4c8:
    // 0x54f4c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x54f4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_54f4cc:
    // 0x54f4cc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x54f4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_54f4d0:
    // 0x54f4d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x54f4d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_54f4d4:
    // 0x54f4d4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x54f4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_54f4d8:
    // 0x54f4d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x54f4d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_54f4dc:
    // 0x54f4dc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x54f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_54f4e0:
    // 0x54f4e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x54f4e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_54f4e4:
    // 0x54f4e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x54f4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_54f4e8:
    // 0x54f4e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x54f4e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_54f4ec:
    // 0x54f4ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x54f4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_54f4f0:
    // 0x54f4f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x54f4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54f4f4:
    // 0x54f4f4: 0x3e00008  jr          $ra
label_54f4f8:
    if (ctx->pc == 0x54F4F8u) {
        ctx->pc = 0x54F4F8u;
            // 0x54f4f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x54F4FCu;
        goto label_54f4fc;
    }
    ctx->pc = 0x54F4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54F4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54F4F4u;
            // 0x54f4f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x54F4FCu;
label_54f4fc:
    // 0x54f4fc: 0x0  nop
    ctx->pc = 0x54f4fcu;
    // NOP
}
