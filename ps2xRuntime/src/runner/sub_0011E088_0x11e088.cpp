#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E088
// Address: 0x11e088 - 0x11e3d0
void sub_0011E088_0x11e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E088_0x11e088");
#endif

    switch (ctx->pc) {
        case 0x11e088u: goto label_11e088;
        case 0x11e08cu: goto label_11e08c;
        case 0x11e090u: goto label_11e090;
        case 0x11e094u: goto label_11e094;
        case 0x11e098u: goto label_11e098;
        case 0x11e09cu: goto label_11e09c;
        case 0x11e0a0u: goto label_11e0a0;
        case 0x11e0a4u: goto label_11e0a4;
        case 0x11e0a8u: goto label_11e0a8;
        case 0x11e0acu: goto label_11e0ac;
        case 0x11e0b0u: goto label_11e0b0;
        case 0x11e0b4u: goto label_11e0b4;
        case 0x11e0b8u: goto label_11e0b8;
        case 0x11e0bcu: goto label_11e0bc;
        case 0x11e0c0u: goto label_11e0c0;
        case 0x11e0c4u: goto label_11e0c4;
        case 0x11e0c8u: goto label_11e0c8;
        case 0x11e0ccu: goto label_11e0cc;
        case 0x11e0d0u: goto label_11e0d0;
        case 0x11e0d4u: goto label_11e0d4;
        case 0x11e0d8u: goto label_11e0d8;
        case 0x11e0dcu: goto label_11e0dc;
        case 0x11e0e0u: goto label_11e0e0;
        case 0x11e0e4u: goto label_11e0e4;
        case 0x11e0e8u: goto label_11e0e8;
        case 0x11e0ecu: goto label_11e0ec;
        case 0x11e0f0u: goto label_11e0f0;
        case 0x11e0f4u: goto label_11e0f4;
        case 0x11e0f8u: goto label_11e0f8;
        case 0x11e0fcu: goto label_11e0fc;
        case 0x11e100u: goto label_11e100;
        case 0x11e104u: goto label_11e104;
        case 0x11e108u: goto label_11e108;
        case 0x11e10cu: goto label_11e10c;
        case 0x11e110u: goto label_11e110;
        case 0x11e114u: goto label_11e114;
        case 0x11e118u: goto label_11e118;
        case 0x11e11cu: goto label_11e11c;
        case 0x11e120u: goto label_11e120;
        case 0x11e124u: goto label_11e124;
        case 0x11e128u: goto label_11e128;
        case 0x11e12cu: goto label_11e12c;
        case 0x11e130u: goto label_11e130;
        case 0x11e134u: goto label_11e134;
        case 0x11e138u: goto label_11e138;
        case 0x11e13cu: goto label_11e13c;
        case 0x11e140u: goto label_11e140;
        case 0x11e144u: goto label_11e144;
        case 0x11e148u: goto label_11e148;
        case 0x11e14cu: goto label_11e14c;
        case 0x11e150u: goto label_11e150;
        case 0x11e154u: goto label_11e154;
        case 0x11e158u: goto label_11e158;
        case 0x11e15cu: goto label_11e15c;
        case 0x11e160u: goto label_11e160;
        case 0x11e164u: goto label_11e164;
        case 0x11e168u: goto label_11e168;
        case 0x11e16cu: goto label_11e16c;
        case 0x11e170u: goto label_11e170;
        case 0x11e174u: goto label_11e174;
        case 0x11e178u: goto label_11e178;
        case 0x11e17cu: goto label_11e17c;
        case 0x11e180u: goto label_11e180;
        case 0x11e184u: goto label_11e184;
        case 0x11e188u: goto label_11e188;
        case 0x11e18cu: goto label_11e18c;
        case 0x11e190u: goto label_11e190;
        case 0x11e194u: goto label_11e194;
        case 0x11e198u: goto label_11e198;
        case 0x11e19cu: goto label_11e19c;
        case 0x11e1a0u: goto label_11e1a0;
        case 0x11e1a4u: goto label_11e1a4;
        case 0x11e1a8u: goto label_11e1a8;
        case 0x11e1acu: goto label_11e1ac;
        case 0x11e1b0u: goto label_11e1b0;
        case 0x11e1b4u: goto label_11e1b4;
        case 0x11e1b8u: goto label_11e1b8;
        case 0x11e1bcu: goto label_11e1bc;
        case 0x11e1c0u: goto label_11e1c0;
        case 0x11e1c4u: goto label_11e1c4;
        case 0x11e1c8u: goto label_11e1c8;
        case 0x11e1ccu: goto label_11e1cc;
        case 0x11e1d0u: goto label_11e1d0;
        case 0x11e1d4u: goto label_11e1d4;
        case 0x11e1d8u: goto label_11e1d8;
        case 0x11e1dcu: goto label_11e1dc;
        case 0x11e1e0u: goto label_11e1e0;
        case 0x11e1e4u: goto label_11e1e4;
        case 0x11e1e8u: goto label_11e1e8;
        case 0x11e1ecu: goto label_11e1ec;
        case 0x11e1f0u: goto label_11e1f0;
        case 0x11e1f4u: goto label_11e1f4;
        case 0x11e1f8u: goto label_11e1f8;
        case 0x11e1fcu: goto label_11e1fc;
        case 0x11e200u: goto label_11e200;
        case 0x11e204u: goto label_11e204;
        case 0x11e208u: goto label_11e208;
        case 0x11e20cu: goto label_11e20c;
        case 0x11e210u: goto label_11e210;
        case 0x11e214u: goto label_11e214;
        case 0x11e218u: goto label_11e218;
        case 0x11e21cu: goto label_11e21c;
        case 0x11e220u: goto label_11e220;
        case 0x11e224u: goto label_11e224;
        case 0x11e228u: goto label_11e228;
        case 0x11e22cu: goto label_11e22c;
        case 0x11e230u: goto label_11e230;
        case 0x11e234u: goto label_11e234;
        case 0x11e238u: goto label_11e238;
        case 0x11e23cu: goto label_11e23c;
        case 0x11e240u: goto label_11e240;
        case 0x11e244u: goto label_11e244;
        case 0x11e248u: goto label_11e248;
        case 0x11e24cu: goto label_11e24c;
        case 0x11e250u: goto label_11e250;
        case 0x11e254u: goto label_11e254;
        case 0x11e258u: goto label_11e258;
        case 0x11e25cu: goto label_11e25c;
        case 0x11e260u: goto label_11e260;
        case 0x11e264u: goto label_11e264;
        case 0x11e268u: goto label_11e268;
        case 0x11e26cu: goto label_11e26c;
        case 0x11e270u: goto label_11e270;
        case 0x11e274u: goto label_11e274;
        case 0x11e278u: goto label_11e278;
        case 0x11e27cu: goto label_11e27c;
        case 0x11e280u: goto label_11e280;
        case 0x11e284u: goto label_11e284;
        case 0x11e288u: goto label_11e288;
        case 0x11e28cu: goto label_11e28c;
        case 0x11e290u: goto label_11e290;
        case 0x11e294u: goto label_11e294;
        case 0x11e298u: goto label_11e298;
        case 0x11e29cu: goto label_11e29c;
        case 0x11e2a0u: goto label_11e2a0;
        case 0x11e2a4u: goto label_11e2a4;
        case 0x11e2a8u: goto label_11e2a8;
        case 0x11e2acu: goto label_11e2ac;
        case 0x11e2b0u: goto label_11e2b0;
        case 0x11e2b4u: goto label_11e2b4;
        case 0x11e2b8u: goto label_11e2b8;
        case 0x11e2bcu: goto label_11e2bc;
        case 0x11e2c0u: goto label_11e2c0;
        case 0x11e2c4u: goto label_11e2c4;
        case 0x11e2c8u: goto label_11e2c8;
        case 0x11e2ccu: goto label_11e2cc;
        case 0x11e2d0u: goto label_11e2d0;
        case 0x11e2d4u: goto label_11e2d4;
        case 0x11e2d8u: goto label_11e2d8;
        case 0x11e2dcu: goto label_11e2dc;
        case 0x11e2e0u: goto label_11e2e0;
        case 0x11e2e4u: goto label_11e2e4;
        case 0x11e2e8u: goto label_11e2e8;
        case 0x11e2ecu: goto label_11e2ec;
        case 0x11e2f0u: goto label_11e2f0;
        case 0x11e2f4u: goto label_11e2f4;
        case 0x11e2f8u: goto label_11e2f8;
        case 0x11e2fcu: goto label_11e2fc;
        case 0x11e300u: goto label_11e300;
        case 0x11e304u: goto label_11e304;
        case 0x11e308u: goto label_11e308;
        case 0x11e30cu: goto label_11e30c;
        case 0x11e310u: goto label_11e310;
        case 0x11e314u: goto label_11e314;
        case 0x11e318u: goto label_11e318;
        case 0x11e31cu: goto label_11e31c;
        case 0x11e320u: goto label_11e320;
        case 0x11e324u: goto label_11e324;
        case 0x11e328u: goto label_11e328;
        case 0x11e32cu: goto label_11e32c;
        case 0x11e330u: goto label_11e330;
        case 0x11e334u: goto label_11e334;
        case 0x11e338u: goto label_11e338;
        case 0x11e33cu: goto label_11e33c;
        case 0x11e340u: goto label_11e340;
        case 0x11e344u: goto label_11e344;
        case 0x11e348u: goto label_11e348;
        case 0x11e34cu: goto label_11e34c;
        case 0x11e350u: goto label_11e350;
        case 0x11e354u: goto label_11e354;
        case 0x11e358u: goto label_11e358;
        case 0x11e35cu: goto label_11e35c;
        case 0x11e360u: goto label_11e360;
        case 0x11e364u: goto label_11e364;
        case 0x11e368u: goto label_11e368;
        case 0x11e36cu: goto label_11e36c;
        case 0x11e370u: goto label_11e370;
        case 0x11e374u: goto label_11e374;
        case 0x11e378u: goto label_11e378;
        case 0x11e37cu: goto label_11e37c;
        case 0x11e380u: goto label_11e380;
        case 0x11e384u: goto label_11e384;
        case 0x11e388u: goto label_11e388;
        case 0x11e38cu: goto label_11e38c;
        case 0x11e390u: goto label_11e390;
        case 0x11e394u: goto label_11e394;
        case 0x11e398u: goto label_11e398;
        case 0x11e39cu: goto label_11e39c;
        case 0x11e3a0u: goto label_11e3a0;
        case 0x11e3a4u: goto label_11e3a4;
        case 0x11e3a8u: goto label_11e3a8;
        case 0x11e3acu: goto label_11e3ac;
        case 0x11e3b0u: goto label_11e3b0;
        case 0x11e3b4u: goto label_11e3b4;
        case 0x11e3b8u: goto label_11e3b8;
        case 0x11e3bcu: goto label_11e3bc;
        case 0x11e3c0u: goto label_11e3c0;
        case 0x11e3c4u: goto label_11e3c4;
        case 0x11e3c8u: goto label_11e3c8;
        case 0x11e3ccu: goto label_11e3cc;
        default: break;
    }

    ctx->pc = 0x11e088u;

