#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D540
// Address: 0x31d540 - 0x31d940
void sub_0031D540_0x31d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D540_0x31d540");
#endif

    switch (ctx->pc) {
        case 0x31d540u: goto label_31d540;
        case 0x31d544u: goto label_31d544;
        case 0x31d548u: goto label_31d548;
        case 0x31d54cu: goto label_31d54c;
        case 0x31d550u: goto label_31d550;
        case 0x31d554u: goto label_31d554;
        case 0x31d558u: goto label_31d558;
        case 0x31d55cu: goto label_31d55c;
        case 0x31d560u: goto label_31d560;
        case 0x31d564u: goto label_31d564;
        case 0x31d568u: goto label_31d568;
        case 0x31d56cu: goto label_31d56c;
        case 0x31d570u: goto label_31d570;
        case 0x31d574u: goto label_31d574;
        case 0x31d578u: goto label_31d578;
        case 0x31d57cu: goto label_31d57c;
        case 0x31d580u: goto label_31d580;
        case 0x31d584u: goto label_31d584;
        case 0x31d588u: goto label_31d588;
        case 0x31d58cu: goto label_31d58c;
        case 0x31d590u: goto label_31d590;
        case 0x31d594u: goto label_31d594;
        case 0x31d598u: goto label_31d598;
        case 0x31d59cu: goto label_31d59c;
        case 0x31d5a0u: goto label_31d5a0;
        case 0x31d5a4u: goto label_31d5a4;
        case 0x31d5a8u: goto label_31d5a8;
        case 0x31d5acu: goto label_31d5ac;
        case 0x31d5b0u: goto label_31d5b0;
        case 0x31d5b4u: goto label_31d5b4;
        case 0x31d5b8u: goto label_31d5b8;
        case 0x31d5bcu: goto label_31d5bc;
        case 0x31d5c0u: goto label_31d5c0;
        case 0x31d5c4u: goto label_31d5c4;
        case 0x31d5c8u: goto label_31d5c8;
        case 0x31d5ccu: goto label_31d5cc;
        case 0x31d5d0u: goto label_31d5d0;
        case 0x31d5d4u: goto label_31d5d4;
        case 0x31d5d8u: goto label_31d5d8;
        case 0x31d5dcu: goto label_31d5dc;
        case 0x31d5e0u: goto label_31d5e0;
        case 0x31d5e4u: goto label_31d5e4;
        case 0x31d5e8u: goto label_31d5e8;
        case 0x31d5ecu: goto label_31d5ec;
        case 0x31d5f0u: goto label_31d5f0;
        case 0x31d5f4u: goto label_31d5f4;
        case 0x31d5f8u: goto label_31d5f8;
        case 0x31d5fcu: goto label_31d5fc;
        case 0x31d600u: goto label_31d600;
        case 0x31d604u: goto label_31d604;
        case 0x31d608u: goto label_31d608;
        case 0x31d60cu: goto label_31d60c;
        case 0x31d610u: goto label_31d610;
        case 0x31d614u: goto label_31d614;
        case 0x31d618u: goto label_31d618;
        case 0x31d61cu: goto label_31d61c;
        case 0x31d620u: goto label_31d620;
        case 0x31d624u: goto label_31d624;
        case 0x31d628u: goto label_31d628;
        case 0x31d62cu: goto label_31d62c;
        case 0x31d630u: goto label_31d630;
        case 0x31d634u: goto label_31d634;
        case 0x31d638u: goto label_31d638;
        case 0x31d63cu: goto label_31d63c;
        case 0x31d640u: goto label_31d640;
        case 0x31d644u: goto label_31d644;
        case 0x31d648u: goto label_31d648;
        case 0x31d64cu: goto label_31d64c;
        case 0x31d650u: goto label_31d650;
        case 0x31d654u: goto label_31d654;
        case 0x31d658u: goto label_31d658;
        case 0x31d65cu: goto label_31d65c;
        case 0x31d660u: goto label_31d660;
        case 0x31d664u: goto label_31d664;
        case 0x31d668u: goto label_31d668;
        case 0x31d66cu: goto label_31d66c;
        case 0x31d670u: goto label_31d670;
        case 0x31d674u: goto label_31d674;
        case 0x31d678u: goto label_31d678;
        case 0x31d67cu: goto label_31d67c;
        case 0x31d680u: goto label_31d680;
        case 0x31d684u: goto label_31d684;
        case 0x31d688u: goto label_31d688;
        case 0x31d68cu: goto label_31d68c;
        case 0x31d690u: goto label_31d690;
        case 0x31d694u: goto label_31d694;
        case 0x31d698u: goto label_31d698;
        case 0x31d69cu: goto label_31d69c;
        case 0x31d6a0u: goto label_31d6a0;
        case 0x31d6a4u: goto label_31d6a4;
        case 0x31d6a8u: goto label_31d6a8;
        case 0x31d6acu: goto label_31d6ac;
        case 0x31d6b0u: goto label_31d6b0;
        case 0x31d6b4u: goto label_31d6b4;
        case 0x31d6b8u: goto label_31d6b8;
        case 0x31d6bcu: goto label_31d6bc;
        case 0x31d6c0u: goto label_31d6c0;
        case 0x31d6c4u: goto label_31d6c4;
        case 0x31d6c8u: goto label_31d6c8;
        case 0x31d6ccu: goto label_31d6cc;
        case 0x31d6d0u: goto label_31d6d0;
        case 0x31d6d4u: goto label_31d6d4;
        case 0x31d6d8u: goto label_31d6d8;
        case 0x31d6dcu: goto label_31d6dc;
        case 0x31d6e0u: goto label_31d6e0;
        case 0x31d6e4u: goto label_31d6e4;
        case 0x31d6e8u: goto label_31d6e8;
        case 0x31d6ecu: goto label_31d6ec;
        case 0x31d6f0u: goto label_31d6f0;
        case 0x31d6f4u: goto label_31d6f4;
        case 0x31d6f8u: goto label_31d6f8;
        case 0x31d6fcu: goto label_31d6fc;
        case 0x31d700u: goto label_31d700;
        case 0x31d704u: goto label_31d704;
        case 0x31d708u: goto label_31d708;
        case 0x31d70cu: goto label_31d70c;
        case 0x31d710u: goto label_31d710;
        case 0x31d714u: goto label_31d714;
        case 0x31d718u: goto label_31d718;
        case 0x31d71cu: goto label_31d71c;
        case 0x31d720u: goto label_31d720;
        case 0x31d724u: goto label_31d724;
        case 0x31d728u: goto label_31d728;
        case 0x31d72cu: goto label_31d72c;
        case 0x31d730u: goto label_31d730;
        case 0x31d734u: goto label_31d734;
        case 0x31d738u: goto label_31d738;
        case 0x31d73cu: goto label_31d73c;
        case 0x31d740u: goto label_31d740;
        case 0x31d744u: goto label_31d744;
        case 0x31d748u: goto label_31d748;
        case 0x31d74cu: goto label_31d74c;
        case 0x31d750u: goto label_31d750;
        case 0x31d754u: goto label_31d754;
        case 0x31d758u: goto label_31d758;
        case 0x31d75cu: goto label_31d75c;
        case 0x31d760u: goto label_31d760;
        case 0x31d764u: goto label_31d764;
        case 0x31d768u: goto label_31d768;
        case 0x31d76cu: goto label_31d76c;
        case 0x31d770u: goto label_31d770;
        case 0x31d774u: goto label_31d774;
        case 0x31d778u: goto label_31d778;
        case 0x31d77cu: goto label_31d77c;
        case 0x31d780u: goto label_31d780;
        case 0x31d784u: goto label_31d784;
        case 0x31d788u: goto label_31d788;
        case 0x31d78cu: goto label_31d78c;
        case 0x31d790u: goto label_31d790;
        case 0x31d794u: goto label_31d794;
        case 0x31d798u: goto label_31d798;
        case 0x31d79cu: goto label_31d79c;
        case 0x31d7a0u: goto label_31d7a0;
        case 0x31d7a4u: goto label_31d7a4;
        case 0x31d7a8u: goto label_31d7a8;
        case 0x31d7acu: goto label_31d7ac;
        case 0x31d7b0u: goto label_31d7b0;
        case 0x31d7b4u: goto label_31d7b4;
        case 0x31d7b8u: goto label_31d7b8;
        case 0x31d7bcu: goto label_31d7bc;
        case 0x31d7c0u: goto label_31d7c0;
        case 0x31d7c4u: goto label_31d7c4;
        case 0x31d7c8u: goto label_31d7c8;
        case 0x31d7ccu: goto label_31d7cc;
        case 0x31d7d0u: goto label_31d7d0;
        case 0x31d7d4u: goto label_31d7d4;
        case 0x31d7d8u: goto label_31d7d8;
        case 0x31d7dcu: goto label_31d7dc;
        case 0x31d7e0u: goto label_31d7e0;
        case 0x31d7e4u: goto label_31d7e4;
        case 0x31d7e8u: goto label_31d7e8;
        case 0x31d7ecu: goto label_31d7ec;
        case 0x31d7f0u: goto label_31d7f0;
        case 0x31d7f4u: goto label_31d7f4;
        case 0x31d7f8u: goto label_31d7f8;
        case 0x31d7fcu: goto label_31d7fc;
        case 0x31d800u: goto label_31d800;
        case 0x31d804u: goto label_31d804;
        case 0x31d808u: goto label_31d808;
        case 0x31d80cu: goto label_31d80c;
        case 0x31d810u: goto label_31d810;
        case 0x31d814u: goto label_31d814;
        case 0x31d818u: goto label_31d818;
        case 0x31d81cu: goto label_31d81c;
        case 0x31d820u: goto label_31d820;
        case 0x31d824u: goto label_31d824;
        case 0x31d828u: goto label_31d828;
        case 0x31d82cu: goto label_31d82c;
        case 0x31d830u: goto label_31d830;
        case 0x31d834u: goto label_31d834;
        case 0x31d838u: goto label_31d838;
        case 0x31d83cu: goto label_31d83c;
        case 0x31d840u: goto label_31d840;
        case 0x31d844u: goto label_31d844;
        case 0x31d848u: goto label_31d848;
        case 0x31d84cu: goto label_31d84c;
        case 0x31d850u: goto label_31d850;
        case 0x31d854u: goto label_31d854;
        case 0x31d858u: goto label_31d858;
        case 0x31d85cu: goto label_31d85c;
        case 0x31d860u: goto label_31d860;
        case 0x31d864u: goto label_31d864;
        case 0x31d868u: goto label_31d868;
        case 0x31d86cu: goto label_31d86c;
        case 0x31d870u: goto label_31d870;
        case 0x31d874u: goto label_31d874;
        case 0x31d878u: goto label_31d878;
        case 0x31d87cu: goto label_31d87c;
        case 0x31d880u: goto label_31d880;
        case 0x31d884u: goto label_31d884;
        case 0x31d888u: goto label_31d888;
        case 0x31d88cu: goto label_31d88c;
        case 0x31d890u: goto label_31d890;
        case 0x31d894u: goto label_31d894;
        case 0x31d898u: goto label_31d898;
        case 0x31d89cu: goto label_31d89c;
        case 0x31d8a0u: goto label_31d8a0;
        case 0x31d8a4u: goto label_31d8a4;
        case 0x31d8a8u: goto label_31d8a8;
        case 0x31d8acu: goto label_31d8ac;
        case 0x31d8b0u: goto label_31d8b0;
        case 0x31d8b4u: goto label_31d8b4;
        case 0x31d8b8u: goto label_31d8b8;
        case 0x31d8bcu: goto label_31d8bc;
        case 0x31d8c0u: goto label_31d8c0;
        case 0x31d8c4u: goto label_31d8c4;
        case 0x31d8c8u: goto label_31d8c8;
        case 0x31d8ccu: goto label_31d8cc;
        case 0x31d8d0u: goto label_31d8d0;
        case 0x31d8d4u: goto label_31d8d4;
        case 0x31d8d8u: goto label_31d8d8;
        case 0x31d8dcu: goto label_31d8dc;
        case 0x31d8e0u: goto label_31d8e0;
        case 0x31d8e4u: goto label_31d8e4;
        case 0x31d8e8u: goto label_31d8e8;
        case 0x31d8ecu: goto label_31d8ec;
        case 0x31d8f0u: goto label_31d8f0;
        case 0x31d8f4u: goto label_31d8f4;
        case 0x31d8f8u: goto label_31d8f8;
        case 0x31d8fcu: goto label_31d8fc;
        case 0x31d900u: goto label_31d900;
        case 0x31d904u: goto label_31d904;
        case 0x31d908u: goto label_31d908;
        case 0x31d90cu: goto label_31d90c;
        case 0x31d910u: goto label_31d910;
        case 0x31d914u: goto label_31d914;
        case 0x31d918u: goto label_31d918;
        case 0x31d91cu: goto label_31d91c;
        case 0x31d920u: goto label_31d920;
        case 0x31d924u: goto label_31d924;
        case 0x31d928u: goto label_31d928;
        case 0x31d92cu: goto label_31d92c;
        case 0x31d930u: goto label_31d930;
        case 0x31d934u: goto label_31d934;
        case 0x31d938u: goto label_31d938;
        case 0x31d93cu: goto label_31d93c;
        default: break;
    }

    ctx->pc = 0x31d540u;

