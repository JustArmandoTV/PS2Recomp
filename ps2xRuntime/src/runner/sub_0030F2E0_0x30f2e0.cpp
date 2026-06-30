#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030F2E0
// Address: 0x30f2e0 - 0x30f680
void sub_0030F2E0_0x30f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F2E0_0x30f2e0");
#endif

    switch (ctx->pc) {
        case 0x30f2e0u: goto label_30f2e0;
        case 0x30f2e4u: goto label_30f2e4;
        case 0x30f2e8u: goto label_30f2e8;
        case 0x30f2ecu: goto label_30f2ec;
        case 0x30f2f0u: goto label_30f2f0;
        case 0x30f2f4u: goto label_30f2f4;
        case 0x30f2f8u: goto label_30f2f8;
        case 0x30f2fcu: goto label_30f2fc;
        case 0x30f300u: goto label_30f300;
        case 0x30f304u: goto label_30f304;
        case 0x30f308u: goto label_30f308;
        case 0x30f30cu: goto label_30f30c;
        case 0x30f310u: goto label_30f310;
        case 0x30f314u: goto label_30f314;
        case 0x30f318u: goto label_30f318;
        case 0x30f31cu: goto label_30f31c;
        case 0x30f320u: goto label_30f320;
        case 0x30f324u: goto label_30f324;
        case 0x30f328u: goto label_30f328;
        case 0x30f32cu: goto label_30f32c;
        case 0x30f330u: goto label_30f330;
        case 0x30f334u: goto label_30f334;
        case 0x30f338u: goto label_30f338;
        case 0x30f33cu: goto label_30f33c;
        case 0x30f340u: goto label_30f340;
        case 0x30f344u: goto label_30f344;
        case 0x30f348u: goto label_30f348;
        case 0x30f34cu: goto label_30f34c;
        case 0x30f350u: goto label_30f350;
        case 0x30f354u: goto label_30f354;
        case 0x30f358u: goto label_30f358;
        case 0x30f35cu: goto label_30f35c;
        case 0x30f360u: goto label_30f360;
        case 0x30f364u: goto label_30f364;
        case 0x30f368u: goto label_30f368;
        case 0x30f36cu: goto label_30f36c;
        case 0x30f370u: goto label_30f370;
        case 0x30f374u: goto label_30f374;
        case 0x30f378u: goto label_30f378;
        case 0x30f37cu: goto label_30f37c;
        case 0x30f380u: goto label_30f380;
        case 0x30f384u: goto label_30f384;
        case 0x30f388u: goto label_30f388;
        case 0x30f38cu: goto label_30f38c;
        case 0x30f390u: goto label_30f390;
        case 0x30f394u: goto label_30f394;
        case 0x30f398u: goto label_30f398;
        case 0x30f39cu: goto label_30f39c;
        case 0x30f3a0u: goto label_30f3a0;
        case 0x30f3a4u: goto label_30f3a4;
        case 0x30f3a8u: goto label_30f3a8;
        case 0x30f3acu: goto label_30f3ac;
        case 0x30f3b0u: goto label_30f3b0;
        case 0x30f3b4u: goto label_30f3b4;
        case 0x30f3b8u: goto label_30f3b8;
        case 0x30f3bcu: goto label_30f3bc;
        case 0x30f3c0u: goto label_30f3c0;
        case 0x30f3c4u: goto label_30f3c4;
        case 0x30f3c8u: goto label_30f3c8;
        case 0x30f3ccu: goto label_30f3cc;
        case 0x30f3d0u: goto label_30f3d0;
        case 0x30f3d4u: goto label_30f3d4;
        case 0x30f3d8u: goto label_30f3d8;
        case 0x30f3dcu: goto label_30f3dc;
        case 0x30f3e0u: goto label_30f3e0;
        case 0x30f3e4u: goto label_30f3e4;
        case 0x30f3e8u: goto label_30f3e8;
        case 0x30f3ecu: goto label_30f3ec;
        case 0x30f3f0u: goto label_30f3f0;
        case 0x30f3f4u: goto label_30f3f4;
        case 0x30f3f8u: goto label_30f3f8;
        case 0x30f3fcu: goto label_30f3fc;
        case 0x30f400u: goto label_30f400;
        case 0x30f404u: goto label_30f404;
        case 0x30f408u: goto label_30f408;
        case 0x30f40cu: goto label_30f40c;
        case 0x30f410u: goto label_30f410;
        case 0x30f414u: goto label_30f414;
        case 0x30f418u: goto label_30f418;
        case 0x30f41cu: goto label_30f41c;
        case 0x30f420u: goto label_30f420;
        case 0x30f424u: goto label_30f424;
        case 0x30f428u: goto label_30f428;
        case 0x30f42cu: goto label_30f42c;
        case 0x30f430u: goto label_30f430;
        case 0x30f434u: goto label_30f434;
        case 0x30f438u: goto label_30f438;
        case 0x30f43cu: goto label_30f43c;
        case 0x30f440u: goto label_30f440;
        case 0x30f444u: goto label_30f444;
        case 0x30f448u: goto label_30f448;
        case 0x30f44cu: goto label_30f44c;
        case 0x30f450u: goto label_30f450;
        case 0x30f454u: goto label_30f454;
        case 0x30f458u: goto label_30f458;
        case 0x30f45cu: goto label_30f45c;
        case 0x30f460u: goto label_30f460;
        case 0x30f464u: goto label_30f464;
        case 0x30f468u: goto label_30f468;
        case 0x30f46cu: goto label_30f46c;
        case 0x30f470u: goto label_30f470;
        case 0x30f474u: goto label_30f474;
        case 0x30f478u: goto label_30f478;
        case 0x30f47cu: goto label_30f47c;
        case 0x30f480u: goto label_30f480;
        case 0x30f484u: goto label_30f484;
        case 0x30f488u: goto label_30f488;
        case 0x30f48cu: goto label_30f48c;
        case 0x30f490u: goto label_30f490;
        case 0x30f494u: goto label_30f494;
        case 0x30f498u: goto label_30f498;
        case 0x30f49cu: goto label_30f49c;
        case 0x30f4a0u: goto label_30f4a0;
        case 0x30f4a4u: goto label_30f4a4;
        case 0x30f4a8u: goto label_30f4a8;
        case 0x30f4acu: goto label_30f4ac;
        case 0x30f4b0u: goto label_30f4b0;
        case 0x30f4b4u: goto label_30f4b4;
        case 0x30f4b8u: goto label_30f4b8;
        case 0x30f4bcu: goto label_30f4bc;
        case 0x30f4c0u: goto label_30f4c0;
        case 0x30f4c4u: goto label_30f4c4;
        case 0x30f4c8u: goto label_30f4c8;
        case 0x30f4ccu: goto label_30f4cc;
        case 0x30f4d0u: goto label_30f4d0;
        case 0x30f4d4u: goto label_30f4d4;
        case 0x30f4d8u: goto label_30f4d8;
        case 0x30f4dcu: goto label_30f4dc;
        case 0x30f4e0u: goto label_30f4e0;
        case 0x30f4e4u: goto label_30f4e4;
        case 0x30f4e8u: goto label_30f4e8;
        case 0x30f4ecu: goto label_30f4ec;
        case 0x30f4f0u: goto label_30f4f0;
        case 0x30f4f4u: goto label_30f4f4;
        case 0x30f4f8u: goto label_30f4f8;
        case 0x30f4fcu: goto label_30f4fc;
        case 0x30f500u: goto label_30f500;
        case 0x30f504u: goto label_30f504;
        case 0x30f508u: goto label_30f508;
        case 0x30f50cu: goto label_30f50c;
        case 0x30f510u: goto label_30f510;
        case 0x30f514u: goto label_30f514;
        case 0x30f518u: goto label_30f518;
        case 0x30f51cu: goto label_30f51c;
        case 0x30f520u: goto label_30f520;
        case 0x30f524u: goto label_30f524;
        case 0x30f528u: goto label_30f528;
        case 0x30f52cu: goto label_30f52c;
        case 0x30f530u: goto label_30f530;
        case 0x30f534u: goto label_30f534;
        case 0x30f538u: goto label_30f538;
        case 0x30f53cu: goto label_30f53c;
        case 0x30f540u: goto label_30f540;
        case 0x30f544u: goto label_30f544;
        case 0x30f548u: goto label_30f548;
        case 0x30f54cu: goto label_30f54c;
        case 0x30f550u: goto label_30f550;
        case 0x30f554u: goto label_30f554;
        case 0x30f558u: goto label_30f558;
        case 0x30f55cu: goto label_30f55c;
        case 0x30f560u: goto label_30f560;
        case 0x30f564u: goto label_30f564;
        case 0x30f568u: goto label_30f568;
        case 0x30f56cu: goto label_30f56c;
        case 0x30f570u: goto label_30f570;
        case 0x30f574u: goto label_30f574;
        case 0x30f578u: goto label_30f578;
        case 0x30f57cu: goto label_30f57c;
        case 0x30f580u: goto label_30f580;
        case 0x30f584u: goto label_30f584;
        case 0x30f588u: goto label_30f588;
        case 0x30f58cu: goto label_30f58c;
        case 0x30f590u: goto label_30f590;
        case 0x30f594u: goto label_30f594;
        case 0x30f598u: goto label_30f598;
        case 0x30f59cu: goto label_30f59c;
        case 0x30f5a0u: goto label_30f5a0;
        case 0x30f5a4u: goto label_30f5a4;
        case 0x30f5a8u: goto label_30f5a8;
        case 0x30f5acu: goto label_30f5ac;
        case 0x30f5b0u: goto label_30f5b0;
        case 0x30f5b4u: goto label_30f5b4;
        case 0x30f5b8u: goto label_30f5b8;
        case 0x30f5bcu: goto label_30f5bc;
        case 0x30f5c0u: goto label_30f5c0;
        case 0x30f5c4u: goto label_30f5c4;
        case 0x30f5c8u: goto label_30f5c8;
        case 0x30f5ccu: goto label_30f5cc;
        case 0x30f5d0u: goto label_30f5d0;
        case 0x30f5d4u: goto label_30f5d4;
        case 0x30f5d8u: goto label_30f5d8;
        case 0x30f5dcu: goto label_30f5dc;
        case 0x30f5e0u: goto label_30f5e0;
        case 0x30f5e4u: goto label_30f5e4;
        case 0x30f5e8u: goto label_30f5e8;
        case 0x30f5ecu: goto label_30f5ec;
        case 0x30f5f0u: goto label_30f5f0;
        case 0x30f5f4u: goto label_30f5f4;
        case 0x30f5f8u: goto label_30f5f8;
        case 0x30f5fcu: goto label_30f5fc;
        case 0x30f600u: goto label_30f600;
        case 0x30f604u: goto label_30f604;
        case 0x30f608u: goto label_30f608;
        case 0x30f60cu: goto label_30f60c;
        case 0x30f610u: goto label_30f610;
        case 0x30f614u: goto label_30f614;
        case 0x30f618u: goto label_30f618;
        case 0x30f61cu: goto label_30f61c;
        case 0x30f620u: goto label_30f620;
        case 0x30f624u: goto label_30f624;
        case 0x30f628u: goto label_30f628;
        case 0x30f62cu: goto label_30f62c;
        case 0x30f630u: goto label_30f630;
        case 0x30f634u: goto label_30f634;
        case 0x30f638u: goto label_30f638;
        case 0x30f63cu: goto label_30f63c;
        case 0x30f640u: goto label_30f640;
        case 0x30f644u: goto label_30f644;
        case 0x30f648u: goto label_30f648;
        case 0x30f64cu: goto label_30f64c;
        case 0x30f650u: goto label_30f650;
        case 0x30f654u: goto label_30f654;
        case 0x30f658u: goto label_30f658;
        case 0x30f65cu: goto label_30f65c;
        case 0x30f660u: goto label_30f660;
        case 0x30f664u: goto label_30f664;
        case 0x30f668u: goto label_30f668;
        case 0x30f66cu: goto label_30f66c;
        case 0x30f670u: goto label_30f670;
        case 0x30f674u: goto label_30f674;
        case 0x30f678u: goto label_30f678;
        case 0x30f67cu: goto label_30f67c;
        default: break;
    }

    ctx->pc = 0x30f2e0u;

