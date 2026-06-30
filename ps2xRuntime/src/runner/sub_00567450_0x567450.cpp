#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00567450
// Address: 0x567450 - 0x567760
void sub_00567450_0x567450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00567450_0x567450");
#endif

    switch (ctx->pc) {
        case 0x567450u: goto label_567450;
        case 0x567454u: goto label_567454;
        case 0x567458u: goto label_567458;
        case 0x56745cu: goto label_56745c;
        case 0x567460u: goto label_567460;
        case 0x567464u: goto label_567464;
        case 0x567468u: goto label_567468;
        case 0x56746cu: goto label_56746c;
        case 0x567470u: goto label_567470;
        case 0x567474u: goto label_567474;
        case 0x567478u: goto label_567478;
        case 0x56747cu: goto label_56747c;
        case 0x567480u: goto label_567480;
        case 0x567484u: goto label_567484;
        case 0x567488u: goto label_567488;
        case 0x56748cu: goto label_56748c;
        case 0x567490u: goto label_567490;
        case 0x567494u: goto label_567494;
        case 0x567498u: goto label_567498;
        case 0x56749cu: goto label_56749c;
        case 0x5674a0u: goto label_5674a0;
        case 0x5674a4u: goto label_5674a4;
        case 0x5674a8u: goto label_5674a8;
        case 0x5674acu: goto label_5674ac;
        case 0x5674b0u: goto label_5674b0;
        case 0x5674b4u: goto label_5674b4;
        case 0x5674b8u: goto label_5674b8;
        case 0x5674bcu: goto label_5674bc;
        case 0x5674c0u: goto label_5674c0;
        case 0x5674c4u: goto label_5674c4;
        case 0x5674c8u: goto label_5674c8;
        case 0x5674ccu: goto label_5674cc;
        case 0x5674d0u: goto label_5674d0;
        case 0x5674d4u: goto label_5674d4;
        case 0x5674d8u: goto label_5674d8;
        case 0x5674dcu: goto label_5674dc;
        case 0x5674e0u: goto label_5674e0;
        case 0x5674e4u: goto label_5674e4;
        case 0x5674e8u: goto label_5674e8;
        case 0x5674ecu: goto label_5674ec;
        case 0x5674f0u: goto label_5674f0;
        case 0x5674f4u: goto label_5674f4;
        case 0x5674f8u: goto label_5674f8;
        case 0x5674fcu: goto label_5674fc;
        case 0x567500u: goto label_567500;
        case 0x567504u: goto label_567504;
        case 0x567508u: goto label_567508;
        case 0x56750cu: goto label_56750c;
        case 0x567510u: goto label_567510;
        case 0x567514u: goto label_567514;
        case 0x567518u: goto label_567518;
        case 0x56751cu: goto label_56751c;
        case 0x567520u: goto label_567520;
        case 0x567524u: goto label_567524;
        case 0x567528u: goto label_567528;
        case 0x56752cu: goto label_56752c;
        case 0x567530u: goto label_567530;
        case 0x567534u: goto label_567534;
        case 0x567538u: goto label_567538;
        case 0x56753cu: goto label_56753c;
        case 0x567540u: goto label_567540;
        case 0x567544u: goto label_567544;
        case 0x567548u: goto label_567548;
        case 0x56754cu: goto label_56754c;
        case 0x567550u: goto label_567550;
        case 0x567554u: goto label_567554;
        case 0x567558u: goto label_567558;
        case 0x56755cu: goto label_56755c;
        case 0x567560u: goto label_567560;
        case 0x567564u: goto label_567564;
        case 0x567568u: goto label_567568;
        case 0x56756cu: goto label_56756c;
        case 0x567570u: goto label_567570;
        case 0x567574u: goto label_567574;
        case 0x567578u: goto label_567578;
        case 0x56757cu: goto label_56757c;
        case 0x567580u: goto label_567580;
        case 0x567584u: goto label_567584;
        case 0x567588u: goto label_567588;
        case 0x56758cu: goto label_56758c;
        case 0x567590u: goto label_567590;
        case 0x567594u: goto label_567594;
        case 0x567598u: goto label_567598;
        case 0x56759cu: goto label_56759c;
        case 0x5675a0u: goto label_5675a0;
        case 0x5675a4u: goto label_5675a4;
        case 0x5675a8u: goto label_5675a8;
        case 0x5675acu: goto label_5675ac;
        case 0x5675b0u: goto label_5675b0;
        case 0x5675b4u: goto label_5675b4;
        case 0x5675b8u: goto label_5675b8;
        case 0x5675bcu: goto label_5675bc;
        case 0x5675c0u: goto label_5675c0;
        case 0x5675c4u: goto label_5675c4;
        case 0x5675c8u: goto label_5675c8;
        case 0x5675ccu: goto label_5675cc;
        case 0x5675d0u: goto label_5675d0;
        case 0x5675d4u: goto label_5675d4;
        case 0x5675d8u: goto label_5675d8;
        case 0x5675dcu: goto label_5675dc;
        case 0x5675e0u: goto label_5675e0;
        case 0x5675e4u: goto label_5675e4;
        case 0x5675e8u: goto label_5675e8;
        case 0x5675ecu: goto label_5675ec;
        case 0x5675f0u: goto label_5675f0;
        case 0x5675f4u: goto label_5675f4;
        case 0x5675f8u: goto label_5675f8;
        case 0x5675fcu: goto label_5675fc;
        case 0x567600u: goto label_567600;
        case 0x567604u: goto label_567604;
        case 0x567608u: goto label_567608;
        case 0x56760cu: goto label_56760c;
        case 0x567610u: goto label_567610;
        case 0x567614u: goto label_567614;
        case 0x567618u: goto label_567618;
        case 0x56761cu: goto label_56761c;
        case 0x567620u: goto label_567620;
        case 0x567624u: goto label_567624;
        case 0x567628u: goto label_567628;
        case 0x56762cu: goto label_56762c;
        case 0x567630u: goto label_567630;
        case 0x567634u: goto label_567634;
        case 0x567638u: goto label_567638;
        case 0x56763cu: goto label_56763c;
        case 0x567640u: goto label_567640;
        case 0x567644u: goto label_567644;
        case 0x567648u: goto label_567648;
        case 0x56764cu: goto label_56764c;
        case 0x567650u: goto label_567650;
        case 0x567654u: goto label_567654;
        case 0x567658u: goto label_567658;
        case 0x56765cu: goto label_56765c;
        case 0x567660u: goto label_567660;
        case 0x567664u: goto label_567664;
        case 0x567668u: goto label_567668;
        case 0x56766cu: goto label_56766c;
        case 0x567670u: goto label_567670;
        case 0x567674u: goto label_567674;
        case 0x567678u: goto label_567678;
        case 0x56767cu: goto label_56767c;
        case 0x567680u: goto label_567680;
        case 0x567684u: goto label_567684;
        case 0x567688u: goto label_567688;
        case 0x56768cu: goto label_56768c;
        case 0x567690u: goto label_567690;
        case 0x567694u: goto label_567694;
        case 0x567698u: goto label_567698;
        case 0x56769cu: goto label_56769c;
        case 0x5676a0u: goto label_5676a0;
        case 0x5676a4u: goto label_5676a4;
        case 0x5676a8u: goto label_5676a8;
        case 0x5676acu: goto label_5676ac;
        case 0x5676b0u: goto label_5676b0;
        case 0x5676b4u: goto label_5676b4;
        case 0x5676b8u: goto label_5676b8;
        case 0x5676bcu: goto label_5676bc;
        case 0x5676c0u: goto label_5676c0;
        case 0x5676c4u: goto label_5676c4;
        case 0x5676c8u: goto label_5676c8;
        case 0x5676ccu: goto label_5676cc;
        case 0x5676d0u: goto label_5676d0;
        case 0x5676d4u: goto label_5676d4;
        case 0x5676d8u: goto label_5676d8;
        case 0x5676dcu: goto label_5676dc;
        case 0x5676e0u: goto label_5676e0;
        case 0x5676e4u: goto label_5676e4;
        case 0x5676e8u: goto label_5676e8;
        case 0x5676ecu: goto label_5676ec;
        case 0x5676f0u: goto label_5676f0;
        case 0x5676f4u: goto label_5676f4;
        case 0x5676f8u: goto label_5676f8;
        case 0x5676fcu: goto label_5676fc;
        case 0x567700u: goto label_567700;
        case 0x567704u: goto label_567704;
        case 0x567708u: goto label_567708;
        case 0x56770cu: goto label_56770c;
        case 0x567710u: goto label_567710;
        case 0x567714u: goto label_567714;
        case 0x567718u: goto label_567718;
        case 0x56771cu: goto label_56771c;
        case 0x567720u: goto label_567720;
        case 0x567724u: goto label_567724;
        case 0x567728u: goto label_567728;
        case 0x56772cu: goto label_56772c;
        case 0x567730u: goto label_567730;
        case 0x567734u: goto label_567734;
        case 0x567738u: goto label_567738;
        case 0x56773cu: goto label_56773c;
        case 0x567740u: goto label_567740;
        case 0x567744u: goto label_567744;
        case 0x567748u: goto label_567748;
        case 0x56774cu: goto label_56774c;
        case 0x567750u: goto label_567750;
        case 0x567754u: goto label_567754;
        case 0x567758u: goto label_567758;
        case 0x56775cu: goto label_56775c;
        default: break;
    }

    ctx->pc = 0x567450u;

