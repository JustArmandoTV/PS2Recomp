#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF290
// Address: 0x2cf290 - 0x2cf6c0
void sub_002CF290_0x2cf290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF290_0x2cf290");
#endif

    switch (ctx->pc) {
        case 0x2cf290u: goto label_2cf290;
        case 0x2cf294u: goto label_2cf294;
        case 0x2cf298u: goto label_2cf298;
        case 0x2cf29cu: goto label_2cf29c;
        case 0x2cf2a0u: goto label_2cf2a0;
        case 0x2cf2a4u: goto label_2cf2a4;
        case 0x2cf2a8u: goto label_2cf2a8;
        case 0x2cf2acu: goto label_2cf2ac;
        case 0x2cf2b0u: goto label_2cf2b0;
        case 0x2cf2b4u: goto label_2cf2b4;
        case 0x2cf2b8u: goto label_2cf2b8;
        case 0x2cf2bcu: goto label_2cf2bc;
        case 0x2cf2c0u: goto label_2cf2c0;
        case 0x2cf2c4u: goto label_2cf2c4;
        case 0x2cf2c8u: goto label_2cf2c8;
        case 0x2cf2ccu: goto label_2cf2cc;
        case 0x2cf2d0u: goto label_2cf2d0;
        case 0x2cf2d4u: goto label_2cf2d4;
        case 0x2cf2d8u: goto label_2cf2d8;
        case 0x2cf2dcu: goto label_2cf2dc;
        case 0x2cf2e0u: goto label_2cf2e0;
        case 0x2cf2e4u: goto label_2cf2e4;
        case 0x2cf2e8u: goto label_2cf2e8;
        case 0x2cf2ecu: goto label_2cf2ec;
        case 0x2cf2f0u: goto label_2cf2f0;
        case 0x2cf2f4u: goto label_2cf2f4;
        case 0x2cf2f8u: goto label_2cf2f8;
        case 0x2cf2fcu: goto label_2cf2fc;
        case 0x2cf300u: goto label_2cf300;
        case 0x2cf304u: goto label_2cf304;
        case 0x2cf308u: goto label_2cf308;
        case 0x2cf30cu: goto label_2cf30c;
        case 0x2cf310u: goto label_2cf310;
        case 0x2cf314u: goto label_2cf314;
        case 0x2cf318u: goto label_2cf318;
        case 0x2cf31cu: goto label_2cf31c;
        case 0x2cf320u: goto label_2cf320;
        case 0x2cf324u: goto label_2cf324;
        case 0x2cf328u: goto label_2cf328;
        case 0x2cf32cu: goto label_2cf32c;
        case 0x2cf330u: goto label_2cf330;
        case 0x2cf334u: goto label_2cf334;
        case 0x2cf338u: goto label_2cf338;
        case 0x2cf33cu: goto label_2cf33c;
        case 0x2cf340u: goto label_2cf340;
        case 0x2cf344u: goto label_2cf344;
        case 0x2cf348u: goto label_2cf348;
        case 0x2cf34cu: goto label_2cf34c;
        case 0x2cf350u: goto label_2cf350;
        case 0x2cf354u: goto label_2cf354;
        case 0x2cf358u: goto label_2cf358;
        case 0x2cf35cu: goto label_2cf35c;
        case 0x2cf360u: goto label_2cf360;
        case 0x2cf364u: goto label_2cf364;
        case 0x2cf368u: goto label_2cf368;
        case 0x2cf36cu: goto label_2cf36c;
        case 0x2cf370u: goto label_2cf370;
        case 0x2cf374u: goto label_2cf374;
        case 0x2cf378u: goto label_2cf378;
        case 0x2cf37cu: goto label_2cf37c;
        case 0x2cf380u: goto label_2cf380;
        case 0x2cf384u: goto label_2cf384;
        case 0x2cf388u: goto label_2cf388;
        case 0x2cf38cu: goto label_2cf38c;
        case 0x2cf390u: goto label_2cf390;
        case 0x2cf394u: goto label_2cf394;
        case 0x2cf398u: goto label_2cf398;
        case 0x2cf39cu: goto label_2cf39c;
        case 0x2cf3a0u: goto label_2cf3a0;
        case 0x2cf3a4u: goto label_2cf3a4;
        case 0x2cf3a8u: goto label_2cf3a8;
        case 0x2cf3acu: goto label_2cf3ac;
        case 0x2cf3b0u: goto label_2cf3b0;
        case 0x2cf3b4u: goto label_2cf3b4;
        case 0x2cf3b8u: goto label_2cf3b8;
        case 0x2cf3bcu: goto label_2cf3bc;
        case 0x2cf3c0u: goto label_2cf3c0;
        case 0x2cf3c4u: goto label_2cf3c4;
        case 0x2cf3c8u: goto label_2cf3c8;
        case 0x2cf3ccu: goto label_2cf3cc;
        case 0x2cf3d0u: goto label_2cf3d0;
        case 0x2cf3d4u: goto label_2cf3d4;
        case 0x2cf3d8u: goto label_2cf3d8;
        case 0x2cf3dcu: goto label_2cf3dc;
        case 0x2cf3e0u: goto label_2cf3e0;
        case 0x2cf3e4u: goto label_2cf3e4;
        case 0x2cf3e8u: goto label_2cf3e8;
        case 0x2cf3ecu: goto label_2cf3ec;
        case 0x2cf3f0u: goto label_2cf3f0;
        case 0x2cf3f4u: goto label_2cf3f4;
        case 0x2cf3f8u: goto label_2cf3f8;
        case 0x2cf3fcu: goto label_2cf3fc;
        case 0x2cf400u: goto label_2cf400;
        case 0x2cf404u: goto label_2cf404;
        case 0x2cf408u: goto label_2cf408;
        case 0x2cf40cu: goto label_2cf40c;
        case 0x2cf410u: goto label_2cf410;
        case 0x2cf414u: goto label_2cf414;
        case 0x2cf418u: goto label_2cf418;
        case 0x2cf41cu: goto label_2cf41c;
        case 0x2cf420u: goto label_2cf420;
        case 0x2cf424u: goto label_2cf424;
        case 0x2cf428u: goto label_2cf428;
        case 0x2cf42cu: goto label_2cf42c;
        case 0x2cf430u: goto label_2cf430;
        case 0x2cf434u: goto label_2cf434;
        case 0x2cf438u: goto label_2cf438;
        case 0x2cf43cu: goto label_2cf43c;
        case 0x2cf440u: goto label_2cf440;
        case 0x2cf444u: goto label_2cf444;
        case 0x2cf448u: goto label_2cf448;
        case 0x2cf44cu: goto label_2cf44c;
        case 0x2cf450u: goto label_2cf450;
        case 0x2cf454u: goto label_2cf454;
        case 0x2cf458u: goto label_2cf458;
        case 0x2cf45cu: goto label_2cf45c;
        case 0x2cf460u: goto label_2cf460;
        case 0x2cf464u: goto label_2cf464;
        case 0x2cf468u: goto label_2cf468;
        case 0x2cf46cu: goto label_2cf46c;
        case 0x2cf470u: goto label_2cf470;
        case 0x2cf474u: goto label_2cf474;
        case 0x2cf478u: goto label_2cf478;
        case 0x2cf47cu: goto label_2cf47c;
        case 0x2cf480u: goto label_2cf480;
        case 0x2cf484u: goto label_2cf484;
        case 0x2cf488u: goto label_2cf488;
        case 0x2cf48cu: goto label_2cf48c;
        case 0x2cf490u: goto label_2cf490;
        case 0x2cf494u: goto label_2cf494;
        case 0x2cf498u: goto label_2cf498;
        case 0x2cf49cu: goto label_2cf49c;
        case 0x2cf4a0u: goto label_2cf4a0;
        case 0x2cf4a4u: goto label_2cf4a4;
        case 0x2cf4a8u: goto label_2cf4a8;
        case 0x2cf4acu: goto label_2cf4ac;
        case 0x2cf4b0u: goto label_2cf4b0;
        case 0x2cf4b4u: goto label_2cf4b4;
        case 0x2cf4b8u: goto label_2cf4b8;
        case 0x2cf4bcu: goto label_2cf4bc;
        case 0x2cf4c0u: goto label_2cf4c0;
        case 0x2cf4c4u: goto label_2cf4c4;
        case 0x2cf4c8u: goto label_2cf4c8;
        case 0x2cf4ccu: goto label_2cf4cc;
        case 0x2cf4d0u: goto label_2cf4d0;
        case 0x2cf4d4u: goto label_2cf4d4;
        case 0x2cf4d8u: goto label_2cf4d8;
        case 0x2cf4dcu: goto label_2cf4dc;
        case 0x2cf4e0u: goto label_2cf4e0;
        case 0x2cf4e4u: goto label_2cf4e4;
        case 0x2cf4e8u: goto label_2cf4e8;
        case 0x2cf4ecu: goto label_2cf4ec;
        case 0x2cf4f0u: goto label_2cf4f0;
        case 0x2cf4f4u: goto label_2cf4f4;
        case 0x2cf4f8u: goto label_2cf4f8;
        case 0x2cf4fcu: goto label_2cf4fc;
        case 0x2cf500u: goto label_2cf500;
        case 0x2cf504u: goto label_2cf504;
        case 0x2cf508u: goto label_2cf508;
        case 0x2cf50cu: goto label_2cf50c;
        case 0x2cf510u: goto label_2cf510;
        case 0x2cf514u: goto label_2cf514;
        case 0x2cf518u: goto label_2cf518;
        case 0x2cf51cu: goto label_2cf51c;
        case 0x2cf520u: goto label_2cf520;
        case 0x2cf524u: goto label_2cf524;
        case 0x2cf528u: goto label_2cf528;
        case 0x2cf52cu: goto label_2cf52c;
        case 0x2cf530u: goto label_2cf530;
        case 0x2cf534u: goto label_2cf534;
        case 0x2cf538u: goto label_2cf538;
        case 0x2cf53cu: goto label_2cf53c;
        case 0x2cf540u: goto label_2cf540;
        case 0x2cf544u: goto label_2cf544;
        case 0x2cf548u: goto label_2cf548;
        case 0x2cf54cu: goto label_2cf54c;
        case 0x2cf550u: goto label_2cf550;
        case 0x2cf554u: goto label_2cf554;
        case 0x2cf558u: goto label_2cf558;
        case 0x2cf55cu: goto label_2cf55c;
        case 0x2cf560u: goto label_2cf560;
        case 0x2cf564u: goto label_2cf564;
        case 0x2cf568u: goto label_2cf568;
        case 0x2cf56cu: goto label_2cf56c;
        case 0x2cf570u: goto label_2cf570;
        case 0x2cf574u: goto label_2cf574;
        case 0x2cf578u: goto label_2cf578;
        case 0x2cf57cu: goto label_2cf57c;
        case 0x2cf580u: goto label_2cf580;
        case 0x2cf584u: goto label_2cf584;
        case 0x2cf588u: goto label_2cf588;
        case 0x2cf58cu: goto label_2cf58c;
        case 0x2cf590u: goto label_2cf590;
        case 0x2cf594u: goto label_2cf594;
        case 0x2cf598u: goto label_2cf598;
        case 0x2cf59cu: goto label_2cf59c;
        case 0x2cf5a0u: goto label_2cf5a0;
        case 0x2cf5a4u: goto label_2cf5a4;
        case 0x2cf5a8u: goto label_2cf5a8;
        case 0x2cf5acu: goto label_2cf5ac;
        case 0x2cf5b0u: goto label_2cf5b0;
        case 0x2cf5b4u: goto label_2cf5b4;
        case 0x2cf5b8u: goto label_2cf5b8;
        case 0x2cf5bcu: goto label_2cf5bc;
        case 0x2cf5c0u: goto label_2cf5c0;
        case 0x2cf5c4u: goto label_2cf5c4;
        case 0x2cf5c8u: goto label_2cf5c8;
        case 0x2cf5ccu: goto label_2cf5cc;
        case 0x2cf5d0u: goto label_2cf5d0;
        case 0x2cf5d4u: goto label_2cf5d4;
        case 0x2cf5d8u: goto label_2cf5d8;
        case 0x2cf5dcu: goto label_2cf5dc;
        case 0x2cf5e0u: goto label_2cf5e0;
        case 0x2cf5e4u: goto label_2cf5e4;
        case 0x2cf5e8u: goto label_2cf5e8;
        case 0x2cf5ecu: goto label_2cf5ec;
        case 0x2cf5f0u: goto label_2cf5f0;
        case 0x2cf5f4u: goto label_2cf5f4;
        case 0x2cf5f8u: goto label_2cf5f8;
        case 0x2cf5fcu: goto label_2cf5fc;
        case 0x2cf600u: goto label_2cf600;
        case 0x2cf604u: goto label_2cf604;
        case 0x2cf608u: goto label_2cf608;
        case 0x2cf60cu: goto label_2cf60c;
        case 0x2cf610u: goto label_2cf610;
        case 0x2cf614u: goto label_2cf614;
        case 0x2cf618u: goto label_2cf618;
        case 0x2cf61cu: goto label_2cf61c;
        case 0x2cf620u: goto label_2cf620;
        case 0x2cf624u: goto label_2cf624;
        case 0x2cf628u: goto label_2cf628;
        case 0x2cf62cu: goto label_2cf62c;
        case 0x2cf630u: goto label_2cf630;
        case 0x2cf634u: goto label_2cf634;
        case 0x2cf638u: goto label_2cf638;
        case 0x2cf63cu: goto label_2cf63c;
        case 0x2cf640u: goto label_2cf640;
        case 0x2cf644u: goto label_2cf644;
        case 0x2cf648u: goto label_2cf648;
        case 0x2cf64cu: goto label_2cf64c;
        case 0x2cf650u: goto label_2cf650;
        case 0x2cf654u: goto label_2cf654;
        case 0x2cf658u: goto label_2cf658;
        case 0x2cf65cu: goto label_2cf65c;
        case 0x2cf660u: goto label_2cf660;
        case 0x2cf664u: goto label_2cf664;
        case 0x2cf668u: goto label_2cf668;
        case 0x2cf66cu: goto label_2cf66c;
        case 0x2cf670u: goto label_2cf670;
        case 0x2cf674u: goto label_2cf674;
        case 0x2cf678u: goto label_2cf678;
        case 0x2cf67cu: goto label_2cf67c;
        case 0x2cf680u: goto label_2cf680;
        case 0x2cf684u: goto label_2cf684;
        case 0x2cf688u: goto label_2cf688;
        case 0x2cf68cu: goto label_2cf68c;
        case 0x2cf690u: goto label_2cf690;
        case 0x2cf694u: goto label_2cf694;
        case 0x2cf698u: goto label_2cf698;
        case 0x2cf69cu: goto label_2cf69c;
        case 0x2cf6a0u: goto label_2cf6a0;
        case 0x2cf6a4u: goto label_2cf6a4;
        case 0x2cf6a8u: goto label_2cf6a8;
        case 0x2cf6acu: goto label_2cf6ac;
        case 0x2cf6b0u: goto label_2cf6b0;
        case 0x2cf6b4u: goto label_2cf6b4;
        case 0x2cf6b8u: goto label_2cf6b8;
        case 0x2cf6bcu: goto label_2cf6bc;
        default: break;
    }

    ctx->pc = 0x2cf290u;

