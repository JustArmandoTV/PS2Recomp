#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F93A0
// Address: 0x3f93a0 - 0x3f9530
void sub_003F93A0_0x3f93a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F93A0_0x3f93a0");
#endif

    switch (ctx->pc) {
        case 0x3f93a0u: goto label_3f93a0;
        case 0x3f93a4u: goto label_3f93a4;
        case 0x3f93a8u: goto label_3f93a8;
        case 0x3f93acu: goto label_3f93ac;
        case 0x3f93b0u: goto label_3f93b0;
        case 0x3f93b4u: goto label_3f93b4;
        case 0x3f93b8u: goto label_3f93b8;
        case 0x3f93bcu: goto label_3f93bc;
        case 0x3f93c0u: goto label_3f93c0;
        case 0x3f93c4u: goto label_3f93c4;
        case 0x3f93c8u: goto label_3f93c8;
        case 0x3f93ccu: goto label_3f93cc;
        case 0x3f93d0u: goto label_3f93d0;
        case 0x3f93d4u: goto label_3f93d4;
        case 0x3f93d8u: goto label_3f93d8;
        case 0x3f93dcu: goto label_3f93dc;
        case 0x3f93e0u: goto label_3f93e0;
        case 0x3f93e4u: goto label_3f93e4;
        case 0x3f93e8u: goto label_3f93e8;
        case 0x3f93ecu: goto label_3f93ec;
        case 0x3f93f0u: goto label_3f93f0;
        case 0x3f93f4u: goto label_3f93f4;
        case 0x3f93f8u: goto label_3f93f8;
        case 0x3f93fcu: goto label_3f93fc;
        case 0x3f9400u: goto label_3f9400;
        case 0x3f9404u: goto label_3f9404;
        case 0x3f9408u: goto label_3f9408;
        case 0x3f940cu: goto label_3f940c;
        case 0x3f9410u: goto label_3f9410;
        case 0x3f9414u: goto label_3f9414;
        case 0x3f9418u: goto label_3f9418;
        case 0x3f941cu: goto label_3f941c;
        case 0x3f9420u: goto label_3f9420;
        case 0x3f9424u: goto label_3f9424;
        case 0x3f9428u: goto label_3f9428;
        case 0x3f942cu: goto label_3f942c;
        case 0x3f9430u: goto label_3f9430;
        case 0x3f9434u: goto label_3f9434;
        case 0x3f9438u: goto label_3f9438;
        case 0x3f943cu: goto label_3f943c;
        case 0x3f9440u: goto label_3f9440;
        case 0x3f9444u: goto label_3f9444;
        case 0x3f9448u: goto label_3f9448;
        case 0x3f944cu: goto label_3f944c;
        case 0x3f9450u: goto label_3f9450;
        case 0x3f9454u: goto label_3f9454;
        case 0x3f9458u: goto label_3f9458;
        case 0x3f945cu: goto label_3f945c;
        case 0x3f9460u: goto label_3f9460;
        case 0x3f9464u: goto label_3f9464;
        case 0x3f9468u: goto label_3f9468;
        case 0x3f946cu: goto label_3f946c;
        case 0x3f9470u: goto label_3f9470;
        case 0x3f9474u: goto label_3f9474;
        case 0x3f9478u: goto label_3f9478;
        case 0x3f947cu: goto label_3f947c;
        case 0x3f9480u: goto label_3f9480;
        case 0x3f9484u: goto label_3f9484;
        case 0x3f9488u: goto label_3f9488;
        case 0x3f948cu: goto label_3f948c;
        case 0x3f9490u: goto label_3f9490;
        case 0x3f9494u: goto label_3f9494;
        case 0x3f9498u: goto label_3f9498;
        case 0x3f949cu: goto label_3f949c;
        case 0x3f94a0u: goto label_3f94a0;
        case 0x3f94a4u: goto label_3f94a4;
        case 0x3f94a8u: goto label_3f94a8;
        case 0x3f94acu: goto label_3f94ac;
        case 0x3f94b0u: goto label_3f94b0;
        case 0x3f94b4u: goto label_3f94b4;
        case 0x3f94b8u: goto label_3f94b8;
        case 0x3f94bcu: goto label_3f94bc;
        case 0x3f94c0u: goto label_3f94c0;
        case 0x3f94c4u: goto label_3f94c4;
        case 0x3f94c8u: goto label_3f94c8;
        case 0x3f94ccu: goto label_3f94cc;
        case 0x3f94d0u: goto label_3f94d0;
        case 0x3f94d4u: goto label_3f94d4;
        case 0x3f94d8u: goto label_3f94d8;
        case 0x3f94dcu: goto label_3f94dc;
        case 0x3f94e0u: goto label_3f94e0;
        case 0x3f94e4u: goto label_3f94e4;
        case 0x3f94e8u: goto label_3f94e8;
        case 0x3f94ecu: goto label_3f94ec;
        case 0x3f94f0u: goto label_3f94f0;
        case 0x3f94f4u: goto label_3f94f4;
        case 0x3f94f8u: goto label_3f94f8;
        case 0x3f94fcu: goto label_3f94fc;
        case 0x3f9500u: goto label_3f9500;
        case 0x3f9504u: goto label_3f9504;
        case 0x3f9508u: goto label_3f9508;
        case 0x3f950cu: goto label_3f950c;
        case 0x3f9510u: goto label_3f9510;
        case 0x3f9514u: goto label_3f9514;
        case 0x3f9518u: goto label_3f9518;
        case 0x3f951cu: goto label_3f951c;
        case 0x3f9520u: goto label_3f9520;
        case 0x3f9524u: goto label_3f9524;
        case 0x3f9528u: goto label_3f9528;
        case 0x3f952cu: goto label_3f952c;
        default: break;
    }

    ctx->pc = 0x3f93a0u;

