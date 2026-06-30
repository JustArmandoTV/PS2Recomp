#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037F550
// Address: 0x37f550 - 0x37f8b0
void sub_0037F550_0x37f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F550_0x37f550");
#endif

    switch (ctx->pc) {
        case 0x37f550u: goto label_37f550;
        case 0x37f554u: goto label_37f554;
        case 0x37f558u: goto label_37f558;
        case 0x37f55cu: goto label_37f55c;
        case 0x37f560u: goto label_37f560;
        case 0x37f564u: goto label_37f564;
        case 0x37f568u: goto label_37f568;
        case 0x37f56cu: goto label_37f56c;
        case 0x37f570u: goto label_37f570;
        case 0x37f574u: goto label_37f574;
        case 0x37f578u: goto label_37f578;
        case 0x37f57cu: goto label_37f57c;
        case 0x37f580u: goto label_37f580;
        case 0x37f584u: goto label_37f584;
        case 0x37f588u: goto label_37f588;
        case 0x37f58cu: goto label_37f58c;
        case 0x37f590u: goto label_37f590;
        case 0x37f594u: goto label_37f594;
        case 0x37f598u: goto label_37f598;
        case 0x37f59cu: goto label_37f59c;
        case 0x37f5a0u: goto label_37f5a0;
        case 0x37f5a4u: goto label_37f5a4;
        case 0x37f5a8u: goto label_37f5a8;
        case 0x37f5acu: goto label_37f5ac;
        case 0x37f5b0u: goto label_37f5b0;
        case 0x37f5b4u: goto label_37f5b4;
        case 0x37f5b8u: goto label_37f5b8;
        case 0x37f5bcu: goto label_37f5bc;
        case 0x37f5c0u: goto label_37f5c0;
        case 0x37f5c4u: goto label_37f5c4;
        case 0x37f5c8u: goto label_37f5c8;
        case 0x37f5ccu: goto label_37f5cc;
        case 0x37f5d0u: goto label_37f5d0;
        case 0x37f5d4u: goto label_37f5d4;
        case 0x37f5d8u: goto label_37f5d8;
        case 0x37f5dcu: goto label_37f5dc;
        case 0x37f5e0u: goto label_37f5e0;
        case 0x37f5e4u: goto label_37f5e4;
        case 0x37f5e8u: goto label_37f5e8;
        case 0x37f5ecu: goto label_37f5ec;
        case 0x37f5f0u: goto label_37f5f0;
        case 0x37f5f4u: goto label_37f5f4;
        case 0x37f5f8u: goto label_37f5f8;
        case 0x37f5fcu: goto label_37f5fc;
        case 0x37f600u: goto label_37f600;
        case 0x37f604u: goto label_37f604;
        case 0x37f608u: goto label_37f608;
        case 0x37f60cu: goto label_37f60c;
        case 0x37f610u: goto label_37f610;
        case 0x37f614u: goto label_37f614;
        case 0x37f618u: goto label_37f618;
        case 0x37f61cu: goto label_37f61c;
        case 0x37f620u: goto label_37f620;
        case 0x37f624u: goto label_37f624;
        case 0x37f628u: goto label_37f628;
        case 0x37f62cu: goto label_37f62c;
        case 0x37f630u: goto label_37f630;
        case 0x37f634u: goto label_37f634;
        case 0x37f638u: goto label_37f638;
        case 0x37f63cu: goto label_37f63c;
        case 0x37f640u: goto label_37f640;
        case 0x37f644u: goto label_37f644;
        case 0x37f648u: goto label_37f648;
        case 0x37f64cu: goto label_37f64c;
        case 0x37f650u: goto label_37f650;
        case 0x37f654u: goto label_37f654;
        case 0x37f658u: goto label_37f658;
        case 0x37f65cu: goto label_37f65c;
        case 0x37f660u: goto label_37f660;
        case 0x37f664u: goto label_37f664;
        case 0x37f668u: goto label_37f668;
        case 0x37f66cu: goto label_37f66c;
        case 0x37f670u: goto label_37f670;
        case 0x37f674u: goto label_37f674;
        case 0x37f678u: goto label_37f678;
        case 0x37f67cu: goto label_37f67c;
        case 0x37f680u: goto label_37f680;
        case 0x37f684u: goto label_37f684;
        case 0x37f688u: goto label_37f688;
        case 0x37f68cu: goto label_37f68c;
        case 0x37f690u: goto label_37f690;
        case 0x37f694u: goto label_37f694;
        case 0x37f698u: goto label_37f698;
        case 0x37f69cu: goto label_37f69c;
        case 0x37f6a0u: goto label_37f6a0;
        case 0x37f6a4u: goto label_37f6a4;
        case 0x37f6a8u: goto label_37f6a8;
        case 0x37f6acu: goto label_37f6ac;
        case 0x37f6b0u: goto label_37f6b0;
        case 0x37f6b4u: goto label_37f6b4;
        case 0x37f6b8u: goto label_37f6b8;
        case 0x37f6bcu: goto label_37f6bc;
        case 0x37f6c0u: goto label_37f6c0;
        case 0x37f6c4u: goto label_37f6c4;
        case 0x37f6c8u: goto label_37f6c8;
        case 0x37f6ccu: goto label_37f6cc;
        case 0x37f6d0u: goto label_37f6d0;
        case 0x37f6d4u: goto label_37f6d4;
        case 0x37f6d8u: goto label_37f6d8;
        case 0x37f6dcu: goto label_37f6dc;
        case 0x37f6e0u: goto label_37f6e0;
        case 0x37f6e4u: goto label_37f6e4;
        case 0x37f6e8u: goto label_37f6e8;
        case 0x37f6ecu: goto label_37f6ec;
        case 0x37f6f0u: goto label_37f6f0;
        case 0x37f6f4u: goto label_37f6f4;
        case 0x37f6f8u: goto label_37f6f8;
        case 0x37f6fcu: goto label_37f6fc;
        case 0x37f700u: goto label_37f700;
        case 0x37f704u: goto label_37f704;
        case 0x37f708u: goto label_37f708;
        case 0x37f70cu: goto label_37f70c;
        case 0x37f710u: goto label_37f710;
        case 0x37f714u: goto label_37f714;
        case 0x37f718u: goto label_37f718;
        case 0x37f71cu: goto label_37f71c;
        case 0x37f720u: goto label_37f720;
        case 0x37f724u: goto label_37f724;
        case 0x37f728u: goto label_37f728;
        case 0x37f72cu: goto label_37f72c;
        case 0x37f730u: goto label_37f730;
        case 0x37f734u: goto label_37f734;
        case 0x37f738u: goto label_37f738;
        case 0x37f73cu: goto label_37f73c;
        case 0x37f740u: goto label_37f740;
        case 0x37f744u: goto label_37f744;
        case 0x37f748u: goto label_37f748;
        case 0x37f74cu: goto label_37f74c;
        case 0x37f750u: goto label_37f750;
        case 0x37f754u: goto label_37f754;
        case 0x37f758u: goto label_37f758;
        case 0x37f75cu: goto label_37f75c;
        case 0x37f760u: goto label_37f760;
        case 0x37f764u: goto label_37f764;
        case 0x37f768u: goto label_37f768;
        case 0x37f76cu: goto label_37f76c;
        case 0x37f770u: goto label_37f770;
        case 0x37f774u: goto label_37f774;
        case 0x37f778u: goto label_37f778;
        case 0x37f77cu: goto label_37f77c;
        case 0x37f780u: goto label_37f780;
        case 0x37f784u: goto label_37f784;
        case 0x37f788u: goto label_37f788;
        case 0x37f78cu: goto label_37f78c;
        case 0x37f790u: goto label_37f790;
        case 0x37f794u: goto label_37f794;
        case 0x37f798u: goto label_37f798;
        case 0x37f79cu: goto label_37f79c;
        case 0x37f7a0u: goto label_37f7a0;
        case 0x37f7a4u: goto label_37f7a4;
        case 0x37f7a8u: goto label_37f7a8;
        case 0x37f7acu: goto label_37f7ac;
        case 0x37f7b0u: goto label_37f7b0;
        case 0x37f7b4u: goto label_37f7b4;
        case 0x37f7b8u: goto label_37f7b8;
        case 0x37f7bcu: goto label_37f7bc;
        case 0x37f7c0u: goto label_37f7c0;
        case 0x37f7c4u: goto label_37f7c4;
        case 0x37f7c8u: goto label_37f7c8;
        case 0x37f7ccu: goto label_37f7cc;
        case 0x37f7d0u: goto label_37f7d0;
        case 0x37f7d4u: goto label_37f7d4;
        case 0x37f7d8u: goto label_37f7d8;
        case 0x37f7dcu: goto label_37f7dc;
        case 0x37f7e0u: goto label_37f7e0;
        case 0x37f7e4u: goto label_37f7e4;
        case 0x37f7e8u: goto label_37f7e8;
        case 0x37f7ecu: goto label_37f7ec;
        case 0x37f7f0u: goto label_37f7f0;
        case 0x37f7f4u: goto label_37f7f4;
        case 0x37f7f8u: goto label_37f7f8;
        case 0x37f7fcu: goto label_37f7fc;
        case 0x37f800u: goto label_37f800;
        case 0x37f804u: goto label_37f804;
        case 0x37f808u: goto label_37f808;
        case 0x37f80cu: goto label_37f80c;
        case 0x37f810u: goto label_37f810;
        case 0x37f814u: goto label_37f814;
        case 0x37f818u: goto label_37f818;
        case 0x37f81cu: goto label_37f81c;
        case 0x37f820u: goto label_37f820;
        case 0x37f824u: goto label_37f824;
        case 0x37f828u: goto label_37f828;
        case 0x37f82cu: goto label_37f82c;
        case 0x37f830u: goto label_37f830;
        case 0x37f834u: goto label_37f834;
        case 0x37f838u: goto label_37f838;
        case 0x37f83cu: goto label_37f83c;
        case 0x37f840u: goto label_37f840;
        case 0x37f844u: goto label_37f844;
        case 0x37f848u: goto label_37f848;
        case 0x37f84cu: goto label_37f84c;
        case 0x37f850u: goto label_37f850;
        case 0x37f854u: goto label_37f854;
        case 0x37f858u: goto label_37f858;
        case 0x37f85cu: goto label_37f85c;
        case 0x37f860u: goto label_37f860;
        case 0x37f864u: goto label_37f864;
        case 0x37f868u: goto label_37f868;
        case 0x37f86cu: goto label_37f86c;
        case 0x37f870u: goto label_37f870;
        case 0x37f874u: goto label_37f874;
        case 0x37f878u: goto label_37f878;
        case 0x37f87cu: goto label_37f87c;
        case 0x37f880u: goto label_37f880;
        case 0x37f884u: goto label_37f884;
        case 0x37f888u: goto label_37f888;
        case 0x37f88cu: goto label_37f88c;
        case 0x37f890u: goto label_37f890;
        case 0x37f894u: goto label_37f894;
        case 0x37f898u: goto label_37f898;
        case 0x37f89cu: goto label_37f89c;
        case 0x37f8a0u: goto label_37f8a0;
        case 0x37f8a4u: goto label_37f8a4;
        case 0x37f8a8u: goto label_37f8a8;
        case 0x37f8acu: goto label_37f8ac;
        default: break;
    }

    ctx->pc = 0x37f550u;

