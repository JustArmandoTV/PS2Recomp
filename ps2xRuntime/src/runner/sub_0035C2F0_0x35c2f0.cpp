#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035C2F0
// Address: 0x35c2f0 - 0x35c610
void sub_0035C2F0_0x35c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C2F0_0x35c2f0");
#endif

    switch (ctx->pc) {
        case 0x35c2f0u: goto label_35c2f0;
        case 0x35c2f4u: goto label_35c2f4;
        case 0x35c2f8u: goto label_35c2f8;
        case 0x35c2fcu: goto label_35c2fc;
        case 0x35c300u: goto label_35c300;
        case 0x35c304u: goto label_35c304;
        case 0x35c308u: goto label_35c308;
        case 0x35c30cu: goto label_35c30c;
        case 0x35c310u: goto label_35c310;
        case 0x35c314u: goto label_35c314;
        case 0x35c318u: goto label_35c318;
        case 0x35c31cu: goto label_35c31c;
        case 0x35c320u: goto label_35c320;
        case 0x35c324u: goto label_35c324;
        case 0x35c328u: goto label_35c328;
        case 0x35c32cu: goto label_35c32c;
        case 0x35c330u: goto label_35c330;
        case 0x35c334u: goto label_35c334;
        case 0x35c338u: goto label_35c338;
        case 0x35c33cu: goto label_35c33c;
        case 0x35c340u: goto label_35c340;
        case 0x35c344u: goto label_35c344;
        case 0x35c348u: goto label_35c348;
        case 0x35c34cu: goto label_35c34c;
        case 0x35c350u: goto label_35c350;
        case 0x35c354u: goto label_35c354;
        case 0x35c358u: goto label_35c358;
        case 0x35c35cu: goto label_35c35c;
        case 0x35c360u: goto label_35c360;
        case 0x35c364u: goto label_35c364;
        case 0x35c368u: goto label_35c368;
        case 0x35c36cu: goto label_35c36c;
        case 0x35c370u: goto label_35c370;
        case 0x35c374u: goto label_35c374;
        case 0x35c378u: goto label_35c378;
        case 0x35c37cu: goto label_35c37c;
        case 0x35c380u: goto label_35c380;
        case 0x35c384u: goto label_35c384;
        case 0x35c388u: goto label_35c388;
        case 0x35c38cu: goto label_35c38c;
        case 0x35c390u: goto label_35c390;
        case 0x35c394u: goto label_35c394;
        case 0x35c398u: goto label_35c398;
        case 0x35c39cu: goto label_35c39c;
        case 0x35c3a0u: goto label_35c3a0;
        case 0x35c3a4u: goto label_35c3a4;
        case 0x35c3a8u: goto label_35c3a8;
        case 0x35c3acu: goto label_35c3ac;
        case 0x35c3b0u: goto label_35c3b0;
        case 0x35c3b4u: goto label_35c3b4;
        case 0x35c3b8u: goto label_35c3b8;
        case 0x35c3bcu: goto label_35c3bc;
        case 0x35c3c0u: goto label_35c3c0;
        case 0x35c3c4u: goto label_35c3c4;
        case 0x35c3c8u: goto label_35c3c8;
        case 0x35c3ccu: goto label_35c3cc;
        case 0x35c3d0u: goto label_35c3d0;
        case 0x35c3d4u: goto label_35c3d4;
        case 0x35c3d8u: goto label_35c3d8;
        case 0x35c3dcu: goto label_35c3dc;
        case 0x35c3e0u: goto label_35c3e0;
        case 0x35c3e4u: goto label_35c3e4;
        case 0x35c3e8u: goto label_35c3e8;
        case 0x35c3ecu: goto label_35c3ec;
        case 0x35c3f0u: goto label_35c3f0;
        case 0x35c3f4u: goto label_35c3f4;
        case 0x35c3f8u: goto label_35c3f8;
        case 0x35c3fcu: goto label_35c3fc;
        case 0x35c400u: goto label_35c400;
        case 0x35c404u: goto label_35c404;
        case 0x35c408u: goto label_35c408;
        case 0x35c40cu: goto label_35c40c;
        case 0x35c410u: goto label_35c410;
        case 0x35c414u: goto label_35c414;
        case 0x35c418u: goto label_35c418;
        case 0x35c41cu: goto label_35c41c;
        case 0x35c420u: goto label_35c420;
        case 0x35c424u: goto label_35c424;
        case 0x35c428u: goto label_35c428;
        case 0x35c42cu: goto label_35c42c;
        case 0x35c430u: goto label_35c430;
        case 0x35c434u: goto label_35c434;
        case 0x35c438u: goto label_35c438;
        case 0x35c43cu: goto label_35c43c;
        case 0x35c440u: goto label_35c440;
        case 0x35c444u: goto label_35c444;
        case 0x35c448u: goto label_35c448;
        case 0x35c44cu: goto label_35c44c;
        case 0x35c450u: goto label_35c450;
        case 0x35c454u: goto label_35c454;
        case 0x35c458u: goto label_35c458;
        case 0x35c45cu: goto label_35c45c;
        case 0x35c460u: goto label_35c460;
        case 0x35c464u: goto label_35c464;
        case 0x35c468u: goto label_35c468;
        case 0x35c46cu: goto label_35c46c;
        case 0x35c470u: goto label_35c470;
        case 0x35c474u: goto label_35c474;
        case 0x35c478u: goto label_35c478;
        case 0x35c47cu: goto label_35c47c;
        case 0x35c480u: goto label_35c480;
        case 0x35c484u: goto label_35c484;
        case 0x35c488u: goto label_35c488;
        case 0x35c48cu: goto label_35c48c;
        case 0x35c490u: goto label_35c490;
        case 0x35c494u: goto label_35c494;
        case 0x35c498u: goto label_35c498;
        case 0x35c49cu: goto label_35c49c;
        case 0x35c4a0u: goto label_35c4a0;
        case 0x35c4a4u: goto label_35c4a4;
        case 0x35c4a8u: goto label_35c4a8;
        case 0x35c4acu: goto label_35c4ac;
        case 0x35c4b0u: goto label_35c4b0;
        case 0x35c4b4u: goto label_35c4b4;
        case 0x35c4b8u: goto label_35c4b8;
        case 0x35c4bcu: goto label_35c4bc;
        case 0x35c4c0u: goto label_35c4c0;
        case 0x35c4c4u: goto label_35c4c4;
        case 0x35c4c8u: goto label_35c4c8;
        case 0x35c4ccu: goto label_35c4cc;
        case 0x35c4d0u: goto label_35c4d0;
        case 0x35c4d4u: goto label_35c4d4;
        case 0x35c4d8u: goto label_35c4d8;
        case 0x35c4dcu: goto label_35c4dc;
        case 0x35c4e0u: goto label_35c4e0;
        case 0x35c4e4u: goto label_35c4e4;
        case 0x35c4e8u: goto label_35c4e8;
        case 0x35c4ecu: goto label_35c4ec;
        case 0x35c4f0u: goto label_35c4f0;
        case 0x35c4f4u: goto label_35c4f4;
        case 0x35c4f8u: goto label_35c4f8;
        case 0x35c4fcu: goto label_35c4fc;
        case 0x35c500u: goto label_35c500;
        case 0x35c504u: goto label_35c504;
        case 0x35c508u: goto label_35c508;
        case 0x35c50cu: goto label_35c50c;
        case 0x35c510u: goto label_35c510;
        case 0x35c514u: goto label_35c514;
        case 0x35c518u: goto label_35c518;
        case 0x35c51cu: goto label_35c51c;
        case 0x35c520u: goto label_35c520;
        case 0x35c524u: goto label_35c524;
        case 0x35c528u: goto label_35c528;
        case 0x35c52cu: goto label_35c52c;
        case 0x35c530u: goto label_35c530;
        case 0x35c534u: goto label_35c534;
        case 0x35c538u: goto label_35c538;
        case 0x35c53cu: goto label_35c53c;
        case 0x35c540u: goto label_35c540;
        case 0x35c544u: goto label_35c544;
        case 0x35c548u: goto label_35c548;
        case 0x35c54cu: goto label_35c54c;
        case 0x35c550u: goto label_35c550;
        case 0x35c554u: goto label_35c554;
        case 0x35c558u: goto label_35c558;
        case 0x35c55cu: goto label_35c55c;
        case 0x35c560u: goto label_35c560;
        case 0x35c564u: goto label_35c564;
        case 0x35c568u: goto label_35c568;
        case 0x35c56cu: goto label_35c56c;
        case 0x35c570u: goto label_35c570;
        case 0x35c574u: goto label_35c574;
        case 0x35c578u: goto label_35c578;
        case 0x35c57cu: goto label_35c57c;
        case 0x35c580u: goto label_35c580;
        case 0x35c584u: goto label_35c584;
        case 0x35c588u: goto label_35c588;
        case 0x35c58cu: goto label_35c58c;
        case 0x35c590u: goto label_35c590;
        case 0x35c594u: goto label_35c594;
        case 0x35c598u: goto label_35c598;
        case 0x35c59cu: goto label_35c59c;
        case 0x35c5a0u: goto label_35c5a0;
        case 0x35c5a4u: goto label_35c5a4;
        case 0x35c5a8u: goto label_35c5a8;
        case 0x35c5acu: goto label_35c5ac;
        case 0x35c5b0u: goto label_35c5b0;
        case 0x35c5b4u: goto label_35c5b4;
        case 0x35c5b8u: goto label_35c5b8;
        case 0x35c5bcu: goto label_35c5bc;
        case 0x35c5c0u: goto label_35c5c0;
        case 0x35c5c4u: goto label_35c5c4;
        case 0x35c5c8u: goto label_35c5c8;
        case 0x35c5ccu: goto label_35c5cc;
        case 0x35c5d0u: goto label_35c5d0;
        case 0x35c5d4u: goto label_35c5d4;
        case 0x35c5d8u: goto label_35c5d8;
        case 0x35c5dcu: goto label_35c5dc;
        case 0x35c5e0u: goto label_35c5e0;
        case 0x35c5e4u: goto label_35c5e4;
        case 0x35c5e8u: goto label_35c5e8;
        case 0x35c5ecu: goto label_35c5ec;
        case 0x35c5f0u: goto label_35c5f0;
        case 0x35c5f4u: goto label_35c5f4;
        case 0x35c5f8u: goto label_35c5f8;
        case 0x35c5fcu: goto label_35c5fc;
        case 0x35c600u: goto label_35c600;
        case 0x35c604u: goto label_35c604;
        case 0x35c608u: goto label_35c608;
        case 0x35c60cu: goto label_35c60c;
        default: break;
    }

    ctx->pc = 0x35c2f0u;