label_30f2e0:
    // 0x30f2e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_30f2e4:
    // 0x30f2e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f2e8:
    // 0x30f2e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30f2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_30f2ec:
    // 0x30f2ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30f2f0:
    // 0x30f2f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30f2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_30f2f4:
    // 0x30f2f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30f2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30f2f8:
    // 0x30f2f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30f2fc:
    // 0x30f2fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30f300:
    // 0x30f300: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x30f300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30f304:
    // 0x30f304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30f304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30f308:
    // 0x30f308: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30f308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30f30c:
    // 0x30f30c: 0xc440f410  lwc1        $f0, -0xBF0($v0)
    ctx->pc = 0x30f30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f310:
    // 0x30f310: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30f310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_30f314:
    // 0x30f314: 0xc461f414  lwc1        $f1, -0xBEC($v1)
    ctx->pc = 0x30f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f318:
    // 0x30f318: 0x262600b0  addiu       $a2, $s1, 0xB0
    ctx->pc = 0x30f318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_30f31c:
    // 0x30f31c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f320:
    // 0x30f320: 0xc442f418  lwc1        $f2, -0xBE8($v0)
    ctx->pc = 0x30f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30f324:
    // 0x30f324: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30f328:
    // 0x30f328: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x30f328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_30f32c:
    // 0x30f32c: 0xc460f41c  lwc1        $f0, -0xBE4($v1)
    ctx->pc = 0x30f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f330:
    // 0x30f330: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f334:
    // 0x30f334: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x30f334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_30f338:
    // 0x30f338: 0xc441f420  lwc1        $f1, -0xBE0($v0)
    ctx->pc = 0x30f338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f33c:
    // 0x30f33c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30f340:
    // 0x30f340: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x30f340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_30f344:
    // 0x30f344: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x30f344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_30f348:
    // 0x30f348: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f34c:
    // 0x30f34c: 0xc440f424  lwc1        $f0, -0xBDC($v0)
    ctx->pc = 0x30f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f350:
    // 0x30f350: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x30f350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_30f354:
    // 0x30f354: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f358:
    // 0x30f358: 0xc441f428  lwc1        $f1, -0xBD8($v0)
    ctx->pc = 0x30f358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f35c:
    // 0x30f35c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x30f35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_30f360:
    // 0x30f360: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f364:
    // 0x30f364: 0xc440f42c  lwc1        $f0, -0xBD4($v0)
    ctx->pc = 0x30f364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f368:
    // 0x30f368: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x30f368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_30f36c:
    // 0x30f36c: 0xc461f430  lwc1        $f1, -0xBD0($v1)
    ctx->pc = 0x30f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f370:
    // 0x30f370: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f374:
    // 0x30f374: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x30f374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_30f378:
    // 0x30f378: 0xc440f434  lwc1        $f0, -0xBCC($v0)
    ctx->pc = 0x30f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f37c:
    // 0x30f37c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30f380:
    // 0x30f380: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x30f380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_30f384:
    // 0x30f384: 0xc461f438  lwc1        $f1, -0xBC8($v1)
    ctx->pc = 0x30f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f388:
    // 0x30f388: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f38c:
    // 0x30f38c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x30f38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_30f390:
    // 0x30f390: 0xc440f43c  lwc1        $f0, -0xBC4($v0)
    ctx->pc = 0x30f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f394:
    // 0x30f394: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30f398:
    // 0x30f398: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x30f398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_30f39c:
    // 0x30f39c: 0xc461f440  lwc1        $f1, -0xBC0($v1)
    ctx->pc = 0x30f39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f3a0:
    // 0x30f3a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f3a4:
    // 0x30f3a4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x30f3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_30f3a8:
    // 0x30f3a8: 0xc440f444  lwc1        $f0, -0xBBC($v0)
    ctx->pc = 0x30f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f3ac:
    // 0x30f3ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30f3b0:
    // 0x30f3b0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x30f3b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_30f3b4:
    // 0x30f3b4: 0xc461f448  lwc1        $f1, -0xBB8($v1)
    ctx->pc = 0x30f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f3b8:
    // 0x30f3b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f3bc:
    // 0x30f3bc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x30f3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_30f3c0:
    // 0x30f3c0: 0xc440f44c  lwc1        $f0, -0xBB4($v0)
    ctx->pc = 0x30f3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f3c4:
    // 0x30f3c4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30f3c8:
    // 0x30f3c8: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x30f3c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_30f3cc:
    // 0x30f3cc: 0xc461f450  lwc1        $f1, -0xBB0($v1)
    ctx->pc = 0x30f3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f3d0:
    // 0x30f3d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f3d4:
    // 0x30f3d4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x30f3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_30f3d8:
    // 0x30f3d8: 0xc440f454  lwc1        $f0, -0xBAC($v0)
    ctx->pc = 0x30f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f3dc:
    // 0x30f3dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30f3e0:
    // 0x30f3e0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x30f3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_30f3e4:
    // 0x30f3e4: 0xc461f458  lwc1        $f1, -0xBA8($v1)
    ctx->pc = 0x30f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f3e8:
    // 0x30f3e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f3ec:
    // 0x30f3ec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x30f3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_30f3f0:
    // 0x30f3f0: 0xc440f45c  lwc1        $f0, -0xBA4($v0)
    ctx->pc = 0x30f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f3f4:
    // 0x30f3f4: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x30f3f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_30f3f8:
    // 0x30f3f8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x30f3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_30f3fc:
    // 0x30f3fc: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x30f3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_30f400:
    // 0x30f400: 0xc04cc90  jal         func_133240