label_567450:
    // 0x567450: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x567450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_567454:
    // 0x567454: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x567454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_567458:
    // 0x567458: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x567458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_56745c:
    // 0x56745c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x56745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_567460:
    // 0x567460: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x567460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_567464:
    // 0x567464: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x567464u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_567468:
    // 0x567468: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x567468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_56746c:
    // 0x56746c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x56746cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_567470:
    // 0x567470: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x567470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_567474:
    // 0x567474: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x567474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_567478:
    // 0x567478: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x567478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_56747c:
    // 0x56747c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x56747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_567480:
    // 0x567480: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x567480u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_567484:
    // 0x567484: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x567484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
label_567488:
    // 0x567488: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x567488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_56748c:
    // 0x56748c: 0x2610fcf0  addiu       $s0, $s0, -0x310
    ctx->pc = 0x56748cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966512));
label_567490:
    // 0x567490: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x567490u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_567494:
    // 0x567494: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x567494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_567498:
    // 0x567498: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x567498u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_56749c:
    // 0x56749c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56749cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5674a0:
    // 0x5674a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5674a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5674a4:
    // 0x5674a4: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x5674a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_5674a8:
    // 0x5674a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5674a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5674ac:
    // 0x5674ac: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x5674acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_5674b0:
    // 0x5674b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5674b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5674b4:
    // 0x5674b4: 0x8c5589d8  lw          $s5, -0x7628($v0)
    ctx->pc = 0x5674b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937048)));
