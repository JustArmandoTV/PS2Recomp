#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00421EF0
// Address: 0x421ef0 - 0x422360
void sub_00421EF0_0x421ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421EF0_0x421ef0");
#endif

    switch (ctx->pc) {
        case 0x421ef0u: goto label_421ef0;
        case 0x421ef4u: goto label_421ef4;
        case 0x421ef8u: goto label_421ef8;
        case 0x421efcu: goto label_421efc;
        case 0x421f00u: goto label_421f00;
        case 0x421f04u: goto label_421f04;
        case 0x421f08u: goto label_421f08;
        case 0x421f0cu: goto label_421f0c;
        case 0x421f10u: goto label_421f10;
        case 0x421f14u: goto label_421f14;
        case 0x421f18u: goto label_421f18;
        case 0x421f1cu: goto label_421f1c;
        case 0x421f20u: goto label_421f20;
        case 0x421f24u: goto label_421f24;
        case 0x421f28u: goto label_421f28;
        case 0x421f2cu: goto label_421f2c;
        case 0x421f30u: goto label_421f30;
        case 0x421f34u: goto label_421f34;
        case 0x421f38u: goto label_421f38;
        case 0x421f3cu: goto label_421f3c;
        case 0x421f40u: goto label_421f40;
        case 0x421f44u: goto label_421f44;
        case 0x421f48u: goto label_421f48;
        case 0x421f4cu: goto label_421f4c;
        case 0x421f50u: goto label_421f50;
        case 0x421f54u: goto label_421f54;
        case 0x421f58u: goto label_421f58;
        case 0x421f5cu: goto label_421f5c;
        case 0x421f60u: goto label_421f60;
        case 0x421f64u: goto label_421f64;
        case 0x421f68u: goto label_421f68;
        case 0x421f6cu: goto label_421f6c;
        case 0x421f70u: goto label_421f70;
        case 0x421f74u: goto label_421f74;
        case 0x421f78u: goto label_421f78;
        case 0x421f7cu: goto label_421f7c;
        case 0x421f80u: goto label_421f80;
        case 0x421f84u: goto label_421f84;
        case 0x421f88u: goto label_421f88;
        case 0x421f8cu: goto label_421f8c;
        case 0x421f90u: goto label_421f90;
        case 0x421f94u: goto label_421f94;
        case 0x421f98u: goto label_421f98;
        case 0x421f9cu: goto label_421f9c;
        case 0x421fa0u: goto label_421fa0;
        case 0x421fa4u: goto label_421fa4;
        case 0x421fa8u: goto label_421fa8;
        case 0x421facu: goto label_421fac;
        case 0x421fb0u: goto label_421fb0;
        case 0x421fb4u: goto label_421fb4;
        case 0x421fb8u: goto label_421fb8;
        case 0x421fbcu: goto label_421fbc;
        case 0x421fc0u: goto label_421fc0;
        case 0x421fc4u: goto label_421fc4;
        case 0x421fc8u: goto label_421fc8;
        case 0x421fccu: goto label_421fcc;
        case 0x421fd0u: goto label_421fd0;
        case 0x421fd4u: goto label_421fd4;
        case 0x421fd8u: goto label_421fd8;
        case 0x421fdcu: goto label_421fdc;
        case 0x421fe0u: goto label_421fe0;
        case 0x421fe4u: goto label_421fe4;
        case 0x421fe8u: goto label_421fe8;
        case 0x421fecu: goto label_421fec;
        case 0x421ff0u: goto label_421ff0;
        case 0x421ff4u: goto label_421ff4;
        case 0x421ff8u: goto label_421ff8;
        case 0x421ffcu: goto label_421ffc;
        case 0x422000u: goto label_422000;
        case 0x422004u: goto label_422004;
        case 0x422008u: goto label_422008;
        case 0x42200cu: goto label_42200c;
        case 0x422010u: goto label_422010;
        case 0x422014u: goto label_422014;
        case 0x422018u: goto label_422018;
        case 0x42201cu: goto label_42201c;
        case 0x422020u: goto label_422020;
        case 0x422024u: goto label_422024;
        case 0x422028u: goto label_422028;
        case 0x42202cu: goto label_42202c;
        case 0x422030u: goto label_422030;
        case 0x422034u: goto label_422034;
        case 0x422038u: goto label_422038;
        case 0x42203cu: goto label_42203c;
        case 0x422040u: goto label_422040;
        case 0x422044u: goto label_422044;
        case 0x422048u: goto label_422048;
        case 0x42204cu: goto label_42204c;
        case 0x422050u: goto label_422050;
        case 0x422054u: goto label_422054;
        case 0x422058u: goto label_422058;
        case 0x42205cu: goto label_42205c;
        case 0x422060u: goto label_422060;
        case 0x422064u: goto label_422064;
        case 0x422068u: goto label_422068;
        case 0x42206cu: goto label_42206c;
        case 0x422070u: goto label_422070;
        case 0x422074u: goto label_422074;
        case 0x422078u: goto label_422078;
        case 0x42207cu: goto label_42207c;
        case 0x422080u: goto label_422080;
        case 0x422084u: goto label_422084;
        case 0x422088u: goto label_422088;
        case 0x42208cu: goto label_42208c;
        case 0x422090u: goto label_422090;
        case 0x422094u: goto label_422094;
        case 0x422098u: goto label_422098;
        case 0x42209cu: goto label_42209c;
        case 0x4220a0u: goto label_4220a0;
        case 0x4220a4u: goto label_4220a4;
        case 0x4220a8u: goto label_4220a8;
        case 0x4220acu: goto label_4220ac;
        case 0x4220b0u: goto label_4220b0;
        case 0x4220b4u: goto label_4220b4;
        case 0x4220b8u: goto label_4220b8;
        case 0x4220bcu: goto label_4220bc;
        case 0x4220c0u: goto label_4220c0;
        case 0x4220c4u: goto label_4220c4;
        case 0x4220c8u: goto label_4220c8;
        case 0x4220ccu: goto label_4220cc;
        case 0x4220d0u: goto label_4220d0;
        case 0x4220d4u: goto label_4220d4;
        case 0x4220d8u: goto label_4220d8;
        case 0x4220dcu: goto label_4220dc;
        case 0x4220e0u: goto label_4220e0;
        case 0x4220e4u: goto label_4220e4;
        case 0x4220e8u: goto label_4220e8;
        case 0x4220ecu: goto label_4220ec;
        case 0x4220f0u: goto label_4220f0;
        case 0x4220f4u: goto label_4220f4;
        case 0x4220f8u: goto label_4220f8;
        case 0x4220fcu: goto label_4220fc;
        case 0x422100u: goto label_422100;
        case 0x422104u: goto label_422104;
        case 0x422108u: goto label_422108;
        case 0x42210cu: goto label_42210c;
        case 0x422110u: goto label_422110;
        case 0x422114u: goto label_422114;
        case 0x422118u: goto label_422118;
        case 0x42211cu: goto label_42211c;
        case 0x422120u: goto label_422120;
        case 0x422124u: goto label_422124;
        case 0x422128u: goto label_422128;
        case 0x42212cu: goto label_42212c;
        case 0x422130u: goto label_422130;
        case 0x422134u: goto label_422134;
        case 0x422138u: goto label_422138;
        case 0x42213cu: goto label_42213c;
        case 0x422140u: goto label_422140;
        case 0x422144u: goto label_422144;
        case 0x422148u: goto label_422148;
        case 0x42214cu: goto label_42214c;
        case 0x422150u: goto label_422150;
        case 0x422154u: goto label_422154;
        case 0x422158u: goto label_422158;
        case 0x42215cu: goto label_42215c;
        case 0x422160u: goto label_422160;
        case 0x422164u: goto label_422164;
        case 0x422168u: goto label_422168;
        case 0x42216cu: goto label_42216c;
        case 0x422170u: goto label_422170;
        case 0x422174u: goto label_422174;
        case 0x422178u: goto label_422178;
        case 0x42217cu: goto label_42217c;
        case 0x422180u: goto label_422180;
        case 0x422184u: goto label_422184;
        case 0x422188u: goto label_422188;
        case 0x42218cu: goto label_42218c;
        case 0x422190u: goto label_422190;
        case 0x422194u: goto label_422194;
        case 0x422198u: goto label_422198;
        case 0x42219cu: goto label_42219c;
        case 0x4221a0u: goto label_4221a0;
        case 0x4221a4u: goto label_4221a4;
        case 0x4221a8u: goto label_4221a8;
        case 0x4221acu: goto label_4221ac;
        case 0x4221b0u: goto label_4221b0;
        case 0x4221b4u: goto label_4221b4;
        case 0x4221b8u: goto label_4221b8;
        case 0x4221bcu: goto label_4221bc;
        case 0x4221c0u: goto label_4221c0;
        case 0x4221c4u: goto label_4221c4;
        case 0x4221c8u: goto label_4221c8;
        case 0x4221ccu: goto label_4221cc;
        case 0x4221d0u: goto label_4221d0;
        case 0x4221d4u: goto label_4221d4;
        case 0x4221d8u: goto label_4221d8;
        case 0x4221dcu: goto label_4221dc;
        case 0x4221e0u: goto label_4221e0;
        case 0x4221e4u: goto label_4221e4;
        case 0x4221e8u: goto label_4221e8;
        case 0x4221ecu: goto label_4221ec;
        case 0x4221f0u: goto label_4221f0;
        case 0x4221f4u: goto label_4221f4;
        case 0x4221f8u: goto label_4221f8;
        case 0x4221fcu: goto label_4221fc;
        case 0x422200u: goto label_422200;
        case 0x422204u: goto label_422204;
        case 0x422208u: goto label_422208;
        case 0x42220cu: goto label_42220c;
        case 0x422210u: goto label_422210;
        case 0x422214u: goto label_422214;
        case 0x422218u: goto label_422218;
        case 0x42221cu: goto label_42221c;
        case 0x422220u: goto label_422220;
        case 0x422224u: goto label_422224;
        case 0x422228u: goto label_422228;
        case 0x42222cu: goto label_42222c;
        case 0x422230u: goto label_422230;
        case 0x422234u: goto label_422234;
        case 0x422238u: goto label_422238;
        case 0x42223cu: goto label_42223c;
        case 0x422240u: goto label_422240;
        case 0x422244u: goto label_422244;
        case 0x422248u: goto label_422248;
        case 0x42224cu: goto label_42224c;
        case 0x422250u: goto label_422250;
        case 0x422254u: goto label_422254;
        case 0x422258u: goto label_422258;
        case 0x42225cu: goto label_42225c;
        case 0x422260u: goto label_422260;
        case 0x422264u: goto label_422264;
        case 0x422268u: goto label_422268;
        case 0x42226cu: goto label_42226c;
        case 0x422270u: goto label_422270;
        case 0x422274u: goto label_422274;
        case 0x422278u: goto label_422278;
        case 0x42227cu: goto label_42227c;
        case 0x422280u: goto label_422280;
        case 0x422284u: goto label_422284;
        case 0x422288u: goto label_422288;
        case 0x42228cu: goto label_42228c;
        case 0x422290u: goto label_422290;
        case 0x422294u: goto label_422294;
        case 0x422298u: goto label_422298;
        case 0x42229cu: goto label_42229c;
        case 0x4222a0u: goto label_4222a0;
        case 0x4222a4u: goto label_4222a4;
        case 0x4222a8u: goto label_4222a8;
        case 0x4222acu: goto label_4222ac;
        case 0x4222b0u: goto label_4222b0;
        case 0x4222b4u: goto label_4222b4;
        case 0x4222b8u: goto label_4222b8;
        case 0x4222bcu: goto label_4222bc;
        case 0x4222c0u: goto label_4222c0;
        case 0x4222c4u: goto label_4222c4;
        case 0x4222c8u: goto label_4222c8;
        case 0x4222ccu: goto label_4222cc;
        case 0x4222d0u: goto label_4222d0;
        case 0x4222d4u: goto label_4222d4;
        case 0x4222d8u: goto label_4222d8;
        case 0x4222dcu: goto label_4222dc;
        case 0x4222e0u: goto label_4222e0;
        case 0x4222e4u: goto label_4222e4;
        case 0x4222e8u: goto label_4222e8;
        case 0x4222ecu: goto label_4222ec;
        case 0x4222f0u: goto label_4222f0;
        case 0x4222f4u: goto label_4222f4;
        case 0x4222f8u: goto label_4222f8;
        case 0x4222fcu: goto label_4222fc;
        case 0x422300u: goto label_422300;
        case 0x422304u: goto label_422304;
        case 0x422308u: goto label_422308;
        case 0x42230cu: goto label_42230c;
        case 0x422310u: goto label_422310;
        case 0x422314u: goto label_422314;
        case 0x422318u: goto label_422318;
        case 0x42231cu: goto label_42231c;
        case 0x422320u: goto label_422320;
        case 0x422324u: goto label_422324;
        case 0x422328u: goto label_422328;
        case 0x42232cu: goto label_42232c;
        case 0x422330u: goto label_422330;
        case 0x422334u: goto label_422334;
        case 0x422338u: goto label_422338;
        case 0x42233cu: goto label_42233c;
        case 0x422340u: goto label_422340;
        case 0x422344u: goto label_422344;
        case 0x422348u: goto label_422348;
        case 0x42234cu: goto label_42234c;
        case 0x422350u: goto label_422350;
        case 0x422354u: goto label_422354;
        case 0x422358u: goto label_422358;
        case 0x42235cu: goto label_42235c;
        default: break;
    }

    ctx->pc = 0x421ef0u;