label_30f404:
    if (ctx->pc == 0x30F404u) {
        ctx->pc = 0x30F404u;
            // 0x30f404: 0x263000d8  addiu       $s0, $s1, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
        ctx->pc = 0x30F408u;
        goto label_30f408;
    }
    ctx->pc = 0x30F400u;
    SET_GPR_U32(ctx, 31, 0x30F408u);
    ctx->pc = 0x30F404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F400u;
            // 0x30f404: 0x263000d8  addiu       $s0, $s1, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F408u; }
        if (ctx->pc != 0x30F408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F408u; }
        if (ctx->pc != 0x30F408u) { return; }
    }
    ctx->pc = 0x30F408u;
label_30f408:
    // 0x30f408: 0x8e2600c4  lw          $a2, 0xC4($s1)
    ctx->pc = 0x30f408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_30f40c:
    // 0x30f40c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30f410:
    // 0x30f410: 0xc04cc90  jal         func_133240
label_30f414:
    if (ctx->pc == 0x30F414u) {
        ctx->pc = 0x30F414u;
            // 0x30f414: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x30F418u;
        goto label_30f418;
    }
    ctx->pc = 0x30F410u;
    SET_GPR_U32(ctx, 31, 0x30F418u);
    ctx->pc = 0x30F414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F410u;
            // 0x30f414: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F418u; }
        if (ctx->pc != 0x30F418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F418u; }
        if (ctx->pc != 0x30F418u) { return; }
    }
    ctx->pc = 0x30F418u;
