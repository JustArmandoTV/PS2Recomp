#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00346470
// Address: 0x346470 - 0x3466c0
void sub_00346470_0x346470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346470_0x346470");
#endif

    switch (ctx->pc) {
        case 0x346470u: goto label_346470;
        case 0x346474u: goto label_346474;
        case 0x346478u: goto label_346478;
        case 0x34647cu: goto label_34647c;
        case 0x346480u: goto label_346480;
        case 0x346484u: goto label_346484;
        case 0x346488u: goto label_346488;
        case 0x34648cu: goto label_34648c;
        case 0x346490u: goto label_346490;
        case 0x346494u: goto label_346494;
        case 0x346498u: goto label_346498;
        case 0x34649cu: goto label_34649c;
        case 0x3464a0u: goto label_3464a0;
        case 0x3464a4u: goto label_3464a4;
        case 0x3464a8u: goto label_3464a8;
        case 0x3464acu: goto label_3464ac;
        case 0x3464b0u: goto label_3464b0;
        case 0x3464b4u: goto label_3464b4;
        case 0x3464b8u: goto label_3464b8;
        case 0x3464bcu: goto label_3464bc;
        case 0x3464c0u: goto label_3464c0;
        case 0x3464c4u: goto label_3464c4;
        case 0x3464c8u: goto label_3464c8;
        case 0x3464ccu: goto label_3464cc;
        case 0x3464d0u: goto label_3464d0;
        case 0x3464d4u: goto label_3464d4;
        case 0x3464d8u: goto label_3464d8;
        case 0x3464dcu: goto label_3464dc;
        case 0x3464e0u: goto label_3464e0;
        case 0x3464e4u: goto label_3464e4;
        case 0x3464e8u: goto label_3464e8;
        case 0x3464ecu: goto label_3464ec;
        case 0x3464f0u: goto label_3464f0;
        case 0x3464f4u: goto label_3464f4;
        case 0x3464f8u: goto label_3464f8;
        case 0x3464fcu: goto label_3464fc;
        case 0x346500u: goto label_346500;
        case 0x346504u: goto label_346504;
        case 0x346508u: goto label_346508;
        case 0x34650cu: goto label_34650c;
        case 0x346510u: goto label_346510;
        case 0x346514u: goto label_346514;
        case 0x346518u: goto label_346518;
        case 0x34651cu: goto label_34651c;
        case 0x346520u: goto label_346520;
        case 0x346524u: goto label_346524;
        case 0x346528u: goto label_346528;
        case 0x34652cu: goto label_34652c;
        case 0x346530u: goto label_346530;
        case 0x346534u: goto label_346534;
        case 0x346538u: goto label_346538;
        case 0x34653cu: goto label_34653c;
        case 0x346540u: goto label_346540;
        case 0x346544u: goto label_346544;
        case 0x346548u: goto label_346548;
        case 0x34654cu: goto label_34654c;
        case 0x346550u: goto label_346550;
        case 0x346554u: goto label_346554;
        case 0x346558u: goto label_346558;
        case 0x34655cu: goto label_34655c;
        case 0x346560u: goto label_346560;
        case 0x346564u: goto label_346564;
        case 0x346568u: goto label_346568;
        case 0x34656cu: goto label_34656c;
        case 0x346570u: goto label_346570;
        case 0x346574u: goto label_346574;
        case 0x346578u: goto label_346578;
        case 0x34657cu: goto label_34657c;
        case 0x346580u: goto label_346580;
        case 0x346584u: goto label_346584;
        case 0x346588u: goto label_346588;
        case 0x34658cu: goto label_34658c;
        case 0x346590u: goto label_346590;
        case 0x346594u: goto label_346594;
        case 0x346598u: goto label_346598;
        case 0x34659cu: goto label_34659c;
        case 0x3465a0u: goto label_3465a0;
        case 0x3465a4u: goto label_3465a4;
        case 0x3465a8u: goto label_3465a8;
        case 0x3465acu: goto label_3465ac;
        case 0x3465b0u: goto label_3465b0;
        case 0x3465b4u: goto label_3465b4;
        case 0x3465b8u: goto label_3465b8;
        case 0x3465bcu: goto label_3465bc;
        case 0x3465c0u: goto label_3465c0;
        case 0x3465c4u: goto label_3465c4;
        case 0x3465c8u: goto label_3465c8;
        case 0x3465ccu: goto label_3465cc;
        case 0x3465d0u: goto label_3465d0;
        case 0x3465d4u: goto label_3465d4;
        case 0x3465d8u: goto label_3465d8;
        case 0x3465dcu: goto label_3465dc;
        case 0x3465e0u: goto label_3465e0;
        case 0x3465e4u: goto label_3465e4;
        case 0x3465e8u: goto label_3465e8;
        case 0x3465ecu: goto label_3465ec;
        case 0x3465f0u: goto label_3465f0;
        case 0x3465f4u: goto label_3465f4;
        case 0x3465f8u: goto label_3465f8;
        case 0x3465fcu: goto label_3465fc;
        case 0x346600u: goto label_346600;
        case 0x346604u: goto label_346604;
        case 0x346608u: goto label_346608;
        case 0x34660cu: goto label_34660c;
        case 0x346610u: goto label_346610;
        case 0x346614u: goto label_346614;
        case 0x346618u: goto label_346618;
        case 0x34661cu: goto label_34661c;
        case 0x346620u: goto label_346620;
        case 0x346624u: goto label_346624;
        case 0x346628u: goto label_346628;
        case 0x34662cu: goto label_34662c;
        case 0x346630u: goto label_346630;
        case 0x346634u: goto label_346634;
        case 0x346638u: goto label_346638;
        case 0x34663cu: goto label_34663c;
        case 0x346640u: goto label_346640;
        case 0x346644u: goto label_346644;
        case 0x346648u: goto label_346648;
        case 0x34664cu: goto label_34664c;
        case 0x346650u: goto label_346650;
        case 0x346654u: goto label_346654;
        case 0x346658u: goto label_346658;
        case 0x34665cu: goto label_34665c;
        case 0x346660u: goto label_346660;
        case 0x346664u: goto label_346664;
        case 0x346668u: goto label_346668;
        case 0x34666cu: goto label_34666c;
        case 0x346670u: goto label_346670;
        case 0x346674u: goto label_346674;
        case 0x346678u: goto label_346678;
        case 0x34667cu: goto label_34667c;
        case 0x346680u: goto label_346680;
        case 0x346684u: goto label_346684;
        case 0x346688u: goto label_346688;
        case 0x34668cu: goto label_34668c;
        case 0x346690u: goto label_346690;
        case 0x346694u: goto label_346694;
        case 0x346698u: goto label_346698;
        case 0x34669cu: goto label_34669c;
        case 0x3466a0u: goto label_3466a0;
        case 0x3466a4u: goto label_3466a4;
        case 0x3466a8u: goto label_3466a8;
        case 0x3466acu: goto label_3466ac;
        case 0x3466b0u: goto label_3466b0;
        case 0x3466b4u: goto label_3466b4;
        case 0x3466b8u: goto label_3466b8;
        case 0x3466bcu: goto label_3466bc;
        default: break;
    }

    ctx->pc = 0x346470u;