label_37f550:
    // 0x37f550: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37f550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_37f554:
    // 0x37f554: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37f554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37f558:
    // 0x37f558: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x37f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_37f55c:
    // 0x37f55c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x37f55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_37f560:
    // 0x37f560: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x37f560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_37f564:
    // 0x37f564: 0x3c170065  lui         $s7, 0x65
    ctx->pc = 0x37f564u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)101 << 16));
label_37f568:
    // 0x37f568: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x37f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_37f56c:
    // 0x37f56c: 0x3c160065  lui         $s6, 0x65
    ctx->pc = 0x37f56cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)101 << 16));
label_37f570:
    // 0x37f570: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37f570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_37f574:
    // 0x37f574: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x37f574u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37f578:
    // 0x37f578: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37f578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_37f57c:
    // 0x37f57c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x37f57cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37f580:
    // 0x37f580: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37f580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37f584:
    // 0x37f584: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x37f584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37f588:
    // 0x37f588: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37f588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37f58c:
    // 0x37f58c: 0x26f75740  addiu       $s7, $s7, 0x5740
    ctx->pc = 0x37f58cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 22336));
label_37f590:
    // 0x37f590: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37f590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37f594:
    // 0x37f594: 0x26d65730  addiu       $s6, $s6, 0x5730
    ctx->pc = 0x37f594u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 22320));