label_30f418:
    // 0x30f418: 0x8e2600c4  lw          $a2, 0xC4($s1)
    ctx->pc = 0x30f418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_30f41c:
    // 0x30f41c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30f41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30f420:
    // 0x30f420: 0xc04cc90  jal         func_133240
label_30f424:
    if (ctx->pc == 0x30F424u) {
        ctx->pc = 0x30F424u;
            // 0x30f424: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F428u;
        goto label_30f428;
    }
    ctx->pc = 0x30F420u;
    SET_GPR_U32(ctx, 31, 0x30F428u);
    ctx->pc = 0x30F424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F420u;
            // 0x30f424: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F428u; }
        if (ctx->pc != 0x30F428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F428u; }
        if (ctx->pc != 0x30F428u) { return; }
    }
    ctx->pc = 0x30F428u;
label_30f428:
    // 0x30f428: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30f428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30f42c:
    // 0x30f42c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x30f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30f430:
    // 0x30f430: 0xc04cc90  jal         func_133240
label_30f434:
    if (ctx->pc == 0x30F434u) {
        ctx->pc = 0x30F434u;
            // 0x30f434: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x30F438u;
        goto label_30f438;
    }
    ctx->pc = 0x30F430u;
    SET_GPR_U32(ctx, 31, 0x30F438u);
    ctx->pc = 0x30F434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F430u;
            // 0x30f434: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F438u; }
        if (ctx->pc != 0x30F438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F438u; }
        if (ctx->pc != 0x30F438u) { return; }
    }
    ctx->pc = 0x30F438u;