label_5674b8:
    // 0x5674b8: 0x8062003e  lb          $v0, 0x3E($v1)
    ctx->pc = 0x5674b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 62)));
label_5674bc:
    // 0x5674bc: 0x320f809  jalr        $t9
label_5674c0:
    if (ctx->pc == 0x5674C0u) {
        ctx->pc = 0x5674C0u;
            // 0x5674c0: 0x2453000d  addiu       $s3, $v0, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x5674C4u;
        goto label_5674c4;
    }
    ctx->pc = 0x5674BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5674C4u);
        ctx->pc = 0x5674C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5674BCu;
            // 0x5674c0: 0x2453000d  addiu       $s3, $v0, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5674C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5674C4u; }
            if (ctx->pc != 0x5674C4u) { return; }
        }
        }
    }
    ctx->pc = 0x5674C4u;
label_5674c4:
    // 0x5674c4: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x5674c4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5674c8:
    // 0x5674c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x5674c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5674cc:
    // 0x5674cc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x5674ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_5674d0:
    // 0x5674d0: 0x8e540010  lw          $s4, 0x10($s2)
    ctx->pc = 0x5674d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_5674d4:
    // 0x5674d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5674d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5674d8:
    // 0x5674d8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x5674d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_5674dc:
    // 0x5674dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x5674dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5674e0:
    // 0x5674e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5674e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5674e4:
    // 0x5674e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x5674e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5674e8:
    // 0x5674e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x5674e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5674ec:
    // 0x5674ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x5674ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5674f0:
    // 0x5674f0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x5674f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5674f4:
    // 0x5674f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x5674f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_5674f8:
    // 0x5674f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x5674f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_5674fc:
    // 0x5674fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5674fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_567500:
    // 0x567500: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x567500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_567504:
    // 0x567504: 0xc0ee398  jal         func_3B8E60