label_37f598:
    // 0x37f598: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37f598u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_37f59c:
    // 0x37f59c: 0x241203e8  addiu       $s2, $zero, 0x3E8
    ctx->pc = 0x37f59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_37f5a0:
    // 0x37f5a0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37f5a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37f5a4:
    // 0x37f5a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37f5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f5a8:
    // 0x37f5a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37f5a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37f5ac:
    // 0x37f5ac: 0x8c8500d8  lw          $a1, 0xD8($a0)
    ctx->pc = 0x37f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_37f5b0:
    // 0x37f5b0: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x37f5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37f5b4:
    // 0x37f5b4: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x37f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_37f5b8:
    // 0x37f5b8: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x37f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_37f5bc:
    // 0x37f5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37f5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f5c0:
    // 0x37f5c0: 0x0  nop
    ctx->pc = 0x37f5c0u;
    // NOP
label_37f5c4:
    // 0x37f5c4: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37f5c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37f5c8:
    // 0x37f5c8: 0x2462ffd3  addiu       $v0, $v1, -0x2D
    ctx->pc = 0x37f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_37f5cc:
    // 0x37f5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37f5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f5d0:
    // 0x37f5d0: 0x6800024  bltz        $s4, . + 4 + (0x24 << 2)
label_37f5d4:
    if (ctx->pc == 0x37F5D4u) {
        ctx->pc = 0x37F5D4u;
            // 0x37f5d4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37F5D8u;
        goto label_37f5d8;
    }
    ctx->pc = 0x37F5D0u;
    {
        const bool branch_taken_0x37f5d0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x37F5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F5D0u;
            // 0x37f5d4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f5d0) {
            ctx->pc = 0x37F664u;
            goto label_37f664;
        }
    }
    ctx->pc = 0x37F5D8u;
