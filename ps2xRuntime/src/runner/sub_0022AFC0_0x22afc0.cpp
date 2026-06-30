#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022AFC0
// Address: 0x22afc0 - 0x22b370
void sub_0022AFC0_0x22afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AFC0_0x22afc0");
#endif

    switch (ctx->pc) {
        case 0x22afc0u: goto label_22afc0;
        case 0x22afc4u: goto label_22afc4;
        case 0x22afc8u: goto label_22afc8;
        case 0x22afccu: goto label_22afcc;
        case 0x22afd0u: goto label_22afd0;
        case 0x22afd4u: goto label_22afd4;
        case 0x22afd8u: goto label_22afd8;
        case 0x22afdcu: goto label_22afdc;
        case 0x22afe0u: goto label_22afe0;
        case 0x22afe4u: goto label_22afe4;
        case 0x22afe8u: goto label_22afe8;
        case 0x22afecu: goto label_22afec;
        case 0x22aff0u: goto label_22aff0;
        case 0x22aff4u: goto label_22aff4;
        case 0x22aff8u: goto label_22aff8;
        case 0x22affcu: goto label_22affc;
        case 0x22b000u: goto label_22b000;
        case 0x22b004u: goto label_22b004;
        case 0x22b008u: goto label_22b008;
        case 0x22b00cu: goto label_22b00c;
        case 0x22b010u: goto label_22b010;
        case 0x22b014u: goto label_22b014;
        case 0x22b018u: goto label_22b018;
        case 0x22b01cu: goto label_22b01c;
        case 0x22b020u: goto label_22b020;
        case 0x22b024u: goto label_22b024;
        case 0x22b028u: goto label_22b028;
        case 0x22b02cu: goto label_22b02c;
        case 0x22b030u: goto label_22b030;
        case 0x22b034u: goto label_22b034;
        case 0x22b038u: goto label_22b038;
        case 0x22b03cu: goto label_22b03c;
        case 0x22b040u: goto label_22b040;
        case 0x22b044u: goto label_22b044;
        case 0x22b048u: goto label_22b048;
        case 0x22b04cu: goto label_22b04c;
        case 0x22b050u: goto label_22b050;
        case 0x22b054u: goto label_22b054;
        case 0x22b058u: goto label_22b058;
        case 0x22b05cu: goto label_22b05c;
        case 0x22b060u: goto label_22b060;
        case 0x22b064u: goto label_22b064;
        case 0x22b068u: goto label_22b068;
        case 0x22b06cu: goto label_22b06c;
        case 0x22b070u: goto label_22b070;
        case 0x22b074u: goto label_22b074;
        case 0x22b078u: goto label_22b078;
        case 0x22b07cu: goto label_22b07c;
        case 0x22b080u: goto label_22b080;
        case 0x22b084u: goto label_22b084;
        case 0x22b088u: goto label_22b088;
        case 0x22b08cu: goto label_22b08c;
        case 0x22b090u: goto label_22b090;
        case 0x22b094u: goto label_22b094;
        case 0x22b098u: goto label_22b098;
        case 0x22b09cu: goto label_22b09c;
        case 0x22b0a0u: goto label_22b0a0;
        case 0x22b0a4u: goto label_22b0a4;
        case 0x22b0a8u: goto label_22b0a8;
        case 0x22b0acu: goto label_22b0ac;
        case 0x22b0b0u: goto label_22b0b0;
        case 0x22b0b4u: goto label_22b0b4;
        case 0x22b0b8u: goto label_22b0b8;
        case 0x22b0bcu: goto label_22b0bc;
        case 0x22b0c0u: goto label_22b0c0;
        case 0x22b0c4u: goto label_22b0c4;
        case 0x22b0c8u: goto label_22b0c8;
        case 0x22b0ccu: goto label_22b0cc;
        case 0x22b0d0u: goto label_22b0d0;
        case 0x22b0d4u: goto label_22b0d4;
        case 0x22b0d8u: goto label_22b0d8;
        case 0x22b0dcu: goto label_22b0dc;
        case 0x22b0e0u: goto label_22b0e0;
        case 0x22b0e4u: goto label_22b0e4;
        case 0x22b0e8u: goto label_22b0e8;
        case 0x22b0ecu: goto label_22b0ec;
        case 0x22b0f0u: goto label_22b0f0;
        case 0x22b0f4u: goto label_22b0f4;
        case 0x22b0f8u: goto label_22b0f8;
        case 0x22b0fcu: goto label_22b0fc;
        case 0x22b100u: goto label_22b100;
        case 0x22b104u: goto label_22b104;
        case 0x22b108u: goto label_22b108;
        case 0x22b10cu: goto label_22b10c;
        case 0x22b110u: goto label_22b110;
        case 0x22b114u: goto label_22b114;
        case 0x22b118u: goto label_22b118;
        case 0x22b11cu: goto label_22b11c;
        case 0x22b120u: goto label_22b120;
        case 0x22b124u: goto label_22b124;
        case 0x22b128u: goto label_22b128;
        case 0x22b12cu: goto label_22b12c;
        case 0x22b130u: goto label_22b130;
        case 0x22b134u: goto label_22b134;
        case 0x22b138u: goto label_22b138;
        case 0x22b13cu: goto label_22b13c;
        case 0x22b140u: goto label_22b140;
        case 0x22b144u: goto label_22b144;
        case 0x22b148u: goto label_22b148;
        case 0x22b14cu: goto label_22b14c;
        case 0x22b150u: goto label_22b150;
        case 0x22b154u: goto label_22b154;
        case 0x22b158u: goto label_22b158;
        case 0x22b15cu: goto label_22b15c;
        case 0x22b160u: goto label_22b160;
        case 0x22b164u: goto label_22b164;
        case 0x22b168u: goto label_22b168;
        case 0x22b16cu: goto label_22b16c;
        case 0x22b170u: goto label_22b170;
        case 0x22b174u: goto label_22b174;
        case 0x22b178u: goto label_22b178;
        case 0x22b17cu: goto label_22b17c;
        case 0x22b180u: goto label_22b180;
        case 0x22b184u: goto label_22b184;
        case 0x22b188u: goto label_22b188;
        case 0x22b18cu: goto label_22b18c;
        case 0x22b190u: goto label_22b190;
        case 0x22b194u: goto label_22b194;
        case 0x22b198u: goto label_22b198;
        case 0x22b19cu: goto label_22b19c;
        case 0x22b1a0u: goto label_22b1a0;
        case 0x22b1a4u: goto label_22b1a4;
        case 0x22b1a8u: goto label_22b1a8;
        case 0x22b1acu: goto label_22b1ac;
        case 0x22b1b0u: goto label_22b1b0;
        case 0x22b1b4u: goto label_22b1b4;
        case 0x22b1b8u: goto label_22b1b8;
        case 0x22b1bcu: goto label_22b1bc;
        case 0x22b1c0u: goto label_22b1c0;
        case 0x22b1c4u: goto label_22b1c4;
        case 0x22b1c8u: goto label_22b1c8;
        case 0x22b1ccu: goto label_22b1cc;
        case 0x22b1d0u: goto label_22b1d0;
        case 0x22b1d4u: goto label_22b1d4;
        case 0x22b1d8u: goto label_22b1d8;
        case 0x22b1dcu: goto label_22b1dc;
        case 0x22b1e0u: goto label_22b1e0;
        case 0x22b1e4u: goto label_22b1e4;
        case 0x22b1e8u: goto label_22b1e8;
        case 0x22b1ecu: goto label_22b1ec;
        case 0x22b1f0u: goto label_22b1f0;
        case 0x22b1f4u: goto label_22b1f4;
        case 0x22b1f8u: goto label_22b1f8;
        case 0x22b1fcu: goto label_22b1fc;
        case 0x22b200u: goto label_22b200;
        case 0x22b204u: goto label_22b204;
        case 0x22b208u: goto label_22b208;
        case 0x22b20cu: goto label_22b20c;
        case 0x22b210u: goto label_22b210;
        case 0x22b214u: goto label_22b214;
        case 0x22b218u: goto label_22b218;
        case 0x22b21cu: goto label_22b21c;
        case 0x22b220u: goto label_22b220;
        case 0x22b224u: goto label_22b224;
        case 0x22b228u: goto label_22b228;
        case 0x22b22cu: goto label_22b22c;
        case 0x22b230u: goto label_22b230;
        case 0x22b234u: goto label_22b234;
        case 0x22b238u: goto label_22b238;
        case 0x22b23cu: goto label_22b23c;
        case 0x22b240u: goto label_22b240;
        case 0x22b244u: goto label_22b244;
        case 0x22b248u: goto label_22b248;
        case 0x22b24cu: goto label_22b24c;
        case 0x22b250u: goto label_22b250;
        case 0x22b254u: goto label_22b254;
        case 0x22b258u: goto label_22b258;
        case 0x22b25cu: goto label_22b25c;
        case 0x22b260u: goto label_22b260;
        case 0x22b264u: goto label_22b264;
        case 0x22b268u: goto label_22b268;
        case 0x22b26cu: goto label_22b26c;
        case 0x22b270u: goto label_22b270;
        case 0x22b274u: goto label_22b274;
        case 0x22b278u: goto label_22b278;
        case 0x22b27cu: goto label_22b27c;
        case 0x22b280u: goto label_22b280;
        case 0x22b284u: goto label_22b284;
        case 0x22b288u: goto label_22b288;
        case 0x22b28cu: goto label_22b28c;
        case 0x22b290u: goto label_22b290;
        case 0x22b294u: goto label_22b294;
        case 0x22b298u: goto label_22b298;
        case 0x22b29cu: goto label_22b29c;
        case 0x22b2a0u: goto label_22b2a0;
        case 0x22b2a4u: goto label_22b2a4;
        case 0x22b2a8u: goto label_22b2a8;
        case 0x22b2acu: goto label_22b2ac;
        case 0x22b2b0u: goto label_22b2b0;
        case 0x22b2b4u: goto label_22b2b4;
        case 0x22b2b8u: goto label_22b2b8;
        case 0x22b2bcu: goto label_22b2bc;
        case 0x22b2c0u: goto label_22b2c0;
        case 0x22b2c4u: goto label_22b2c4;
        case 0x22b2c8u: goto label_22b2c8;
        case 0x22b2ccu: goto label_22b2cc;
        case 0x22b2d0u: goto label_22b2d0;
        case 0x22b2d4u: goto label_22b2d4;
        case 0x22b2d8u: goto label_22b2d8;
        case 0x22b2dcu: goto label_22b2dc;
        case 0x22b2e0u: goto label_22b2e0;
        case 0x22b2e4u: goto label_22b2e4;
        case 0x22b2e8u: goto label_22b2e8;
        case 0x22b2ecu: goto label_22b2ec;
        case 0x22b2f0u: goto label_22b2f0;
        case 0x22b2f4u: goto label_22b2f4;
        case 0x22b2f8u: goto label_22b2f8;
        case 0x22b2fcu: goto label_22b2fc;
        case 0x22b300u: goto label_22b300;
        case 0x22b304u: goto label_22b304;
        case 0x22b308u: goto label_22b308;
        case 0x22b30cu: goto label_22b30c;
        case 0x22b310u: goto label_22b310;
        case 0x22b314u: goto label_22b314;
        case 0x22b318u: goto label_22b318;
        case 0x22b31cu: goto label_22b31c;
        case 0x22b320u: goto label_22b320;
        case 0x22b324u: goto label_22b324;
        case 0x22b328u: goto label_22b328;
        case 0x22b32cu: goto label_22b32c;
        case 0x22b330u: goto label_22b330;
        case 0x22b334u: goto label_22b334;
        case 0x22b338u: goto label_22b338;
        case 0x22b33cu: goto label_22b33c;
        case 0x22b340u: goto label_22b340;
        case 0x22b344u: goto label_22b344;
        case 0x22b348u: goto label_22b348;
        case 0x22b34cu: goto label_22b34c;
        case 0x22b350u: goto label_22b350;
        case 0x22b354u: goto label_22b354;
        case 0x22b358u: goto label_22b358;
        case 0x22b35cu: goto label_22b35c;
        case 0x22b360u: goto label_22b360;
        case 0x22b364u: goto label_22b364;
        case 0x22b368u: goto label_22b368;
        case 0x22b36cu: goto label_22b36c;
        default: break;
    }

    ctx->pc = 0x22afc0u;