label_30f438:
    // 0x30f438: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30f438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30f43c:
    // 0x30f43c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x30f43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_30f440:
    // 0x30f440: 0xc04cc90  jal         func_133240
label_30f444:
    if (ctx->pc == 0x30F444u) {
        ctx->pc = 0x30F444u;
            // 0x30f444: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F448u;
        goto label_30f448;
    }
    ctx->pc = 0x30F440u;
    SET_GPR_U32(ctx, 31, 0x30F448u);
    ctx->pc = 0x30F444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F440u;
            // 0x30f444: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F448u; }
        if (ctx->pc != 0x30F448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F448u; }
        if (ctx->pc != 0x30F448u) { return; }
    }
    ctx->pc = 0x30F448u;
label_30f448:
    // 0x30f448: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x30f448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_30f44c:
    // 0x30f44c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30f44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_30f450:
    // 0x30f450: 0xc04ccc4  jal         func_133310
label_30f454:
    if (ctx->pc == 0x30F454u) {
        ctx->pc = 0x30F454u;
            // 0x30f454: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F458u;
        goto label_30f458;
    }
    ctx->pc = 0x30F450u;
    SET_GPR_U32(ctx, 31, 0x30F458u);
    ctx->pc = 0x30F454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F450u;
            // 0x30f454: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F458u; }
        if (ctx->pc != 0x30F458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F458u; }
        if (ctx->pc != 0x30F458u) { return; }
    }
    ctx->pc = 0x30F458u;
label_30f458:
    // 0x30f458: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x30f458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_30f45c:
    // 0x30f45c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30f45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30f460:
    // 0x30f460: 0xc04cc90  jal         func_133240
label_30f464:
    if (ctx->pc == 0x30F464u) {
        ctx->pc = 0x30F464u;
            // 0x30f464: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x30F468u;
        goto label_30f468;
    }
    ctx->pc = 0x30F460u;
    SET_GPR_U32(ctx, 31, 0x30F468u);
    ctx->pc = 0x30F464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F460u;
            // 0x30f464: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F468u; }
        if (ctx->pc != 0x30F468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F468u; }
        if (ctx->pc != 0x30F468u) { return; }
    }
    ctx->pc = 0x30F468u;
label_30f468:
    // 0x30f468: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x30f468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_30f46c:
    // 0x30f46c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x30f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_30f470:
    // 0x30f470: 0xc04ccc4  jal         func_133310
label_30f474:
    if (ctx->pc == 0x30F474u) {
        ctx->pc = 0x30F474u;
            // 0x30f474: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F478u;
        goto label_30f478;
    }
    ctx->pc = 0x30F470u;
    SET_GPR_U32(ctx, 31, 0x30F478u);
    ctx->pc = 0x30F474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F470u;
            // 0x30f474: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F478u; }
        if (ctx->pc != 0x30F478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F478u; }
        if (ctx->pc != 0x30F478u) { return; }
    }
    ctx->pc = 0x30F478u;
label_30f478:
    // 0x30f478: 0xc04cc2c  jal         func_1330B0
label_30f47c:
    if (ctx->pc == 0x30F47Cu) {
        ctx->pc = 0x30F47Cu;
            // 0x30f47c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x30F480u;
        goto label_30f480;
    }
    ctx->pc = 0x30F478u;
    SET_GPR_U32(ctx, 31, 0x30F480u);
    ctx->pc = 0x30F47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F478u;
            // 0x30f47c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F480u; }
        if (ctx->pc != 0x30F480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F480u; }
        if (ctx->pc != 0x30F480u) { return; }
    }
    ctx->pc = 0x30F480u;
label_30f480:
    // 0x30f480: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x30f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_30f484:
    // 0x30f484: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x30f484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_30f488:
    // 0x30f488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30f48c:
    // 0x30f48c: 0x0  nop
    ctx->pc = 0x30f48cu;
    // NOP
label_30f490:
    // 0x30f490: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x30f490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30f494:
    // 0x30f494: 0x45020044  bc1fl       . + 4 + (0x44 << 2)
label_30f498:
    if (ctx->pc == 0x30F498u) {
        ctx->pc = 0x30F498u;
            // 0x30f498: 0x86340066  lh          $s4, 0x66($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
        ctx->pc = 0x30F49Cu;
        goto label_30f49c;
    }
    ctx->pc = 0x30F494u;
    {
        const bool branch_taken_0x30f494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f494) {
            ctx->pc = 0x30F498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30F494u;
            // 0x30f498: 0x86340066  lh          $s4, 0x66($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30F5A8u;
            goto label_30f5a8;
        }
    }
    ctx->pc = 0x30F49Cu;
label_30f49c:
    // 0x30f49c: 0x96220064  lhu         $v0, 0x64($s1)
    ctx->pc = 0x30f49cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_30f4a0:
    // 0x30f4a0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x30f4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_30f4a4:
    // 0x30f4a4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_30f4a8:
    if (ctx->pc == 0x30F4A8u) {
        ctx->pc = 0x30F4ACu;
        goto label_30f4ac;
    }
    ctx->pc = 0x30F4A4u;
    {
        const bool branch_taken_0x30f4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f4a4) {
            ctx->pc = 0x30F548u;
            goto label_30f548;
        }
    }
    ctx->pc = 0x30F4ACu;
