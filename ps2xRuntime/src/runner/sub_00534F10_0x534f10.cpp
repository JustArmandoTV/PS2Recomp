#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00534F10
// Address: 0x534f10 - 0x535380
void sub_00534F10_0x534f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00534F10_0x534f10");
#endif

    switch (ctx->pc) {
        case 0x534f10u: goto label_534f10;
        case 0x534f14u: goto label_534f14;
        case 0x534f18u: goto label_534f18;
        case 0x534f1cu: goto label_534f1c;
        case 0x534f20u: goto label_534f20;
        case 0x534f24u: goto label_534f24;
        case 0x534f28u: goto label_534f28;
        case 0x534f2cu: goto label_534f2c;
        case 0x534f30u: goto label_534f30;
        case 0x534f34u: goto label_534f34;
        case 0x534f38u: goto label_534f38;
        case 0x534f3cu: goto label_534f3c;
        case 0x534f40u: goto label_534f40;
        case 0x534f44u: goto label_534f44;
        case 0x534f48u: goto label_534f48;
        case 0x534f4cu: goto label_534f4c;
        case 0x534f50u: goto label_534f50;
        case 0x534f54u: goto label_534f54;
        case 0x534f58u: goto label_534f58;
        case 0x534f5cu: goto label_534f5c;
        case 0x534f60u: goto label_534f60;
        case 0x534f64u: goto label_534f64;
        case 0x534f68u: goto label_534f68;
        case 0x534f6cu: goto label_534f6c;
        case 0x534f70u: goto label_534f70;
        case 0x534f74u: goto label_534f74;
        case 0x534f78u: goto label_534f78;
        case 0x534f7cu: goto label_534f7c;
        case 0x534f80u: goto label_534f80;
        case 0x534f84u: goto label_534f84;
        case 0x534f88u: goto label_534f88;
        case 0x534f8cu: goto label_534f8c;
        case 0x534f90u: goto label_534f90;
        case 0x534f94u: goto label_534f94;
        case 0x534f98u: goto label_534f98;
        case 0x534f9cu: goto label_534f9c;
        case 0x534fa0u: goto label_534fa0;
        case 0x534fa4u: goto label_534fa4;
        case 0x534fa8u: goto label_534fa8;
        case 0x534facu: goto label_534fac;
        case 0x534fb0u: goto label_534fb0;
        case 0x534fb4u: goto label_534fb4;
        case 0x534fb8u: goto label_534fb8;
        case 0x534fbcu: goto label_534fbc;
        case 0x534fc0u: goto label_534fc0;
        case 0x534fc4u: goto label_534fc4;
        case 0x534fc8u: goto label_534fc8;
        case 0x534fccu: goto label_534fcc;
        case 0x534fd0u: goto label_534fd0;
        case 0x534fd4u: goto label_534fd4;
        case 0x534fd8u: goto label_534fd8;
        case 0x534fdcu: goto label_534fdc;
        case 0x534fe0u: goto label_534fe0;
        case 0x534fe4u: goto label_534fe4;
        case 0x534fe8u: goto label_534fe8;
        case 0x534fecu: goto label_534fec;
        case 0x534ff0u: goto label_534ff0;
        case 0x534ff4u: goto label_534ff4;
        case 0x534ff8u: goto label_534ff8;
        case 0x534ffcu: goto label_534ffc;
        case 0x535000u: goto label_535000;
        case 0x535004u: goto label_535004;
        case 0x535008u: goto label_535008;
        case 0x53500cu: goto label_53500c;
        case 0x535010u: goto label_535010;
        case 0x535014u: goto label_535014;
        case 0x535018u: goto label_535018;
        case 0x53501cu: goto label_53501c;
        case 0x535020u: goto label_535020;
        case 0x535024u: goto label_535024;
        case 0x535028u: goto label_535028;
        case 0x53502cu: goto label_53502c;
        case 0x535030u: goto label_535030;
        case 0x535034u: goto label_535034;
        case 0x535038u: goto label_535038;
        case 0x53503cu: goto label_53503c;
        case 0x535040u: goto label_535040;
        case 0x535044u: goto label_535044;
        case 0x535048u: goto label_535048;
        case 0x53504cu: goto label_53504c;
        case 0x535050u: goto label_535050;
        case 0x535054u: goto label_535054;
        case 0x535058u: goto label_535058;
        case 0x53505cu: goto label_53505c;
        case 0x535060u: goto label_535060;
        case 0x535064u: goto label_535064;
        case 0x535068u: goto label_535068;
        case 0x53506cu: goto label_53506c;
        case 0x535070u: goto label_535070;
        case 0x535074u: goto label_535074;
        case 0x535078u: goto label_535078;
        case 0x53507cu: goto label_53507c;
        case 0x535080u: goto label_535080;
        case 0x535084u: goto label_535084;
        case 0x535088u: goto label_535088;
        case 0x53508cu: goto label_53508c;
        case 0x535090u: goto label_535090;
        case 0x535094u: goto label_535094;
        case 0x535098u: goto label_535098;
        case 0x53509cu: goto label_53509c;
        case 0x5350a0u: goto label_5350a0;
        case 0x5350a4u: goto label_5350a4;
        case 0x5350a8u: goto label_5350a8;
        case 0x5350acu: goto label_5350ac;
        case 0x5350b0u: goto label_5350b0;
        case 0x5350b4u: goto label_5350b4;
        case 0x5350b8u: goto label_5350b8;
        case 0x5350bcu: goto label_5350bc;
        case 0x5350c0u: goto label_5350c0;
        case 0x5350c4u: goto label_5350c4;
        case 0x5350c8u: goto label_5350c8;
        case 0x5350ccu: goto label_5350cc;
        case 0x5350d0u: goto label_5350d0;
        case 0x5350d4u: goto label_5350d4;
        case 0x5350d8u: goto label_5350d8;
        case 0x5350dcu: goto label_5350dc;
        case 0x5350e0u: goto label_5350e0;
        case 0x5350e4u: goto label_5350e4;
        case 0x5350e8u: goto label_5350e8;
        case 0x5350ecu: goto label_5350ec;
        case 0x5350f0u: goto label_5350f0;
        case 0x5350f4u: goto label_5350f4;
        case 0x5350f8u: goto label_5350f8;
        case 0x5350fcu: goto label_5350fc;
        case 0x535100u: goto label_535100;
        case 0x535104u: goto label_535104;
        case 0x535108u: goto label_535108;
        case 0x53510cu: goto label_53510c;
        case 0x535110u: goto label_535110;
        case 0x535114u: goto label_535114;
        case 0x535118u: goto label_535118;
        case 0x53511cu: goto label_53511c;
        case 0x535120u: goto label_535120;
        case 0x535124u: goto label_535124;
        case 0x535128u: goto label_535128;
        case 0x53512cu: goto label_53512c;
        case 0x535130u: goto label_535130;
        case 0x535134u: goto label_535134;
        case 0x535138u: goto label_535138;
        case 0x53513cu: goto label_53513c;
        case 0x535140u: goto label_535140;
        case 0x535144u: goto label_535144;
        case 0x535148u: goto label_535148;
        case 0x53514cu: goto label_53514c;
        case 0x535150u: goto label_535150;
        case 0x535154u: goto label_535154;
        case 0x535158u: goto label_535158;
        case 0x53515cu: goto label_53515c;
        case 0x535160u: goto label_535160;
        case 0x535164u: goto label_535164;
        case 0x535168u: goto label_535168;
        case 0x53516cu: goto label_53516c;
        case 0x535170u: goto label_535170;
        case 0x535174u: goto label_535174;
        case 0x535178u: goto label_535178;
        case 0x53517cu: goto label_53517c;
        case 0x535180u: goto label_535180;
        case 0x535184u: goto label_535184;
        case 0x535188u: goto label_535188;
        case 0x53518cu: goto label_53518c;
        case 0x535190u: goto label_535190;
        case 0x535194u: goto label_535194;
        case 0x535198u: goto label_535198;
        case 0x53519cu: goto label_53519c;
        case 0x5351a0u: goto label_5351a0;
        case 0x5351a4u: goto label_5351a4;
        case 0x5351a8u: goto label_5351a8;
        case 0x5351acu: goto label_5351ac;
        case 0x5351b0u: goto label_5351b0;
        case 0x5351b4u: goto label_5351b4;
        case 0x5351b8u: goto label_5351b8;
        case 0x5351bcu: goto label_5351bc;
        case 0x5351c0u: goto label_5351c0;
        case 0x5351c4u: goto label_5351c4;
        case 0x5351c8u: goto label_5351c8;
        case 0x5351ccu: goto label_5351cc;
        case 0x5351d0u: goto label_5351d0;
        case 0x5351d4u: goto label_5351d4;
        case 0x5351d8u: goto label_5351d8;
        case 0x5351dcu: goto label_5351dc;
        case 0x5351e0u: goto label_5351e0;
        case 0x5351e4u: goto label_5351e4;
        case 0x5351e8u: goto label_5351e8;
        case 0x5351ecu: goto label_5351ec;
        case 0x5351f0u: goto label_5351f0;
        case 0x5351f4u: goto label_5351f4;
        case 0x5351f8u: goto label_5351f8;
        case 0x5351fcu: goto label_5351fc;
        case 0x535200u: goto label_535200;
        case 0x535204u: goto label_535204;
        case 0x535208u: goto label_535208;
        case 0x53520cu: goto label_53520c;
        case 0x535210u: goto label_535210;
        case 0x535214u: goto label_535214;
        case 0x535218u: goto label_535218;
        case 0x53521cu: goto label_53521c;
        case 0x535220u: goto label_535220;
        case 0x535224u: goto label_535224;
        case 0x535228u: goto label_535228;
        case 0x53522cu: goto label_53522c;
        case 0x535230u: goto label_535230;
        case 0x535234u: goto label_535234;
        case 0x535238u: goto label_535238;
        case 0x53523cu: goto label_53523c;
        case 0x535240u: goto label_535240;
        case 0x535244u: goto label_535244;
        case 0x535248u: goto label_535248;
        case 0x53524cu: goto label_53524c;
        case 0x535250u: goto label_535250;
        case 0x535254u: goto label_535254;
        case 0x535258u: goto label_535258;
        case 0x53525cu: goto label_53525c;
        case 0x535260u: goto label_535260;
        case 0x535264u: goto label_535264;
        case 0x535268u: goto label_535268;
        case 0x53526cu: goto label_53526c;
        case 0x535270u: goto label_535270;
        case 0x535274u: goto label_535274;
        case 0x535278u: goto label_535278;
        case 0x53527cu: goto label_53527c;
        case 0x535280u: goto label_535280;
        case 0x535284u: goto label_535284;
        case 0x535288u: goto label_535288;
        case 0x53528cu: goto label_53528c;
        case 0x535290u: goto label_535290;
        case 0x535294u: goto label_535294;
        case 0x535298u: goto label_535298;
        case 0x53529cu: goto label_53529c;
        case 0x5352a0u: goto label_5352a0;
        case 0x5352a4u: goto label_5352a4;
        case 0x5352a8u: goto label_5352a8;
        case 0x5352acu: goto label_5352ac;
        case 0x5352b0u: goto label_5352b0;
        case 0x5352b4u: goto label_5352b4;
        case 0x5352b8u: goto label_5352b8;
        case 0x5352bcu: goto label_5352bc;
        case 0x5352c0u: goto label_5352c0;
        case 0x5352c4u: goto label_5352c4;
        case 0x5352c8u: goto label_5352c8;
        case 0x5352ccu: goto label_5352cc;
        case 0x5352d0u: goto label_5352d0;
        case 0x5352d4u: goto label_5352d4;
        case 0x5352d8u: goto label_5352d8;
        case 0x5352dcu: goto label_5352dc;
        case 0x5352e0u: goto label_5352e0;
        case 0x5352e4u: goto label_5352e4;
        case 0x5352e8u: goto label_5352e8;
        case 0x5352ecu: goto label_5352ec;
        case 0x5352f0u: goto label_5352f0;
        case 0x5352f4u: goto label_5352f4;
        case 0x5352f8u: goto label_5352f8;
        case 0x5352fcu: goto label_5352fc;
        case 0x535300u: goto label_535300;
        case 0x535304u: goto label_535304;
        case 0x535308u: goto label_535308;
        case 0x53530cu: goto label_53530c;
        case 0x535310u: goto label_535310;
        case 0x535314u: goto label_535314;
        case 0x535318u: goto label_535318;
        case 0x53531cu: goto label_53531c;
        case 0x535320u: goto label_535320;
        case 0x535324u: goto label_535324;
        case 0x535328u: goto label_535328;
        case 0x53532cu: goto label_53532c;
        case 0x535330u: goto label_535330;
        case 0x535334u: goto label_535334;
        case 0x535338u: goto label_535338;
        case 0x53533cu: goto label_53533c;
        case 0x535340u: goto label_535340;
        case 0x535344u: goto label_535344;
        case 0x535348u: goto label_535348;
        case 0x53534cu: goto label_53534c;
        case 0x535350u: goto label_535350;
        case 0x535354u: goto label_535354;
        case 0x535358u: goto label_535358;
        case 0x53535cu: goto label_53535c;
        case 0x535360u: goto label_535360;
        case 0x535364u: goto label_535364;
        case 0x535368u: goto label_535368;
        case 0x53536cu: goto label_53536c;
        case 0x535370u: goto label_535370;
        case 0x535374u: goto label_535374;
        case 0x535378u: goto label_535378;
        case 0x53537cu: goto label_53537c;
        default: break;
    }

    ctx->pc = 0x534f10u;