label_567508:
    if (ctx->pc == 0x567508u) {
        ctx->pc = 0x567508u;
            // 0x567508: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x56750Cu;
        goto label_56750c;
    }
    ctx->pc = 0x567504u;
    SET_GPR_U32(ctx, 31, 0x56750Cu);
    ctx->pc = 0x567508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567504u;
            // 0x567508: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E60u;
    if (runtime->hasFunction(0x3B8E60u)) {
        auto targetFn = runtime->lookupFunction(0x3B8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56750Cu; }
        if (ctx->pc != 0x56750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8E60_0x3b8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56750Cu; }
        if (ctx->pc != 0x56750Cu) { return; }
    }
    ctx->pc = 0x56750Cu;
label_56750c:
    // 0x56750c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x56750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_567510:
    // 0x567510: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x567510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
label_567514:
    // 0x567514: 0xc441fcf8  lwc1        $f1, -0x308($v0)
    ctx->pc = 0x567514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_567518:
    // 0x567518: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x567518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_56751c:
    // 0x56751c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x56751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_567520:
    // 0x567520: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x567520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_567524:
    // 0x567524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x567524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_567528:
    // 0x567528: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x567528u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_56752c:
    // 0x56752c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x56752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_567530:
    // 0x567530: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x567530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_567534:
    // 0x567534: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x567534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_567538:
    // 0x567538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x567538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56753c:
    // 0x56753c: 0x0  nop
    ctx->pc = 0x56753cu;
    // NOP
label_567540:
    // 0x567540: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x567540u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_567544:
    // 0x567544: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x567544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_567548:
    // 0x567548: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x567548u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_56754c:
    // 0x56754c: 0xc454fcfc  lwc1        $f20, -0x304($v0)
    ctx->pc = 0x56754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_567550:
    // 0x567550: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x567550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_567554:
    // 0x567554: 0x0  nop
    ctx->pc = 0x567554u;
    // NOP
label_567558:
    // 0x567558: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x567558u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_56755c:
    // 0x56755c: 0x320f809  jalr        $t9
label_567560:
    if (ctx->pc == 0x567560u) {
        ctx->pc = 0x567560u;
            // 0x567560: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x567564u;
        goto label_567564;
    }
    ctx->pc = 0x56755Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x567564u);
        ctx->pc = 0x567560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56755Cu;
            // 0x567560: 0x628823  subu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x567564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x567564u; }
            if (ctx->pc != 0x567564u) { return; }
        }
        }
    }
    ctx->pc = 0x567564u;
label_567564:
    // 0x567564: 0x4614a040  add.s       $f1, $f20, $f20
    ctx->pc = 0x567564u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_567568:
    // 0x567568: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x567568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_56756c:
    // 0x56756c: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x56756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_567570:
    // 0x567570: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x567570u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_567574:
    // 0x567574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x567574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_567578:
    // 0x567578: 0x0  nop
    ctx->pc = 0x567578u;
    // NOP
label_56757c:
    // 0x56757c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x56757cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_567580:
    // 0x567580: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
label_567584:
    if (ctx->pc == 0x567584u) {
        ctx->pc = 0x567584u;
            // 0x567584: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x567588u;
        goto label_567588;
    }
    ctx->pc = 0x567580u;
    {
        const bool branch_taken_0x567580 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x567584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567580u;
            // 0x567584: 0x46000bc2  mul.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x567580) {
            ctx->pc = 0x5675D0u;
            goto label_5675d0;
        }
    }
    ctx->pc = 0x567588u;
label_567588:
    // 0x567588: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x567588u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_56758c:
    // 0x56758c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x56758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_567590:
    // 0x567590: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x567590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_567594:
    // 0x567594: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x567594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_567598:
    // 0x567598: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x567598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_56759c:
    // 0x56759c: 0x44951000  mtc1        $s5, $f2
    ctx->pc = 0x56759cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_5675a0:
    // 0x5675a0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x5675a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5675a4:
    // 0x5675a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x5675a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_5675a8:
    // 0x5675a8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x5675a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5675ac:
    // 0x5675ac: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x5675acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_5675b0:
    // 0x5675b0: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x5675b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_5675b4:
    // 0x5675b4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x5675b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_5675b8:
    // 0x5675b8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x5675b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_5675bc:
    // 0x5675bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5675bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5675c0:
    // 0x5675c0: 0x46038300  add.s       $f12, $f16, $f3
    ctx->pc = 0x5675c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
label_5675c4:
    // 0x5675c4: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x5675c4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5675c8:
    // 0x5675c8: 0xc129cb4  jal         func_4A72D0
