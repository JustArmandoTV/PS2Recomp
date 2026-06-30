#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004783F0
// Address: 0x4783f0 - 0x478730
void sub_004783F0_0x4783f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004783F0_0x4783f0");
#endif

    switch (ctx->pc) {
        case 0x4783f0u: goto label_4783f0;
        case 0x4783f4u: goto label_4783f4;
        case 0x4783f8u: goto label_4783f8;
        case 0x4783fcu: goto label_4783fc;
        case 0x478400u: goto label_478400;
        case 0x478404u: goto label_478404;
        case 0x478408u: goto label_478408;
        case 0x47840cu: goto label_47840c;
        case 0x478410u: goto label_478410;
        case 0x478414u: goto label_478414;
        case 0x478418u: goto label_478418;
        case 0x47841cu: goto label_47841c;
        case 0x478420u: goto label_478420;
        case 0x478424u: goto label_478424;
        case 0x478428u: goto label_478428;
        case 0x47842cu: goto label_47842c;
        case 0x478430u: goto label_478430;
        case 0x478434u: goto label_478434;
        case 0x478438u: goto label_478438;
        case 0x47843cu: goto label_47843c;
        case 0x478440u: goto label_478440;
        case 0x478444u: goto label_478444;
        case 0x478448u: goto label_478448;
        case 0x47844cu: goto label_47844c;
        case 0x478450u: goto label_478450;
        case 0x478454u: goto label_478454;
        case 0x478458u: goto label_478458;
        case 0x47845cu: goto label_47845c;
        case 0x478460u: goto label_478460;
        case 0x478464u: goto label_478464;
        case 0x478468u: goto label_478468;
        case 0x47846cu: goto label_47846c;
        case 0x478470u: goto label_478470;
        case 0x478474u: goto label_478474;
        case 0x478478u: goto label_478478;
        case 0x47847cu: goto label_47847c;
        case 0x478480u: goto label_478480;
        case 0x478484u: goto label_478484;
        case 0x478488u: goto label_478488;
        case 0x47848cu: goto label_47848c;
        case 0x478490u: goto label_478490;
        case 0x478494u: goto label_478494;
        case 0x478498u: goto label_478498;
        case 0x47849cu: goto label_47849c;
        case 0x4784a0u: goto label_4784a0;
        case 0x4784a4u: goto label_4784a4;
        case 0x4784a8u: goto label_4784a8;
        case 0x4784acu: goto label_4784ac;
        case 0x4784b0u: goto label_4784b0;
        case 0x4784b4u: goto label_4784b4;
        case 0x4784b8u: goto label_4784b8;
        case 0x4784bcu: goto label_4784bc;
        case 0x4784c0u: goto label_4784c0;
        case 0x4784c4u: goto label_4784c4;
        case 0x4784c8u: goto label_4784c8;
        case 0x4784ccu: goto label_4784cc;
        case 0x4784d0u: goto label_4784d0;
        case 0x4784d4u: goto label_4784d4;
        case 0x4784d8u: goto label_4784d8;
        case 0x4784dcu: goto label_4784dc;
        case 0x4784e0u: goto label_4784e0;
        case 0x4784e4u: goto label_4784e4;
        case 0x4784e8u: goto label_4784e8;
        case 0x4784ecu: goto label_4784ec;
        case 0x4784f0u: goto label_4784f0;
        case 0x4784f4u: goto label_4784f4;
        case 0x4784f8u: goto label_4784f8;
        case 0x4784fcu: goto label_4784fc;
        case 0x478500u: goto label_478500;
        case 0x478504u: goto label_478504;
        case 0x478508u: goto label_478508;
        case 0x47850cu: goto label_47850c;
        case 0x478510u: goto label_478510;
        case 0x478514u: goto label_478514;
        case 0x478518u: goto label_478518;
        case 0x47851cu: goto label_47851c;
        case 0x478520u: goto label_478520;
        case 0x478524u: goto label_478524;
        case 0x478528u: goto label_478528;
        case 0x47852cu: goto label_47852c;
        case 0x478530u: goto label_478530;
        case 0x478534u: goto label_478534;
        case 0x478538u: goto label_478538;
        case 0x47853cu: goto label_47853c;
        case 0x478540u: goto label_478540;
        case 0x478544u: goto label_478544;
        case 0x478548u: goto label_478548;
        case 0x47854cu: goto label_47854c;
        case 0x478550u: goto label_478550;
        case 0x478554u: goto label_478554;
        case 0x478558u: goto label_478558;
        case 0x47855cu: goto label_47855c;
        case 0x478560u: goto label_478560;
        case 0x478564u: goto label_478564;
        case 0x478568u: goto label_478568;
        case 0x47856cu: goto label_47856c;
        case 0x478570u: goto label_478570;
        case 0x478574u: goto label_478574;
        case 0x478578u: goto label_478578;
        case 0x47857cu: goto label_47857c;
        case 0x478580u: goto label_478580;
        case 0x478584u: goto label_478584;
        case 0x478588u: goto label_478588;
        case 0x47858cu: goto label_47858c;
        case 0x478590u: goto label_478590;
        case 0x478594u: goto label_478594;
        case 0x478598u: goto label_478598;
        case 0x47859cu: goto label_47859c;
        case 0x4785a0u: goto label_4785a0;
        case 0x4785a4u: goto label_4785a4;
        case 0x4785a8u: goto label_4785a8;
        case 0x4785acu: goto label_4785ac;
        case 0x4785b0u: goto label_4785b0;
        case 0x4785b4u: goto label_4785b4;
        case 0x4785b8u: goto label_4785b8;
        case 0x4785bcu: goto label_4785bc;
        case 0x4785c0u: goto label_4785c0;
        case 0x4785c4u: goto label_4785c4;
        case 0x4785c8u: goto label_4785c8;
        case 0x4785ccu: goto label_4785cc;
        case 0x4785d0u: goto label_4785d0;
        case 0x4785d4u: goto label_4785d4;
        case 0x4785d8u: goto label_4785d8;
        case 0x4785dcu: goto label_4785dc;
        case 0x4785e0u: goto label_4785e0;
        case 0x4785e4u: goto label_4785e4;
        case 0x4785e8u: goto label_4785e8;
        case 0x4785ecu: goto label_4785ec;
        case 0x4785f0u: goto label_4785f0;
        case 0x4785f4u: goto label_4785f4;
        case 0x4785f8u: goto label_4785f8;
        case 0x4785fcu: goto label_4785fc;
        case 0x478600u: goto label_478600;
        case 0x478604u: goto label_478604;
        case 0x478608u: goto label_478608;
        case 0x47860cu: goto label_47860c;
        case 0x478610u: goto label_478610;
        case 0x478614u: goto label_478614;
        case 0x478618u: goto label_478618;
        case 0x47861cu: goto label_47861c;
        case 0x478620u: goto label_478620;
        case 0x478624u: goto label_478624;
        case 0x478628u: goto label_478628;
        case 0x47862cu: goto label_47862c;
        case 0x478630u: goto label_478630;
        case 0x478634u: goto label_478634;
        case 0x478638u: goto label_478638;
        case 0x47863cu: goto label_47863c;
        case 0x478640u: goto label_478640;
        case 0x478644u: goto label_478644;
        case 0x478648u: goto label_478648;
        case 0x47864cu: goto label_47864c;
        case 0x478650u: goto label_478650;
        case 0x478654u: goto label_478654;
        case 0x478658u: goto label_478658;
        case 0x47865cu: goto label_47865c;
        case 0x478660u: goto label_478660;
        case 0x478664u: goto label_478664;
        case 0x478668u: goto label_478668;
        case 0x47866cu: goto label_47866c;
        case 0x478670u: goto label_478670;
        case 0x478674u: goto label_478674;
        case 0x478678u: goto label_478678;
        case 0x47867cu: goto label_47867c;
        case 0x478680u: goto label_478680;
        case 0x478684u: goto label_478684;
        case 0x478688u: goto label_478688;
        case 0x47868cu: goto label_47868c;
        case 0x478690u: goto label_478690;
        case 0x478694u: goto label_478694;
        case 0x478698u: goto label_478698;
        case 0x47869cu: goto label_47869c;
        case 0x4786a0u: goto label_4786a0;
        case 0x4786a4u: goto label_4786a4;
        case 0x4786a8u: goto label_4786a8;
        case 0x4786acu: goto label_4786ac;
        case 0x4786b0u: goto label_4786b0;
        case 0x4786b4u: goto label_4786b4;
        case 0x4786b8u: goto label_4786b8;
        case 0x4786bcu: goto label_4786bc;
        case 0x4786c0u: goto label_4786c0;
        case 0x4786c4u: goto label_4786c4;
        case 0x4786c8u: goto label_4786c8;
        case 0x4786ccu: goto label_4786cc;
        case 0x4786d0u: goto label_4786d0;
        case 0x4786d4u: goto label_4786d4;
        case 0x4786d8u: goto label_4786d8;
        case 0x4786dcu: goto label_4786dc;
        case 0x4786e0u: goto label_4786e0;
        case 0x4786e4u: goto label_4786e4;
        case 0x4786e8u: goto label_4786e8;
        case 0x4786ecu: goto label_4786ec;
        case 0x4786f0u: goto label_4786f0;
        case 0x4786f4u: goto label_4786f4;
        case 0x4786f8u: goto label_4786f8;
        case 0x4786fcu: goto label_4786fc;
        case 0x478700u: goto label_478700;
        case 0x478704u: goto label_478704;
        case 0x478708u: goto label_478708;
        case 0x47870cu: goto label_47870c;
        case 0x478710u: goto label_478710;
        case 0x478714u: goto label_478714;
        case 0x478718u: goto label_478718;
        case 0x47871cu: goto label_47871c;
        case 0x478720u: goto label_478720;
        case 0x478724u: goto label_478724;
        case 0x478728u: goto label_478728;
        case 0x47872cu: goto label_47872c;
        default: break;
    }

    ctx->pc = 0x4783f0u;