label_346470:
    // 0x346470: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x346470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_346474:
    // 0x346474: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_346478:
    // 0x346478: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x346478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_34647c:
    // 0x34647c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x34647cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_346480:
    // 0x346480: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x346480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_346484:
    // 0x346484: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x346484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_346488:
    // 0x346488: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x346488u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34648c:
    // 0x34648c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_346490:
    // 0x346490: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x346490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_346494:
    // 0x346494: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346498:
    // 0x346498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34649c:
    // 0x34649c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x34649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3464a0:
    // 0x3464a0: 0xc0a7a88  jal         func_29EA20
label_3464a4:
    if (ctx->pc == 0x3464A4u) {
        ctx->pc = 0x3464A4u;
            // 0x3464a4: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->pc = 0x3464A8u;
        goto label_3464a8;
    }
    ctx->pc = 0x3464A0u;
    SET_GPR_U32(ctx, 31, 0x3464A8u);
    ctx->pc = 0x3464A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3464A0u;
            // 0x3464a4: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464A8u; }
        if (ctx->pc != 0x3464A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464A8u; }
        if (ctx->pc != 0x3464A8u) { return; }
    }
    ctx->pc = 0x3464A8u;
label_3464a8:
    // 0x3464a8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3464a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3464ac:
    // 0x3464ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3464acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3464b0:
    // 0x3464b0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_3464b4:
    if (ctx->pc == 0x3464B4u) {
        ctx->pc = 0x3464B4u;
            // 0x3464b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3464B8u;
        goto label_3464b8;
    }
    ctx->pc = 0x3464B0u;
    {
        const bool branch_taken_0x3464b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3464B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3464B0u;
            // 0x3464b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3464b0) {
            ctx->pc = 0x3464E4u;
            goto label_3464e4;
        }
    }
    ctx->pc = 0x3464B8u;