label_421ef0:
    // 0x421ef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x421ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_421ef4:
    // 0x421ef4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x421ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_421ef8:
    // 0x421ef8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x421ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_421efc:
    // 0x421efc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x421efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_421f00:
    // 0x421f00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x421f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_421f04:
    // 0x421f04: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x421f04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_421f08:
    // 0x421f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x421f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_421f0c:
    // 0x421f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x421f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_421f10:
    // 0x421f10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x421f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421f14:
    // 0x421f14: 0xc0aeaf4  jal         func_2BABD0
label_421f18:
    if (ctx->pc == 0x421F18u) {
        ctx->pc = 0x421F18u;
            // 0x421f18: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x421F1Cu;
        goto label_421f1c;
    }
    ctx->pc = 0x421F14u;
    SET_GPR_U32(ctx, 31, 0x421F1Cu);
    ctx->pc = 0x421F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421F14u;
            // 0x421f18: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F1Cu; }
        if (ctx->pc != 0x421F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F1Cu; }
        if (ctx->pc != 0x421F1Cu) { return; }
    }
    ctx->pc = 0x421F1Cu;
label_421f1c:
    // 0x421f1c: 0xc10892c  jal         func_4224B0
label_421f20:
    if (ctx->pc == 0x421F20u) {
        ctx->pc = 0x421F20u;
            // 0x421f20: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->pc = 0x421F24u;
        goto label_421f24;
    }
    ctx->pc = 0x421F1Cu;
    SET_GPR_U32(ctx, 31, 0x421F24u);
    ctx->pc = 0x421F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421F1Cu;
            // 0x421f20: 0x26440064  addiu       $a0, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4224B0u;
    if (runtime->hasFunction(0x4224B0u)) {
        auto targetFn = runtime->lookupFunction(0x4224B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F24u; }
        if (ctx->pc != 0x421F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004224B0_0x4224b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F24u; }
        if (ctx->pc != 0x421F24u) { return; }
    }
    ctx->pc = 0x421F24u;
label_421f24:
    // 0x421f24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x421f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_421f28:
    // 0x421f28: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x421f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_421f2c:
    // 0x421f2c: 0x2463bc80  addiu       $v1, $v1, -0x4380
    ctx->pc = 0x421f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950016));
label_421f30:
    // 0x421f30: 0x2442bcb8  addiu       $v0, $v0, -0x4348
    ctx->pc = 0x421f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950072));
label_421f34:
    // 0x421f34: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x421f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_421f38:
    // 0x421f38: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x421f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_421f3c:
    // 0x421f3c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x421f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_421f40:
    // 0x421f40: 0xc108924  jal         func_422490