label_4783f0:
    // 0x4783f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4783f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4783f4:
    // 0x4783f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4783f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4783f8:
    // 0x4783f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4783f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4783fc:
    // 0x4783fc: 0xc460f318  lwc1        $f0, -0xCE8($v1)
    ctx->pc = 0x4783fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_478400:
    // 0x478400: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x478400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_478404:
    // 0x478404: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x478404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_478408:
    // 0x478408: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x478408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_47840c:
    // 0x47840c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x47840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_478410:
    // 0x478410: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x478410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_478414:
    // 0x478414: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x478414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_478418:
    // 0x478418: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x478418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_47841c:
    // 0x47841c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47841cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_478420:
    // 0x478420: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x478420u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
label_478424:
    // 0x478424: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x478424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_478428:
    // 0x478428: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x478428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47842c:
    // 0x47842c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x47842cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_478430:
    // 0x478430: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x478430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_478434:
    // 0x478434: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x478434u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_478438:
    // 0x478438: 0x450100ad  bc1t        . + 4 + (0xAD << 2)
label_47843c:
    if (ctx->pc == 0x47843Cu) {
        ctx->pc = 0x47843Cu;
            // 0x47843c: 0x2673f300  addiu       $s3, $s3, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963968));
        ctx->pc = 0x478440u;
        goto label_478440;
    }
    ctx->pc = 0x478438u;
    {
        const bool branch_taken_0x478438 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x47843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478438u;
            // 0x47843c: 0x2673f300  addiu       $s3, $s3, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478438) {
            ctx->pc = 0x4786F0u;
            goto label_4786f0;
        }
    }
    ctx->pc = 0x478440u;