label_35c2f0:
    // 0x35c2f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x35c2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_35c2f4:
    // 0x35c2f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35c2f8:
    // 0x35c2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35c2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35c2fc:
    // 0x35c2fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35c2fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35c300:
    // 0x35c300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c304:
    // 0x35c304: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35c304u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_35c308:
    // 0x35c308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c30c:
    // 0x35c30c: 0xac820050  sw          $v0, 0x50($a0)
    ctx->pc = 0x35c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
label_35c310:
    // 0x35c310: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x35c310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_35c314:
    // 0x35c314: 0xc04cbd8  jal         func_132F60
label_35c318:
    if (ctx->pc == 0x35C318u) {
        ctx->pc = 0x35C318u;
            // 0x35c318: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x35C31Cu;
        goto label_35c31c;
    }
    ctx->pc = 0x35C314u;
    SET_GPR_U32(ctx, 31, 0x35C31Cu);
    ctx->pc = 0x35C318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C314u;
            // 0x35c318: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C31Cu; }
        if (ctx->pc != 0x35C31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C31Cu; }
        if (ctx->pc != 0x35C31Cu) { return; }
    }
    ctx->pc = 0x35C31Cu;
label_35c31c:
    // 0x35c31c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35c320:
    // 0x35c320: 0xc04f29c  jal         func_13CA70