label_3f93a0:
    // 0x3f93a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f93a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f93a4:
    // 0x3f93a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f93a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f93a8:
    // 0x3f93a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f93a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f93ac:
    // 0x3f93ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f93acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f93b0:
    // 0x3f93b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f93b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f93b4:
    // 0x3f93b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f93b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f93b8:
    // 0x3f93b8: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x3f93b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3f93bc:
    // 0x3f93bc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3f93bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3f93c0:
    // 0x3f93c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f93c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f93c4:
    // 0x3f93c4: 0x320f809  jalr        $t9
label_3f93c8:
    if (ctx->pc == 0x3F93C8u) {
        ctx->pc = 0x3F93C8u;
            // 0x3f93c8: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->pc = 0x3F93CCu;
        goto label_3f93cc;
    }
    ctx->pc = 0x3F93C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F93CCu);
        ctx->pc = 0x3F93C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F93C4u;
            // 0x3f93c8: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F93CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F93CCu; }
            if (ctx->pc != 0x3F93CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3F93CCu;
label_3f93cc:
    // 0x3f93cc: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x3f93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_3f93d0:
    // 0x3f93d0: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x3f93d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_3f93d4:
    // 0x3f93d4: 0x8e24fff8  lw          $a0, -0x8($s1)
    ctx->pc = 0x3f93d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
label_3f93d8:
    // 0x3f93d8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3f93d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f93dc:
    // 0x3f93dc: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3f93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3f93e0:
    // 0x3f93e0: 0xa43821  addu        $a3, $a1, $a0
    ctx->pc = 0x3f93e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3f93e4:
    // 0x3f93e4: 0xe23023  subu        $a2, $a3, $v0
    ctx->pc = 0x3f93e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3f93e8:
    // 0x3f93e8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3f93e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3f93ec:
    // 0x3f93ec: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3f93ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_3f93f0:
    // 0x3f93f0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3f93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3f93f4:
    // 0x3f93f4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3f93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3f93f8:
    // 0x3f93f8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3f93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_3f93fc:
    // 0x3f93fc: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x3f93fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f9400:
    // 0x3f9400: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3f9400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f9404:
    // 0x3f9404: 0x11450040  beq         $t2, $a1, . + 4 + (0x40 << 2)
label_3f9408:
    if (ctx->pc == 0x3F9408u) {
        ctx->pc = 0x3F940Cu;
        goto label_3f940c;
    }
    ctx->pc = 0x3F9404u;
    {
        const bool branch_taken_0x3f9404 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f9404) {
            ctx->pc = 0x3F9508u;
            goto label_3f9508;
        }
    }
    ctx->pc = 0x3F940Cu;