label_478440:
    // 0x478440: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x478440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_478444:
    // 0x478444: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x478444u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_478448:
    // 0x478448: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x478448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_47844c:
    // 0x47844c: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x47844cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_478450:
    // 0x478450: 0x46041882  mul.s       $f2, $f3, $f4
    ctx->pc = 0x478450u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_478454:
    // 0x478454: 0x3c1e0067  lui         $fp, 0x67
    ctx->pc = 0x478454u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)103 << 16));
label_478458:
    // 0x478458: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x478458u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_47845c:
    // 0x47845c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x47845cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_478460:
    // 0x478460: 0x26f7a580  addiu       $s7, $s7, -0x5A80
    ctx->pc = 0x478460u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944128));
label_478464:
    // 0x478464: 0x26522104  addiu       $s2, $s2, 0x2104
    ctx->pc = 0x478464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8452));
label_478468:
    // 0x478468: 0x27deab70  addiu       $fp, $fp, -0x5490
    ctx->pc = 0x478468u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945648));
label_47846c:
    // 0x47846c: 0x26312110  addiu       $s1, $s1, 0x2110
    ctx->pc = 0x47846cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8464));
label_478470:
    // 0x478470: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x478470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478474:
    // 0x478474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x478474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478478:
    // 0x478478: 0x0  nop
    ctx->pc = 0x478478u;
    // NOP