label_11e088:
    // 0x11e088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11e08c:
    // 0x11e08c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11e090:
    // 0x11e090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e094:
    // 0x11e094: 0x8046c86  j           func_11B218
label_11e098:
    if (ctx->pc == 0x11E098u) {
        ctx->pc = 0x11E098u;
            // 0x11e098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x11E09Cu;
        goto label_11e09c;
    }
    ctx->pc = 0x11E094u;
    ctx->pc = 0x11E098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E094u;
            // 0x11e098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B218u;
    if (runtime->hasFunction(0x11B218u)) {
        auto targetFn = runtime->lookupFunction(0x11B218u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0011B218_0x11b218(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11E09Cu;
label_11e09c:
    // 0x11e09c: 0x0  nop
    ctx->pc = 0x11e09cu;
    // NOP
label_11e0a0:
    // 0x11e0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11e0a4:
    // 0x11e0a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11e0a8:
    // 0x11e0a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11e0ac:
    // 0x11e0ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11e0b0:
    // 0x11e0b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11e0b4:
    // 0x11e0b4: 0xc047aee  jal         func_11EBB8
label_11e0b8:
    if (ctx->pc == 0x11E0B8u) {
        ctx->pc = 0x11E0B8u;
            // 0x11e0b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x11E0BCu;
        goto label_11e0bc;
    }
    ctx->pc = 0x11E0B4u;
    SET_GPR_U32(ctx, 31, 0x11E0BCu);
    ctx->pc = 0x11E0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0B4u;
            // 0x11e0b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0BCu; }
        if (ctx->pc != 0x11E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0BCu; }
        if (ctx->pc != 0x11E0BCu) { return; }
    }
    ctx->pc = 0x11E0BCu;
label_11e0bc:
    // 0x11e0bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_11e0c0:
    if (ctx->pc == 0x11E0C0u) {
        ctx->pc = 0x11E0C0u;
            // 0x11e0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11E0C4u;
        goto label_11e0c4;
    }
    ctx->pc = 0x11E0BCu;
    {
        const bool branch_taken_0x11e0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0BCu;
            // 0x11e0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0bc) {
            ctx->pc = 0x11E0F4u;
            goto label_11e0f4;
        }
    }
    ctx->pc = 0x11E0C4u;
label_11e0c4:
    // 0x11e0c4: 0xc045968  jal         func_1165A0
label_11e0c8:
    if (ctx->pc == 0x11E0C8u) {
        ctx->pc = 0x11E0CCu;
        goto label_11e0cc;
    }
    ctx->pc = 0x11E0C4u;
    SET_GPR_U32(ctx, 31, 0x11E0CCu);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0CCu; }
        if (ctx->pc != 0x11E0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0CCu; }
        if (ctx->pc != 0x11E0CCu) { return; }
    }
    ctx->pc = 0x11E0CCu;