label_22afc0:
    // 0x22afc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_22afc4:
    // 0x22afc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22afc8:
    // 0x22afc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22afcc:
    // 0x22afcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22afccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22afd0:
    // 0x22afd0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22afd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22afd4:
    // 0x22afd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22afd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22afd8:
    // 0x22afd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22afd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22afdc:
    // 0x22afdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22afdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22afe0:
    // 0x22afe0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x22afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_22afe4:
    // 0x22afe4: 0x108000da  beqz        $a0, . + 4 + (0xDA << 2)
label_22afe8:
    if (ctx->pc == 0x22AFE8u) {
        ctx->pc = 0x22AFE8u;
            // 0x22afe8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22AFECu;
        goto label_22afec;
    }
    ctx->pc = 0x22AFE4u;
    {
        const bool branch_taken_0x22afe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFE4u;
            // 0x22afe8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afe4) {
            ctx->pc = 0x22B350u;
            goto label_22b350;
        }
    }
    ctx->pc = 0x22AFECu;
label_22afec:
    // 0x22afec: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x22afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_22aff0:
    // 0x22aff0: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x22aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_22aff4:
    // 0x22aff4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x22aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22aff8:
    // 0x22aff8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_22affc:
    if (ctx->pc == 0x22AFFCu) {
        ctx->pc = 0x22AFFCu;
            // 0x22affc: 0x8c860084  lw          $a2, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->pc = 0x22B000u;
        goto label_22b000;
    }
    ctx->pc = 0x22AFF8u;
    {
        const bool branch_taken_0x22aff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aff8) {
            ctx->pc = 0x22AFFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFF8u;
            // 0x22affc: 0x8c860084  lw          $a2, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B020u;
            goto label_22b020;
        }
    }
    ctx->pc = 0x22B000u;