label_31d540:
    // 0x31d540: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x31d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31d544:
    // 0x31d544: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31d544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31d548:
    // 0x31d548: 0x0  nop
    ctx->pc = 0x31d548u;
    // NOP
label_31d54c:
    // 0x31d54c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x31d54cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31d550:
    // 0x31d550: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_31d554:
    if (ctx->pc == 0x31D554u) {
        ctx->pc = 0x31D558u;
        goto label_31d558;
    }
    ctx->pc = 0x31D550u;
    {
        const bool branch_taken_0x31d550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d550) {
            ctx->pc = 0x31D594u;
            goto label_31d594;
        }
    }
    ctx->pc = 0x31D558u;
label_31d558:
    // 0x31d558: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x31d558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_31d55c:
    // 0x31d55c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x31d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_31d560:
    // 0x31d560: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x31d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d564:
    // 0x31d564: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31d564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31d568:
    // 0x31d568: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31d568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31d56c:
    // 0x31d56c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31d570:
    if (ctx->pc == 0x31D570u) {
        ctx->pc = 0x31D570u;
            // 0x31d570: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->pc = 0x31D574u;
        goto label_31d574;
    }
    ctx->pc = 0x31D56Cu;
    {
        const bool branch_taken_0x31d56c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31D570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D56Cu;
            // 0x31d570: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d56c) {
            ctx->pc = 0x31D584u;
            goto label_31d584;
        }
    }
    ctx->pc = 0x31D574u;
