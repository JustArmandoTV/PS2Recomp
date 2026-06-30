#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00364180
// Address: 0x364180 - 0x3645a0
void sub_00364180_0x364180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364180_0x364180");
#endif

    switch (ctx->pc) {
        case 0x364180u: goto label_364180;
        case 0x364184u: goto label_364184;
        case 0x364188u: goto label_364188;
        case 0x36418cu: goto label_36418c;
        case 0x364190u: goto label_364190;
        case 0x364194u: goto label_364194;
        case 0x364198u: goto label_364198;
        case 0x36419cu: goto label_36419c;
        case 0x3641a0u: goto label_3641a0;
        case 0x3641a4u: goto label_3641a4;
        case 0x3641a8u: goto label_3641a8;
        case 0x3641acu: goto label_3641ac;
        case 0x3641b0u: goto label_3641b0;
        case 0x3641b4u: goto label_3641b4;
        case 0x3641b8u: goto label_3641b8;
        case 0x3641bcu: goto label_3641bc;
        case 0x3641c0u: goto label_3641c0;
        case 0x3641c4u: goto label_3641c4;
        case 0x3641c8u: goto label_3641c8;
        case 0x3641ccu: goto label_3641cc;
        case 0x3641d0u: goto label_3641d0;
        case 0x3641d4u: goto label_3641d4;
        case 0x3641d8u: goto label_3641d8;
        case 0x3641dcu: goto label_3641dc;
        case 0x3641e0u: goto label_3641e0;
        case 0x3641e4u: goto label_3641e4;
        case 0x3641e8u: goto label_3641e8;
        case 0x3641ecu: goto label_3641ec;
        case 0x3641f0u: goto label_3641f0;
        case 0x3641f4u: goto label_3641f4;
        case 0x3641f8u: goto label_3641f8;
        case 0x3641fcu: goto label_3641fc;
        case 0x364200u: goto label_364200;
        case 0x364204u: goto label_364204;
        case 0x364208u: goto label_364208;
        case 0x36420cu: goto label_36420c;
        case 0x364210u: goto label_364210;
        case 0x364214u: goto label_364214;
        case 0x364218u: goto label_364218;
        case 0x36421cu: goto label_36421c;
        case 0x364220u: goto label_364220;
        case 0x364224u: goto label_364224;
        case 0x364228u: goto label_364228;
        case 0x36422cu: goto label_36422c;
        case 0x364230u: goto label_364230;
        case 0x364234u: goto label_364234;
        case 0x364238u: goto label_364238;
        case 0x36423cu: goto label_36423c;
        case 0x364240u: goto label_364240;
        case 0x364244u: goto label_364244;
        case 0x364248u: goto label_364248;
        case 0x36424cu: goto label_36424c;
        case 0x364250u: goto label_364250;
        case 0x364254u: goto label_364254;
        case 0x364258u: goto label_364258;
        case 0x36425cu: goto label_36425c;
        case 0x364260u: goto label_364260;
        case 0x364264u: goto label_364264;
        case 0x364268u: goto label_364268;
        case 0x36426cu: goto label_36426c;
        case 0x364270u: goto label_364270;
        case 0x364274u: goto label_364274;
        case 0x364278u: goto label_364278;
        case 0x36427cu: goto label_36427c;
        case 0x364280u: goto label_364280;
        case 0x364284u: goto label_364284;
        case 0x364288u: goto label_364288;
        case 0x36428cu: goto label_36428c;
        case 0x364290u: goto label_364290;
        case 0x364294u: goto label_364294;
        case 0x364298u: goto label_364298;
        case 0x36429cu: goto label_36429c;
        case 0x3642a0u: goto label_3642a0;
        case 0x3642a4u: goto label_3642a4;
        case 0x3642a8u: goto label_3642a8;
        case 0x3642acu: goto label_3642ac;
        case 0x3642b0u: goto label_3642b0;
        case 0x3642b4u: goto label_3642b4;
        case 0x3642b8u: goto label_3642b8;
        case 0x3642bcu: goto label_3642bc;
        case 0x3642c0u: goto label_3642c0;
        case 0x3642c4u: goto label_3642c4;
        case 0x3642c8u: goto label_3642c8;
        case 0x3642ccu: goto label_3642cc;
        case 0x3642d0u: goto label_3642d0;
        case 0x3642d4u: goto label_3642d4;
        case 0x3642d8u: goto label_3642d8;
        case 0x3642dcu: goto label_3642dc;
        case 0x3642e0u: goto label_3642e0;
        case 0x3642e4u: goto label_3642e4;
        case 0x3642e8u: goto label_3642e8;
        case 0x3642ecu: goto label_3642ec;
        case 0x3642f0u: goto label_3642f0;
        case 0x3642f4u: goto label_3642f4;
        case 0x3642f8u: goto label_3642f8;
        case 0x3642fcu: goto label_3642fc;
        case 0x364300u: goto label_364300;
        case 0x364304u: goto label_364304;
        case 0x364308u: goto label_364308;
        case 0x36430cu: goto label_36430c;
        case 0x364310u: goto label_364310;
        case 0x364314u: goto label_364314;
        case 0x364318u: goto label_364318;
        case 0x36431cu: goto label_36431c;
        case 0x364320u: goto label_364320;
        case 0x364324u: goto label_364324;
        case 0x364328u: goto label_364328;
        case 0x36432cu: goto label_36432c;
        case 0x364330u: goto label_364330;
        case 0x364334u: goto label_364334;
        case 0x364338u: goto label_364338;
        case 0x36433cu: goto label_36433c;
        case 0x364340u: goto label_364340;
        case 0x364344u: goto label_364344;
        case 0x364348u: goto label_364348;
        case 0x36434cu: goto label_36434c;
        case 0x364350u: goto label_364350;
        case 0x364354u: goto label_364354;
        case 0x364358u: goto label_364358;
        case 0x36435cu: goto label_36435c;
        case 0x364360u: goto label_364360;
        case 0x364364u: goto label_364364;
        case 0x364368u: goto label_364368;
        case 0x36436cu: goto label_36436c;
        case 0x364370u: goto label_364370;
        case 0x364374u: goto label_364374;
        case 0x364378u: goto label_364378;
        case 0x36437cu: goto label_36437c;
        case 0x364380u: goto label_364380;
        case 0x364384u: goto label_364384;
        case 0x364388u: goto label_364388;
        case 0x36438cu: goto label_36438c;
        case 0x364390u: goto label_364390;
        case 0x364394u: goto label_364394;
        case 0x364398u: goto label_364398;
        case 0x36439cu: goto label_36439c;
        case 0x3643a0u: goto label_3643a0;
        case 0x3643a4u: goto label_3643a4;
        case 0x3643a8u: goto label_3643a8;
        case 0x3643acu: goto label_3643ac;
        case 0x3643b0u: goto label_3643b0;
        case 0x3643b4u: goto label_3643b4;
        case 0x3643b8u: goto label_3643b8;
        case 0x3643bcu: goto label_3643bc;
        case 0x3643c0u: goto label_3643c0;
        case 0x3643c4u: goto label_3643c4;
        case 0x3643c8u: goto label_3643c8;
        case 0x3643ccu: goto label_3643cc;
        case 0x3643d0u: goto label_3643d0;
        case 0x3643d4u: goto label_3643d4;
        case 0x3643d8u: goto label_3643d8;
        case 0x3643dcu: goto label_3643dc;
        case 0x3643e0u: goto label_3643e0;
        case 0x3643e4u: goto label_3643e4;
        case 0x3643e8u: goto label_3643e8;
        case 0x3643ecu: goto label_3643ec;
        case 0x3643f0u: goto label_3643f0;
        case 0x3643f4u: goto label_3643f4;
        case 0x3643f8u: goto label_3643f8;
        case 0x3643fcu: goto label_3643fc;
        case 0x364400u: goto label_364400;
        case 0x364404u: goto label_364404;
        case 0x364408u: goto label_364408;
        case 0x36440cu: goto label_36440c;
        case 0x364410u: goto label_364410;
        case 0x364414u: goto label_364414;
        case 0x364418u: goto label_364418;
        case 0x36441cu: goto label_36441c;
        case 0x364420u: goto label_364420;
        case 0x364424u: goto label_364424;
        case 0x364428u: goto label_364428;
        case 0x36442cu: goto label_36442c;
        case 0x364430u: goto label_364430;
        case 0x364434u: goto label_364434;
        case 0x364438u: goto label_364438;
        case 0x36443cu: goto label_36443c;
        case 0x364440u: goto label_364440;
        case 0x364444u: goto label_364444;
        case 0x364448u: goto label_364448;
        case 0x36444cu: goto label_36444c;
        case 0x364450u: goto label_364450;
        case 0x364454u: goto label_364454;
        case 0x364458u: goto label_364458;
        case 0x36445cu: goto label_36445c;
        case 0x364460u: goto label_364460;
        case 0x364464u: goto label_364464;
        case 0x364468u: goto label_364468;
        case 0x36446cu: goto label_36446c;
        case 0x364470u: goto label_364470;
        case 0x364474u: goto label_364474;
        case 0x364478u: goto label_364478;
        case 0x36447cu: goto label_36447c;
        case 0x364480u: goto label_364480;
        case 0x364484u: goto label_364484;
        case 0x364488u: goto label_364488;
        case 0x36448cu: goto label_36448c;
        case 0x364490u: goto label_364490;
        case 0x364494u: goto label_364494;
        case 0x364498u: goto label_364498;
        case 0x36449cu: goto label_36449c;
        case 0x3644a0u: goto label_3644a0;
        case 0x3644a4u: goto label_3644a4;
        case 0x3644a8u: goto label_3644a8;
        case 0x3644acu: goto label_3644ac;
        case 0x3644b0u: goto label_3644b0;
        case 0x3644b4u: goto label_3644b4;
        case 0x3644b8u: goto label_3644b8;
        case 0x3644bcu: goto label_3644bc;
        case 0x3644c0u: goto label_3644c0;
        case 0x3644c4u: goto label_3644c4;
        case 0x3644c8u: goto label_3644c8;
        case 0x3644ccu: goto label_3644cc;
        case 0x3644d0u: goto label_3644d0;
        case 0x3644d4u: goto label_3644d4;
        case 0x3644d8u: goto label_3644d8;
        case 0x3644dcu: goto label_3644dc;
        case 0x3644e0u: goto label_3644e0;
        case 0x3644e4u: goto label_3644e4;
        case 0x3644e8u: goto label_3644e8;
        case 0x3644ecu: goto label_3644ec;
        case 0x3644f0u: goto label_3644f0;
        case 0x3644f4u: goto label_3644f4;
        case 0x3644f8u: goto label_3644f8;
        case 0x3644fcu: goto label_3644fc;
        case 0x364500u: goto label_364500;
        case 0x364504u: goto label_364504;
        case 0x364508u: goto label_364508;
        case 0x36450cu: goto label_36450c;
        case 0x364510u: goto label_364510;
        case 0x364514u: goto label_364514;
        case 0x364518u: goto label_364518;
        case 0x36451cu: goto label_36451c;
        case 0x364520u: goto label_364520;
        case 0x364524u: goto label_364524;
        case 0x364528u: goto label_364528;
        case 0x36452cu: goto label_36452c;
        case 0x364530u: goto label_364530;
        case 0x364534u: goto label_364534;
        case 0x364538u: goto label_364538;
        case 0x36453cu: goto label_36453c;
        case 0x364540u: goto label_364540;
        case 0x364544u: goto label_364544;
        case 0x364548u: goto label_364548;
        case 0x36454cu: goto label_36454c;
        case 0x364550u: goto label_364550;
        case 0x364554u: goto label_364554;
        case 0x364558u: goto label_364558;
        case 0x36455cu: goto label_36455c;
        case 0x364560u: goto label_364560;
        case 0x364564u: goto label_364564;
        case 0x364568u: goto label_364568;
        case 0x36456cu: goto label_36456c;
        case 0x364570u: goto label_364570;
        case 0x364574u: goto label_364574;
        case 0x364578u: goto label_364578;
        case 0x36457cu: goto label_36457c;
        case 0x364580u: goto label_364580;
        case 0x364584u: goto label_364584;
        case 0x364588u: goto label_364588;
        case 0x36458cu: goto label_36458c;
        case 0x364590u: goto label_364590;
        case 0x364594u: goto label_364594;
        case 0x364598u: goto label_364598;
        case 0x36459cu: goto label_36459c;
        default: break;
    }

    ctx->pc = 0x364180u;