label_534f10:
    // 0x534f10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x534f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_534f14:
    // 0x534f14: 0x3c0700be  lui         $a3, 0xBE
    ctx->pc = 0x534f14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)190 << 16));
label_534f18:
    // 0x534f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_534f1c:
    // 0x534f1c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x534f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_534f20:
    // 0x534f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_534f24:
    // 0x534f24: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_534f28:
    // 0x534f28: 0x8c48cf98  lw          $t0, -0x3068($v0)
    ctx->pc = 0x534f28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_534f2c:
    // 0x534f2c: 0x24e7b610  addiu       $a3, $a3, -0x49F0
    ctx->pc = 0x534f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948368));
label_534f30:
    // 0x534f30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x534f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_534f34:
    // 0x534f34: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x534f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_534f38:
    // 0x534f38: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x534f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_534f3c:
    // 0x534f3c: 0xac68cf98  sw          $t0, -0x3068($v1)
    ctx->pc = 0x534f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 8));
label_534f40:
    // 0x534f40: 0xa08007c2  sb          $zero, 0x7C2($a0)
    ctx->pc = 0x534f40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1986), (uint8_t)GPR_U32(ctx, 0));
label_534f44:
    // 0x534f44: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x534f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_534f48:
    // 0x534f48: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x534f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_534f4c:
    // 0x534f4c: 0x8c42cf98  lw          $v0, -0x3068($v0)
    ctx->pc = 0x534f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_534f50:
    // 0x534f50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x534f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_534f54:
    // 0x534f54: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x534f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_534f58:
    // 0x534f58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x534f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_534f5c:
    // 0x534f5c: 0x10460045  beq         $v0, $a2, . + 4 + (0x45 << 2)
