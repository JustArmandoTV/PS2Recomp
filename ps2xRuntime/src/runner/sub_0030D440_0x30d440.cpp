#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030D440
// Address: 0x30d440 - 0x30d6d0
void sub_0030D440_0x30d440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D440_0x30d440");
#endif

    switch (ctx->pc) {
        case 0x30d440u: goto label_30d440;
        case 0x30d444u: goto label_30d444;
        case 0x30d448u: goto label_30d448;
        case 0x30d44cu: goto label_30d44c;
        case 0x30d450u: goto label_30d450;
        case 0x30d454u: goto label_30d454;
        case 0x30d458u: goto label_30d458;
        case 0x30d45cu: goto label_30d45c;
        case 0x30d460u: goto label_30d460;
        case 0x30d464u: goto label_30d464;
        case 0x30d468u: goto label_30d468;
        case 0x30d46cu: goto label_30d46c;
        case 0x30d470u: goto label_30d470;
        case 0x30d474u: goto label_30d474;
        case 0x30d478u: goto label_30d478;
        case 0x30d47cu: goto label_30d47c;
        case 0x30d480u: goto label_30d480;
        case 0x30d484u: goto label_30d484;
        case 0x30d488u: goto label_30d488;
        case 0x30d48cu: goto label_30d48c;
        case 0x30d490u: goto label_30d490;
        case 0x30d494u: goto label_30d494;
        case 0x30d498u: goto label_30d498;
        case 0x30d49cu: goto label_30d49c;
        case 0x30d4a0u: goto label_30d4a0;
        case 0x30d4a4u: goto label_30d4a4;
        case 0x30d4a8u: goto label_30d4a8;
        case 0x30d4acu: goto label_30d4ac;
        case 0x30d4b0u: goto label_30d4b0;
        case 0x30d4b4u: goto label_30d4b4;
        case 0x30d4b8u: goto label_30d4b8;
        case 0x30d4bcu: goto label_30d4bc;
        case 0x30d4c0u: goto label_30d4c0;
        case 0x30d4c4u: goto label_30d4c4;
        case 0x30d4c8u: goto label_30d4c8;
        case 0x30d4ccu: goto label_30d4cc;
        case 0x30d4d0u: goto label_30d4d0;
        case 0x30d4d4u: goto label_30d4d4;
        case 0x30d4d8u: goto label_30d4d8;
        case 0x30d4dcu: goto label_30d4dc;
        case 0x30d4e0u: goto label_30d4e0;
        case 0x30d4e4u: goto label_30d4e4;
        case 0x30d4e8u: goto label_30d4e8;
        case 0x30d4ecu: goto label_30d4ec;
        case 0x30d4f0u: goto label_30d4f0;
        case 0x30d4f4u: goto label_30d4f4;
        case 0x30d4f8u: goto label_30d4f8;
        case 0x30d4fcu: goto label_30d4fc;
        case 0x30d500u: goto label_30d500;
        case 0x30d504u: goto label_30d504;
        case 0x30d508u: goto label_30d508;
        case 0x30d50cu: goto label_30d50c;
        case 0x30d510u: goto label_30d510;
        case 0x30d514u: goto label_30d514;
        case 0x30d518u: goto label_30d518;
        case 0x30d51cu: goto label_30d51c;
        case 0x30d520u: goto label_30d520;
        case 0x30d524u: goto label_30d524;
        case 0x30d528u: goto label_30d528;
        case 0x30d52cu: goto label_30d52c;
        case 0x30d530u: goto label_30d530;
        case 0x30d534u: goto label_30d534;
        case 0x30d538u: goto label_30d538;
        case 0x30d53cu: goto label_30d53c;
        case 0x30d540u: goto label_30d540;
        case 0x30d544u: goto label_30d544;
        case 0x30d548u: goto label_30d548;
        case 0x30d54cu: goto label_30d54c;
        case 0x30d550u: goto label_30d550;
        case 0x30d554u: goto label_30d554;
        case 0x30d558u: goto label_30d558;
        case 0x30d55cu: goto label_30d55c;
        case 0x30d560u: goto label_30d560;
        case 0x30d564u: goto label_30d564;
        case 0x30d568u: goto label_30d568;
        case 0x30d56cu: goto label_30d56c;
        case 0x30d570u: goto label_30d570;
        case 0x30d574u: goto label_30d574;
        case 0x30d578u: goto label_30d578;
        case 0x30d57cu: goto label_30d57c;
        case 0x30d580u: goto label_30d580;
        case 0x30d584u: goto label_30d584;
        case 0x30d588u: goto label_30d588;
        case 0x30d58cu: goto label_30d58c;
        case 0x30d590u: goto label_30d590;
        case 0x30d594u: goto label_30d594;
        case 0x30d598u: goto label_30d598;
        case 0x30d59cu: goto label_30d59c;
        case 0x30d5a0u: goto label_30d5a0;
        case 0x30d5a4u: goto label_30d5a4;
        case 0x30d5a8u: goto label_30d5a8;
        case 0x30d5acu: goto label_30d5ac;
        case 0x30d5b0u: goto label_30d5b0;
        case 0x30d5b4u: goto label_30d5b4;
        case 0x30d5b8u: goto label_30d5b8;
        case 0x30d5bcu: goto label_30d5bc;
        case 0x30d5c0u: goto label_30d5c0;
        case 0x30d5c4u: goto label_30d5c4;
        case 0x30d5c8u: goto label_30d5c8;
        case 0x30d5ccu: goto label_30d5cc;
        case 0x30d5d0u: goto label_30d5d0;
        case 0x30d5d4u: goto label_30d5d4;
        case 0x30d5d8u: goto label_30d5d8;
        case 0x30d5dcu: goto label_30d5dc;
        case 0x30d5e0u: goto label_30d5e0;
        case 0x30d5e4u: goto label_30d5e4;
        case 0x30d5e8u: goto label_30d5e8;
        case 0x30d5ecu: goto label_30d5ec;
        case 0x30d5f0u: goto label_30d5f0;
        case 0x30d5f4u: goto label_30d5f4;
        case 0x30d5f8u: goto label_30d5f8;
        case 0x30d5fcu: goto label_30d5fc;
        case 0x30d600u: goto label_30d600;
        case 0x30d604u: goto label_30d604;
        case 0x30d608u: goto label_30d608;
        case 0x30d60cu: goto label_30d60c;
        case 0x30d610u: goto label_30d610;
        case 0x30d614u: goto label_30d614;
        case 0x30d618u: goto label_30d618;
        case 0x30d61cu: goto label_30d61c;
        case 0x30d620u: goto label_30d620;
        case 0x30d624u: goto label_30d624;
        case 0x30d628u: goto label_30d628;
        case 0x30d62cu: goto label_30d62c;
        case 0x30d630u: goto label_30d630;
        case 0x30d634u: goto label_30d634;
        case 0x30d638u: goto label_30d638;
        case 0x30d63cu: goto label_30d63c;
        case 0x30d640u: goto label_30d640;
        case 0x30d644u: goto label_30d644;
        case 0x30d648u: goto label_30d648;
        case 0x30d64cu: goto label_30d64c;
        case 0x30d650u: goto label_30d650;
        case 0x30d654u: goto label_30d654;
        case 0x30d658u: goto label_30d658;
        case 0x30d65cu: goto label_30d65c;
        case 0x30d660u: goto label_30d660;
        case 0x30d664u: goto label_30d664;
        case 0x30d668u: goto label_30d668;
        case 0x30d66cu: goto label_30d66c;
        case 0x30d670u: goto label_30d670;
        case 0x30d674u: goto label_30d674;
        case 0x30d678u: goto label_30d678;
        case 0x30d67cu: goto label_30d67c;
        case 0x30d680u: goto label_30d680;
        case 0x30d684u: goto label_30d684;
        case 0x30d688u: goto label_30d688;
        case 0x30d68cu: goto label_30d68c;
        case 0x30d690u: goto label_30d690;
        case 0x30d694u: goto label_30d694;
        case 0x30d698u: goto label_30d698;
        case 0x30d69cu: goto label_30d69c;
        case 0x30d6a0u: goto label_30d6a0;
        case 0x30d6a4u: goto label_30d6a4;
        case 0x30d6a8u: goto label_30d6a8;
        case 0x30d6acu: goto label_30d6ac;
        case 0x30d6b0u: goto label_30d6b0;
        case 0x30d6b4u: goto label_30d6b4;
        case 0x30d6b8u: goto label_30d6b8;
        case 0x30d6bcu: goto label_30d6bc;
        case 0x30d6c0u: goto label_30d6c0;
        case 0x30d6c4u: goto label_30d6c4;
        case 0x30d6c8u: goto label_30d6c8;
        case 0x30d6ccu: goto label_30d6cc;
        default: break;
    }

    ctx->pc = 0x30d440u;