label_30f4ac:
    // 0x30f4ac: 0x86340066  lh          $s4, 0x66($s1)
    ctx->pc = 0x30f4acu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_30f4b0:
    // 0x30f4b0: 0x1a800061  blez        $s4, . + 4 + (0x61 << 2)
label_30f4b4:
    if (ctx->pc == 0x30F4B4u) {
        ctx->pc = 0x30F4B8u;
        goto label_30f4b8;
    }
    ctx->pc = 0x30F4B0u;
    {
        const bool branch_taken_0x30f4b0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x30f4b0) {
            ctx->pc = 0x30F638u;
            goto label_30f638;
        }
    }
    ctx->pc = 0x30F4B8u;
label_30f4b8:
    // 0x30f4b8: 0x149840  sll         $s3, $s4, 1
    ctx->pc = 0x30f4b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_30f4bc:
    // 0x30f4bc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x30f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_30f4c0:
    // 0x30f4c0: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x30f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_30f4c4:
    // 0x30f4c4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x30f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_30f4c8:
    // 0x30f4c8: 0x49040  sll         $s2, $a0, 1
    ctx->pc = 0x30f4c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_30f4cc:
    // 0x30f4cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30f4d0:
    // 0x30f4d0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x30f4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_30f4d4:
    // 0x30f4d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30f4d8:
    // 0x30f4d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x30f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_30f4dc:
    // 0x30f4dc: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x30f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_30f4e0:
    // 0x30f4e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30f4e4:
    // 0x30f4e4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x30f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_30f4e8:
    // 0x30f4e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f4ec:
    // 0x30f4ec: 0xc44cf3f8  lwc1        $f12, -0xC08($v0)
    ctx->pc = 0x30f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30f4f0:
    // 0x30f4f0: 0xc04cb78  jal         func_132DE0
label_30f4f4:
    if (ctx->pc == 0x30F4F4u) {
        ctx->pc = 0x30F4F4u;
            // 0x30f4f4: 0x246500d8  addiu       $a1, $v1, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
        ctx->pc = 0x30F4F8u;
        goto label_30f4f8;
    }
    ctx->pc = 0x30F4F0u;
    SET_GPR_U32(ctx, 31, 0x30F4F8u);
    ctx->pc = 0x30F4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F4F0u;
            // 0x30f4f4: 0x246500d8  addiu       $a1, $v1, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4F8u; }
        if (ctx->pc != 0x30F4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4F8u; }
        if (ctx->pc != 0x30F4F8u) { return; }
    }
    ctx->pc = 0x30F4F8u;
label_30f4f8:
    // 0x30f4f8: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x30f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30f4fc:
    // 0x30f4fc: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x30f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_30f500:
    // 0x30f500: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30f500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30f504:
    // 0x30f504: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x30f504u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_30f508:
    // 0x30f508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30f50c:
    // 0x30f50c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_30f510:
    // 0x30f510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30f514:
    // 0x30f514: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30f514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30f518:
    // 0x30f518: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_30f51c:
    // 0x30f51c: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x30f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_30f520:
    // 0x30f520: 0x244500d8  addiu       $a1, $v0, 0xD8
    ctx->pc = 0x30f520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
label_30f524:
    // 0x30f524: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f528:
    // 0x30f528: 0xc44cf3f8  lwc1        $f12, -0xC08($v0)
    ctx->pc = 0x30f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30f52c:
    // 0x30f52c: 0xc04cb78  jal         func_132DE0
label_30f530:
    if (ctx->pc == 0x30F530u) {
        ctx->pc = 0x30F530u;
            // 0x30f530: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x30F534u;
        goto label_30f534;
    }
    ctx->pc = 0x30F52Cu;
    SET_GPR_U32(ctx, 31, 0x30F534u);
    ctx->pc = 0x30F530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F52Cu;
            // 0x30f530: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F534u; }
        if (ctx->pc != 0x30F534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F534u; }
        if (ctx->pc != 0x30F534u) { return; }
    }
    ctx->pc = 0x30F534u;
label_30f534:
    // 0x30f534: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x30f534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_30f538:
    // 0x30f538: 0x1e80ffe0  bgtz        $s4, . + 4 + (-0x20 << 2)
label_30f53c:
    if (ctx->pc == 0x30F53Cu) {
        ctx->pc = 0x30F53Cu;
            // 0x30f53c: 0x2673fffe  addiu       $s3, $s3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
        ctx->pc = 0x30F540u;
        goto label_30f540;
    }
    ctx->pc = 0x30F538u;
    {
        const bool branch_taken_0x30f538 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x30F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F538u;
            // 0x30f53c: 0x2673fffe  addiu       $s3, $s3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f538) {
            ctx->pc = 0x30F4BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f4bc;
        }
    }
    ctx->pc = 0x30F540u;
label_30f540:
    // 0x30f540: 0x1000003d  b           . + 4 + (0x3D << 2)
label_30f544:
    if (ctx->pc == 0x30F544u) {
        ctx->pc = 0x30F548u;
        goto label_30f548;
    }
    ctx->pc = 0x30F540u;
    {
        const bool branch_taken_0x30f540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f540) {
            ctx->pc = 0x30F638u;
            goto label_30f638;
        }
    }
    ctx->pc = 0x30F548u;
