#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F9300
// Address: 0x2f9300 - 0x2f95f0
void sub_002F9300_0x2f9300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9300_0x2f9300");
#endif

    switch (ctx->pc) {
        case 0x2f9300u: goto label_2f9300;
        case 0x2f9304u: goto label_2f9304;
        case 0x2f9308u: goto label_2f9308;
        case 0x2f930cu: goto label_2f930c;
        case 0x2f9310u: goto label_2f9310;
        case 0x2f9314u: goto label_2f9314;
        case 0x2f9318u: goto label_2f9318;
        case 0x2f931cu: goto label_2f931c;
        case 0x2f9320u: goto label_2f9320;
        case 0x2f9324u: goto label_2f9324;
        case 0x2f9328u: goto label_2f9328;
        case 0x2f932cu: goto label_2f932c;
        case 0x2f9330u: goto label_2f9330;
        case 0x2f9334u: goto label_2f9334;
        case 0x2f9338u: goto label_2f9338;
        case 0x2f933cu: goto label_2f933c;
        case 0x2f9340u: goto label_2f9340;
        case 0x2f9344u: goto label_2f9344;
        case 0x2f9348u: goto label_2f9348;
        case 0x2f934cu: goto label_2f934c;
        case 0x2f9350u: goto label_2f9350;
        case 0x2f9354u: goto label_2f9354;
        case 0x2f9358u: goto label_2f9358;
        case 0x2f935cu: goto label_2f935c;
        case 0x2f9360u: goto label_2f9360;
        case 0x2f9364u: goto label_2f9364;
        case 0x2f9368u: goto label_2f9368;
        case 0x2f936cu: goto label_2f936c;
        case 0x2f9370u: goto label_2f9370;
        case 0x2f9374u: goto label_2f9374;
        case 0x2f9378u: goto label_2f9378;
        case 0x2f937cu: goto label_2f937c;
        case 0x2f9380u: goto label_2f9380;
        case 0x2f9384u: goto label_2f9384;
        case 0x2f9388u: goto label_2f9388;
        case 0x2f938cu: goto label_2f938c;
        case 0x2f9390u: goto label_2f9390;
        case 0x2f9394u: goto label_2f9394;
        case 0x2f9398u: goto label_2f9398;
        case 0x2f939cu: goto label_2f939c;
        case 0x2f93a0u: goto label_2f93a0;
        case 0x2f93a4u: goto label_2f93a4;
        case 0x2f93a8u: goto label_2f93a8;
        case 0x2f93acu: goto label_2f93ac;
        case 0x2f93b0u: goto label_2f93b0;
        case 0x2f93b4u: goto label_2f93b4;
        case 0x2f93b8u: goto label_2f93b8;
        case 0x2f93bcu: goto label_2f93bc;
        case 0x2f93c0u: goto label_2f93c0;
        case 0x2f93c4u: goto label_2f93c4;
        case 0x2f93c8u: goto label_2f93c8;
        case 0x2f93ccu: goto label_2f93cc;
        case 0x2f93d0u: goto label_2f93d0;
        case 0x2f93d4u: goto label_2f93d4;
        case 0x2f93d8u: goto label_2f93d8;
        case 0x2f93dcu: goto label_2f93dc;
        case 0x2f93e0u: goto label_2f93e0;
        case 0x2f93e4u: goto label_2f93e4;
        case 0x2f93e8u: goto label_2f93e8;
        case 0x2f93ecu: goto label_2f93ec;
        case 0x2f93f0u: goto label_2f93f0;
        case 0x2f93f4u: goto label_2f93f4;
        case 0x2f93f8u: goto label_2f93f8;
        case 0x2f93fcu: goto label_2f93fc;
        case 0x2f9400u: goto label_2f9400;
        case 0x2f9404u: goto label_2f9404;
        case 0x2f9408u: goto label_2f9408;
        case 0x2f940cu: goto label_2f940c;
        case 0x2f9410u: goto label_2f9410;
        case 0x2f9414u: goto label_2f9414;
        case 0x2f9418u: goto label_2f9418;
        case 0x2f941cu: goto label_2f941c;
        case 0x2f9420u: goto label_2f9420;
        case 0x2f9424u: goto label_2f9424;
        case 0x2f9428u: goto label_2f9428;
        case 0x2f942cu: goto label_2f942c;
        case 0x2f9430u: goto label_2f9430;
        case 0x2f9434u: goto label_2f9434;
        case 0x2f9438u: goto label_2f9438;
        case 0x2f943cu: goto label_2f943c;
        case 0x2f9440u: goto label_2f9440;
        case 0x2f9444u: goto label_2f9444;
        case 0x2f9448u: goto label_2f9448;
        case 0x2f944cu: goto label_2f944c;
        case 0x2f9450u: goto label_2f9450;
        case 0x2f9454u: goto label_2f9454;
        case 0x2f9458u: goto label_2f9458;
        case 0x2f945cu: goto label_2f945c;
        case 0x2f9460u: goto label_2f9460;
        case 0x2f9464u: goto label_2f9464;
        case 0x2f9468u: goto label_2f9468;
        case 0x2f946cu: goto label_2f946c;
        case 0x2f9470u: goto label_2f9470;
        case 0x2f9474u: goto label_2f9474;
        case 0x2f9478u: goto label_2f9478;
        case 0x2f947cu: goto label_2f947c;
        case 0x2f9480u: goto label_2f9480;
        case 0x2f9484u: goto label_2f9484;
        case 0x2f9488u: goto label_2f9488;
        case 0x2f948cu: goto label_2f948c;
        case 0x2f9490u: goto label_2f9490;
        case 0x2f9494u: goto label_2f9494;
        case 0x2f9498u: goto label_2f9498;
        case 0x2f949cu: goto label_2f949c;
        case 0x2f94a0u: goto label_2f94a0;
        case 0x2f94a4u: goto label_2f94a4;
        case 0x2f94a8u: goto label_2f94a8;
        case 0x2f94acu: goto label_2f94ac;
        case 0x2f94b0u: goto label_2f94b0;
        case 0x2f94b4u: goto label_2f94b4;
        case 0x2f94b8u: goto label_2f94b8;
        case 0x2f94bcu: goto label_2f94bc;
        case 0x2f94c0u: goto label_2f94c0;
        case 0x2f94c4u: goto label_2f94c4;
        case 0x2f94c8u: goto label_2f94c8;
        case 0x2f94ccu: goto label_2f94cc;
        case 0x2f94d0u: goto label_2f94d0;
        case 0x2f94d4u: goto label_2f94d4;
        case 0x2f94d8u: goto label_2f94d8;
        case 0x2f94dcu: goto label_2f94dc;
        case 0x2f94e0u: goto label_2f94e0;
        case 0x2f94e4u: goto label_2f94e4;
        case 0x2f94e8u: goto label_2f94e8;
        case 0x2f94ecu: goto label_2f94ec;
        case 0x2f94f0u: goto label_2f94f0;
        case 0x2f94f4u: goto label_2f94f4;
        case 0x2f94f8u: goto label_2f94f8;
        case 0x2f94fcu: goto label_2f94fc;
        case 0x2f9500u: goto label_2f9500;
        case 0x2f9504u: goto label_2f9504;
        case 0x2f9508u: goto label_2f9508;
        case 0x2f950cu: goto label_2f950c;
        case 0x2f9510u: goto label_2f9510;
        case 0x2f9514u: goto label_2f9514;
        case 0x2f9518u: goto label_2f9518;
        case 0x2f951cu: goto label_2f951c;
        case 0x2f9520u: goto label_2f9520;
        case 0x2f9524u: goto label_2f9524;
        case 0x2f9528u: goto label_2f9528;
        case 0x2f952cu: goto label_2f952c;
        case 0x2f9530u: goto label_2f9530;
        case 0x2f9534u: goto label_2f9534;
        case 0x2f9538u: goto label_2f9538;
        case 0x2f953cu: goto label_2f953c;
        case 0x2f9540u: goto label_2f9540;
        case 0x2f9544u: goto label_2f9544;
        case 0x2f9548u: goto label_2f9548;
        case 0x2f954cu: goto label_2f954c;
        case 0x2f9550u: goto label_2f9550;
        case 0x2f9554u: goto label_2f9554;
        case 0x2f9558u: goto label_2f9558;
        case 0x2f955cu: goto label_2f955c;
        case 0x2f9560u: goto label_2f9560;
        case 0x2f9564u: goto label_2f9564;
        case 0x2f9568u: goto label_2f9568;
        case 0x2f956cu: goto label_2f956c;
        case 0x2f9570u: goto label_2f9570;
        case 0x2f9574u: goto label_2f9574;
        case 0x2f9578u: goto label_2f9578;
        case 0x2f957cu: goto label_2f957c;
        case 0x2f9580u: goto label_2f9580;
        case 0x2f9584u: goto label_2f9584;
        case 0x2f9588u: goto label_2f9588;
        case 0x2f958cu: goto label_2f958c;
        case 0x2f9590u: goto label_2f9590;
        case 0x2f9594u: goto label_2f9594;
        case 0x2f9598u: goto label_2f9598;
        case 0x2f959cu: goto label_2f959c;
        case 0x2f95a0u: goto label_2f95a0;
        case 0x2f95a4u: goto label_2f95a4;
        case 0x2f95a8u: goto label_2f95a8;
        case 0x2f95acu: goto label_2f95ac;
        case 0x2f95b0u: goto label_2f95b0;
        case 0x2f95b4u: goto label_2f95b4;
        case 0x2f95b8u: goto label_2f95b8;
        case 0x2f95bcu: goto label_2f95bc;
        case 0x2f95c0u: goto label_2f95c0;
        case 0x2f95c4u: goto label_2f95c4;
        case 0x2f95c8u: goto label_2f95c8;
        case 0x2f95ccu: goto label_2f95cc;
        case 0x2f95d0u: goto label_2f95d0;
        case 0x2f95d4u: goto label_2f95d4;
        case 0x2f95d8u: goto label_2f95d8;
        case 0x2f95dcu: goto label_2f95dc;
        case 0x2f95e0u: goto label_2f95e0;
        case 0x2f95e4u: goto label_2f95e4;
        case 0x2f95e8u: goto label_2f95e8;
        case 0x2f95ecu: goto label_2f95ec;
        default: break;
    }

    ctx->pc = 0x2f9300u;