label_31d574:
    // 0x31d574: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x31d574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_31d578:
    // 0x31d578: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31d578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d57c:
    // 0x31d57c: 0x10000005  b           . + 4 + (0x5 << 2)
label_31d580:
    if (ctx->pc == 0x31D580u) {
        ctx->pc = 0x31D580u;
            // 0x31d580: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->pc = 0x31D584u;
        goto label_31d584;
    }
    ctx->pc = 0x31D57Cu;
    {
        const bool branch_taken_0x31d57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D57Cu;
            // 0x31d580: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d57c) {
            ctx->pc = 0x31D594u;
            goto label_31d594;
        }
    }
    ctx->pc = 0x31D584u;
label_31d584:
    // 0x31d584: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x31d584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31d588:
    // 0x31d588: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x31d588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d58c:
    // 0x31d58c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31d58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31d590:
    // 0x31d590: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x31d590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_31d594:
    // 0x31d594: 0x3e00008  jr          $ra
label_31d598:
    if (ctx->pc == 0x31D598u) {
        ctx->pc = 0x31D59Cu;
        goto label_31d59c;
    }
    ctx->pc = 0x31D594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D59Cu;
label_31d59c:
    // 0x31d59c: 0x0  nop
    ctx->pc = 0x31d59cu;
    // NOP
label_31d5a0:
    // 0x31d5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31d5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31d5a4:
    // 0x31d5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31d5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31d5a8:
    // 0x31d5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31d5ac:
    // 0x31d5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31d5b0:
    // 0x31d5b0: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x31d5b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_31d5b4:
    // 0x31d5b4: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x31d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
label_31d5b8:
    // 0x31d5b8: 0x2c610026  sltiu       $at, $v1, 0x26
    ctx->pc = 0x31d5b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
label_31d5bc:
    // 0x31d5bc: 0x102000db  beqz        $at, . + 4 + (0xDB << 2)
label_31d5c0:
    if (ctx->pc == 0x31D5C0u) {
        ctx->pc = 0x31D5C0u;
            // 0x31d5c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D5C4u;
        goto label_31d5c4;
    }
    ctx->pc = 0x31D5BCu;
    {
        const bool branch_taken_0x31d5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D5BCu;
            // 0x31d5c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5bc) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D5C4u;
label_31d5c4:
    // 0x31d5c4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x31d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_31d5c8:
    // 0x31d5c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31d5cc:
    // 0x31d5cc: 0x24a5c310  addiu       $a1, $a1, -0x3CF0
    ctx->pc = 0x31d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951696));
label_31d5d0:
    // 0x31d5d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_31d5d4:
    // 0x31d5d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31d5d8:
    // 0x31d5d8: 0x600008  jr          $v1
label_31d5dc:
    if (ctx->pc == 0x31D5DCu) {
        ctx->pc = 0x31D5E0u;
        goto label_31d5e0;
    }
    ctx->pc = 0x31D5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31D5E0u: goto label_31d5e0;
            case 0x31D5F0u: goto label_31d5f0;
            case 0x31D698u: goto label_31d698;
            case 0x31D754u: goto label_31d754;
            case 0x31D7A0u: goto label_31d7a0;
            case 0x31D7BCu: goto label_31d7bc;
            case 0x31D7D8u: goto label_31d7d8;
            case 0x31D7F4u: goto label_31d7f4;
            case 0x31D810u: goto label_31d810;
            case 0x31D82Cu: goto label_31d82c;
            case 0x31D8E8u: goto label_31d8e8;
            case 0x31D92Cu: goto label_31d92c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x31D5E0u;
label_31d5e0:
    // 0x31d5e0: 0xc0c7650  jal         func_31D940
label_31d5e4:
    if (ctx->pc == 0x31D5E4u) {
        ctx->pc = 0x31D5E8u;
        goto label_31d5e8;
    }
    ctx->pc = 0x31D5E0u;
    SET_GPR_U32(ctx, 31, 0x31D5E8u);
    ctx->pc = 0x31D940u;
    if (runtime->hasFunction(0x31D940u)) {
        auto targetFn = runtime->lookupFunction(0x31D940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D5E8u; }
        if (ctx->pc != 0x31D5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D940_0x31d940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D5E8u; }
        if (ctx->pc != 0x31D5E8u) { return; }
    }
    ctx->pc = 0x31D5E8u;
label_31d5e8:
    // 0x31d5e8: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_31d5ec:
    if (ctx->pc == 0x31D5ECu) {
        ctx->pc = 0x31D5ECu;
            // 0x31d5ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x31D5F0u;
        goto label_31d5f0;
    }
    ctx->pc = 0x31D5E8u;
    {
        const bool branch_taken_0x31d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D5E8u;
            // 0x31d5ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5e8) {
            ctx->pc = 0x31D930u;
            goto label_31d930;
        }
    }
    ctx->pc = 0x31D5F0u;
label_31d5f0:
    // 0x31d5f0: 0x8e030164  lw          $v1, 0x164($s0)
    ctx->pc = 0x31d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_31d5f4:
    // 0x31d5f4: 0x26040164  addiu       $a0, $s0, 0x164
    ctx->pc = 0x31d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
label_31d5f8:
    // 0x31d5f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31d5fc:
    if (ctx->pc == 0x31D5FCu) {
        ctx->pc = 0x31D5FCu;
            // 0x31d5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D600u;
        goto label_31d600;
    }
    ctx->pc = 0x31D5F8u;
    {
        const bool branch_taken_0x31d5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D5F8u;
            // 0x31d5fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5f8) {
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D600u;
label_31d600:
    // 0x31d600: 0x10000005  b           . + 4 + (0x5 << 2)
label_31d604:
    if (ctx->pc == 0x31D604u) {
        ctx->pc = 0x31D604u;
            // 0x31d604: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x31D608u;
        goto label_31d608;
    }
    ctx->pc = 0x31D600u;
    {
        const bool branch_taken_0x31d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D600u;
            // 0x31d604: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d600) {
            ctx->pc = 0x31D618u;
            goto label_31d618;
        }
    }
    ctx->pc = 0x31D608u;
label_31d608:
    // 0x31d608: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31d60c:
    // 0x31d60c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_31d610:
    if (ctx->pc == 0x31D610u) {
        ctx->pc = 0x31D614u;
        goto label_31d614;
    }
    ctx->pc = 0x31D60Cu;
    {
        const bool branch_taken_0x31d60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d60c) {
            ctx->pc = 0x31D618u;
            goto label_31d618;
        }
    }
    ctx->pc = 0x31D614u;
label_31d614:
    // 0x31d614: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x31d614u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31d618:
    // 0x31d618: 0x10a000c4  beqz        $a1, . + 4 + (0xC4 << 2)
label_31d61c:
    if (ctx->pc == 0x31D61Cu) {
        ctx->pc = 0x31D620u;
        goto label_31d620;
    }
    ctx->pc = 0x31D618u;
    {
        const bool branch_taken_0x31d618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d618) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D620u;
label_31d620:
    // 0x31d620: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31d620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31d624:
    // 0x31d624: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31d624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d628:
    // 0x31d628: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x31d628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_31d62c:
    // 0x31d62c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x31d62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d630:
    // 0x31d630: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x31d630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_31d634:
    // 0x31d634: 0x320f809  jalr        $t9
