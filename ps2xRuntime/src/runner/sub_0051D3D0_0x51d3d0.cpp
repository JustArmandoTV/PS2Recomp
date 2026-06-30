#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051D3D0
// Address: 0x51d3d0 - 0x51d7b0
void sub_0051D3D0_0x51d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051D3D0_0x51d3d0");
#endif

    switch (ctx->pc) {
        case 0x51d3d0u: goto label_51d3d0;
        case 0x51d3d4u: goto label_51d3d4;
        case 0x51d3d8u: goto label_51d3d8;
        case 0x51d3dcu: goto label_51d3dc;
        case 0x51d3e0u: goto label_51d3e0;
        case 0x51d3e4u: goto label_51d3e4;
        case 0x51d3e8u: goto label_51d3e8;
        case 0x51d3ecu: goto label_51d3ec;
        case 0x51d3f0u: goto label_51d3f0;
        case 0x51d3f4u: goto label_51d3f4;
        case 0x51d3f8u: goto label_51d3f8;
        case 0x51d3fcu: goto label_51d3fc;
        case 0x51d400u: goto label_51d400;
        case 0x51d404u: goto label_51d404;
        case 0x51d408u: goto label_51d408;
        case 0x51d40cu: goto label_51d40c;
        case 0x51d410u: goto label_51d410;
        case 0x51d414u: goto label_51d414;
        case 0x51d418u: goto label_51d418;
        case 0x51d41cu: goto label_51d41c;
        case 0x51d420u: goto label_51d420;
        case 0x51d424u: goto label_51d424;
        case 0x51d428u: goto label_51d428;
        case 0x51d42cu: goto label_51d42c;
        case 0x51d430u: goto label_51d430;
        case 0x51d434u: goto label_51d434;
        case 0x51d438u: goto label_51d438;
        case 0x51d43cu: goto label_51d43c;
        case 0x51d440u: goto label_51d440;
        case 0x51d444u: goto label_51d444;
        case 0x51d448u: goto label_51d448;
        case 0x51d44cu: goto label_51d44c;
        case 0x51d450u: goto label_51d450;
        case 0x51d454u: goto label_51d454;
        case 0x51d458u: goto label_51d458;
        case 0x51d45cu: goto label_51d45c;
        case 0x51d460u: goto label_51d460;
        case 0x51d464u: goto label_51d464;
        case 0x51d468u: goto label_51d468;
        case 0x51d46cu: goto label_51d46c;
        case 0x51d470u: goto label_51d470;
        case 0x51d474u: goto label_51d474;
        case 0x51d478u: goto label_51d478;
        case 0x51d47cu: goto label_51d47c;
        case 0x51d480u: goto label_51d480;
        case 0x51d484u: goto label_51d484;
        case 0x51d488u: goto label_51d488;
        case 0x51d48cu: goto label_51d48c;
        case 0x51d490u: goto label_51d490;
        case 0x51d494u: goto label_51d494;
        case 0x51d498u: goto label_51d498;
        case 0x51d49cu: goto label_51d49c;
        case 0x51d4a0u: goto label_51d4a0;
        case 0x51d4a4u: goto label_51d4a4;
        case 0x51d4a8u: goto label_51d4a8;
        case 0x51d4acu: goto label_51d4ac;
        case 0x51d4b0u: goto label_51d4b0;
        case 0x51d4b4u: goto label_51d4b4;
        case 0x51d4b8u: goto label_51d4b8;
        case 0x51d4bcu: goto label_51d4bc;
        case 0x51d4c0u: goto label_51d4c0;
        case 0x51d4c4u: goto label_51d4c4;
        case 0x51d4c8u: goto label_51d4c8;
        case 0x51d4ccu: goto label_51d4cc;
        case 0x51d4d0u: goto label_51d4d0;
        case 0x51d4d4u: goto label_51d4d4;
        case 0x51d4d8u: goto label_51d4d8;
        case 0x51d4dcu: goto label_51d4dc;
        case 0x51d4e0u: goto label_51d4e0;
        case 0x51d4e4u: goto label_51d4e4;
        case 0x51d4e8u: goto label_51d4e8;
        case 0x51d4ecu: goto label_51d4ec;
        case 0x51d4f0u: goto label_51d4f0;
        case 0x51d4f4u: goto label_51d4f4;
        case 0x51d4f8u: goto label_51d4f8;
        case 0x51d4fcu: goto label_51d4fc;
        case 0x51d500u: goto label_51d500;
        case 0x51d504u: goto label_51d504;
        case 0x51d508u: goto label_51d508;
        case 0x51d50cu: goto label_51d50c;
        case 0x51d510u: goto label_51d510;
        case 0x51d514u: goto label_51d514;
        case 0x51d518u: goto label_51d518;
        case 0x51d51cu: goto label_51d51c;
        case 0x51d520u: goto label_51d520;
        case 0x51d524u: goto label_51d524;
        case 0x51d528u: goto label_51d528;
        case 0x51d52cu: goto label_51d52c;
        case 0x51d530u: goto label_51d530;
        case 0x51d534u: goto label_51d534;
        case 0x51d538u: goto label_51d538;
        case 0x51d53cu: goto label_51d53c;
        case 0x51d540u: goto label_51d540;
        case 0x51d544u: goto label_51d544;
        case 0x51d548u: goto label_51d548;
        case 0x51d54cu: goto label_51d54c;
        case 0x51d550u: goto label_51d550;
        case 0x51d554u: goto label_51d554;
        case 0x51d558u: goto label_51d558;
        case 0x51d55cu: goto label_51d55c;
        case 0x51d560u: goto label_51d560;
        case 0x51d564u: goto label_51d564;
        case 0x51d568u: goto label_51d568;
        case 0x51d56cu: goto label_51d56c;
        case 0x51d570u: goto label_51d570;
        case 0x51d574u: goto label_51d574;
        case 0x51d578u: goto label_51d578;
        case 0x51d57cu: goto label_51d57c;
        case 0x51d580u: goto label_51d580;
        case 0x51d584u: goto label_51d584;
        case 0x51d588u: goto label_51d588;
        case 0x51d58cu: goto label_51d58c;
        case 0x51d590u: goto label_51d590;
        case 0x51d594u: goto label_51d594;
        case 0x51d598u: goto label_51d598;
        case 0x51d59cu: goto label_51d59c;
        case 0x51d5a0u: goto label_51d5a0;
        case 0x51d5a4u: goto label_51d5a4;
        case 0x51d5a8u: goto label_51d5a8;
        case 0x51d5acu: goto label_51d5ac;
        case 0x51d5b0u: goto label_51d5b0;
        case 0x51d5b4u: goto label_51d5b4;
        case 0x51d5b8u: goto label_51d5b8;
        case 0x51d5bcu: goto label_51d5bc;
        case 0x51d5c0u: goto label_51d5c0;
        case 0x51d5c4u: goto label_51d5c4;
        case 0x51d5c8u: goto label_51d5c8;
        case 0x51d5ccu: goto label_51d5cc;
        case 0x51d5d0u: goto label_51d5d0;
        case 0x51d5d4u: goto label_51d5d4;
        case 0x51d5d8u: goto label_51d5d8;
        case 0x51d5dcu: goto label_51d5dc;
        case 0x51d5e0u: goto label_51d5e0;
        case 0x51d5e4u: goto label_51d5e4;
        case 0x51d5e8u: goto label_51d5e8;
        case 0x51d5ecu: goto label_51d5ec;
        case 0x51d5f0u: goto label_51d5f0;
        case 0x51d5f4u: goto label_51d5f4;
        case 0x51d5f8u: goto label_51d5f8;
        case 0x51d5fcu: goto label_51d5fc;
        case 0x51d600u: goto label_51d600;
        case 0x51d604u: goto label_51d604;
        case 0x51d608u: goto label_51d608;
        case 0x51d60cu: goto label_51d60c;
        case 0x51d610u: goto label_51d610;
        case 0x51d614u: goto label_51d614;
        case 0x51d618u: goto label_51d618;
        case 0x51d61cu: goto label_51d61c;
        case 0x51d620u: goto label_51d620;
        case 0x51d624u: goto label_51d624;
        case 0x51d628u: goto label_51d628;
        case 0x51d62cu: goto label_51d62c;
        case 0x51d630u: goto label_51d630;
        case 0x51d634u: goto label_51d634;
        case 0x51d638u: goto label_51d638;
        case 0x51d63cu: goto label_51d63c;
        case 0x51d640u: goto label_51d640;
        case 0x51d644u: goto label_51d644;
        case 0x51d648u: goto label_51d648;
        case 0x51d64cu: goto label_51d64c;
        case 0x51d650u: goto label_51d650;
        case 0x51d654u: goto label_51d654;
        case 0x51d658u: goto label_51d658;
        case 0x51d65cu: goto label_51d65c;
        case 0x51d660u: goto label_51d660;
        case 0x51d664u: goto label_51d664;
        case 0x51d668u: goto label_51d668;
        case 0x51d66cu: goto label_51d66c;
        case 0x51d670u: goto label_51d670;
        case 0x51d674u: goto label_51d674;
        case 0x51d678u: goto label_51d678;
        case 0x51d67cu: goto label_51d67c;
        case 0x51d680u: goto label_51d680;
        case 0x51d684u: goto label_51d684;
        case 0x51d688u: goto label_51d688;
        case 0x51d68cu: goto label_51d68c;
        case 0x51d690u: goto label_51d690;
        case 0x51d694u: goto label_51d694;
        case 0x51d698u: goto label_51d698;
        case 0x51d69cu: goto label_51d69c;
        case 0x51d6a0u: goto label_51d6a0;
        case 0x51d6a4u: goto label_51d6a4;
        case 0x51d6a8u: goto label_51d6a8;
        case 0x51d6acu: goto label_51d6ac;
        case 0x51d6b0u: goto label_51d6b0;
        case 0x51d6b4u: goto label_51d6b4;
        case 0x51d6b8u: goto label_51d6b8;
        case 0x51d6bcu: goto label_51d6bc;
        case 0x51d6c0u: goto label_51d6c0;
        case 0x51d6c4u: goto label_51d6c4;
        case 0x51d6c8u: goto label_51d6c8;
        case 0x51d6ccu: goto label_51d6cc;
        case 0x51d6d0u: goto label_51d6d0;
        case 0x51d6d4u: goto label_51d6d4;
        case 0x51d6d8u: goto label_51d6d8;
        case 0x51d6dcu: goto label_51d6dc;
        case 0x51d6e0u: goto label_51d6e0;
        case 0x51d6e4u: goto label_51d6e4;
        case 0x51d6e8u: goto label_51d6e8;
        case 0x51d6ecu: goto label_51d6ec;
        case 0x51d6f0u: goto label_51d6f0;
        case 0x51d6f4u: goto label_51d6f4;
        case 0x51d6f8u: goto label_51d6f8;
        case 0x51d6fcu: goto label_51d6fc;
        case 0x51d700u: goto label_51d700;
        case 0x51d704u: goto label_51d704;
        case 0x51d708u: goto label_51d708;
        case 0x51d70cu: goto label_51d70c;
        case 0x51d710u: goto label_51d710;
        case 0x51d714u: goto label_51d714;
        case 0x51d718u: goto label_51d718;
        case 0x51d71cu: goto label_51d71c;
        case 0x51d720u: goto label_51d720;
        case 0x51d724u: goto label_51d724;
        case 0x51d728u: goto label_51d728;
        case 0x51d72cu: goto label_51d72c;
        case 0x51d730u: goto label_51d730;
        case 0x51d734u: goto label_51d734;
        case 0x51d738u: goto label_51d738;
        case 0x51d73cu: goto label_51d73c;
        case 0x51d740u: goto label_51d740;
        case 0x51d744u: goto label_51d744;
        case 0x51d748u: goto label_51d748;
        case 0x51d74cu: goto label_51d74c;
        case 0x51d750u: goto label_51d750;
        case 0x51d754u: goto label_51d754;
        case 0x51d758u: goto label_51d758;
        case 0x51d75cu: goto label_51d75c;
        case 0x51d760u: goto label_51d760;
        case 0x51d764u: goto label_51d764;
        case 0x51d768u: goto label_51d768;
        case 0x51d76cu: goto label_51d76c;
        case 0x51d770u: goto label_51d770;
        case 0x51d774u: goto label_51d774;
        case 0x51d778u: goto label_51d778;
        case 0x51d77cu: goto label_51d77c;
        case 0x51d780u: goto label_51d780;
        case 0x51d784u: goto label_51d784;
        case 0x51d788u: goto label_51d788;
        case 0x51d78cu: goto label_51d78c;
        case 0x51d790u: goto label_51d790;
        case 0x51d794u: goto label_51d794;
        case 0x51d798u: goto label_51d798;
        case 0x51d79cu: goto label_51d79c;
        case 0x51d7a0u: goto label_51d7a0;
        case 0x51d7a4u: goto label_51d7a4;
        case 0x51d7a8u: goto label_51d7a8;
        case 0x51d7acu: goto label_51d7ac;
        default: break;
    }

    ctx->pc = 0x51d3d0u;