label_11e0cc:
    // 0x11e0cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x11e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_11e0d0:
    // 0x11e0d0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x11e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_11e0d4:
    // 0x11e0d4: 0x8c700a00  lw          $s0, 0xA00($v1)
    ctx->pc = 0x11e0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2560)));
label_11e0d8:
    // 0x11e0d8: 0xac710a00  sw          $s1, 0xA00($v1)
    ctx->pc = 0x11e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2560), GPR_U32(ctx, 17));
label_11e0dc:
    // 0x11e0dc: 0xac9c0a04  sw          $gp, 0xA04($a0)
    ctx->pc = 0x11e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2564), GPR_U32(ctx, 28));
label_11e0e0:
    // 0x11e0e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11e0e4:
    if (ctx->pc == 0x11E0E4u) {
        ctx->pc = 0x11E0E4u;
            // 0x11e0e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11E0E8u;
        goto label_11e0e8;
    }
    ctx->pc = 0x11E0E0u;
    {
        const bool branch_taken_0x11e0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0E0u;
            // 0x11e0e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0e0) {
            ctx->pc = 0x11E0F4u;
            goto label_11e0f4;
        }
    }
    ctx->pc = 0x11E0E8u;
label_11e0e8:
    // 0x11e0e8: 0xc04597c  jal         func_1165F0
label_11e0ec:
    if (ctx->pc == 0x11E0ECu) {
        ctx->pc = 0x11E0F0u;
        goto label_11e0f0;
    }
    ctx->pc = 0x11E0E8u;
    SET_GPR_U32(ctx, 31, 0x11E0F0u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0F0u; }
        if (ctx->pc != 0x11E0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0F0u; }
        if (ctx->pc != 0x11E0F0u) { return; }
    }
    ctx->pc = 0x11E0F0u;
label_11e0f0:
    // 0x11e0f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11e0f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e0f4:
    // 0x11e0f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11e0f8:
    // 0x11e0f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11e0f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e0fc:
    // 0x11e0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e100:
    // 0x11e100: 0x3e00008  jr          $ra
label_11e104:
    if (ctx->pc == 0x11E104u) {
        ctx->pc = 0x11E104u;
            // 0x11e104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x11E108u;
        goto label_11e108;
    }
    ctx->pc = 0x11E100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E100u;
            // 0x11e104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E108u;
label_11e108:
    // 0x11e108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11e10c:
    // 0x11e10c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11e10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11e110:
    // 0x11e110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11e114:
    // 0x11e114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11e118:
    // 0x11e118: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x11e118u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
label_11e11c:
    // 0x11e11c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11e120:
    // 0x11e120: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x11e120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_11e124:
    // 0x11e124: 0xae03fb20  sw          $v1, -0x4E0($s0)
    ctx->pc = 0x11e124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966048), GPR_U32(ctx, 3));