label_421f44:
    if (ctx->pc == 0x421F44u) {
        ctx->pc = 0x421F44u;
            // 0x421f44: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x421F48u;
        goto label_421f48;
    }
    ctx->pc = 0x421F40u;
    SET_GPR_U32(ctx, 31, 0x421F48u);
    ctx->pc = 0x421F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421F40u;
            // 0x421f44: 0xae400068  sw          $zero, 0x68($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x422490u;
    if (runtime->hasFunction(0x422490u)) {
        auto targetFn = runtime->lookupFunction(0x422490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F48u; }
        if (ctx->pc != 0x421F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00422490_0x422490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F48u; }
        if (ctx->pc != 0x421F48u) { return; }
    }
    ctx->pc = 0x421F48u;
label_421f48:
    // 0x421f48: 0xc108924  jal         func_422490
label_421f4c:
    if (ctx->pc == 0x421F4Cu) {
        ctx->pc = 0x421F4Cu;
            // 0x421f4c: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->pc = 0x421F50u;
        goto label_421f50;
    }
    ctx->pc = 0x421F48u;
    SET_GPR_U32(ctx, 31, 0x421F50u);
    ctx->pc = 0x421F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421F48u;
            // 0x421f4c: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x422490u;
    if (runtime->hasFunction(0x422490u)) {
        auto targetFn = runtime->lookupFunction(0x422490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F50u; }
        if (ctx->pc != 0x421F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00422490_0x422490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F50u; }
        if (ctx->pc != 0x421F50u) { return; }
    }
    ctx->pc = 0x421F50u;
label_421f50:
    // 0x421f50: 0xc1088e4  jal         func_422390
label_421f54:
    if (ctx->pc == 0x421F54u) {
        ctx->pc = 0x421F54u;
            // 0x421f54: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->pc = 0x421F58u;
        goto label_421f58;
    }
    ctx->pc = 0x421F50u;
    SET_GPR_U32(ctx, 31, 0x421F58u);
    ctx->pc = 0x421F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421F50u;
            // 0x421f54: 0x26440084  addiu       $a0, $s2, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x422390u;
    if (runtime->hasFunction(0x422390u)) {
        auto targetFn = runtime->lookupFunction(0x422390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F58u; }
        if (ctx->pc != 0x421F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00422390_0x422390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F58u; }
        if (ctx->pc != 0x421F58u) { return; }
    }
    ctx->pc = 0x421F58u;
label_421f58:
    // 0x421f58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x421f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_421f5c:
    // 0x421f5c: 0xc0aeac0  jal         func_2BAB00
label_421f60:
    if (ctx->pc == 0x421F60u) {
        ctx->pc = 0x421F60u;
            // 0x421f60: 0xae400174  sw          $zero, 0x174($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 0));
        ctx->pc = 0x421F64u;
        goto label_421f64;
    }
    ctx->pc = 0x421F5Cu;
    SET_GPR_U32(ctx, 31, 0x421F64u);
    ctx->pc = 0x421F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421F5Cu;
            // 0x421f60: 0xae400174  sw          $zero, 0x174($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F64u; }
        if (ctx->pc != 0x421F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F64u; }
        if (ctx->pc != 0x421F64u) { return; }
    }
    ctx->pc = 0x421F64u;
label_421f64:
    // 0x421f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x421f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_421f68:
    // 0x421f68: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_421f6c:
    if (ctx->pc == 0x421F6Cu) {
        ctx->pc = 0x421F70u;
        goto label_421f70;
    }
    ctx->pc = 0x421F68u;
    {
        const bool branch_taken_0x421f68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x421f68) {
            ctx->pc = 0x421FF0u;
            goto label_421ff0;
        }
    }
    ctx->pc = 0x421F70u;
label_421f70:
    // 0x421f70: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x421f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_421f74:
    // 0x421f74: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x421f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_421f78:
    // 0x421f78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x421f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_421f7c:
    // 0x421f7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x421f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_421f80:
    // 0x421f80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x421f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_421f84:
    // 0x421f84: 0xc040138  jal         func_1004E0
label_421f88:
    if (ctx->pc == 0x421F88u) {
        ctx->pc = 0x421F88u;
            // 0x421f88: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x421F8Cu;
        goto label_421f8c;
    }
    ctx->pc = 0x421F84u;
    SET_GPR_U32(ctx, 31, 0x421F8Cu);
    ctx->pc = 0x421F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421F84u;
            // 0x421f88: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F8Cu; }
        if (ctx->pc != 0x421F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421F8Cu; }
        if (ctx->pc != 0x421F8Cu) { return; }
    }
    ctx->pc = 0x421F8Cu;
label_421f8c:
    // 0x421f8c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x421f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_421f90:
    // 0x421f90: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x421f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_421f94:
    // 0x421f94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x421f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_421f98:
    // 0x421f98: 0x24a54520  addiu       $a1, $a1, 0x4520
    ctx->pc = 0x421f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17696));
label_421f9c:
    // 0x421f9c: 0x24c60b40  addiu       $a2, $a2, 0xB40
    ctx->pc = 0x421f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2880));
label_421fa0:
    // 0x421fa0: 0x24070190  addiu       $a3, $zero, 0x190
    ctx->pc = 0x421fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_421fa4:
    // 0x421fa4: 0xc040840  jal         func_102100
label_421fa8:
    if (ctx->pc == 0x421FA8u) {
        ctx->pc = 0x421FA8u;
            // 0x421fa8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x421FACu;
        goto label_421fac;
    }
    ctx->pc = 0x421FA4u;
    SET_GPR_U32(ctx, 31, 0x421FACu);
    ctx->pc = 0x421FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421FA4u;
            // 0x421fa8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421FACu; }
        if (ctx->pc != 0x421FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421FACu; }
        if (ctx->pc != 0x421FACu) { return; }
    }
    ctx->pc = 0x421FACu;
label_421fac:
    // 0x421fac: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x421facu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_421fb0:
    // 0x421fb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x421fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_421fb4:
    // 0x421fb4: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x421fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_421fb8:
    // 0x421fb8: 0xc1088e0  jal         func_422380
label_421fbc:
    if (ctx->pc == 0x421FBCu) {
        ctx->pc = 0x421FBCu;
            // 0x421fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x421FC0u;
        goto label_421fc0;
    }
    ctx->pc = 0x421FB8u;
    SET_GPR_U32(ctx, 31, 0x421FC0u);
    ctx->pc = 0x421FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421FB8u;
            // 0x421fbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x422380u;
    if (runtime->hasFunction(0x422380u)) {
        auto targetFn = runtime->lookupFunction(0x422380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421FC0u; }
        if (ctx->pc != 0x421FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00422380_0x422380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421FC0u; }
        if (ctx->pc != 0x421FC0u) { return; }
    }
    ctx->pc = 0x421FC0u;
label_421fc0:
    // 0x421fc0: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x421fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_421fc4:
    // 0x421fc4: 0xc1088e0  jal         func_422380
label_421fc8:
    if (ctx->pc == 0x421FC8u) {
        ctx->pc = 0x421FC8u;
            // 0x421fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x421FCCu;
        goto label_421fcc;
    }
    ctx->pc = 0x421FC4u;
    SET_GPR_U32(ctx, 31, 0x421FCCu);
    ctx->pc = 0x421FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421FC4u;
            // 0x421fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x422380u;
    if (runtime->hasFunction(0x422380u)) {
        auto targetFn = runtime->lookupFunction(0x422380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421FCCu; }
        if (ctx->pc != 0x421FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00422380_0x422380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421FCCu; }
        if (ctx->pc != 0x421FCCu) { return; }
    }
    ctx->pc = 0x421FCCu;
label_421fcc:
    // 0x421fcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x421fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421fd0:
    // 0x421fd0: 0x26440078  addiu       $a0, $s2, 0x78
    ctx->pc = 0x421fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
label_421fd4:
    // 0x421fd4: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x421fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_421fd8:
    // 0x421fd8: 0xc1088d8  jal         func_422360