label_51d3d0:
    // 0x51d3d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x51d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_51d3d4:
    // 0x51d3d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51d3d8:
    // 0x51d3d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x51d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_51d3dc:
    // 0x51d3dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x51d3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_51d3e0:
    // 0x51d3e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x51d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_51d3e4:
    // 0x51d3e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x51d3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_51d3e8:
    // 0x51d3e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x51d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_51d3ec:
    // 0x51d3ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x51d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_51d3f0:
    // 0x51d3f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x51d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_51d3f4:
    // 0x51d3f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x51d3f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_51d3f8:
    // 0x51d3f8: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x51d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_51d3fc:
    // 0x51d3fc: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_51d400:
    if (ctx->pc == 0x51D400u) {
        ctx->pc = 0x51D400u;
            // 0x51d400: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D404u;
        goto label_51d404;
    }
    ctx->pc = 0x51D3FCu;
    {
        const bool branch_taken_0x51d3fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x51D400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D3FCu;
            // 0x51d400: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d3fc) {
            ctx->pc = 0x51D424u;
            goto label_51d424;
        }
    }
    ctx->pc = 0x51D404u;
label_51d404:
    // 0x51d404: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_51d408:
    if (ctx->pc == 0x51D408u) {
        ctx->pc = 0x51D40Cu;
        goto label_51d40c;
    }
    ctx->pc = 0x51D404u;
    {
        const bool branch_taken_0x51d404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d404) {
            ctx->pc = 0x51D414u;
            goto label_51d414;
        }
    }
    ctx->pc = 0x51D40Cu;