label_2cf290:
    // 0x2cf290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2cf294:
    // 0x2cf294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cf298:
    // 0x2cf298: 0xc0aa478  jal         func_2A91E0
label_2cf29c:
    if (ctx->pc == 0x2CF29Cu) {
        ctx->pc = 0x2CF2A0u;
        goto label_2cf2a0;
    }
    ctx->pc = 0x2CF298u;
    SET_GPR_U32(ctx, 31, 0x2CF2A0u);
    ctx->pc = 0x2A91E0u;
    if (runtime->hasFunction(0x2A91E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2A0u; }
        if (ctx->pc != 0x2CF2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A91E0_0x2a91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2A0u; }
        if (ctx->pc != 0x2CF2A0u) { return; }
    }
    ctx->pc = 0x2CF2A0u;
label_2cf2a0:
    // 0x2cf2a0: 0xc05b774  jal         func_16DDD0
label_2cf2a4:
    if (ctx->pc == 0x2CF2A4u) {
        ctx->pc = 0x2CF2A8u;
        goto label_2cf2a8;
    }
    ctx->pc = 0x2CF2A0u;
    SET_GPR_U32(ctx, 31, 0x2CF2A8u);
    ctx->pc = 0x16DDD0u;
    if (runtime->hasFunction(0x16DDD0u)) {
        auto targetFn = runtime->lookupFunction(0x16DDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2A8u; }
        if (ctx->pc != 0x2CF2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DDD0_0x16ddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2A8u; }
        if (ctx->pc != 0x2CF2A8u) { return; }
    }
    ctx->pc = 0x2CF2A8u;