label_37f5d8:
    // 0x37f5d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37f5dc:
    // 0x37f5dc: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37f5e0:
    // 0x37f5e0: 0xc0506ac  jal         func_141AB0
label_37f5e4:
    if (ctx->pc == 0x37F5E4u) {
        ctx->pc = 0x37F5E4u;
            // 0x37f5e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37F5E8u;
        goto label_37f5e8;
    }
    ctx->pc = 0x37F5E0u;
    SET_GPR_U32(ctx, 31, 0x37F5E8u);
    ctx->pc = 0x37F5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F5E0u;
            // 0x37f5e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F5E8u; }
        if (ctx->pc != 0x37F5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F5E8u; }
        if (ctx->pc != 0x37F5E8u) { return; }
    }
    ctx->pc = 0x37F5E8u;
label_37f5e8:
    // 0x37f5e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37f5e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37f5ec:
    // 0x37f5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f5f0:
    // 0x37f5f0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37f5f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37f5f4:
    // 0x37f5f4: 0x320f809  jalr        $t9
label_37f5f8:
    if (ctx->pc == 0x37F5F8u) {
        ctx->pc = 0x37F5F8u;
            // 0x37f5f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37F5FCu;
        goto label_37f5fc;
    }
    ctx->pc = 0x37F5F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F5FCu);
        ctx->pc = 0x37F5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F5F4u;
            // 0x37f5f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F5FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F5FCu; }
            if (ctx->pc != 0x37F5FCu) { return; }
        }
        }
    }
    ctx->pc = 0x37F5FCu;
label_37f5fc:
    // 0x37f5fc: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x37f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_37f600:
    // 0x37f600: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x37f600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_37f604:
    // 0x37f604: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x37f604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_37f608:
    // 0x37f608: 0x86c80002  lh          $t0, 0x2($s6)
    ctx->pc = 0x37f608u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_37f60c:
    // 0x37f60c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x37f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f610:
    // 0x37f610: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37f610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37f614:
    // 0x37f614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37f614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37f618:
    // 0x37f618: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37f618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37f61c:
    // 0x37f61c: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f620:
    // 0x37f620: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f624:
    // 0x37f624: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x37f624u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37f628:
    // 0x37f628: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37f628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37f62c:
    // 0x37f62c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37f62cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f630:
    // 0x37f630: 0x0  nop
    ctx->pc = 0x37f630u;
    // NOP
label_37f634:
    // 0x37f634: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37f634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37f638:
    // 0x37f638: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x37f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f63c:
    // 0x37f63c: 0x46800c20  cvt.s.w     $f16, $f1
    ctx->pc = 0x37f63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37f640:
    // 0x37f640: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37f640u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37f644:
    // 0x37f644: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37f644u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37f648:
    // 0x37f648: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37f648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37f64c:
    // 0x37f64c: 0xc0bc284  jal         func_2F0A10
label_37f650:
    if (ctx->pc == 0x37F650u) {
        ctx->pc = 0x37F650u;
            // 0x37f650: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37F654u;
        goto label_37f654;
    }
    ctx->pc = 0x37F64Cu;
    SET_GPR_U32(ctx, 31, 0x37F654u);
    ctx->pc = 0x37F650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F64Cu;
            // 0x37f650: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F654u; }
        if (ctx->pc != 0x37F654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F654u; }
        if (ctx->pc != 0x37F654u) { return; }
    }
    ctx->pc = 0x37F654u;
label_37f654:
    // 0x37f654: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37f654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37f658:
    // 0x37f658: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37f658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37f65c:
    // 0x37f65c: 0x320f809  jalr        $t9