label_30d440:
    // 0x30d440: 0x27bdf790  addiu       $sp, $sp, -0x870
    ctx->pc = 0x30d440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965136));
label_30d444:
    // 0x30d444: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x30d444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_30d448:
    // 0x30d448: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30d448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_30d44c:
    // 0x30d44c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d450:
    // 0x30d450: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30d450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_30d454:
    // 0x30d454: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30d454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30d458:
    // 0x30d458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30d458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_30d45c:
    // 0x30d45c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x30d45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30d460:
    // 0x30d460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30d464:
    // 0x30d464: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x30d464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_30d468:
    // 0x30d468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30d46c:
    // 0x30d46c: 0x84860062  lh          $a2, 0x62($a0)
    ctx->pc = 0x30d46cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
label_30d470:
    // 0x30d470: 0xc440f500  lwc1        $f0, -0xB00($v0)
    ctx->pc = 0x30d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d474:
    // 0x30d474: 0xc462f504  lwc1        $f2, -0xAFC($v1)
    ctx->pc = 0x30d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30d478:
    // 0x30d478: 0x8c8400cc  lw          $a0, 0xCC($a0)
    ctx->pc = 0x30d478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_30d47c:
    // 0x30d47c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d480:
    // 0x30d480: 0xc441f508  lwc1        $f1, -0xAF8($v0)
    ctx->pc = 0x30d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30d484:
    // 0x30d484: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x30d484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_30d488:
    // 0x30d488: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x30d488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_30d48c:
    // 0x30d48c: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x30d48cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_30d490:
    // 0x30d490: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d494:
    // 0x30d494: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x30d494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_30d498:
    // 0x30d498: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x30d498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_30d49c:
    // 0x30d49c: 0xc440f50c  lwc1        $f0, -0xAF4($v0)
    ctx->pc = 0x30d49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d4a0:
    // 0x30d4a0: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x30d4a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_30d4a4:
    // 0x30d4a4: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x30d4a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_30d4a8:
    // 0x30d4a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d4ac:
    // 0x30d4ac: 0xc443f510  lwc1        $f3, -0xAF0($v0)
    ctx->pc = 0x30d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30d4b0:
    // 0x30d4b0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x30d4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_30d4b4:
    // 0x30d4b4: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x30d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30d4b8:
    // 0x30d4b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d4bc:
    // 0x30d4bc: 0xc442f514  lwc1        $f2, -0xAEC($v0)
    ctx->pc = 0x30d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30d4c0:
    // 0x30d4c0: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x30d4c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_30d4c4:
    // 0x30d4c4: 0xc4840024  lwc1        $f4, 0x24($a0)
    ctx->pc = 0x30d4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30d4c8:
    // 0x30d4c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d4cc:
    // 0x30d4cc: 0xc441f518  lwc1        $f1, -0xAE8($v0)
    ctx->pc = 0x30d4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30d4d0:
    // 0x30d4d0: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x30d4d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_30d4d4:
    // 0x30d4d4: 0xc4840028  lwc1        $f4, 0x28($a0)
    ctx->pc = 0x30d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_30d4d8:
    // 0x30d4d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30d4dc:
    // 0x30d4dc: 0xc440f51c  lwc1        $f0, -0xAE4($v0)
    ctx->pc = 0x30d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d4e0:
    // 0x30d4e0: 0xe7a400b8  swc1        $f4, 0xB8($sp)
    ctx->pc = 0x30d4e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_30d4e4:
    // 0x30d4e4: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x30d4e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_30d4e8:
    // 0x30d4e8: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x30d4e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_30d4ec:
    // 0x30d4ec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_30d4f0:
    // 0x30d4f0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x30d4f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_30d4f4:
    // 0x30d4f4: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x30d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_30d4f8:
    // 0x30d4f8: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x30d4f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_30d4fc:
    // 0x30d4fc: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x30d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d500:
    // 0x30d500: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x30d500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_30d504:
    // 0x30d504: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x30d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_30d508:
    // 0x30d508: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x30d508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_30d50c:
    // 0x30d50c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x30d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d510:
    // 0x30d510: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x30d510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_30d514:
    // 0x30d514: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x30d514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30d518:
    // 0x30d518: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x30d518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_30d51c:
    // 0x30d51c: 0x84850004  lh          $a1, 0x4($a0)
    ctx->pc = 0x30d51cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_30d520:
    // 0x30d520: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30d520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_30d524:
    // 0x30d524: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_30d528:
    // 0x30d528: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x30d528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_30d52c:
    // 0x30d52c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30d530:
    // 0x30d530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30d534:
    // 0x30d534: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x30d534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_30d538:
    // 0x30d538: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30d53c:
    // 0x30d53c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x30d53cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_30d540:
    // 0x30d540: 0x320f809  jalr        $t9