label_2f9300:
    // 0x2f9300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f9300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2f9304:
    // 0x2f9304: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f9304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2f9308:
    // 0x2f9308: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2f9308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2f930c:
    // 0x2f930c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2f9310:
    // 0x2f9310: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f9310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2f9314:
    // 0x2f9314: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f9314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f9318:
    // 0x2f9318: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f9318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f931c:
    // 0x2f931c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f931cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f9320:
    // 0x2f9320: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f9320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f9324:
    // 0x2f9324: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x2f9324u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
label_2f9328:
    // 0x2f9328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f9328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f932c:
    // 0x2f932c: 0x2694f2d0  addiu       $s4, $s4, -0xD30
    ctx->pc = 0x2f932cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294963920));
label_2f9330:
    // 0x2f9330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f9334:
    // 0x2f9334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f9334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f9338:
    // 0x2f9338: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x2f9338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_2f933c:
    // 0x2f933c: 0x94830054  lhu         $v1, 0x54($a0)
    ctx->pc = 0x2f933cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
label_2f9340:
    // 0x2f9340: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x2f9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
label_2f9344:
    // 0x2f9344: 0x90450010  lbu         $a1, 0x10($v0)
    ctx->pc = 0x2f9344u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_2f9348:
    // 0x2f9348: 0xc078d40  jal         func_1E3500