label_421fdc:
    if (ctx->pc == 0x421FDCu) {
        ctx->pc = 0x421FDCu;
            // 0x421fdc: 0xafb30058  sw          $s3, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
        ctx->pc = 0x421FE0u;
        goto label_421fe0;
    }
    ctx->pc = 0x421FD8u;
    SET_GPR_U32(ctx, 31, 0x421FE0u);
    ctx->pc = 0x421FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x421FD8u;
            // 0x421fdc: 0xafb30058  sw          $s3, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x422360u;
    if (runtime->hasFunction(0x422360u)) {
        auto targetFn = runtime->lookupFunction(0x422360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421FE0u; }
        if (ctx->pc != 0x421FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00422360_0x422360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x421FE0u; }
        if (ctx->pc != 0x421FE0u) { return; }
    }
    ctx->pc = 0x421FE0u;
label_421fe0:
    // 0x421fe0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x421fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_421fe4:
    // 0x421fe4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x421fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_421fe8:
    // 0x421fe8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_421fec:
    if (ctx->pc == 0x421FECu) {
        ctx->pc = 0x421FECu;
            // 0x421fec: 0x26730190  addiu       $s3, $s3, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
        ctx->pc = 0x421FF0u;
        goto label_421ff0;
    }
    ctx->pc = 0x421FE8u;
    {
        const bool branch_taken_0x421fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x421FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x421FE8u;
            // 0x421fec: 0x26730190  addiu       $s3, $s3, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421fe8) {
            ctx->pc = 0x421FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_421fd0;
        }
    }
    ctx->pc = 0x421FF0u;
label_421ff0:
    // 0x421ff0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x421ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_421ff4:
    // 0x421ff4: 0x2442bbb0  addiu       $v0, $v0, -0x4450
    ctx->pc = 0x421ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949808));
label_421ff8:
    // 0x421ff8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x421ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_421ffc:
    // 0x421ffc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x421ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_422000:
    // 0x422000: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x422000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_422004:
    // 0x422004: 0x2442bbe8  addiu       $v0, $v0, -0x4418
    ctx->pc = 0x422004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949864));
label_422008:
    // 0x422008: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x422008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_42200c:
    // 0x42200c: 0xae400178  sw          $zero, 0x178($s2)
    ctx->pc = 0x42200cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 0));
label_422010:
    // 0x422010: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x422010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_422014:
    // 0x422014: 0xae40017c  sw          $zero, 0x17C($s2)
    ctx->pc = 0x422014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 0));
label_422018:
    // 0x422018: 0xae400184  sw          $zero, 0x184($s2)
    ctx->pc = 0x422018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 0));
label_42201c:
    // 0x42201c: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x42201cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
label_422020:
    // 0x422020: 0xae40018c  sw          $zero, 0x18C($s2)
    ctx->pc = 0x422020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 0));
label_422024:
    // 0x422024: 0xae400190  sw          $zero, 0x190($s2)
    ctx->pc = 0x422024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 0));
label_422028:
    // 0x422028: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x422028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_42202c:
    // 0x42202c: 0xae400198  sw          $zero, 0x198($s2)
    ctx->pc = 0x42202cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 0));
label_422030:
    // 0x422030: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x422030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_422034:
    // 0x422034: 0xc0a7a88  jal         func_29EA20
label_422038:
    if (ctx->pc == 0x422038u) {
        ctx->pc = 0x422038u;
            // 0x422038: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x42203Cu;
        goto label_42203c;
    }
    ctx->pc = 0x422034u;
    SET_GPR_U32(ctx, 31, 0x42203Cu);
    ctx->pc = 0x422038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422034u;
            // 0x422038: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42203Cu; }
        if (ctx->pc != 0x42203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42203Cu; }
        if (ctx->pc != 0x42203Cu) { return; }
    }
    ctx->pc = 0x42203Cu;
label_42203c:
    // 0x42203c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x42203cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_422040:
    // 0x422040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x422040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_422044:
    // 0x422044: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_422048:
    if (ctx->pc == 0x422048u) {
        ctx->pc = 0x422048u;
            // 0x422048: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42204Cu;
        goto label_42204c;
    }
    ctx->pc = 0x422044u;
    {
        const bool branch_taken_0x422044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x422048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422044u;
            // 0x422048: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422044) {
            ctx->pc = 0x422060u;
            goto label_422060;
        }
    }
    ctx->pc = 0x42204Cu;
label_42204c:
    // 0x42204c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x42204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_422050:
    // 0x422050: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x422050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_422054:
    // 0x422054: 0xc0827ac  jal         func_209EB0
label_422058:
    if (ctx->pc == 0x422058u) {
        ctx->pc = 0x42205Cu;
        goto label_42205c;
    }
    ctx->pc = 0x422054u;
    SET_GPR_U32(ctx, 31, 0x42205Cu);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42205Cu; }
        if (ctx->pc != 0x42205Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42205Cu; }
        if (ctx->pc != 0x42205Cu) { return; }
    }
    ctx->pc = 0x42205Cu;
label_42205c:
    // 0x42205c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_422060:
    // 0x422060: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x422060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
label_422064:
    // 0x422064: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x422064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_422068:
    // 0x422068: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x422068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_42206c:
    // 0x42206c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x42206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_422070:
    // 0x422070: 0xc0a7a88  jal         func_29EA20
label_422074:
    if (ctx->pc == 0x422074u) {
        ctx->pc = 0x422074u;
            // 0x422074: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x422078u;
        goto label_422078;
    }
    ctx->pc = 0x422070u;
    SET_GPR_U32(ctx, 31, 0x422078u);
    ctx->pc = 0x422074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422070u;
            // 0x422074: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422078u; }
        if (ctx->pc != 0x422078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422078u; }
        if (ctx->pc != 0x422078u) { return; }
    }
    ctx->pc = 0x422078u;
label_422078:
    // 0x422078: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x422078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_42207c:
    // 0x42207c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_422080:
    // 0x422080: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_422084:
    if (ctx->pc == 0x422084u) {
        ctx->pc = 0x422084u;
            // 0x422084: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x422088u;
        goto label_422088;
    }
    ctx->pc = 0x422080u;
    {
        const bool branch_taken_0x422080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x422084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422080u;
            // 0x422084: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422080) {
            ctx->pc = 0x42209Cu;
            goto label_42209c;
        }
    }
    ctx->pc = 0x422088u;
label_422088:
    // 0x422088: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x422088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_42208c:
    // 0x42208c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42208cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_422090:
    // 0x422090: 0xc0827ac  jal         func_209EB0
label_422094:
    if (ctx->pc == 0x422094u) {
        ctx->pc = 0x422098u;
        goto label_422098;
    }
    ctx->pc = 0x422090u;
    SET_GPR_U32(ctx, 31, 0x422098u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422098u; }
        if (ctx->pc != 0x422098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422098u; }
        if (ctx->pc != 0x422098u) { return; }
    }
    ctx->pc = 0x422098u;
label_422098:
    // 0x422098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x422098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42209c:
    // 0x42209c: 0xae44005c  sw          $a0, 0x5C($s2)
    ctx->pc = 0x42209cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 4));
label_4220a0:
    // 0x4220a0: 0xc040138  jal         func_1004E0
label_4220a4:
    if (ctx->pc == 0x4220A4u) {
        ctx->pc = 0x4220A4u;
            // 0x4220a4: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->pc = 0x4220A8u;
        goto label_4220a8;
    }
    ctx->pc = 0x4220A0u;
    SET_GPR_U32(ctx, 31, 0x4220A8u);
    ctx->pc = 0x4220A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4220A0u;
            // 0x4220a4: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4220A8u; }
        if (ctx->pc != 0x4220A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4220A8u; }
        if (ctx->pc != 0x4220A8u) { return; }
    }
    ctx->pc = 0x4220A8u;
label_4220a8:
    // 0x4220a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4220a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4220ac:
    // 0x4220ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4220acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4220b0:
    // 0x4220b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4220b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4220b4:
    // 0x4220b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4220b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4220b8:
    // 0x4220b8: 0xc040840  jal         func_102100