label_3f940c:
    // 0x3f940c: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3f940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_3f9410:
    // 0x3f9410: 0x1432021  addu        $a0, $t2, $v1
    ctx->pc = 0x3f9410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_3f9414:
    // 0x3f9414: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x3f9414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3f9418:
    // 0x3f9418: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
label_3f941c:
    if (ctx->pc == 0x3F941Cu) {
        ctx->pc = 0x3F941Cu;
            // 0x3f941c: 0x8d480004  lw          $t0, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->pc = 0x3F9420u;
        goto label_3f9420;
    }
    ctx->pc = 0x3F9418u;
    {
        const bool branch_taken_0x3f9418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F941Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9418u;
            // 0x3f941c: 0x8d480004  lw          $t0, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9418) {
            ctx->pc = 0x3F94F8u;
            goto label_3f94f8;
        }
    }
    ctx->pc = 0x3F9420u;
label_3f9420:
    // 0x3f9420: 0x107082b  sltu        $at, $t0, $a3
    ctx->pc = 0x3f9420u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3f9424:
    // 0x3f9424: 0x54200035  bnel        $at, $zero, . + 4 + (0x35 << 2)
label_3f9428:
    if (ctx->pc == 0x3F9428u) {
        ctx->pc = 0x3F9428u;
            // 0x3f9428: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F942Cu;
        goto label_3f942c;
    }
    ctx->pc = 0x3F9424u;
    {
        const bool branch_taken_0x3f9424 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9424) {
            ctx->pc = 0x3F9428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9424u;
            // 0x3f9428: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F94FCu;
            goto label_3f94fc;
        }
    }
    ctx->pc = 0x3F942Cu;
label_3f942c:
    // 0x3f942c: 0x15070012  bne         $t0, $a3, . + 4 + (0x12 << 2)
label_3f9430:
    if (ctx->pc == 0x3F9430u) {
        ctx->pc = 0x3F9430u;
            // 0x3f9430: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F9434u;
        goto label_3f9434;
    }
    ctx->pc = 0x3F942Cu;
    {
        const bool branch_taken_0x3f942c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x3F9430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F942Cu;
            // 0x3f9430: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f942c) {
            ctx->pc = 0x3F9478u;
            goto label_3f9478;
        }
    }
    ctx->pc = 0x3F9434u;
label_3f9434:
    // 0x3f9434: 0x51050011  beql        $t0, $a1, . + 4 + (0x11 << 2)
label_3f9438:
    if (ctx->pc == 0x3F9438u) {
        ctx->pc = 0x3F9438u;
            // 0x3f9438: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->pc = 0x3F943Cu;
        goto label_3f943c;
    }
    ctx->pc = 0x3F9434u;
    {
        const bool branch_taken_0x3f9434 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f9434) {
            ctx->pc = 0x3F9438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9434u;
            // 0x3f9438: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F947Cu;
            goto label_3f947c;
        }
    }
    ctx->pc = 0x3F943Cu;