label_30d544:
    if (ctx->pc == 0x30D544u) {
        ctx->pc = 0x30D544u;
            // 0x30d544: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x30D548u;
        goto label_30d548;
    }
    ctx->pc = 0x30D540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x30D548u);
        ctx->pc = 0x30D544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D540u;
            // 0x30d544: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x30D548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x30D548u; }
            if (ctx->pc != 0x30D548u) { return; }
        }
        }
    }
    ctx->pc = 0x30D548u;
label_30d548:
    // 0x30d548: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x30d548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_30d54c:
    // 0x30d54c: 0x8e070550  lw          $a3, 0x550($s0)
    ctx->pc = 0x30d54cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_30d550:
    // 0x30d550: 0x92020e3d  lbu         $v0, 0xE3D($s0)
    ctx->pc = 0x30d550u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3645)));
label_30d554:
    // 0x30d554: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x30d554u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_30d558:
    // 0x30d558: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x30d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_30d55c:
    // 0x30d55c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x30d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_30d560:
    // 0x30d560: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x30d560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_30d564:
    // 0x30d564: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x30d564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_30d568:
    // 0x30d568: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30d568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30d56c:
    // 0x30d56c: 0x244800c0  addiu       $t0, $v0, 0xC0
    ctx->pc = 0x30d56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_30d570:
    // 0x30d570: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x30d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_30d574:
    // 0x30d574: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x30d574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_30d578:
    // 0x30d578: 0xc0517b0  jal         func_145EC0