label_51d40c:
    // 0x51d40c: 0x100000dd  b           . + 4 + (0xDD << 2)
label_51d410:
    if (ctx->pc == 0x51D410u) {
        ctx->pc = 0x51D410u;
            // 0x51d410: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x51D414u;
        goto label_51d414;
    }
    ctx->pc = 0x51D40Cu;
    {
        const bool branch_taken_0x51d40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51D410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D40Cu;
            // 0x51d410: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d40c) {
            ctx->pc = 0x51D784u;
            goto label_51d784;
        }
    }
    ctx->pc = 0x51D414u;
label_51d414:
    // 0x51d414: 0xc14780c  jal         func_51E030
label_51d418:
    if (ctx->pc == 0x51D418u) {
        ctx->pc = 0x51D41Cu;
        goto label_51d41c;
    }
    ctx->pc = 0x51D414u;
    SET_GPR_U32(ctx, 31, 0x51D41Cu);
    ctx->pc = 0x51E030u;
    if (runtime->hasFunction(0x51E030u)) {
        auto targetFn = runtime->lookupFunction(0x51E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D41Cu; }
        if (ctx->pc != 0x51D41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051E030_0x51e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D41Cu; }
        if (ctx->pc != 0x51D41Cu) { return; }
    }
    ctx->pc = 0x51D41Cu;
label_51d41c:
    // 0x51d41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51d420:
    // 0x51d420: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x51d420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_51d424:
    // 0x51d424: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51d424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51d428:
    // 0x51d428: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x51d428u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_51d42c:
    // 0x51d42c: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x51d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_51d430:
    // 0x51d430: 0x26310e84  addiu       $s1, $s1, 0xE84
    ctx->pc = 0x51d430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3716));
label_51d434:
    // 0x51d434: 0xc0ae0e4  jal         func_2B8390
label_51d438:
    if (ctx->pc == 0x51D438u) {
        ctx->pc = 0x51D438u;
            // 0x51d438: 0x26500084  addiu       $s0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x51D43Cu;
        goto label_51d43c;
    }
    ctx->pc = 0x51D434u;
    SET_GPR_U32(ctx, 31, 0x51D43Cu);
    ctx->pc = 0x51D438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D434u;
            // 0x51d438: 0x26500084  addiu       $s0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8390u;
    if (runtime->hasFunction(0x2B8390u)) {
        auto targetFn = runtime->lookupFunction(0x2B8390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D43Cu; }
        if (ctx->pc != 0x51D43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8390_0x2b8390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D43Cu; }
        if (ctx->pc != 0x51D43Cu) { return; }
    }
    ctx->pc = 0x51D43Cu;
label_51d43c:
    // 0x51d43c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x51d43cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d440:
    // 0x51d440: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x51d440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_51d444:
    // 0x51d444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x51d444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51d448:
    // 0x51d448: 0x10620069  beq         $v1, $v0, . + 4 + (0x69 << 2)
label_51d44c:
    if (ctx->pc == 0x51D44Cu) {
        ctx->pc = 0x51D450u;
        goto label_51d450;
    }
    ctx->pc = 0x51D448u;
    {
        const bool branch_taken_0x51d448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x51d448) {
            ctx->pc = 0x51D5F0u;
            goto label_51d5f0;
        }
    }
    ctx->pc = 0x51D450u;
label_51d450:
    // 0x51d450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51d450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51d454:
    // 0x51d454: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_51d458:
    if (ctx->pc == 0x51D458u) {
        ctx->pc = 0x51D45Cu;
        goto label_51d45c;
    }
    ctx->pc = 0x51D454u;
    {
        const bool branch_taken_0x51d454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x51d454) {
            ctx->pc = 0x51D470u;
            goto label_51d470;
        }
    }
    ctx->pc = 0x51D45Cu;
label_51d45c:
    // 0x51d45c: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
label_51d460:
    if (ctx->pc == 0x51D460u) {
        ctx->pc = 0x51D464u;
        goto label_51d464;
    }
    ctx->pc = 0x51D45Cu;
    {
        const bool branch_taken_0x51d45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d45c) {
            ctx->pc = 0x51D638u;
            goto label_51d638;
        }
    }
    ctx->pc = 0x51D464u;
label_51d464:
    // 0x51d464: 0x10000074  b           . + 4 + (0x74 << 2)
label_51d468:
    if (ctx->pc == 0x51D468u) {
        ctx->pc = 0x51D46Cu;
        goto label_51d46c;
    }
    ctx->pc = 0x51D464u;
    {
        const bool branch_taken_0x51d464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d464) {
            ctx->pc = 0x51D638u;
            goto label_51d638;
        }
    }
    ctx->pc = 0x51D46Cu;
label_51d46c:
    // 0x51d46c: 0x0  nop
    ctx->pc = 0x51d46cu;
    // NOP
label_51d470:
    // 0x51d470: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x51d470u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51d474:
    // 0x51d474: 0xc0d1c10  jal         func_347040
label_51d478:
    if (ctx->pc == 0x51D478u) {
        ctx->pc = 0x51D478u;
            // 0x51d478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D47Cu;
        goto label_51d47c;
    }
    ctx->pc = 0x51D474u;
    SET_GPR_U32(ctx, 31, 0x51D47Cu);
    ctx->pc = 0x51D478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D474u;
            // 0x51d478: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D47Cu; }
        if (ctx->pc != 0x51D47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D47Cu; }
        if (ctx->pc != 0x51D47Cu) { return; }
    }
    ctx->pc = 0x51D47Cu;
label_51d47c:
    // 0x51d47c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x51d47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d480:
    // 0x51d480: 0xc04cc04  jal         func_133010
label_51d484:
    if (ctx->pc == 0x51D484u) {
        ctx->pc = 0x51D484u;
            // 0x51d484: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x51D488u;
        goto label_51d488;
    }
    ctx->pc = 0x51D480u;
    SET_GPR_U32(ctx, 31, 0x51D488u);
    ctx->pc = 0x51D484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D480u;
            // 0x51d484: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D488u; }
        if (ctx->pc != 0x51D488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D488u; }
        if (ctx->pc != 0x51D488u) { return; }
    }
    ctx->pc = 0x51D488u;