label_4220bc:
    if (ctx->pc == 0x4220BCu) {
        ctx->pc = 0x4220BCu;
            // 0x4220bc: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x4220C0u;
        goto label_4220c0;
    }
    ctx->pc = 0x4220B8u;
    SET_GPR_U32(ctx, 31, 0x4220C0u);
    ctx->pc = 0x4220BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4220B8u;
            // 0x4220bc: 0x24080064  addiu       $t0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4220C0u; }
        if (ctx->pc != 0x4220C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4220C0u; }
        if (ctx->pc != 0x4220C0u) { return; }
    }
    ctx->pc = 0x4220C0u;
label_4220c0:
    // 0x4220c0: 0xae42017c  sw          $v0, 0x17C($s2)
    ctx->pc = 0x4220c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 2));
label_4220c4:
    // 0x4220c4: 0x26440184  addiu       $a0, $s2, 0x184
    ctx->pc = 0x4220c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 388));
label_4220c8:
    // 0x4220c8: 0xc0788fc  jal         func_1E23F0
label_4220cc:
    if (ctx->pc == 0x4220CCu) {
        ctx->pc = 0x4220CCu;
            // 0x4220cc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x4220D0u;
        goto label_4220d0;
    }
    ctx->pc = 0x4220C8u;
    SET_GPR_U32(ctx, 31, 0x4220D0u);
    ctx->pc = 0x4220CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4220C8u;
            // 0x4220cc: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4220D0u; }
        if (ctx->pc != 0x4220D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4220D0u; }
        if (ctx->pc != 0x4220D0u) { return; }
    }
    ctx->pc = 0x4220D0u;
label_4220d0:
    // 0x4220d0: 0x26440190  addiu       $a0, $s2, 0x190
    ctx->pc = 0x4220d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
label_4220d4:
    // 0x4220d4: 0xc0788fc  jal         func_1E23F0
label_4220d8:
    if (ctx->pc == 0x4220D8u) {
        ctx->pc = 0x4220D8u;
            // 0x4220d8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x4220DCu;
        goto label_4220dc;
    }
    ctx->pc = 0x4220D4u;
    SET_GPR_U32(ctx, 31, 0x4220DCu);
    ctx->pc = 0x4220D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4220D4u;
            // 0x4220d8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4220DCu; }
        if (ctx->pc != 0x4220DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4220DCu; }
        if (ctx->pc != 0x4220DCu) { return; }
    }
    ctx->pc = 0x4220DCu;
label_4220dc:
    // 0x4220dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4220dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4220e0:
    // 0x4220e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4220e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4220e4:
    // 0x4220e4: 0x8e42017c  lw          $v0, 0x17C($s2)
    ctx->pc = 0x4220e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_4220e8:
    // 0x4220e8: 0x26440190  addiu       $a0, $s2, 0x190
    ctx->pc = 0x4220e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
label_4220ec:
    // 0x4220ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4220ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4220f0:
    // 0x4220f0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4220f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4220f4:
    // 0x4220f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4220f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4220f8:
    // 0x4220f8: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x4220f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_4220fc:
    // 0x4220fc: 0x8e430194  lw          $v1, 0x194($s2)
    ctx->pc = 0x4220fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_422100:
    // 0x422100: 0x8e420198  lw          $v0, 0x198($s2)
    ctx->pc = 0x422100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
label_422104:
    // 0x422104: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x422104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_422108:
    // 0x422108: 0xc0a997c  jal         func_2A65F0
label_42210c:
    if (ctx->pc == 0x42210Cu) {
        ctx->pc = 0x42210Cu;
            // 0x42210c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x422110u;
        goto label_422110;
    }
    ctx->pc = 0x422108u;
    SET_GPR_U32(ctx, 31, 0x422110u);
    ctx->pc = 0x42210Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422108u;
            // 0x42210c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422110u; }
        if (ctx->pc != 0x422110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422110u; }
        if (ctx->pc != 0x422110u) { return; }
    }
    ctx->pc = 0x422110u;
label_422110:
    // 0x422110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x422110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_422114:
    // 0x422114: 0x2e220064  sltiu       $v0, $s1, 0x64
    ctx->pc = 0x422114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_422118:
    // 0x422118: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_42211c:
    if (ctx->pc == 0x42211Cu) {
        ctx->pc = 0x42211Cu;
            // 0x42211c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x422120u;
        goto label_422120;
    }
    ctx->pc = 0x422118u;
    {
        const bool branch_taken_0x422118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422118u;
            // 0x42211c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422118) {
            ctx->pc = 0x4220E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4220e4;
        }
    }
    ctx->pc = 0x422120u;
label_422120:
    // 0x422120: 0xc040180  jal         func_100600
label_422124:
    if (ctx->pc == 0x422124u) {
        ctx->pc = 0x422124u;
            // 0x422124: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->pc = 0x422128u;
        goto label_422128;
    }
    ctx->pc = 0x422120u;
    SET_GPR_U32(ctx, 31, 0x422128u);
    ctx->pc = 0x422124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422120u;
            // 0x422124: 0x24040098  addiu       $a0, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422128u; }
        if (ctx->pc != 0x422128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422128u; }
        if (ctx->pc != 0x422128u) { return; }
    }
    ctx->pc = 0x422128u;
label_422128:
    // 0x422128: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_42212c:
    if (ctx->pc == 0x42212Cu) {
        ctx->pc = 0x42212Cu;
            // 0x42212c: 0xae420180  sw          $v0, 0x180($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 2));
        ctx->pc = 0x422130u;
        goto label_422130;
    }
    ctx->pc = 0x422128u;
    {
        const bool branch_taken_0x422128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422128) {
            ctx->pc = 0x42212Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422128u;
            // 0x42212c: 0xae420180  sw          $v0, 0x180($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422140u;
            goto label_422140;
        }
    }
    ctx->pc = 0x422130u;
label_422130:
    // 0x422130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x422130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_422134:
    // 0x422134: 0xc12a270  jal         func_4A89C0
label_422138:
    if (ctx->pc == 0x422138u) {
        ctx->pc = 0x422138u;
            // 0x422138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42213Cu;
        goto label_42213c;
    }
    ctx->pc = 0x422134u;
    SET_GPR_U32(ctx, 31, 0x42213Cu);
    ctx->pc = 0x422138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422134u;
            // 0x422138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A89C0u;
    if (runtime->hasFunction(0x4A89C0u)) {
        auto targetFn = runtime->lookupFunction(0x4A89C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42213Cu; }
        if (ctx->pc != 0x42213Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A89C0_0x4a89c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42213Cu; }
        if (ctx->pc != 0x42213Cu) { return; }
    }
    ctx->pc = 0x42213Cu;
label_42213c:
    // 0x42213c: 0xae420180  sw          $v0, 0x180($s2)
    ctx->pc = 0x42213cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 2));
label_422140:
    // 0x422140: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x422140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_422144:
    // 0x422144: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x422144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_422148:
    // 0x422148: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x422148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42214c:
    // 0x42214c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42214cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_422150:
    // 0x422150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x422150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_422154:
    // 0x422154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x422154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_422158:
    // 0x422158: 0x3e00008  jr          $ra
label_42215c:
    if (ctx->pc == 0x42215Cu) {
        ctx->pc = 0x42215Cu;
            // 0x42215c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x422160u;
        goto label_422160;
    }
    ctx->pc = 0x422158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42215Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422158u;
            // 0x42215c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x422160u;
label_422160:
    // 0x422160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x422160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_422164:
    // 0x422164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x422164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_422168:
    // 0x422168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x422168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42216c:
    // 0x42216c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_422170:
    // 0x422170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x422170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_422174:
    // 0x422174: 0x12200072  beqz        $s1, . + 4 + (0x72 << 2)
label_422178:
    if (ctx->pc == 0x422178u) {
        ctx->pc = 0x422178u;
            // 0x422178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42217Cu;
        goto label_42217c;
    }
    ctx->pc = 0x422174u;
    {
        const bool branch_taken_0x422174 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x422178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422174u;
            // 0x422178: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422174) {
            ctx->pc = 0x422340u;
            goto label_422340;
        }
    }
    ctx->pc = 0x42217Cu;