label_364180:
    // 0x364180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x364180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_364184:
    // 0x364184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x364184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_364188:
    // 0x364188: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x364188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_36418c:
    // 0x36418c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_364190:
    // 0x364190: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x364190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_364194:
    // 0x364194: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x364194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_364198:
    // 0x364198: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x364198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_36419c:
    // 0x36419c: 0x8c63069c  lw          $v1, 0x69C($v1)
    ctx->pc = 0x36419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1692)));
label_3641a0:
    // 0x3641a0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_3641a4:
    if (ctx->pc == 0x3641A4u) {
        ctx->pc = 0x3641A4u;
            // 0x3641a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3641A8u;
        goto label_3641a8;
    }
    ctx->pc = 0x3641A0u;
    {
        const bool branch_taken_0x3641a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3641A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3641A0u;
            // 0x3641a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3641a0) {
            ctx->pc = 0x364218u;
            goto label_364218;
        }
    }
    ctx->pc = 0x3641A8u;
label_3641a8:
    // 0x3641a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3641a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3641ac:
    // 0x3641ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3641acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3641b0:
    // 0x3641b0: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x3641b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3641b4:
    // 0x3641b4: 0x27a9005f  addiu       $t1, $sp, 0x5F
    ctx->pc = 0x3641b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 95));