label_22b000:
    // 0x22b000: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x22b000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_22b004:
    // 0x22b004: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22b008:
    // 0x22b008: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x22b008u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
label_22b00c:
    // 0x22b00c: 0xafb40084  sw          $s4, 0x84($sp)
    ctx->pc = 0x22b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 20));
label_22b010:
    // 0x22b010: 0xc08d1cc  jal         func_234730
label_22b014:
    if (ctx->pc == 0x22B014u) {
        ctx->pc = 0x22B014u;
            // 0x22b014: 0xafb30088  sw          $s3, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 19));
        ctx->pc = 0x22B018u;
        goto label_22b018;
    }
    ctx->pc = 0x22B010u;
    SET_GPR_U32(ctx, 31, 0x22B018u);
    ctx->pc = 0x22B014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B010u;
            // 0x22b014: 0xafb30088  sw          $s3, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B018u; }
        if (ctx->pc != 0x22B018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B018u; }
        if (ctx->pc != 0x22B018u) { return; }
    }
    ctx->pc = 0x22B018u;
label_22b018:
    // 0x22b018: 0x100000ce  b           . + 4 + (0xCE << 2)
label_22b01c:
    if (ctx->pc == 0x22B01Cu) {
        ctx->pc = 0x22B01Cu;
            // 0x22b01c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x22B020u;
        goto label_22b020;
    }
    ctx->pc = 0x22B018u;
    {
        const bool branch_taken_0x22b018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B018u;
            // 0x22b01c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b018) {
            ctx->pc = 0x22B354u;
            goto label_22b354;
        }
    }
    ctx->pc = 0x22B020u;
label_22b020:
    // 0x22b020: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b024:
    // 0x22b024: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x22b024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_22b028:
    // 0x22b028: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x22b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_22b02c:
    // 0x22b02c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22b02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22b030:
    // 0x22b030: 0xac860084  sw          $a2, 0x84($a0)
    ctx->pc = 0x22b030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 6));