label_35c324:
    if (ctx->pc == 0x35C324u) {
        ctx->pc = 0x35C324u;
            // 0x35c324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C328u;
        goto label_35c328;
    }
    ctx->pc = 0x35C320u;
    SET_GPR_U32(ctx, 31, 0x35C328u);
    ctx->pc = 0x35C324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C320u;
            // 0x35c324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C328u; }
        if (ctx->pc != 0x35C328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C328u; }
        if (ctx->pc != 0x35C328u) { return; }
    }
    ctx->pc = 0x35C328u;
label_35c328:
    // 0x35c328: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35c328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35c32c:
    // 0x35c32c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x35c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35c330:
    // 0x35c330: 0xc04cdf0  jal         func_1337C0
label_35c334:
    if (ctx->pc == 0x35C334u) {
        ctx->pc = 0x35C334u;
            // 0x35c334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C338u;
        goto label_35c338;
    }
    ctx->pc = 0x35C330u;
    SET_GPR_U32(ctx, 31, 0x35C338u);
    ctx->pc = 0x35C334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C330u;
            // 0x35c334: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C338u; }
        if (ctx->pc != 0x35C338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C338u; }
        if (ctx->pc != 0x35C338u) { return; }
    }
    ctx->pc = 0x35C338u;
label_35c338:
    // 0x35c338: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35c338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35c33c:
    // 0x35c33c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35c340:
    // 0x35c340: 0xc04cdd0  jal         func_133740
label_35c344:
    if (ctx->pc == 0x35C344u) {
        ctx->pc = 0x35C344u;
            // 0x35c344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C348u;
        goto label_35c348;
    }
    ctx->pc = 0x35C340u;
    SET_GPR_U32(ctx, 31, 0x35C348u);
    ctx->pc = 0x35C344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C340u;
            // 0x35c344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C348u; }
        if (ctx->pc != 0x35C348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C348u; }
        if (ctx->pc != 0x35C348u) { return; }
    }
    ctx->pc = 0x35C348u;
label_35c348:
    // 0x35c348: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x35c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_35c34c:
    // 0x35c34c: 0xc04c994  jal         func_132650
label_35c350:
    if (ctx->pc == 0x35C350u) {
        ctx->pc = 0x35C350u;
            // 0x35c350: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35C354u;
        goto label_35c354;
    }
    ctx->pc = 0x35C34Cu;
    SET_GPR_U32(ctx, 31, 0x35C354u);
    ctx->pc = 0x35C350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C34Cu;
            // 0x35c350: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C354u; }
        if (ctx->pc != 0x35C354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C354u; }
        if (ctx->pc != 0x35C354u) { return; }
    }
    ctx->pc = 0x35C354u;
label_35c354:
    // 0x35c354: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x35c354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_35c358:
    // 0x35c358: 0xa202004c  sb          $v0, 0x4C($s0)
    ctx->pc = 0x35c358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