label_42217c:
    // 0x42217c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42217cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_422180:
    // 0x422180: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x422180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_422184:
    // 0x422184: 0x2463bc80  addiu       $v1, $v1, -0x4380
    ctx->pc = 0x422184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950016));
label_422188:
    // 0x422188: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x422188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_42218c:
    // 0x42218c: 0x2442bcb8  addiu       $v0, $v0, -0x4348
    ctx->pc = 0x42218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950072));
label_422190:
    // 0x422190: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x422190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_422194:
    // 0x422194: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x422194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_422198:
    // 0x422198: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x422198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_42219c:
    // 0x42219c: 0xc0407c0  jal         func_101F00
label_4221a0:
    if (ctx->pc == 0x4221A0u) {
        ctx->pc = 0x4221A0u;
            // 0x4221a0: 0x24a50b40  addiu       $a1, $a1, 0xB40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2880));
        ctx->pc = 0x4221A4u;
        goto label_4221a4;
    }
    ctx->pc = 0x42219Cu;
    SET_GPR_U32(ctx, 31, 0x4221A4u);
    ctx->pc = 0x4221A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42219Cu;
            // 0x4221a0: 0x24a50b40  addiu       $a1, $a1, 0xB40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4221A4u; }
        if (ctx->pc != 0x4221A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4221A4u; }
        if (ctx->pc != 0x4221A4u) { return; }
    }
    ctx->pc = 0x4221A4u;
label_4221a4:
    // 0x4221a4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4221a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4221a8:
    // 0x4221a8: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_4221ac:
    if (ctx->pc == 0x4221ACu) {
        ctx->pc = 0x4221ACu;
            // 0x4221ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4221B0u;
        goto label_4221b0;
    }
    ctx->pc = 0x4221A8u;
    {
        const bool branch_taken_0x4221a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4221a8) {
            ctx->pc = 0x4221ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4221A8u;
            // 0x4221ac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422254u;
            goto label_422254;
        }
    }
    ctx->pc = 0x4221B0u;
label_4221b0:
    // 0x4221b0: 0x26220154  addiu       $v0, $s1, 0x154
    ctx->pc = 0x4221b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
label_4221b4:
    // 0x4221b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4221b8:
    if (ctx->pc == 0x4221B8u) {
        ctx->pc = 0x4221B8u;
            // 0x4221b8: 0x26220134  addiu       $v0, $s1, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
        ctx->pc = 0x4221BCu;
        goto label_4221bc;
    }
    ctx->pc = 0x4221B4u;
    {
        const bool branch_taken_0x4221b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4221b4) {
            ctx->pc = 0x4221B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4221B4u;
            // 0x4221b8: 0x26220134  addiu       $v0, $s1, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4221C8u;
            goto label_4221c8;
        }
    }
    ctx->pc = 0x4221BCu;
label_4221bc:
    // 0x4221bc: 0xc07507c  jal         func_1D41F0
label_4221c0:
    if (ctx->pc == 0x4221C0u) {
        ctx->pc = 0x4221C0u;
            // 0x4221c0: 0x8e240158  lw          $a0, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->pc = 0x4221C4u;
        goto label_4221c4;
    }
    ctx->pc = 0x4221BCu;
    SET_GPR_U32(ctx, 31, 0x4221C4u);
    ctx->pc = 0x4221C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4221BCu;
            // 0x4221c0: 0x8e240158  lw          $a0, 0x158($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4221C4u; }
        if (ctx->pc != 0x4221C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4221C4u; }
        if (ctx->pc != 0x4221C4u) { return; }
    }
    ctx->pc = 0x4221C4u;
label_4221c4:
    // 0x4221c4: 0x26220134  addiu       $v0, $s1, 0x134
    ctx->pc = 0x4221c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
label_4221c8:
    // 0x4221c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4221cc:
    if (ctx->pc == 0x4221CCu) {
        ctx->pc = 0x4221CCu;
            // 0x4221cc: 0x26220114  addiu       $v0, $s1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
        ctx->pc = 0x4221D0u;
        goto label_4221d0;
    }
    ctx->pc = 0x4221C8u;
    {
        const bool branch_taken_0x4221c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4221c8) {
            ctx->pc = 0x4221CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4221C8u;
            // 0x4221cc: 0x26220114  addiu       $v0, $s1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4221DCu;
            goto label_4221dc;
        }
    }
    ctx->pc = 0x4221D0u;
label_4221d0:
    // 0x4221d0: 0xc07507c  jal         func_1D41F0
label_4221d4:
    if (ctx->pc == 0x4221D4u) {
        ctx->pc = 0x4221D4u;
            // 0x4221d4: 0x8e240138  lw          $a0, 0x138($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
        ctx->pc = 0x4221D8u;
        goto label_4221d8;
    }
    ctx->pc = 0x4221D0u;
    SET_GPR_U32(ctx, 31, 0x4221D8u);
    ctx->pc = 0x4221D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4221D0u;
            // 0x4221d4: 0x8e240138  lw          $a0, 0x138($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4221D8u; }
        if (ctx->pc != 0x4221D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4221D8u; }
        if (ctx->pc != 0x4221D8u) { return; }
    }
    ctx->pc = 0x4221D8u;
label_4221d8:
    // 0x4221d8: 0x26220114  addiu       $v0, $s1, 0x114
    ctx->pc = 0x4221d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
label_4221dc:
    // 0x4221dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4221e0:
    if (ctx->pc == 0x4221E0u) {
        ctx->pc = 0x4221E0u;
            // 0x4221e0: 0x262200f4  addiu       $v0, $s1, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
        ctx->pc = 0x4221E4u;
        goto label_4221e4;
    }
    ctx->pc = 0x4221DCu;
    {
        const bool branch_taken_0x4221dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4221dc) {
            ctx->pc = 0x4221E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4221DCu;
            // 0x4221e0: 0x262200f4  addiu       $v0, $s1, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4221F0u;
            goto label_4221f0;
        }
    }
    ctx->pc = 0x4221E4u;
label_4221e4:
    // 0x4221e4: 0xc07507c  jal         func_1D41F0
label_4221e8:
    if (ctx->pc == 0x4221E8u) {
        ctx->pc = 0x4221E8u;
            // 0x4221e8: 0x8e240118  lw          $a0, 0x118($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
        ctx->pc = 0x4221ECu;
        goto label_4221ec;
    }
    ctx->pc = 0x4221E4u;
    SET_GPR_U32(ctx, 31, 0x4221ECu);
    ctx->pc = 0x4221E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4221E4u;
            // 0x4221e8: 0x8e240118  lw          $a0, 0x118($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4221ECu; }
        if (ctx->pc != 0x4221ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4221ECu; }
        if (ctx->pc != 0x4221ECu) { return; }
    }
    ctx->pc = 0x4221ECu;
label_4221ec:
    // 0x4221ec: 0x262200f4  addiu       $v0, $s1, 0xF4
    ctx->pc = 0x4221ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
label_4221f0:
    // 0x4221f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4221f4:
    if (ctx->pc == 0x4221F4u) {
        ctx->pc = 0x4221F4u;
            // 0x4221f4: 0x262200d4  addiu       $v0, $s1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
        ctx->pc = 0x4221F8u;
        goto label_4221f8;
    }
    ctx->pc = 0x4221F0u;
    {
        const bool branch_taken_0x4221f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4221f0) {
            ctx->pc = 0x4221F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4221F0u;
            // 0x4221f4: 0x262200d4  addiu       $v0, $s1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422204u;
            goto label_422204;
        }
    }
    ctx->pc = 0x4221F8u;
label_4221f8:
    // 0x4221f8: 0xc07507c  jal         func_1D41F0
label_4221fc:
    if (ctx->pc == 0x4221FCu) {
        ctx->pc = 0x4221FCu;
            // 0x4221fc: 0x8e2400f8  lw          $a0, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->pc = 0x422200u;
        goto label_422200;
    }
    ctx->pc = 0x4221F8u;
    SET_GPR_U32(ctx, 31, 0x422200u);
    ctx->pc = 0x4221FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4221F8u;
            // 0x4221fc: 0x8e2400f8  lw          $a0, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422200u; }
        if (ctx->pc != 0x422200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422200u; }
        if (ctx->pc != 0x422200u) { return; }
    }
    ctx->pc = 0x422200u;