label_5675cc:
    if (ctx->pc == 0x5675CCu) {
        ctx->pc = 0x5675CCu;
            // 0x5675cc: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x5675D0u;
        goto label_5675d0;
    }
    ctx->pc = 0x5675C8u;
    SET_GPR_U32(ctx, 31, 0x5675D0u);
    ctx->pc = 0x5675CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5675C8u;
            // 0x5675cc: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A72D0u;
    if (runtime->hasFunction(0x4A72D0u)) {
        auto targetFn = runtime->lookupFunction(0x4A72D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5675D0u; }
        if (ctx->pc != 0x5675D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A72D0_0x4a72d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5675D0u; }
        if (ctx->pc != 0x5675D0u) { return; }
    }
    ctx->pc = 0x5675D0u;
label_5675d0:
    // 0x5675d0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x5675d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_5675d4:
    // 0x5675d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_5675d8:
    if (ctx->pc == 0x5675D8u) {
        ctx->pc = 0x5675D8u;
            // 0x5675d8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x5675DCu;
        goto label_5675dc;
    }
    ctx->pc = 0x5675D4u;
    {
        const bool branch_taken_0x5675d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x5675D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5675D4u;
            // 0x5675d8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5675d4) {
            ctx->pc = 0x5675F8u;
            goto label_5675f8;
        }
    }
    ctx->pc = 0x5675DCu;
label_5675dc:
    // 0x5675dc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x5675dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_5675e0:
    // 0x5675e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5675e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_5675e4:
    // 0x5675e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5675e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_5675e8:
    // 0x5675e8: 0x0  nop
    ctx->pc = 0x5675e8u;
    // NOP
label_5675ec:
    // 0x5675ec: 0x0  nop
    ctx->pc = 0x5675ecu;
    // NOP
label_5675f0:
    // 0x5675f0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_5675f4:
    if (ctx->pc == 0x5675F4u) {
        ctx->pc = 0x5675F8u;
        goto label_5675f8;
    }
    ctx->pc = 0x5675F0u;
    {
        const bool branch_taken_0x5675f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5675f0) {
            ctx->pc = 0x5675DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5675dc;
        }
    }
    ctx->pc = 0x5675F8u;
label_5675f8:
    // 0x5675f8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x5675f8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5675fc:
    // 0x5675fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5675fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_567600:
    // 0x567600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x567600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_567604:
    // 0x567604: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x567604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_567608:
    // 0x567608: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x567608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_56760c:
    // 0x56760c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x56760cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_567610:
    // 0x567610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x567610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_567614:
    // 0x567614: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x567614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_567618:
    // 0x567618: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x567618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_56761c:
    // 0x56761c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x56761cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567620:
    // 0x567620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x567620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567624:
    // 0x567624: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x567624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567628:
    // 0x567628: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x567628u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56762c:
    // 0x56762c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x56762cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_567630:
    // 0x567630: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x567630u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_567634:
    // 0x567634: 0x0  nop
    ctx->pc = 0x567634u;
    // NOP
label_567638:
    // 0x567638: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x567638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_56763c:
    // 0x56763c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x56763cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_567640:
    // 0x567640: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x567640u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_567644:
    // 0x567644: 0xc0ee334  jal         func_3B8CD0
label_567648:
    if (ctx->pc == 0x567648u) {
        ctx->pc = 0x567648u;
            // 0x567648: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x56764Cu;
        goto label_56764c;
    }
    ctx->pc = 0x567644u;
    SET_GPR_U32(ctx, 31, 0x56764Cu);
    ctx->pc = 0x567648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567644u;
            // 0x567648: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B8CD0u;
    if (runtime->hasFunction(0x3B8CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3B8CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56764Cu; }
        if (ctx->pc != 0x56764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B8CD0_0x3b8cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56764Cu; }
        if (ctx->pc != 0x56764Cu) { return; }
    }
    ctx->pc = 0x56764Cu;
label_56764c:
    // 0x56764c: 0xae500010  sw          $s0, 0x10($s2)
    ctx->pc = 0x56764cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 16));
label_567650:
    // 0x567650: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x567650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_567654:
    // 0x567654: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x567654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_567658:
    // 0x567658: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x567658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_56765c:
    // 0x56765c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x56765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_567660:
    // 0x567660: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x567660u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_567664:
    // 0x567664: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x567664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_567668:
    // 0x567668: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x567668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_56766c:
    // 0x56766c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x56766cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_567670:
    // 0x567670: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x567670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_567674:
    // 0x567674: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x567674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_567678:
    // 0x567678: 0x3e00008  jr          $ra