label_3641b8:
    // 0x3641b8: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x3641b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_3641bc:
    // 0x3641bc: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3641bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3641c0:
    // 0x3641c0: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x3641c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3641c4:
    // 0x3641c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3641c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3641c8:
    // 0x3641c8: 0xa3a4005f  sb          $a0, 0x5F($sp)
    ctx->pc = 0x3641c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 95), (uint8_t)GPR_U32(ctx, 4));
label_3641cc:
    // 0x3641cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3641ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3641d0:
    // 0x3641d0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3641d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3641d4:
    // 0x3641d4: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x3641d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3641d8:
    // 0x3641d8: 0x244405f0  addiu       $a0, $v0, 0x5F0
    ctx->pc = 0x3641d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
label_3641dc:
    // 0x3641dc: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x3641dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
label_3641e0:
    // 0x3641e0: 0xc0b8704  jal         func_2E1C10
label_3641e4:
    if (ctx->pc == 0x3641E4u) {
        ctx->pc = 0x3641E4u;
            // 0x3641e4: 0x24470820  addiu       $a3, $v0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
        ctx->pc = 0x3641E8u;
        goto label_3641e8;
    }
    ctx->pc = 0x3641E0u;
    SET_GPR_U32(ctx, 31, 0x3641E8u);
    ctx->pc = 0x3641E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3641E0u;
            // 0x3641e4: 0x24470820  addiu       $a3, $v0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3641E8u; }
        if (ctx->pc != 0x3641E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3641E8u; }
        if (ctx->pc != 0x3641E8u) { return; }
    }
    ctx->pc = 0x3641E8u;
label_3641e8:
    // 0x3641e8: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3641e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3641ec:
    // 0x3641ec: 0x24500580  addiu       $s0, $v0, 0x580
    ctx->pc = 0x3641ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
label_3641f0:
    // 0x3641f0: 0x94420646  lhu         $v0, 0x646($v0)
    ctx->pc = 0x3641f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1606)));
label_3641f4:
    // 0x3641f4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3641f8:
    if (ctx->pc == 0x3641F8u) {
        ctx->pc = 0x3641F8u;
            // 0x3641f8: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->pc = 0x3641FCu;
        goto label_3641fc;
    }
    ctx->pc = 0x3641F4u;
    {
        const bool branch_taken_0x3641f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3641f4) {
            ctx->pc = 0x3641F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3641F4u;
            // 0x3641f8: 0x8e220074  lw          $v0, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36421Cu;
            goto label_36421c;
        }
    }
    ctx->pc = 0x3641FCu;
label_3641fc:
    // 0x3641fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3641fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364200:
    // 0x364200: 0xc0ab808  jal         func_2AE020
label_364204:
    if (ctx->pc == 0x364204u) {
        ctx->pc = 0x364204u;
            // 0x364204: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x364208u;
        goto label_364208;
    }
    ctx->pc = 0x364200u;
    SET_GPR_U32(ctx, 31, 0x364208u);
    ctx->pc = 0x364204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364200u;
            // 0x364204: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364208u; }
        if (ctx->pc != 0x364208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364208u; }
        if (ctx->pc != 0x364208u) { return; }
    }
    ctx->pc = 0x364208u;
label_364208:
    // 0x364208: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x364208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_36420c:
    // 0x36420c: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x36420cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_364210:
    // 0x364210: 0xc4401360  lwc1        $f0, 0x1360($v0)
    ctx->pc = 0x364210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_364214:
    // 0x364214: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x364214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_364218:
    // 0x364218: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x364218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_36421c:
    // 0x36421c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x36421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_364220:
    // 0x364220: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x364220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_364224:
    // 0x364224: 0x24a54b50  addiu       $a1, $a1, 0x4B50
    ctx->pc = 0x364224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
label_364228:
    // 0x364228: 0xac430db8  sw          $v1, 0xDB8($v0)
    ctx->pc = 0x364228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3512), GPR_U32(ctx, 3));
label_36422c:
    // 0x36422c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x36422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_364230:
    // 0x364230: 0xc04cc04  jal         func_133010