label_35c35c:
    // 0x35c35c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x35c35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35c360:
    // 0x35c360: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x35c360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_35c364:
    // 0x35c364: 0x320f809  jalr        $t9
label_35c368:
    if (ctx->pc == 0x35C368u) {
        ctx->pc = 0x35C368u;
            // 0x35c368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C36Cu;
        goto label_35c36c;
    }
    ctx->pc = 0x35C364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C36Cu);
        ctx->pc = 0x35C368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C364u;
            // 0x35c368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C36Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C36Cu; }
            if (ctx->pc != 0x35C36Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35C36Cu;
label_35c36c:
    // 0x35c36c: 0xc0d7098  jal         func_35C260
label_35c370:
    if (ctx->pc == 0x35C370u) {
        ctx->pc = 0x35C370u;
            // 0x35c370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C374u;
        goto label_35c374;
    }
    ctx->pc = 0x35C36Cu;
    SET_GPR_U32(ctx, 31, 0x35C374u);
    ctx->pc = 0x35C370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C36Cu;
            // 0x35c370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35C260u;
    if (runtime->hasFunction(0x35C260u)) {
        auto targetFn = runtime->lookupFunction(0x35C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C374u; }
        if (ctx->pc != 0x35C374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C260_0x35c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C374u; }
        if (ctx->pc != 0x35C374u) { return; }
    }
    ctx->pc = 0x35C374u;
label_35c374:
    // 0x35c374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35c378:
    // 0x35c378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c37c:
    // 0x35c37c: 0x3e00008  jr          $ra
label_35c380:
    if (ctx->pc == 0x35C380u) {
        ctx->pc = 0x35C380u;
            // 0x35c380: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x35C384u;
        goto label_35c384;
    }
    ctx->pc = 0x35C37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C37Cu;
            // 0x35c380: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C384u;
label_35c384:
    // 0x35c384: 0x0  nop
    ctx->pc = 0x35c384u;
    // NOP
label_35c388:
    // 0x35c388: 0x0  nop
    ctx->pc = 0x35c388u;
    // NOP
label_35c38c:
    // 0x35c38c: 0x0  nop
    ctx->pc = 0x35c38cu;
    // NOP
label_35c390:
    // 0x35c390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35c394:
    // 0x35c394: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_35c398:
    // 0x35c398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35c398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35c39c:
    // 0x35c39c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c3a0:
    // 0x35c3a0: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x35c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_35c3a4:
    // 0x35c3a4: 0x10a20025  beq         $a1, $v0, . + 4 + (0x25 << 2)
label_35c3a8:
    if (ctx->pc == 0x35C3A8u) {
        ctx->pc = 0x35C3A8u;
            // 0x35c3a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C3ACu;
        goto label_35c3ac;
    }
    ctx->pc = 0x35C3A4u;
    {
        const bool branch_taken_0x35c3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x35C3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C3A4u;
            // 0x35c3a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c3a4) {
            ctx->pc = 0x35C43Cu;
            goto label_35c43c;
        }
    }
    ctx->pc = 0x35C3ACu;
label_35c3ac:
    // 0x35c3ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35c3b0:
    // 0x35c3b0: 0x50a30023  beql        $a1, $v1, . + 4 + (0x23 << 2)
label_35c3b4:
    if (ctx->pc == 0x35C3B4u) {
        ctx->pc = 0x35C3B4u;
            // 0x35c3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C3B8u;
        goto label_35c3b8;
    }
    ctx->pc = 0x35C3B0u;
    {
        const bool branch_taken_0x35c3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x35c3b0) {
            ctx->pc = 0x35C3B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35C3B0u;
            // 0x35c3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C440u;
            goto label_35c440;
        }
    }
    ctx->pc = 0x35C3B8u;
label_35c3b8:
    // 0x35c3b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35c3bc:
    // 0x35c3bc: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_35c3c0:
    if (ctx->pc == 0x35C3C0u) {
        ctx->pc = 0x35C3C4u;
        goto label_35c3c4;
    }
    ctx->pc = 0x35C3BCu;
    {
        const bool branch_taken_0x35c3bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x35c3bc) {
            ctx->pc = 0x35C3E8u;
            goto label_35c3e8;
        }
    }
    ctx->pc = 0x35C3C4u;
label_35c3c4:
    // 0x35c3c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35c3c8:
    // 0x35c3c8: 0x10a2001c  beq         $a1, $v0, . + 4 + (0x1C << 2)
label_35c3cc:
    if (ctx->pc == 0x35C3CCu) {
        ctx->pc = 0x35C3D0u;
        goto label_35c3d0;
    }
    ctx->pc = 0x35C3C8u;
    {
        const bool branch_taken_0x35c3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x35c3c8) {
            ctx->pc = 0x35C43Cu;
            goto label_35c43c;
        }
    }
    ctx->pc = 0x35C3D0u;