label_2cf2a8:
    // 0x2cf2a8: 0xc072cd2  jal         func_1CB348
label_2cf2ac:
    if (ctx->pc == 0x2CF2ACu) {
        ctx->pc = 0x2CF2B0u;
        goto label_2cf2b0;
    }
    ctx->pc = 0x2CF2A8u;
    SET_GPR_U32(ctx, 31, 0x2CF2B0u);
    ctx->pc = 0x1CB348u;
    if (runtime->hasFunction(0x1CB348u)) {
        auto targetFn = runtime->lookupFunction(0x1CB348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2B0u; }
        if (ctx->pc != 0x2CF2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CB348_0x1cb348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2B0u; }
        if (ctx->pc != 0x2CF2B0u) { return; }
    }
    ctx->pc = 0x2CF2B0u;
label_2cf2b0:
    // 0x2cf2b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2cf2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2cf2b4:
    // 0x2cf2b4: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x2cf2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_2cf2b8:
    // 0x2cf2b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cf2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf2bc:
    // 0x2cf2bc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x2cf2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_2cf2c0:
    // 0x2cf2c0: 0x320f809  jalr        $t9
label_2cf2c4:
    if (ctx->pc == 0x2CF2C4u) {
        ctx->pc = 0x2CF2C8u;
        goto label_2cf2c8;
    }
    ctx->pc = 0x2CF2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CF2C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CF2C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CF2C8u; }
            if (ctx->pc != 0x2CF2C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CF2C8u;
label_2cf2c8:
    // 0x2cf2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf2cc:
    // 0x2cf2cc: 0x3e00008  jr          $ra
label_2cf2d0:
    if (ctx->pc == 0x2CF2D0u) {
        ctx->pc = 0x2CF2D0u;
            // 0x2cf2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CF2D4u;
        goto label_2cf2d4;
    }
    ctx->pc = 0x2CF2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF2CCu;
            // 0x2cf2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF2D4u;
label_2cf2d4:
    // 0x2cf2d4: 0x0  nop
    ctx->pc = 0x2cf2d4u;
    // NOP
label_2cf2d8:
    // 0x2cf2d8: 0x0  nop
    ctx->pc = 0x2cf2d8u;
    // NOP
label_2cf2dc:
    // 0x2cf2dc: 0x0  nop
    ctx->pc = 0x2cf2dcu;
    // NOP
label_2cf2e0:
    // 0x2cf2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cf2e4:
    // 0x2cf2e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cf2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cf2e8:
    // 0x2cf2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cf2ec:
    // 0x2cf2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cf2f0:
    // 0x2cf2f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cf2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf2f4:
    // 0x2cf2f4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_2cf2f8:
    if (ctx->pc == 0x2CF2F8u) {
        ctx->pc = 0x2CF2F8u;
            // 0x2cf2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF2FCu;
        goto label_2cf2fc;
    }
    ctx->pc = 0x2CF2F4u;
    {
        const bool branch_taken_0x2cf2f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF2F4u;
            // 0x2cf2f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf2f4) {
            ctx->pc = 0x2CF368u;
            goto label_2cf368;
        }
    }
    ctx->pc = 0x2CF2FCu;
label_2cf2fc:
    // 0x2cf2fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cf2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cf300:
    // 0x2cf300: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cf300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cf304:
    // 0x2cf304: 0x2442fdc0  addiu       $v0, $v0, -0x240
    ctx->pc = 0x2cf304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966720));
label_2cf308:
    // 0x2cf308: 0x2463fdf0  addiu       $v1, $v1, -0x210
    ctx->pc = 0x2cf308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966768));
label_2cf30c:
    // 0x2cf30c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cf30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cf310:
    // 0x2cf310: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x2cf310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_2cf314:
    // 0x2cf314: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cf318:
    if (ctx->pc == 0x2CF318u) {
        ctx->pc = 0x2CF318u;
            // 0x2cf318: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2CF31Cu;
        goto label_2cf31c;
    }
    ctx->pc = 0x2CF314u;
    {
        const bool branch_taken_0x2cf314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF314u;
            // 0x2cf318: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf314) {
            ctx->pc = 0x2CF330u;
            goto label_2cf330;
        }
    }
    ctx->pc = 0x2CF31Cu;
label_2cf31c:
    // 0x2cf31c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cf31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cf320:
    // 0x2cf320: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cf320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cf324:
    // 0x2cf324: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x2cf324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
label_2cf328:
    // 0x2cf328: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x2cf328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_2cf32c:
    // 0x2cf32c: 0xac400e58  sw          $zero, 0xE58($v0)
    ctx->pc = 0x2cf32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3672), GPR_U32(ctx, 0));
label_2cf330:
    // 0x2cf330: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2cf334:
    if (ctx->pc == 0x2CF334u) {
        ctx->pc = 0x2CF334u;
            // 0x2cf334: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CF338u;
        goto label_2cf338;
    }
    ctx->pc = 0x2CF330u;
    {
        const bool branch_taken_0x2cf330 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf330) {
            ctx->pc = 0x2CF334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF330u;
            // 0x2cf334: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF354u;
            goto label_2cf354;
        }
    }
    ctx->pc = 0x2CF338u;
label_2cf338:
    // 0x2cf338: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cf338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cf33c:
    // 0x2cf33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf340:
    // 0x2cf340: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2cf340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2cf344:
    // 0x2cf344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf348:
    // 0x2cf348: 0xc057a68  jal         func_15E9A0
label_2cf34c:
    if (ctx->pc == 0x2CF34Cu) {
        ctx->pc = 0x2CF34Cu;
            // 0x2cf34c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CF350u;
        goto label_2cf350;
    }
    ctx->pc = 0x2CF348u;
    SET_GPR_U32(ctx, 31, 0x2CF350u);
    ctx->pc = 0x2CF34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF348u;
            // 0x2cf34c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF350u; }
        if (ctx->pc != 0x2CF350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF350u; }
        if (ctx->pc != 0x2CF350u) { return; }
    }
    ctx->pc = 0x2CF350u;
label_2cf350:
    // 0x2cf350: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cf350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cf354:
    // 0x2cf354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cf354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cf358:
    // 0x2cf358: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cf35c:
    if (ctx->pc == 0x2CF35Cu) {
        ctx->pc = 0x2CF35Cu;
            // 0x2cf35c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF360u;
        goto label_2cf360;
    }
    ctx->pc = 0x2CF358u;
    {
        const bool branch_taken_0x2cf358 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cf358) {
            ctx->pc = 0x2CF35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF358u;
            // 0x2cf35c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF36Cu;
            goto label_2cf36c;
        }
    }
    ctx->pc = 0x2CF360u;
label_2cf360:
    // 0x2cf360: 0xc0400a8  jal         func_1002A0
label_2cf364:
    if (ctx->pc == 0x2CF364u) {
        ctx->pc = 0x2CF364u;
            // 0x2cf364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF368u;
        goto label_2cf368;
    }
    ctx->pc = 0x2CF360u;
    SET_GPR_U32(ctx, 31, 0x2CF368u);
    ctx->pc = 0x2CF364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF360u;
            // 0x2cf364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF368u; }
        if (ctx->pc != 0x2CF368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF368u; }
        if (ctx->pc != 0x2CF368u) { return; }
    }
    ctx->pc = 0x2CF368u;
label_2cf368:
    // 0x2cf368: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cf368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf36c:
    // 0x2cf36c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cf36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf370:
    // 0x2cf370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf374:
    // 0x2cf374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf378:
    // 0x2cf378: 0x3e00008  jr          $ra