label_364234:
    if (ctx->pc == 0x364234u) {
        ctx->pc = 0x364234u;
            // 0x364234: 0x24440330  addiu       $a0, $v0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
        ctx->pc = 0x364238u;
        goto label_364238;
    }
    ctx->pc = 0x364230u;
    SET_GPR_U32(ctx, 31, 0x364238u);
    ctx->pc = 0x364234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364230u;
            // 0x364234: 0x24440330  addiu       $a0, $v0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364238u; }
        if (ctx->pc != 0x364238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364238u; }
        if (ctx->pc != 0x364238u) { return; }
    }
    ctx->pc = 0x364238u;
label_364238:
    // 0x364238: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x364238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_36423c:
    // 0x36423c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36423cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_364240:
    // 0x364240: 0x8c420d74  lw          $v0, 0xD74($v0)
    ctx->pc = 0x364240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3444)));
label_364244:
    // 0x364244: 0xac4302b0  sw          $v1, 0x2B0($v0)
    ctx->pc = 0x364244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
label_364248:
    // 0x364248: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x364248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_36424c:
    // 0x36424c: 0x245005f0  addiu       $s0, $v0, 0x5F0
    ctx->pc = 0x36424cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
label_364250:
    // 0x364250: 0x244402e0  addiu       $a0, $v0, 0x2E0
    ctx->pc = 0x364250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
label_364254:
    // 0x364254: 0xc04cc04  jal         func_133010
label_364258:
    if (ctx->pc == 0x364258u) {
        ctx->pc = 0x364258u;
            // 0x364258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36425Cu;
        goto label_36425c;
    }
    ctx->pc = 0x364254u;
    SET_GPR_U32(ctx, 31, 0x36425Cu);
    ctx->pc = 0x364258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364254u;
            // 0x364258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36425Cu; }
        if (ctx->pc != 0x36425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36425Cu; }
        if (ctx->pc != 0x36425Cu) { return; }
    }
    ctx->pc = 0x36425Cu;
label_36425c:
    // 0x36425c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x36425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_364260:
    // 0x364260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x364260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364264:
    // 0x364264: 0xc075318  jal         func_1D4C60
label_364268:
    if (ctx->pc == 0x364268u) {
        ctx->pc = 0x364268u;
            // 0x364268: 0x24440560  addiu       $a0, $v0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
        ctx->pc = 0x36426Cu;
        goto label_36426c;
    }
    ctx->pc = 0x364264u;
    SET_GPR_U32(ctx, 31, 0x36426Cu);
    ctx->pc = 0x364268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364264u;
            // 0x364268: 0x24440560  addiu       $a0, $v0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36426Cu; }
        if (ctx->pc != 0x36426Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36426Cu; }
        if (ctx->pc != 0x36426Cu) { return; }
    }
    ctx->pc = 0x36426Cu;
label_36426c:
    // 0x36426c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x36426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_364270:
    // 0x364270: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x364270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_364274:
    // 0x364274: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x364274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_364278:
    // 0x364278: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x364278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_36427c:
    // 0x36427c: 0xc0c6250  jal         func_318940
label_364280:
    if (ctx->pc == 0x364280u) {
        ctx->pc = 0x364280u;
            // 0x364280: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364284u;
        goto label_364284;
    }
    ctx->pc = 0x36427Cu;
    SET_GPR_U32(ctx, 31, 0x364284u);
    ctx->pc = 0x364280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36427Cu;
            // 0x364280: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364284u; }
        if (ctx->pc != 0x364284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364284u; }
        if (ctx->pc != 0x364284u) { return; }
    }
    ctx->pc = 0x364284u;
label_364284:
    // 0x364284: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x364284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_364288:
    // 0x364288: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x364288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36428c:
    // 0x36428c: 0x24450560  addiu       $a1, $v0, 0x560
    ctx->pc = 0x36428cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_364290:
    // 0x364290: 0x244408f0  addiu       $a0, $v0, 0x8F0
    ctx->pc = 0x364290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
label_364294:
    // 0x364294: 0xc0c6250  jal         func_318940
label_364298:
    if (ctx->pc == 0x364298u) {
        ctx->pc = 0x364298u;
            // 0x364298: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36429Cu;
        goto label_36429c;
    }
    ctx->pc = 0x364294u;
    SET_GPR_U32(ctx, 31, 0x36429Cu);
    ctx->pc = 0x364298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364294u;
            // 0x364298: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36429Cu; }
        if (ctx->pc != 0x36429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36429Cu; }
        if (ctx->pc != 0x36429Cu) { return; }
    }
    ctx->pc = 0x36429Cu;
label_36429c:
    // 0x36429c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x36429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3642a0:
    // 0x3642a0: 0xc0b9210  jal         func_2E4840
label_3642a4:
    if (ctx->pc == 0x3642A4u) {
        ctx->pc = 0x3642A4u;
            // 0x3642a4: 0x244407e0  addiu       $a0, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->pc = 0x3642A8u;
        goto label_3642a8;
    }
    ctx->pc = 0x3642A0u;
    SET_GPR_U32(ctx, 31, 0x3642A8u);
    ctx->pc = 0x3642A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3642A0u;
            // 0x3642a4: 0x244407e0  addiu       $a0, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3642A8u; }
        if (ctx->pc != 0x3642A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3642A8u; }
        if (ctx->pc != 0x3642A8u) { return; }
    }
    ctx->pc = 0x3642A8u;
label_3642a8:
    // 0x3642a8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x3642a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_3642ac:
    // 0x3642ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3642acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3642b0:
    // 0x3642b0: 0x96060052  lhu         $a2, 0x52($s0)
    ctx->pc = 0x3642b0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
label_3642b4:
    // 0x3642b4: 0x96030050  lhu         $v1, 0x50($s0)
    ctx->pc = 0x3642b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_3642b8:
    // 0x3642b8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x3642b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3642bc:
    // 0x3642bc: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3642bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_3642c0:
    // 0x3642c0: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x3642c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3642c4:
    // 0x3642c4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x3642c4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3642c8:
    // 0x3642c8: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x3642c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_3642cc:
    // 0x3642cc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3642ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3642d0:
    // 0x3642d0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3642d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3642d4:
    // 0x3642d4: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x3642d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3642d8:
    // 0x3642d8: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x3642d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3642dc:
    // 0x3642dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3642dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3642e0:
    // 0x3642e0: 0xc04cc90  jal         func_133240