label_534f60:
    if (ctx->pc == 0x534F60u) {
        ctx->pc = 0x534F60u;
            // 0x534f60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x534F64u;
        goto label_534f64;
    }
    ctx->pc = 0x534F5Cu;
    {
        const bool branch_taken_0x534f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x534F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534F5Cu;
            // 0x534f60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534f5c) {
            ctx->pc = 0x535074u;
            goto label_535074;
        }
    }
    ctx->pc = 0x534F64u;
label_534f64:
    // 0x534f64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_534f68:
    if (ctx->pc == 0x534F68u) {
        ctx->pc = 0x534F6Cu;
        goto label_534f6c;
    }
    ctx->pc = 0x534F64u;
    {
        const bool branch_taken_0x534f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x534f64) {
            ctx->pc = 0x534F74u;
            goto label_534f74;
        }
    }
    ctx->pc = 0x534F6Cu;
label_534f6c:
    // 0x534f6c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_534f70:
    if (ctx->pc == 0x534F70u) {
        ctx->pc = 0x534F74u;
        goto label_534f74;
    }
    ctx->pc = 0x534F6Cu;
    {
        const bool branch_taken_0x534f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x534f6c) {
            ctx->pc = 0x535160u;
            goto label_535160;
        }
    }
    ctx->pc = 0x534F74u;
label_534f74:
    // 0x534f74: 0xc14d564  jal         func_535590
label_534f78:
    if (ctx->pc == 0x534F78u) {
        ctx->pc = 0x534F7Cu;
        goto label_534f7c;
    }
    ctx->pc = 0x534F74u;
    SET_GPR_U32(ctx, 31, 0x534F7Cu);
    ctx->pc = 0x535590u;
    if (runtime->hasFunction(0x535590u)) {
        auto targetFn = runtime->lookupFunction(0x535590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534F7Cu; }
        if (ctx->pc != 0x534F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535590_0x535590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534F7Cu; }
        if (ctx->pc != 0x534F7Cu) { return; }
    }
    ctx->pc = 0x534F7Cu;
label_534f7c:
    // 0x534f7c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x534f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_534f80:
    // 0x534f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x534f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_534f84:
    // 0x534f84: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
label_534f88:
    if (ctx->pc == 0x534F88u) {
        ctx->pc = 0x534F88u;
            // 0x534f88: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x534F8Cu;
        goto label_534f8c;
    }
    ctx->pc = 0x534F84u;
    {
        const bool branch_taken_0x534f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x534f84) {
            ctx->pc = 0x534F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534F84u;
            // 0x534f88: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534FC4u;
            goto label_534fc4;
        }
    }
    ctx->pc = 0x534F8Cu;
label_534f8c:
    // 0x534f8c: 0x92050064  lbu         $a1, 0x64($s0)
    ctx->pc = 0x534f8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_534f90:
    // 0x534f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x534f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_534f94:
    // 0x534f94: 0x26060068  addiu       $a2, $s0, 0x68
    ctx->pc = 0x534f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_534f98:
    // 0x534f98: 0x26070338  addiu       $a3, $s0, 0x338
    ctx->pc = 0x534f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
label_534f9c:
    // 0x534f9c: 0xc14d4e0  jal         func_535380
label_534fa0:
    if (ctx->pc == 0x534FA0u) {
        ctx->pc = 0x534FA0u;
            // 0x534fa0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x534FA4u;
        goto label_534fa4;
    }
    ctx->pc = 0x534F9Cu;
    SET_GPR_U32(ctx, 31, 0x534FA4u);
    ctx->pc = 0x534FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534F9Cu;
            // 0x534fa0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535380u;
    if (runtime->hasFunction(0x535380u)) {
        auto targetFn = runtime->lookupFunction(0x535380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534FA4u; }
        if (ctx->pc != 0x534FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535380_0x535380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534FA4u; }
        if (ctx->pc != 0x534FA4u) { return; }
    }
    ctx->pc = 0x534FA4u;