label_35c3d0:
    // 0x35c3d0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_35c3d4:
    if (ctx->pc == 0x35C3D4u) {
        ctx->pc = 0x35C3D4u;
            // 0x35c3d4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x35C3D8u;
        goto label_35c3d8;
    }
    ctx->pc = 0x35C3D0u;
    {
        const bool branch_taken_0x35c3d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c3d0) {
            ctx->pc = 0x35C3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35C3D0u;
            // 0x35c3d4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C3E0u;
            goto label_35c3e0;
        }
    }
    ctx->pc = 0x35C3D8u;
label_35c3d8:
    // 0x35c3d8: 0x10000018  b           . + 4 + (0x18 << 2)
label_35c3dc:
    if (ctx->pc == 0x35C3DCu) {
        ctx->pc = 0x35C3E0u;
        goto label_35c3e0;
    }
    ctx->pc = 0x35C3D8u;
    {
        const bool branch_taken_0x35c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c3d8) {
            ctx->pc = 0x35C43Cu;
            goto label_35c43c;
        }
    }
    ctx->pc = 0x35C3E0u;
label_35c3e0:
    // 0x35c3e0: 0x10000016  b           . + 4 + (0x16 << 2)
label_35c3e4:
    if (ctx->pc == 0x35C3E4u) {
        ctx->pc = 0x35C3E4u;
            // 0x35c3e4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x35C3E8u;
        goto label_35c3e8;
    }
    ctx->pc = 0x35C3E0u;
    {
        const bool branch_taken_0x35c3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C3E0u;
            // 0x35c3e4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c3e0) {
            ctx->pc = 0x35C43Cu;
            goto label_35c43c;
        }
    }
    ctx->pc = 0x35C3E8u;
label_35c3e8:
    // 0x35c3e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x35c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_35c3ec:
    // 0x35c3ec: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x35c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_35c3f0:
    // 0x35c3f0: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x35c3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35c3f4:
    // 0x35c3f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35c3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_35c3f8:
    // 0x35c3f8: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x35c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35c3fc:
    // 0x35c3fc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x35c3fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_35c400:
    // 0x35c400: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35c400u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_35c404:
    // 0x35c404: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_35c408:
    if (ctx->pc == 0x35C408u) {
        ctx->pc = 0x35C408u;
            // 0x35c408: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->pc = 0x35C40Cu;
        goto label_35c40c;
    }
    ctx->pc = 0x35C404u;
    {
        const bool branch_taken_0x35c404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35C408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C404u;
            // 0x35c408: 0xe6010054  swc1        $f1, 0x54($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c404) {
            ctx->pc = 0x35C43Cu;
            goto label_35c43c;
        }
    }
    ctx->pc = 0x35C40Cu;
label_35c40c:
    // 0x35c40c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35c410:
    // 0x35c410: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x35c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35c414:
    // 0x35c414: 0x8c420964  lw          $v0, 0x964($v0)
    ctx->pc = 0x35c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2404)));
label_35c418:
    // 0x35c418: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x35c418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_35c41c:
    // 0x35c41c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_35c420:
    if (ctx->pc == 0x35C420u) {
        ctx->pc = 0x35C420u;
            // 0x35c420: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x35C424u;
        goto label_35c424;
    }
    ctx->pc = 0x35C41Cu;
    {
        const bool branch_taken_0x35c41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c41c) {
            ctx->pc = 0x35C420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35C41Cu;
            // 0x35c420: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C434u;
            goto label_35c434;
        }
    }
    ctx->pc = 0x35C424u;
label_35c424:
    // 0x35c424: 0xc0d71f8  jal         func_35C7E0
label_35c428:
    if (ctx->pc == 0x35C428u) {
        ctx->pc = 0x35C42Cu;
        goto label_35c42c;
    }
    ctx->pc = 0x35C424u;
    SET_GPR_U32(ctx, 31, 0x35C42Cu);
    ctx->pc = 0x35C7E0u;
    if (runtime->hasFunction(0x35C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x35C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C42Cu; }
        if (ctx->pc != 0x35C42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C7E0_0x35c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C42Cu; }
        if (ctx->pc != 0x35C42Cu) { return; }
    }
    ctx->pc = 0x35C42Cu;
label_35c42c:
    // 0x35c42c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35c430:
    // 0x35c430: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x35c430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_35c434:
    // 0x35c434: 0x10000002  b           . + 4 + (0x2 << 2)
label_35c438:
    if (ctx->pc == 0x35C438u) {
        ctx->pc = 0x35C438u;
            // 0x35c438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35C43Cu;
        goto label_35c43c;
    }
    ctx->pc = 0x35C434u;
    {
        const bool branch_taken_0x35c434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C434u;
            // 0x35c438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c434) {
            ctx->pc = 0x35C440u;
            goto label_35c440;
        }
    }
    ctx->pc = 0x35C43Cu;
label_35c43c:
    // 0x35c43c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c440:
    // 0x35c440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35c444:
    // 0x35c444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c448:
    // 0x35c448: 0x3e00008  jr          $ra