label_22b034:
    // 0x22b034: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b038:
    // 0x22b038: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x22b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_22b03c:
    // 0x22b03c: 0x8c50031c  lw          $s0, 0x31C($v0)
    ctx->pc = 0x22b03cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
label_22b040:
    // 0x22b040: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x22b040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_22b044:
    // 0x22b044: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x22b044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_22b048:
    // 0x22b048: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x22b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_22b04c:
    // 0x22b04c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x22b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_22b050:
    // 0x22b050: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x22b050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_22b054:
    // 0x22b054: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x22b054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_22b058:
    // 0x22b058: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_22b05c:
    // 0x22b05c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x22b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_22b060:
    // 0x22b060: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_22b064:
    // 0x22b064: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x22b064u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_22b068:
    // 0x22b068: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_22b06c:
    if (ctx->pc == 0x22B06Cu) {
        ctx->pc = 0x22B06Cu;
            // 0x22b06c: 0x27b20070  addiu       $s2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22B070u;
        goto label_22b070;
    }
    ctx->pc = 0x22B068u;
    {
        const bool branch_taken_0x22b068 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B068u;
            // 0x22b06c: 0x27b20070  addiu       $s2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b068) {
            ctx->pc = 0x22B078u;
            goto label_22b078;
        }
    }
    ctx->pc = 0x22B070u;
label_22b070:
    // 0x22b070: 0x10000005  b           . + 4 + (0x5 << 2)
label_22b074:
    if (ctx->pc == 0x22B074u) {
        ctx->pc = 0x22B074u;
            // 0x22b074: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x22B078u;
        goto label_22b078;
    }
    ctx->pc = 0x22B070u;
    {
        const bool branch_taken_0x22b070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B070u;
            // 0x22b074: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b070) {
            ctx->pc = 0x22B088u;
            goto label_22b088;
        }
    }
    ctx->pc = 0x22B078u;
label_22b078:
    // 0x22b078: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22b078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b07c:
    // 0x22b07c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x22b07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_22b080:
    // 0x22b080: 0x320f809  jalr        $t9
label_22b084:
    if (ctx->pc == 0x22B084u) {
        ctx->pc = 0x22B088u;
        goto label_22b088;
    }
    ctx->pc = 0x22B080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B088u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B088u; }
            if (ctx->pc != 0x22B088u) { return; }
        }
        }
    }
    ctx->pc = 0x22B088u;
label_22b088:
    // 0x22b088: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x22b088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_22b08c:
    // 0x22b08c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x22b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_22b090:
    // 0x22b090: 0x2051025  or          $v0, $s0, $a1
    ctx->pc = 0x22b090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
label_22b094:
    // 0x22b094: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x22b094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_22b098:
    // 0x22b098: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b09c:
    // 0x22b09c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b0a0:
    // 0x22b0a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b0a4:
    // 0x22b0a4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x22b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_22b0a8:
    // 0x22b0a8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x22b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_22b0ac:
    // 0x22b0ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x22b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_22b0b0:
    // 0x22b0b0: 0x8c70031c  lw          $s0, 0x31C($v1)
    ctx->pc = 0x22b0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 796)));
label_22b0b4:
    // 0x22b0b4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x22b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_22b0b8:
    // 0x22b0b8: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x22b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_22b0bc:
    // 0x22b0bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x22b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_22b0c0:
    // 0x22b0c0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x22b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_22b0c4:
    // 0x22b0c4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x22b0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22b0c8:
    // 0x22b0c8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x22b0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_22b0cc:
    // 0x22b0cc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_22b0d0:
    // 0x22b0d0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x22b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_22b0d4:
    // 0x22b0d4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x22b0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_22b0d8:
    // 0x22b0d8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x22b0d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_22b0dc:
    // 0x22b0dc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_22b0e0:
    if (ctx->pc == 0x22B0E0u) {
        ctx->pc = 0x22B0E0u;
            // 0x22b0e0: 0x27b10060  addiu       $s1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22B0E4u;
        goto label_22b0e4;
    }
    ctx->pc = 0x22B0DCu;
    {
        const bool branch_taken_0x22b0dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B0DCu;
            // 0x22b0e0: 0x27b10060  addiu       $s1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0dc) {
            ctx->pc = 0x22B0ECu;
            goto label_22b0ec;
        }
    }
    ctx->pc = 0x22B0E4u;
label_22b0e4:
    // 0x22b0e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_22b0e8:
    if (ctx->pc == 0x22B0E8u) {
        ctx->pc = 0x22B0E8u;
            // 0x22b0e8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x22B0ECu;
        goto label_22b0ec;
    }
    ctx->pc = 0x22B0E4u;
    {
        const bool branch_taken_0x22b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B0E4u;
            // 0x22b0e8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0e4) {
            ctx->pc = 0x22B0FCu;
            goto label_22b0fc;
        }
    }
    ctx->pc = 0x22B0ECu;
label_22b0ec:
    // 0x22b0ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22b0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b0f0:
    // 0x22b0f0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x22b0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_22b0f4:
    // 0x22b0f4: 0x320f809  jalr        $t9
label_22b0f8:
    if (ctx->pc == 0x22B0F8u) {
        ctx->pc = 0x22B0FCu;
        goto label_22b0fc;
    }
    ctx->pc = 0x22B0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B0FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B0FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B0FCu; }
            if (ctx->pc != 0x22B0FCu) { return; }
        }
        }
    }
    ctx->pc = 0x22B0FCu;