label_11e128:
    // 0x11e128: 0x8e02fb20  lw          $v0, -0x4E0($s0)
    ctx->pc = 0x11e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966048)));
label_11e12c:
    // 0x11e12c: 0xac82fb24  sw          $v0, -0x4DC($a0)
    ctx->pc = 0x11e12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294966052), GPR_U32(ctx, 2));
label_11e130:
    // 0x11e130: 0x8e03fb20  lw          $v1, -0x4E0($s0)
    ctx->pc = 0x11e130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966048)));
label_11e134:
    // 0x11e134: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_11e138:
    if (ctx->pc == 0x11E138u) {
        ctx->pc = 0x11E138u;
            // 0x11e138: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->pc = 0x11E13Cu;
        goto label_11e13c;
    }
    ctx->pc = 0x11E134u;
    {
        const bool branch_taken_0x11e134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E134u;
            // 0x11e138: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e134) {
            ctx->pc = 0x11E150u;
            goto label_11e150;
        }
    }
    ctx->pc = 0x11E13Cu;
label_11e13c:
    // 0x11e13c: 0xae00fb20  sw          $zero, -0x4E0($s0)
    ctx->pc = 0x11e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966048), GPR_U32(ctx, 0));
label_11e140:
    // 0x11e140: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11e144:
    // 0x11e144: 0xac40faf4  sw          $zero, -0x50C($v0)
    ctx->pc = 0x11e144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966004), GPR_U32(ctx, 0));
label_11e148:
    // 0x11e148: 0x10000014  b           . + 4 + (0x14 << 2)
label_11e14c:
    if (ctx->pc == 0x11E14Cu) {
        ctx->pc = 0x11E14Cu;
            // 0x11e14c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x11E150u;
        goto label_11e150;
    }
    ctx->pc = 0x11E148u;
    {
        const bool branch_taken_0x11e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E148u;
            // 0x11e14c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e148) {
            ctx->pc = 0x11E19Cu;
            goto label_11e19c;
        }
    }
    ctx->pc = 0x11E150u;
label_11e150:
    // 0x11e150: 0x8c44fae8  lw          $a0, -0x518($v0)
    ctx->pc = 0x11e150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965992)));
label_11e154:
    // 0x11e154: 0xc0430e4  jal         func_10C390
label_11e158:
    if (ctx->pc == 0x11E158u) {
        ctx->pc = 0x11E15Cu;
        goto label_11e15c;
    }
    ctx->pc = 0x11E154u;
    SET_GPR_U32(ctx, 31, 0x11E15Cu);
    ctx->pc = 0x10C390u;
    if (runtime->hasFunction(0x10C390u)) {
        auto targetFn = runtime->lookupFunction(0x10C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E15Cu; }
        if (ctx->pc != 0x11E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C390_0x10c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E15Cu; }
        if (ctx->pc != 0x11E15Cu) { return; }
    }
    ctx->pc = 0x11E15Cu;
label_11e15c:
    // 0x11e15c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x11e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_11e160:
    // 0x11e160: 0x8c62fad4  lw          $v0, -0x52C($v1)
    ctx->pc = 0x11e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965972)));
label_11e164:
    // 0x11e164: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11e168:
    if (ctx->pc == 0x11E168u) {
        ctx->pc = 0x11E168u;
            // 0x11e168: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->pc = 0x11E16Cu;
        goto label_11e16c;
    }
    ctx->pc = 0x11E164u;
    {
        const bool branch_taken_0x11e164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E164u;
            // 0x11e168: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e164) {
            ctx->pc = 0x11E18Cu;
            goto label_11e18c;
        }
    }
    ctx->pc = 0x11E16Cu;
label_11e16c:
    // 0x11e16c: 0x8c430a00  lw          $v1, 0xA00($v0)
    ctx->pc = 0x11e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2560)));
label_11e170:
    // 0x11e170: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_11e174:
    if (ctx->pc == 0x11E174u) {
        ctx->pc = 0x11E174u;
            // 0x11e174: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->pc = 0x11E178u;
        goto label_11e178;
    }
    ctx->pc = 0x11E170u;
    {
        const bool branch_taken_0x11e170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E170u;
            // 0x11e174: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e170) {
            ctx->pc = 0x11E18Cu;
            goto label_11e18c;
        }
    }
    ctx->pc = 0x11E178u;
label_11e178:
    // 0x11e178: 0x8c44fae0  lw          $a0, -0x520($v0)
    ctx->pc = 0x11e178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965984)));
label_11e17c:
    // 0x11e17c: 0xc0430e4  jal         func_10C390
label_11e180:
    if (ctx->pc == 0x11E180u) {
        ctx->pc = 0x11E184u;
        goto label_11e184;
    }
    ctx->pc = 0x11E17Cu;
    SET_GPR_U32(ctx, 31, 0x11E184u);
    ctx->pc = 0x10C390u;
    if (runtime->hasFunction(0x10C390u)) {
        auto targetFn = runtime->lookupFunction(0x10C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E184u; }
        if (ctx->pc != 0x11E184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C390_0x10c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E184u; }
        if (ctx->pc != 0x11E184u) { return; }
    }
    ctx->pc = 0x11E184u;
label_11e184:
    // 0x11e184: 0x10000003  b           . + 4 + (0x3 << 2)
label_11e188:
    if (ctx->pc == 0x11E188u) {
        ctx->pc = 0x11E18Cu;
        goto label_11e18c;
    }
    ctx->pc = 0x11E184u;
    {
        const bool branch_taken_0x11e184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e184) {
            ctx->pc = 0x11E194u;
            goto label_11e194;
        }
    }
    ctx->pc = 0x11E18Cu;