label_534fa4:
    // 0x534fa4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x534fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_534fa8:
    // 0x534fa8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_534fac:
    // 0x534fac: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x534facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_534fb0:
    // 0x534fb0: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x534fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_534fb4:
    // 0x534fb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x534fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_534fb8:
    // 0x534fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x534fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_534fbc:
    // 0x534fbc: 0x1000006e  b           . + 4 + (0x6E << 2)
label_534fc0:
    if (ctx->pc == 0x534FC0u) {
        ctx->pc = 0x534FC4u;
        goto label_534fc4;
    }
    ctx->pc = 0x534FBCu;
    {
        const bool branch_taken_0x534fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x534fbc) {
            ctx->pc = 0x535178u;
            goto label_535178;
        }
    }
    ctx->pc = 0x534FC4u;
label_534fc4:
    // 0x534fc4: 0xc04afe8  jal         func_12BFA0
label_534fc8:
    if (ctx->pc == 0x534FC8u) {
        ctx->pc = 0x534FC8u;
            // 0x534fc8: 0x26050338  addiu       $a1, $s0, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
        ctx->pc = 0x534FCCu;
        goto label_534fcc;
    }
    ctx->pc = 0x534FC4u;
    SET_GPR_U32(ctx, 31, 0x534FCCu);
    ctx->pc = 0x534FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534FC4u;
            // 0x534fc8: 0x26050338  addiu       $a1, $s0, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534FCCu; }
        if (ctx->pc != 0x534FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534FCCu; }
        if (ctx->pc != 0x534FCCu) { return; }
    }
    ctx->pc = 0x534FCCu;
label_534fcc:
    // 0x534fcc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x534fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_534fd0:
    // 0x534fd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x534fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_534fd4:
    // 0x534fd4: 0xc04af4a  jal         func_12BD28
label_534fd8:
    if (ctx->pc == 0x534FD8u) {
        ctx->pc = 0x534FD8u;
            // 0x534fd8: 0x24a5d0c0  addiu       $a1, $a1, -0x2F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955200));
        ctx->pc = 0x534FDCu;
        goto label_534fdc;
    }
    ctx->pc = 0x534FD4u;
    SET_GPR_U32(ctx, 31, 0x534FDCu);
    ctx->pc = 0x534FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534FD4u;
            // 0x534fd8: 0x24a5d0c0  addiu       $a1, $a1, -0x2F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534FDCu; }
        if (ctx->pc != 0x534FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534FDCu; }
        if (ctx->pc != 0x534FDCu) { return; }
    }
    ctx->pc = 0x534FDCu;
label_534fdc:
    // 0x534fdc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x534fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534fe0:
    // 0x534fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x534fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_534fe4:
    // 0x534fe4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x534fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_534fe8:
    // 0x534fe8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x534fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_534fec:
    // 0x534fec: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x534fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_534ff0:
    // 0x534ff0: 0x320f809  jalr        $t9
label_534ff4:
    if (ctx->pc == 0x534FF4u) {
        ctx->pc = 0x534FF4u;
            // 0x534ff4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x534FF8u;
        goto label_534ff8;
    }
    ctx->pc = 0x534FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x534FF8u);
        ctx->pc = 0x534FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534FF0u;
            // 0x534ff4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x534FF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x534FF8u; }
            if (ctx->pc != 0x534FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x534FF8u;
label_534ff8:
    // 0x534ff8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x534ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_534ffc:
    // 0x534ffc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x534ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_535000:
    // 0x535000: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
label_535004:
    if (ctx->pc == 0x535004u) {
        ctx->pc = 0x535004u;
            // 0x535004: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x535008u;
        goto label_535008;
    }
    ctx->pc = 0x535000u;
    {
        const bool branch_taken_0x535000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x535000) {
            ctx->pc = 0x535004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535000u;
            // 0x535004: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535050u;
            goto label_535050;
        }
    }
    ctx->pc = 0x535008u;
label_535008:
    // 0x535008: 0x92050064  lbu         $a1, 0x64($s0)
    ctx->pc = 0x535008u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_53500c:
    // 0x53500c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_535010:
    // 0x535010: 0x26060068  addiu       $a2, $s0, 0x68
    ctx->pc = 0x535010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_535014:
    // 0x535014: 0x26070338  addiu       $a3, $s0, 0x338
    ctx->pc = 0x535014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
label_535018:
    // 0x535018: 0xc14d4e0  jal         func_535380
label_53501c:
    if (ctx->pc == 0x53501Cu) {
        ctx->pc = 0x53501Cu;
            // 0x53501c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x535020u;
        goto label_535020;
    }
    ctx->pc = 0x535018u;
    SET_GPR_U32(ctx, 31, 0x535020u);
    ctx->pc = 0x53501Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535018u;
            // 0x53501c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535380u;
    if (runtime->hasFunction(0x535380u)) {
        auto targetFn = runtime->lookupFunction(0x535380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535020u; }
        if (ctx->pc != 0x535020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535380_0x535380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535020u; }
        if (ctx->pc != 0x535020u) { return; }
    }
    ctx->pc = 0x535020u;
label_535020:
    // 0x535020: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x535020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_535024:
    // 0x535024: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x535024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_535028:
    // 0x535028: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x535028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_53502c:
    // 0x53502c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53502cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_535030:
    // 0x535030: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x535030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
label_535034:
    // 0x535034: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x535034u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_535038:
    // 0x535038: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x535038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_53503c:
    // 0x53503c: 0x8c84cf98  lw          $a0, -0x3068($a0)
    ctx->pc = 0x53503cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954904)));
label_535040:
    // 0x535040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x535040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_535044:
    // 0x535044: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x535044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_535048:
    // 0x535048: 0x1000004b  b           . + 4 + (0x4B << 2)
label_53504c:
    if (ctx->pc == 0x53504Cu) {
        ctx->pc = 0x53504Cu;
            // 0x53504c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x535050u;
        goto label_535050;
    }
    ctx->pc = 0x535048u;
    {
        const bool branch_taken_0x535048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535048u;
            // 0x53504c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535048) {
            ctx->pc = 0x535178u;
            goto label_535178;
        }
    }
    ctx->pc = 0x535050u;
label_535050:
    // 0x535050: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x535050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_535054:
    // 0x535054: 0x8c42cf98  lw          $v0, -0x3068($v0)
    ctx->pc = 0x535054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_535058:
    // 0x535058: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x535058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_53505c:
    // 0x53505c: 0x2463b610  addiu       $v1, $v1, -0x49F0
    ctx->pc = 0x53505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948368));