label_51d488:
    // 0x51d488: 0xc077264  jal         func_1DC990
label_51d48c:
    if (ctx->pc == 0x51D48Cu) {
        ctx->pc = 0x51D48Cu;
            // 0x51d48c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D490u;
        goto label_51d490;
    }
    ctx->pc = 0x51D488u;
    SET_GPR_U32(ctx, 31, 0x51D490u);
    ctx->pc = 0x51D48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D488u;
            // 0x51d48c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D490u; }
        if (ctx->pc != 0x51D490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D490u; }
        if (ctx->pc != 0x51D490u) { return; }
    }
    ctx->pc = 0x51D490u;
label_51d490:
    // 0x51d490: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x51d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51d494:
    // 0x51d494: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x51d494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_51d498:
    // 0x51d498: 0xc077264  jal         func_1DC990
label_51d49c:
    if (ctx->pc == 0x51D49Cu) {
        ctx->pc = 0x51D49Cu;
            // 0x51d49c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x51D4A0u;
        goto label_51d4a0;
    }
    ctx->pc = 0x51D498u;
    SET_GPR_U32(ctx, 31, 0x51D4A0u);
    ctx->pc = 0x51D49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D498u;
            // 0x51d49c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4A0u; }
        if (ctx->pc != 0x51D4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4A0u; }
        if (ctx->pc != 0x51D4A0u) { return; }
    }
    ctx->pc = 0x51D4A0u;
label_51d4a0:
    // 0x51d4a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d4a4:
    // 0x51d4a4: 0xc04cc34  jal         func_1330D0
label_51d4a8:
    if (ctx->pc == 0x51D4A8u) {
        ctx->pc = 0x51D4A8u;
            // 0x51d4a8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x51D4ACu;
        goto label_51d4ac;
    }
    ctx->pc = 0x51D4A4u;
    SET_GPR_U32(ctx, 31, 0x51D4ACu);
    ctx->pc = 0x51D4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D4A4u;
            // 0x51d4a8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4ACu; }
        if (ctx->pc != 0x51D4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4ACu; }
        if (ctx->pc != 0x51D4ACu) { return; }
    }
    ctx->pc = 0x51D4ACu;
label_51d4ac:
    // 0x51d4ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x51d4acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_51d4b0:
    // 0x51d4b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x51d4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_51d4b4:
    // 0x51d4b4: 0xc0e11c0  jal         func_384700
label_51d4b8:
    if (ctx->pc == 0x51D4B8u) {
        ctx->pc = 0x51D4B8u;
            // 0x51d4b8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x51D4BCu;
        goto label_51d4bc;
    }
    ctx->pc = 0x51D4B4u;
    SET_GPR_U32(ctx, 31, 0x51D4BCu);
    ctx->pc = 0x51D4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D4B4u;
            // 0x51d4b8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384700u;
    if (runtime->hasFunction(0x384700u)) {
        auto targetFn = runtime->lookupFunction(0x384700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4BCu; }
        if (ctx->pc != 0x51D4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384700_0x384700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4BCu; }
        if (ctx->pc != 0x51D4BCu) { return; }
    }
    ctx->pc = 0x51D4BCu;
label_51d4bc:
    // 0x51d4bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51d4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51d4c0:
    // 0x51d4c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x51d4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_51d4c4:
    // 0x51d4c4: 0xc147628  jal         func_51D8A0
label_51d4c8:
    if (ctx->pc == 0x51D4C8u) {
        ctx->pc = 0x51D4C8u;
            // 0x51d4c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x51D4CCu;
        goto label_51d4cc;
    }
    ctx->pc = 0x51D4C4u;
    SET_GPR_U32(ctx, 31, 0x51D4CCu);
    ctx->pc = 0x51D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D4C4u;
            // 0x51d4c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x51D8A0u;
    if (runtime->hasFunction(0x51D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x51D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4CCu; }
        if (ctx->pc != 0x51D4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051D8A0_0x51d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4CCu; }
        if (ctx->pc != 0x51D4CCu) { return; }
    }
    ctx->pc = 0x51D4CCu;
label_51d4cc:
    // 0x51d4cc: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x51d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
label_51d4d0:
    // 0x51d4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51d4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d4d4:
    // 0x51d4d4: 0x0  nop
    ctx->pc = 0x51d4d4u;
    // NOP
label_51d4d8:
    // 0x51d4d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x51d4d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51d4dc:
    // 0x51d4dc: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
label_51d4e0:
    if (ctx->pc == 0x51D4E0u) {
        ctx->pc = 0x51D4E4u;
        goto label_51d4e4;
    }
    ctx->pc = 0x51D4DCu;
    {
        const bool branch_taken_0x51d4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51d4dc) {
            ctx->pc = 0x51D5C8u;
            goto label_51d5c8;
        }
    }
    ctx->pc = 0x51D4E4u;
label_51d4e4:
    // 0x51d4e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51d4e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51d4e8:
    // 0x51d4e8: 0xc0c1a0c  jal         func_306830
label_51d4ec:
    if (ctx->pc == 0x51D4ECu) {
        ctx->pc = 0x51D4ECu;
            // 0x51d4ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D4F0u;
        goto label_51d4f0;
    }
    ctx->pc = 0x51D4E8u;
    SET_GPR_U32(ctx, 31, 0x51D4F0u);
    ctx->pc = 0x51D4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D4E8u;
            // 0x51d4ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4F0u; }
        if (ctx->pc != 0x51D4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D4F0u; }
        if (ctx->pc != 0x51D4F0u) { return; }
    }
    ctx->pc = 0x51D4F0u;
label_51d4f0:
    // 0x51d4f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x51d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51d4f4:
    // 0x51d4f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x51d4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_51d4f8:
    // 0x51d4f8: 0xc077290  jal         func_1DCA40
label_51d4fc:
    if (ctx->pc == 0x51D4FCu) {
        ctx->pc = 0x51D4FCu;
            // 0x51d4fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x51D500u;
        goto label_51d500;
    }
    ctx->pc = 0x51D4F8u;
    SET_GPR_U32(ctx, 31, 0x51D500u);
    ctx->pc = 0x51D4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D4F8u;
            // 0x51d4fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D500u; }
        if (ctx->pc != 0x51D500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D500u; }
        if (ctx->pc != 0x51D500u) { return; }
    }
    ctx->pc = 0x51D500u;
label_51d500:
    // 0x51d500: 0xc077224  jal         func_1DC890
label_51d504:
    if (ctx->pc == 0x51D504u) {
        ctx->pc = 0x51D504u;
            // 0x51d504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D508u;
        goto label_51d508;
    }
    ctx->pc = 0x51D500u;
    SET_GPR_U32(ctx, 31, 0x51D508u);
    ctx->pc = 0x51D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D500u;
            // 0x51d504: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D508u; }
        if (ctx->pc != 0x51D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D508u; }
        if (ctx->pc != 0x51D508u) { return; }
    }
    ctx->pc = 0x51D508u;