label_35c44c:
    if (ctx->pc == 0x35C44Cu) {
        ctx->pc = 0x35C44Cu;
            // 0x35c44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35C450u;
        goto label_35c450;
    }
    ctx->pc = 0x35C448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C448u;
            // 0x35c44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C450u;
label_35c450:
    // 0x35c450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_35c454:
    // 0x35c454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_35c458:
    // 0x35c458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35c45c:
    // 0x35c45c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35c460:
    // 0x35c460: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35c460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c464:
    // 0x35c464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c468:
    // 0x35c468: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35c468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35c46c:
    // 0x35c46c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35c46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35c470:
    // 0x35c470: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x35c470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35c474:
    // 0x35c474: 0x320f809  jalr        $t9
label_35c478:
    if (ctx->pc == 0x35C478u) {
        ctx->pc = 0x35C478u;
            // 0x35c478: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C47Cu;
        goto label_35c47c;
    }
    ctx->pc = 0x35C474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C47Cu);
        ctx->pc = 0x35C478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C474u;
            // 0x35c478: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C47Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C47Cu; }
            if (ctx->pc != 0x35C47Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35C47Cu;
label_35c47c:
    // 0x35c47c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35c480:
    // 0x35c480: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35c480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35c484:
    // 0x35c484: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x35c484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_35c488:
    // 0x35c488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35c488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35c48c:
    // 0x35c48c: 0x8c440e48  lw          $a0, 0xE48($v0)
    ctx->pc = 0x35c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35c490:
    // 0x35c490: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x35c490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35c494:
    // 0x35c494: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35c494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35c498:
    // 0x35c498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35c498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35c49c:
    // 0x35c49c: 0x26480010  addiu       $t0, $s2, 0x10
    ctx->pc = 0x35c49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_35c4a0:
    // 0x35c4a0: 0xc0d6814  jal         func_35A050
label_35c4a4:
    if (ctx->pc == 0x35C4A4u) {
        ctx->pc = 0x35C4A4u;
            // 0x35c4a4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C4A8u;
        goto label_35c4a8;
    }
    ctx->pc = 0x35C4A0u;
    SET_GPR_U32(ctx, 31, 0x35C4A8u);
    ctx->pc = 0x35C4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C4A0u;
            // 0x35c4a4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35A050u;
    if (runtime->hasFunction(0x35A050u)) {
        auto targetFn = runtime->lookupFunction(0x35A050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C4A8u; }
        if (ctx->pc != 0x35C4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035A050_0x35a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C4A8u; }
        if (ctx->pc != 0x35C4A8u) { return; }
    }
    ctx->pc = 0x35C4A8u;
label_35c4a8:
    // 0x35c4a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35c4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_35c4ac:
    // 0x35c4ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35c4acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35c4b0:
    // 0x35c4b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c4b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35c4b4:
    // 0x35c4b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c4b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c4b8:
    // 0x35c4b8: 0x3e00008  jr          $ra
label_35c4bc:
    if (ctx->pc == 0x35C4BCu) {
        ctx->pc = 0x35C4BCu;
            // 0x35c4bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x35C4C0u;
        goto label_35c4c0;
    }
    ctx->pc = 0x35C4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C4B8u;
            // 0x35c4bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C4C0u;
label_35c4c0:
    // 0x35c4c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_35c4c4:
    // 0x35c4c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35c4c8:
    // 0x35c4c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x35c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35c4cc:
    // 0x35c4cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_35c4d0:
    // 0x35c4d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35c4d4:
    // 0x35c4d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35c4d8:
    // 0x35c4d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c4dc:
    // 0x35c4dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c4e0:
    // 0x35c4e0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x35c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_35c4e4:
    // 0x35c4e4: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
label_35c4e8:
    if (ctx->pc == 0x35C4E8u) {
        ctx->pc = 0x35C4E8u;
            // 0x35c4e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C4ECu;
        goto label_35c4ec;
    }
    ctx->pc = 0x35C4E4u;
    {
        const bool branch_taken_0x35c4e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35C4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C4E4u;
            // 0x35c4e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c4e4) {
            ctx->pc = 0x35C5F0u;
            goto label_35c5f0;
        }
    }
    ctx->pc = 0x35C4ECu;
label_35c4ec:
    // 0x35c4ec: 0x8e020e00  lw          $v0, 0xE00($s0)
    ctx->pc = 0x35c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3584)));
label_35c4f0:
    // 0x35c4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35c4f4:
    // 0x35c4f4: 0xc075ecc  jal         func_1D7B30
label_35c4f8:
    if (ctx->pc == 0x35C4F8u) {
        ctx->pc = 0x35C4F8u;
            // 0x35c4f8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x35C4FCu;
        goto label_35c4fc;
    }
    ctx->pc = 0x35C4F4u;
    SET_GPR_U32(ctx, 31, 0x35C4FCu);
    ctx->pc = 0x35C4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C4F4u;
            // 0x35c4f8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7B30u;
    if (runtime->hasFunction(0x1D7B30u)) {
        auto targetFn = runtime->lookupFunction(0x1D7B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C4FCu; }
        if (ctx->pc != 0x35C4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7B30_0x1d7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C4FCu; }
        if (ctx->pc != 0x35C4FCu) { return; }
    }
    ctx->pc = 0x35C4FCu;