label_47847c:
    // 0x47847c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x47847cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_478480:
    // 0x478480: 0x0  nop
    ctx->pc = 0x478480u;
    // NOP
label_478484:
    // 0x478484: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x478484u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_478488:
    // 0x478488: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x478488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47848c:
    // 0x47848c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_478490:
    if (ctx->pc == 0x478490u) {
        ctx->pc = 0x478490u;
            // 0x478490: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x478494u;
        goto label_478494;
    }
    ctx->pc = 0x47848Cu;
    {
        const bool branch_taken_0x47848c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47848c) {
            ctx->pc = 0x478490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47848Cu;
            // 0x478490: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4784A4u;
            goto label_4784a4;
        }
    }
    ctx->pc = 0x478494u;
label_478494:
    // 0x478494: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478498:
    // 0x478498: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x478498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_47849c:
    // 0x47849c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4784a0:
    if (ctx->pc == 0x4784A0u) {
        ctx->pc = 0x4784A0u;
            // 0x4784a0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4784A4u;
        goto label_4784a4;
    }
    ctx->pc = 0x47849Cu;
    {
        const bool branch_taken_0x47849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4784A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47849Cu;
            // 0x4784a0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47849c) {
            ctx->pc = 0x4784BCu;
            goto label_4784bc;
        }
    }
    ctx->pc = 0x4784A4u;
label_4784a4:
    // 0x4784a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4784a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4784a8:
    // 0x4784a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4784a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4784ac:
    // 0x4784ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4784acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4784b0:
    // 0x4784b0: 0x0  nop
    ctx->pc = 0x4784b0u;
    // NOP
label_4784b4:
    // 0x4784b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4784b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4784b8:
    // 0x4784b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4784b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4784bc:
    // 0x4784bc: 0x86620042  lh          $v0, 0x42($s3)
    ctx->pc = 0x4784bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
label_4784c0:
    // 0x4784c0: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x4784c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4784c4:
    // 0x4784c4: 0x86a5001c  lh          $a1, 0x1C($s5)
    ctx->pc = 0x4784c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 28)));
label_4784c8:
    // 0x4784c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4784c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4784cc:
    // 0x4784cc: 0x86630040  lh          $v1, 0x40($s3)
    ctx->pc = 0x4784ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 64)));
label_4784d0:
    // 0x4784d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4784d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4784d4:
    // 0x4784d4: 0x0  nop
    ctx->pc = 0x4784d4u;
    // NOP
label_4784d8:
    // 0x4784d8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x4784d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4784dc:
    // 0x4784dc: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x4784dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_4784e0:
    // 0x4784e0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4784e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4784e4:
    // 0x4784e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4784e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4784e8:
    // 0x4784e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4784e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4784ec:
    // 0x4784ec: 0x0  nop
    ctx->pc = 0x4784ecu;
    // NOP
label_4784f0:
    // 0x4784f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4784f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4784f4:
    // 0x4784f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4784f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4784f8:
    // 0x4784f8: 0x4604101d  msub.s      $f0, $f2, $f4
    ctx->pc = 0x4784f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_4784fc:
    // 0x4784fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4784fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478500:
    // 0x478500: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x478500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_478504:
    // 0x478504: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_478508:
    if (ctx->pc == 0x478508u) {
        ctx->pc = 0x478508u;
            // 0x478508: 0x86b6001e  lh          $s6, 0x1E($s5) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
        ctx->pc = 0x47850Cu;
        goto label_47850c;
    }
    ctx->pc = 0x478504u;
    {
        const bool branch_taken_0x478504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478504u;
            // 0x478508: 0x86b6001e  lh          $s6, 0x1E($s5) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478504) {
            ctx->pc = 0x478570u;
            goto label_478570;
        }
    }
    ctx->pc = 0x47850Cu;