label_11e18c:
    // 0x11e18c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11e190:
    // 0x11e190: 0xac40faf4  sw          $zero, -0x50C($v0)
    ctx->pc = 0x11e190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966004), GPR_U32(ctx, 0));
label_11e194:
    // 0x11e194: 0xae00fb20  sw          $zero, -0x4E0($s0)
    ctx->pc = 0x11e194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966048), GPR_U32(ctx, 0));
label_11e198:
    // 0x11e198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e19c:
    // 0x11e19c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e19cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e1a0:
    // 0x11e1a0: 0x3e00008  jr          $ra
label_11e1a4:
    if (ctx->pc == 0x11E1A4u) {
        ctx->pc = 0x11E1A4u;
            // 0x11e1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x11E1A8u;
        goto label_11e1a8;
    }
    ctx->pc = 0x11E1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1A0u;
            // 0x11e1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E1A8u;
label_11e1a8:
    // 0x11e1a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11e1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_11e1ac:
    // 0x11e1ac: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x11e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_11e1b0:
    // 0x11e1b0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11e1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_11e1b4:
    // 0x11e1b4: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x11e1b4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
label_11e1b8:
    // 0x11e1b8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11e1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_11e1bc:
    // 0x11e1bc: 0x3c17005d  lui         $s7, 0x5D
    ctx->pc = 0x11e1bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)93 << 16));
label_11e1c0:
    // 0x11e1c0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11e1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_11e1c4:
    // 0x11e1c4: 0x3c160063  lui         $s6, 0x63
    ctx->pc = 0x11e1c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)99 << 16));
label_11e1c8:
    // 0x11e1c8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_11e1cc:
    // 0x11e1cc: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x11e1ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
label_11e1d0:
    // 0x11e1d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11e1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11e1d4:
    // 0x11e1d4: 0x3c14005d  lui         $s4, 0x5D
    ctx->pc = 0x11e1d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)93 << 16));
label_11e1d8:
    // 0x11e1d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11e1dc:
    // 0x11e1dc: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x11e1dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
label_11e1e0:
    // 0x11e1e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11e1e4:
    // 0x11e1e4: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x11e1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
label_11e1e8:
    // 0x11e1e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11e1ec:
    // 0x11e1ec: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x11e1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
label_11e1f0:
    // 0x11e1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11e1f4:
    // 0x11e1f4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11e1f8:
    // 0x11e1f8: 0xc0430e8  jal         func_10C3A0
label_11e1fc:
    if (ctx->pc == 0x11E1FCu) {
        ctx->pc = 0x11E1FCu;
            // 0x11e1fc: 0x8c44fae0  lw          $a0, -0x520($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965984)));
        ctx->pc = 0x11E200u;
        goto label_11e200;
    }
    ctx->pc = 0x11E1F8u;
    SET_GPR_U32(ctx, 31, 0x11E200u);
    ctx->pc = 0x11E1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1F8u;
            // 0x11e1fc: 0x8c44fae0  lw          $a0, -0x520($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965984)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E200u; }
        if (ctx->pc != 0x11E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E200u; }
        if (ctx->pc != 0x11E200u) { return; }
    }
    ctx->pc = 0x11E200u;
label_11e200:
    // 0x11e200: 0x8e83fb20  lw          $v1, -0x4E0($s4)
    ctx->pc = 0x11e200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294966048)));
label_11e204:
    // 0x11e204: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11e208:
    // 0x11e208: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_11e20c:
    if (ctx->pc == 0x11E20Cu) {
        ctx->pc = 0x11E20Cu;
            // 0x11e20c: 0x8ee2fad0  lw          $v0, -0x530($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294965968)));
        ctx->pc = 0x11E210u;
        goto label_11e210;
    }
    ctx->pc = 0x11E208u;
    {
        const bool branch_taken_0x11e208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E208u;
            // 0x11e20c: 0x8ee2fad0  lw          $v0, -0x530($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294965968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e208) {
            ctx->pc = 0x11E22Cu;
            goto label_11e22c;
        }
    }
    ctx->pc = 0x11E210u;
label_11e210:
    // 0x11e210: 0xae60faf4  sw          $zero, -0x50C($s3)
    ctx->pc = 0x11e210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294966004), GPR_U32(ctx, 0));
label_11e214:
    // 0x11e214: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_11e218:
    // 0x11e218: 0xae80fb20  sw          $zero, -0x4E0($s4)
    ctx->pc = 0x11e218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294966048), GPR_U32(ctx, 0));
label_11e21c:
    // 0x11e21c: 0x0  nop
    ctx->pc = 0x11e21cu;
    // NOP
label_11e220:
    // 0x11e220: 0xc043068  jal         func_10C1A0
label_11e224:
    if (ctx->pc == 0x11E224u) {
        ctx->pc = 0x11E224u;
            // 0x11e224: 0xafc00a14  sw          $zero, 0xA14($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 2580), GPR_U32(ctx, 0));
        ctx->pc = 0x11E228u;
        goto label_11e228;
    }
    ctx->pc = 0x11E220u;
    SET_GPR_U32(ctx, 31, 0x11E228u);
    ctx->pc = 0x11E224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E220u;
            // 0x11e224: 0xafc00a14  sw          $zero, 0xA14($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 2580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A0u;
    if (runtime->hasFunction(0x10C1A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E228u; }
        if (ctx->pc != 0x11E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1A0_0x10c1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E228u; }
        if (ctx->pc != 0x11E228u) { return; }
    }
    ctx->pc = 0x11E228u;