label_2cf37c:
    if (ctx->pc == 0x2CF37Cu) {
        ctx->pc = 0x2CF37Cu;
            // 0x2cf37c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CF380u;
        goto label_2cf380;
    }
    ctx->pc = 0x2CF378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF378u;
            // 0x2cf37c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF380u;
label_2cf380:
    // 0x2cf380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cf384:
    // 0x2cf384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cf384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cf388:
    // 0x2cf388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cf38c:
    // 0x2cf38c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cf390:
    // 0x2cf390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cf390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf394:
    // 0x2cf394: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_2cf398:
    if (ctx->pc == 0x2CF398u) {
        ctx->pc = 0x2CF398u;
            // 0x2cf398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF39Cu;
        goto label_2cf39c;
    }
    ctx->pc = 0x2CF394u;
    {
        const bool branch_taken_0x2cf394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF394u;
            // 0x2cf398: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf394) {
            ctx->pc = 0x2CF49Cu;
            goto label_2cf49c;
        }
    }
    ctx->pc = 0x2CF39Cu;
label_2cf39c:
    // 0x2cf39c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cf39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cf3a0:
    // 0x2cf3a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cf3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cf3a4:
    // 0x2cf3a4: 0x2463fe10  addiu       $v1, $v1, -0x1F0
    ctx->pc = 0x2cf3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
label_2cf3a8:
    // 0x2cf3a8: 0x2442fe40  addiu       $v0, $v0, -0x1C0
    ctx->pc = 0x2cf3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
label_2cf3ac:
    // 0x2cf3ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cf3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cf3b0:
    // 0x2cf3b0: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x2cf3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2cf3b4:
    // 0x2cf3b4: 0xc0b4584  jal         func_2D1610
label_2cf3b8:
    if (ctx->pc == 0x2CF3B8u) {
        ctx->pc = 0x2CF3B8u;
            // 0x2cf3b8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x2CF3BCu;
        goto label_2cf3bc;
    }
    ctx->pc = 0x2CF3B4u;
    SET_GPR_U32(ctx, 31, 0x2CF3BCu);
    ctx->pc = 0x2CF3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3B4u;
            // 0x2cf3b8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (runtime->hasFunction(0x2D1610u)) {
        auto targetFn = runtime->lookupFunction(0x2D1610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3BCu; }
        if (ctx->pc != 0x2CF3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1610_0x2d1610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3BCu; }
        if (ctx->pc != 0x2CF3BCu) { return; }
    }
    ctx->pc = 0x2CF3BCu;
label_2cf3bc:
    // 0x2cf3bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cf3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cf3c0:
    // 0x2cf3c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cf3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cf3c4:
    // 0x2cf3c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2cf3c8:
    if (ctx->pc == 0x2CF3C8u) {
        ctx->pc = 0x2CF3CCu;
        goto label_2cf3cc;
    }
    ctx->pc = 0x2CF3C4u;
    {
        const bool branch_taken_0x2cf3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3c4) {
            ctx->pc = 0x2CF410u;
            goto label_2cf410;
        }
    }
    ctx->pc = 0x2CF3CCu;
label_2cf3cc:
    // 0x2cf3cc: 0xc0b4c64  jal         func_2D3190
label_2cf3d0:
    if (ctx->pc == 0x2CF3D0u) {
        ctx->pc = 0x2CF3D0u;
            // 0x2cf3d0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CF3D4u;
        goto label_2cf3d4;
    }
    ctx->pc = 0x2CF3CCu;
    SET_GPR_U32(ctx, 31, 0x2CF3D4u);
    ctx->pc = 0x2CF3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3CCu;
            // 0x2cf3d0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3190u;
    if (runtime->hasFunction(0x2D3190u)) {
        auto targetFn = runtime->lookupFunction(0x2D3190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3D4u; }
        if (ctx->pc != 0x2CF3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D3190_0x2d3190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3D4u; }
        if (ctx->pc != 0x2CF3D4u) { return; }
    }
    ctx->pc = 0x2CF3D4u;
label_2cf3d4:
    // 0x2cf3d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cf3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cf3d8:
    // 0x2cf3d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cf3dc:
    if (ctx->pc == 0x2CF3DCu) {
        ctx->pc = 0x2CF3E0u;
        goto label_2cf3e0;
    }
    ctx->pc = 0x2CF3D8u;
    {
        const bool branch_taken_0x2cf3d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf3d8) {
            ctx->pc = 0x2CF3F0u;
            goto label_2cf3f0;
        }
    }
    ctx->pc = 0x2CF3E0u;
label_2cf3e0:
    // 0x2cf3e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cf3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf3e4:
    // 0x2cf3e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cf3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cf3e8:
    // 0x2cf3e8: 0x320f809  jalr        $t9
label_2cf3ec:
    if (ctx->pc == 0x2CF3ECu) {
        ctx->pc = 0x2CF3ECu;
            // 0x2cf3ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CF3F0u;
        goto label_2cf3f0;
    }
    ctx->pc = 0x2CF3E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CF3F0u);
        ctx->pc = 0x2CF3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3E8u;
            // 0x2cf3ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CF3F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3F0u; }
            if (ctx->pc != 0x2CF3F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CF3F0u;
label_2cf3f0:
    // 0x2cf3f0: 0xc0b4be4  jal         func_2D2F90
label_2cf3f4:
    if (ctx->pc == 0x2CF3F4u) {
        ctx->pc = 0x2CF3F4u;
            // 0x2cf3f4: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CF3F8u;
        goto label_2cf3f8;
    }
    ctx->pc = 0x2CF3F0u;
    SET_GPR_U32(ctx, 31, 0x2CF3F8u);
    ctx->pc = 0x2CF3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3F0u;
            // 0x2cf3f4: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2F90u;
    if (runtime->hasFunction(0x2D2F90u)) {
        auto targetFn = runtime->lookupFunction(0x2D2F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3F8u; }
        if (ctx->pc != 0x2CF3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2F90_0x2d2f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3F8u; }
        if (ctx->pc != 0x2CF3F8u) { return; }
    }
    ctx->pc = 0x2CF3F8u;
label_2cf3f8:
    // 0x2cf3f8: 0xc0b4584  jal         func_2D1610
label_2cf3fc:
    if (ctx->pc == 0x2CF3FCu) {
        ctx->pc = 0x2CF3FCu;
            // 0x2cf3fc: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2CF400u;
        goto label_2cf400;
    }
    ctx->pc = 0x2CF3F8u;
    SET_GPR_U32(ctx, 31, 0x2CF400u);
    ctx->pc = 0x2CF3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3F8u;
            // 0x2cf3fc: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (runtime->hasFunction(0x2D1610u)) {
        auto targetFn = runtime->lookupFunction(0x2D1610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF400u; }
        if (ctx->pc != 0x2CF400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1610_0x2d1610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF400u; }
        if (ctx->pc != 0x2CF400u) { return; }
    }
    ctx->pc = 0x2CF400u;
label_2cf400:
    // 0x2cf400: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cf400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cf404:
    // 0x2cf404: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cf404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2cf408:
    // 0x2cf408: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2cf40c:
    if (ctx->pc == 0x2CF40Cu) {
        ctx->pc = 0x2CF410u;
        goto label_2cf410;
    }
    ctx->pc = 0x2CF408u;
    {
        const bool branch_taken_0x2cf408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf408) {
            ctx->pc = 0x2CF3CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cf3cc;
        }
    }
    ctx->pc = 0x2CF410u;
label_2cf410:
    // 0x2cf410: 0xc0400a8  jal         func_1002A0
label_2cf414:
    if (ctx->pc == 0x2CF414u) {
        ctx->pc = 0x2CF414u;
            // 0x2cf414: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x2CF418u;
        goto label_2cf418;
    }
    ctx->pc = 0x2CF410u;
    SET_GPR_U32(ctx, 31, 0x2CF418u);
    ctx->pc = 0x2CF414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF410u;
            // 0x2cf414: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF418u; }
        if (ctx->pc != 0x2CF418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF418u; }
        if (ctx->pc != 0x2CF418u) { return; }
    }
    ctx->pc = 0x2CF418u;