label_3464b8:
    // 0x3464b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3464b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3464bc:
    // 0x3464bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3464bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3464c0:
    // 0x3464c0: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3464c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3464c4:
    // 0x3464c4: 0xc081fa8  jal         func_207EA0
label_3464c8:
    if (ctx->pc == 0x3464C8u) {
        ctx->pc = 0x3464C8u;
            // 0x3464c8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3464CCu;
        goto label_3464cc;
    }
    ctx->pc = 0x3464C4u;
    SET_GPR_U32(ctx, 31, 0x3464CCu);
    ctx->pc = 0x3464C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3464C4u;
            // 0x3464c8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207EA0u;
    if (runtime->hasFunction(0x207EA0u)) {
        auto targetFn = runtime->lookupFunction(0x207EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464CCu; }
        if (ctx->pc != 0x3464CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207EA0_0x207ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3464CCu; }
        if (ctx->pc != 0x3464CCu) { return; }
    }
    ctx->pc = 0x3464CCu;
label_3464cc:
    // 0x3464cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3464ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3464d0:
    // 0x3464d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3464d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3464d4:
    // 0x3464d4: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x3464d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
label_3464d8:
    // 0x3464d8: 0x2442e328  addiu       $v0, $v0, -0x1CD8
    ctx->pc = 0x3464d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959912));
label_3464dc:
    // 0x3464dc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3464dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3464e0:
    // 0x3464e0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3464e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3464e4:
    // 0x3464e4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3464e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_3464e8:
    // 0x3464e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3464e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3464ec:
    // 0x3464ec: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x3464ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_3464f0:
    // 0x3464f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3464f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3464f4:
    // 0x3464f4: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x3464f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_3464f8:
    // 0x3464f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3464f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3464fc:
    // 0x3464fc: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3464fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_346500:
    // 0x346500: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x346500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_346504:
    // 0x346504: 0xa3a700a1  sb          $a3, 0xA1($sp)
    ctx->pc = 0x346504u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 161), (uint8_t)GPR_U32(ctx, 7));
label_346508:
    // 0x346508: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x346508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_34650c:
    // 0x34650c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x34650cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_346510:
    // 0x346510: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x346510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_346514:
    // 0x346514: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x346514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
label_346518:
    // 0x346518: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x346518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_34651c:
    // 0x34651c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x34651cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_346520:
    // 0x346520: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x346520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
label_346524:
    // 0x346524: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x346524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_346528:
    // 0x346528: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x346528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
label_34652c:
    // 0x34652c: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x34652cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_346530:
    // 0x346530: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x346530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_346534:
    // 0x346534: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x346534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_346538:
    // 0x346538: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x346538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34653c:
    // 0x34653c: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x34653cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_346540:
    // 0x346540: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x346540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_346544:
    // 0x346544: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x346544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_346548:
    // 0x346548: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x346548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_34654c:
    // 0x34654c: 0xa3a700a0  sb          $a3, 0xA0($sp)
    ctx->pc = 0x34654cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 7));
label_346550:
    // 0x346550: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x346550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_346554:
    // 0x346554: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x346554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_346558:
    // 0x346558: 0x320f809  jalr        $t9
label_34655c:
    if (ctx->pc == 0x34655Cu) {
        ctx->pc = 0x34655Cu;
            // 0x34655c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x346560u;
        goto label_346560;
    }
    ctx->pc = 0x346558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346560u);
        ctx->pc = 0x34655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346558u;
            // 0x34655c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x346560u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x346560u; }
            if (ctx->pc != 0x346560u) { return; }
        }
        }
    }
    ctx->pc = 0x346560u;
label_346560:
    // 0x346560: 0xc082544  jal         func_209510