label_47850c:
    // 0x47850c: 0xc6a20030  lwc1        $f2, 0x30($s5)
    ctx->pc = 0x47850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_478510:
    // 0x478510: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x478510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_478514:
    // 0x478514: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x478514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_478518:
    // 0x478518: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x478518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_47851c:
    // 0x47851c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x47851cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_478520:
    // 0x478520: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x478520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_478524:
    // 0x478524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x478524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478528:
    // 0x478528: 0x0  nop
    ctx->pc = 0x478528u;
    // NOP
label_47852c:
    // 0x47852c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x47852cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_478530:
    // 0x478530: 0x0  nop
    ctx->pc = 0x478530u;
    // NOP
label_478534:
    // 0x478534: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x478534u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_478538:
    // 0x478538: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x478538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47853c:
    // 0x47853c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_478540:
    if (ctx->pc == 0x478540u) {
        ctx->pc = 0x478540u;
            // 0x478540: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x478544u;
        goto label_478544;
    }
    ctx->pc = 0x47853Cu;
    {
        const bool branch_taken_0x47853c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47853c) {
            ctx->pc = 0x478540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47853Cu;
            // 0x478540: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x478554u;
            goto label_478554;
        }
    }
    ctx->pc = 0x478544u;
label_478544:
    // 0x478544: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_478548:
    // 0x478548: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x478548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_47854c:
    // 0x47854c: 0x10000007  b           . + 4 + (0x7 << 2)
label_478550:
    if (ctx->pc == 0x478550u) {
        ctx->pc = 0x478550u;
            // 0x478550: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x478554u;
        goto label_478554;
    }
    ctx->pc = 0x47854Cu;
    {
        const bool branch_taken_0x47854c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47854Cu;
            // 0x478550: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47854c) {
            ctx->pc = 0x47856Cu;
            goto label_47856c;
        }
    }
    ctx->pc = 0x478554u;
label_478554:
    // 0x478554: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x478554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_478558:
    // 0x478558: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47855c:
    // 0x47855c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x47855cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_478560:
    // 0x478560: 0x0  nop
    ctx->pc = 0x478560u;
    // NOP
label_478564:
    // 0x478564: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x478564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_478568:
    // 0x478568: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x478568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_47856c:
    // 0x47856c: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x47856cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_478570:
    // 0x478570: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x478570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_478574:
    // 0x478574: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x478574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_478578:
    // 0x478578: 0xc0506ac  jal         func_141AB0
label_47857c:
    if (ctx->pc == 0x47857Cu) {
        ctx->pc = 0x47857Cu;
            // 0x47857c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x478580u;
        goto label_478580;
    }
    ctx->pc = 0x478578u;
    SET_GPR_U32(ctx, 31, 0x478580u);
    ctx->pc = 0x47857Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478578u;
            // 0x47857c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478580u; }
        if (ctx->pc != 0x478580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478580u; }
        if (ctx->pc != 0x478580u) { return; }
    }
    ctx->pc = 0x478580u;
label_478580:
    // 0x478580: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478584:
    // 0x478584: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478588:
    // 0x478588: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47858c:
    // 0x47858c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x47858cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_478590:
    // 0x478590: 0x320f809  jalr        $t9
label_478594:
    if (ctx->pc == 0x478594u) {
        ctx->pc = 0x478594u;
            // 0x478594: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x478598u;
        goto label_478598;
    }
    ctx->pc = 0x478590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478598u);
        ctx->pc = 0x478594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478590u;
            // 0x478594: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x478598u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478598u; }
            if (ctx->pc != 0x478598u) { return; }
        }
        }
    }
    ctx->pc = 0x478598u;
label_478598:
    // 0x478598: 0x86460000  lh          $a2, 0x0($s2)
    ctx->pc = 0x478598u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_47859c:
    // 0x47859c: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x47859cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_4785a0:
    // 0x4785a0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4785a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4785a4:
    // 0x4785a4: 0x96a40024  lhu         $a0, 0x24($s5)
    ctx->pc = 0x4785a4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
label_4785a8:
    // 0x4785a8: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x4785a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4785ac:
    // 0x4785ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4785acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4785b0:
    // 0x4785b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4785b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4785b4:
    // 0x4785b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4785b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4785b8:
    // 0x4785b8: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4785b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4785bc:
    // 0x4785bc: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x4785bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4785c0:
    // 0x4785c0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4785c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4785c4:
    // 0x4785c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4785c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4785c8:
    // 0x4785c8: 0x2e42821  addu        $a1, $s7, $a0
    ctx->pc = 0x4785c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_4785cc:
    // 0x4785cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4785ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4785d0:
    // 0x4785d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4785d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4785d4:
    // 0x4785d4: 0x0  nop
    ctx->pc = 0x4785d4u;
    // NOP