label_2f934c:
    if (ctx->pc == 0x2F934Cu) {
        ctx->pc = 0x2F934Cu;
            // 0x2f934c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9350u;
        goto label_2f9350;
    }
    ctx->pc = 0x2F9348u;
    SET_GPR_U32(ctx, 31, 0x2F9350u);
    ctx->pc = 0x2F934Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9348u;
            // 0x2f934c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3500u;
    if (runtime->hasFunction(0x1E3500u)) {
        auto targetFn = runtime->lookupFunction(0x1E3500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9350u; }
        if (ctx->pc != 0x2F9350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3500_0x1e3500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9350u; }
        if (ctx->pc != 0x2F9350u) { return; }
    }
    ctx->pc = 0x2F9350u;
label_2f9350:
    // 0x2f9350: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2f9350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2f9354:
    // 0x2f9354: 0x9683004c  lhu         $v1, 0x4C($s4)
    ctx->pc = 0x2f9354u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 76)));
label_2f9358:
    // 0x2f9358: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2f935c:
    if (ctx->pc == 0x2F935Cu) {
        ctx->pc = 0x2F9360u;
        goto label_2f9360;
    }
    ctx->pc = 0x2F9358u;
    {
        const bool branch_taken_0x2f9358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9358) {
            ctx->pc = 0x2F9368u;
            goto label_2f9368;
        }
    }
    ctx->pc = 0x2F9360u;