label_346564:
    if (ctx->pc == 0x346564u) {
        ctx->pc = 0x346564u;
            // 0x346564: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x346568u;
        goto label_346568;
    }
    ctx->pc = 0x346560u;
    SET_GPR_U32(ctx, 31, 0x346568u);
    ctx->pc = 0x346564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346560u;
            // 0x346564: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209510u;
    if (runtime->hasFunction(0x209510u)) {
        auto targetFn = runtime->lookupFunction(0x209510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346568u; }
        if (ctx->pc != 0x346568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209510_0x209510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346568u; }
        if (ctx->pc != 0x346568u) { return; }
    }
    ctx->pc = 0x346568u;
label_346568:
    // 0x346568: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_34656c:
    if (ctx->pc == 0x34656Cu) {
        ctx->pc = 0x34656Cu;
            // 0x34656c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x346570u;
        goto label_346570;
    }
    ctx->pc = 0x346568u;
    {
        const bool branch_taken_0x346568 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x34656Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346568u;
            // 0x34656c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346568) {
            ctx->pc = 0x346574u;
            goto label_346574;
        }
    }
    ctx->pc = 0x346570u;
label_346570:
    // 0x346570: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x346570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_346574:
    // 0x346574: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x346574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_346578:
    // 0x346578: 0xc082650  jal         func_209940
label_34657c:
    if (ctx->pc == 0x34657Cu) {
        ctx->pc = 0x34657Cu;
            // 0x34657c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x346580u;
        goto label_346580;
    }
    ctx->pc = 0x346578u;
    SET_GPR_U32(ctx, 31, 0x346580u);
    ctx->pc = 0x34657Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346578u;
            // 0x34657c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209940u;
    if (runtime->hasFunction(0x209940u)) {
        auto targetFn = runtime->lookupFunction(0x209940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346580u; }
        if (ctx->pc != 0x346580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209940_0x209940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346580u; }
        if (ctx->pc != 0x346580u) { return; }
    }
    ctx->pc = 0x346580u;
label_346580:
    // 0x346580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x346580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346584:
    // 0x346584: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x346584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_346588:
    // 0x346588: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x346588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34658c:
    // 0x34658c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x34658cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_346590:
    // 0x346590: 0xc0a7a88  jal         func_29EA20
label_346594:
    if (ctx->pc == 0x346594u) {
        ctx->pc = 0x346594u;
            // 0x346594: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x346598u;
        goto label_346598;
    }
    ctx->pc = 0x346590u;
    SET_GPR_U32(ctx, 31, 0x346598u);
    ctx->pc = 0x346594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x346590u;
            // 0x346594: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346598u; }
        if (ctx->pc != 0x346598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346598u; }
        if (ctx->pc != 0x346598u) { return; }
    }
    ctx->pc = 0x346598u;
label_346598:
    // 0x346598: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x346598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_34659c:
    // 0x34659c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34659cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3465a0:
    // 0x3465a0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3465a4:
    if (ctx->pc == 0x3465A4u) {
        ctx->pc = 0x3465A4u;
            // 0x3465a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3465A8u;
        goto label_3465a8;
    }
    ctx->pc = 0x3465A0u;
    {
        const bool branch_taken_0x3465a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3465A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3465A0u;
            // 0x3465a4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3465a0) {
            ctx->pc = 0x3465BCu;
            goto label_3465bc;
        }
    }
    ctx->pc = 0x3465A8u;
label_3465a8:
    // 0x3465a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3465a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3465ac:
    // 0x3465ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3465acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3465b0:
    // 0x3465b0: 0xc0822a8  jal         func_208AA0
label_3465b4:
    if (ctx->pc == 0x3465B4u) {
        ctx->pc = 0x3465B4u;
            // 0x3465b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3465B8u;
        goto label_3465b8;
    }
    ctx->pc = 0x3465B0u;
    SET_GPR_U32(ctx, 31, 0x3465B8u);
    ctx->pc = 0x3465B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3465B0u;
            // 0x3465b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208AA0u;
    if (runtime->hasFunction(0x208AA0u)) {
        auto targetFn = runtime->lookupFunction(0x208AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3465B8u; }
        if (ctx->pc != 0x3465B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208AA0_0x208aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3465B8u; }
        if (ctx->pc != 0x3465B8u) { return; }
    }
    ctx->pc = 0x3465B8u;