label_30d57c:
    if (ctx->pc == 0x30D57Cu) {
        ctx->pc = 0x30D57Cu;
            // 0x30d57c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x30D580u;
        goto label_30d580;
    }
    ctx->pc = 0x30D578u;
    SET_GPR_U32(ctx, 31, 0x30D580u);
    ctx->pc = 0x30D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D578u;
            // 0x30d57c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D580u; }
        if (ctx->pc != 0x30D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EC0_0x145ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D580u; }
        if (ctx->pc != 0x30D580u) { return; }
    }
    ctx->pc = 0x30D580u;
label_30d580:
    // 0x30d580: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x30d580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_30d584:
    // 0x30d584: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x30d584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30d588:
    // 0x30d588: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x30d588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_30d58c:
    // 0x30d58c: 0xc04cca0  jal         func_133280
label_30d590:
    if (ctx->pc == 0x30D590u) {
        ctx->pc = 0x30D590u;
            // 0x30d590: 0x24c6bbf0  addiu       $a2, $a2, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
        ctx->pc = 0x30D594u;
        goto label_30d594;
    }
    ctx->pc = 0x30D58Cu;
    SET_GPR_U32(ctx, 31, 0x30D594u);
    ctx->pc = 0x30D590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D58Cu;
            // 0x30d590: 0x24c6bbf0  addiu       $a2, $a2, -0x4410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D594u; }
        if (ctx->pc != 0x30D594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D594u; }
        if (ctx->pc != 0x30D594u) { return; }
    }
    ctx->pc = 0x30D594u;