label_30f548:
    // 0x30f548: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30f548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_30f54c:
    // 0x30f54c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x30f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_30f550:
    // 0x30f550: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x30f550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30f554:
    // 0x30f554: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x30f554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30f558:
    // 0x30f558: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x30f558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30f55c:
    // 0x30f55c: 0xe621009c  swc1        $f1, 0x9C($s1)
    ctx->pc = 0x30f55cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
label_30f560:
    // 0x30f560: 0x86220066  lh          $v0, 0x66($s1)
    ctx->pc = 0x30f560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_30f564:
    // 0x30f564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30f568:
    // 0x30f568: 0x0  nop
    ctx->pc = 0x30f568u;
    // NOP
label_30f56c:
    // 0x30f56c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_30f570:
    // 0x30f570: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30f570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30f574:
    // 0x30f574: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_30f578:
    if (ctx->pc == 0x30F578u) {
        ctx->pc = 0x30F57Cu;
        goto label_30f57c;
    }
    ctx->pc = 0x30F574u;
    {
        const bool branch_taken_0x30f574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f574) {
            ctx->pc = 0x30F5A4u;
            goto label_30f5a4;
        }
    }
    ctx->pc = 0x30F57Cu;
label_30f57c:
    // 0x30f57c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x30f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_30f580:
    // 0x30f580: 0x96220064  lhu         $v0, 0x64($s1)
    ctx->pc = 0x30f580u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 100)));
label_30f584:
    // 0x30f584: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x30f584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_30f588:
    // 0x30f588: 0xa6220064  sh          $v0, 0x64($s1)
    ctx->pc = 0x30f588u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 2));
label_30f58c:
    // 0x30f58c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x30f58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_30f590:
    // 0x30f590: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x30f590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_30f594:
    // 0x30f594: 0x320f809  jalr        $t9
label_30f598:
    if (ctx->pc == 0x30F598u) {
        ctx->pc = 0x30F598u;
            // 0x30f598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F59Cu;
        goto label_30f59c;
    }
    ctx->pc = 0x30F594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30F59Cu);
        ctx->pc = 0x30F598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F594u;
            // 0x30f598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30F59Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30F59Cu; }
            if (ctx->pc != 0x30F59Cu) { return; }
        }
        }
    }
    ctx->pc = 0x30F59Cu;
label_30f59c:
    // 0x30f59c: 0x10000026  b           . + 4 + (0x26 << 2)
label_30f5a0:
    if (ctx->pc == 0x30F5A0u) {
        ctx->pc = 0x30F5A4u;
        goto label_30f5a4;
    }
    ctx->pc = 0x30F59Cu;
    {
        const bool branch_taken_0x30f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f59c) {
            ctx->pc = 0x30F638u;
            goto label_30f638;
        }
    }
    ctx->pc = 0x30F5A4u;
label_30f5a4:
    // 0x30f5a4: 0x86340066  lh          $s4, 0x66($s1)
    ctx->pc = 0x30f5a4u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_30f5a8:
    // 0x30f5a8: 0x1a800023  blez        $s4, . + 4 + (0x23 << 2)
label_30f5ac:
    if (ctx->pc == 0x30F5ACu) {
        ctx->pc = 0x30F5B0u;
        goto label_30f5b0;
    }
    ctx->pc = 0x30F5A8u;
    {
        const bool branch_taken_0x30f5a8 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x30f5a8) {
            ctx->pc = 0x30F638u;
            goto label_30f638;
        }
    }
    ctx->pc = 0x30F5B0u;
label_30f5b0:
    // 0x30f5b0: 0x149840  sll         $s3, $s4, 1
    ctx->pc = 0x30f5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_30f5b4:
    // 0x30f5b4: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x30f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_30f5b8:
    // 0x30f5b8: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x30f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_30f5bc:
    // 0x30f5bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x30f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_30f5c0:
    // 0x30f5c0: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x30f5c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30f5c4:
    // 0x30f5c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30f5c8:
    // 0x30f5c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30f5cc:
    // 0x30f5cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x30f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_30f5d0:
    // 0x30f5d0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_30f5d4:
    // 0x30f5d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30f5d8:
    // 0x30f5d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f5dc:
    // 0x30f5dc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x30f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_30f5e0:
    // 0x30f5e0: 0x246500d8  addiu       $a1, $v1, 0xD8
    ctx->pc = 0x30f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
label_30f5e4:
    // 0x30f5e4: 0xc44cf3f0  lwc1        $f12, -0xC10($v0)
    ctx->pc = 0x30f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30f5e8:
    // 0x30f5e8: 0xc04cb78  jal         func_132DE0
label_30f5ec:
    if (ctx->pc == 0x30F5ECu) {
        ctx->pc = 0x30F5ECu;
            // 0x30f5ec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F5F0u;
        goto label_30f5f0;
    }
    ctx->pc = 0x30F5E8u;
    SET_GPR_U32(ctx, 31, 0x30F5F0u);
    ctx->pc = 0x30F5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F5E8u;
            // 0x30f5ec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5F0u; }
        if (ctx->pc != 0x30F5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5F0u; }
        if (ctx->pc != 0x30F5F0u) { return; }
    }
    ctx->pc = 0x30F5F0u;