label_37f660:
    if (ctx->pc == 0x37F660u) {
        ctx->pc = 0x37F660u;
            // 0x37f660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37F664u;
        goto label_37f664;
    }
    ctx->pc = 0x37F65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F664u);
        ctx->pc = 0x37F660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F65Cu;
            // 0x37f660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F664u; }
            if (ctx->pc != 0x37F664u) { return; }
        }
        }
    }
    ctx->pc = 0x37F664u;
label_37f664:
    // 0x37f664: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37f664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37f668:
    // 0x37f668: 0x5263000c  beql        $s3, $v1, . + 4 + (0xC << 2)
label_37f66c:
    if (ctx->pc == 0x37F66Cu) {
        ctx->pc = 0x37F66Cu;
            // 0x37f66c: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->pc = 0x37F670u;
        goto label_37f670;
    }
    ctx->pc = 0x37F668u;
    {
        const bool branch_taken_0x37f668 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x37f668) {
            ctx->pc = 0x37F66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37F668u;
            // 0x37f66c: 0x241203e8  addiu       $s2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37F69Cu;
            goto label_37f69c;
        }
    }
    ctx->pc = 0x37F670u;
label_37f670:
    // 0x37f670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37f674:
    // 0x37f674: 0x52620007  beql        $s3, $v0, . + 4 + (0x7 << 2)
label_37f678:
    if (ctx->pc == 0x37F678u) {
        ctx->pc = 0x37F678u;
            // 0x37f678: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37F67Cu;
        goto label_37f67c;
    }
    ctx->pc = 0x37F674u;
    {
        const bool branch_taken_0x37f674 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x37f674) {
            ctx->pc = 0x37F678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37F674u;
            // 0x37f678: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37F694u;
            goto label_37f694;
        }
    }
    ctx->pc = 0x37F67Cu;
label_37f67c:
    // 0x37f67c: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
label_37f680:
    if (ctx->pc == 0x37F680u) {
        ctx->pc = 0x37F680u;
            // 0x37f680: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37F684u;
        goto label_37f684;
    }
    ctx->pc = 0x37F67Cu;
    {
        const bool branch_taken_0x37f67c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f67c) {
            ctx->pc = 0x37F680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37F67Cu;
            // 0x37f680: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37F68Cu;
            goto label_37f68c;
        }
    }
    ctx->pc = 0x37F684u;
label_37f684:
    // 0x37f684: 0x10000006  b           . + 4 + (0x6 << 2)
label_37f688:
    if (ctx->pc == 0x37F688u) {
        ctx->pc = 0x37F68Cu;
        goto label_37f68c;
    }
    ctx->pc = 0x37F684u;
    {
        const bool branch_taken_0x37f684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f684) {
            ctx->pc = 0x37F6A0u;
            goto label_37f6a0;
        }
    }
    ctx->pc = 0x37F68Cu;
label_37f68c:
    // 0x37f68c: 0x10000004  b           . + 4 + (0x4 << 2)
label_37f690:
    if (ctx->pc == 0x37F690u) {
        ctx->pc = 0x37F690u;
            // 0x37f690: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x37F694u;
        goto label_37f694;
    }
    ctx->pc = 0x37F68Cu;
    {
        const bool branch_taken_0x37f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F68Cu;
            // 0x37f690: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f68c) {
            ctx->pc = 0x37F6A0u;
            goto label_37f6a0;
        }
    }
    ctx->pc = 0x37F694u;
label_37f694:
    // 0x37f694: 0x10000002  b           . + 4 + (0x2 << 2)
label_37f698:
    if (ctx->pc == 0x37F698u) {
        ctx->pc = 0x37F698u;
            // 0x37f698: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x37F69Cu;
        goto label_37f69c;
    }
    ctx->pc = 0x37F694u;
    {
        const bool branch_taken_0x37f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F694u;
            // 0x37f698: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f694) {
            ctx->pc = 0x37F6A0u;
            goto label_37f6a0;
        }
    }
    ctx->pc = 0x37F69Cu;
label_37f69c:
    // 0x37f69c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37f69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f6a0:
    // 0x37f6a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37f6a4:
    // 0x37f6a4: 0x8eb600dc  lw          $s6, 0xDC($s5)
    ctx->pc = 0x37f6a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
label_37f6a8:
    // 0x37f6a8: 0x8c430eac  lw          $v1, 0xEAC($v0)
    ctx->pc = 0x37f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_37f6ac:
    // 0x37f6ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37f6b0:
    // 0x37f6b0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x37f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_37f6b4:
    // 0x37f6b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_37f6b8:
    // 0x37f6b8: 0x29880  sll         $s3, $v0, 2
    ctx->pc = 0x37f6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37f6bc:
    // 0x37f6bc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x37f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_37f6c0:
    // 0x37f6c0: 0xc157054  jal         func_55C150