label_3642e4:
    if (ctx->pc == 0x3642E4u) {
        ctx->pc = 0x3642E4u;
            // 0x3642e4: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x3642E8u;
        goto label_3642e8;
    }
    ctx->pc = 0x3642E0u;
    SET_GPR_U32(ctx, 31, 0x3642E8u);
    ctx->pc = 0x3642E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3642E0u;
            // 0x3642e4: 0xe22821  addu        $a1, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3642E8u; }
        if (ctx->pc != 0x3642E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3642E8u; }
        if (ctx->pc != 0x3642E8u) { return; }
    }
    ctx->pc = 0x3642E8u;
label_3642e8:
    // 0x3642e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3642e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3642ec:
    // 0x3642ec: 0xc04cc44  jal         func_133110
label_3642f0:
    if (ctx->pc == 0x3642F0u) {
        ctx->pc = 0x3642F0u;
            // 0x3642f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3642F4u;
        goto label_3642f4;
    }
    ctx->pc = 0x3642ECu;
    SET_GPR_U32(ctx, 31, 0x3642F4u);
    ctx->pc = 0x3642F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3642ECu;
            // 0x3642f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3642F4u; }
        if (ctx->pc != 0x3642F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3642F4u; }
        if (ctx->pc != 0x3642F4u) { return; }
    }
    ctx->pc = 0x3642F4u;
label_3642f4:
    // 0x3642f4: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3642f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3642f8:
    // 0x3642f8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3642f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3642fc:
    // 0x3642fc: 0x24440560  addiu       $a0, $v0, 0x560
    ctx->pc = 0x3642fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
label_364300:
    // 0x364300: 0xc075378  jal         func_1D4DE0
label_364304:
    if (ctx->pc == 0x364304u) {
        ctx->pc = 0x364304u;
            // 0x364304: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364308u;
        goto label_364308;
    }
    ctx->pc = 0x364300u;
    SET_GPR_U32(ctx, 31, 0x364308u);
    ctx->pc = 0x364304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364300u;
            // 0x364304: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364308u; }
        if (ctx->pc != 0x364308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364308u; }
        if (ctx->pc != 0x364308u) { return; }
    }
    ctx->pc = 0x364308u;
label_364308:
    // 0x364308: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x364308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_36430c:
    // 0x36430c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36430cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_364310:
    // 0x364310: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x364310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_364314:
    // 0x364314: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x364314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_364318:
    // 0x364318: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x364318u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_36431c:
    // 0x36431c: 0xc0c753c  jal         func_31D4F0
label_364320:
    if (ctx->pc == 0x364320u) {
        ctx->pc = 0x364320u;
            // 0x364320: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->pc = 0x364324u;
        goto label_364324;
    }
    ctx->pc = 0x36431Cu;
    SET_GPR_U32(ctx, 31, 0x364324u);
    ctx->pc = 0x364320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36431Cu;
            // 0x364320: 0x2444092c  addiu       $a0, $v0, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364324u; }
        if (ctx->pc != 0x364324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364324u; }
        if (ctx->pc != 0x364324u) { return; }
    }
    ctx->pc = 0x364324u;
label_364324:
    // 0x364324: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x364324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_364328:
    // 0x364328: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x364328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_36432c:
    // 0x36432c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36432cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_364330:
    // 0x364330: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x364330u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_364334:
    // 0x364334: 0xc0c753c  jal         func_31D4F0
label_364338:
    if (ctx->pc == 0x364338u) {
        ctx->pc = 0x364338u;
            // 0x364338: 0x2444087c  addiu       $a0, $v0, 0x87C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2172));
        ctx->pc = 0x36433Cu;
        goto label_36433c;
    }
    ctx->pc = 0x364334u;
    SET_GPR_U32(ctx, 31, 0x36433Cu);
    ctx->pc = 0x364338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364334u;
            // 0x364338: 0x2444087c  addiu       $a0, $v0, 0x87C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36433Cu; }
        if (ctx->pc != 0x36433Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36433Cu; }
        if (ctx->pc != 0x36433Cu) { return; }
    }
    ctx->pc = 0x36433Cu;
label_36433c:
    // 0x36433c: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x36433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_364340:
    // 0x364340: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x364340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_364344:
    // 0x364344: 0x0  nop
    ctx->pc = 0x364344u;
    // NOP
label_364348:
    // 0x364348: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x364348u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_36434c:
    // 0x36434c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x36434cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_364350:
    // 0x364350: 0xc04cbd8  jal         func_132F60
label_364354:
    if (ctx->pc == 0x364354u) {
        ctx->pc = 0x364354u;
            // 0x364354: 0x24440b10  addiu       $a0, $v0, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
        ctx->pc = 0x364358u;
        goto label_364358;
    }
    ctx->pc = 0x364350u;
    SET_GPR_U32(ctx, 31, 0x364358u);
    ctx->pc = 0x364354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364350u;
            // 0x364354: 0x24440b10  addiu       $a0, $v0, 0xB10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364358u; }
        if (ctx->pc != 0x364358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364358u; }
        if (ctx->pc != 0x364358u) { return; }
    }
    ctx->pc = 0x364358u;
label_364358:
    // 0x364358: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x364358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_36435c:
    // 0x36435c: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x36435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_364360:
    // 0x364360: 0x2403fdde  addiu       $v1, $zero, -0x222
    ctx->pc = 0x364360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966750));
label_364364:
    // 0x364364: 0xac440af4  sw          $a0, 0xAF4($v0)
    ctx->pc = 0x364364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2804), GPR_U32(ctx, 4));
label_364368:
    // 0x364368: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x364368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_36436c:
    // 0x36436c: 0xac430b00  sw          $v1, 0xB00($v0)
    ctx->pc = 0x36436cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2816), GPR_U32(ctx, 3));