label_3f943c:
    // 0x3f943c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3f943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3f9440:
    // 0x3f9440: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3f9440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_3f9444:
    // 0x3f9444: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3f9444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3f9448:
    // 0x3f9448: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3f9448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3f944c:
    // 0x3f944c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x3f944cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_3f9450:
    // 0x3f9450: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3f9450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3f9454:
    // 0x3f9454: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x3f9454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_3f9458:
    // 0x3f9458: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3f9458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3f945c:
    // 0x3f945c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3f945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3f9460:
    // 0x3f9460: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3f9460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3f9464:
    // 0x3f9464: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3f9464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3f9468:
    // 0x3f9468: 0x15030009  bne         $t0, $v1, . + 4 + (0x9 << 2)
label_3f946c:
    if (ctx->pc == 0x3F946Cu) {
        ctx->pc = 0x3F9470u;
        goto label_3f9470;
    }
    ctx->pc = 0x3F9468u;
    {
        const bool branch_taken_0x3f9468 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f9468) {
            ctx->pc = 0x3F9490u;
            goto label_3f9490;
        }
    }
    ctx->pc = 0x3F9470u;
label_3f9470:
    // 0x3f9470: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f9474:
    if (ctx->pc == 0x3F9474u) {
        ctx->pc = 0x3F9474u;
            // 0x3f9474: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3F9478u;
        goto label_3f9478;
    }
    ctx->pc = 0x3F9470u;
    {
        const bool branch_taken_0x3f9470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9470u;
            // 0x3f9474: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9470) {
            ctx->pc = 0x3F9490u;
            goto label_3f9490;
        }
    }
    ctx->pc = 0x3F9478u;
label_3f9478:
    // 0x3f9478: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x3f9478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
label_3f947c:
    // 0x3f947c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3f947cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3f9480:
    // 0x3f9480: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3f9480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3f9484:
    // 0x3f9484: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x3f9484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_3f9488:
    // 0x3f9488: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3f9488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3f948c:
    // 0x3f948c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3f948cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3f9490:
    // 0x3f9490: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
label_3f9494:
    if (ctx->pc == 0x3F9494u) {
        ctx->pc = 0x3F9494u;
            // 0x3f9494: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x3F9498u;
        goto label_3f9498;
    }
    ctx->pc = 0x3F9490u;
    {
        const bool branch_taken_0x3f9490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3f9490) {
            ctx->pc = 0x3F9494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9490u;
            // 0x3f9494: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F94D0u;
            goto label_3f94d0;
        }
    }
    ctx->pc = 0x3F9498u;
label_3f9498:
    // 0x3f9498: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3f9498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3f949c:
    // 0x3f949c: 0x1143000b  beq         $t2, $v1, . + 4 + (0xB << 2)
label_3f94a0:
    if (ctx->pc == 0x3F94A0u) {
        ctx->pc = 0x3F94A4u;
        goto label_3f94a4;
    }
    ctx->pc = 0x3F949Cu;
    {
        const bool branch_taken_0x3f949c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f949c) {
            ctx->pc = 0x3F94CCu;
            goto label_3f94cc;
        }
    }
    ctx->pc = 0x3F94A4u;
label_3f94a4:
    // 0x3f94a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3f94a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f94a8:
    // 0x3f94a8: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x3f94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
label_3f94ac:
    // 0x3f94ac: 0x8d440008  lw          $a0, 0x8($t2)
    ctx->pc = 0x3f94acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_3f94b0:
    // 0x3f94b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3f94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f94b4:
    // 0x3f94b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3f94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3f94b8:
    // 0x3f94b8: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x3f94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
label_3f94bc:
    // 0x3f94bc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3f94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f94c0:
    // 0x3f94c0: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x3f94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
label_3f94c4:
    // 0x3f94c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3f94c8:
    if (ctx->pc == 0x3F94C8u) {
        ctx->pc = 0x3F94C8u;
            // 0x3f94c8: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F94CCu;
        goto label_3f94cc;
    }
    ctx->pc = 0x3F94C4u;
    {
        const bool branch_taken_0x3f94c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F94C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F94C4u;
            // 0x3f94c8: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f94c4) {
            ctx->pc = 0x3F94D0u;
            goto label_3f94d0;
        }
    }
    ctx->pc = 0x3F94CCu;