label_2f9360:
    // 0x2f9360: 0x1000fffc  b           . + 4 + (-0x4 << 2)
label_2f9364:
    if (ctx->pc == 0x2F9364u) {
        ctx->pc = 0x2F9364u;
            // 0x2f9364: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->pc = 0x2F9368u;
        goto label_2f9368;
    }
    ctx->pc = 0x2F9360u;
    {
        const bool branch_taken_0x2f9360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9360u;
            // 0x2f9364: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9360) {
            ctx->pc = 0x2F9354u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9354;
        }
    }
    ctx->pc = 0x2F9368u;
label_2f9368:
    // 0x2f9368: 0x9683004e  lhu         $v1, 0x4E($s4)
    ctx->pc = 0x2f9368u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 78)));
label_2f936c:
    // 0x2f936c: 0x92a400d8  lbu         $a0, 0xD8($s5)
    ctx->pc = 0x2f936cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 216)));
label_2f9370:
    // 0x2f9370: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f9370u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9374:
    // 0x2f9374: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
label_2f9378:
    if (ctx->pc == 0x2F9378u) {
        ctx->pc = 0x2F9378u;
            // 0x2f9378: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->pc = 0x2F937Cu;
        goto label_2f937c;
    }
    ctx->pc = 0x2F9374u;
    {
        const bool branch_taken_0x2f9374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9374u;
            // 0x2f9378: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9374) {
            ctx->pc = 0x2F95B8u;
            goto label_2f95b8;
        }
    }
    ctx->pc = 0x2F937Cu;
label_2f937c:
    // 0x2f937c: 0x10800062  beqz        $a0, . + 4 + (0x62 << 2)
label_2f9380:
    if (ctx->pc == 0x2F9380u) {
        ctx->pc = 0x2F9384u;
        goto label_2f9384;
    }
    ctx->pc = 0x2F937Cu;
    {
        const bool branch_taken_0x2f937c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f937c) {
            ctx->pc = 0x2F9508u;
            goto label_2f9508;
        }
    }
    ctx->pc = 0x2F9384u;
label_2f9384:
    // 0x2f9384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f9384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9388:
    // 0x2f9388: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f9388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f938c:
    // 0x2f938c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f938cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2f9390:
    // 0x2f9390: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f9390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2f9394:
    // 0x2f9394: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f9398:
    if (ctx->pc == 0x2F9398u) {
        ctx->pc = 0x2F939Cu;
        goto label_2f939c;
    }
    ctx->pc = 0x2F9394u;
    {
        const bool branch_taken_0x2f9394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9394) {
            ctx->pc = 0x2F93B0u;
            goto label_2f93b0;
        }
    }
    ctx->pc = 0x2F939Cu;
label_2f939c:
    // 0x2f939c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f939cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2f93a0:
    // 0x2f93a0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2f93a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2f93a4:
    // 0x2f93a4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2f93a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2f93a8:
    // 0x2f93a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2f93ac:
    if (ctx->pc == 0x2F93ACu) {
        ctx->pc = 0x2F93ACu;
            // 0x2f93ac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x2F93B0u;
        goto label_2f93b0;
    }
    ctx->pc = 0x2F93A8u;
    {
        const bool branch_taken_0x2f93a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F93ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93A8u;
            // 0x2f93ac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f93a8) {
            ctx->pc = 0x2F9390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9390;
        }
    }
    ctx->pc = 0x2F93B0u;