label_11e228:
    // 0x11e228: 0x8ee2fad0  lw          $v0, -0x530($s7)
    ctx->pc = 0x11e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294965968)));
label_11e22c:
    // 0x11e22c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11e230:
    if (ctx->pc == 0x11E230u) {
        ctx->pc = 0x11E230u;
            // 0x11e230: 0x26c40128  addiu       $a0, $s6, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
        ctx->pc = 0x11E234u;
        goto label_11e234;
    }
    ctx->pc = 0x11E22Cu;
    {
        const bool branch_taken_0x11e22c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E22Cu;
            // 0x11e230: 0x26c40128  addiu       $a0, $s6, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e22c) {
            ctx->pc = 0x11E240u;
            goto label_11e240;
        }
    }
    ctx->pc = 0x11E234u;
label_11e234:
    // 0x11e234: 0x8e450a00  lw          $a1, 0xA00($s2)
    ctx->pc = 0x11e234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2560)));
label_11e238:
    // 0x11e238: 0xc043c12  jal         func_10F048
label_11e23c:
    if (ctx->pc == 0x11E23Cu) {
        ctx->pc = 0x11E23Cu;
            // 0x11e23c: 0x8e26fb24  lw          $a2, -0x4DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966052)));
        ctx->pc = 0x11E240u;
        goto label_11e240;
    }
    ctx->pc = 0x11E238u;
    SET_GPR_U32(ctx, 31, 0x11E240u);
    ctx->pc = 0x11E23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E238u;
            // 0x11e23c: 0x8e26fb24  lw          $a2, -0x4DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E240u; }
        if (ctx->pc != 0x11E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E240u; }
        if (ctx->pc != 0x11E240u) { return; }
    }
    ctx->pc = 0x11E240u;
label_11e240:
    // 0x11e240: 0x8e430a00  lw          $v1, 0xA00($s2)
    ctx->pc = 0x11e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2560)));
label_11e244:
    // 0x11e244: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_11e248:
    if (ctx->pc == 0x11E248u) {
        ctx->pc = 0x11E24Cu;
        goto label_11e24c;
    }
    ctx->pc = 0x11E244u;
    {
        const bool branch_taken_0x11e244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e244) {
            ctx->pc = 0x11E26Cu;
            goto label_11e26c;
        }
    }
    ctx->pc = 0x11E24Cu;
label_11e24c:
    // 0x11e24c: 0x8e22fb24  lw          $v0, -0x4DC($s1)
    ctx->pc = 0x11e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966052)));
label_11e250:
    // 0x11e250: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11e254:
    if (ctx->pc == 0x11E254u) {
        ctx->pc = 0x11E258u;
        goto label_11e258;
    }
    ctx->pc = 0x11E250u;
    {
        const bool branch_taken_0x11e250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e250) {
            ctx->pc = 0x11E26Cu;
            goto label_11e26c;
        }
    }
    ctx->pc = 0x11E258u;
label_11e258:
    // 0x11e258: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x11e258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11e25c:
    // 0x11e25c: 0x8ebc0a04  lw          $gp, 0xA04($s5)
    ctx->pc = 0x11e25cu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2564)));
label_11e260:
    // 0x11e260: 0x60f809  jalr        $v1
label_11e264:
    if (ctx->pc == 0x11E264u) {
        ctx->pc = 0x11E264u;
            // 0x11e264: 0x8e24fb24  lw          $a0, -0x4DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966052)));
        ctx->pc = 0x11E268u;
        goto label_11e268;
    }
    ctx->pc = 0x11E260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11E268u);
        ctx->pc = 0x11E264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E260u;
            // 0x11e264: 0x8e24fb24  lw          $a0, -0x4DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966052)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11E268u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11E268u; }
            if (ctx->pc != 0x11E268u) { return; }
        }
        }
    }
    ctx->pc = 0x11E268u;
label_11e268:
    // 0x11e268: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x11e268u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e26c:
    // 0x11e26c: 0xae60faf4  sw          $zero, -0x50C($s3)
    ctx->pc = 0x11e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294966004), GPR_U32(ctx, 0));
label_11e270:
    // 0x11e270: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_11e274:
    if (ctx->pc == 0x11E274u) {
        ctx->pc = 0x11E274u;
            // 0x11e274: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->pc = 0x11E278u;
        goto label_11e278;
    }
    ctx->pc = 0x11E270u;
    {
        const bool branch_taken_0x11e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E270u;
            // 0x11e274: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e270) {
            ctx->pc = 0x11E1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e1f8;
        }
    }
    ctx->pc = 0x11E278u;
label_11e278:
    // 0x11e278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11e27c:
    // 0x11e27c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11e27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11e280:
    // 0x11e280: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11e280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11e284:
    // 0x11e284: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x11e284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11e288:
    // 0x11e288: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x11e288u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
label_11e28c:
    // 0x11e28c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11e290:
    // 0x11e290: 0x8e24fad4  lw          $a0, -0x52C($s1)
    ctx->pc = 0x11e290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965972)));
label_11e294:
    // 0x11e294: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11e294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e298:
    // 0x11e298: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_11e29c:
    if (ctx->pc == 0x11E29Cu) {
        ctx->pc = 0x11E29Cu;
            // 0x11e29c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x11E2A0u;
        goto label_11e2a0;
    }
    ctx->pc = 0x11E298u;
    {
        const bool branch_taken_0x11e298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E298u;
            // 0x11e29c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e298) {
            ctx->pc = 0x11E2F0u;
            goto label_11e2f0;
        }
    }
    ctx->pc = 0x11E2A0u;