label_4785d8:
    // 0x4785d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4785d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4785dc:
    // 0x4785dc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4785dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4785e0:
    // 0x4785e0: 0x0  nop
    ctx->pc = 0x4785e0u;
    // NOP
label_4785e4:
    // 0x4785e4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4785e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4785e8:
    // 0x4785e8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4785e8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4785ec:
    // 0x4785ec: 0x0  nop
    ctx->pc = 0x4785ecu;
    // NOP
label_4785f0:
    // 0x4785f0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4785f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4785f4:
    // 0x4785f4: 0xc4b40008  lwc1        $f20, 0x8($a1)
    ctx->pc = 0x4785f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4785f8:
    // 0x4785f8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4785f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4785fc:
    // 0x4785fc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4785fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_478600:
    // 0x478600: 0x46146380  add.s       $f14, $f12, $f20
    ctx->pc = 0x478600u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
label_478604:
    // 0x478604: 0xc0bc284  jal         func_2F0A10
label_478608:
    if (ctx->pc == 0x478608u) {
        ctx->pc = 0x478608u;
            // 0x478608: 0x46017b41  sub.s       $f13, $f15, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
        ctx->pc = 0x47860Cu;
        goto label_47860c;
    }
    ctx->pc = 0x478604u;
    SET_GPR_U32(ctx, 31, 0x47860Cu);
    ctx->pc = 0x478608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478604u;
            // 0x478608: 0x46017b41  sub.s       $f13, $f15, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47860Cu; }
        if (ctx->pc != 0x47860Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47860Cu; }
        if (ctx->pc != 0x47860Cu) { return; }
    }
    ctx->pc = 0x47860Cu;
label_47860c:
    // 0x47860c: 0x86630044  lh          $v1, 0x44($s3)
    ctx->pc = 0x47860cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_478610:
    // 0x478610: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x478610u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478614:
    // 0x478614: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_478618:
    // 0x478618: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x478618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_47861c:
    // 0x47861c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x47861cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_478620:
    // 0x478620: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478624:
    // 0x478624: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x478624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_478628:
    // 0x478628: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x478628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_47862c:
    // 0x47862c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x47862cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_478630:
    // 0x478630: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x478630u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_478634:
    // 0x478634: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x478634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_478638:
    // 0x478638: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478638u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47863c:
    // 0x47863c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x47863cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_478640:
    // 0x478640: 0x320f809  jalr        $t9
label_478644:
    if (ctx->pc == 0x478644u) {
        ctx->pc = 0x478648u;
        goto label_478648;
    }
    ctx->pc = 0x478640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478648u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x478648u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478648u; }
            if (ctx->pc != 0x478648u) { return; }
        }
        }
    }
    ctx->pc = 0x478648u;
label_478648:
    // 0x478648: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x478648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47864c:
    // 0x47864c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x47864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_478650:
    // 0x478650: 0xc0506ac  jal         func_141AB0
label_478654:
    if (ctx->pc == 0x478654u) {
        ctx->pc = 0x478654u;
            // 0x478654: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x478658u;
        goto label_478658;
    }
    ctx->pc = 0x478650u;
    SET_GPR_U32(ctx, 31, 0x478658u);
    ctx->pc = 0x478654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x478650u;
            // 0x478654: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478658u; }
        if (ctx->pc != 0x478658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x478658u; }
        if (ctx->pc != 0x478658u) { return; }
    }
    ctx->pc = 0x478658u;
label_478658:
    // 0x478658: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x478658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47865c:
    // 0x47865c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x47865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_478660:
    // 0x478660: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x478660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_478664:
    // 0x478664: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x478664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_478668:
    // 0x478668: 0x320f809  jalr        $t9
label_47866c:
    if (ctx->pc == 0x47866Cu) {
        ctx->pc = 0x47866Cu;
            // 0x47866c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x478670u;
        goto label_478670;
    }
    ctx->pc = 0x478668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x478670u);
        ctx->pc = 0x47866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x478668u;
            // 0x47866c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x478670u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x478670u; }
            if (ctx->pc != 0x478670u) { return; }
        }
        }
    }
    ctx->pc = 0x478670u;