label_31d638:
    if (ctx->pc == 0x31D638u) {
        ctx->pc = 0x31D638u;
            // 0x31d638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D63Cu;
        goto label_31d63c;
    }
    ctx->pc = 0x31D634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D63Cu);
        ctx->pc = 0x31D638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D634u;
            // 0x31d638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D63Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D63Cu; }
            if (ctx->pc != 0x31D63Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31D63Cu;
label_31d63c:
    // 0x31d63c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x31d63cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d640:
    // 0x31d640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d644:
    // 0x31d644: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x31d644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_31d648:
    // 0x31d648: 0x320f809  jalr        $t9
label_31d64c:
    if (ctx->pc == 0x31D64Cu) {
        ctx->pc = 0x31D64Cu;
            // 0x31d64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D650u;
        goto label_31d650;
    }
    ctx->pc = 0x31D648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D650u);
        ctx->pc = 0x31D64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D648u;
            // 0x31d64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D650u; }
            if (ctx->pc != 0x31D650u) { return; }
        }
        }
    }
    ctx->pc = 0x31D650u;
label_31d650:
    // 0x31d650: 0x8e0405dc  lw          $a0, 0x5DC($s0)
    ctx->pc = 0x31d650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1500)));
label_31d654:
    // 0x31d654: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_31d658:
    if (ctx->pc == 0x31D658u) {
        ctx->pc = 0x31D65Cu;
        goto label_31d65c;
    }
    ctx->pc = 0x31D654u;
    {
        const bool branch_taken_0x31d654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d654) {
            ctx->pc = 0x31D66Cu;
            goto label_31d66c;
        }
    }
    ctx->pc = 0x31D65Cu;
label_31d65c:
    // 0x31d65c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31d65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31d660:
    // 0x31d660: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x31d660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_31d664:
    // 0x31d664: 0x320f809  jalr        $t9
label_31d668:
    if (ctx->pc == 0x31D668u) {
        ctx->pc = 0x31D66Cu;
        goto label_31d66c;
    }
    ctx->pc = 0x31D664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D66Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D66Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D66Cu; }
            if (ctx->pc != 0x31D66Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31D66Cu;
label_31d66c:
    // 0x31d66c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31d670:
    // 0x31d670: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x31d670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_31d674:
    // 0x31d674: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31d674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31d678:
    // 0x31d678: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x31d678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_31d67c:
    // 0x31d67c: 0x320f809  jalr        $t9
label_31d680:
    if (ctx->pc == 0x31D680u) {
        ctx->pc = 0x31D684u;
        goto label_31d684;
    }
    ctx->pc = 0x31D67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D684u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D684u; }
            if (ctx->pc != 0x31D684u) { return; }
        }
        }
    }
    ctx->pc = 0x31D684u;
label_31d684:
    // 0x31d684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d688:
    // 0x31d688: 0xc0c9190  jal         func_324640
label_31d68c:
    if (ctx->pc == 0x31D68Cu) {
        ctx->pc = 0x31D68Cu;
            // 0x31d68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D690u;
        goto label_31d690;
    }
    ctx->pc = 0x31D688u;
    SET_GPR_U32(ctx, 31, 0x31D690u);
    ctx->pc = 0x31D68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D688u;
            // 0x31d68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D690u; }
        if (ctx->pc != 0x31D690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D690u; }
        if (ctx->pc != 0x31D690u) { return; }
    }
    ctx->pc = 0x31D690u;
label_31d690:
    // 0x31d690: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_31d694:
    if (ctx->pc == 0x31D694u) {
        ctx->pc = 0x31D698u;
        goto label_31d698;
    }
    ctx->pc = 0x31D690u;
    {
        const bool branch_taken_0x31d690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d690) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D698u;
label_31d698:
    // 0x31d698: 0x8e03029c  lw          $v1, 0x29C($s0)
    ctx->pc = 0x31d698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_31d69c:
    // 0x31d69c: 0x2604029c  addiu       $a0, $s0, 0x29C
    ctx->pc = 0x31d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
label_31d6a0:
    // 0x31d6a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31d6a4:
    if (ctx->pc == 0x31D6A4u) {
        ctx->pc = 0x31D6A4u;
            // 0x31d6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D6A8u;
        goto label_31d6a8;
    }
    ctx->pc = 0x31D6A0u;
    {
        const bool branch_taken_0x31d6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D6A0u;
            // 0x31d6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6a0) {
            ctx->pc = 0x31D6B0u;
            goto label_31d6b0;
        }
    }
    ctx->pc = 0x31D6A8u;
label_31d6a8:
    // 0x31d6a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_31d6ac:
    if (ctx->pc == 0x31D6ACu) {
        ctx->pc = 0x31D6ACu;
            // 0x31d6ac: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x31D6B0u;
        goto label_31d6b0;
    }
    ctx->pc = 0x31D6A8u;
    {
        const bool branch_taken_0x31d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D6A8u;
            // 0x31d6ac: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6a8) {
            ctx->pc = 0x31D6C0u;
            goto label_31d6c0;
        }
    }
    ctx->pc = 0x31D6B0u;
label_31d6b0:
    // 0x31d6b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31d6b4:
    // 0x31d6b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_31d6b8:
    if (ctx->pc == 0x31D6B8u) {
        ctx->pc = 0x31D6BCu;
        goto label_31d6bc;
    }
    ctx->pc = 0x31D6B4u;
    {
        const bool branch_taken_0x31d6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d6b4) {
            ctx->pc = 0x31D6C0u;
            goto label_31d6c0;
        }
    }
    ctx->pc = 0x31D6BCu;
label_31d6bc:
    // 0x31d6bc: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x31d6bcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31d6c0:
    // 0x31d6c0: 0x10a0009a  beqz        $a1, . + 4 + (0x9A << 2)
label_31d6c4:
    if (ctx->pc == 0x31D6C4u) {
        ctx->pc = 0x31D6C8u;
        goto label_31d6c8;
    }
    ctx->pc = 0x31D6C0u;
    {
        const bool branch_taken_0x31d6c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d6c0) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D6C8u;
label_31d6c8:
    // 0x31d6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d6cc:
    // 0x31d6cc: 0xc0c9190  jal         func_324640
label_31d6d0:
    if (ctx->pc == 0x31D6D0u) {
        ctx->pc = 0x31D6D0u;
            // 0x31d6d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31D6D4u;
        goto label_31d6d4;
    }
    ctx->pc = 0x31D6CCu;
    SET_GPR_U32(ctx, 31, 0x31D6D4u);
    ctx->pc = 0x31D6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D6CCu;
            // 0x31d6d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D6D4u; }
        if (ctx->pc != 0x31D6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D6D4u; }
        if (ctx->pc != 0x31D6D4u) { return; }
    }
    ctx->pc = 0x31D6D4u;
label_31d6d4:
    // 0x31d6d4: 0xc0c9c84  jal         func_327210
label_31d6d8:
    if (ctx->pc == 0x31D6D8u) {
        ctx->pc = 0x31D6D8u;
            // 0x31d6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D6DCu;
        goto label_31d6dc;
    }
    ctx->pc = 0x31D6D4u;
    SET_GPR_U32(ctx, 31, 0x31D6DCu);
    ctx->pc = 0x31D6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D6D4u;
            // 0x31d6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D6DCu; }
        if (ctx->pc != 0x31D6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D6DCu; }
        if (ctx->pc != 0x31D6DCu) { return; }
    }
    ctx->pc = 0x31D6DCu;