label_30d594:
    // 0x30d594: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x30d594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_30d598:
    // 0x30d598: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x30d598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_30d59c:
    // 0x30d59c: 0xc04ccc4  jal         func_133310
label_30d5a0:
    if (ctx->pc == 0x30D5A0u) {
        ctx->pc = 0x30D5A0u;
            // 0x30d5a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D5A4u;
        goto label_30d5a4;
    }
    ctx->pc = 0x30D59Cu;
    SET_GPR_U32(ctx, 31, 0x30D5A4u);
    ctx->pc = 0x30D5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D59Cu;
            // 0x30d5a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5A4u; }
        if (ctx->pc != 0x30D5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5A4u; }
        if (ctx->pc != 0x30D5A4u) { return; }
    }
    ctx->pc = 0x30D5A4u;
label_30d5a4:
    // 0x30d5a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x30d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30d5a8:
    // 0x30d5a8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x30d5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_30d5ac:
    // 0x30d5ac: 0xc04ccc4  jal         func_133310
label_30d5b0:
    if (ctx->pc == 0x30D5B0u) {
        ctx->pc = 0x30D5B0u;
            // 0x30d5b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D5B4u;
        goto label_30d5b4;
    }
    ctx->pc = 0x30D5ACu;
    SET_GPR_U32(ctx, 31, 0x30D5B4u);
    ctx->pc = 0x30D5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D5ACu;
            // 0x30d5b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5B4u; }
        if (ctx->pc != 0x30D5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5B4u; }
        if (ctx->pc != 0x30D5B4u) { return; }
    }
    ctx->pc = 0x30D5B4u;
label_30d5b4:
    // 0x30d5b4: 0x96630064  lhu         $v1, 0x64($s3)
    ctx->pc = 0x30d5b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
label_30d5b8:
    // 0x30d5b8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30d5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_30d5bc:
    // 0x30d5bc: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
label_30d5c0:
    if (ctx->pc == 0x30D5C0u) {
        ctx->pc = 0x30D5C0u;
            // 0x30d5c0: 0x86630066  lh          $v1, 0x66($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
        ctx->pc = 0x30D5C4u;
        goto label_30d5c4;
    }
    ctx->pc = 0x30D5BCu;
    {
        const bool branch_taken_0x30d5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d5bc) {
            ctx->pc = 0x30D5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D5BCu;
            // 0x30d5c0: 0x86630066  lh          $v1, 0x66($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D624u;
            goto label_30d624;
        }
    }
    ctx->pc = 0x30D5C4u;
label_30d5c4:
    // 0x30d5c4: 0x8e6300cc  lw          $v1, 0xCC($s3)
    ctx->pc = 0x30d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_30d5c8:
    // 0x30d5c8: 0x3c080065  lui         $t0, 0x65
    ctx->pc = 0x30d5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)101 << 16));
label_30d5cc:
    // 0x30d5cc: 0x96620064  lhu         $v0, 0x64($s3)
    ctx->pc = 0x30d5ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 100)));