label_478670:
    // 0x478670: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x478670u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_478674:
    // 0x478674: 0x96a30024  lhu         $v1, 0x24($s5)
    ctx->pc = 0x478674u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 36)));
label_478678:
    // 0x478678: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x478678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_47867c:
    // 0x47867c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47867cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_478680:
    // 0x478680: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x478680u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_478684:
    // 0x478684: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x478684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_478688:
    // 0x478688: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x478688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_47868c:
    // 0x47868c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47868cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_478690:
    // 0x478690: 0x3c42821  addu        $a1, $fp, $a0
    ctx->pc = 0x478690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_478694:
    // 0x478694: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x478694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_478698:
    // 0x478698: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x478698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47869c:
    // 0x47869c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x47869cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4786a0:
    // 0x4786a0: 0x0  nop
    ctx->pc = 0x4786a0u;
    // NOP
label_4786a4:
    // 0x4786a4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4786a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4786a8:
    // 0x4786a8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4786a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4786ac:
    // 0x4786ac: 0x0  nop
    ctx->pc = 0x4786acu;
    // NOP
label_4786b0:
    // 0x4786b0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4786b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4786b4:
    // 0x4786b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4786b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4786b8:
    // 0x4786b8: 0x0  nop
    ctx->pc = 0x4786b8u;
    // NOP
label_4786bc:
    // 0x4786bc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4786bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4786c0:
    // 0x4786c0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x4786c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4786c4:
    // 0x4786c4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4786c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4786c8:
    // 0x4786c8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4786c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4786cc:
    // 0x4786cc: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x4786ccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_4786d0:
    // 0x4786d0: 0xc0bc284  jal         func_2F0A10
label_4786d4:
    if (ctx->pc == 0x4786D4u) {
        ctx->pc = 0x4786D4u;
            // 0x4786d4: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x4786D8u;
        goto label_4786d8;
    }
    ctx->pc = 0x4786D0u;
    SET_GPR_U32(ctx, 31, 0x4786D8u);
    ctx->pc = 0x4786D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4786D0u;
            // 0x4786d4: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4786D8u; }
        if (ctx->pc != 0x4786D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4786D8u; }
        if (ctx->pc != 0x4786D8u) { return; }
    }
    ctx->pc = 0x4786D8u;
label_4786d8:
    // 0x4786d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4786d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4786dc:
    // 0x4786dc: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4786dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4786e0:
    // 0x4786e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4786e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4786e4:
    // 0x4786e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4786e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4786e8:
    // 0x4786e8: 0x320f809  jalr        $t9
label_4786ec:
    if (ctx->pc == 0x4786ECu) {
        ctx->pc = 0x4786F0u;
        goto label_4786f0;
    }
    ctx->pc = 0x4786E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4786F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4786F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4786F0u; }
            if (ctx->pc != 0x4786F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4786F0u;
label_4786f0:
    // 0x4786f0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4786f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4786f4:
    // 0x4786f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4786f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4786f8:
    // 0x4786f8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4786f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4786fc:
    // 0x4786fc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4786fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_478700:
    // 0x478700: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x478700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_478704:
    // 0x478704: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x478704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_478708:
    // 0x478708: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x478708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47870c:
    // 0x47870c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x47870cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_478710:
    // 0x478710: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x478710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_478714:
    // 0x478714: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x478714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_478718:
    // 0x478718: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x478718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47871c:
    // 0x47871c: 0x3e00008  jr          $ra
label_478720:
    if (ctx->pc == 0x478720u) {
        ctx->pc = 0x478720u;
            // 0x478720: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x478724u;
        goto label_478724;
    }
    ctx->pc = 0x47871Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x478720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47871Cu;
            // 0x478720: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x478724u;
label_478724:
    // 0x478724: 0x0  nop
    ctx->pc = 0x478724u;
    // NOP
label_478728:
    // 0x478728: 0x0  nop
    ctx->pc = 0x478728u;
    // NOP
label_47872c:
    // 0x47872c: 0x0  nop
    ctx->pc = 0x47872cu;
    // NOP
}