label_364370:
    // 0x364370: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x364370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_364374:
    // 0x364374: 0x8c820da0  lw          $v0, 0xDA0($a0)
    ctx->pc = 0x364374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_364378:
    // 0x364378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x364378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_36437c:
    // 0x36437c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_364380:
    if (ctx->pc == 0x364380u) {
        ctx->pc = 0x364380u;
            // 0x364380: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x364384u;
        goto label_364384;
    }
    ctx->pc = 0x36437Cu;
    {
        const bool branch_taken_0x36437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36437c) {
            ctx->pc = 0x364380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36437Cu;
            // 0x364380: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3643A8u;
            goto label_3643a8;
        }
    }
    ctx->pc = 0x364384u;
label_364384:
    // 0x364384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x364384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_364388:
    // 0x364388: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x364388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_36438c:
    // 0x36438c: 0x320f809  jalr        $t9
label_364390:
    if (ctx->pc == 0x364390u) {
        ctx->pc = 0x364390u;
            // 0x364390: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x364394u;
        goto label_364394;
    }
    ctx->pc = 0x36438Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364394u);
        ctx->pc = 0x364390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36438Cu;
            // 0x364390: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364394u; }
            if (ctx->pc != 0x364394u) { return; }
        }
        }
    }
    ctx->pc = 0x364394u;
label_364394:
    // 0x364394: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x364394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_364398:
    // 0x364398: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x364398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_36439c:
    // 0x36439c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x36439cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3643a0:
    // 0x3643a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3643a4:
    if (ctx->pc == 0x3643A4u) {
        ctx->pc = 0x3643A4u;
            // 0x3643a4: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->pc = 0x3643A8u;
        goto label_3643a8;
    }
    ctx->pc = 0x3643A0u;
    {
        const bool branch_taken_0x3643a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3643A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3643A0u;
            // 0x3643a4: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3643a0) {
            ctx->pc = 0x3643B4u;
            goto label_3643b4;
        }
    }
    ctx->pc = 0x3643A8u;
label_3643a8:
    // 0x3643a8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3643a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3643ac:
    // 0x3643ac: 0x320f809  jalr        $t9
label_3643b0:
    if (ctx->pc == 0x3643B0u) {
        ctx->pc = 0x3643B0u;
            // 0x3643b0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3643B4u;
        goto label_3643b4;
    }
    ctx->pc = 0x3643ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3643B4u);
        ctx->pc = 0x3643B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3643ACu;
            // 0x3643b0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3643B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3643B4u; }
            if (ctx->pc != 0x3643B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3643B4u;
label_3643b4:
    // 0x3643b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3643b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3643b8:
    // 0x3643b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3643b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3643bc:
    // 0x3643bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3643bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3643c0:
    // 0x3643c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3643c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3643c4:
    // 0x3643c4: 0x3e00008  jr          $ra
label_3643c8:
    if (ctx->pc == 0x3643C8u) {
        ctx->pc = 0x3643C8u;
            // 0x3643c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3643CCu;
        goto label_3643cc;
    }
    ctx->pc = 0x3643C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3643C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3643C4u;
            // 0x3643c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3643CCu;
label_3643cc:
    // 0x3643cc: 0x0  nop
    ctx->pc = 0x3643ccu;
    // NOP
label_3643d0:
    // 0x3643d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3643d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3643d4:
    // 0x3643d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3643d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3643d8:
    // 0x3643d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3643d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3643dc:
    // 0x3643dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3643dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3643e0:
    // 0x3643e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3643e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3643e4:
    // 0x3643e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3643e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3643e8:
    // 0x3643e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3643e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3643ec:
    // 0x3643ec: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x3643ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3643f0:
    // 0x3643f0: 0x14a30063  bne         $a1, $v1, . + 4 + (0x63 << 2)
label_3643f4:
    if (ctx->pc == 0x3643F4u) {
        ctx->pc = 0x3643F4u;
            // 0x3643f4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3643F8u;
        goto label_3643f8;
    }
    ctx->pc = 0x3643F0u;
    {
        const bool branch_taken_0x3643f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3643F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3643F0u;
            // 0x3643f4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3643f0) {
            ctx->pc = 0x364580u;
            goto label_364580;
        }
    }
    ctx->pc = 0x3643F8u;
label_3643f8:
    // 0x3643f8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3643f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3643fc:
    // 0x3643fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3643fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364400:
    // 0x364400: 0x8c634018  lw          $v1, 0x4018($v1)
    ctx->pc = 0x364400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16408)));
label_364404:
    // 0x364404: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x364404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_364408:
    // 0x364408: 0x8c660074  lw          $a2, 0x74($v1)
    ctx->pc = 0x364408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_36440c:
    // 0x36440c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x36440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_364410:
    // 0x364410: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x364410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_364414:
    // 0x364414: 0x54710003  bnel        $v1, $s1, . + 4 + (0x3 << 2)
label_364418:
    if (ctx->pc == 0x364418u) {
        ctx->pc = 0x364418u;
            // 0x364418: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x36441Cu;
        goto label_36441c;
    }
    ctx->pc = 0x364414u;
    {
        const bool branch_taken_0x364414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x364414) {
            ctx->pc = 0x364418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364414u;
            // 0x364418: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364424u;
            goto label_364424;
        }
    }
    ctx->pc = 0x36441Cu;
label_36441c:
    // 0x36441c: 0x10000005  b           . + 4 + (0x5 << 2)
label_364420:
    if (ctx->pc == 0x364420u) {
        ctx->pc = 0x364420u;
            // 0x364420: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364424u;
        goto label_364424;
    }
    ctx->pc = 0x36441Cu;
    {
        const bool branch_taken_0x36441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36441Cu;
            // 0x364420: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36441c) {
            ctx->pc = 0x364434u;
            goto label_364434;
        }
    }
    ctx->pc = 0x364424u;
label_364424:
    // 0x364424: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x364424u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_364428:
    // 0x364428: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_36442c:
    if (ctx->pc == 0x36442Cu) {
        ctx->pc = 0x36442Cu;
            // 0x36442c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x364430u;
        goto label_364430;
    }
    ctx->pc = 0x364428u;
    {
        const bool branch_taken_0x364428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364428u;
            // 0x36442c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364428) {
            ctx->pc = 0x36440Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36440c;
        }
    }
    ctx->pc = 0x364430u;