label_56767c:
    if (ctx->pc == 0x56767Cu) {
        ctx->pc = 0x56767Cu;
            // 0x56767c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x567680u;
        goto label_567680;
    }
    ctx->pc = 0x567678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56767Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567678u;
            // 0x56767c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567680u;
label_567680:
    // 0x567680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x567680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_567684:
    // 0x567684: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x567684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_567688:
    // 0x567688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x567688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_56768c:
    // 0x56768c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_567690:
    // 0x567690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x567690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_567694:
    // 0x567694: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x567694u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_567698:
    // 0x567698: 0x50830016  beql        $a0, $v1, . + 4 + (0x16 << 2)
label_56769c:
    if (ctx->pc == 0x56769Cu) {
        ctx->pc = 0x56769Cu;
            // 0x56769c: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x5676A0u;
        goto label_5676a0;
    }
    ctx->pc = 0x567698u;
    {
        const bool branch_taken_0x567698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x567698) {
            ctx->pc = 0x56769Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567698u;
            // 0x56769c: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5676F4u;
            goto label_5676f4;
        }
    }
    ctx->pc = 0x5676A0u;
label_5676a0:
    // 0x5676a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5676a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5676a4:
    // 0x5676a4: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_5676a8:
    if (ctx->pc == 0x5676A8u) {
        ctx->pc = 0x5676A8u;
            // 0x5676a8: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x5676ACu;
        goto label_5676ac;
    }
    ctx->pc = 0x5676A4u;
    {
        const bool branch_taken_0x5676a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5676a4) {
            ctx->pc = 0x5676A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5676A4u;
            // 0x5676a8: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5676B4u;
            goto label_5676b4;
        }
    }
    ctx->pc = 0x5676ACu;
label_5676ac:
    // 0x5676ac: 0x10000026  b           . + 4 + (0x26 << 2)
label_5676b0:
    if (ctx->pc == 0x5676B0u) {
        ctx->pc = 0x5676B0u;
            // 0x5676b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x5676B4u;
        goto label_5676b4;
    }
    ctx->pc = 0x5676ACu;
    {
        const bool branch_taken_0x5676ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5676B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5676ACu;
            // 0x5676b0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5676ac) {
            ctx->pc = 0x567748u;
            goto label_567748;
        }
    }
    ctx->pc = 0x5676B4u;
label_5676b4:
    // 0x5676b4: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
label_5676b8:
    if (ctx->pc == 0x5676B8u) {
        ctx->pc = 0x5676BCu;
        goto label_5676bc;
    }
    ctx->pc = 0x5676B4u;
    {
        const bool branch_taken_0x5676b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5676b4) {
            ctx->pc = 0x567744u;
            goto label_567744;
        }
    }
    ctx->pc = 0x5676BCu;
label_5676bc:
    // 0x5676bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5676bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5676c0:
    // 0x5676c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5676c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5676c4:
    // 0x5676c4: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x5676c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_5676c8:
    // 0x5676c8: 0xc0ab89c  jal         func_2AE270
label_5676cc:
    if (ctx->pc == 0x5676CCu) {
        ctx->pc = 0x5676CCu;
            // 0x5676cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5676D0u;
        goto label_5676d0;
    }
    ctx->pc = 0x5676C8u;
    SET_GPR_U32(ctx, 31, 0x5676D0u);
    ctx->pc = 0x5676CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5676C8u;
            // 0x5676cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5676D0u; }
        if (ctx->pc != 0x5676D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5676D0u; }
        if (ctx->pc != 0x5676D0u) { return; }
    }
    ctx->pc = 0x5676D0u;
label_5676d0:
    // 0x5676d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5676d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5676d4:
    // 0x5676d4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x5676d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5676d8:
    // 0x5676d8: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x5676d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_5676dc:
    // 0x5676dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5676dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5676e0:
    // 0x5676e0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5676e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5676e4:
    // 0x5676e4: 0x320f809  jalr        $t9
label_5676e8:
    if (ctx->pc == 0x5676E8u) {
        ctx->pc = 0x5676E8u;
            // 0x5676e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5676ECu;
        goto label_5676ec;
    }
    ctx->pc = 0x5676E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5676ECu);
        ctx->pc = 0x5676E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5676E4u;
            // 0x5676e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5676ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5676ECu; }
            if (ctx->pc != 0x5676ECu) { return; }
        }
        }
    }
    ctx->pc = 0x5676ECu;