label_31d6dc:
    // 0x31d6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d6e0:
    // 0x31d6e0: 0xc0c9190  jal         func_324640
label_31d6e4:
    if (ctx->pc == 0x31D6E4u) {
        ctx->pc = 0x31D6E4u;
            // 0x31d6e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x31D6E8u;
        goto label_31d6e8;
    }
    ctx->pc = 0x31D6E0u;
    SET_GPR_U32(ctx, 31, 0x31D6E8u);
    ctx->pc = 0x31D6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D6E0u;
            // 0x31d6e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D6E8u; }
        if (ctx->pc != 0x31D6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D6E8u; }
        if (ctx->pc != 0x31D6E8u) { return; }
    }
    ctx->pc = 0x31D6E8u;
label_31d6e8:
    // 0x31d6e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31d6ec:
    // 0x31d6ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d6f0:
    // 0x31d6f0: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x31d6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_31d6f4:
    // 0x31d6f4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x31d6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d6f8:
    // 0x31d6f8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x31d6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_31d6fc:
    // 0x31d6fc: 0x320f809  jalr        $t9
label_31d700:
    if (ctx->pc == 0x31D700u) {
        ctx->pc = 0x31D700u;
            // 0x31d700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D704u;
        goto label_31d704;
    }
    ctx->pc = 0x31D6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D704u);
        ctx->pc = 0x31D700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D6FCu;
            // 0x31d700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D704u; }
            if (ctx->pc != 0x31D704u) { return; }
        }
        }
    }
    ctx->pc = 0x31D704u;
label_31d704:
    // 0x31d704: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x31d704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d708:
    // 0x31d708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d70c:
    // 0x31d70c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x31d70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_31d710:
    // 0x31d710: 0x320f809  jalr        $t9
label_31d714:
    if (ctx->pc == 0x31D714u) {
        ctx->pc = 0x31D714u;
            // 0x31d714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D718u;
        goto label_31d718;
    }
    ctx->pc = 0x31D710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D718u);
        ctx->pc = 0x31D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D710u;
            // 0x31d714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D718u; }
            if (ctx->pc != 0x31D718u) { return; }
        }
        }
    }
    ctx->pc = 0x31D718u;
label_31d718:
    // 0x31d718: 0x8e0405f4  lw          $a0, 0x5F4($s0)
    ctx->pc = 0x31d718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
label_31d71c:
    // 0x31d71c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_31d720:
    if (ctx->pc == 0x31D720u) {
        ctx->pc = 0x31D724u;
        goto label_31d724;
    }
    ctx->pc = 0x31D71Cu;
    {
        const bool branch_taken_0x31d71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d71c) {
            ctx->pc = 0x31D734u;
            goto label_31d734;
        }
    }
    ctx->pc = 0x31D724u;
label_31d724:
    // 0x31d724: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31d724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31d728:
    // 0x31d728: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x31d728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_31d72c:
    // 0x31d72c: 0x320f809  jalr        $t9
label_31d730:
    if (ctx->pc == 0x31D730u) {
        ctx->pc = 0x31D734u;
        goto label_31d734;
    }
    ctx->pc = 0x31D72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D734u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D734u; }
            if (ctx->pc != 0x31D734u) { return; }
        }
        }
    }
    ctx->pc = 0x31D734u;
label_31d734:
    // 0x31d734: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31d734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31d738:
    // 0x31d738: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x31d738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_31d73c:
    // 0x31d73c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31d73cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31d740:
    // 0x31d740: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x31d740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_31d744:
    // 0x31d744: 0x320f809  jalr        $t9
label_31d748:
    if (ctx->pc == 0x31D748u) {
        ctx->pc = 0x31D74Cu;
        goto label_31d74c;
    }
    ctx->pc = 0x31D744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D74Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D74Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D74Cu; }
            if (ctx->pc != 0x31D74Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31D74Cu;
label_31d74c:
    // 0x31d74c: 0x10000077  b           . + 4 + (0x77 << 2)
label_31d750:
    if (ctx->pc == 0x31D750u) {
        ctx->pc = 0x31D754u;
        goto label_31d754;
    }
    ctx->pc = 0x31D74Cu;
    {
        const bool branch_taken_0x31d74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d74c) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D754u;
label_31d754:
    // 0x31d754: 0x8e03029c  lw          $v1, 0x29C($s0)
    ctx->pc = 0x31d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_31d758:
    // 0x31d758: 0x2604029c  addiu       $a0, $s0, 0x29C
    ctx->pc = 0x31d758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
label_31d75c:
    // 0x31d75c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31d760:
    if (ctx->pc == 0x31D760u) {
        ctx->pc = 0x31D760u;
            // 0x31d760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D764u;
        goto label_31d764;
    }
    ctx->pc = 0x31D75Cu;
    {
        const bool branch_taken_0x31d75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D75Cu;
            // 0x31d760: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d75c) {
            ctx->pc = 0x31D76Cu;
            goto label_31d76c;
        }
    }
    ctx->pc = 0x31D764u;
label_31d764:
    // 0x31d764: 0x10000005  b           . + 4 + (0x5 << 2)
label_31d768:
    if (ctx->pc == 0x31D768u) {
        ctx->pc = 0x31D768u;
            // 0x31d768: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x31D76Cu;
        goto label_31d76c;
    }
    ctx->pc = 0x31D764u;
    {
        const bool branch_taken_0x31d764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D764u;
            // 0x31d768: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d764) {
            ctx->pc = 0x31D77Cu;
            goto label_31d77c;
        }
    }
    ctx->pc = 0x31D76Cu;
label_31d76c:
    // 0x31d76c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31d770:
    // 0x31d770: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_31d774:
    if (ctx->pc == 0x31D774u) {
        ctx->pc = 0x31D778u;
        goto label_31d778;
    }
    ctx->pc = 0x31D770u;
    {
        const bool branch_taken_0x31d770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d770) {
            ctx->pc = 0x31D77Cu;
            goto label_31d77c;
        }
    }
    ctx->pc = 0x31D778u;
label_31d778:
    // 0x31d778: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x31d778u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31d77c:
    // 0x31d77c: 0x10a0006b  beqz        $a1, . + 4 + (0x6B << 2)
label_31d780:
    if (ctx->pc == 0x31D780u) {
        ctx->pc = 0x31D784u;
        goto label_31d784;
    }
    ctx->pc = 0x31D77Cu;
    {
        const bool branch_taken_0x31d77c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d77c) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D784u;
label_31d784:
    // 0x31d784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d788:
    // 0x31d788: 0xc0c9190  jal         func_324640
label_31d78c:
    if (ctx->pc == 0x31D78Cu) {
        ctx->pc = 0x31D78Cu;
            // 0x31d78c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31D790u;
        goto label_31d790;
    }
    ctx->pc = 0x31D788u;
    SET_GPR_U32(ctx, 31, 0x31D790u);
    ctx->pc = 0x31D78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D788u;
            // 0x31d78c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D790u; }
        if (ctx->pc != 0x31D790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D790u; }
        if (ctx->pc != 0x31D790u) { return; }
    }
    ctx->pc = 0x31D790u;
label_31d790:
    // 0x31d790: 0xc0c9c84  jal         func_327210