label_2cf418:
    // 0x2cf418: 0x26240064  addiu       $a0, $s1, 0x64
    ctx->pc = 0x2cf418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2cf41c:
    // 0x2cf41c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2cf420:
    if (ctx->pc == 0x2CF420u) {
        ctx->pc = 0x2CF420u;
            // 0x2cf420: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x2CF424u;
        goto label_2cf424;
    }
    ctx->pc = 0x2CF41Cu;
    {
        const bool branch_taken_0x2cf41c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF41Cu;
            // 0x2cf420: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf41c) {
            ctx->pc = 0x2CF444u;
            goto label_2cf444;
        }
    }
    ctx->pc = 0x2CF424u;
label_2cf424:
    // 0x2cf424: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2cf428:
    if (ctx->pc == 0x2CF428u) {
        ctx->pc = 0x2CF428u;
            // 0x2cf428: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->pc = 0x2CF42Cu;
        goto label_2cf42c;
    }
    ctx->pc = 0x2CF424u;
    {
        const bool branch_taken_0x2cf424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf424) {
            ctx->pc = 0x2CF428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF424u;
            // 0x2cf428: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF448u;
            goto label_2cf448;
        }
    }
    ctx->pc = 0x2CF42Cu;
label_2cf42c:
    // 0x2cf42c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cf430:
    if (ctx->pc == 0x2CF430u) {
        ctx->pc = 0x2CF434u;
        goto label_2cf434;
    }
    ctx->pc = 0x2CF42Cu;
    {
        const bool branch_taken_0x2cf42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf42c) {
            ctx->pc = 0x2CF444u;
            goto label_2cf444;
        }
    }
    ctx->pc = 0x2CF434u;
label_2cf434:
    // 0x2cf434: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cf438:
    if (ctx->pc == 0x2CF438u) {
        ctx->pc = 0x2CF43Cu;
        goto label_2cf43c;
    }
    ctx->pc = 0x2CF434u;
    {
        const bool branch_taken_0x2cf434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf434) {
            ctx->pc = 0x2CF444u;
            goto label_2cf444;
        }
    }
    ctx->pc = 0x2CF43Cu;
label_2cf43c:
    // 0x2cf43c: 0xc0b4c14  jal         func_2D3050
label_2cf440:
    if (ctx->pc == 0x2CF440u) {
        ctx->pc = 0x2CF440u;
            // 0x2cf440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF444u;
        goto label_2cf444;
    }
    ctx->pc = 0x2CF43Cu;
    SET_GPR_U32(ctx, 31, 0x2CF444u);
    ctx->pc = 0x2CF440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF43Cu;
            // 0x2cf440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3050u;
    if (runtime->hasFunction(0x2D3050u)) {
        auto targetFn = runtime->lookupFunction(0x2D3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF444u; }
        if (ctx->pc != 0x2CF444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D3050_0x2d3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF444u; }
        if (ctx->pc != 0x2CF444u) { return; }
    }
    ctx->pc = 0x2CF444u;
label_2cf444:
    // 0x2cf444: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x2cf444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_2cf448:
    // 0x2cf448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cf44c:
    if (ctx->pc == 0x2CF44Cu) {
        ctx->pc = 0x2CF450u;
        goto label_2cf450;
    }
    ctx->pc = 0x2CF448u;
    {
        const bool branch_taken_0x2cf448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf448) {
            ctx->pc = 0x2CF464u;
            goto label_2cf464;
        }
    }
    ctx->pc = 0x2CF450u;
label_2cf450:
    // 0x2cf450: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cf450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cf454:
    // 0x2cf454: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cf454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cf458:
    // 0x2cf458: 0x2463fe60  addiu       $v1, $v1, -0x1A0
    ctx->pc = 0x2cf458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966880));
label_2cf45c:
    // 0x2cf45c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x2cf45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_2cf460:
    // 0x2cf460: 0xac400e50  sw          $zero, 0xE50($v0)
    ctx->pc = 0x2cf460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
label_2cf464:
    // 0x2cf464: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2cf468:
    if (ctx->pc == 0x2CF468u) {
        ctx->pc = 0x2CF468u;
            // 0x2cf468: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CF46Cu;
        goto label_2cf46c;
    }
    ctx->pc = 0x2CF464u;
    {
        const bool branch_taken_0x2cf464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf464) {
            ctx->pc = 0x2CF468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF464u;
            // 0x2cf468: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF488u;
            goto label_2cf488;
        }
    }
    ctx->pc = 0x2CF46Cu;
label_2cf46c:
    // 0x2cf46c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cf46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cf470:
    // 0x2cf470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf474:
    // 0x2cf474: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2cf474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2cf478:
    // 0x2cf478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf47c:
    // 0x2cf47c: 0xc057a68  jal         func_15E9A0
label_2cf480:
    if (ctx->pc == 0x2CF480u) {
        ctx->pc = 0x2CF480u;
            // 0x2cf480: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CF484u;
        goto label_2cf484;
    }
    ctx->pc = 0x2CF47Cu;
    SET_GPR_U32(ctx, 31, 0x2CF484u);
    ctx->pc = 0x2CF480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF47Cu;
            // 0x2cf480: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF484u; }
        if (ctx->pc != 0x2CF484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF484u; }
        if (ctx->pc != 0x2CF484u) { return; }
    }
    ctx->pc = 0x2CF484u;
label_2cf484:
    // 0x2cf484: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cf484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cf488:
    // 0x2cf488: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cf488u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cf48c:
    // 0x2cf48c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cf490:
    if (ctx->pc == 0x2CF490u) {
        ctx->pc = 0x2CF490u;
            // 0x2cf490: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF494u;
        goto label_2cf494;
    }
    ctx->pc = 0x2CF48Cu;
    {
        const bool branch_taken_0x2cf48c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cf48c) {
            ctx->pc = 0x2CF490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF48Cu;
            // 0x2cf490: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF4A0u;
            goto label_2cf4a0;
        }
    }
    ctx->pc = 0x2CF494u;
label_2cf494:
    // 0x2cf494: 0xc0400a8  jal         func_1002A0
label_2cf498:
    if (ctx->pc == 0x2CF498u) {
        ctx->pc = 0x2CF498u;
            // 0x2cf498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF49Cu;
        goto label_2cf49c;
    }
    ctx->pc = 0x2CF494u;
    SET_GPR_U32(ctx, 31, 0x2CF49Cu);
    ctx->pc = 0x2CF498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF494u;
            // 0x2cf498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF49Cu; }
        if (ctx->pc != 0x2CF49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF49Cu; }
        if (ctx->pc != 0x2CF49Cu) { return; }
    }
    ctx->pc = 0x2CF49Cu;
label_2cf49c:
    // 0x2cf49c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cf49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf4a0:
    // 0x2cf4a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cf4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf4a4:
    // 0x2cf4a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf4a8:
    // 0x2cf4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf4ac:
    // 0x2cf4ac: 0x3e00008  jr          $ra
label_2cf4b0:
    if (ctx->pc == 0x2CF4B0u) {
        ctx->pc = 0x2CF4B0u;
            // 0x2cf4b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CF4B4u;
        goto label_2cf4b4;
    }
    ctx->pc = 0x2CF4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF4ACu;
            // 0x2cf4b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF4B4u;
label_2cf4b4:
    // 0x2cf4b4: 0x0  nop
    ctx->pc = 0x2cf4b4u;
    // NOP
label_2cf4b8:
    // 0x2cf4b8: 0x0  nop
    ctx->pc = 0x2cf4b8u;
    // NOP
label_2cf4bc:
    // 0x2cf4bc: 0x0  nop
    ctx->pc = 0x2cf4bcu;
    // NOP
label_2cf4c0:
    // 0x2cf4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cf4c4:
    // 0x2cf4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2cf4c8:
    // 0x2cf4c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cf4cc:
    // 0x2cf4cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf4d0:
    // 0x2cf4d0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_2cf4d4:
    if (ctx->pc == 0x2CF4D4u) {
        ctx->pc = 0x2CF4D4u;
            // 0x2cf4d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4D8u;
        goto label_2cf4d8;
    }
    ctx->pc = 0x2CF4D0u;
    {
        const bool branch_taken_0x2cf4d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4d0) {
            ctx->pc = 0x2CF4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF4D0u;
            // 0x2cf4d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF4FCu;
            goto label_2cf4fc;
        }
    }
    ctx->pc = 0x2CF4D8u;