label_30f5f0:
    // 0x30f5f0: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x30f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_30f5f4:
    // 0x30f5f4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x30f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_30f5f8:
    // 0x30f5f8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x30f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_30f5fc:
    // 0x30f5fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30f600:
    // 0x30f600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30f604:
    // 0x30f604: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30f604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_30f608:
    // 0x30f608: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30f608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30f60c:
    // 0x30f60c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30f610:
    // 0x30f610: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x30f610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_30f614:
    // 0x30f614: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x30f614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_30f618:
    // 0x30f618: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30f618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30f61c:
    // 0x30f61c: 0x246500d8  addiu       $a1, $v1, 0xD8
    ctx->pc = 0x30f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
label_30f620:
    // 0x30f620: 0xc44cf3f0  lwc1        $f12, -0xC10($v0)
    ctx->pc = 0x30f620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_30f624:
    // 0x30f624: 0xc04cb78  jal         func_132DE0
label_30f628:
    if (ctx->pc == 0x30F628u) {
        ctx->pc = 0x30F628u;
            // 0x30f628: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30F62Cu;
        goto label_30f62c;
    }
    ctx->pc = 0x30F624u;
    SET_GPR_U32(ctx, 31, 0x30F62Cu);
    ctx->pc = 0x30F628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F624u;
            // 0x30f628: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F62Cu; }
        if (ctx->pc != 0x30F62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F62Cu; }
        if (ctx->pc != 0x30F62Cu) { return; }
    }
    ctx->pc = 0x30F62Cu;
label_30f62c:
    // 0x30f62c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x30f62cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_30f630:
    // 0x30f630: 0x1e80ffe0  bgtz        $s4, . + 4 + (-0x20 << 2)
label_30f634:
    if (ctx->pc == 0x30F634u) {
        ctx->pc = 0x30F634u;
            // 0x30f634: 0x2673fffe  addiu       $s3, $s3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
        ctx->pc = 0x30F638u;
        goto label_30f638;
    }
    ctx->pc = 0x30F630u;
    {
        const bool branch_taken_0x30f630 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x30F634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F630u;
            // 0x30f634: 0x2673fffe  addiu       $s3, $s3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f630) {
            ctx->pc = 0x30F5B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f5b4;
        }
    }
    ctx->pc = 0x30F638u;
label_30f638:
    // 0x30f638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30f63c:
    // 0x30f63c: 0xc04cb1c  jal         func_132C70
label_30f640:
    if (ctx->pc == 0x30F640u) {
        ctx->pc = 0x30F640u;
            // 0x30f640: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x30F644u;
        goto label_30f644;
    }
    ctx->pc = 0x30F63Cu;
    SET_GPR_U32(ctx, 31, 0x30F644u);
    ctx->pc = 0x30F640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F63Cu;
            // 0x30f640: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F644u; }
        if (ctx->pc != 0x30F644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F644u; }
        if (ctx->pc != 0x30F644u) { return; }
    }
    ctx->pc = 0x30F644u;
label_30f644:
    // 0x30f644: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x30f644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_30f648:
    // 0x30f648: 0xc04cb1c  jal         func_132C70
label_30f64c:
    if (ctx->pc == 0x30F64Cu) {
        ctx->pc = 0x30F64Cu;
            // 0x30f64c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x30F650u;
        goto label_30f650;
    }
    ctx->pc = 0x30F648u;
    SET_GPR_U32(ctx, 31, 0x30F650u);
    ctx->pc = 0x30F64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F648u;
            // 0x30f64c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F650u; }
        if (ctx->pc != 0x30F650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F650u; }
        if (ctx->pc != 0x30F650u) { return; }
    }
    ctx->pc = 0x30F650u;
label_30f650:
    // 0x30f650: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30f650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_30f654:
    // 0x30f654: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30f654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_30f658:
    // 0x30f658: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30f658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30f65c:
    // 0x30f65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30f65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30f660:
    // 0x30f660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30f664:
    // 0x30f664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30f664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30f668:
    // 0x30f668: 0x3e00008  jr          $ra
label_30f66c:
    if (ctx->pc == 0x30F66Cu) {
        ctx->pc = 0x30F66Cu;
            // 0x30f66c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x30F670u;
        goto label_30f670;
    }
    ctx->pc = 0x30F668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F668u;
            // 0x30f66c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F670u;
label_30f670:
    // 0x30f670: 0xa0800061  sb          $zero, 0x61($a0)
    ctx->pc = 0x30f670u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 97), (uint8_t)GPR_U32(ctx, 0));
label_30f674:
    // 0x30f674: 0x3e00008  jr          $ra
label_30f678:
    if (ctx->pc == 0x30F678u) {
        ctx->pc = 0x30F678u;
            // 0x30f678: 0xa4800066  sh          $zero, 0x66($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x30F67Cu;
        goto label_30f67c;
    }
    ctx->pc = 0x30F674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F674u;
            // 0x30f678: 0xa4800066  sh          $zero, 0x66($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F67Cu;
label_30f67c:
    // 0x30f67c: 0x0  nop
    ctx->pc = 0x30f67cu;
    // NOP
}