label_535060:
    // 0x535060: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x535060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_535064:
    // 0x535064: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x535064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_535068:
    // 0x535068: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x535068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_53506c:
    // 0x53506c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_535070:
    if (ctx->pc == 0x535070u) {
        ctx->pc = 0x535070u;
            // 0x535070: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x535074u;
        goto label_535074;
    }
    ctx->pc = 0x53506Cu;
    {
        const bool branch_taken_0x53506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x535070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53506Cu;
            // 0x535070: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53506c) {
            ctx->pc = 0x535160u;
            goto label_535160;
        }
    }
    ctx->pc = 0x535074u;
label_535074:
    // 0x535074: 0xc14d234  jal         func_5348D0
label_535078:
    if (ctx->pc == 0x535078u) {
        ctx->pc = 0x53507Cu;
        goto label_53507c;
    }
    ctx->pc = 0x535074u;
    SET_GPR_U32(ctx, 31, 0x53507Cu);
    ctx->pc = 0x5348D0u;
    if (runtime->hasFunction(0x5348D0u)) {
        auto targetFn = runtime->lookupFunction(0x5348D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53507Cu; }
        if (ctx->pc != 0x53507Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005348D0_0x5348d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53507Cu; }
        if (ctx->pc != 0x53507Cu) { return; }
    }
    ctx->pc = 0x53507Cu;
label_53507c:
    // 0x53507c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_535080:
    if (ctx->pc == 0x535080u) {
        ctx->pc = 0x535080u;
            // 0x535080: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x535084u;
        goto label_535084;
    }
    ctx->pc = 0x53507Cu;
    {
        const bool branch_taken_0x53507c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53507c) {
            ctx->pc = 0x535080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53507Cu;
            // 0x535080: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5350CCu;
            goto label_5350cc;
        }
    }
    ctx->pc = 0x535084u;
label_535084:
    // 0x535084: 0x92050064  lbu         $a1, 0x64($s0)
    ctx->pc = 0x535084u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_535088:
    // 0x535088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x535088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53508c:
    // 0x53508c: 0x26060068  addiu       $a2, $s0, 0x68
    ctx->pc = 0x53508cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_535090:
    // 0x535090: 0x26070338  addiu       $a3, $s0, 0x338
    ctx->pc = 0x535090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
label_535094:
    // 0x535094: 0xc14d4e0  jal         func_535380
label_535098:
    if (ctx->pc == 0x535098u) {
        ctx->pc = 0x535098u;
            // 0x535098: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53509Cu;
        goto label_53509c;
    }
    ctx->pc = 0x535094u;
    SET_GPR_U32(ctx, 31, 0x53509Cu);
    ctx->pc = 0x535098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535094u;
            // 0x535098: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x535380u;
    if (runtime->hasFunction(0x535380u)) {
        auto targetFn = runtime->lookupFunction(0x535380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53509Cu; }
        if (ctx->pc != 0x53509Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00535380_0x535380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53509Cu; }
        if (ctx->pc != 0x53509Cu) { return; }
    }
    ctx->pc = 0x53509Cu;
label_53509c:
    // 0x53509c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x53509cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_5350a0:
    // 0x5350a0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x5350a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_5350a4:
    // 0x5350a4: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x5350a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_5350a8:
    // 0x5350a8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5350a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5350ac:
    // 0x5350ac: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x5350acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
label_5350b0:
    // 0x5350b0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x5350b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_5350b4:
    // 0x5350b4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x5350b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_5350b8:
    // 0x5350b8: 0x8c84cf98  lw          $a0, -0x3068($a0)
    ctx->pc = 0x5350b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954904)));
label_5350bc:
    // 0x5350bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5350bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5350c0:
    // 0x5350c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5350c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5350c4:
    // 0x5350c4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_5350c8:
    if (ctx->pc == 0x5350C8u) {
        ctx->pc = 0x5350C8u;
            // 0x5350c8: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x5350CCu;
        goto label_5350cc;
    }
    ctx->pc = 0x5350C4u;
    {
        const bool branch_taken_0x5350c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5350C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5350C4u;
            // 0x5350c8: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5350c4) {
            ctx->pc = 0x535178u;
            goto label_535178;
        }
    }
    ctx->pc = 0x5350CCu;
label_5350cc:
    // 0x5350cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5350ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5350d0:
    // 0x5350d0: 0x92070064  lbu         $a3, 0x64($s0)
    ctx->pc = 0x5350d0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_5350d4:
    // 0x5350d4: 0x26050338  addiu       $a1, $s0, 0x338
    ctx->pc = 0x5350d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
label_5350d8:
    // 0x5350d8: 0x26060068  addiu       $a2, $s0, 0x68
    ctx->pc = 0x5350d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_5350dc:
    // 0x5350dc: 0x27a80048  addiu       $t0, $sp, 0x48
    ctx->pc = 0x5350dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_5350e0:
    // 0x5350e0: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x5350e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_5350e4:
    // 0x5350e4: 0x27a90044  addiu       $t1, $sp, 0x44
    ctx->pc = 0x5350e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_5350e8:
    // 0x5350e8: 0x260a07c0  addiu       $t2, $s0, 0x7C0
    ctx->pc = 0x5350e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1984));
label_5350ec:
    // 0x5350ec: 0x320f809  jalr        $t9
label_5350f0:
    if (ctx->pc == 0x5350F0u) {
        ctx->pc = 0x5350F0u;
            // 0x5350f0: 0x260b07c1  addiu       $t3, $s0, 0x7C1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1985));
        ctx->pc = 0x5350F4u;
        goto label_5350f4;
    }
    ctx->pc = 0x5350ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5350F4u);
        ctx->pc = 0x5350F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5350ECu;
            // 0x5350f0: 0x260b07c1  addiu       $t3, $s0, 0x7C1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 1985));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5350F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5350F4u; }
            if (ctx->pc != 0x5350F4u) { return; }
        }
        }
    }
    ctx->pc = 0x5350F4u;
label_5350f4:
    // 0x5350f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x5350f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_5350f8:
    // 0x5350f8: 0xa20207c2  sb          $v0, 0x7C2($s0)
    ctx->pc = 0x5350f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1986), (uint8_t)GPR_U32(ctx, 2));
label_5350fc:
    // 0x5350fc: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x5350fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_535100:
    // 0x535100: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x535100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_535104:
    // 0x535104: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_535108:
    if (ctx->pc == 0x535108u) {
        ctx->pc = 0x535108u;
            // 0x535108: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x53510Cu;
        goto label_53510c;
    }
    ctx->pc = 0x535104u;
    {
        const bool branch_taken_0x535104 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x535108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535104u;
            // 0x535108: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535104) {
            ctx->pc = 0x535114u;
            goto label_535114;
        }
    }
    ctx->pc = 0x53510Cu;