label_422200:
    // 0x422200: 0x262200d4  addiu       $v0, $s1, 0xD4
    ctx->pc = 0x422200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_422204:
    // 0x422204: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_422208:
    if (ctx->pc == 0x422208u) {
        ctx->pc = 0x422208u;
            // 0x422208: 0x262200c4  addiu       $v0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->pc = 0x42220Cu;
        goto label_42220c;
    }
    ctx->pc = 0x422204u;
    {
        const bool branch_taken_0x422204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422204) {
            ctx->pc = 0x422208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422204u;
            // 0x422208: 0x262200c4  addiu       $v0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422218u;
            goto label_422218;
        }
    }
    ctx->pc = 0x42220Cu;
label_42220c:
    // 0x42220c: 0xc07507c  jal         func_1D41F0
label_422210:
    if (ctx->pc == 0x422210u) {
        ctx->pc = 0x422210u;
            // 0x422210: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->pc = 0x422214u;
        goto label_422214;
    }
    ctx->pc = 0x42220Cu;
    SET_GPR_U32(ctx, 31, 0x422214u);
    ctx->pc = 0x422210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42220Cu;
            // 0x422210: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422214u; }
        if (ctx->pc != 0x422214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422214u; }
        if (ctx->pc != 0x422214u) { return; }
    }
    ctx->pc = 0x422214u;
label_422214:
    // 0x422214: 0x262200c4  addiu       $v0, $s1, 0xC4
    ctx->pc = 0x422214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_422218:
    // 0x422218: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_42221c:
    if (ctx->pc == 0x42221Cu) {
        ctx->pc = 0x42221Cu;
            // 0x42221c: 0x262200a4  addiu       $v0, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->pc = 0x422220u;
        goto label_422220;
    }
    ctx->pc = 0x422218u;
    {
        const bool branch_taken_0x422218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422218) {
            ctx->pc = 0x42221Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422218u;
            // 0x42221c: 0x262200a4  addiu       $v0, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42222Cu;
            goto label_42222c;
        }
    }
    ctx->pc = 0x422220u;
label_422220:
    // 0x422220: 0xc07507c  jal         func_1D41F0
label_422224:
    if (ctx->pc == 0x422224u) {
        ctx->pc = 0x422224u;
            // 0x422224: 0x8e2400c8  lw          $a0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->pc = 0x422228u;
        goto label_422228;
    }
    ctx->pc = 0x422220u;
    SET_GPR_U32(ctx, 31, 0x422228u);
    ctx->pc = 0x422224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422220u;
            // 0x422224: 0x8e2400c8  lw          $a0, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422228u; }
        if (ctx->pc != 0x422228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422228u; }
        if (ctx->pc != 0x422228u) { return; }
    }
    ctx->pc = 0x422228u;
label_422228:
    // 0x422228: 0x262200a4  addiu       $v0, $s1, 0xA4
    ctx->pc = 0x422228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_42222c:
    // 0x42222c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_422230:
    if (ctx->pc == 0x422230u) {
        ctx->pc = 0x422230u;
            // 0x422230: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x422234u;
        goto label_422234;
    }
    ctx->pc = 0x42222Cu;
    {
        const bool branch_taken_0x42222c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42222c) {
            ctx->pc = 0x422230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42222Cu;
            // 0x422230: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422240u;
            goto label_422240;
        }
    }
    ctx->pc = 0x422234u;
label_422234:
    // 0x422234: 0xc07507c  jal         func_1D41F0
label_422238:
    if (ctx->pc == 0x422238u) {
        ctx->pc = 0x422238u;
            // 0x422238: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->pc = 0x42223Cu;
        goto label_42223c;
    }
    ctx->pc = 0x422234u;
    SET_GPR_U32(ctx, 31, 0x42223Cu);
    ctx->pc = 0x422238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422234u;
            // 0x422238: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42223Cu; }
        if (ctx->pc != 0x42223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42223Cu; }
        if (ctx->pc != 0x42223Cu) { return; }
    }
    ctx->pc = 0x42223Cu;
label_42223c:
    // 0x42223c: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x42223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_422240:
    // 0x422240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_422244:
    if (ctx->pc == 0x422244u) {
        ctx->pc = 0x422248u;
        goto label_422248;
    }
    ctx->pc = 0x422240u;
    {
        const bool branch_taken_0x422240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422240) {
            ctx->pc = 0x422250u;
            goto label_422250;
        }
    }
    ctx->pc = 0x422248u;
label_422248:
    // 0x422248: 0xc07507c  jal         func_1D41F0
label_42224c:
    if (ctx->pc == 0x42224Cu) {
        ctx->pc = 0x42224Cu;
            // 0x42224c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x422250u;
        goto label_422250;
    }
    ctx->pc = 0x422248u;
    SET_GPR_U32(ctx, 31, 0x422250u);
    ctx->pc = 0x42224Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422248u;
            // 0x42224c: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422250u; }
        if (ctx->pc != 0x422250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422250u; }
        if (ctx->pc != 0x422250u) { return; }
    }
    ctx->pc = 0x422250u;
label_422250:
    // 0x422250: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x422250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_422254:
    // 0x422254: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_422258:
    if (ctx->pc == 0x422258u) {
        ctx->pc = 0x422258u;
            // 0x422258: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x42225Cu;
        goto label_42225c;
    }
    ctx->pc = 0x422254u;
    {
        const bool branch_taken_0x422254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422254) {
            ctx->pc = 0x422258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422254u;
            // 0x422258: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422284u;
            goto label_422284;
        }
    }
    ctx->pc = 0x42225Cu;
label_42225c:
    // 0x42225c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_422260:
    if (ctx->pc == 0x422260u) {
        ctx->pc = 0x422264u;
        goto label_422264;
    }
    ctx->pc = 0x42225Cu;
    {
        const bool branch_taken_0x42225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42225c) {
            ctx->pc = 0x422280u;
            goto label_422280;
        }
    }
    ctx->pc = 0x422264u;
label_422264:
    // 0x422264: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_422268:
    if (ctx->pc == 0x422268u) {
        ctx->pc = 0x42226Cu;
        goto label_42226c;
    }
    ctx->pc = 0x422264u;
    {
        const bool branch_taken_0x422264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422264) {
            ctx->pc = 0x422280u;
            goto label_422280;
        }
    }
    ctx->pc = 0x42226Cu;
label_42226c:
    // 0x42226c: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x42226cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_422270:
    // 0x422270: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_422274:
    if (ctx->pc == 0x422274u) {
        ctx->pc = 0x422278u;
        goto label_422278;
    }
    ctx->pc = 0x422270u;
    {
        const bool branch_taken_0x422270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x422270) {
            ctx->pc = 0x422280u;
            goto label_422280;
        }
    }
    ctx->pc = 0x422278u;
label_422278:
    // 0x422278: 0xc0400a8  jal         func_1002A0
label_42227c:
    if (ctx->pc == 0x42227Cu) {
        ctx->pc = 0x422280u;
        goto label_422280;
    }
    ctx->pc = 0x422278u;
    SET_GPR_U32(ctx, 31, 0x422280u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422280u; }
        if (ctx->pc != 0x422280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422280u; }
        if (ctx->pc != 0x422280u) { return; }
    }
    ctx->pc = 0x422280u;
label_422280:
    // 0x422280: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x422280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_422284:
    // 0x422284: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_422288:
    if (ctx->pc == 0x422288u) {
        ctx->pc = 0x422288u;
            // 0x422288: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x42228Cu;
        goto label_42228c;
    }
    ctx->pc = 0x422284u;
    {
        const bool branch_taken_0x422284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422284) {
            ctx->pc = 0x422288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422284u;
            // 0x422288: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4222B4u;
            goto label_4222b4;
        }
    }
    ctx->pc = 0x42228Cu;