label_364430:
    // 0x364430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x364430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_364434:
    // 0x364434: 0x50600053  beql        $v1, $zero, . + 4 + (0x53 << 2)
label_364438:
    if (ctx->pc == 0x364438u) {
        ctx->pc = 0x364438u;
            // 0x364438: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x36443Cu;
        goto label_36443c;
    }
    ctx->pc = 0x364434u;
    {
        const bool branch_taken_0x364434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364434) {
            ctx->pc = 0x364438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x364434u;
            // 0x364438: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x364584u;
            goto label_364584;
        }
    }
    ctx->pc = 0x36443Cu;
label_36443c:
    // 0x36443c: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x36443cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_364440:
    // 0x364440: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x364440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_364444:
    // 0x364444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x364444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364448:
    // 0x364448: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x364448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
label_36444c:
    // 0x36444c: 0xac910074  sw          $s1, 0x74($a0)
    ctx->pc = 0x36444cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 17));
label_364450:
    // 0x364450: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x364450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_364454:
    // 0x364454: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x364454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_364458:
    // 0x364458: 0x320f809  jalr        $t9
label_36445c:
    if (ctx->pc == 0x36445Cu) {
        ctx->pc = 0x36445Cu;
            // 0x36445c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x364460u;
        goto label_364460;
    }
    ctx->pc = 0x364458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364460u);
        ctx->pc = 0x36445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364458u;
            // 0x36445c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364460u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364460u; }
            if (ctx->pc != 0x364460u) { return; }
        }
        }
    }
    ctx->pc = 0x364460u;
label_364460:
    // 0x364460: 0x26240440  addiu       $a0, $s1, 0x440
    ctx->pc = 0x364460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
label_364464:
    // 0x364464: 0x26320580  addiu       $s2, $s1, 0x580
    ctx->pc = 0x364464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_364468:
    // 0x364468: 0xc0754b4  jal         func_1D52D0
label_36446c:
    if (ctx->pc == 0x36446Cu) {
        ctx->pc = 0x36446Cu;
            // 0x36446c: 0x26330560  addiu       $s3, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x364470u;
        goto label_364470;
    }
    ctx->pc = 0x364468u;
    SET_GPR_U32(ctx, 31, 0x364470u);
    ctx->pc = 0x36446Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x364468u;
            // 0x36446c: 0x26330560  addiu       $s3, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364470u; }
        if (ctx->pc != 0x364470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364470u; }
        if (ctx->pc != 0x364470u) { return; }
    }
    ctx->pc = 0x364470u;
label_364470:
    // 0x364470: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x364470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_364474:
    // 0x364474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x364474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_364478:
    // 0x364478: 0xae260dbc  sw          $a2, 0xDBC($s1)
    ctx->pc = 0x364478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3516), GPR_U32(ctx, 6));
label_36447c:
    // 0x36447c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_364480:
    // 0x364480: 0xae260694  sw          $a2, 0x694($s1)
    ctx->pc = 0x364480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1684), GPR_U32(ctx, 6));
label_364484:
    // 0x364484: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x364484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_364488:
    // 0x364488: 0xac66002c  sw          $a2, 0x2C($v1)
    ctx->pc = 0x364488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 6));
label_36448c:
    // 0x36448c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_364490:
    // 0x364490: 0xe6200de0  swc1        $f0, 0xDE0($s1)
    ctx->pc = 0x364490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
label_364494:
    // 0x364494: 0xae200ddc  sw          $zero, 0xDDC($s1)
    ctx->pc = 0x364494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3548), GPR_U32(ctx, 0));
label_364498:
    // 0x364498: 0xae200de8  sw          $zero, 0xDE8($s1)
    ctx->pc = 0x364498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
label_36449c:
    // 0x36449c: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x36449cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
label_3644a0:
    // 0x3644a0: 0xc077fb0  jal         func_1DFEC0
label_3644a4:
    if (ctx->pc == 0x3644A4u) {
        ctx->pc = 0x3644A4u;
            // 0x3644a4: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x3644A8u;
        goto label_3644a8;
    }
    ctx->pc = 0x3644A0u;
    SET_GPR_U32(ctx, 31, 0x3644A8u);
    ctx->pc = 0x3644A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3644A0u;
            // 0x3644a4: 0xae40010c  sw          $zero, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644A8u; }
        if (ctx->pc != 0x3644A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644A8u; }
        if (ctx->pc != 0x3644A8u) { return; }
    }
    ctx->pc = 0x3644A8u;
label_3644a8:
    // 0x3644a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3644a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3644ac:
    // 0x3644ac: 0xc075318  jal         func_1D4C60
label_3644b0:
    if (ctx->pc == 0x3644B0u) {
        ctx->pc = 0x3644B0u;
            // 0x3644b0: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x3644B4u;
        goto label_3644b4;
    }
    ctx->pc = 0x3644ACu;
    SET_GPR_U32(ctx, 31, 0x3644B4u);
    ctx->pc = 0x3644B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3644ACu;
            // 0x3644b0: 0x262502e0  addiu       $a1, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644B4u; }
        if (ctx->pc != 0x3644B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644B4u; }
        if (ctx->pc != 0x3644B4u) { return; }
    }
    ctx->pc = 0x3644B4u;
label_3644b4:
    // 0x3644b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3644b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3644b8:
    // 0x3644b8: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x3644b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_3644bc:
    // 0x3644bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3644bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3644c0:
    // 0x3644c0: 0xc0c6250  jal         func_318940
label_3644c4:
    if (ctx->pc == 0x3644C4u) {
        ctx->pc = 0x3644C4u;
            // 0x3644c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3644C8u;
        goto label_3644c8;
    }
    ctx->pc = 0x3644C0u;
    SET_GPR_U32(ctx, 31, 0x3644C8u);
    ctx->pc = 0x3644C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3644C0u;
            // 0x3644c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644C8u; }
        if (ctx->pc != 0x3644C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644C8u; }
        if (ctx->pc != 0x3644C8u) { return; }
    }
    ctx->pc = 0x3644C8u;
label_3644c8:
    // 0x3644c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3644c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3644cc:
    // 0x3644cc: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x3644ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_3644d0:
    // 0x3644d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3644d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3644d4:
    // 0x3644d4: 0xc04cbd8  jal         func_132F60