label_37f6c4:
    if (ctx->pc == 0x37F6C4u) {
        ctx->pc = 0x37F6C4u;
            // 0x37f6c4: 0x53a023  subu        $s4, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x37F6C8u;
        goto label_37f6c8;
    }
    ctx->pc = 0x37F6C0u;
    SET_GPR_U32(ctx, 31, 0x37F6C8u);
    ctx->pc = 0x37F6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F6C0u;
            // 0x37f6c4: 0x53a023  subu        $s4, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F6C8u; }
        if (ctx->pc != 0x37F6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F6C8u; }
        if (ctx->pc != 0x37F6C8u) { return; }
    }
    ctx->pc = 0x37F6C8u;
label_37f6c8:
    // 0x37f6c8: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x37f6c8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37f6cc:
    // 0x37f6cc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37f6d0:
    // 0x37f6d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37f6d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37f6d4:
    // 0x37f6d4: 0x8ea400b0  lw          $a0, 0xB0($s5)
    ctx->pc = 0x37f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_37f6d8:
    // 0x37f6d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f6d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37f6dc:
    // 0x37f6dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f6dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37f6e0:
    // 0x37f6e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37f6e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37f6e4:
    // 0x37f6e4: 0xc440a21c  lwc1        $f0, -0x5DE4($v0)
    ctx->pc = 0x37f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f6e8:
    // 0x37f6e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37f6ec:
    // 0x37f6ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f6ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37f6f0:
    // 0x37f6f0: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x37f6f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_37f6f4:
    // 0x37f6f4: 0xc156fc8  jal         func_55BF20
label_37f6f8:
    if (ctx->pc == 0x37F6F8u) {
        ctx->pc = 0x37F6F8u;
            // 0x37f6f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37F6FCu;
        goto label_37f6fc;
    }
    ctx->pc = 0x37F6F4u;
    SET_GPR_U32(ctx, 31, 0x37F6FCu);
    ctx->pc = 0x37F6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F6F4u;
            // 0x37f6f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF20u;
    if (runtime->hasFunction(0x55BF20u)) {
        auto targetFn = runtime->lookupFunction(0x55BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F6FCu; }
        if (ctx->pc != 0x37F6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF20_0x55bf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F6FCu; }
        if (ctx->pc != 0x37F6FCu) { return; }
    }
    ctx->pc = 0x37F6FCu;
label_37f6fc:
    // 0x37f6fc: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x37f6fcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37f700:
    // 0x37f700: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37f700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37f704:
    // 0x37f704: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37f704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37f708:
    // 0x37f708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37f708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37f70c:
    // 0x37f70c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37f70cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37f710:
    // 0x37f710: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f710u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_37f714:
    // 0x37f714: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x37f714u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f718:
    // 0x37f718: 0x0  nop
    ctx->pc = 0x37f718u;
    // NOP
label_37f71c:
    // 0x37f71c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x37f71cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_37f720:
    // 0x37f720: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x37f720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_37f724:
    // 0x37f724: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x37f724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37f728:
    // 0x37f728: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x37f728u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f72c:
    // 0x37f72c: 0x0  nop
    ctx->pc = 0x37f72cu;
    // NOP
label_37f730:
    // 0x37f730: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x37f730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_37f734:
    // 0x37f734: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x37f734u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f738:
    // 0x37f738: 0xc4449c98  lwc1        $f4, -0x6368($v0)
    ctx->pc = 0x37f738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37f73c:
    // 0x37f73c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x37f73cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_37f740:
    // 0x37f740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37f740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_37f744:
    // 0x37f744: 0x4603205d  msub.s      $f1, $f4, $f3
    ctx->pc = 0x37f744u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_37f748:
    // 0x37f748: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37f748u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_37f74c:
    // 0x37f74c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37f74cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37f750:
    // 0x37f750: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x37f750u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37f754:
    // 0x37f754: 0xc157054  jal         func_55C150
label_37f758:
    if (ctx->pc == 0x37F758u) {
        ctx->pc = 0x37F758u;
            // 0x37f758: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x37F75Cu;
        goto label_37f75c;
    }
    ctx->pc = 0x37F754u;
    SET_GPR_U32(ctx, 31, 0x37F75Cu);
    ctx->pc = 0x37F758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F754u;
            // 0x37f758: 0x4600ad86  mov.s       $f22, $f21 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F75Cu; }
        if (ctx->pc != 0x37F75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F75Cu; }
        if (ctx->pc != 0x37F75Cu) { return; }
    }
    ctx->pc = 0x37F75Cu;