label_35c4fc:
    // 0x35c4fc: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x35c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_35c500:
    // 0x35c500: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x35c500u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_35c504:
    // 0x35c504: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35c504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c508:
    // 0x35c508: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_35c50c:
    if (ctx->pc == 0x35C50Cu) {
        ctx->pc = 0x35C50Cu;
            // 0x35c50c: 0x26120e34  addiu       $s2, $s0, 0xE34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3636));
        ctx->pc = 0x35C510u;
        goto label_35c510;
    }
    ctx->pc = 0x35C508u;
    {
        const bool branch_taken_0x35c508 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35C50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C508u;
            // 0x35c50c: 0x26120e34  addiu       $s2, $s0, 0xE34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c508) {
            ctx->pc = 0x35C520u;
            goto label_35c520;
        }
    }
    ctx->pc = 0x35C510u;
label_35c510:
    // 0x35c510: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35c510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_35c514:
    // 0x35c514: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_35c518:
    if (ctx->pc == 0x35C518u) {
        ctx->pc = 0x35C51Cu;
        goto label_35c51c;
    }
    ctx->pc = 0x35C514u;
    {
        const bool branch_taken_0x35c514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c514) {
            ctx->pc = 0x35C520u;
            goto label_35c520;
        }
    }
    ctx->pc = 0x35C51Cu;
label_35c51c:
    // 0x35c51c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x35c51cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35c520:
    // 0x35c520: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_35c524:
    if (ctx->pc == 0x35C524u) {
        ctx->pc = 0x35C528u;
        goto label_35c528;
    }
    ctx->pc = 0x35C520u;
    {
        const bool branch_taken_0x35c520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c520) {
            ctx->pc = 0x35C53Cu;
            goto label_35c53c;
        }
    }
    ctx->pc = 0x35C528u;
label_35c528:
    // 0x35c528: 0xc075eb4  jal         func_1D7AD0
label_35c52c:
    if (ctx->pc == 0x35C52Cu) {
        ctx->pc = 0x35C52Cu;
            // 0x35c52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C530u;
        goto label_35c530;
    }
    ctx->pc = 0x35C528u;
    SET_GPR_U32(ctx, 31, 0x35C530u);
    ctx->pc = 0x35C52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C528u;
            // 0x35c52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C530u; }
        if (ctx->pc != 0x35C530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C530u; }
        if (ctx->pc != 0x35C530u) { return; }
    }
    ctx->pc = 0x35C530u;
label_35c530:
    // 0x35c530: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_35c534:
    if (ctx->pc == 0x35C534u) {
        ctx->pc = 0x35C538u;
        goto label_35c538;
    }
    ctx->pc = 0x35C530u;
    {
        const bool branch_taken_0x35c530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c530) {
            ctx->pc = 0x35C53Cu;
            goto label_35c53c;
        }
    }
    ctx->pc = 0x35C538u;
label_35c538:
    // 0x35c538: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35c538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c53c:
    // 0x35c53c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_35c540:
    if (ctx->pc == 0x35C540u) {
        ctx->pc = 0x35C544u;
        goto label_35c544;
    }
    ctx->pc = 0x35C53Cu;
    {
        const bool branch_taken_0x35c53c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c53c) {
            ctx->pc = 0x35C554u;
            goto label_35c554;
        }
    }
    ctx->pc = 0x35C544u;
label_35c544:
    // 0x35c544: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_35c548:
    // 0x35c548: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x35c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_35c54c:
    // 0x35c54c: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_35c550:
    if (ctx->pc == 0x35C550u) {
        ctx->pc = 0x35C550u;
            // 0x35c550: 0x8e100d60  lw          $s0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x35C554u;
        goto label_35c554;
    }
    ctx->pc = 0x35C54Cu;
    {
        const bool branch_taken_0x35c54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35c54c) {
            ctx->pc = 0x35C550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35C54Cu;
            // 0x35c550: 0x8e100d60  lw          $s0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C57Cu;
            goto label_35c57c;
        }
    }
    ctx->pc = 0x35C554u;
label_35c554:
    // 0x35c554: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35c554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35c558:
    // 0x35c558: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x35c558u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_35c55c:
    // 0x35c55c: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x35c55cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_35c560:
    // 0x35c560: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35c560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_35c564:
    // 0x35c564: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x35c564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_35c568:
    // 0x35c568: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x35c568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_35c56c:
    // 0x35c56c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35c56cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c570:
    // 0x35c570: 0xc0bb404  jal         func_2ED010