label_30d5d0:
    // 0x30d5d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30d5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30d5d4:
    // 0x30d5d4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30d5d8:
    // 0x30d5d8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x30d5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_30d5dc:
    // 0x30d5dc: 0x84700006  lh          $s0, 0x6($v1)
    ctx->pc = 0x30d5dcu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_30d5e0:
    // 0x30d5e0: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x30d5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_30d5e4:
    // 0x30d5e4: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x30d5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_30d5e8:
    // 0x30d5e8: 0x2508bbf0  addiu       $t0, $t0, -0x4410
    ctx->pc = 0x30d5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949872));
label_30d5ec:
    // 0x30d5ec: 0xc0c3c68  jal         func_30F1A0
label_30d5f0:
    if (ctx->pc == 0x30D5F0u) {
        ctx->pc = 0x30D5F0u;
            // 0x30d5f0: 0xa6620064  sh          $v0, 0x64($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x30D5F4u;
        goto label_30d5f4;
    }
    ctx->pc = 0x30D5ECu;
    SET_GPR_U32(ctx, 31, 0x30D5F4u);
    ctx->pc = 0x30D5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D5ECu;
            // 0x30d5f0: 0xa6620064  sh          $v0, 0x64($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F1A0u;
    if (runtime->hasFunction(0x30F1A0u)) {
        auto targetFn = runtime->lookupFunction(0x30F1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5F4u; }
        if (ctx->pc != 0x30D5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030F1A0_0x30f1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D5F4u; }
        if (ctx->pc != 0x30D5F4u) { return; }
    }
    ctx->pc = 0x30D5F4u;
label_30d5f4:
    // 0x30d5f4: 0x86640066  lh          $a0, 0x66($s3)
    ctx->pc = 0x30d5f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
label_30d5f8:
    // 0x30d5f8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x30d5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
label_30d5fc:
    // 0x30d5fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30d5fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_30d600:
    // 0x30d600: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30d600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_30d604:
    // 0x30d604: 0xa6640066  sh          $a0, 0x66($s3)
    ctx->pc = 0x30d604u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 102), (uint16_t)GPR_U32(ctx, 4));
label_30d608:
    // 0x30d608: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30d608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
label_30d60c:
    // 0x30d60c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30d60cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_30d610:
    // 0x30d610: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x30d610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30d614:
    // 0x30d614: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_30d618:
    if (ctx->pc == 0x30D618u) {
        ctx->pc = 0x30D61Cu;
        goto label_30d61c;
    }
    ctx->pc = 0x30D614u;
    {
        const bool branch_taken_0x30d614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d614) {
            ctx->pc = 0x30D620u;
            goto label_30d620;
        }
    }
    ctx->pc = 0x30D61Cu;
label_30d61c:
    // 0x30d61c: 0xa6700066  sh          $s0, 0x66($s3)
    ctx->pc = 0x30d61cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 102), (uint16_t)GPR_U32(ctx, 16));
label_30d620:
    // 0x30d620: 0x86630066  lh          $v1, 0x66($s3)
    ctx->pc = 0x30d620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
label_30d624:
    // 0x30d624: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x30d624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_30d628:
    // 0x30d628: 0x54200023  bnel        $at, $zero, . + 4 + (0x23 << 2)
label_30d62c:
    if (ctx->pc == 0x30D62Cu) {
        ctx->pc = 0x30D62Cu;
            // 0x30d62c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x30D630u;
        goto label_30d630;
    }
    ctx->pc = 0x30D628u;
    {
        const bool branch_taken_0x30d628 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d628) {
            ctx->pc = 0x30D62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30D628u;
            // 0x30d62c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30D6B8u;
            goto label_30d6b8;
        }
    }
    ctx->pc = 0x30D630u;
label_30d630:
    // 0x30d630: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x30d630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_30d634:
    // 0x30d634: 0xc04cc04  jal         func_133010