label_3f94cc:
    // 0x3f94cc: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x3f94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
label_3f94d0:
    // 0x3f94d0: 0x51200003  beql        $t1, $zero, . + 4 + (0x3 << 2)
label_3f94d4:
    if (ctx->pc == 0x3F94D4u) {
        ctx->pc = 0x3F94D4u;
            // 0x3f94d4: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x3F94D8u;
        goto label_3f94d8;
    }
    ctx->pc = 0x3F94D0u;
    {
        const bool branch_taken_0x3f94d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f94d0) {
            ctx->pc = 0x3F94D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F94D0u;
            // 0x3f94d4: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F94E0u;
            goto label_3f94e0;
        }
    }
    ctx->pc = 0x3F94D8u;
label_3f94d8:
    // 0x3f94d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3f94d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3f94dc:
    // 0x3f94dc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x3f94dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3f94e0:
    // 0x3f94e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f94e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f94e4:
    // 0x3f94e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f94e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f94e8:
    // 0x3f94e8: 0x320f809  jalr        $t9
label_3f94ec:
    if (ctx->pc == 0x3F94ECu) {
        ctx->pc = 0x3F94F0u;
        goto label_3f94f0;
    }
    ctx->pc = 0x3F94E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F94F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F94F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F94F0u; }
            if (ctx->pc != 0x3F94F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F94F0u;
label_3f94f0:
    // 0x3f94f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f94f4:
    if (ctx->pc == 0x3F94F4u) {
        ctx->pc = 0x3F94F4u;
            // 0x3f94f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3F94F8u;
        goto label_3f94f8;
    }
    ctx->pc = 0x3F94F0u;
    {
        const bool branch_taken_0x3f94f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F94F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F94F0u;
            // 0x3f94f4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f94f0) {
            ctx->pc = 0x3F9520u;
            goto label_3f9520;
        }
    }
    ctx->pc = 0x3F94F8u;
label_3f94f8:
    // 0x3f94f8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3f94f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f94fc:
    // 0x3f94fc: 0x5505ffc4  bnel        $t0, $a1, . + 4 + (-0x3C << 2)
label_3f9500:
    if (ctx->pc == 0x3F9500u) {
        ctx->pc = 0x3F9500u;
            // 0x3f9500: 0x8d430008  lw          $v1, 0x8($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
        ctx->pc = 0x3F9504u;
        goto label_3f9504;
    }
    ctx->pc = 0x3F94FCu;
    {
        const bool branch_taken_0x3f94fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x3f94fc) {
            ctx->pc = 0x3F9500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F94FCu;
            // 0x3f9500: 0x8d430008  lw          $v1, 0x8($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f9410;
        }
    }
    ctx->pc = 0x3F9504u;
label_3f9504:
    // 0x3f9504: 0x0  nop
    ctx->pc = 0x3f9504u;
    // NOP
label_3f9508:
    // 0x3f9508: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x3f9508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3f950c:
    // 0x3f950c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f950cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f9510:
    // 0x3f9510: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f9510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f9514:
    // 0x3f9514: 0x320f809  jalr        $t9
label_3f9518:
    if (ctx->pc == 0x3F9518u) {
        ctx->pc = 0x3F951Cu;
        goto label_3f951c;
    }
    ctx->pc = 0x3F9514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F951Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F951Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F951Cu; }
            if (ctx->pc != 0x3F951Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F951Cu;
label_3f951c:
    // 0x3f951c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f951cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f9520:
    // 0x3f9520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f9520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9524:
    // 0x3f9524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9528:
    // 0x3f9528: 0x3e00008  jr          $ra
label_3f952c:
    if (ctx->pc == 0x3F952Cu) {
        ctx->pc = 0x3F952Cu;
            // 0x3f952c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F9530u;
        goto label_fallthrough_0x3f9528;
    }
    ctx->pc = 0x3F9528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9528u;
            // 0x3f952c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f9528:
    ctx->pc = 0x3F9530u;
}