label_22b0fc:
    // 0x22b0fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22b100:
    // 0x22b100: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22b100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_22b104:
    // 0x22b104: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x22b104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_22b108:
    // 0x22b108: 0x26820024  addiu       $v0, $s4, 0x24
    ctx->pc = 0x22b108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_22b10c:
    // 0x22b10c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x22b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_22b110:
    // 0x22b110: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x22b110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_22b114:
    // 0x22b114: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22b114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22b118:
    // 0x22b118: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x22b118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_22b11c:
    // 0x22b11c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x22b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_22b120:
    // 0x22b120: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x22b120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_22b124:
    // 0x22b124: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x22b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22b128:
    // 0x22b128: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22b12c:
    if (ctx->pc == 0x22B12Cu) {
        ctx->pc = 0x22B12Cu;
            // 0x22b12c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x22B130u;
        goto label_22b130;
    }
    ctx->pc = 0x22B128u;
    {
        const bool branch_taken_0x22b128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b128) {
            ctx->pc = 0x22B12Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B128u;
            // 0x22b12c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B13Cu;
            goto label_22b13c;
        }
    }
    ctx->pc = 0x22B130u;
label_22b130:
    // 0x22b130: 0xc09733c  jal         func_25CCF0
label_22b134:
    if (ctx->pc == 0x22B134u) {
        ctx->pc = 0x22B138u;
        goto label_22b138;
    }
    ctx->pc = 0x22B130u;
    SET_GPR_U32(ctx, 31, 0x22B138u);
    ctx->pc = 0x25CCF0u;
    if (runtime->hasFunction(0x25CCF0u)) {
        auto targetFn = runtime->lookupFunction(0x25CCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B138u; }
        if (ctx->pc != 0x22B138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CCF0_0x25ccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B138u; }
        if (ctx->pc != 0x22B138u) { return; }
    }
    ctx->pc = 0x22B138u;
label_22b138:
    // 0x22b138: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x22b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_22b13c:
    // 0x22b13c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22b13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22b140:
    // 0x22b140: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x22b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_22b144:
    // 0x22b144: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22b144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b148:
    // 0x22b148: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x22b148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22b14c:
    // 0x22b14c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x22b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_22b150:
    // 0x22b150: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22b150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b154:
    // 0x22b154: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x22b154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_22b158:
    // 0x22b158: 0x320f809  jalr        $t9
label_22b15c:
    if (ctx->pc == 0x22B15Cu) {
        ctx->pc = 0x22B15Cu;
            // 0x22b15c: 0x27a90060  addiu       $t1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22B160u;
        goto label_22b160;
    }
    ctx->pc = 0x22B158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B160u);
        ctx->pc = 0x22B15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B158u;
            // 0x22b15c: 0x27a90060  addiu       $t1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B160u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B160u; }
            if (ctx->pc != 0x22B160u) { return; }
        }
        }
    }
    ctx->pc = 0x22B160u;
label_22b160:
    // 0x22b160: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x22b160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_22b164:
    // 0x22b164: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_22b168:
    if (ctx->pc == 0x22B168u) {
        ctx->pc = 0x22B168u;
            // 0x22b168: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x22B16Cu;
        goto label_22b16c;
    }
    ctx->pc = 0x22B164u;
    {
        const bool branch_taken_0x22b164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b164) {
            ctx->pc = 0x22B168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B164u;
            // 0x22b168: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B17Cu;
            goto label_22b17c;
        }
    }
    ctx->pc = 0x22B16Cu;
label_22b16c:
    // 0x22b16c: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x22b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_22b170:
    // 0x22b170: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_22b174:
    if (ctx->pc == 0x22B174u) {
        ctx->pc = 0x22B178u;
        goto label_22b178;
    }
    ctx->pc = 0x22B170u;
    {
        const bool branch_taken_0x22b170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b170) {
            ctx->pc = 0x22B238u;
            goto label_22b238;
        }
    }
    ctx->pc = 0x22B178u;
label_22b178:
    // 0x22b178: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22b178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_22b17c:
    // 0x22b17c: 0xc07fb8c  jal         func_1FEE30
label_22b180:
    if (ctx->pc == 0x22B180u) {
        ctx->pc = 0x22B180u;
            // 0x22b180: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22B184u;
        goto label_22b184;
    }
    ctx->pc = 0x22B17Cu;
    SET_GPR_U32(ctx, 31, 0x22B184u);
    ctx->pc = 0x22B180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B17Cu;
            // 0x22b180: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE30u;
    if (runtime->hasFunction(0x1FEE30u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B184u; }
        if (ctx->pc != 0x22B184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEE30_0x1fee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B184u; }
        if (ctx->pc != 0x22B184u) { return; }
    }
    ctx->pc = 0x22B184u;
label_22b184:
    // 0x22b184: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x22b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_22b188:
    // 0x22b188: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x22b188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_22b18c:
    // 0x22b18c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x22b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_22b190:
    // 0x22b190: 0xc07fb6c  jal         func_1FEDB0
label_22b194:
    if (ctx->pc == 0x22B194u) {
        ctx->pc = 0x22B194u;
            // 0x22b194: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x22B198u;
        goto label_22b198;
    }
    ctx->pc = 0x22B190u;
    SET_GPR_U32(ctx, 31, 0x22B198u);
    ctx->pc = 0x22B194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B190u;
            // 0x22b194: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB0u;
    if (runtime->hasFunction(0x1FEDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B198u; }
        if (ctx->pc != 0x22B198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEDB0_0x1fedb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B198u; }
        if (ctx->pc != 0x22B198u) { return; }
    }
    ctx->pc = 0x22B198u;