label_2cf4d8:
    // 0x2cf4d8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2cf4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2cf4dc:
    // 0x2cf4dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cf4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cf4e0:
    // 0x2cf4e0: 0x2463fe50  addiu       $v1, $v1, -0x1B0
    ctx->pc = 0x2cf4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966864));
label_2cf4e4:
    // 0x2cf4e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cf4e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cf4e8:
    // 0x2cf4e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2cf4ec:
    if (ctx->pc == 0x2CF4ECu) {
        ctx->pc = 0x2CF4ECu;
            // 0x2cf4ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2CF4F0u;
        goto label_2cf4f0;
    }
    ctx->pc = 0x2CF4E8u;
    {
        const bool branch_taken_0x2cf4e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CF4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF4E8u;
            // 0x2cf4ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4e8) {
            ctx->pc = 0x2CF4F8u;
            goto label_2cf4f8;
        }
    }
    ctx->pc = 0x2CF4F0u;
label_2cf4f0:
    // 0x2cf4f0: 0xc0400a8  jal         func_1002A0
label_2cf4f4:
    if (ctx->pc == 0x2CF4F4u) {
        ctx->pc = 0x2CF4F8u;
        goto label_2cf4f8;
    }
    ctx->pc = 0x2CF4F0u;
    SET_GPR_U32(ctx, 31, 0x2CF4F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF4F8u; }
        if (ctx->pc != 0x2CF4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF4F8u; }
        if (ctx->pc != 0x2CF4F8u) { return; }
    }
    ctx->pc = 0x2CF4F8u;
label_2cf4f8:
    // 0x2cf4f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cf4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cf4fc:
    // 0x2cf4fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf500:
    // 0x2cf500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf504:
    // 0x2cf504: 0x3e00008  jr          $ra
label_2cf508:
    if (ctx->pc == 0x2CF508u) {
        ctx->pc = 0x2CF508u;
            // 0x2cf508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CF50Cu;
        goto label_2cf50c;
    }
    ctx->pc = 0x2CF504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF504u;
            // 0x2cf508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF50Cu;
label_2cf50c:
    // 0x2cf50c: 0x0  nop
    ctx->pc = 0x2cf50cu;
    // NOP
label_2cf510:
    // 0x2cf510: 0x80fcbcc  j           func_3F2F30
label_2cf514:
    if (ctx->pc == 0x2CF514u) {
        ctx->pc = 0x2CF514u;
            // 0x2cf514: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x2CF518u;
        goto label_2cf518;
    }
    ctx->pc = 0x2CF510u;
    ctx->pc = 0x2CF514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF510u;
            // 0x2cf514: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2F30u;
    if (runtime->hasFunction(0x3F2F30u)) {
        auto targetFn = runtime->lookupFunction(0x3F2F30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003F2F30_0x3f2f30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CF518u;
label_2cf518:
    // 0x2cf518: 0x0  nop
    ctx->pc = 0x2cf518u;
    // NOP
label_2cf51c:
    // 0x2cf51c: 0x0  nop
    ctx->pc = 0x2cf51cu;
    // NOP
label_2cf520:
    // 0x2cf520: 0x80506ac  j           func_141AB0
label_2cf524:
    if (ctx->pc == 0x2CF524u) {
        ctx->pc = 0x2CF524u;
            // 0x2cf524: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->pc = 0x2CF528u;
        goto label_2cf528;
    }
    ctx->pc = 0x2CF520u;
    ctx->pc = 0x2CF524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF520u;
            // 0x2cf524: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00141AB0_0x141ab0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CF528u;
label_2cf528:
    // 0x2cf528: 0x0  nop
    ctx->pc = 0x2cf528u;
    // NOP
label_2cf52c:
    // 0x2cf52c: 0x0  nop
    ctx->pc = 0x2cf52cu;
    // NOP
label_2cf530:
    // 0x2cf530: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cf530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf534:
    // 0x2cf534: 0x8c590028  lw          $t9, 0x28($v0)
    ctx->pc = 0x2cf534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2cf538:
    // 0x2cf538: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cf538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cf53c:
    // 0x2cf53c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2cf53cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2cf540:
    // 0x2cf540: 0x3200008  jr          $t9
label_2cf544:
    if (ctx->pc == 0x2CF544u) {
        ctx->pc = 0x2CF548u;
        goto label_2cf548;
    }
    ctx->pc = 0x2CF540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF548u;
label_2cf548:
    // 0x2cf548: 0x0  nop
    ctx->pc = 0x2cf548u;
    // NOP
label_2cf54c:
    // 0x2cf54c: 0x0  nop
    ctx->pc = 0x2cf54cu;
    // NOP
label_2cf550:
    // 0x2cf550: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2cf550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2cf554:
    // 0x2cf554: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2cf554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2cf558:
    // 0x2cf558: 0x3e00008  jr          $ra
label_2cf55c:
    if (ctx->pc == 0x2CF55Cu) {
        ctx->pc = 0x2CF55Cu;
            // 0x2cf55c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2CF560u;
        goto label_2cf560;
    }
    ctx->pc = 0x2CF558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF558u;
            // 0x2cf55c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF560u;
label_2cf560:
    // 0x2cf560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2cf564:
    // 0x2cf564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cf564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cf568:
    // 0x2cf568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cf56c:
    // 0x2cf56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cf570:
    // 0x2cf570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cf570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cf574:
    // 0x2cf574: 0x1220004a  beqz        $s1, . + 4 + (0x4A << 2)
label_2cf578:
    if (ctx->pc == 0x2CF578u) {
        ctx->pc = 0x2CF578u;
            // 0x2cf578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF57Cu;
        goto label_2cf57c;
    }
    ctx->pc = 0x2CF574u;
    {
        const bool branch_taken_0x2cf574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF574u;
            // 0x2cf578: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf574) {
            ctx->pc = 0x2CF6A0u;
            goto label_2cf6a0;
        }
    }
    ctx->pc = 0x2CF57Cu;
label_2cf57c:
    // 0x2cf57c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cf57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cf580:
    // 0x2cf580: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cf580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cf584:
    // 0x2cf584: 0x2442fe70  addiu       $v0, $v0, -0x190
    ctx->pc = 0x2cf584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966896));
label_2cf588:
    // 0x2cf588: 0x2463fe88  addiu       $v1, $v1, -0x178
    ctx->pc = 0x2cf588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966920));
label_2cf58c:
    // 0x2cf58c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cf58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cf590:
    // 0x2cf590: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2cf590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2cf594:
    // 0x2cf594: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2cf598:
    if (ctx->pc == 0x2CF598u) {
        ctx->pc = 0x2CF598u;
            // 0x2cf598: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x2CF59Cu;
        goto label_2cf59c;
    }
    ctx->pc = 0x2CF594u;
    {
        const bool branch_taken_0x2cf594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF594u;
            // 0x2cf598: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf594) {
            ctx->pc = 0x2CF5E0u;
            goto label_2cf5e0;
        }
    }
    ctx->pc = 0x2CF59Cu;
label_2cf59c:
    // 0x2cf59c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cf59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cf5a0:
    // 0x2cf5a0: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x2cf5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
label_2cf5a4:
    // 0x2cf5a4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2cf5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_2cf5a8:
    // 0x2cf5a8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2cf5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2cf5ac:
    // 0x2cf5ac: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_2cf5b0:
    if (ctx->pc == 0x2CF5B0u) {
        ctx->pc = 0x2CF5B0u;
            // 0x2cf5b0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = 0x2CF5B4u;
        goto label_2cf5b4;
    }
    ctx->pc = 0x2CF5ACu;
    {
        const bool branch_taken_0x2cf5ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf5ac) {
            ctx->pc = 0x2CF5B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5ACu;
            // 0x2cf5b0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF5C8u;
            goto label_2cf5c8;
        }
    }
    ctx->pc = 0x2CF5B4u;