label_53510c:
    // 0x53510c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x53510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_535110:
    // 0x535110: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x535110u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_535114:
    // 0x535114: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x535114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_535118:
    // 0x535118: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x535118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_53511c:
    // 0x53511c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53511cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_535120:
    // 0x535120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x535120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_535124:
    // 0x535124: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x535124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_535128:
    // 0x535128: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x535128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_53512c:
    // 0x53512c: 0xae0007b8  sw          $zero, 0x7B8($s0)
    ctx->pc = 0x53512cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1976), GPR_U32(ctx, 0));
label_535130:
    // 0x535130: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x535130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_535134:
    // 0x535134: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x535134u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
label_535138:
    // 0x535138: 0xae050048  sw          $a1, 0x48($s0)
    ctx->pc = 0x535138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
label_53513c:
    // 0x53513c: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x53513cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_535140:
    // 0x535140: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x535140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_535144:
    // 0x535144: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x535144u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_535148:
    // 0x535148: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x535148u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
label_53514c:
    // 0x53514c: 0xae05004c  sw          $a1, 0x4C($s0)
    ctx->pc = 0x53514cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 5));
label_535150:
    // 0x535150: 0x8c84cf98  lw          $a0, -0x3068($a0)
    ctx->pc = 0x535150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954904)));
label_535154:
    // 0x535154: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x535154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_535158:
    // 0x535158: 0x10000007  b           . + 4 + (0x7 << 2)
label_53515c:
    if (ctx->pc == 0x53515Cu) {
        ctx->pc = 0x53515Cu;
            // 0x53515c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x535160u;
        goto label_535160;
    }
    ctx->pc = 0x535158u;
    {
        const bool branch_taken_0x535158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53515Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535158u;
            // 0x53515c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535158) {
            ctx->pc = 0x535178u;
            goto label_535178;
        }
    }
    ctx->pc = 0x535160u;
label_535160:
    // 0x535160: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x535160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_535164:
    // 0x535164: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x535164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_535168:
    // 0x535168: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x535168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_53516c:
    // 0x53516c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x53516cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_535170:
    // 0x535170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x535170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_535174:
    // 0x535174: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x535174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
label_535178:
    // 0x535178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x535178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53517c:
    // 0x53517c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53517cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_535180:
    // 0x535180: 0x3e00008  jr          $ra
label_535184:
    if (ctx->pc == 0x535184u) {
        ctx->pc = 0x535184u;
            // 0x535184: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x535188u;
        goto label_535188;
    }
    ctx->pc = 0x535180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x535184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535180u;
            // 0x535184: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535188u;
label_535188:
    // 0x535188: 0x0  nop
    ctx->pc = 0x535188u;
    // NOP
label_53518c:
    // 0x53518c: 0x0  nop
    ctx->pc = 0x53518cu;
    // NOP
label_535190:
    // 0x535190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x535190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_535194:
    // 0x535194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x535194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_535198:
    // 0x535198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x535198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53519c:
    // 0x53519c: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x53519cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_5351a0:
    // 0x5351a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5351a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5351a4:
    // 0x5351a4: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x5351a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_5351a8:
    // 0x5351a8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x5351a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_5351ac:
    // 0x5351ac: 0x26070034  addiu       $a3, $s0, 0x34
    ctx->pc = 0x5351acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_5351b0:
    // 0x5351b0: 0x26080038  addiu       $t0, $s0, 0x38
    ctx->pc = 0x5351b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_5351b4:
    // 0x5351b4: 0xc0487f2  jal         func_121FC8
label_5351b8:
    if (ctx->pc == 0x5351B8u) {
        ctx->pc = 0x5351B8u;
            // 0x5351b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5351BCu;
        goto label_5351bc;
    }
    ctx->pc = 0x5351B4u;
    SET_GPR_U32(ctx, 31, 0x5351BCu);
    ctx->pc = 0x5351B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5351B4u;
            // 0x5351b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121FC8u;
    if (runtime->hasFunction(0x121FC8u)) {
        auto targetFn = runtime->lookupFunction(0x121FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5351BCu; }
        if (ctx->pc != 0x5351BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121FC8_0x121fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5351BCu; }
        if (ctx->pc != 0x5351BCu) { return; }
    }
    ctx->pc = 0x5351BCu;
label_5351bc:
    // 0x5351bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x5351bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_5351c0:
    // 0x5351c0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5351c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5351c4:
    // 0x5351c4: 0x8c66cf98  lw          $a2, -0x3068($v1)
    ctx->pc = 0x5351c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954904)));
label_5351c8:
    // 0x5351c8: 0x3c0500be  lui         $a1, 0xBE
    ctx->pc = 0x5351c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)190 << 16));
label_5351cc:
    // 0x5351cc: 0x24a5b610  addiu       $a1, $a1, -0x49F0
    ctx->pc = 0x5351ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
label_5351d0:
    // 0x5351d0: 0x2404ff2e  addiu       $a0, $zero, -0xD2
    ctx->pc = 0x5351d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_5351d4:
    // 0x5351d4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5351d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5351d8:
    // 0x5351d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x5351d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_5351dc:
    // 0x5351dc: 0xac66cf98  sw          $a2, -0x3068($v1)
    ctx->pc = 0x5351dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 6));
label_5351e0:
    // 0x5351e0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x5351e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5351e4:
    // 0x5351e4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x5351e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_5351e8:
    // 0x5351e8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x5351e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_5351ec:
    // 0x5351ec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x5351ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_5351f0:
    // 0x5351f0: 0x50a4000d  beql        $a1, $a0, . + 4 + (0xD << 2)
label_5351f4:
    if (ctx->pc == 0x5351F4u) {
        ctx->pc = 0x5351F4u;
            // 0x5351f4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x5351F8u;
        goto label_5351f8;
    }
    ctx->pc = 0x5351F0u;
    {
        const bool branch_taken_0x5351f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x5351f0) {
            ctx->pc = 0x5351F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5351F0u;
            // 0x5351f4: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535228u;
            goto label_535228;
        }
    }
    ctx->pc = 0x5351F8u;
label_5351f8:
    // 0x5351f8: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x5351f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_5351fc:
    // 0x5351fc: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_535200:
    if (ctx->pc == 0x535200u) {
        ctx->pc = 0x535204u;
        goto label_535204;
    }
    ctx->pc = 0x5351FCu;
    {
        const bool branch_taken_0x5351fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5351fc) {
            ctx->pc = 0x535224u;
            goto label_535224;
        }
    }
    ctx->pc = 0x535204u;