label_51d508:
    // 0x51d508: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x51d508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_51d50c:
    // 0x51d50c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x51d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_51d510:
    // 0x51d510: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_51d514:
    if (ctx->pc == 0x51D514u) {
        ctx->pc = 0x51D518u;
        goto label_51d518;
    }
    ctx->pc = 0x51D510u;
    {
        const bool branch_taken_0x51d510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x51d510) {
            ctx->pc = 0x51D538u;
            goto label_51d538;
        }
    }
    ctx->pc = 0x51D518u;
label_51d518:
    // 0x51d518: 0xc077290  jal         func_1DCA40
label_51d51c:
    if (ctx->pc == 0x51D51Cu) {
        ctx->pc = 0x51D51Cu;
            // 0x51d51c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D520u;
        goto label_51d520;
    }
    ctx->pc = 0x51D518u;
    SET_GPR_U32(ctx, 31, 0x51D520u);
    ctx->pc = 0x51D51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D518u;
            // 0x51d51c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D520u; }
        if (ctx->pc != 0x51D520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D520u; }
        if (ctx->pc != 0x51D520u) { return; }
    }
    ctx->pc = 0x51D520u;
label_51d520:
    // 0x51d520: 0xc077224  jal         func_1DC890
label_51d524:
    if (ctx->pc == 0x51D524u) {
        ctx->pc = 0x51D524u;
            // 0x51d524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D528u;
        goto label_51d528;
    }
    ctx->pc = 0x51D520u;
    SET_GPR_U32(ctx, 31, 0x51D528u);
    ctx->pc = 0x51D524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D520u;
            // 0x51d524: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D528u; }
        if (ctx->pc != 0x51D528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D528u; }
        if (ctx->pc != 0x51D528u) { return; }
    }
    ctx->pc = 0x51D528u;
label_51d528:
    // 0x51d528: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x51d528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_51d52c:
    // 0x51d52c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x51d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_51d530:
    // 0x51d530: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_51d534:
    if (ctx->pc == 0x51D534u) {
        ctx->pc = 0x51D538u;
        goto label_51d538;
    }
    ctx->pc = 0x51D530u;
    {
        const bool branch_taken_0x51d530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x51d530) {
            ctx->pc = 0x51D590u;
            goto label_51d590;
        }
    }
    ctx->pc = 0x51D538u;
label_51d538:
    // 0x51d538: 0xc0772e8  jal         func_1DCBA0
label_51d53c:
    if (ctx->pc == 0x51D53Cu) {
        ctx->pc = 0x51D53Cu;
            // 0x51d53c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D540u;
        goto label_51d540;
    }
    ctx->pc = 0x51D538u;
    SET_GPR_U32(ctx, 31, 0x51D540u);
    ctx->pc = 0x51D53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D538u;
            // 0x51d53c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D540u; }
        if (ctx->pc != 0x51D540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D540u; }
        if (ctx->pc != 0x51D540u) { return; }
    }
    ctx->pc = 0x51D540u;
label_51d540:
    // 0x51d540: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x51d540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d544:
    // 0x51d544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x51d544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51d548:
    // 0x51d548: 0xc0e11d4  jal         func_384750
label_51d54c:
    if (ctx->pc == 0x51D54Cu) {
        ctx->pc = 0x51D54Cu;
            // 0x51d54c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D550u;
        goto label_51d550;
    }
    ctx->pc = 0x51D548u;
    SET_GPR_U32(ctx, 31, 0x51D550u);
    ctx->pc = 0x51D54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D548u;
            // 0x51d54c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384750u;
    if (runtime->hasFunction(0x384750u)) {
        auto targetFn = runtime->lookupFunction(0x384750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D550u; }
        if (ctx->pc != 0x51D550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384750_0x384750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D550u; }
        if (ctx->pc != 0x51D550u) { return; }
    }
    ctx->pc = 0x51D550u;
label_51d550:
    // 0x51d550: 0xc0772dc  jal         func_1DCB70
label_51d554:
    if (ctx->pc == 0x51D554u) {
        ctx->pc = 0x51D554u;
            // 0x51d554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D558u;
        goto label_51d558;
    }
    ctx->pc = 0x51D550u;
    SET_GPR_U32(ctx, 31, 0x51D558u);
    ctx->pc = 0x51D554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D550u;
            // 0x51d554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB70u;
    if (runtime->hasFunction(0x1DCB70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D558u; }
        if (ctx->pc != 0x51D558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB70_0x1dcb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D558u; }
        if (ctx->pc != 0x51D558u) { return; }
    }
    ctx->pc = 0x51D558u;
label_51d558:
    // 0x51d558: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x51d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_51d55c:
    // 0x51d55c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51d55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51d560:
    // 0x51d560: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51d560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51d564:
    // 0x51d564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51d564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51d568:
    // 0x51d568: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x51d568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_51d56c:
    // 0x51d56c: 0xc0772d4  jal         func_1DCB50
label_51d570:
    if (ctx->pc == 0x51D570u) {
        ctx->pc = 0x51D570u;
            // 0x51d570: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x51D574u;
        goto label_51d574;
    }
    ctx->pc = 0x51D56Cu;
    SET_GPR_U32(ctx, 31, 0x51D574u);
    ctx->pc = 0x51D570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D56Cu;
            // 0x51d570: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB50u;
    if (runtime->hasFunction(0x1DCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D574u; }
        if (ctx->pc != 0x51D574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCB50_0x1dcb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D574u; }
        if (ctx->pc != 0x51D574u) { return; }
    }
    ctx->pc = 0x51D574u;
label_51d574:
    // 0x51d574: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x51d574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_51d578:
    // 0x51d578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51d578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51d57c:
    // 0x51d57c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x51d57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_51d580:
    // 0x51d580: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x51d580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_51d584:
    // 0x51d584: 0x320f809  jalr        $t9
label_51d588:
    if (ctx->pc == 0x51D588u) {
        ctx->pc = 0x51D588u;
            // 0x51d588: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x51D58Cu;
        goto label_51d58c;
    }
    ctx->pc = 0x51D584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51D58Cu);
        ctx->pc = 0x51D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D584u;
            // 0x51d588: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51D58Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51D58Cu; }
            if (ctx->pc != 0x51D58Cu) { return; }
        }
        }
    }
    ctx->pc = 0x51D58Cu;
label_51d58c:
    // 0x51d58c: 0x0  nop
    ctx->pc = 0x51d58cu;
    // NOP
label_51d590:
    // 0x51d590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51d590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51d594:
    // 0x51d594: 0xc1475ec  jal         func_51D7B0