label_2cf5b4:
    // 0x2cf5b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cf5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2cf5b8:
    // 0x2cf5b8: 0xc0fe48c  jal         func_3F9230
label_2cf5bc:
    if (ctx->pc == 0x2CF5BCu) {
        ctx->pc = 0x2CF5BCu;
            // 0x2cf5bc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x2CF5C0u;
        goto label_2cf5c0;
    }
    ctx->pc = 0x2CF5B8u;
    SET_GPR_U32(ctx, 31, 0x2CF5C0u);
    ctx->pc = 0x2CF5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5B8u;
            // 0x2cf5bc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF5C0u; }
        if (ctx->pc != 0x2CF5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF5C0u; }
        if (ctx->pc != 0x2CF5C0u) { return; }
    }
    ctx->pc = 0x2CF5C0u;
label_2cf5c0:
    // 0x2cf5c0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2cf5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2cf5c4:
    // 0x2cf5c4: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x2cf5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_2cf5c8:
    // 0x2cf5c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2cf5cc:
    if (ctx->pc == 0x2CF5CCu) {
        ctx->pc = 0x2CF5D0u;
        goto label_2cf5d0;
    }
    ctx->pc = 0x2CF5C8u;
    {
        const bool branch_taken_0x2cf5c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf5c8) {
            ctx->pc = 0x2CF5E0u;
            goto label_2cf5e0;
        }
    }
    ctx->pc = 0x2CF5D0u;
label_2cf5d0:
    // 0x2cf5d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cf5d4:
    if (ctx->pc == 0x2CF5D4u) {
        ctx->pc = 0x2CF5D8u;
        goto label_2cf5d8;
    }
    ctx->pc = 0x2CF5D0u;
    {
        const bool branch_taken_0x2cf5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf5d0) {
            ctx->pc = 0x2CF5E0u;
            goto label_2cf5e0;
        }
    }
    ctx->pc = 0x2CF5D8u;
label_2cf5d8:
    // 0x2cf5d8: 0xc0b4b3c  jal         func_2D2CF0
label_2cf5dc:
    if (ctx->pc == 0x2CF5DCu) {
        ctx->pc = 0x2CF5DCu;
            // 0x2cf5dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF5E0u;
        goto label_2cf5e0;
    }
    ctx->pc = 0x2CF5D8u;
    SET_GPR_U32(ctx, 31, 0x2CF5E0u);
    ctx->pc = 0x2CF5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5D8u;
            // 0x2cf5dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CF0u;
    if (runtime->hasFunction(0x2D2CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF5E0u; }
        if (ctx->pc != 0x2CF5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2CF0_0x2d2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF5E0u; }
        if (ctx->pc != 0x2CF5E0u) { return; }
    }
    ctx->pc = 0x2CF5E0u;
label_2cf5e0:
    // 0x2cf5e0: 0x5220002a  beql        $s1, $zero, . + 4 + (0x2A << 2)
label_2cf5e4:
    if (ctx->pc == 0x2CF5E4u) {
        ctx->pc = 0x2CF5E4u;
            // 0x2cf5e4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CF5E8u;
        goto label_2cf5e8;
    }
    ctx->pc = 0x2CF5E0u;
    {
        const bool branch_taken_0x2cf5e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf5e0) {
            ctx->pc = 0x2CF5E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5E0u;
            // 0x2cf5e4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF68Cu;
            goto label_2cf68c;
        }
    }
    ctx->pc = 0x2CF5E8u;
label_2cf5e8:
    // 0x2cf5e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cf5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cf5ec:
    // 0x2cf5ec: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2cf5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2cf5f0:
    // 0x2cf5f0: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x2cf5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
label_2cf5f4:
    // 0x2cf5f4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2cf5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2cf5f8:
    // 0x2cf5f8: 0xc0b3dd0  jal         func_2CF740
label_2cf5fc:
    if (ctx->pc == 0x2CF5FCu) {
        ctx->pc = 0x2CF5FCu;
            // 0x2cf5fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CF600u;
        goto label_2cf600;
    }
    ctx->pc = 0x2CF5F8u;
    SET_GPR_U32(ctx, 31, 0x2CF600u);
    ctx->pc = 0x2CF5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF5F8u;
            // 0x2cf5fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF740u;
    if (runtime->hasFunction(0x2CF740u)) {
        auto targetFn = runtime->lookupFunction(0x2CF740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF600u; }
        if (ctx->pc != 0x2CF600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF740_0x2cf740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF600u; }
        if (ctx->pc != 0x2CF600u) { return; }
    }
    ctx->pc = 0x2CF600u;
label_2cf600:
    // 0x2cf600: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2cf600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_2cf604:
    // 0x2cf604: 0xc0b3dcc  jal         func_2CF730
label_2cf608:
    if (ctx->pc == 0x2CF608u) {
        ctx->pc = 0x2CF608u;
            // 0x2cf608: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x2CF60Cu;
        goto label_2cf60c;
    }
    ctx->pc = 0x2CF604u;
    SET_GPR_U32(ctx, 31, 0x2CF60Cu);
    ctx->pc = 0x2CF608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF604u;
            // 0x2cf608: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF730u;
    if (runtime->hasFunction(0x2CF730u)) {
        auto targetFn = runtime->lookupFunction(0x2CF730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF60Cu; }
        if (ctx->pc != 0x2CF60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF730_0x2cf730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF60Cu; }
        if (ctx->pc != 0x2CF60Cu) { return; }
    }
    ctx->pc = 0x2CF60Cu;
label_2cf60c:
    // 0x2cf60c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cf60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2cf610:
    // 0x2cf610: 0xc0b3db8  jal         func_2CF6E0
label_2cf614:
    if (ctx->pc == 0x2CF614u) {
        ctx->pc = 0x2CF614u;
            // 0x2cf614: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2CF618u;
        goto label_2cf618;
    }
    ctx->pc = 0x2CF610u;
    SET_GPR_U32(ctx, 31, 0x2CF618u);
    ctx->pc = 0x2CF614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF610u;
            // 0x2cf614: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF6E0u;
    if (runtime->hasFunction(0x2CF6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CF6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF618u; }
        if (ctx->pc != 0x2CF618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF6E0_0x2cf6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF618u; }
        if (ctx->pc != 0x2CF618u) { return; }
    }
    ctx->pc = 0x2CF618u;
label_2cf618:
    // 0x2cf618: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2cf618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_2cf61c:
    // 0x2cf61c: 0xc0b3db0  jal         func_2CF6C0
label_2cf620:
    if (ctx->pc == 0x2CF620u) {
        ctx->pc = 0x2CF620u;
            // 0x2cf620: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CF624u;
        goto label_2cf624;
    }
    ctx->pc = 0x2CF61Cu;
    SET_GPR_U32(ctx, 31, 0x2CF624u);
    ctx->pc = 0x2CF620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF61Cu;
            // 0x2cf620: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF6C0u;
    if (runtime->hasFunction(0x2CF6C0u)) {
        auto targetFn = runtime->lookupFunction(0x2CF6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF624u; }
        if (ctx->pc != 0x2CF624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF6C0_0x2cf6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF624u; }
        if (ctx->pc != 0x2CF624u) { return; }
    }
    ctx->pc = 0x2CF624u;
label_2cf624:
    // 0x2cf624: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2cf628:
    if (ctx->pc == 0x2CF628u) {
        ctx->pc = 0x2CF62Cu;
        goto label_2cf62c;
    }
    ctx->pc = 0x2CF624u;
    {
        const bool branch_taken_0x2cf624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf624) {
            ctx->pc = 0x2CF670u;
            goto label_2cf670;
        }
    }
    ctx->pc = 0x2CF62Cu;
label_2cf62c:
    // 0x2cf62c: 0xc0b3dc8  jal         func_2CF720
label_2cf630:
    if (ctx->pc == 0x2CF630u) {
        ctx->pc = 0x2CF630u;
            // 0x2cf630: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->pc = 0x2CF634u;
        goto label_2cf634;
    }
    ctx->pc = 0x2CF62Cu;
    SET_GPR_U32(ctx, 31, 0x2CF634u);
    ctx->pc = 0x2CF630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF62Cu;
            // 0x2cf630: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF720u;
    if (runtime->hasFunction(0x2CF720u)) {
        auto targetFn = runtime->lookupFunction(0x2CF720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF634u; }
        if (ctx->pc != 0x2CF634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF720_0x2cf720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF634u; }
        if (ctx->pc != 0x2CF634u) { return; }
    }
    ctx->pc = 0x2CF634u;