label_2f93b0:
    // 0x2f93b0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2f93b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2f93b4:
    // 0x2f93b4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2f93b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2f93b8:
    // 0x2f93b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2f93b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f93bc:
    // 0x2f93bc: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x2f93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_2f93c0:
    // 0x2f93c0: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2f93c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f93c4:
    // 0x2f93c4: 0x282b821  addu        $s7, $s4, $v0
    ctx->pc = 0x2f93c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2f93c8:
    // 0x2f93c8: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2f93c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f93cc:
    // 0x2f93cc: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x2f93ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2f93d0:
    // 0x2f93d0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2f93d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f93d4:
    // 0x2f93d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f93d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f93d8:
    // 0x2f93d8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f93d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f93dc:
    // 0x2f93dc: 0x320f809  jalr        $t9
label_2f93e0:
    if (ctx->pc == 0x2F93E0u) {
        ctx->pc = 0x2F93E4u;
        goto label_2f93e4;
    }
    ctx->pc = 0x2F93DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F93E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F93E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F93E4u; }
            if (ctx->pc != 0x2F93E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F93E4u;
label_2f93e4:
    // 0x2f93e4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2f93e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f93e8:
    // 0x2f93e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f93e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f93ec:
    // 0x2f93ec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2f93ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2f93f0:
    // 0x2f93f0: 0x320f809  jalr        $t9
label_2f93f4:
    if (ctx->pc == 0x2F93F4u) {
        ctx->pc = 0x2F93F4u;
            // 0x2f93f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F93F8u;
        goto label_2f93f8;
    }
    ctx->pc = 0x2F93F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F93F8u);
        ctx->pc = 0x2F93F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F93F0u;
            // 0x2f93f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F93F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F93F8u; }
            if (ctx->pc != 0x2F93F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F93F8u;
label_2f93f8:
    // 0x2f93f8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2f93fc:
    if (ctx->pc == 0x2F93FCu) {
        ctx->pc = 0x2F9400u;
        goto label_2f9400;
    }
    ctx->pc = 0x2F93F8u;
    {
        const bool branch_taken_0x2f93f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f93f8) {
            ctx->pc = 0x2F94A8u;
            goto label_2f94a8;
        }
    }
    ctx->pc = 0x2F9400u;
label_2f9400:
    // 0x2f9400: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x2f9400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_2f9404:
    // 0x2f9404: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x2f9404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_2f9408:
    // 0x2f9408: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_2f940c:
    if (ctx->pc == 0x2F940Cu) {
        ctx->pc = 0x2F9410u;
        goto label_2f9410;
    }
    ctx->pc = 0x2F9408u;
    {
        const bool branch_taken_0x2f9408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f9408) {
            ctx->pc = 0x2F9458u;
            goto label_2f9458;
        }
    }
    ctx->pc = 0x2F9410u;
label_2f9410:
    // 0x2f9410: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
label_2f9414:
    if (ctx->pc == 0x2F9414u) {
        ctx->pc = 0x2F9418u;
        goto label_2f9418;
    }
    ctx->pc = 0x2F9410u;
    {
        const bool branch_taken_0x2f9410 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9410) {
            ctx->pc = 0x2F9458u;
            goto label_2f9458;
        }
    }
    ctx->pc = 0x2F9418u;
label_2f9418:
    // 0x2f9418: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2f9418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f941c:
    // 0x2f941c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f941cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9420:
    // 0x2f9420: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f9420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f9424:
    // 0x2f9424: 0x320f809  jalr        $t9
label_2f9428:
    if (ctx->pc == 0x2F9428u) {
        ctx->pc = 0x2F942Cu;
        goto label_2f942c;
    }
    ctx->pc = 0x2F9424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F942Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F942Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F942Cu; }
            if (ctx->pc != 0x2F942Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F942Cu;
label_2f942c:
    // 0x2f942c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_2f9430:
    if (ctx->pc == 0x2F9430u) {
        ctx->pc = 0x2F9434u;
        goto label_2f9434;
    }
    ctx->pc = 0x2F942Cu;
    {
        const bool branch_taken_0x2f942c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f942c) {
            ctx->pc = 0x2F9458u;
            goto label_2f9458;
        }
    }
    ctx->pc = 0x2F9434u;