label_30d638:
    if (ctx->pc == 0x30D638u) {
        ctx->pc = 0x30D638u;
            // 0x30d638: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x30D63Cu;
        goto label_30d63c;
    }
    ctx->pc = 0x30D634u;
    SET_GPR_U32(ctx, 31, 0x30D63Cu);
    ctx->pc = 0x30D638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D634u;
            // 0x30d638: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D63Cu; }
        if (ctx->pc != 0x30D63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D63Cu; }
        if (ctx->pc != 0x30D63Cu) { return; }
    }
    ctx->pc = 0x30D63Cu;
label_30d63c:
    // 0x30d63c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x30d63cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30d640:
    // 0x30d640: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30d640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30d644:
    // 0x30d644: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x30d644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_30d648:
    // 0x30d648: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x30d648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_30d64c:
    // 0x30d64c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x30d64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_30d650:
    // 0x30d650: 0xc0c39d8  jal         func_30E760
label_30d654:
    if (ctx->pc == 0x30D654u) {
        ctx->pc = 0x30D654u;
            // 0x30d654: 0x27a800a0  addiu       $t0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x30D658u;
        goto label_30d658;
    }
    ctx->pc = 0x30D650u;
    SET_GPR_U32(ctx, 31, 0x30D658u);
    ctx->pc = 0x30D654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D650u;
            // 0x30d654: 0x27a800a0  addiu       $t0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E760u;
    if (runtime->hasFunction(0x30E760u)) {
        auto targetFn = runtime->lookupFunction(0x30E760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D658u; }
        if (ctx->pc != 0x30D658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030E760_0x30e760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D658u; }
        if (ctx->pc != 0x30D658u) { return; }
    }
    ctx->pc = 0x30D658u;
label_30d658:
    // 0x30d658: 0xc0508b0  jal         func_1422C0
label_30d65c:
    if (ctx->pc == 0x30D65Cu) {
        ctx->pc = 0x30D65Cu;
            // 0x30d65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D660u;
        goto label_30d660;
    }
    ctx->pc = 0x30D658u;
    SET_GPR_U32(ctx, 31, 0x30D660u);
    ctx->pc = 0x30D65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D658u;
            // 0x30d65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D660u; }
        if (ctx->pc != 0x30D660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D660u; }
        if (ctx->pc != 0x30D660u) { return; }
    }
    ctx->pc = 0x30D660u;
label_30d660:
    // 0x30d660: 0x8e6200cc  lw          $v0, 0xCC($s3)
    ctx->pc = 0x30d660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
label_30d664:
    // 0x30d664: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x30d664u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_30d668:
    // 0x30d668: 0xc0506ac  jal         func_141AB0
label_30d66c:
    if (ctx->pc == 0x30D66Cu) {
        ctx->pc = 0x30D66Cu;
            // 0x30d66c: 0x8e6404b0  lw          $a0, 0x4B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1200)));
        ctx->pc = 0x30D670u;
        goto label_30d670;
    }
    ctx->pc = 0x30D668u;
    SET_GPR_U32(ctx, 31, 0x30D670u);
    ctx->pc = 0x30D66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D668u;
            // 0x30d66c: 0x8e6404b0  lw          $a0, 0x4B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D670u; }
        if (ctx->pc != 0x30D670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D670u; }
        if (ctx->pc != 0x30D670u) { return; }
    }
    ctx->pc = 0x30D670u;
label_30d670:
    // 0x30d670: 0xc05068c  jal         func_141A30
label_30d674:
    if (ctx->pc == 0x30D674u) {
        ctx->pc = 0x30D674u;
            // 0x30d674: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D678u;
        goto label_30d678;
    }
    ctx->pc = 0x30D670u;
    SET_GPR_U32(ctx, 31, 0x30D678u);
    ctx->pc = 0x30D674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D670u;
            // 0x30d674: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D678u; }
        if (ctx->pc != 0x30D678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D678u; }
        if (ctx->pc != 0x30D678u) { return; }
    }
    ctx->pc = 0x30D678u;