label_31d794:
    if (ctx->pc == 0x31D794u) {
        ctx->pc = 0x31D794u;
            // 0x31d794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D798u;
        goto label_31d798;
    }
    ctx->pc = 0x31D790u;
    SET_GPR_U32(ctx, 31, 0x31D798u);
    ctx->pc = 0x31D794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D790u;
            // 0x31d794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D798u; }
        if (ctx->pc != 0x31D798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D798u; }
        if (ctx->pc != 0x31D798u) { return; }
    }
    ctx->pc = 0x31D798u;
label_31d798:
    // 0x31d798: 0x10000064  b           . + 4 + (0x64 << 2)
label_31d79c:
    if (ctx->pc == 0x31D79Cu) {
        ctx->pc = 0x31D7A0u;
        goto label_31d7a0;
    }
    ctx->pc = 0x31D798u;
    {
        const bool branch_taken_0x31d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d798) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D7A0u;
label_31d7a0:
    // 0x31d7a0: 0xc0c9190  jal         func_324640
label_31d7a4:
    if (ctx->pc == 0x31D7A4u) {
        ctx->pc = 0x31D7A4u;
            // 0x31d7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31D7A8u;
        goto label_31d7a8;
    }
    ctx->pc = 0x31D7A0u;
    SET_GPR_U32(ctx, 31, 0x31D7A8u);
    ctx->pc = 0x31D7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7A0u;
            // 0x31d7a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7A8u; }
        if (ctx->pc != 0x31D7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7A8u; }
        if (ctx->pc != 0x31D7A8u) { return; }
    }
    ctx->pc = 0x31D7A8u;
label_31d7a8:
    // 0x31d7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d7ac:
    // 0x31d7ac: 0xc0c9190  jal         func_324640
label_31d7b0:
    if (ctx->pc == 0x31D7B0u) {
        ctx->pc = 0x31D7B0u;
            // 0x31d7b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x31D7B4u;
        goto label_31d7b4;
    }
    ctx->pc = 0x31D7ACu;
    SET_GPR_U32(ctx, 31, 0x31D7B4u);
    ctx->pc = 0x31D7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7ACu;
            // 0x31d7b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7B4u; }
        if (ctx->pc != 0x31D7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7B4u; }
        if (ctx->pc != 0x31D7B4u) { return; }
    }
    ctx->pc = 0x31D7B4u;
label_31d7b4:
    // 0x31d7b4: 0x1000005d  b           . + 4 + (0x5D << 2)
label_31d7b8:
    if (ctx->pc == 0x31D7B8u) {
        ctx->pc = 0x31D7BCu;
        goto label_31d7bc;
    }
    ctx->pc = 0x31D7B4u;
    {
        const bool branch_taken_0x31d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7b4) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D7BCu;
label_31d7bc:
    // 0x31d7bc: 0xc0c9190  jal         func_324640
label_31d7c0:
    if (ctx->pc == 0x31D7C0u) {
        ctx->pc = 0x31D7C0u;
            // 0x31d7c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31D7C4u;
        goto label_31d7c4;
    }
    ctx->pc = 0x31D7BCu;
    SET_GPR_U32(ctx, 31, 0x31D7C4u);
    ctx->pc = 0x31D7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7BCu;
            // 0x31d7c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7C4u; }
        if (ctx->pc != 0x31D7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7C4u; }
        if (ctx->pc != 0x31D7C4u) { return; }
    }
    ctx->pc = 0x31D7C4u;
label_31d7c4:
    // 0x31d7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d7c8:
    // 0x31d7c8: 0xc0c9190  jal         func_324640
label_31d7cc:
    if (ctx->pc == 0x31D7CCu) {
        ctx->pc = 0x31D7CCu;
            // 0x31d7cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x31D7D0u;
        goto label_31d7d0;
    }
    ctx->pc = 0x31D7C8u;
    SET_GPR_U32(ctx, 31, 0x31D7D0u);
    ctx->pc = 0x31D7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7C8u;
            // 0x31d7cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7D0u; }
        if (ctx->pc != 0x31D7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7D0u; }
        if (ctx->pc != 0x31D7D0u) { return; }
    }
    ctx->pc = 0x31D7D0u;
label_31d7d0:
    // 0x31d7d0: 0x10000056  b           . + 4 + (0x56 << 2)
label_31d7d4:
    if (ctx->pc == 0x31D7D4u) {
        ctx->pc = 0x31D7D8u;
        goto label_31d7d8;
    }
    ctx->pc = 0x31D7D0u;
    {
        const bool branch_taken_0x31d7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7d0) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D7D8u;
label_31d7d8:
    // 0x31d7d8: 0xc0c9190  jal         func_324640
label_31d7dc:
    if (ctx->pc == 0x31D7DCu) {
        ctx->pc = 0x31D7DCu;
            // 0x31d7dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31D7E0u;
        goto label_31d7e0;
    }
    ctx->pc = 0x31D7D8u;
    SET_GPR_U32(ctx, 31, 0x31D7E0u);
    ctx->pc = 0x31D7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7D8u;
            // 0x31d7dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7E0u; }
        if (ctx->pc != 0x31D7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7E0u; }
        if (ctx->pc != 0x31D7E0u) { return; }
    }
    ctx->pc = 0x31D7E0u;
label_31d7e0:
    // 0x31d7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d7e4:
    // 0x31d7e4: 0xc0c9190  jal         func_324640
label_31d7e8:
    if (ctx->pc == 0x31D7E8u) {
        ctx->pc = 0x31D7E8u;
            // 0x31d7e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x31D7ECu;
        goto label_31d7ec;
    }
    ctx->pc = 0x31D7E4u;
    SET_GPR_U32(ctx, 31, 0x31D7ECu);
    ctx->pc = 0x31D7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7E4u;
            // 0x31d7e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7ECu; }
        if (ctx->pc != 0x31D7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7ECu; }
        if (ctx->pc != 0x31D7ECu) { return; }
    }
    ctx->pc = 0x31D7ECu;
label_31d7ec:
    // 0x31d7ec: 0x1000004f  b           . + 4 + (0x4F << 2)
label_31d7f0:
    if (ctx->pc == 0x31D7F0u) {
        ctx->pc = 0x31D7F4u;
        goto label_31d7f4;
    }
    ctx->pc = 0x31D7ECu;
    {
        const bool branch_taken_0x31d7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7ec) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D7F4u;
label_31d7f4:
    // 0x31d7f4: 0xc0c9190  jal         func_324640
label_31d7f8:
    if (ctx->pc == 0x31D7F8u) {
        ctx->pc = 0x31D7F8u;
            // 0x31d7f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31D7FCu;
        goto label_31d7fc;
    }
    ctx->pc = 0x31D7F4u;
    SET_GPR_U32(ctx, 31, 0x31D7FCu);
    ctx->pc = 0x31D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D7F4u;
            // 0x31d7f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7FCu; }
        if (ctx->pc != 0x31D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D7FCu; }
        if (ctx->pc != 0x31D7FCu) { return; }
    }
    ctx->pc = 0x31D7FCu;
label_31d7fc:
    // 0x31d7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d800:
    // 0x31d800: 0xc0c9190  jal         func_324640