label_2f9434:
    // 0x2f9434: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2f9434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f9438:
    // 0x2f9438: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f9438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f943c:
    // 0x2f943c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2f943cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2f9440:
    // 0x2f9440: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2f9440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2f9444:
    // 0x2f9444: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2f9444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2f9448:
    // 0x2f9448: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2f9448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2f944c:
    // 0x2f944c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2f944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f9450:
    // 0x2f9450: 0x10000027  b           . + 4 + (0x27 << 2)
label_2f9454:
    if (ctx->pc == 0x2F9454u) {
        ctx->pc = 0x2F9454u;
            // 0x2f9454: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x2F9458u;
        goto label_2f9458;
    }
    ctx->pc = 0x2F9450u;
    {
        const bool branch_taken_0x2f9450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9450u;
            // 0x2f9454: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9450) {
            ctx->pc = 0x2F94F0u;
            goto label_2f94f0;
        }
    }
    ctx->pc = 0x2F9458u;
label_2f9458:
    // 0x2f9458: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2f9458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f945c:
    // 0x2f945c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f9460:
    // 0x2f9460: 0x2a010006  slti        $at, $s0, 0x6
    ctx->pc = 0x2f9460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_2f9464:
    // 0x2f9464: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2f9464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2f9468:
    // 0x2f9468: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f9468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f946c:
    // 0x2f946c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2f9470:
    if (ctx->pc == 0x2F9470u) {
        ctx->pc = 0x2F9470u;
            // 0x2f9470: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2F9474u;
        goto label_2f9474;
    }
    ctx->pc = 0x2F946Cu;
    {
        const bool branch_taken_0x2f946c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F946Cu;
            // 0x2f9470: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f946c) {
            ctx->pc = 0x2F9490u;
            goto label_2f9490;
        }
    }
    ctx->pc = 0x2F9474u;
label_2f9474:
    // 0x2f9474: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f9474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f9478:
    // 0x2f9478: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2f947c:
    if (ctx->pc == 0x2F947Cu) {
        ctx->pc = 0x2F9480u;
        goto label_2f9480;
    }
    ctx->pc = 0x2F9478u;
    {
        const bool branch_taken_0x2f9478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9478) {
            ctx->pc = 0x2F9490u;
            goto label_2f9490;
        }
    }
    ctx->pc = 0x2F9480u;
label_2f9480:
    // 0x2f9480: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f9480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f9484:
    // 0x2f9484: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2f9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f9488:
    // 0x2f9488: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2f9488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2f948c:
    // 0x2f948c: 0x0  nop
    ctx->pc = 0x2f948cu;
    // NOP
label_2f9490:
    // 0x2f9490: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f9494:
    // 0x2f9494: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2f9494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2f9498:
    // 0x2f9498: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2f9498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2f949c:
    // 0x2f949c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f94a0:
    // 0x2f94a0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2f94a4:
    if (ctx->pc == 0x2F94A4u) {
        ctx->pc = 0x2F94A4u;
            // 0x2f94a4: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x2F94A8u;
        goto label_2f94a8;
    }
    ctx->pc = 0x2F94A0u;
    {
        const bool branch_taken_0x2f94a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F94A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94A0u;
            // 0x2f94a4: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94a0) {
            ctx->pc = 0x2F94F0u;
            goto label_2f94f0;
        }
    }
    ctx->pc = 0x2F94A8u;
label_2f94a8:
    // 0x2f94a8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_2f94ac:
    if (ctx->pc == 0x2F94ACu) {
        ctx->pc = 0x2F94B0u;
        goto label_2f94b0;
    }
    ctx->pc = 0x2F94A8u;
    {
        const bool branch_taken_0x2f94a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f94a8) {
            ctx->pc = 0x2F94D8u;
            goto label_2f94d8;
        }
    }
    ctx->pc = 0x2F94B0u;