label_42228c:
    // 0x42228c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_422290:
    if (ctx->pc == 0x422290u) {
        ctx->pc = 0x422294u;
        goto label_422294;
    }
    ctx->pc = 0x42228Cu;
    {
        const bool branch_taken_0x42228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42228c) {
            ctx->pc = 0x4222B0u;
            goto label_4222b0;
        }
    }
    ctx->pc = 0x422294u;
label_422294:
    // 0x422294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_422298:
    if (ctx->pc == 0x422298u) {
        ctx->pc = 0x42229Cu;
        goto label_42229c;
    }
    ctx->pc = 0x422294u;
    {
        const bool branch_taken_0x422294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x422294) {
            ctx->pc = 0x4222B0u;
            goto label_4222b0;
        }
    }
    ctx->pc = 0x42229Cu;
label_42229c:
    // 0x42229c: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x42229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4222a0:
    // 0x4222a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4222a4:
    if (ctx->pc == 0x4222A4u) {
        ctx->pc = 0x4222A8u;
        goto label_4222a8;
    }
    ctx->pc = 0x4222A0u;
    {
        const bool branch_taken_0x4222a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4222a0) {
            ctx->pc = 0x4222B0u;
            goto label_4222b0;
        }
    }
    ctx->pc = 0x4222A8u;
label_4222a8:
    // 0x4222a8: 0xc0400a8  jal         func_1002A0
label_4222ac:
    if (ctx->pc == 0x4222ACu) {
        ctx->pc = 0x4222B0u;
        goto label_4222b0;
    }
    ctx->pc = 0x4222A8u;
    SET_GPR_U32(ctx, 31, 0x4222B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4222B0u; }
        if (ctx->pc != 0x4222B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4222B0u; }
        if (ctx->pc != 0x4222B0u) { return; }
    }
    ctx->pc = 0x4222B0u;
label_4222b0:
    // 0x4222b0: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4222b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4222b4:
    // 0x4222b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4222b8:
    if (ctx->pc == 0x4222B8u) {
        ctx->pc = 0x4222BCu;
        goto label_4222bc;
    }
    ctx->pc = 0x4222B4u;
    {
        const bool branch_taken_0x4222b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4222b4) {
            ctx->pc = 0x4222D0u;
            goto label_4222d0;
        }
    }
    ctx->pc = 0x4222BCu;
label_4222bc:
    // 0x4222bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4222bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4222c0:
    // 0x4222c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4222c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4222c4:
    // 0x4222c4: 0x2463bc68  addiu       $v1, $v1, -0x4398
    ctx->pc = 0x4222c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949992));
label_4222c8:
    // 0x4222c8: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4222c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4222cc:
    // 0x4222cc: 0xac400cd0  sw          $zero, 0xCD0($v0)
    ctx->pc = 0x4222ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3280), GPR_U32(ctx, 0));
label_4222d0:
    // 0x4222d0: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4222d4:
    if (ctx->pc == 0x4222D4u) {
        ctx->pc = 0x4222D4u;
            // 0x4222d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4222D8u;
        goto label_4222d8;
    }
    ctx->pc = 0x4222D0u;
    {
        const bool branch_taken_0x4222d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4222d0) {
            ctx->pc = 0x4222D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4222D0u;
            // 0x4222d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42232Cu;
            goto label_42232c;
        }
    }
    ctx->pc = 0x4222D8u;
label_4222d8:
    // 0x4222d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4222d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4222dc:
    // 0x4222dc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4222dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4222e0:
    // 0x4222e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4222e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4222e4:
    // 0x4222e4: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4222e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4222e8:
    // 0x4222e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4222ec:
    if (ctx->pc == 0x4222ECu) {
        ctx->pc = 0x4222ECu;
            // 0x4222ec: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4222F0u;
        goto label_4222f0;
    }
    ctx->pc = 0x4222E8u;
    {
        const bool branch_taken_0x4222e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4222e8) {
            ctx->pc = 0x4222ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4222E8u;
            // 0x4222ec: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422304u;
            goto label_422304;
        }
    }
    ctx->pc = 0x4222F0u;
label_4222f0:
    // 0x4222f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4222f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4222f4:
    // 0x4222f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4222f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4222f8:
    // 0x4222f8: 0x320f809  jalr        $t9
label_4222fc:
    if (ctx->pc == 0x4222FCu) {
        ctx->pc = 0x4222FCu;
            // 0x4222fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x422300u;
        goto label_422300;
    }
    ctx->pc = 0x4222F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x422300u);
        ctx->pc = 0x4222FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4222F8u;
            // 0x4222fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x422300u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x422300u; }
            if (ctx->pc != 0x422300u) { return; }
        }
        }
    }
    ctx->pc = 0x422300u;
label_422300:
    // 0x422300: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x422300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_422304:
    // 0x422304: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_422308:
    if (ctx->pc == 0x422308u) {
        ctx->pc = 0x422308u;
            // 0x422308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42230Cu;
        goto label_42230c;
    }
    ctx->pc = 0x422304u;
    {
        const bool branch_taken_0x422304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x422304) {
            ctx->pc = 0x422308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422304u;
            // 0x422308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422320u;
            goto label_422320;
        }
    }
    ctx->pc = 0x42230Cu;
label_42230c:
    // 0x42230c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42230cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_422310:
    // 0x422310: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x422310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_422314:
    // 0x422314: 0x320f809  jalr        $t9
label_422318:
    if (ctx->pc == 0x422318u) {
        ctx->pc = 0x422318u;
            // 0x422318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x42231Cu;
        goto label_42231c;
    }
    ctx->pc = 0x422314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42231Cu);
        ctx->pc = 0x422318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422314u;
            // 0x422318: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42231Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42231Cu; }
            if (ctx->pc != 0x42231Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42231Cu;
label_42231c:
    // 0x42231c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_422320:
    // 0x422320: 0xc075bf8  jal         func_1D6FE0
label_422324:
    if (ctx->pc == 0x422324u) {
        ctx->pc = 0x422324u;
            // 0x422324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422328u;
        goto label_422328;
    }
    ctx->pc = 0x422320u;
    SET_GPR_U32(ctx, 31, 0x422328u);
    ctx->pc = 0x422324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422320u;
            // 0x422324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422328u; }
        if (ctx->pc != 0x422328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422328u; }
        if (ctx->pc != 0x422328u) { return; }
    }
    ctx->pc = 0x422328u;
label_422328:
    // 0x422328: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x422328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42232c:
    // 0x42232c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42232cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_422330:
    // 0x422330: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_422334:
    if (ctx->pc == 0x422334u) {
        ctx->pc = 0x422334u;
            // 0x422334: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422338u;
        goto label_422338;
    }
    ctx->pc = 0x422330u;
    {
        const bool branch_taken_0x422330 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x422330) {
            ctx->pc = 0x422334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422330u;
            // 0x422334: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422344u;
            goto label_422344;
        }
    }
    ctx->pc = 0x422338u;
label_422338:
    // 0x422338: 0xc0400a8  jal         func_1002A0
label_42233c:
    if (ctx->pc == 0x42233Cu) {
        ctx->pc = 0x42233Cu;
            // 0x42233c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422340u;
        goto label_422340;
    }
    ctx->pc = 0x422338u;
    SET_GPR_U32(ctx, 31, 0x422340u);
    ctx->pc = 0x42233Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422338u;
            // 0x42233c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422340u; }
        if (ctx->pc != 0x422340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422340u; }
        if (ctx->pc != 0x422340u) { return; }
    }
    ctx->pc = 0x422340u;
label_422340:
    // 0x422340: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x422340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_422344:
    // 0x422344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x422344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_422348:
    // 0x422348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x422348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42234c:
    // 0x42234c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42234cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_422350:
    // 0x422350: 0x3e00008  jr          $ra
label_422354:
    if (ctx->pc == 0x422354u) {
        ctx->pc = 0x422354u;
            // 0x422354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x422358u;
        goto label_422358;
    }
    ctx->pc = 0x422350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422350u;
            // 0x422354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x422358u;
label_422358:
    // 0x422358: 0x0  nop
    ctx->pc = 0x422358u;
    // NOP
label_42235c:
    // 0x42235c: 0x0  nop
    ctx->pc = 0x42235cu;
    // NOP
}