label_35c574:
    if (ctx->pc == 0x35C574u) {
        ctx->pc = 0x35C574u;
            // 0x35c574: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35C578u;
        goto label_35c578;
    }
    ctx->pc = 0x35C570u;
    SET_GPR_U32(ctx, 31, 0x35C578u);
    ctx->pc = 0x35C574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C570u;
            // 0x35c574: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C578u; }
        if (ctx->pc != 0x35C578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C578u; }
        if (ctx->pc != 0x35C578u) { return; }
    }
    ctx->pc = 0x35C578u;
label_35c578:
    // 0x35c578: 0x8e100d60  lw          $s0, 0xD60($s0)
    ctx->pc = 0x35c578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_35c57c:
    // 0x35c57c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x35c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_35c580:
    // 0x35c580: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x35c580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_35c584:
    // 0x35c584: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x35c584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_35c588:
    // 0x35c588: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x35c588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_35c58c:
    // 0x35c58c: 0x320f809  jalr        $t9
label_35c590:
    if (ctx->pc == 0x35C590u) {
        ctx->pc = 0x35C590u;
            // 0x35c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C594u;
        goto label_35c594;
    }
    ctx->pc = 0x35C58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C594u);
        ctx->pc = 0x35C590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C58Cu;
            // 0x35c590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C594u; }
            if (ctx->pc != 0x35C594u) { return; }
        }
        }
    }
    ctx->pc = 0x35C594u;
label_35c594:
    // 0x35c594: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x35c594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_35c598:
    // 0x35c598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35c59c:
    // 0x35c59c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x35c59cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_35c5a0:
    // 0x35c5a0: 0x320f809  jalr        $t9
label_35c5a4:
    if (ctx->pc == 0x35C5A4u) {
        ctx->pc = 0x35C5A4u;
            // 0x35c5a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x35C5A8u;
        goto label_35c5a8;
    }
    ctx->pc = 0x35C5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C5A8u);
        ctx->pc = 0x35C5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C5A0u;
            // 0x35c5a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C5A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C5A8u; }
            if (ctx->pc != 0x35C5A8u) { return; }
        }
        }
    }
    ctx->pc = 0x35C5A8u;
label_35c5a8:
    // 0x35c5a8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x35c5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35c5ac:
    // 0x35c5ac: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x35c5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_35c5b0:
    // 0x35c5b0: 0x320f809  jalr        $t9
label_35c5b4:
    if (ctx->pc == 0x35C5B4u) {
        ctx->pc = 0x35C5B4u;
            // 0x35c5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C5B8u;
        goto label_35c5b8;
    }
    ctx->pc = 0x35C5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C5B8u);
        ctx->pc = 0x35C5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C5B0u;
            // 0x35c5b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C5B8u; }
            if (ctx->pc != 0x35C5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x35C5B8u;
label_35c5b8:
    // 0x35c5b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35c5bc:
    // 0x35c5bc: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x35c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_35c5c0:
    // 0x35c5c0: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x35c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_35c5c4:
    // 0x35c5c4: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x35c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_35c5c8:
    // 0x35c5c8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x35c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_35c5cc:
    // 0x35c5cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35c5d0:
    // 0x35c5d0: 0x8c430e48  lw          $v1, 0xE48($v0)
    ctx->pc = 0x35c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35c5d4:
    // 0x35c5d4: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x35c5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_35c5d8:
    // 0x35c5d8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x35c5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_35c5dc:
    // 0x35c5dc: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x35c5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
label_35c5e0:
    // 0x35c5e0: 0x24626ab0  addiu       $v0, $v1, 0x6AB0
    ctx->pc = 0x35c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 27312));
label_35c5e4:
    // 0x35c5e4: 0x24656aa4  addiu       $a1, $v1, 0x6AA4
    ctx->pc = 0x35c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 27300));
label_35c5e8:
    // 0x35c5e8: 0xc0582cc  jal         func_160B30
label_35c5ec:
    if (ctx->pc == 0x35C5ECu) {
        ctx->pc = 0x35C5ECu;
            // 0x35c5ec: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x35C5F0u;
        goto label_35c5f0;
    }
    ctx->pc = 0x35C5E8u;
    SET_GPR_U32(ctx, 31, 0x35C5F0u);
    ctx->pc = 0x35C5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C5E8u;
            // 0x35c5ec: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C5F0u; }
        if (ctx->pc != 0x35C5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C5F0u; }
        if (ctx->pc != 0x35C5F0u) { return; }
    }
    ctx->pc = 0x35C5F0u;
label_35c5f0:
    // 0x35c5f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35c5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35c5f4:
    // 0x35c5f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35c5f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35c5f8:
    // 0x35c5f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35c5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35c5fc:
    // 0x35c5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35c600:
    // 0x35c600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c604:
    // 0x35c604: 0x3e00008  jr          $ra
label_35c608:
    if (ctx->pc == 0x35C608u) {
        ctx->pc = 0x35C608u;
            // 0x35c608: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35C60Cu;
        goto label_35c60c;
    }
    ctx->pc = 0x35C604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C604u;
            // 0x35c608: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C60Cu;
label_35c60c:
    // 0x35c60c: 0x0  nop
    ctx->pc = 0x35c60cu;
    // NOP
}