label_535204:
    // 0x535204: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x535204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_535208:
    // 0x535208: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_53520c:
    if (ctx->pc == 0x53520Cu) {
        ctx->pc = 0x535210u;
        goto label_535210;
    }
    ctx->pc = 0x535208u;
    {
        const bool branch_taken_0x535208 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x535208) {
            ctx->pc = 0x535224u;
            goto label_535224;
        }
    }
    ctx->pc = 0x535210u;
label_535210:
    // 0x535210: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x535210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_535214:
    // 0x535214: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_535218:
    if (ctx->pc == 0x535218u) {
        ctx->pc = 0x53521Cu;
        goto label_53521c;
    }
    ctx->pc = 0x535214u;
    {
        const bool branch_taken_0x535214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x535214) {
            ctx->pc = 0x535224u;
            goto label_535224;
        }
    }
    ctx->pc = 0x53521Cu;
label_53521c:
    // 0x53521c: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
label_535220:
    if (ctx->pc == 0x535220u) {
        ctx->pc = 0x535220u;
            // 0x535220: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x535224u;
        goto label_535224;
    }
    ctx->pc = 0x53521Cu;
    {
        const bool branch_taken_0x53521c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53521c) {
            ctx->pc = 0x535220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53521Cu;
            // 0x535220: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535228u;
            goto label_535228;
        }
    }
    ctx->pc = 0x535224u;
label_535224:
    // 0x535224: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x535224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_535228:
    // 0x535228: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x535228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_53522c:
    // 0x53522c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53522cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_535230:
    // 0x535230: 0x8c64cf98  lw          $a0, -0x3068($v1)
    ctx->pc = 0x535230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954904)));
label_535234:
    // 0x535234: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x535234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_535238:
    // 0x535238: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x535238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_53523c:
    // 0x53523c: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x53523cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
label_535240:
    // 0x535240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x535240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_535244:
    // 0x535244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x535244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_535248:
    // 0x535248: 0x3e00008  jr          $ra
label_53524c:
    if (ctx->pc == 0x53524Cu) {
        ctx->pc = 0x53524Cu;
            // 0x53524c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x535250u;
        goto label_535250;
    }
    ctx->pc = 0x535248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53524Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535248u;
            // 0x53524c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535250u;
label_535250:
    // 0x535250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x535250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_535254:
    // 0x535254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x535254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_535258:
    // 0x535258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x535258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53525c:
    // 0x53525c: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x53525cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_535260:
    // 0x535260: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x535260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_535264:
    // 0x535264: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x535264u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_535268:
    // 0x535268: 0xc048936  jal         func_1224D8
label_53526c:
    if (ctx->pc == 0x53526Cu) {
        ctx->pc = 0x53526Cu;
            // 0x53526c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x535270u;
        goto label_535270;
    }
    ctx->pc = 0x535268u;
    SET_GPR_U32(ctx, 31, 0x535270u);
    ctx->pc = 0x53526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x535268u;
            // 0x53526c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1224D8u;
    if (runtime->hasFunction(0x1224D8u)) {
        auto targetFn = runtime->lookupFunction(0x1224D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535270u; }
        if (ctx->pc != 0x535270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001224D8_0x1224d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535270u; }
        if (ctx->pc != 0x535270u) { return; }
    }
    ctx->pc = 0x535270u;
label_535270:
    // 0x535270: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x535270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_535274:
    // 0x535274: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_535278:
    if (ctx->pc == 0x535278u) {
        ctx->pc = 0x535278u;
            // 0x535278: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x53527Cu;
        goto label_53527c;
    }
    ctx->pc = 0x535274u;
    {
        const bool branch_taken_0x535274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x535278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535274u;
            // 0x535278: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535274) {
            ctx->pc = 0x5352A8u;
            goto label_5352a8;
        }
    }
    ctx->pc = 0x53527Cu;
label_53527c:
    // 0x53527c: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x53527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_535280:
    // 0x535280: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_535284:
    if (ctx->pc == 0x535284u) {
        ctx->pc = 0x535284u;
            // 0x535284: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x535288u;
        goto label_535288;
    }
    ctx->pc = 0x535280u;
    {
        const bool branch_taken_0x535280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x535280) {
            ctx->pc = 0x535284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535280u;
            // 0x535284: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5352ACu;
            goto label_5352ac;
        }
    }
    ctx->pc = 0x535288u;
label_535288:
    // 0x535288: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x535288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_53528c:
    // 0x53528c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_535290:
    if (ctx->pc == 0x535290u) {
        ctx->pc = 0x535294u;
        goto label_535294;
    }
    ctx->pc = 0x53528Cu;
    {
        const bool branch_taken_0x53528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53528c) {
            ctx->pc = 0x5352A8u;
            goto label_5352a8;
        }
    }
    ctx->pc = 0x535294u;
label_535294:
    // 0x535294: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x535294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_535298:
    // 0x535298: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_53529c:
    if (ctx->pc == 0x53529Cu) {
        ctx->pc = 0x5352A0u;
        goto label_5352a0;
    }
    ctx->pc = 0x535298u;
    {
        const bool branch_taken_0x535298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x535298) {
            ctx->pc = 0x5352A8u;
            goto label_5352a8;
        }
    }
    ctx->pc = 0x5352A0u;
label_5352a0:
    // 0x5352a0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_5352a4:
    if (ctx->pc == 0x5352A4u) {
        ctx->pc = 0x5352A4u;
            // 0x5352a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x5352A8u;
        goto label_5352a8;
    }
    ctx->pc = 0x5352A0u;
    {
        const bool branch_taken_0x5352a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5352a0) {
            ctx->pc = 0x5352A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5352A0u;
            // 0x5352a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5352ACu;
            goto label_5352ac;
        }
    }
    ctx->pc = 0x5352A8u;
label_5352a8:
    // 0x5352a8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5352a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5352ac:
    // 0x5352ac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x5352acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_5352b0:
    // 0x5352b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5352b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5352b4:
    // 0x5352b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5352b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5352b8:
    // 0x5352b8: 0x3e00008  jr          $ra
label_5352bc:
    if (ctx->pc == 0x5352BCu) {
        ctx->pc = 0x5352BCu;
            // 0x5352bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5352C0u;
        goto label_5352c0;
    }
    ctx->pc = 0x5352B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5352BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5352B8u;
            // 0x5352bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5352C0u;