label_22b198:
    // 0x22b198: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x22b198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_22b19c:
    // 0x22b19c: 0x8c470070  lw          $a3, 0x70($v0)
    ctx->pc = 0x22b19cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_22b1a0:
    // 0x22b1a0: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_22b1a4:
    if (ctx->pc == 0x22B1A4u) {
        ctx->pc = 0x22B1A4u;
            // 0x22b1a4: 0x8c440058  lw          $a0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->pc = 0x22B1A8u;
        goto label_22b1a8;
    }
    ctx->pc = 0x22B1A0u;
    {
        const bool branch_taken_0x22b1a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b1a0) {
            ctx->pc = 0x22B1A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B1A0u;
            // 0x22b1a4: 0x8c440058  lw          $a0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B1B0u;
            goto label_22b1b0;
        }
    }
    ctx->pc = 0x22B1A8u;
label_22b1a8:
    // 0x22b1a8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x22b1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_22b1ac:
    // 0x22b1ac: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x22b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_22b1b0:
    // 0x22b1b0: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x22b1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_22b1b4:
    // 0x22b1b4: 0xc07fb38  jal         func_1FECE0
label_22b1b8:
    if (ctx->pc == 0x22B1B8u) {
        ctx->pc = 0x22B1B8u;
            // 0x22b1b8: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x22B1BCu;
        goto label_22b1bc;
    }
    ctx->pc = 0x22B1B4u;
    SET_GPR_U32(ctx, 31, 0x22B1BCu);
    ctx->pc = 0x22B1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B1B4u;
            // 0x22b1b8: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (runtime->hasFunction(0x1FECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B1BCu; }
        if (ctx->pc != 0x22B1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FECE0_0x1fece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B1BCu; }
        if (ctx->pc != 0x22B1BCu) { return; }
    }
    ctx->pc = 0x22B1BCu;
label_22b1bc:
    // 0x22b1bc: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x22b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_22b1c0:
    // 0x22b1c0: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x22b1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22b1c4:
    // 0x22b1c4: 0x500001c  bltz        $t0, . + 4 + (0x1C << 2)
label_22b1c8:
    if (ctx->pc == 0x22B1C8u) {
        ctx->pc = 0x22B1CCu;
        goto label_22b1cc;
    }
    ctx->pc = 0x22B1C4u;
    {
        const bool branch_taken_0x22b1c4 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x22b1c4) {
            ctx->pc = 0x22B238u;
            goto label_22b238;
        }
    }
    ctx->pc = 0x22B1CCu;
label_22b1cc:
    // 0x22b1cc: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x22b1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22b1d0:
    // 0x22b1d0: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x22b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_22b1d4:
    // 0x22b1d4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22b1d8:
    // 0x22b1d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22b1dc:
    // 0x22b1dc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_22b1e0:
    if (ctx->pc == 0x22B1E0u) {
        ctx->pc = 0x22B1E4u;
        goto label_22b1e4;
    }
    ctx->pc = 0x22B1DCu;
    {
        const bool branch_taken_0x22b1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b1dc) {
            ctx->pc = 0x22B228u;
            goto label_22b228;
        }
    }
    ctx->pc = 0x22B1E4u;
label_22b1e4:
    // 0x22b1e4: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x22b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_22b1e8:
    // 0x22b1e8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x22b1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_22b1ec:
    // 0x22b1ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22b1f0:
    // 0x22b1f0: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x22b1f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22b1f4:
    // 0x22b1f4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_22b1f8:
    if (ctx->pc == 0x22B1F8u) {
        ctx->pc = 0x22B1F8u;
            // 0x22b1f8: 0xae83005c  sw          $v1, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
        ctx->pc = 0x22B1FCu;
        goto label_22b1fc;
    }
    ctx->pc = 0x22B1F4u;
    {
        const bool branch_taken_0x22b1f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B1F4u;
            // 0x22b1f8: 0xae83005c  sw          $v1, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1f4) {
            ctx->pc = 0x22B228u;
            goto label_22b228;
        }
    }
    ctx->pc = 0x22B1FCu;
label_22b1fc:
    // 0x22b1fc: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x22b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_22b200:
    // 0x22b200: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x22b200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_22b204:
    // 0x22b204: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22b208:
    // 0x22b208: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x22b208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22b20c:
    // 0x22b20c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_22b210:
    // 0x22b210: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22b210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_22b214:
    // 0x22b214: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x22b214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_22b218:
    // 0x22b218: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x22b218u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22b21c:
    // 0x22b21c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_22b220:
    if (ctx->pc == 0x22B220u) {
        ctx->pc = 0x22B220u;
            // 0x22b220: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x22B224u;
        goto label_22b224;
    }
    ctx->pc = 0x22B21Cu;
    {
        const bool branch_taken_0x22b21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B21Cu;
            // 0x22b220: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b21c) {
            ctx->pc = 0x22B200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b200;
        }
    }
    ctx->pc = 0x22B224u;
label_22b224:
    // 0x22b224: 0x0  nop
    ctx->pc = 0x22b224u;
    // NOP
label_22b228:
    // 0x22b228: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x22b228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_22b22c:
    // 0x22b22c: 0x501ffe8  bgez        $t0, . + 4 + (-0x18 << 2)