label_30d678:
    // 0x30d678: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x30d678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30d67c:
    // 0x30d67c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d680:
    // 0x30d680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30d684:
    // 0x30d684: 0xc0508b4  jal         func_1422D0
label_30d688:
    if (ctx->pc == 0x30D688u) {
        ctx->pc = 0x30D688u;
            // 0x30d688: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30D68Cu;
        goto label_30d68c;
    }
    ctx->pc = 0x30D684u;
    SET_GPR_U32(ctx, 31, 0x30D68Cu);
    ctx->pc = 0x30D688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D684u;
            // 0x30d688: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D68Cu; }
        if (ctx->pc != 0x30D68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D68Cu; }
        if (ctx->pc != 0x30D68Cu) { return; }
    }
    ctx->pc = 0x30D68Cu;
label_30d68c:
    // 0x30d68c: 0x86620066  lh          $v0, 0x66($s3)
    ctx->pc = 0x30d68cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
label_30d690:
    // 0x30d690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30d694:
    // 0x30d694: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x30d694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_30d698:
    // 0x30d698: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30d698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30d69c:
    // 0x30d69c: 0xc050a08  jal         func_142820
label_30d6a0:
    if (ctx->pc == 0x30D6A0u) {
        ctx->pc = 0x30D6A0u;
            // 0x30d6a0: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x30D6A4u;
        goto label_30d6a4;
    }
    ctx->pc = 0x30D69Cu;
    SET_GPR_U32(ctx, 31, 0x30D6A4u);
    ctx->pc = 0x30D6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D69Cu;
            // 0x30d6a0: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D6A4u; }
        if (ctx->pc != 0x30D6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D6A4u; }
        if (ctx->pc != 0x30D6A4u) { return; }
    }
    ctx->pc = 0x30D6A4u;
label_30d6a4:
    // 0x30d6a4: 0xc050a88  jal         func_142A20
label_30d6a8:
    if (ctx->pc == 0x30D6A8u) {
        ctx->pc = 0x30D6ACu;
        goto label_30d6ac;
    }
    ctx->pc = 0x30D6A4u;
    SET_GPR_U32(ctx, 31, 0x30D6ACu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D6ACu; }
        if (ctx->pc != 0x30D6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D6ACu; }
        if (ctx->pc != 0x30D6ACu) { return; }
    }
    ctx->pc = 0x30D6ACu;
label_30d6ac:
    // 0x30d6ac: 0xc05068c  jal         func_141A30
label_30d6b0:
    if (ctx->pc == 0x30D6B0u) {
        ctx->pc = 0x30D6B0u;
            // 0x30d6b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30D6B4u;
        goto label_30d6b4;
    }
    ctx->pc = 0x30D6ACu;
    SET_GPR_U32(ctx, 31, 0x30D6B4u);
    ctx->pc = 0x30D6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D6ACu;
            // 0x30d6b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D6B4u; }
        if (ctx->pc != 0x30D6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D6B4u; }
        if (ctx->pc != 0x30D6B4u) { return; }
    }
    ctx->pc = 0x30D6B4u;
label_30d6b4:
    // 0x30d6b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30d6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30d6b8:
    // 0x30d6b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30d6b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_30d6bc:
    // 0x30d6bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30d6bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30d6c0:
    // 0x30d6c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30d6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30d6c4:
    // 0x30d6c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_30d6c8:
    // 0x30d6c8: 0x3e00008  jr          $ra
label_30d6cc:
    if (ctx->pc == 0x30D6CCu) {
        ctx->pc = 0x30D6CCu;
            // 0x30d6cc: 0x27bd0870  addiu       $sp, $sp, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
        ctx->pc = 0x30D6D0u;
        goto label_fallthrough_0x30d6c8;
    }
    ctx->pc = 0x30D6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D6C8u;
            // 0x30d6cc: 0x27bd0870  addiu       $sp, $sp, 0x870 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x30d6c8:
    ctx->pc = 0x30D6D0u;
}