label_11e2a0:
    // 0x11e2a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x11e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_11e2a4:
    // 0x11e2a4: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x11e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
label_11e2a8:
    // 0x11e2a8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x11e2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_11e2ac:
    // 0x11e2ac: 0x24420a18  addiu       $v0, $v0, 0xA18
    ctx->pc = 0x11e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2584));
label_11e2b0:
    // 0x11e2b0: 0x2463e1a8  addiu       $v1, $v1, -0x1E58
    ctx->pc = 0x11e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959528));
label_11e2b4:
    // 0x11e2b4: 0x24a50150  addiu       $a1, $a1, 0x150
    ctx->pc = 0x11e2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
label_11e2b8:
    // 0x11e2b8: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x11e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
label_11e2bc:
    // 0x11e2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e2c0:
    // 0x11e2c0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x11e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_11e2c4:
    // 0x11e2c4: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x11e2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
label_11e2c8:
    // 0x11e2c8: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x11e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
label_11e2cc:
    // 0x11e2cc: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x11e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
label_11e2d0:
    // 0x11e2d0: 0xc043058  jal         func_10C160
label_11e2d4:
    if (ctx->pc == 0x11E2D4u) {
        ctx->pc = 0x11E2D4u;
            // 0x11e2d4: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x11E2D8u;
        goto label_11e2d8;
    }
    ctx->pc = 0x11E2D0u;
    SET_GPR_U32(ctx, 31, 0x11E2D8u);
    ctx->pc = 0x11E2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2D0u;
            // 0x11e2d4: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C160u;
    if (runtime->hasFunction(0x10C160u)) {
        auto targetFn = runtime->lookupFunction(0x10C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E2D8u; }
        if (ctx->pc != 0x11E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C160_0x10c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E2D8u; }
        if (ctx->pc != 0x11E2D8u) { return; }
    }
    ctx->pc = 0x11E2D8u;
label_11e2d8:
    // 0x11e2d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e2dc:
    // 0x11e2dc: 0xae22fad4  sw          $v0, -0x52C($s1)
    ctx->pc = 0x11e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965972), GPR_U32(ctx, 2));
label_11e2e0:
    // 0x11e2e0: 0xc043528  jal         func_10D4A0
label_11e2e4:
    if (ctx->pc == 0x11E2E4u) {
        ctx->pc = 0x11E2E4u;
            // 0x11e2e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11E2E8u;
        goto label_11e2e8;
    }
    ctx->pc = 0x11E2E0u;
    SET_GPR_U32(ctx, 31, 0x11E2E8u);
    ctx->pc = 0x11E2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2E0u;
            // 0x11e2e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4A0u;
    if (runtime->hasFunction(0x10D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E2E8u; }
        if (ctx->pc != 0x11E2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4A0_0x10d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E2E8u; }
        if (ctx->pc != 0x11E2E8u) { return; }
    }
    ctx->pc = 0x11E2E8u;
label_11e2e8:
    // 0x11e2e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_11e2ec:
    if (ctx->pc == 0x11E2ECu) {
        ctx->pc = 0x11E2ECu;
            // 0x11e2ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11E2F0u;
        goto label_11e2f0;
    }
    ctx->pc = 0x11E2E8u;
    {
        const bool branch_taken_0x11e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2E8u;
            // 0x11e2ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2e8) {
            ctx->pc = 0x11E300u;
            goto label_11e300;
        }
    }
    ctx->pc = 0x11E2F0u;
label_11e2f0:
    // 0x11e2f0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11e2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11e2f4:
    // 0x11e2f4: 0xc04307c  jal         func_10C1F0
label_11e2f8:
    if (ctx->pc == 0x11E2F8u) {
        ctx->pc = 0x11E2F8u;
            // 0x11e2f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11E2FCu;
        goto label_11e2fc;
    }
    ctx->pc = 0x11E2F4u;
    SET_GPR_U32(ctx, 31, 0x11E2FCu);
    ctx->pc = 0x11E2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2F4u;
            // 0x11e2f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E2FCu; }
        if (ctx->pc != 0x11E2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E2FCu; }
        if (ctx->pc != 0x11E2FCu) { return; }
    }
    ctx->pc = 0x11E2FCu;
label_11e2fc:
    // 0x11e2fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11e2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e300:
    // 0x11e300: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11e304:
    // 0x11e304: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11e304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e308:
    // 0x11e308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e30c:
    // 0x11e30c: 0x3e00008  jr          $ra
label_11e310:
    if (ctx->pc == 0x11E310u) {
        ctx->pc = 0x11E310u;
            // 0x11e310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x11E314u;
        goto label_11e314;
    }
    ctx->pc = 0x11E30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E30Cu;
            // 0x11e310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E314u;
label_11e314:
    // 0x11e314: 0x0  nop
    ctx->pc = 0x11e314u;
    // NOP
label_11e318:
    // 0x11e318: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x11e318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_11e31c:
    // 0x11e31c: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x11e31cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_11e320:
    // 0x11e320: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_11e324:
    // 0x11e324: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_11e328:
    if (ctx->pc == 0x11E328u) {
        ctx->pc = 0x11E328u;
            // 0x11e328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11E32Cu;
        goto label_11e32c;
    }
    ctx->pc = 0x11E324u;
    {
        const bool branch_taken_0x11e324 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11E328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E324u;
            // 0x11e328: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e324) {
            ctx->pc = 0x11E378u;
            goto label_11e378;
        }
    }
    ctx->pc = 0x11E32Cu;