label_51d598:
    if (ctx->pc == 0x51D598u) {
        ctx->pc = 0x51D598u;
            // 0x51d598: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x51D59Cu;
        goto label_51d59c;
    }
    ctx->pc = 0x51D594u;
    SET_GPR_U32(ctx, 31, 0x51D59Cu);
    ctx->pc = 0x51D598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D594u;
            // 0x51d598: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51D7B0u;
    if (runtime->hasFunction(0x51D7B0u)) {
        auto targetFn = runtime->lookupFunction(0x51D7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D59Cu; }
        if (ctx->pc != 0x51D59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051D7B0_0x51d7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D59Cu; }
        if (ctx->pc != 0x51D59Cu) { return; }
    }
    ctx->pc = 0x51D59Cu;
label_51d59c:
    // 0x51d59c: 0xc07731c  jal         func_1DCC70
label_51d5a0:
    if (ctx->pc == 0x51D5A0u) {
        ctx->pc = 0x51D5A0u;
            // 0x51d5a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D5A4u;
        goto label_51d5a4;
    }
    ctx->pc = 0x51D59Cu;
    SET_GPR_U32(ctx, 31, 0x51D5A4u);
    ctx->pc = 0x51D5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D59Cu;
            // 0x51d5a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D5A4u; }
        if (ctx->pc != 0x51D5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D5A4u; }
        if (ctx->pc != 0x51D5A4u) { return; }
    }
    ctx->pc = 0x51D5A4u;
label_51d5a4:
    // 0x51d5a4: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x51d5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_51d5a8:
    // 0x51d5a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51d5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d5ac:
    // 0x51d5ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x51d5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_51d5b0:
    // 0x51d5b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x51d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_51d5b4:
    // 0x51d5b4: 0x320f809  jalr        $t9
label_51d5b8:
    if (ctx->pc == 0x51D5B8u) {
        ctx->pc = 0x51D5B8u;
            // 0x51d5b8: 0x344511a9  ori         $a1, $v0, 0x11A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4521);
        ctx->pc = 0x51D5BCu;
        goto label_51d5bc;
    }
    ctx->pc = 0x51D5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51D5BCu);
        ctx->pc = 0x51D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D5B4u;
            // 0x51d5b8: 0x344511a9  ori         $a1, $v0, 0x11A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4521);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51D5BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51D5BCu; }
            if (ctx->pc != 0x51D5BCu) { return; }
        }
        }
    }
    ctx->pc = 0x51D5BCu;
label_51d5bc:
    // 0x51d5bc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_51d5c0:
    if (ctx->pc == 0x51D5C0u) {
        ctx->pc = 0x51D5C4u;
        goto label_51d5c4;
    }
    ctx->pc = 0x51D5BCu;
    {
        const bool branch_taken_0x51d5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d5bc) {
            ctx->pc = 0x51D638u;
            goto label_51d638;
        }
    }
    ctx->pc = 0x51D5C4u;
label_51d5c4:
    // 0x51d5c4: 0x0  nop
    ctx->pc = 0x51d5c4u;
    // NOP
label_51d5c8:
    // 0x51d5c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51d5cc:
    // 0x51d5cc: 0xc1475f0  jal         func_51D7C0
label_51d5d0:
    if (ctx->pc == 0x51D5D0u) {
        ctx->pc = 0x51D5D0u;
            // 0x51d5d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D5D4u;
        goto label_51d5d4;
    }
    ctx->pc = 0x51D5CCu;
    SET_GPR_U32(ctx, 31, 0x51D5D4u);
    ctx->pc = 0x51D5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D5CCu;
            // 0x51d5d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51D7C0u;
    if (runtime->hasFunction(0x51D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x51D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D5D4u; }
        if (ctx->pc != 0x51D5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051D7C0_0x51d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D5D4u; }
        if (ctx->pc != 0x51D5D4u) { return; }
    }
    ctx->pc = 0x51D5D4u;
label_51d5d4:
    // 0x51d5d4: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x51d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_51d5d8:
    // 0x51d5d8: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x51d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_51d5dc:
    // 0x51d5dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51d5dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51d5e0:
    // 0x51d5e0: 0xc0c1a0c  jal         func_306830
label_51d5e4:
    if (ctx->pc == 0x51D5E4u) {
        ctx->pc = 0x51D5E4u;
            // 0x51d5e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D5E8u;
        goto label_51d5e8;
    }
    ctx->pc = 0x51D5E0u;
    SET_GPR_U32(ctx, 31, 0x51D5E8u);
    ctx->pc = 0x51D5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D5E0u;
            // 0x51d5e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x306830u;
    if (runtime->hasFunction(0x306830u)) {
        auto targetFn = runtime->lookupFunction(0x306830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D5E8u; }
        if (ctx->pc != 0x51D5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00306830_0x306830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D5E8u; }
        if (ctx->pc != 0x51D5E8u) { return; }
    }
    ctx->pc = 0x51D5E8u;
label_51d5e8:
    // 0x51d5e8: 0x10000013  b           . + 4 + (0x13 << 2)
label_51d5ec:
    if (ctx->pc == 0x51D5ECu) {
        ctx->pc = 0x51D5F0u;
        goto label_51d5f0;
    }
    ctx->pc = 0x51D5E8u;
    {
        const bool branch_taken_0x51d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d5e8) {
            ctx->pc = 0x51D638u;
            goto label_51d638;
        }
    }
    ctx->pc = 0x51D5F0u;
label_51d5f0:
    // 0x51d5f0: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x51d5f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51d5f4:
    // 0x51d5f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x51d5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_51d5f8:
    // 0x51d5f8: 0xc147618  jal         func_51D860
label_51d5fc:
    if (ctx->pc == 0x51D5FCu) {
        ctx->pc = 0x51D5FCu;
            // 0x51d5fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x51D600u;
        goto label_51d600;
    }
    ctx->pc = 0x51D5F8u;
    SET_GPR_U32(ctx, 31, 0x51D600u);
    ctx->pc = 0x51D5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D5F8u;
            // 0x51d5fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51D860u;
    if (runtime->hasFunction(0x51D860u)) {
        auto targetFn = runtime->lookupFunction(0x51D860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D600u; }
        if (ctx->pc != 0x51D600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051D860_0x51d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D600u; }
        if (ctx->pc != 0x51D600u) { return; }
    }
    ctx->pc = 0x51D600u;
label_51d600:
    // 0x51d600: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x51d600u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51d604:
    // 0x51d604: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51d604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51d608:
    // 0x51d608: 0xc0e11c0  jal         func_384700
label_51d60c:
    if (ctx->pc == 0x51D60Cu) {
        ctx->pc = 0x51D60Cu;
            // 0x51d60c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x51D610u;
        goto label_51d610;
    }
    ctx->pc = 0x51D608u;
    SET_GPR_U32(ctx, 31, 0x51D610u);
    ctx->pc = 0x51D60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D608u;
            // 0x51d60c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384700u;
    if (runtime->hasFunction(0x384700u)) {
        auto targetFn = runtime->lookupFunction(0x384700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D610u; }
        if (ctx->pc != 0x51D610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384700_0x384700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D610u; }
        if (ctx->pc != 0x51D610u) { return; }
    }
    ctx->pc = 0x51D610u;