label_37f75c:
    // 0x37f75c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37f760:
    // 0x37f760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f764:
    // 0x37f764: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x37f764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_37f768:
    // 0x37f768: 0xc0506ac  jal         func_141AB0
label_37f76c:
    if (ctx->pc == 0x37F76Cu) {
        ctx->pc = 0x37F76Cu;
            // 0x37f76c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37F770u;
        goto label_37f770;
    }
    ctx->pc = 0x37F768u;
    SET_GPR_U32(ctx, 31, 0x37F770u);
    ctx->pc = 0x37F76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F768u;
            // 0x37f76c: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F770u; }
        if (ctx->pc != 0x37F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F770u; }
        if (ctx->pc != 0x37F770u) { return; }
    }
    ctx->pc = 0x37F770u;
label_37f770:
    // 0x37f770: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37f770u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37f774:
    // 0x37f774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f778:
    // 0x37f778: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37f778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37f77c:
    // 0x37f77c: 0x320f809  jalr        $t9
label_37f780:
    if (ctx->pc == 0x37F780u) {
        ctx->pc = 0x37F780u;
            // 0x37f780: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37F784u;
        goto label_37f784;
    }
    ctx->pc = 0x37F77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F784u);
        ctx->pc = 0x37F780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F77Cu;
            // 0x37f780: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F784u; }
            if (ctx->pc != 0x37F784u) { return; }
        }
        }
    }
    ctx->pc = 0x37F784u;
label_37f784:
    // 0x37f784: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37f784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37f788:
    // 0x37f788: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x37f788u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_37f78c:
    // 0x37f78c: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x37f78cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_37f790:
    // 0x37f790: 0x2631a210  addiu       $s1, $s1, -0x5DF0
    ctx->pc = 0x37f790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943248));
label_37f794:
    // 0x37f794: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x37f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37f798:
    // 0x37f798: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37f798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37f79c:
    // 0x37f79c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x37f79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f7a0:
    // 0x37f7a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x37f7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37f7a4:
    // 0x37f7a4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37f7a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37f7a8:
    // 0x37f7a8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x37f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37f7ac:
    // 0x37f7ac: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37f7acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37f7b0:
    // 0x37f7b0: 0x84482102  lh          $t0, 0x2102($v0)
    ctx->pc = 0x37f7b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_37f7b4:
    // 0x37f7b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37f7b8:
    // 0x37f7b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f7bc:
    // 0x37f7bc: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f7c0:
    // 0x37f7c0: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37f7c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37f7c4:
    // 0x37f7c4: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x37f7c4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37f7c8:
    // 0x37f7c8: 0x0  nop
    ctx->pc = 0x37f7c8u;
    // NOP
label_37f7cc:
    // 0x37f7cc: 0x46801460  cvt.s.w     $f17, $f2
    ctx->pc = 0x37f7ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37f7d0:
    // 0x37f7d0: 0x4601a341  sub.s       $f13, $f20, $f1
    ctx->pc = 0x37f7d0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_37f7d4:
    // 0x37f7d4: 0x4600ab80  add.s       $f14, $f21, $f0
    ctx->pc = 0x37f7d4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_37f7d8:
    // 0x37f7d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37f7d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37f7dc:
    // 0x37f7dc: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37f7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37f7e0:
    // 0x37f7e0: 0xc0bc284  jal         func_2F0A10
label_37f7e4:
    if (ctx->pc == 0x37F7E4u) {
        ctx->pc = 0x37F7E4u;
            // 0x37f7e4: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37F7E8u;
        goto label_37f7e8;
    }
    ctx->pc = 0x37F7E0u;
    SET_GPR_U32(ctx, 31, 0x37F7E8u);
    ctx->pc = 0x37F7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F7E0u;
            // 0x37f7e4: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F7E8u; }
        if (ctx->pc != 0x37F7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F7E8u; }
        if (ctx->pc != 0x37F7E8u) { return; }
    }
    ctx->pc = 0x37F7E8u;
label_37f7e8:
    // 0x37f7e8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x37f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f7ec:
    // 0x37f7ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37f7ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37f7f0:
    // 0x37f7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37f7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37f7f4:
    // 0x37f7f4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37f7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37f7f8:
    // 0x37f7f8: 0x320f809  jalr        $t9
label_37f7fc:
    if (ctx->pc == 0x37F7FCu) {
        ctx->pc = 0x37F7FCu;
            // 0x37f7fc: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x37F800u;
        goto label_37f800;
    }
    ctx->pc = 0x37F7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37F800u);
        ctx->pc = 0x37F7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F7F8u;
            // 0x37f7fc: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37F800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37F800u; }
            if (ctx->pc != 0x37F800u) { return; }
        }
        }
    }
    ctx->pc = 0x37F800u;