label_3465b8:
    // 0x3465b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3465b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3465bc:
    // 0x3465bc: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x3465bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_3465c0:
    // 0x3465c0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3465c4:
    if (ctx->pc == 0x3465C4u) {
        ctx->pc = 0x3465C4u;
            // 0x3465c4: 0x96420004  lhu         $v0, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x3465C8u;
        goto label_3465c8;
    }
    ctx->pc = 0x3465C0u;
    {
        const bool branch_taken_0x3465c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3465c0) {
            ctx->pc = 0x3465C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3465C0u;
            // 0x3465c4: 0x96420004  lhu         $v0, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346604u;
            goto label_346604;
        }
    }
    ctx->pc = 0x3465C8u;
label_3465c8:
    // 0x3465c8: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x3465c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_3465cc:
    // 0x3465cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3465ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3465d0:
    // 0x3465d0: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x3465d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_3465d4:
    // 0x3465d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3465d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3465d8:
    // 0x3465d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3465d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3465dc:
    // 0x3465dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3465e0:
    if (ctx->pc == 0x3465E0u) {
        ctx->pc = 0x3465E4u;
        goto label_3465e4;
    }
    ctx->pc = 0x3465DCu;
    {
        const bool branch_taken_0x3465dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3465dc) {
            ctx->pc = 0x346600u;
            goto label_346600;
        }
    }
    ctx->pc = 0x3465E4u;
label_3465e4:
    // 0x3465e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_3465e8:
    if (ctx->pc == 0x3465E8u) {
        ctx->pc = 0x3465ECu;
        goto label_3465ec;
    }
    ctx->pc = 0x3465E4u;
    {
        const bool branch_taken_0x3465e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3465e4) {
            ctx->pc = 0x346600u;
            goto label_346600;
        }
    }
    ctx->pc = 0x3465ECu;
label_3465ec:
    // 0x3465ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3465ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3465f0:
    // 0x3465f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3465f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3465f4:
    // 0x3465f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3465f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3465f8:
    // 0x3465f8: 0x320f809  jalr        $t9
label_3465fc:
    if (ctx->pc == 0x3465FCu) {
        ctx->pc = 0x3465FCu;
            // 0x3465fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x346600u;
        goto label_346600;
    }
    ctx->pc = 0x3465F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346600u);
        ctx->pc = 0x3465FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3465F8u;
            // 0x3465fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x346600u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x346600u; }
            if (ctx->pc != 0x346600u) { return; }
        }
        }
    }
    ctx->pc = 0x346600u;
label_346600:
    // 0x346600: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x346600u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_346604:
    // 0x346604: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_346608:
    if (ctx->pc == 0x346608u) {
        ctx->pc = 0x346608u;
            // 0x346608: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34660Cu;
        goto label_34660c;
    }
    ctx->pc = 0x346604u;
    {
        const bool branch_taken_0x346604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346604) {
            ctx->pc = 0x346608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346604u;
            // 0x346608: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x346648u;
            goto label_346648;
        }
    }
    ctx->pc = 0x34660Cu;
label_34660c:
    // 0x34660c: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x34660cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_346610:
    // 0x346610: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x346610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_346614:
    // 0x346614: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x346614u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_346618:
    // 0x346618: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x346618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_34661c:
    // 0x34661c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34661cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_346620:
    // 0x346620: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_346624:
    if (ctx->pc == 0x346624u) {
        ctx->pc = 0x346628u;
        goto label_346628;
    }
    ctx->pc = 0x346620u;
    {
        const bool branch_taken_0x346620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346620) {
            ctx->pc = 0x346644u;
            goto label_346644;
        }
    }
    ctx->pc = 0x346628u;
label_346628:
    // 0x346628: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_34662c:
    if (ctx->pc == 0x34662Cu) {
        ctx->pc = 0x346630u;
        goto label_346630;
    }
    ctx->pc = 0x346628u;
    {
        const bool branch_taken_0x346628 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x346628) {
            ctx->pc = 0x346644u;
            goto label_346644;
        }
    }
    ctx->pc = 0x346630u;
label_346630:
    // 0x346630: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x346630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_346634:
    // 0x346634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x346634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_346638:
    // 0x346638: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x346638u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34663c:
    // 0x34663c: 0x320f809  jalr        $t9