label_22b230:
    if (ctx->pc == 0x22B230u) {
        ctx->pc = 0x22B230u;
            // 0x22b230: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x22B234u;
        goto label_22b234;
    }
    ctx->pc = 0x22B22Cu;
    {
        const bool branch_taken_0x22b22c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x22B230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B22Cu;
            // 0x22b230: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b22c) {
            ctx->pc = 0x22B1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b1d0;
        }
    }
    ctx->pc = 0x22B234u;
label_22b234:
    // 0x22b234: 0x0  nop
    ctx->pc = 0x22b234u;
    // NOP
label_22b238:
    // 0x22b238: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x22b238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_22b23c:
    // 0x22b23c: 0x8c640054  lw          $a0, 0x54($v1)
    ctx->pc = 0x22b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_22b240:
    // 0x22b240: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x22b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_22b244:
    // 0x22b244: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_22b248:
    if (ctx->pc == 0x22B248u) {
        ctx->pc = 0x22B248u;
            // 0x22b248: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x22B24Cu;
        goto label_22b24c;
    }
    ctx->pc = 0x22B244u;
    {
        const bool branch_taken_0x22b244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b244) {
            ctx->pc = 0x22B248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B244u;
            // 0x22b248: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B258u;
            goto label_22b258;
        }
    }
    ctx->pc = 0x22B24Cu;
label_22b24c:
    // 0x22b24c: 0xc097340  jal         func_25CD00
label_22b250:
    if (ctx->pc == 0x22B250u) {
        ctx->pc = 0x22B254u;
        goto label_22b254;
    }
    ctx->pc = 0x22B24Cu;
    SET_GPR_U32(ctx, 31, 0x22B254u);
    ctx->pc = 0x25CD00u;
    if (runtime->hasFunction(0x25CD00u)) {
        auto targetFn = runtime->lookupFunction(0x25CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B254u; }
        if (ctx->pc != 0x22B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD00_0x25cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B254u; }
        if (ctx->pc != 0x22B254u) { return; }
    }
    ctx->pc = 0x22B254u;
label_22b254:
    // 0x22b254: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x22b254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_22b258:
    // 0x22b258: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x22b258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_22b25c:
    // 0x22b25c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_22b260:
    // 0x22b260: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_22b264:
    if (ctx->pc == 0x22B264u) {
        ctx->pc = 0x22B264u;
            // 0x22b264: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x22B268u;
        goto label_22b268;
    }
    ctx->pc = 0x22B260u;
    {
        const bool branch_taken_0x22b260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B260u;
            // 0x22b264: 0xac830084  sw          $v1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b260) {
            ctx->pc = 0x22B288u;
            goto label_22b288;
        }
    }
    ctx->pc = 0x22B268u;
label_22b268:
    // 0x22b268: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x22b268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_22b26c:
    // 0x22b26c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_22b270:
    if (ctx->pc == 0x22B270u) {
        ctx->pc = 0x22B274u;
        goto label_22b274;
    }
    ctx->pc = 0x22B26Cu;
    {
        const bool branch_taken_0x22b26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b26c) {
            ctx->pc = 0x22B288u;
            goto label_22b288;
        }
    }
    ctx->pc = 0x22B274u;
label_22b274:
    // 0x22b274: 0x8083008c  lb          $v1, 0x8C($a0)
    ctx->pc = 0x22b274u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_22b278:
    // 0x22b278: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22b27c:
    if (ctx->pc == 0x22B27Cu) {
        ctx->pc = 0x22B280u;
        goto label_22b280;
    }
    ctx->pc = 0x22B278u;
    {
        const bool branch_taken_0x22b278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b278) {
            ctx->pc = 0x22B288u;
            goto label_22b288;
        }
    }
    ctx->pc = 0x22B280u;
label_22b280:
    // 0x22b280: 0xc08d1c4  jal         func_234710
label_22b284:
    if (ctx->pc == 0x22B284u) {
        ctx->pc = 0x22B288u;
        goto label_22b288;
    }
    ctx->pc = 0x22B280u;
    SET_GPR_U32(ctx, 31, 0x22B288u);
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B288u; }
        if (ctx->pc != 0x22B288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B288u; }
        if (ctx->pc != 0x22B288u) { return; }
    }
    ctx->pc = 0x22B288u;
label_22b288:
    // 0x22b288: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22b288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22b28c:
    // 0x22b28c: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x22b28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_22b290:
    // 0x22b290: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x22b290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_22b294:
    // 0x22b294: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x22b294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_22b298:
    // 0x22b298: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x22b298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_22b29c:
    // 0x22b29c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_22b2a0:
    if (ctx->pc == 0x22B2A0u) {
        ctx->pc = 0x22B2A0u;
            // 0x22b2a0: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->pc = 0x22B2A4u;
        goto label_22b2a4;
    }
    ctx->pc = 0x22B29Cu;
    {
        const bool branch_taken_0x22b29c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b29c) {
            ctx->pc = 0x22B2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B29Cu;
            // 0x22b2a0: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B2B8u;
            goto label_22b2b8;
        }
    }
    ctx->pc = 0x22B2A4u;
label_22b2a4:
    // 0x22b2a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22b2a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b2a8:
    // 0x22b2a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22b2a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22b2ac:
    // 0x22b2ac: 0x320f809  jalr        $t9