label_2f94b0:
    // 0x2f94b0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2f94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f94b4:
    // 0x2f94b4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2f94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f94b8:
    // 0x2f94b8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2f94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2f94bc:
    // 0x2f94bc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2f94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2f94c0:
    // 0x2f94c0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x2f94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_2f94c4:
    // 0x2f94c4: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2f94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2f94c8:
    // 0x2f94c8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2f94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f94cc:
    // 0x2f94cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f94d0:
    if (ctx->pc == 0x2F94D0u) {
        ctx->pc = 0x2F94D0u;
            // 0x2f94d0: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x2F94D4u;
        goto label_2f94d4;
    }
    ctx->pc = 0x2F94CCu;
    {
        const bool branch_taken_0x2f94cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F94D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94CCu;
            // 0x2f94d0: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94cc) {
            ctx->pc = 0x2F94F0u;
            goto label_2f94f0;
        }
    }
    ctx->pc = 0x2F94D4u;
label_2f94d4:
    // 0x2f94d4: 0x0  nop
    ctx->pc = 0x2f94d4u;
    // NOP
label_2f94d8:
    // 0x2f94d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f94dc:
    // 0x2f94dc: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_2f94e0:
    if (ctx->pc == 0x2F94E0u) {
        ctx->pc = 0x2F94E4u;
        goto label_2f94e4;
    }
    ctx->pc = 0x2F94DCu;
    {
        const bool branch_taken_0x2f94dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f94dc) {
            ctx->pc = 0x2F94F0u;
            goto label_2f94f0;
        }
    }
    ctx->pc = 0x2F94E4u;
label_2f94e4:
    // 0x2f94e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f94e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f94e8:
    // 0x2f94e8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2f94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2f94ec:
    // 0x2f94ec: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2f94ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2f94f0:
    // 0x2f94f0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2f94f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f94f4:
    // 0x2f94f4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2f94f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2f94f8:
    // 0x2f94f8: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x2f94f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f94fc:
    // 0x2f94fc: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_2f9500:
    if (ctx->pc == 0x2F9500u) {
        ctx->pc = 0x2F9500u;
            // 0x2f9500: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2F9504u;
        goto label_2f9504;
    }
    ctx->pc = 0x2F94FCu;
    {
        const bool branch_taken_0x2f94fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F94FCu;
            // 0x2f9500: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f94fc) {
            ctx->pc = 0x2F93D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f93d0;
        }
    }
    ctx->pc = 0x2F9504u;
label_2f9504:
    // 0x2f9504: 0x0  nop
    ctx->pc = 0x2f9504u;
    // NOP
label_2f9508:
    // 0x2f9508: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x2f9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_2f950c:
    // 0x2f950c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2f950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2f9510:
    // 0x2f9510: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_2f9514:
    if (ctx->pc == 0x2F9514u) {
        ctx->pc = 0x2F9514u;
            // 0x2f9514: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x2F9518u;
        goto label_2f9518;
    }
    ctx->pc = 0x2F9510u;
    {
        const bool branch_taken_0x2f9510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f9510) {
            ctx->pc = 0x2F9514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9510u;
            // 0x2f9514: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F953Cu;
            goto label_2f953c;
        }
    }
    ctx->pc = 0x2F9518u;
label_2f9518:
    // 0x2f9518: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2f9518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f951c:
    // 0x2f951c: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x2f951cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_2f9520:
    // 0x2f9520: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x2f9520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2f9524:
    // 0x2f9524: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x2f9524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2f9528:
    // 0x2f9528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f9528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f952c:
    // 0x2f952c: 0xaca40084  sw          $a0, 0x84($a1)
    ctx->pc = 0x2f952cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 4));
label_2f9530:
    // 0x2f9530: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2f9530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2f9534:
    // 0x2f9534: 0xaca30088  sw          $v1, 0x88($a1)
    ctx->pc = 0x2f9534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 3));
label_2f9538:
    // 0x2f9538: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2f9538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f953c:
    // 0x2f953c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f953cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9540:
    // 0x2f9540: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f9540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f9544:
    // 0x2f9544: 0x320f809  jalr        $t9