label_11e32c:
    // 0x11e32c: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x11e32cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_11e330:
    // 0x11e330: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_11e334:
    if (ctx->pc == 0x11E334u) {
        ctx->pc = 0x11E334u;
            // 0x11e334: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->pc = 0x11E338u;
        goto label_11e338;
    }
    ctx->pc = 0x11E330u;
    {
        const bool branch_taken_0x11e330 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11E334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E330u;
            // 0x11e334: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e330) {
            ctx->pc = 0x11E378u;
            goto label_11e378;
        }
    }
    ctx->pc = 0x11E338u;
label_11e338:
    // 0x11e338: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x11e338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_11e33c:
    // 0x11e33c: 0x3c0b005d  lui         $t3, 0x5D
    ctx->pc = 0x11e33cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)93 << 16));
label_11e340:
    // 0x11e340: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x11e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_11e344:
    // 0x11e344: 0x0  nop
    ctx->pc = 0x11e344u;
    // NOP
label_11e348:
    // 0x11e348: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x11e348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_11e34c:
    // 0x11e34c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11e34cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11e350:
    // 0x11e350: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x11e350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_11e354:
    // 0x11e354: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11e354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11e358:
    // 0x11e358: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11e358u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_11e35c:
    // 0x11e35c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11e35cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11e360:
    // 0x11e360: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11e360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_11e364:
    // 0x11e364: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x11e364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11e368:
    // 0x11e368: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_11e36c:
    if (ctx->pc == 0x11E36Cu) {
        ctx->pc = 0x11E36Cu;
            // 0x11e36c: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->pc = 0x11E370u;
        goto label_11e370;
    }
    ctx->pc = 0x11E368u;
    {
        const bool branch_taken_0x11e368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E368u;
            // 0x11e36c: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e368) {
            ctx->pc = 0x11E348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e348;
        }
    }
    ctx->pc = 0x11E370u;
label_11e370:
    // 0x11e370: 0x10000003  b           . + 4 + (0x3 << 2)
label_11e374:
    if (ctx->pc == 0x11E374u) {
        ctx->pc = 0x11E374u;
            // 0x11e374: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->pc = 0x11E378u;
        goto label_11e378;
    }
    ctx->pc = 0x11E370u;
    {
        const bool branch_taken_0x11e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E370u;
            // 0x11e374: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e370) {
            ctx->pc = 0x11E380u;
            goto label_11e380;
        }
    }
    ctx->pc = 0x11E378u;
label_11e378:
    // 0x11e378: 0x3c0b005d  lui         $t3, 0x5D
    ctx->pc = 0x11e378u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)93 << 16));
label_11e37c:
    // 0x11e37c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x11e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_11e380:
    // 0x11e380: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_11e384:
    if (ctx->pc == 0x11E384u) {
        ctx->pc = 0x11E384u;
            // 0x11e384: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->pc = 0x11E388u;
        goto label_11e388;
    }
    ctx->pc = 0x11E380u;
    {
        const bool branch_taken_0x11e380 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11E384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E380u;
            // 0x11e384: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e380) {
            ctx->pc = 0x11E3C8u;
            goto label_11e3c8;
        }
    }
    ctx->pc = 0x11E388u;
label_11e388:
    // 0x11e388: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x11e388u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_11e38c:
    // 0x11e38c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e390:
    // 0x11e390: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_11e394:
    if (ctx->pc == 0x11E394u) {
        ctx->pc = 0x11E394u;
            // 0x11e394: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->pc = 0x11E398u;
        goto label_11e398;
    }
    ctx->pc = 0x11E390u;
    {
        const bool branch_taken_0x11e390 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11E394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E390u;
            // 0x11e394: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e390) {
            ctx->pc = 0x11E3C8u;
            goto label_11e3c8;
        }
    }
    ctx->pc = 0x11E398u;
label_11e398:
    // 0x11e398: 0x24e80050  addiu       $t0, $a3, 0x50
    ctx->pc = 0x11e398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_11e39c:
    // 0x11e39c: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x11e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_11e3a0:
    // 0x11e3a0: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x11e3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_11e3a4:
    // 0x11e3a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11e3a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11e3a8:
    // 0x11e3a8: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x11e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_11e3ac:
    // 0x11e3ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11e3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11e3b0:
    // 0x11e3b0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11e3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_11e3b4:
    // 0x11e3b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11e3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11e3b8:
    // 0x11e3b8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x11e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_11e3bc:
    // 0x11e3bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x11e3bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11e3c0:
    // 0x11e3c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_11e3c4:
    if (ctx->pc == 0x11E3C4u) {
        ctx->pc = 0x11E3C4u;
            // 0x11e3c4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->pc = 0x11E3C8u;
        goto label_11e3c8;
    }
    ctx->pc = 0x11E3C0u;
    {
        const bool branch_taken_0x11e3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3C0u;
            // 0x11e3c4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3c0) {
            ctx->pc = 0x11E3A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11e3a0;
        }
    }
    ctx->pc = 0x11E3C8u;
label_11e3c8:
    // 0x11e3c8: 0x8047842  j           func_11E108
label_11e3cc:
    if (ctx->pc == 0x11E3CCu) {
        ctx->pc = 0x11E3CCu;
            // 0x11e3cc: 0x2564fb20  addiu       $a0, $t3, -0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294966048));
        ctx->pc = 0x11E3D0u;
        goto label_fallthrough_0x11e3c8;
    }
    ctx->pc = 0x11E3C8u;
    ctx->pc = 0x11E3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3C8u;
            // 0x11e3cc: 0x2564fb20  addiu       $a0, $t3, -0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294966048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E108u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_11e108;
label_fallthrough_0x11e3c8:
    ctx->pc = 0x11E3D0u;
}