label_5352c0:
    // 0x5352c0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x5352c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_5352c4:
    // 0x5352c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5352c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5352c8:
    // 0x5352c8: 0x8c850038  lw          $a1, 0x38($a0)
    ctx->pc = 0x5352c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_5352cc:
    // 0x5352cc: 0x54a30002  bnel        $a1, $v1, . + 4 + (0x2 << 2)
label_5352d0:
    if (ctx->pc == 0x5352D0u) {
        ctx->pc = 0x5352D0u;
            // 0x5352d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5352D4u;
        goto label_5352d4;
    }
    ctx->pc = 0x5352CCu;
    {
        const bool branch_taken_0x5352cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x5352cc) {
            ctx->pc = 0x5352D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5352CCu;
            // 0x5352d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5352D8u;
            goto label_5352d8;
        }
    }
    ctx->pc = 0x5352D4u;
label_5352d4:
    // 0x5352d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x5352d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5352d8:
    // 0x5352d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x5352d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_5352dc:
    // 0x5352dc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5352dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5352e0:
    // 0x5352e0: 0x3e00008  jr          $ra
label_5352e4:
    if (ctx->pc == 0x5352E4u) {
        ctx->pc = 0x5352E4u;
            // 0x5352e4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x5352E8u;
        goto label_5352e8;
    }
    ctx->pc = 0x5352E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5352E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5352E0u;
            // 0x5352e4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5352E8u;
label_5352e8:
    // 0x5352e8: 0x0  nop
    ctx->pc = 0x5352e8u;
    // NOP
label_5352ec:
    // 0x5352ec: 0x0  nop
    ctx->pc = 0x5352ecu;
    // NOP
label_5352f0:
    // 0x5352f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5352f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5352f4:
    // 0x5352f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5352f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5352f8:
    // 0x5352f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5352f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5352fc:
    // 0x5352fc: 0xa0850024  sb          $a1, 0x24($a0)
    ctx->pc = 0x5352fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 5));
label_535300:
    // 0x535300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x535300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_535304:
    // 0x535304: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x535304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_535308:
    // 0x535308: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x535308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_53530c:
    // 0x53530c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x53530cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_535310:
    // 0x535310: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x535310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_535314:
    // 0x535314: 0x26070034  addiu       $a3, $s0, 0x34
    ctx->pc = 0x535314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_535318:
    // 0x535318: 0x26080038  addiu       $t0, $s0, 0x38
    ctx->pc = 0x535318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_53531c:
    // 0x53531c: 0xc0487f2  jal         func_121FC8
label_535320:
    if (ctx->pc == 0x535320u) {
        ctx->pc = 0x535320u;
            // 0x535320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x535324u;
        goto label_535324;
    }
    ctx->pc = 0x53531Cu;
    SET_GPR_U32(ctx, 31, 0x535324u);
    ctx->pc = 0x535320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53531Cu;
            // 0x535320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121FC8u;
    if (runtime->hasFunction(0x121FC8u)) {
        auto targetFn = runtime->lookupFunction(0x121FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535324u; }
        if (ctx->pc != 0x535324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121FC8_0x121fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x535324u; }
        if (ctx->pc != 0x535324u) { return; }
    }
    ctx->pc = 0x535324u;
label_535324:
    // 0x535324: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x535324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_535328:
    // 0x535328: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_53532c:
    if (ctx->pc == 0x53532Cu) {
        ctx->pc = 0x53532Cu;
            // 0x53532c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x535330u;
        goto label_535330;
    }
    ctx->pc = 0x535328u;
    {
        const bool branch_taken_0x535328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x53532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x535328u;
            // 0x53532c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x535328) {
            ctx->pc = 0x53535Cu;
            goto label_53535c;
        }
    }
    ctx->pc = 0x535330u;
label_535330:
    // 0x535330: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x535330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_535334:
    // 0x535334: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_535338:
    if (ctx->pc == 0x535338u) {
        ctx->pc = 0x535338u;
            // 0x535338: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x53533Cu;
        goto label_53533c;
    }
    ctx->pc = 0x535334u;
    {
        const bool branch_taken_0x535334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x535334) {
            ctx->pc = 0x535338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535334u;
            // 0x535338: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535360u;
            goto label_535360;
        }
    }
    ctx->pc = 0x53533Cu;
label_53533c:
    // 0x53533c: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x53533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_535340:
    // 0x535340: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_535344:
    if (ctx->pc == 0x535344u) {
        ctx->pc = 0x535348u;
        goto label_535348;
    }
    ctx->pc = 0x535340u;
    {
        const bool branch_taken_0x535340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x535340) {
            ctx->pc = 0x53535Cu;
            goto label_53535c;
        }
    }
    ctx->pc = 0x535348u;
label_535348:
    // 0x535348: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x535348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_53534c:
    // 0x53534c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_535350:
    if (ctx->pc == 0x535350u) {
        ctx->pc = 0x535354u;
        goto label_535354;
    }
    ctx->pc = 0x53534Cu;
    {
        const bool branch_taken_0x53534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53534c) {
            ctx->pc = 0x53535Cu;
            goto label_53535c;
        }
    }
    ctx->pc = 0x535354u;
label_535354:
    // 0x535354: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_535358:
    if (ctx->pc == 0x535358u) {
        ctx->pc = 0x535358u;
            // 0x535358: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53535Cu;
        goto label_53535c;
    }
    ctx->pc = 0x535354u;
    {
        const bool branch_taken_0x535354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x535354) {
            ctx->pc = 0x535358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x535354u;
            // 0x535358: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x535360u;
            goto label_535360;
        }
    }
    ctx->pc = 0x53535Cu;
label_53535c:
    // 0x53535c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x53535cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_535360:
    // 0x535360: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x535360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_535364:
    // 0x535364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x535364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_535368:
    // 0x535368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x535368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53536c:
    // 0x53536c: 0x3e00008  jr          $ra
label_535370:
    if (ctx->pc == 0x535370u) {
        ctx->pc = 0x535370u;
            // 0x535370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x535374u;
        goto label_535374;
    }
    ctx->pc = 0x53536Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x535370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53536Cu;
            // 0x535370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x535374u;
label_535374:
    // 0x535374: 0x0  nop
    ctx->pc = 0x535374u;
    // NOP
label_535378:
    // 0x535378: 0x0  nop
    ctx->pc = 0x535378u;
    // NOP
label_53537c:
    // 0x53537c: 0x0  nop
    ctx->pc = 0x53537cu;
    // NOP
}