label_3644d8:
    if (ctx->pc == 0x3644D8u) {
        ctx->pc = 0x3644D8u;
            // 0x3644d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3644DCu;
        goto label_3644dc;
    }
    ctx->pc = 0x3644D4u;
    SET_GPR_U32(ctx, 31, 0x3644DCu);
    ctx->pc = 0x3644D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3644D4u;
            // 0x3644d8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644DCu; }
        if (ctx->pc != 0x3644DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644DCu; }
        if (ctx->pc != 0x3644DCu) { return; }
    }
    ctx->pc = 0x3644DCu;
label_3644dc:
    // 0x3644dc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3644dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3644e0:
    // 0x3644e0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3644e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3644e4:
    // 0x3644e4: 0x26240340  addiu       $a0, $s1, 0x340
    ctx->pc = 0x3644e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_3644e8:
    // 0x3644e8: 0xae220db8  sw          $v0, 0xDB8($s1)
    ctx->pc = 0x3644e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 2));
label_3644ec:
    // 0x3644ec: 0xc04cc04  jal         func_133010
label_3644f0:
    if (ctx->pc == 0x3644F0u) {
        ctx->pc = 0x3644F0u;
            // 0x3644f0: 0x24a54b50  addiu       $a1, $a1, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
        ctx->pc = 0x3644F4u;
        goto label_3644f4;
    }
    ctx->pc = 0x3644ECu;
    SET_GPR_U32(ctx, 31, 0x3644F4u);
    ctx->pc = 0x3644F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3644ECu;
            // 0x3644f0: 0x24a54b50  addiu       $a1, $a1, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644F4u; }
        if (ctx->pc != 0x3644F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3644F4u; }
        if (ctx->pc != 0x3644F4u) { return; }
    }
    ctx->pc = 0x3644F4u;
label_3644f4:
    // 0x3644f4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3644f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3644f8:
    // 0x3644f8: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x3644f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_3644fc:
    // 0x3644fc: 0xc04cc04  jal         func_133010
label_364500:
    if (ctx->pc == 0x364500u) {
        ctx->pc = 0x364500u;
            // 0x364500: 0x24a54b50  addiu       $a1, $a1, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
        ctx->pc = 0x364504u;
        goto label_364504;
    }
    ctx->pc = 0x3644FCu;
    SET_GPR_U32(ctx, 31, 0x364504u);
    ctx->pc = 0x364500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3644FCu;
            // 0x364500: 0x24a54b50  addiu       $a1, $a1, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364504u; }
        if (ctx->pc != 0x364504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x364504u; }
        if (ctx->pc != 0x364504u) { return; }
    }
    ctx->pc = 0x364504u;
label_364504:
    // 0x364504: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x364504u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_364508:
    // 0x364508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x364508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36450c:
    // 0x36450c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x36450cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_364510:
    // 0x364510: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x364510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_364514:
    // 0x364514: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x364514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_364518:
    // 0x364518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36451c:
    // 0x36451c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x36451cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_364520:
    // 0x364520: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x364520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_364524:
    // 0x364524: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x364524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_364528:
    // 0x364528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x364528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36452c:
    // 0x36452c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x36452cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_364530:
    // 0x364530: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x364530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_364534:
    // 0x364534: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x364534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_364538:
    // 0x364538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x364538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_36453c:
    // 0x36453c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x36453cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_364540:
    // 0x364540: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x364540u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_364544:
    // 0x364544: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x364544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_364548:
    // 0x364548: 0x320f809  jalr        $t9
label_36454c:
    if (ctx->pc == 0x36454Cu) {
        ctx->pc = 0x36454Cu;
            // 0x36454c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x364550u;
        goto label_364550;
    }
    ctx->pc = 0x364548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364550u);
        ctx->pc = 0x36454Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364548u;
            // 0x36454c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364550u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364550u; }
            if (ctx->pc != 0x364550u) { return; }
        }
        }
    }
    ctx->pc = 0x364550u;
label_364550:
    // 0x364550: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x364550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_364554:
    // 0x364554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364558:
    // 0x364558: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x364558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_36455c:
    // 0x36455c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x36455cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_364560:
    // 0x364560: 0x320f809  jalr        $t9
label_364564:
    if (ctx->pc == 0x364564u) {
        ctx->pc = 0x364564u;
            // 0x364564: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x364568u;
        goto label_364568;
    }
    ctx->pc = 0x364560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364568u);
        ctx->pc = 0x364564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364560u;
            // 0x364564: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364568u; }
            if (ctx->pc != 0x364568u) { return; }
        }
        }
    }
    ctx->pc = 0x364568u;
label_364568:
    // 0x364568: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x364568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_36456c:
    // 0x36456c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x36456cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_364570:
    // 0x364570: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x364570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_364574:
    // 0x364574: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x364574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_364578:
    // 0x364578: 0x320f809  jalr        $t9
label_36457c:
    if (ctx->pc == 0x36457Cu) {
        ctx->pc = 0x36457Cu;
            // 0x36457c: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->pc = 0x364580u;
        goto label_364580;
    }
    ctx->pc = 0x364578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x364580u);
        ctx->pc = 0x36457Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364578u;
            // 0x36457c: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x364580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x364580u; }
            if (ctx->pc != 0x364580u) { return; }
        }
        }
    }
    ctx->pc = 0x364580u;
label_364580:
    // 0x364580: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x364580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_364584:
    // 0x364584: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x364584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_364588:
    // 0x364588: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x364588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36458c:
    // 0x36458c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36458cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_364590:
    // 0x364590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_364594:
    // 0x364594: 0x3e00008  jr          $ra
label_364598:
    if (ctx->pc == 0x364598u) {
        ctx->pc = 0x364598u;
            // 0x364598: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x36459Cu;
        goto label_36459c;
    }
    ctx->pc = 0x364594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x364594u;
            // 0x364598: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36459Cu;
label_36459c:
    // 0x36459c: 0x0  nop
    ctx->pc = 0x36459cu;
    // NOP
}