label_31d804:
    if (ctx->pc == 0x31D804u) {
        ctx->pc = 0x31D804u;
            // 0x31d804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x31D808u;
        goto label_31d808;
    }
    ctx->pc = 0x31D800u;
    SET_GPR_U32(ctx, 31, 0x31D808u);
    ctx->pc = 0x31D804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D800u;
            // 0x31d804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D808u; }
        if (ctx->pc != 0x31D808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D808u; }
        if (ctx->pc != 0x31D808u) { return; }
    }
    ctx->pc = 0x31D808u;
label_31d808:
    // 0x31d808: 0x10000048  b           . + 4 + (0x48 << 2)
label_31d80c:
    if (ctx->pc == 0x31D80Cu) {
        ctx->pc = 0x31D810u;
        goto label_31d810;
    }
    ctx->pc = 0x31D808u;
    {
        const bool branch_taken_0x31d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d808) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D810u;
label_31d810:
    // 0x31d810: 0xc0c9190  jal         func_324640
label_31d814:
    if (ctx->pc == 0x31D814u) {
        ctx->pc = 0x31D814u;
            // 0x31d814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31D818u;
        goto label_31d818;
    }
    ctx->pc = 0x31D810u;
    SET_GPR_U32(ctx, 31, 0x31D818u);
    ctx->pc = 0x31D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D810u;
            // 0x31d814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D818u; }
        if (ctx->pc != 0x31D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D818u; }
        if (ctx->pc != 0x31D818u) { return; }
    }
    ctx->pc = 0x31D818u;
label_31d818:
    // 0x31d818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d81c:
    // 0x31d81c: 0xc0c9190  jal         func_324640
label_31d820:
    if (ctx->pc == 0x31D820u) {
        ctx->pc = 0x31D820u;
            // 0x31d820: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x31D824u;
        goto label_31d824;
    }
    ctx->pc = 0x31D81Cu;
    SET_GPR_U32(ctx, 31, 0x31D824u);
    ctx->pc = 0x31D820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D81Cu;
            // 0x31d820: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D824u; }
        if (ctx->pc != 0x31D824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D824u; }
        if (ctx->pc != 0x31D824u) { return; }
    }
    ctx->pc = 0x31D824u;
label_31d824:
    // 0x31d824: 0x10000041  b           . + 4 + (0x41 << 2)
label_31d828:
    if (ctx->pc == 0x31D828u) {
        ctx->pc = 0x31D82Cu;
        goto label_31d82c;
    }
    ctx->pc = 0x31D824u;
    {
        const bool branch_taken_0x31d824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d824) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D82Cu;
label_31d82c:
    // 0x31d82c: 0x8e03029c  lw          $v1, 0x29C($s0)
    ctx->pc = 0x31d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_31d830:
    // 0x31d830: 0x2604029c  addiu       $a0, $s0, 0x29C
    ctx->pc = 0x31d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
label_31d834:
    // 0x31d834: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31d838:
    if (ctx->pc == 0x31D838u) {
        ctx->pc = 0x31D838u;
            // 0x31d838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D83Cu;
        goto label_31d83c;
    }
    ctx->pc = 0x31D834u;
    {
        const bool branch_taken_0x31d834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D834u;
            // 0x31d838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d834) {
            ctx->pc = 0x31D844u;
            goto label_31d844;
        }
    }
    ctx->pc = 0x31D83Cu;
label_31d83c:
    // 0x31d83c: 0x10000005  b           . + 4 + (0x5 << 2)
label_31d840:
    if (ctx->pc == 0x31D840u) {
        ctx->pc = 0x31D840u;
            // 0x31d840: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x31D844u;
        goto label_31d844;
    }
    ctx->pc = 0x31D83Cu;
    {
        const bool branch_taken_0x31d83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D83Cu;
            // 0x31d840: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d83c) {
            ctx->pc = 0x31D854u;
            goto label_31d854;
        }
    }
    ctx->pc = 0x31D844u;
label_31d844:
    // 0x31d844: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31d848:
    // 0x31d848: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_31d84c:
    if (ctx->pc == 0x31D84Cu) {
        ctx->pc = 0x31D850u;
        goto label_31d850;
    }
    ctx->pc = 0x31D848u;
    {
        const bool branch_taken_0x31d848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d848) {
            ctx->pc = 0x31D854u;
            goto label_31d854;
        }
    }
    ctx->pc = 0x31D850u;
label_31d850:
    // 0x31d850: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x31d850u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31d854:
    // 0x31d854: 0x10a00035  beqz        $a1, . + 4 + (0x35 << 2)
label_31d858:
    if (ctx->pc == 0x31D858u) {
        ctx->pc = 0x31D85Cu;
        goto label_31d85c;
    }
    ctx->pc = 0x31D854u;
    {
        const bool branch_taken_0x31d854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d854) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D85Cu;
label_31d85c:
    // 0x31d85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d860:
    // 0x31d860: 0xc0c9190  jal         func_324640
label_31d864:
    if (ctx->pc == 0x31D864u) {
        ctx->pc = 0x31D864u;
            // 0x31d864: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31D868u;
        goto label_31d868;
    }
    ctx->pc = 0x31D860u;
    SET_GPR_U32(ctx, 31, 0x31D868u);
    ctx->pc = 0x31D864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D860u;
            // 0x31d864: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D868u; }
        if (ctx->pc != 0x31D868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D868u; }
        if (ctx->pc != 0x31D868u) { return; }
    }
    ctx->pc = 0x31D868u;
label_31d868:
    // 0x31d868: 0xc0c9c84  jal         func_327210
label_31d86c:
    if (ctx->pc == 0x31D86Cu) {
        ctx->pc = 0x31D86Cu;
            // 0x31d86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D870u;
        goto label_31d870;
    }
    ctx->pc = 0x31D868u;
    SET_GPR_U32(ctx, 31, 0x31D870u);
    ctx->pc = 0x31D86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D868u;
            // 0x31d86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D870u; }
        if (ctx->pc != 0x31D870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D870u; }
        if (ctx->pc != 0x31D870u) { return; }
    }
    ctx->pc = 0x31D870u;
label_31d870:
    // 0x31d870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d874:
    // 0x31d874: 0xc0c9190  jal         func_324640
label_31d878:
    if (ctx->pc == 0x31D878u) {
        ctx->pc = 0x31D878u;
            // 0x31d878: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x31D87Cu;
        goto label_31d87c;
    }
    ctx->pc = 0x31D874u;
    SET_GPR_U32(ctx, 31, 0x31D87Cu);
    ctx->pc = 0x31D878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D874u;
            // 0x31d878: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D87Cu; }
        if (ctx->pc != 0x31D87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D87Cu; }
        if (ctx->pc != 0x31D87Cu) { return; }
    }
    ctx->pc = 0x31D87Cu;
label_31d87c:
    // 0x31d87c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31d880:
    // 0x31d880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31d880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d884:
    // 0x31d884: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x31d884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_31d888:
    // 0x31d888: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x31d888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d88c:
    // 0x31d88c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x31d88cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_31d890:
    // 0x31d890: 0x320f809  jalr        $t9
label_31d894:
    if (ctx->pc == 0x31D894u) {
        ctx->pc = 0x31D894u;
            // 0x31d894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D898u;
        goto label_31d898;
    }
    ctx->pc = 0x31D890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D898u);
        ctx->pc = 0x31D894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D890u;
            // 0x31d894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D898u; }
            if (ctx->pc != 0x31D898u) { return; }
        }
        }
    }
    ctx->pc = 0x31D898u;