label_5676ec:
    // 0x5676ec: 0x10000015  b           . + 4 + (0x15 << 2)
label_5676f0:
    if (ctx->pc == 0x5676F0u) {
        ctx->pc = 0x5676F4u;
        goto label_5676f4;
    }
    ctx->pc = 0x5676ECu;
    {
        const bool branch_taken_0x5676ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5676ec) {
            ctx->pc = 0x567744u;
            goto label_567744;
        }
    }
    ctx->pc = 0x5676F4u;
label_5676f4:
    // 0x5676f4: 0x90630cca  lbu         $v1, 0xCCA($v1)
    ctx->pc = 0x5676f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3274)));
label_5676f8:
    // 0x5676f8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_5676fc:
    if (ctx->pc == 0x5676FCu) {
        ctx->pc = 0x567700u;
        goto label_567700;
    }
    ctx->pc = 0x5676F8u;
    {
        const bool branch_taken_0x5676f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5676f8) {
            ctx->pc = 0x567744u;
            goto label_567744;
        }
    }
    ctx->pc = 0x567700u;
label_567700:
    // 0x567700: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x567700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_567704:
    // 0x567704: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_567708:
    if (ctx->pc == 0x567708u) {
        ctx->pc = 0x56770Cu;
        goto label_56770c;
    }
    ctx->pc = 0x567704u;
    {
        const bool branch_taken_0x567704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x567704) {
            ctx->pc = 0x56771Cu;
            goto label_56771c;
        }
    }
    ctx->pc = 0x56770Cu;
label_56770c:
    // 0x56770c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x56770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_567710:
    // 0x567710: 0xc0fe48c  jal         func_3F9230
label_567714:
    if (ctx->pc == 0x567714u) {
        ctx->pc = 0x567714u;
            // 0x567714: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x567718u;
        goto label_567718;
    }
    ctx->pc = 0x567710u;
    SET_GPR_U32(ctx, 31, 0x567718u);
    ctx->pc = 0x567714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567710u;
            // 0x567714: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567718u; }
        if (ctx->pc != 0x567718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567718u; }
        if (ctx->pc != 0x567718u) { return; }
    }
    ctx->pc = 0x567718u;
label_567718:
    // 0x567718: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x567718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_56771c:
    // 0x56771c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x56771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_567720:
    // 0x567720: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x567720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_567724:
    // 0x567724: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x567724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_567728:
    // 0x567728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x567728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56772c:
    // 0x56772c: 0xc0ab89c  jal         func_2AE270
label_567730:
    if (ctx->pc == 0x567730u) {
        ctx->pc = 0x567730u;
            // 0x567730: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567734u;
        goto label_567734;
    }
    ctx->pc = 0x56772Cu;
    SET_GPR_U32(ctx, 31, 0x567734u);
    ctx->pc = 0x567730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56772Cu;
            // 0x567730: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567734u; }
        if (ctx->pc != 0x567734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567734u; }
        if (ctx->pc != 0x567734u) { return; }
    }
    ctx->pc = 0x567734u;
label_567734:
    // 0x567734: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x567734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_567738:
    // 0x567738: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x567738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_56773c:
    // 0x56773c: 0x320f809  jalr        $t9
label_567740:
    if (ctx->pc == 0x567740u) {
        ctx->pc = 0x567740u;
            // 0x567740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567744u;
        goto label_567744;
    }
    ctx->pc = 0x56773Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x567744u);
        ctx->pc = 0x567740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56773Cu;
            // 0x567740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x567744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x567744u; }
            if (ctx->pc != 0x567744u) { return; }
        }
        }
    }
    ctx->pc = 0x567744u;
label_567744:
    // 0x567744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x567744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_567748:
    // 0x567748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_56774c:
    // 0x56774c: 0x3e00008  jr          $ra
label_567750:
    if (ctx->pc == 0x567750u) {
        ctx->pc = 0x567750u;
            // 0x567750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x567754u;
        goto label_567754;
    }
    ctx->pc = 0x56774Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56774Cu;
            // 0x567750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567754u;
label_567754:
    // 0x567754: 0x0  nop
    ctx->pc = 0x567754u;
    // NOP
label_567758:
    // 0x567758: 0x0  nop
    ctx->pc = 0x567758u;
    // NOP
label_56775c:
    // 0x56775c: 0x0  nop
    ctx->pc = 0x56775cu;
    // NOP
}