label_51d610:
    // 0x51d610: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_51d614:
    if (ctx->pc == 0x51D614u) {
        ctx->pc = 0x51D618u;
        goto label_51d618;
    }
    ctx->pc = 0x51D610u;
    {
        const bool branch_taken_0x51d610 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d610) {
            ctx->pc = 0x51D638u;
            goto label_51d638;
        }
    }
    ctx->pc = 0x51D618u;
label_51d618:
    // 0x51d618: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x51d618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51d61c:
    // 0x51d61c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x51d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_51d620:
    // 0x51d620: 0xc147ae4  jal         func_51EB90
label_51d624:
    if (ctx->pc == 0x51D624u) {
        ctx->pc = 0x51D624u;
            // 0x51d624: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51D628u;
        goto label_51d628;
    }
    ctx->pc = 0x51D620u;
    SET_GPR_U32(ctx, 31, 0x51D628u);
    ctx->pc = 0x51D624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D620u;
            // 0x51d624: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EB90u;
    if (runtime->hasFunction(0x51EB90u)) {
        auto targetFn = runtime->lookupFunction(0x51EB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D628u; }
        if (ctx->pc != 0x51D628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EB90_0x51eb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D628u; }
        if (ctx->pc != 0x51D628u) { return; }
    }
    ctx->pc = 0x51D628u;
label_51d628:
    // 0x51d628: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51d628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51d62c:
    // 0x51d62c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x51d62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_51d630:
    // 0x51d630: 0xc0c05e8  jal         func_3017A0
label_51d634:
    if (ctx->pc == 0x51D634u) {
        ctx->pc = 0x51D634u;
            // 0x51d634: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x51D638u;
        goto label_51d638;
    }
    ctx->pc = 0x51D630u;
    SET_GPR_U32(ctx, 31, 0x51D638u);
    ctx->pc = 0x51D634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51D630u;
            // 0x51d634: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3017A0u;
    if (runtime->hasFunction(0x3017A0u)) {
        auto targetFn = runtime->lookupFunction(0x3017A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D638u; }
        if (ctx->pc != 0x51D638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003017A0_0x3017a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D638u; }
        if (ctx->pc != 0x51D638u) { return; }
    }
    ctx->pc = 0x51D638u;
label_51d638:
    // 0x51d638: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x51d638u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_51d63c:
    // 0x51d63c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x51d63cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_51d640:
    // 0x51d640: 0x16a0ff7f  bnez        $s5, . + 4 + (-0x81 << 2)
label_51d644:
    if (ctx->pc == 0x51D644u) {
        ctx->pc = 0x51D644u;
            // 0x51d644: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x51D648u;
        goto label_51d648;
    }
    ctx->pc = 0x51D640u;
    {
        const bool branch_taken_0x51d640 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x51D644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D640u;
            // 0x51d644: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d640) {
            ctx->pc = 0x51D440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51d440;
        }
    }
    ctx->pc = 0x51D648u;
label_51d648:
    // 0x51d648: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x51d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_51d64c:
    // 0x51d64c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x51d64cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_51d650:
    // 0x51d650: 0x50200049  beql        $at, $zero, . + 4 + (0x49 << 2)
label_51d654:
    if (ctx->pc == 0x51D654u) {
        ctx->pc = 0x51D654u;
            // 0x51d654: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x51D658u;
        goto label_51d658;
    }
    ctx->pc = 0x51D650u;
    {
        const bool branch_taken_0x51d650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x51d650) {
            ctx->pc = 0x51D654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D650u;
            // 0x51d654: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D778u;
            goto label_51d778;
        }
    }
    ctx->pc = 0x51D658u;
label_51d658:
    // 0x51d658: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x51d658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_51d65c:
    // 0x51d65c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x51d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_51d660:
    // 0x51d660: 0x2463c560  addiu       $v1, $v1, -0x3AA0
    ctx->pc = 0x51d660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952288));
label_51d664:
    // 0x51d664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51d664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_51d668:
    // 0x51d668: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x51d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_51d66c:
    // 0x51d66c: 0x400008  jr          $v0
label_51d670:
    if (ctx->pc == 0x51D670u) {
        ctx->pc = 0x51D674u;
        goto label_51d674;
    }
    ctx->pc = 0x51D66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x51D674u: goto label_51d674;
            case 0x51D680u: goto label_51d680;
            case 0x51D6F4u: goto label_51d6f4;
            case 0x51D704u: goto label_51d704;
            case 0x51D774u: goto label_51d774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x51D674u;
label_51d674:
    // 0x51d674: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x51d674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
label_51d678:
    // 0x51d678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51d67c:
    // 0x51d67c: 0xae4200a8  sw          $v0, 0xA8($s2)
    ctx->pc = 0x51d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
label_51d680:
    // 0x51d680: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x51d680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51d684:
    // 0x51d684: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x51d684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_51d688:
    // 0x51d688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51d688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d68c:
    // 0x51d68c: 0x264400ac  addiu       $a0, $s2, 0xAC
    ctx->pc = 0x51d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
label_51d690:
    // 0x51d690: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x51d690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51d694:
    // 0x51d694: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_51d698:
    if (ctx->pc == 0x51D698u) {
        ctx->pc = 0x51D698u;
            // 0x51d698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51D69Cu;
        goto label_51d69c;
    }
    ctx->pc = 0x51D694u;
    {
        const bool branch_taken_0x51d694 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x51D698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D694u;
            // 0x51d698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d694) {
            ctx->pc = 0x51D6A0u;
            goto label_51d6a0;
        }
    }
    ctx->pc = 0x51D69Cu;
label_51d69c:
    // 0x51d69c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x51d69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51d6a0:
    // 0x51d6a0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_51d6a4:
    if (ctx->pc == 0x51D6A4u) {
        ctx->pc = 0x51D6A4u;
            // 0x51d6a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x51D6A8u;
        goto label_51d6a8;
    }
    ctx->pc = 0x51D6A0u;
    {
        const bool branch_taken_0x51d6a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x51d6a0) {
            ctx->pc = 0x51D6A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D6A0u;
            // 0x51d6a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D6B4u;
            goto label_51d6b4;
        }
    }
    ctx->pc = 0x51D6A8u;
label_51d6a8:
    // 0x51d6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51d6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d6ac:
    // 0x51d6ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_51d6b0:
    if (ctx->pc == 0x51D6B0u) {
        ctx->pc = 0x51D6B0u;
            // 0x51d6b0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x51D6B4u;
        goto label_51d6b4;
    }
    ctx->pc = 0x51D6ACu;
    {
        const bool branch_taken_0x51d6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51D6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D6ACu;
            // 0x51d6b0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d6ac) {
            ctx->pc = 0x51D6CCu;
            goto label_51d6cc;
        }
    }
    ctx->pc = 0x51D6B4u;