label_22b2b0:
    if (ctx->pc == 0x22B2B0u) {
        ctx->pc = 0x22B2B4u;
        goto label_22b2b4;
    }
    ctx->pc = 0x22B2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B2B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B2B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B2B4u; }
            if (ctx->pc != 0x22B2B4u) { return; }
        }
        }
    }
    ctx->pc = 0x22B2B4u;
label_22b2b4:
    // 0x22b2b4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x22b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_22b2b8:
    // 0x22b2b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22b2bc:
    // 0x22b2bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22b2c0:
    // 0x22b2c0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_22b2c4:
    if (ctx->pc == 0x22B2C4u) {
        ctx->pc = 0x22B2C8u;
        goto label_22b2c8;
    }
    ctx->pc = 0x22B2C0u;
    {
        const bool branch_taken_0x22b2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b2c0) {
            ctx->pc = 0x22B2ECu;
            goto label_22b2ec;
        }
    }
    ctx->pc = 0x22B2C8u;
label_22b2c8:
    // 0x22b2c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b2cc:
    // 0x22b2cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x22b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_22b2d0:
    // 0x22b2d0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b2d4:
    // 0x22b2d4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22b2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22b2d8:
    // 0x22b2d8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x22b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_22b2dc:
    // 0x22b2dc: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22b2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22b2e0:
    // 0x22b2e0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b2e4:
    // 0x22b2e4: 0xc0a7ab4  jal         func_29EAD0
label_22b2e8:
    if (ctx->pc == 0x22B2E8u) {
        ctx->pc = 0x22B2E8u;
            // 0x22b2e8: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x22B2ECu;
        goto label_22b2ec;
    }
    ctx->pc = 0x22B2E4u;
    SET_GPR_U32(ctx, 31, 0x22B2ECu);
    ctx->pc = 0x22B2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B2E4u;
            // 0x22b2e8: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B2ECu; }
        if (ctx->pc != 0x22B2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B2ECu; }
        if (ctx->pc != 0x22B2ECu) { return; }
    }
    ctx->pc = 0x22B2ECu;
label_22b2ec:
    // 0x22b2ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22b2f0:
    // 0x22b2f0: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x22b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_22b2f4:
    // 0x22b2f4: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x22b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_22b2f8:
    // 0x22b2f8: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x22b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_22b2fc:
    // 0x22b2fc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x22b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_22b300:
    // 0x22b300: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_22b304:
    if (ctx->pc == 0x22B304u) {
        ctx->pc = 0x22B304u;
            // 0x22b304: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x22B308u;
        goto label_22b308;
    }
    ctx->pc = 0x22B300u;
    {
        const bool branch_taken_0x22b300 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x22b300) {
            ctx->pc = 0x22B304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22B300u;
            // 0x22b304: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22B31Cu;
            goto label_22b31c;
        }
    }
    ctx->pc = 0x22B308u;
label_22b308:
    // 0x22b308: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22b308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22b30c:
    // 0x22b30c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22b30cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_22b310:
    // 0x22b310: 0x320f809  jalr        $t9
label_22b314:
    if (ctx->pc == 0x22B314u) {
        ctx->pc = 0x22B318u;
        goto label_22b318;
    }
    ctx->pc = 0x22B310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22B318u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22B318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22B318u; }
            if (ctx->pc != 0x22B318u) { return; }
        }
        }
    }
    ctx->pc = 0x22B318u;
label_22b318:
    // 0x22b318: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22b31c:
    // 0x22b31c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x22b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_22b320:
    // 0x22b320: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_22b324:
    // 0x22b324: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_22b328:
    if (ctx->pc == 0x22B328u) {
        ctx->pc = 0x22B32Cu;
        goto label_22b32c;
    }
    ctx->pc = 0x22B324u;
    {
        const bool branch_taken_0x22b324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b324) {
            ctx->pc = 0x22B350u;
            goto label_22b350;
        }
    }
    ctx->pc = 0x22B32Cu;
label_22b32c:
    // 0x22b32c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22b330:
    // 0x22b330: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22b330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_22b334:
    // 0x22b334: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22b334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22b338:
    // 0x22b338: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x22b338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22b33c:
    // 0x22b33c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x22b33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_22b340:
    // 0x22b340: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x22b340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22b344:
    // 0x22b344: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22b344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_22b348:
    // 0x22b348: 0xc0a7ab4  jal         func_29EAD0
label_22b34c:
    if (ctx->pc == 0x22B34Cu) {
        ctx->pc = 0x22B34Cu;
            // 0x22b34c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x22B350u;
        goto label_22b350;
    }
    ctx->pc = 0x22B348u;
    SET_GPR_U32(ctx, 31, 0x22B350u);
    ctx->pc = 0x22B34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B348u;
            // 0x22b34c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B350u; }
        if (ctx->pc != 0x22B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B350u; }
        if (ctx->pc != 0x22B350u) { return; }
    }
    ctx->pc = 0x22B350u;
label_22b350:
    // 0x22b350: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22b350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22b354:
    // 0x22b354: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22b354u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22b358:
    // 0x22b358: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22b358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b35c:
    // 0x22b35c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b360:
    // 0x22b360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b364:
    // 0x22b364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22b368:
    // 0x22b368: 0x3e00008  jr          $ra
label_22b36c:
    if (ctx->pc == 0x22B36Cu) {
        ctx->pc = 0x22B36Cu;
            // 0x22b36c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x22B370u;
        goto label_fallthrough_0x22b368;
    }
    ctx->pc = 0x22B368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B368u;
            // 0x22b36c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22b368:
    ctx->pc = 0x22B370u;
}