label_2f9548:
    if (ctx->pc == 0x2F9548u) {
        ctx->pc = 0x2F954Cu;
        goto label_2f954c;
    }
    ctx->pc = 0x2F9544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F954Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F954Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F954Cu; }
            if (ctx->pc != 0x2F954Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F954Cu;
label_2f954c:
    // 0x2f954c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f9550:
    // 0x2f9550: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
label_2f9554:
    if (ctx->pc == 0x2F9554u) {
        ctx->pc = 0x2F9554u;
            // 0x2f9554: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2F9558u;
        goto label_2f9558;
    }
    ctx->pc = 0x2F9550u;
    {
        const bool branch_taken_0x2f9550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9550) {
            ctx->pc = 0x2F9554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9550u;
            // 0x2f9554: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F9588u;
            goto label_2f9588;
        }
    }
    ctx->pc = 0x2F9558u;
label_2f9558:
    // 0x2f9558: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f9558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f955c:
    // 0x2f955c: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_2f9560:
    if (ctx->pc == 0x2F9560u) {
        ctx->pc = 0x2F9564u;
        goto label_2f9564;
    }
    ctx->pc = 0x2F955Cu;
    {
        const bool branch_taken_0x2f955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f955c) {
            ctx->pc = 0x2F9584u;
            goto label_2f9584;
        }
    }
    ctx->pc = 0x2F9564u;
label_2f9564:
    // 0x2f9564: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2f9564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f9568:
    // 0x2f9568: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x2f9568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2f956c:
    // 0x2f956c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2f956cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2f9570:
    // 0x2f9570: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x2f9570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2f9574:
    // 0x2f9574: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f9574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9578:
    // 0x2f9578: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2f9578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_2f957c:
    // 0x2f957c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2f9580:
    // 0x2f9580: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2f9580u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2f9584:
    // 0x2f9584: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f9584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2f9588:
    // 0x2f9588: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_2f958c:
    if (ctx->pc == 0x2F958Cu) {
        ctx->pc = 0x2F958Cu;
            // 0x2f958c: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->pc = 0x2F9590u;
        goto label_2f9590;
    }
    ctx->pc = 0x2F9588u;
    {
        const bool branch_taken_0x2f9588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f9588) {
            ctx->pc = 0x2F958Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9588u;
            // 0x2f958c: 0x8ea30014  lw          $v1, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F95B0u;
            goto label_2f95b0;
        }
    }
    ctx->pc = 0x2F9590u;
label_2f9590:
    // 0x2f9590: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2f9590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2f9594:
    // 0x2f9594: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x2f9594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_2f9598:
    // 0x2f9598: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2f9598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2f959c:
    // 0x2f959c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2f959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2f95a0:
    // 0x2f95a0: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2f95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_2f95a4:
    // 0x2f95a4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f95a8:
    // 0x2f95a8: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x2f95a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_2f95ac:
    // 0x2f95ac: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x2f95acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2f95b0:
    // 0x2f95b0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2f95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2f95b4:
    // 0x2f95b4: 0xaea3010c  sw          $v1, 0x10C($s5)
    ctx->pc = 0x2f95b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 268), GPR_U32(ctx, 3));
label_2f95b8:
    // 0x2f95b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f95b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f95bc:
    // 0x2f95bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2f95bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f95c0:
    // 0x2f95c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f95c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2f95c4:
    // 0x2f95c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f95c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f95c8:
    // 0x2f95c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f95c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f95cc:
    // 0x2f95cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f95ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f95d0:
    // 0x2f95d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f95d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f95d4:
    // 0x2f95d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f95d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f95d8:
    // 0x2f95d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f95d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f95dc:
    // 0x2f95dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f95dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f95e0:
    // 0x2f95e0: 0x3e00008  jr          $ra
label_2f95e4:
    if (ctx->pc == 0x2F95E4u) {
        ctx->pc = 0x2F95E4u;
            // 0x2f95e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2F95E8u;
        goto label_2f95e8;
    }
    ctx->pc = 0x2F95E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F95E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F95E0u;
            // 0x2f95e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F95E8u;
label_2f95e8:
    // 0x2f95e8: 0x0  nop
    ctx->pc = 0x2f95e8u;
    // NOP
label_2f95ec:
    // 0x2f95ec: 0x0  nop
    ctx->pc = 0x2f95ecu;
    // NOP
}