label_51d6b4:
    // 0x51d6b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x51d6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_51d6b8:
    // 0x51d6b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x51d6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_51d6bc:
    // 0x51d6bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51d6bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d6c0:
    // 0x51d6c0: 0x0  nop
    ctx->pc = 0x51d6c0u;
    // NOP
label_51d6c4:
    // 0x51d6c4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x51d6c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_51d6c8:
    // 0x51d6c8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x51d6c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_51d6cc:
    // 0x51d6cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51d6d0:
    // 0x51d6d0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x51d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51d6d4:
    // 0x51d6d4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x51d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_51d6d8:
    // 0x51d6d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51d6d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d6dc:
    // 0x51d6dc: 0x0  nop
    ctx->pc = 0x51d6dcu;
    // NOP
label_51d6e0:
    // 0x51d6e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x51d6e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_51d6e4:
    // 0x51d6e4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x51d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51d6e8:
    // 0x51d6e8: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x51d6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_51d6ec:
    // 0x51d6ec: 0x10000021  b           . + 4 + (0x21 << 2)
label_51d6f0:
    if (ctx->pc == 0x51D6F0u) {
        ctx->pc = 0x51D6F0u;
            // 0x51d6f0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x51D6F4u;
        goto label_51d6f4;
    }
    ctx->pc = 0x51D6ECu;
    {
        const bool branch_taken_0x51d6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51D6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D6ECu;
            // 0x51d6f0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d6ec) {
            ctx->pc = 0x51D774u;
            goto label_51d774;
        }
    }
    ctx->pc = 0x51D6F4u;
label_51d6f4:
    // 0x51d6f4: 0x3c0341e8  lui         $v1, 0x41E8
    ctx->pc = 0x51d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16872 << 16));
label_51d6f8:
    // 0x51d6f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x51d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_51d6fc:
    // 0x51d6fc: 0xae4300ac  sw          $v1, 0xAC($s2)
    ctx->pc = 0x51d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_51d700:
    // 0x51d700: 0xae4200a8  sw          $v0, 0xA8($s2)
    ctx->pc = 0x51d700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
label_51d704:
    // 0x51d704: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x51d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51d708:
    // 0x51d708: 0x264400ac  addiu       $a0, $s2, 0xAC
    ctx->pc = 0x51d708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
label_51d70c:
    // 0x51d70c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51d70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d710:
    // 0x51d710: 0x0  nop
    ctx->pc = 0x51d710u;
    // NOP
label_51d714:
    // 0x51d714: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x51d714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51d718:
    // 0x51d718: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_51d71c:
    if (ctx->pc == 0x51D71Cu) {
        ctx->pc = 0x51D71Cu;
            // 0x51d71c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51D720u;
        goto label_51d720;
    }
    ctx->pc = 0x51D718u;
    {
        const bool branch_taken_0x51d718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x51D71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D718u;
            // 0x51d71c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d718) {
            ctx->pc = 0x51D724u;
            goto label_51d724;
        }
    }
    ctx->pc = 0x51D720u;
label_51d720:
    // 0x51d720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x51d720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51d724:
    // 0x51d724: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_51d728:
    if (ctx->pc == 0x51D728u) {
        ctx->pc = 0x51D728u;
            // 0x51d728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x51D72Cu;
        goto label_51d72c;
    }
    ctx->pc = 0x51D724u;
    {
        const bool branch_taken_0x51d724 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x51d724) {
            ctx->pc = 0x51D728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51D724u;
            // 0x51d728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51D738u;
            goto label_51d738;
        }
    }
    ctx->pc = 0x51D72Cu;
label_51d72c:
    // 0x51d72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51d72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d730:
    // 0x51d730: 0x10000007  b           . + 4 + (0x7 << 2)
label_51d734:
    if (ctx->pc == 0x51D734u) {
        ctx->pc = 0x51D734u;
            // 0x51d734: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x51D738u;
        goto label_51d738;
    }
    ctx->pc = 0x51D730u;
    {
        const bool branch_taken_0x51d730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51D734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D730u;
            // 0x51d734: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x51d730) {
            ctx->pc = 0x51D750u;
            goto label_51d750;
        }
    }
    ctx->pc = 0x51D738u;
label_51d738:
    // 0x51d738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x51d738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_51d73c:
    // 0x51d73c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x51d73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_51d740:
    // 0x51d740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51d740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d744:
    // 0x51d744: 0x0  nop
    ctx->pc = 0x51d744u;
    // NOP
label_51d748:
    // 0x51d748: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x51d748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_51d74c:
    // 0x51d74c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x51d74cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_51d750:
    // 0x51d750: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51d754:
    // 0x51d754: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x51d754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51d758:
    // 0x51d758: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x51d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_51d75c:
    // 0x51d75c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51d75cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51d760:
    // 0x51d760: 0x0  nop
    ctx->pc = 0x51d760u;
    // NOP
label_51d764:
    // 0x51d764: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x51d764u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_51d768:
    // 0x51d768: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x51d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51d76c:
    // 0x51d76c: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x51d76cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_51d770:
    // 0x51d770: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x51d770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_51d774:
    // 0x51d774: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x51d774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
label_51d778:
    // 0x51d778: 0xc147c88  jal         func_51F220
label_51d77c:
    if (ctx->pc == 0x51D77Cu) {
        ctx->pc = 0x51D780u;
        goto label_51d780;
    }
    ctx->pc = 0x51D778u;
    SET_GPR_U32(ctx, 31, 0x51D780u);
    ctx->pc = 0x51F220u;
    if (runtime->hasFunction(0x51F220u)) {
        auto targetFn = runtime->lookupFunction(0x51F220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D780u; }
        if (ctx->pc != 0x51D780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051F220_0x51f220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51D780u; }
        if (ctx->pc != 0x51D780u) { return; }
    }
    ctx->pc = 0x51D780u;
label_51d780:
    // 0x51d780: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x51d780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_51d784:
    // 0x51d784: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x51d784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_51d788:
    // 0x51d788: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x51d788u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_51d78c:
    // 0x51d78c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x51d78cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_51d790:
    // 0x51d790: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x51d790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_51d794:
    // 0x51d794: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x51d794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51d798:
    // 0x51d798: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x51d798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51d79c:
    // 0x51d79c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x51d79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51d7a0:
    // 0x51d7a0: 0x3e00008  jr          $ra
label_51d7a4:
    if (ctx->pc == 0x51D7A4u) {
        ctx->pc = 0x51D7A4u;
            // 0x51d7a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x51D7A8u;
        goto label_51d7a8;
    }
    ctx->pc = 0x51D7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51D7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51D7A0u;
            // 0x51d7a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51D7A8u;
label_51d7a8:
    // 0x51d7a8: 0x0  nop
    ctx->pc = 0x51d7a8u;
    // NOP
label_51d7ac:
    // 0x51d7ac: 0x0  nop
    ctx->pc = 0x51d7acu;
    // NOP
}