label_31d898:
    // 0x31d898: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x31d898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31d89c:
    // 0x31d89c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31d8a0:
    // 0x31d8a0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x31d8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_31d8a4:
    // 0x31d8a4: 0x320f809  jalr        $t9
label_31d8a8:
    if (ctx->pc == 0x31D8A8u) {
        ctx->pc = 0x31D8A8u;
            // 0x31d8a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D8ACu;
        goto label_31d8ac;
    }
    ctx->pc = 0x31D8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D8ACu);
        ctx->pc = 0x31D8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D8A4u;
            // 0x31d8a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D8ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D8ACu; }
            if (ctx->pc != 0x31D8ACu) { return; }
        }
        }
    }
    ctx->pc = 0x31D8ACu;
label_31d8ac:
    // 0x31d8ac: 0x8e0405f4  lw          $a0, 0x5F4($s0)
    ctx->pc = 0x31d8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
label_31d8b0:
    // 0x31d8b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_31d8b4:
    if (ctx->pc == 0x31D8B4u) {
        ctx->pc = 0x31D8B8u;
        goto label_31d8b8;
    }
    ctx->pc = 0x31D8B0u;
    {
        const bool branch_taken_0x31d8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d8b0) {
            ctx->pc = 0x31D8C8u;
            goto label_31d8c8;
        }
    }
    ctx->pc = 0x31D8B8u;
label_31d8b8:
    // 0x31d8b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31d8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31d8bc:
    // 0x31d8bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x31d8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_31d8c0:
    // 0x31d8c0: 0x320f809  jalr        $t9
label_31d8c4:
    if (ctx->pc == 0x31D8C4u) {
        ctx->pc = 0x31D8C8u;
        goto label_31d8c8;
    }
    ctx->pc = 0x31D8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D8C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D8C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D8C8u; }
            if (ctx->pc != 0x31D8C8u) { return; }
        }
        }
    }
    ctx->pc = 0x31D8C8u;
label_31d8c8:
    // 0x31d8c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31d8cc:
    // 0x31d8cc: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x31d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_31d8d0:
    // 0x31d8d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31d8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31d8d4:
    // 0x31d8d4: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x31d8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_31d8d8:
    // 0x31d8d8: 0x320f809  jalr        $t9
label_31d8dc:
    if (ctx->pc == 0x31D8DCu) {
        ctx->pc = 0x31D8E0u;
        goto label_31d8e0;
    }
    ctx->pc = 0x31D8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31D8E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31D8E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31D8E0u; }
            if (ctx->pc != 0x31D8E0u) { return; }
        }
        }
    }
    ctx->pc = 0x31D8E0u;
label_31d8e0:
    // 0x31d8e0: 0x10000012  b           . + 4 + (0x12 << 2)
label_31d8e4:
    if (ctx->pc == 0x31D8E4u) {
        ctx->pc = 0x31D8E8u;
        goto label_31d8e8;
    }
    ctx->pc = 0x31D8E0u;
    {
        const bool branch_taken_0x31d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d8e0) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D8E8u;
label_31d8e8:
    // 0x31d8e8: 0x8e03029c  lw          $v1, 0x29C($s0)
    ctx->pc = 0x31d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_31d8ec:
    // 0x31d8ec: 0x2604029c  addiu       $a0, $s0, 0x29C
    ctx->pc = 0x31d8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
label_31d8f0:
    // 0x31d8f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31d8f4:
    if (ctx->pc == 0x31D8F4u) {
        ctx->pc = 0x31D8F4u;
            // 0x31d8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D8F8u;
        goto label_31d8f8;
    }
    ctx->pc = 0x31D8F0u;
    {
        const bool branch_taken_0x31d8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D8F0u;
            // 0x31d8f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8f0) {
            ctx->pc = 0x31D900u;
            goto label_31d900;
        }
    }
    ctx->pc = 0x31D8F8u;
label_31d8f8:
    // 0x31d8f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_31d8fc:
    if (ctx->pc == 0x31D8FCu) {
        ctx->pc = 0x31D8FCu;
            // 0x31d8fc: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x31D900u;
        goto label_31d900;
    }
    ctx->pc = 0x31D8F8u;
    {
        const bool branch_taken_0x31d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D8F8u;
            // 0x31d8fc: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8f8) {
            ctx->pc = 0x31D910u;
            goto label_31d910;
        }
    }
    ctx->pc = 0x31D900u;
label_31d900:
    // 0x31d900: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31d900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31d904:
    // 0x31d904: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_31d908:
    if (ctx->pc == 0x31D908u) {
        ctx->pc = 0x31D90Cu;
        goto label_31d90c;
    }
    ctx->pc = 0x31D904u;
    {
        const bool branch_taken_0x31d904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d904) {
            ctx->pc = 0x31D910u;
            goto label_31d910;
        }
    }
    ctx->pc = 0x31D90Cu;
label_31d90c:
    // 0x31d90c: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x31d90cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_31d910:
    // 0x31d910: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_31d914:
    if (ctx->pc == 0x31D914u) {
        ctx->pc = 0x31D918u;
        goto label_31d918;
    }
    ctx->pc = 0x31D910u;
    {
        const bool branch_taken_0x31d910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d910) {
            ctx->pc = 0x31D92Cu;
            goto label_31d92c;
        }
    }
    ctx->pc = 0x31D918u;
label_31d918:
    // 0x31d918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31d91c:
    // 0x31d91c: 0xc0c9190  jal         func_324640
label_31d920:
    if (ctx->pc == 0x31D920u) {
        ctx->pc = 0x31D920u;
            // 0x31d920: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31D924u;
        goto label_31d924;
    }
    ctx->pc = 0x31D91Cu;
    SET_GPR_U32(ctx, 31, 0x31D924u);
    ctx->pc = 0x31D920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D91Cu;
            // 0x31d920: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (runtime->hasFunction(0x324640u)) {
        auto targetFn = runtime->lookupFunction(0x324640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D924u; }
        if (ctx->pc != 0x31D924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324640_0x324640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D924u; }
        if (ctx->pc != 0x31D924u) { return; }
    }
    ctx->pc = 0x31D924u;
label_31d924:
    // 0x31d924: 0xc0c9c84  jal         func_327210
label_31d928:
    if (ctx->pc == 0x31D928u) {
        ctx->pc = 0x31D928u;
            // 0x31d928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31D92Cu;
        goto label_31d92c;
    }
    ctx->pc = 0x31D924u;
    SET_GPR_U32(ctx, 31, 0x31D92Cu);
    ctx->pc = 0x31D928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31D924u;
            // 0x31d928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327210u;
    if (runtime->hasFunction(0x327210u)) {
        auto targetFn = runtime->lookupFunction(0x327210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D92Cu; }
        if (ctx->pc != 0x31D92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327210_0x327210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31D92Cu; }
        if (ctx->pc != 0x31D92Cu) { return; }
    }
    ctx->pc = 0x31D92Cu;
label_31d92c:
    // 0x31d92c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31d92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31d930:
    // 0x31d930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31d934:
    // 0x31d934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31d938:
    // 0x31d938: 0x3e00008  jr          $ra
label_31d93c:
    if (ctx->pc == 0x31D93Cu) {
        ctx->pc = 0x31D93Cu;
            // 0x31d93c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x31D940u;
        goto label_fallthrough_0x31d938;
    }
    ctx->pc = 0x31D938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D938u;
            // 0x31d93c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x31d938:
    ctx->pc = 0x31D940u;
}