label_37f800:
    // 0x37f800: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x37f800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_37f804:
    // 0x37f804: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37f804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37f808:
    // 0x37f808: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x37f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
label_37f80c:
    // 0x37f80c: 0x8ea400b0  lw          $a0, 0xB0($s5)
    ctx->pc = 0x37f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_37f810:
    // 0x37f810: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x37f810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37f814:
    // 0x37f814: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37f818:
    // 0x37f818: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37f818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37f81c:
    // 0x37f81c: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37f81cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37f820:
    // 0x37f820: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37f824:
    // 0x37f824: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37f824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37f828:
    // 0x37f828: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f82c:
    // 0x37f82c: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37f82cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37f830:
    // 0x37f830: 0xc156fdc  jal         func_55BF70
label_37f834:
    if (ctx->pc == 0x37F834u) {
        ctx->pc = 0x37F834u;
            // 0x37f834: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->pc = 0x37F838u;
        goto label_37f838;
    }
    ctx->pc = 0x37F830u;
    SET_GPR_U32(ctx, 31, 0x37F838u);
    ctx->pc = 0x37F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F830u;
            // 0x37f834: 0x344623ff  ori         $a2, $v0, 0x23FF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55BF70u;
    if (runtime->hasFunction(0x55BF70u)) {
        auto targetFn = runtime->lookupFunction(0x55BF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F838u; }
        if (ctx->pc != 0x37F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055BF70_0x55bf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F838u; }
        if (ctx->pc != 0x37F838u) { return; }
    }
    ctx->pc = 0x37F838u;
label_37f838:
    // 0x37f838: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x37f838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_37f83c:
    // 0x37f83c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37f840:
    // 0x37f840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37f840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37f844:
    // 0x37f844: 0x8ea400a0  lw          $a0, 0xA0($s5)
    ctx->pc = 0x37f844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_37f848:
    // 0x37f848: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x37f848u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_37f84c:
    // 0x37f84c: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37f850:
    // 0x37f850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37f850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37f854:
    // 0x37f854: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37f854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37f858:
    // 0x37f858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37f858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37f85c:
    // 0x37f85c: 0xc6ae00bc  lwc1        $f14, 0xBC($s5)
    ctx->pc = 0x37f85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_37f860:
    // 0x37f860: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x37f860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37f864:
    // 0x37f864: 0xc15706c  jal         func_55C1B0
label_37f868:
    if (ctx->pc == 0x37F868u) {
        ctx->pc = 0x37F868u;
            // 0x37f868: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x37F86Cu;
        goto label_37f86c;
    }
    ctx->pc = 0x37F864u;
    SET_GPR_U32(ctx, 31, 0x37F86Cu);
    ctx->pc = 0x37F868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37F864u;
            // 0x37f868: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F86Cu; }
        if (ctx->pc != 0x37F86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37F86Cu; }
        if (ctx->pc != 0x37F86Cu) { return; }
    }
    ctx->pc = 0x37F86Cu;
label_37f86c:
    // 0x37f86c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x37f86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_37f870:
    // 0x37f870: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x37f870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_37f874:
    // 0x37f874: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x37f874u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37f878:
    // 0x37f878: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37f878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37f87c:
    // 0x37f87c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x37f87cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37f880:
    // 0x37f880: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37f880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37f884:
    // 0x37f884: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x37f884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37f888:
    // 0x37f888: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37f888u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37f88c:
    // 0x37f88c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37f88cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37f890:
    // 0x37f890: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37f890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37f894:
    // 0x37f894: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37f894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37f898:
    // 0x37f898: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37f898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37f89c:
    // 0x37f89c: 0x3e00008  jr          $ra
label_37f8a0:
    if (ctx->pc == 0x37F8A0u) {
        ctx->pc = 0x37F8A0u;
            // 0x37f8a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x37F8A4u;
        goto label_37f8a4;
    }
    ctx->pc = 0x37F89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37F89Cu;
            // 0x37f8a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37F8A4u;
label_37f8a4:
    // 0x37f8a4: 0x0  nop
    ctx->pc = 0x37f8a4u;
    // NOP
label_37f8a8:
    // 0x37f8a8: 0x0  nop
    ctx->pc = 0x37f8a8u;
    // NOP
label_37f8ac:
    // 0x37f8ac: 0x0  nop
    ctx->pc = 0x37f8acu;
    // NOP
}