label_2cf634:
    // 0x2cf634: 0xc0400a8  jal         func_1002A0
label_2cf638:
    if (ctx->pc == 0x2CF638u) {
        ctx->pc = 0x2CF638u;
            // 0x2cf638: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2CF63Cu;
        goto label_2cf63c;
    }
    ctx->pc = 0x2CF634u;
    SET_GPR_U32(ctx, 31, 0x2CF63Cu);
    ctx->pc = 0x2CF638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF634u;
            // 0x2cf638: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF63Cu; }
        if (ctx->pc != 0x2CF63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF63Cu; }
        if (ctx->pc != 0x2CF63Cu) { return; }
    }
    ctx->pc = 0x2CF63Cu;
label_2cf63c:
    // 0x2cf63c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x2cf63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_2cf640:
    // 0x2cf640: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2cf640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_2cf644:
    // 0x2cf644: 0xc0b3dc0  jal         func_2CF700
label_2cf648:
    if (ctx->pc == 0x2CF648u) {
        ctx->pc = 0x2CF648u;
            // 0x2cf648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF64Cu;
        goto label_2cf64c;
    }
    ctx->pc = 0x2CF644u;
    SET_GPR_U32(ctx, 31, 0x2CF64Cu);
    ctx->pc = 0x2CF648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF644u;
            // 0x2cf648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF700u;
    if (runtime->hasFunction(0x2CF700u)) {
        auto targetFn = runtime->lookupFunction(0x2CF700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF64Cu; }
        if (ctx->pc != 0x2CF64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF700_0x2cf700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF64Cu; }
        if (ctx->pc != 0x2CF64Cu) { return; }
    }
    ctx->pc = 0x2CF64Cu;
label_2cf64c:
    // 0x2cf64c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cf64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2cf650:
    // 0x2cf650: 0xc0b3db8  jal         func_2CF6E0
label_2cf654:
    if (ctx->pc == 0x2CF654u) {
        ctx->pc = 0x2CF654u;
            // 0x2cf654: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2CF658u;
        goto label_2cf658;
    }
    ctx->pc = 0x2CF650u;
    SET_GPR_U32(ctx, 31, 0x2CF658u);
    ctx->pc = 0x2CF654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF650u;
            // 0x2cf654: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF6E0u;
    if (runtime->hasFunction(0x2CF6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CF6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF658u; }
        if (ctx->pc != 0x2CF658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF6E0_0x2cf6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF658u; }
        if (ctx->pc != 0x2CF658u) { return; }
    }
    ctx->pc = 0x2CF658u;
label_2cf658:
    // 0x2cf658: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2cf658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_2cf65c:
    // 0x2cf65c: 0xc0b3db0  jal         func_2CF6C0
label_2cf660:
    if (ctx->pc == 0x2CF660u) {
        ctx->pc = 0x2CF660u;
            // 0x2cf660: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CF664u;
        goto label_2cf664;
    }
    ctx->pc = 0x2CF65Cu;
    SET_GPR_U32(ctx, 31, 0x2CF664u);
    ctx->pc = 0x2CF660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF65Cu;
            // 0x2cf660: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF6C0u;
    if (runtime->hasFunction(0x2CF6C0u)) {
        auto targetFn = runtime->lookupFunction(0x2CF6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF664u; }
        if (ctx->pc != 0x2CF664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF6C0_0x2cf6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF664u; }
        if (ctx->pc != 0x2CF664u) { return; }
    }
    ctx->pc = 0x2CF664u;
label_2cf664:
    // 0x2cf664: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2cf668:
    if (ctx->pc == 0x2CF668u) {
        ctx->pc = 0x2CF66Cu;
        goto label_2cf66c;
    }
    ctx->pc = 0x2CF664u;
    {
        const bool branch_taken_0x2cf664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf664) {
            ctx->pc = 0x2CF62Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cf62c;
        }
    }
    ctx->pc = 0x2CF66Cu;
label_2cf66c:
    // 0x2cf66c: 0x0  nop
    ctx->pc = 0x2cf66cu;
    // NOP
label_2cf670:
    // 0x2cf670: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2cf670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2cf674:
    // 0x2cf674: 0xc0b3774  jal         func_2CDDD0
label_2cf678:
    if (ctx->pc == 0x2CF678u) {
        ctx->pc = 0x2CF678u;
            // 0x2cf678: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2CF67Cu;
        goto label_2cf67c;
    }
    ctx->pc = 0x2CF674u;
    SET_GPR_U32(ctx, 31, 0x2CF67Cu);
    ctx->pc = 0x2CF678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF674u;
            // 0x2cf678: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDDD0u;
    if (runtime->hasFunction(0x2CDDD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF67Cu; }
        if (ctx->pc != 0x2CF67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDDD0_0x2cddd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF67Cu; }
        if (ctx->pc != 0x2CF67Cu) { return; }
    }
    ctx->pc = 0x2CF67Cu;
label_2cf67c:
    // 0x2cf67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf680:
    // 0x2cf680: 0xc0b3790  jal         func_2CDE40
label_2cf684:
    if (ctx->pc == 0x2CF684u) {
        ctx->pc = 0x2CF684u;
            // 0x2cf684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF688u;
        goto label_2cf688;
    }
    ctx->pc = 0x2CF680u;
    SET_GPR_U32(ctx, 31, 0x2CF688u);
    ctx->pc = 0x2CF684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF680u;
            // 0x2cf684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE40u;
    if (runtime->hasFunction(0x2CDE40u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF688u; }
        if (ctx->pc != 0x2CF688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDE40_0x2cde40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF688u; }
        if (ctx->pc != 0x2CF688u) { return; }
    }
    ctx->pc = 0x2CF688u;
label_2cf688:
    // 0x2cf688: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cf688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cf68c:
    // 0x2cf68c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cf68cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cf690:
    // 0x2cf690: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cf694:
    if (ctx->pc == 0x2CF694u) {
        ctx->pc = 0x2CF694u;
            // 0x2cf694: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF698u;
        goto label_2cf698;
    }
    ctx->pc = 0x2CF690u;
    {
        const bool branch_taken_0x2cf690 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cf690) {
            ctx->pc = 0x2CF694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF690u;
            // 0x2cf694: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF6A4u;
            goto label_2cf6a4;
        }
    }
    ctx->pc = 0x2CF698u;
label_2cf698:
    // 0x2cf698: 0xc0400a8  jal         func_1002A0
label_2cf69c:
    if (ctx->pc == 0x2CF69Cu) {
        ctx->pc = 0x2CF69Cu;
            // 0x2cf69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CF6A0u;
        goto label_2cf6a0;
    }
    ctx->pc = 0x2CF698u;
    SET_GPR_U32(ctx, 31, 0x2CF6A0u);
    ctx->pc = 0x2CF69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF698u;
            // 0x2cf69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF6A0u; }
        if (ctx->pc != 0x2CF6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF6A0u; }
        if (ctx->pc != 0x2CF6A0u) { return; }
    }
    ctx->pc = 0x2CF6A0u;
label_2cf6a0:
    // 0x2cf6a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cf6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cf6a4:
    // 0x2cf6a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cf6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf6a8:
    // 0x2cf6a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf6ac:
    // 0x2cf6ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf6b0:
    // 0x2cf6b0: 0x3e00008  jr          $ra
label_2cf6b4:
    if (ctx->pc == 0x2CF6B4u) {
        ctx->pc = 0x2CF6B4u;
            // 0x2cf6b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2CF6B8u;
        goto label_2cf6b8;
    }
    ctx->pc = 0x2CF6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF6B0u;
            // 0x2cf6b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF6B8u;
label_2cf6b8:
    // 0x2cf6b8: 0x0  nop
    ctx->pc = 0x2cf6b8u;
    // NOP
label_2cf6bc:
    // 0x2cf6bc: 0x0  nop
    ctx->pc = 0x2cf6bcu;
    // NOP
}