label_346640:
    if (ctx->pc == 0x346640u) {
        ctx->pc = 0x346640u;
            // 0x346640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x346644u;
        goto label_346644;
    }
    ctx->pc = 0x34663Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346644u);
        ctx->pc = 0x346640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34663Cu;
            // 0x346640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x346644u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x346644u; }
            if (ctx->pc != 0x346644u) { return; }
        }
        }
    }
    ctx->pc = 0x346644u;
label_346644:
    // 0x346644: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x346644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_346648:
    // 0x346648: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x346648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_34664c:
    // 0x34664c: 0xc0d19c0  jal         func_346700
label_346650:
    if (ctx->pc == 0x346650u) {
        ctx->pc = 0x346650u;
            // 0x346650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x346654u;
        goto label_346654;
    }
    ctx->pc = 0x34664Cu;
    SET_GPR_U32(ctx, 31, 0x346654u);
    ctx->pc = 0x346650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34664Cu;
            // 0x346650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x346700u;
    if (runtime->hasFunction(0x346700u)) {
        auto targetFn = runtime->lookupFunction(0x346700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346654u; }
        if (ctx->pc != 0x346654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00346700_0x346700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x346654u; }
        if (ctx->pc != 0x346654u) { return; }
    }
    ctx->pc = 0x346654u;
label_346654:
    // 0x346654: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x346654u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_346658:
    // 0x346658: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_34665c:
    if (ctx->pc == 0x34665Cu) {
        ctx->pc = 0x34665Cu;
            // 0x34665c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x346660u;
        goto label_346660;
    }
    ctx->pc = 0x346658u;
    {
        const bool branch_taken_0x346658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346658) {
            ctx->pc = 0x34665Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x346658u;
            // 0x34665c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34669Cu;
            goto label_34669c;
        }
    }
    ctx->pc = 0x346660u;
label_346660:
    // 0x346660: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x346660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_346664:
    // 0x346664: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x346664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_346668:
    // 0x346668: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x346668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_34666c:
    // 0x34666c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x34666cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_346670:
    // 0x346670: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x346670u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_346674:
    // 0x346674: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_346678:
    if (ctx->pc == 0x346678u) {
        ctx->pc = 0x34667Cu;
        goto label_34667c;
    }
    ctx->pc = 0x346674u;
    {
        const bool branch_taken_0x346674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x346674) {
            ctx->pc = 0x346698u;
            goto label_346698;
        }
    }
    ctx->pc = 0x34667Cu;
label_34667c:
    // 0x34667c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_346680:
    if (ctx->pc == 0x346680u) {
        ctx->pc = 0x346684u;
        goto label_346684;
    }
    ctx->pc = 0x34667Cu;
    {
        const bool branch_taken_0x34667c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34667c) {
            ctx->pc = 0x346698u;
            goto label_346698;
        }
    }
    ctx->pc = 0x346684u;
label_346684:
    // 0x346684: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x346684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_346688:
    // 0x346688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34668c:
    // 0x34668c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x34668cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_346690:
    // 0x346690: 0x320f809  jalr        $t9
label_346694:
    if (ctx->pc == 0x346694u) {
        ctx->pc = 0x346694u;
            // 0x346694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x346698u;
        goto label_346698;
    }
    ctx->pc = 0x346690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346698u);
        ctx->pc = 0x346694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346690u;
            // 0x346694: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x346698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x346698u; }
            if (ctx->pc != 0x346698u) { return; }
        }
        }
    }
    ctx->pc = 0x346698u;
label_346698:
    // 0x346698: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x346698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34669c:
    // 0x34669c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34669cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3466a0:
    // 0x3466a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3466a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3466a4:
    // 0x3466a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3466a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3466a8:
    // 0x3466a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3466a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3466ac:
    // 0x3466ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3466acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3466b0:
    // 0x3466b0: 0x3e00008  jr          $ra
label_3466b4:
    if (ctx->pc == 0x3466B4u) {
        ctx->pc = 0x3466B4u;
            // 0x3466b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3466B8u;
        goto label_3466b8;
    }
    ctx->pc = 0x3466B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3466B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3466B0u;
            // 0x3466b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3466B8u;
label_3466b8:
    // 0x3466b8: 0x0  nop
    ctx->pc = 0x3466b8u;
    // NOP
label_3466bc:
    // 0x3466bc: 0x0  nop
    ctx->pc = 0x3466bcu;
    // NOP
}
