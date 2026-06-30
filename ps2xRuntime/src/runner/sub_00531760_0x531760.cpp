#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00531760
// Address: 0x531760 - 0x531b30
void sub_00531760_0x531760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00531760_0x531760");
#endif

    switch (ctx->pc) {
        case 0x531760u: goto label_531760;
        case 0x531764u: goto label_531764;
        case 0x531768u: goto label_531768;
        case 0x53176cu: goto label_53176c;
        case 0x531770u: goto label_531770;
        case 0x531774u: goto label_531774;
        case 0x531778u: goto label_531778;
        case 0x53177cu: goto label_53177c;
        case 0x531780u: goto label_531780;
        case 0x531784u: goto label_531784;
        case 0x531788u: goto label_531788;
        case 0x53178cu: goto label_53178c;
        case 0x531790u: goto label_531790;
        case 0x531794u: goto label_531794;
        case 0x531798u: goto label_531798;
        case 0x53179cu: goto label_53179c;
        case 0x5317a0u: goto label_5317a0;
        case 0x5317a4u: goto label_5317a4;
        case 0x5317a8u: goto label_5317a8;
        case 0x5317acu: goto label_5317ac;
        case 0x5317b0u: goto label_5317b0;
        case 0x5317b4u: goto label_5317b4;
        case 0x5317b8u: goto label_5317b8;
        case 0x5317bcu: goto label_5317bc;
        case 0x5317c0u: goto label_5317c0;
        case 0x5317c4u: goto label_5317c4;
        case 0x5317c8u: goto label_5317c8;
        case 0x5317ccu: goto label_5317cc;
        case 0x5317d0u: goto label_5317d0;
        case 0x5317d4u: goto label_5317d4;
        case 0x5317d8u: goto label_5317d8;
        case 0x5317dcu: goto label_5317dc;
        case 0x5317e0u: goto label_5317e0;
        case 0x5317e4u: goto label_5317e4;
        case 0x5317e8u: goto label_5317e8;
        case 0x5317ecu: goto label_5317ec;
        case 0x5317f0u: goto label_5317f0;
        case 0x5317f4u: goto label_5317f4;
        case 0x5317f8u: goto label_5317f8;
        case 0x5317fcu: goto label_5317fc;
        case 0x531800u: goto label_531800;
        case 0x531804u: goto label_531804;
        case 0x531808u: goto label_531808;
        case 0x53180cu: goto label_53180c;
        case 0x531810u: goto label_531810;
        case 0x531814u: goto label_531814;
        case 0x531818u: goto label_531818;
        case 0x53181cu: goto label_53181c;
        case 0x531820u: goto label_531820;
        case 0x531824u: goto label_531824;
        case 0x531828u: goto label_531828;
        case 0x53182cu: goto label_53182c;
        case 0x531830u: goto label_531830;
        case 0x531834u: goto label_531834;
        case 0x531838u: goto label_531838;
        case 0x53183cu: goto label_53183c;
        case 0x531840u: goto label_531840;
        case 0x531844u: goto label_531844;
        case 0x531848u: goto label_531848;
        case 0x53184cu: goto label_53184c;
        case 0x531850u: goto label_531850;
        case 0x531854u: goto label_531854;
        case 0x531858u: goto label_531858;
        case 0x53185cu: goto label_53185c;
        case 0x531860u: goto label_531860;
        case 0x531864u: goto label_531864;
        case 0x531868u: goto label_531868;
        case 0x53186cu: goto label_53186c;
        case 0x531870u: goto label_531870;
        case 0x531874u: goto label_531874;
        case 0x531878u: goto label_531878;
        case 0x53187cu: goto label_53187c;
        case 0x531880u: goto label_531880;
        case 0x531884u: goto label_531884;
        case 0x531888u: goto label_531888;
        case 0x53188cu: goto label_53188c;
        case 0x531890u: goto label_531890;
        case 0x531894u: goto label_531894;
        case 0x531898u: goto label_531898;
        case 0x53189cu: goto label_53189c;
        case 0x5318a0u: goto label_5318a0;
        case 0x5318a4u: goto label_5318a4;
        case 0x5318a8u: goto label_5318a8;
        case 0x5318acu: goto label_5318ac;
        case 0x5318b0u: goto label_5318b0;
        case 0x5318b4u: goto label_5318b4;
        case 0x5318b8u: goto label_5318b8;
        case 0x5318bcu: goto label_5318bc;
        case 0x5318c0u: goto label_5318c0;
        case 0x5318c4u: goto label_5318c4;
        case 0x5318c8u: goto label_5318c8;
        case 0x5318ccu: goto label_5318cc;
        case 0x5318d0u: goto label_5318d0;
        case 0x5318d4u: goto label_5318d4;
        case 0x5318d8u: goto label_5318d8;
        case 0x5318dcu: goto label_5318dc;
        case 0x5318e0u: goto label_5318e0;
        case 0x5318e4u: goto label_5318e4;
        case 0x5318e8u: goto label_5318e8;
        case 0x5318ecu: goto label_5318ec;
        case 0x5318f0u: goto label_5318f0;
        case 0x5318f4u: goto label_5318f4;
        case 0x5318f8u: goto label_5318f8;
        case 0x5318fcu: goto label_5318fc;
        case 0x531900u: goto label_531900;
        case 0x531904u: goto label_531904;
        case 0x531908u: goto label_531908;
        case 0x53190cu: goto label_53190c;
        case 0x531910u: goto label_531910;
        case 0x531914u: goto label_531914;
        case 0x531918u: goto label_531918;
        case 0x53191cu: goto label_53191c;
        case 0x531920u: goto label_531920;
        case 0x531924u: goto label_531924;
        case 0x531928u: goto label_531928;
        case 0x53192cu: goto label_53192c;
        case 0x531930u: goto label_531930;
        case 0x531934u: goto label_531934;
        case 0x531938u: goto label_531938;
        case 0x53193cu: goto label_53193c;
        case 0x531940u: goto label_531940;
        case 0x531944u: goto label_531944;
        case 0x531948u: goto label_531948;
        case 0x53194cu: goto label_53194c;
        case 0x531950u: goto label_531950;
        case 0x531954u: goto label_531954;
        case 0x531958u: goto label_531958;
        case 0x53195cu: goto label_53195c;
        case 0x531960u: goto label_531960;
        case 0x531964u: goto label_531964;
        case 0x531968u: goto label_531968;
        case 0x53196cu: goto label_53196c;
        case 0x531970u: goto label_531970;
        case 0x531974u: goto label_531974;
        case 0x531978u: goto label_531978;
        case 0x53197cu: goto label_53197c;
        case 0x531980u: goto label_531980;
        case 0x531984u: goto label_531984;
        case 0x531988u: goto label_531988;
        case 0x53198cu: goto label_53198c;
        case 0x531990u: goto label_531990;
        case 0x531994u: goto label_531994;
        case 0x531998u: goto label_531998;
        case 0x53199cu: goto label_53199c;
        case 0x5319a0u: goto label_5319a0;
        case 0x5319a4u: goto label_5319a4;
        case 0x5319a8u: goto label_5319a8;
        case 0x5319acu: goto label_5319ac;
        case 0x5319b0u: goto label_5319b0;
        case 0x5319b4u: goto label_5319b4;
        case 0x5319b8u: goto label_5319b8;
        case 0x5319bcu: goto label_5319bc;
        case 0x5319c0u: goto label_5319c0;
        case 0x5319c4u: goto label_5319c4;
        case 0x5319c8u: goto label_5319c8;
        case 0x5319ccu: goto label_5319cc;
        case 0x5319d0u: goto label_5319d0;
        case 0x5319d4u: goto label_5319d4;
        case 0x5319d8u: goto label_5319d8;
        case 0x5319dcu: goto label_5319dc;
        case 0x5319e0u: goto label_5319e0;
        case 0x5319e4u: goto label_5319e4;
        case 0x5319e8u: goto label_5319e8;
        case 0x5319ecu: goto label_5319ec;
        case 0x5319f0u: goto label_5319f0;
        case 0x5319f4u: goto label_5319f4;
        case 0x5319f8u: goto label_5319f8;
        case 0x5319fcu: goto label_5319fc;
        case 0x531a00u: goto label_531a00;
        case 0x531a04u: goto label_531a04;
        case 0x531a08u: goto label_531a08;
        case 0x531a0cu: goto label_531a0c;
        case 0x531a10u: goto label_531a10;
        case 0x531a14u: goto label_531a14;
        case 0x531a18u: goto label_531a18;
        case 0x531a1cu: goto label_531a1c;
        case 0x531a20u: goto label_531a20;
        case 0x531a24u: goto label_531a24;
        case 0x531a28u: goto label_531a28;
        case 0x531a2cu: goto label_531a2c;
        case 0x531a30u: goto label_531a30;
        case 0x531a34u: goto label_531a34;
        case 0x531a38u: goto label_531a38;
        case 0x531a3cu: goto label_531a3c;
        case 0x531a40u: goto label_531a40;
        case 0x531a44u: goto label_531a44;
        case 0x531a48u: goto label_531a48;
        case 0x531a4cu: goto label_531a4c;
        case 0x531a50u: goto label_531a50;
        case 0x531a54u: goto label_531a54;
        case 0x531a58u: goto label_531a58;
        case 0x531a5cu: goto label_531a5c;
        case 0x531a60u: goto label_531a60;
        case 0x531a64u: goto label_531a64;
        case 0x531a68u: goto label_531a68;
        case 0x531a6cu: goto label_531a6c;
        case 0x531a70u: goto label_531a70;
        case 0x531a74u: goto label_531a74;
        case 0x531a78u: goto label_531a78;
        case 0x531a7cu: goto label_531a7c;
        case 0x531a80u: goto label_531a80;
        case 0x531a84u: goto label_531a84;
        case 0x531a88u: goto label_531a88;
        case 0x531a8cu: goto label_531a8c;
        case 0x531a90u: goto label_531a90;
        case 0x531a94u: goto label_531a94;
        case 0x531a98u: goto label_531a98;
        case 0x531a9cu: goto label_531a9c;
        case 0x531aa0u: goto label_531aa0;
        case 0x531aa4u: goto label_531aa4;
        case 0x531aa8u: goto label_531aa8;
        case 0x531aacu: goto label_531aac;
        case 0x531ab0u: goto label_531ab0;
        case 0x531ab4u: goto label_531ab4;
        case 0x531ab8u: goto label_531ab8;
        case 0x531abcu: goto label_531abc;
        case 0x531ac0u: goto label_531ac0;
        case 0x531ac4u: goto label_531ac4;
        case 0x531ac8u: goto label_531ac8;
        case 0x531accu: goto label_531acc;
        case 0x531ad0u: goto label_531ad0;
        case 0x531ad4u: goto label_531ad4;
        case 0x531ad8u: goto label_531ad8;
        case 0x531adcu: goto label_531adc;
        case 0x531ae0u: goto label_531ae0;
        case 0x531ae4u: goto label_531ae4;
        case 0x531ae8u: goto label_531ae8;
        case 0x531aecu: goto label_531aec;
        case 0x531af0u: goto label_531af0;
        case 0x531af4u: goto label_531af4;
        case 0x531af8u: goto label_531af8;
        case 0x531afcu: goto label_531afc;
        case 0x531b00u: goto label_531b00;
        case 0x531b04u: goto label_531b04;
        case 0x531b08u: goto label_531b08;
        case 0x531b0cu: goto label_531b0c;
        case 0x531b10u: goto label_531b10;
        case 0x531b14u: goto label_531b14;
        case 0x531b18u: goto label_531b18;
        case 0x531b1cu: goto label_531b1c;
        case 0x531b20u: goto label_531b20;
        case 0x531b24u: goto label_531b24;
        case 0x531b28u: goto label_531b28;
        case 0x531b2cu: goto label_531b2c;
        default: break;
    }

    ctx->pc = 0x531760u;

label_531760:
    // 0x531760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x531760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_531764:
    // 0x531764: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x531764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_531768:
    // 0x531768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x531768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53176c:
    // 0x53176c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x53176cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_531770:
    // 0x531770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x531770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_531774:
    // 0x531774: 0xc10f6ec  jal         func_43DBB0
label_531778:
    if (ctx->pc == 0x531778u) {
        ctx->pc = 0x531778u;
            // 0x531778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53177Cu;
        goto label_53177c;
    }
    ctx->pc = 0x531774u;
    SET_GPR_U32(ctx, 31, 0x53177Cu);
    ctx->pc = 0x531778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531774u;
            // 0x531778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53177Cu; }
        if (ctx->pc != 0x53177Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53177Cu; }
        if (ctx->pc != 0x53177Cu) { return; }
    }
    ctx->pc = 0x53177Cu;
label_53177c:
    // 0x53177c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_531780:
    // 0x531780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x531780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_531784:
    // 0x531784: 0x24636d20  addiu       $v1, $v1, 0x6D20
    ctx->pc = 0x531784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27936));
label_531788:
    // 0x531788: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x531788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_53178c:
    // 0x53178c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x53178cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_531790:
    // 0x531790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x531790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_531794:
    // 0x531794: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x531794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_531798:
    // 0x531798: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x531798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_53179c:
    // 0x53179c: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x53179cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_5317a0:
    // 0x5317a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5317a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5317a4:
    // 0x5317a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5317a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5317a8:
    // 0x5317a8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x5317a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_5317ac:
    // 0x5317ac: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x5317acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_5317b0:
    // 0x5317b0: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x5317b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_5317b4:
    // 0x5317b4: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x5317b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_5317b8:
    // 0x5317b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x5317b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5317bc:
    // 0x5317bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5317bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5317c0:
    // 0x5317c0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x5317c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_5317c4:
    // 0x5317c4: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x5317c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_5317c8:
    // 0x5317c8: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x5317c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_5317cc:
    // 0x5317cc: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x5317ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
label_5317d0:
    // 0x5317d0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x5317d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_5317d4:
    // 0x5317d4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5317d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_5317d8:
    // 0x5317d8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x5317d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_5317dc:
    // 0x5317dc: 0xc04a576  jal         func_1295D8
label_5317e0:
    if (ctx->pc == 0x5317E0u) {
        ctx->pc = 0x5317E0u;
            // 0x5317e0: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x5317E4u;
        goto label_5317e4;
    }
    ctx->pc = 0x5317DCu;
    SET_GPR_U32(ctx, 31, 0x5317E4u);
    ctx->pc = 0x5317E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5317DCu;
            // 0x5317e0: 0xa200006c  sb          $zero, 0x6C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5317E4u; }
        if (ctx->pc != 0x5317E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5317E4u; }
        if (ctx->pc != 0x5317E4u) { return; }
    }
    ctx->pc = 0x5317E4u;
label_5317e4:
    // 0x5317e4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x5317e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_5317e8:
    // 0x5317e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5317e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5317ec:
    // 0x5317ec: 0xc04a576  jal         func_1295D8
label_5317f0:
    if (ctx->pc == 0x5317F0u) {
        ctx->pc = 0x5317F0u;
            // 0x5317f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5317F4u;
        goto label_5317f4;
    }
    ctx->pc = 0x5317ECu;
    SET_GPR_U32(ctx, 31, 0x5317F4u);
    ctx->pc = 0x5317F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5317ECu;
            // 0x5317f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5317F4u; }
        if (ctx->pc != 0x5317F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5317F4u; }
        if (ctx->pc != 0x5317F4u) { return; }
    }
    ctx->pc = 0x5317F4u;
label_5317f4:
    // 0x5317f4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x5317f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_5317f8:
    // 0x5317f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5317f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5317fc:
    // 0x5317fc: 0xc04a576  jal         func_1295D8
label_531800:
    if (ctx->pc == 0x531800u) {
        ctx->pc = 0x531800u;
            // 0x531800: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x531804u;
        goto label_531804;
    }
    ctx->pc = 0x5317FCu;
    SET_GPR_U32(ctx, 31, 0x531804u);
    ctx->pc = 0x531800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5317FCu;
            // 0x531800: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531804u; }
        if (ctx->pc != 0x531804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531804u; }
        if (ctx->pc != 0x531804u) { return; }
    }
    ctx->pc = 0x531804u;
label_531804:
    // 0x531804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x531804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_531808:
    // 0x531808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x531808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53180c:
    // 0x53180c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53180cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_531810:
    // 0x531810: 0x3e00008  jr          $ra
label_531814:
    if (ctx->pc == 0x531814u) {
        ctx->pc = 0x531814u;
            // 0x531814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x531818u;
        goto label_531818;
    }
    ctx->pc = 0x531810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x531814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531810u;
            // 0x531814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x531818u;
label_531818:
    // 0x531818: 0x0  nop
    ctx->pc = 0x531818u;
    // NOP
label_53181c:
    // 0x53181c: 0x0  nop
    ctx->pc = 0x53181cu;
    // NOP
label_531820:
    // 0x531820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x531820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_531824:
    // 0x531824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x531824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_531828:
    // 0x531828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x531828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53182c:
    // 0x53182c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53182cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_531830:
    // 0x531830: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_531834:
    if (ctx->pc == 0x531834u) {
        ctx->pc = 0x531834u;
            // 0x531834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531838u;
        goto label_531838;
    }
    ctx->pc = 0x531830u;
    {
        const bool branch_taken_0x531830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x531830) {
            ctx->pc = 0x531834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531830u;
            // 0x531834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531880u;
            goto label_531880;
        }
    }
    ctx->pc = 0x531838u;
label_531838:
    // 0x531838: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x531838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53183c:
    // 0x53183c: 0x24426d20  addiu       $v0, $v0, 0x6D20
    ctx->pc = 0x53183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27936));
label_531840:
    // 0x531840: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_531844:
    if (ctx->pc == 0x531844u) {
        ctx->pc = 0x531844u;
            // 0x531844: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x531848u;
        goto label_531848;
    }
    ctx->pc = 0x531840u;
    {
        const bool branch_taken_0x531840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x531844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531840u;
            // 0x531844: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531840) {
            ctx->pc = 0x531864u;
            goto label_531864;
        }
    }
    ctx->pc = 0x531848u;
label_531848:
    // 0x531848: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x531848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53184c:
    // 0x53184c: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x53184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_531850:
    // 0x531850: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_531854:
    if (ctx->pc == 0x531854u) {
        ctx->pc = 0x531854u;
            // 0x531854: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x531858u;
        goto label_531858;
    }
    ctx->pc = 0x531850u;
    {
        const bool branch_taken_0x531850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x531854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531850u;
            // 0x531854: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531850) {
            ctx->pc = 0x531864u;
            goto label_531864;
        }
    }
    ctx->pc = 0x531858u;
label_531858:
    // 0x531858: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x531858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53185c:
    // 0x53185c: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x53185cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_531860:
    // 0x531860: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x531860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_531864:
    // 0x531864: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x531864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_531868:
    // 0x531868: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x531868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53186c:
    // 0x53186c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_531870:
    if (ctx->pc == 0x531870u) {
        ctx->pc = 0x531874u;
        goto label_531874;
    }
    ctx->pc = 0x53186Cu;
    {
        const bool branch_taken_0x53186c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53186c) {
            ctx->pc = 0x53187Cu;
            goto label_53187c;
        }
    }
    ctx->pc = 0x531874u;
label_531874:
    // 0x531874: 0xc0400a8  jal         func_1002A0
label_531878:
    if (ctx->pc == 0x531878u) {
        ctx->pc = 0x531878u;
            // 0x531878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53187Cu;
        goto label_53187c;
    }
    ctx->pc = 0x531874u;
    SET_GPR_U32(ctx, 31, 0x53187Cu);
    ctx->pc = 0x531878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531874u;
            // 0x531878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53187Cu; }
        if (ctx->pc != 0x53187Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53187Cu; }
        if (ctx->pc != 0x53187Cu) { return; }
    }
    ctx->pc = 0x53187Cu;
label_53187c:
    // 0x53187c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x53187cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_531880:
    // 0x531880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x531880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_531884:
    // 0x531884: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x531884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_531888:
    // 0x531888: 0x3e00008  jr          $ra
label_53188c:
    if (ctx->pc == 0x53188Cu) {
        ctx->pc = 0x53188Cu;
            // 0x53188c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x531890u;
        goto label_531890;
    }
    ctx->pc = 0x531888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53188Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531888u;
            // 0x53188c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x531890u;
label_531890:
    // 0x531890: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x531890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_531894:
    // 0x531894: 0x3e00008  jr          $ra
label_531898:
    if (ctx->pc == 0x531898u) {
        ctx->pc = 0x531898u;
            // 0x531898: 0xc440cf80  lwc1        $f0, -0x3080($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x53189Cu;
        goto label_53189c;
    }
    ctx->pc = 0x531894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x531898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531894u;
            // 0x531898: 0xc440cf80  lwc1        $f0, -0x3080($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53189Cu;
label_53189c:
    // 0x53189c: 0x0  nop
    ctx->pc = 0x53189cu;
    // NOP
label_5318a0:
    // 0x5318a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5318a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5318a4:
    // 0x5318a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5318a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5318a8:
    // 0x5318a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5318a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5318ac:
    // 0x5318ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5318acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5318b0:
    // 0x5318b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x5318b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5318b4:
    // 0x5318b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5318b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5318b8:
    // 0x5318b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5318b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5318bc:
    // 0x5318bc: 0x8c900d60  lw          $s0, 0xD60($a0)
    ctx->pc = 0x5318bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_5318c0:
    // 0x5318c0: 0x8c910550  lw          $s1, 0x550($a0)
    ctx->pc = 0x5318c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_5318c4:
    // 0x5318c4: 0xc0be258  jal         func_2F8960
label_5318c8:
    if (ctx->pc == 0x5318C8u) {
        ctx->pc = 0x5318C8u;
            // 0x5318c8: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x5318CCu;
        goto label_5318cc;
    }
    ctx->pc = 0x5318C4u;
    SET_GPR_U32(ctx, 31, 0x5318CCu);
    ctx->pc = 0x5318C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5318C4u;
            // 0x5318c8: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5318CCu; }
        if (ctx->pc != 0x5318CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5318CCu; }
        if (ctx->pc != 0x5318CCu) { return; }
    }
    ctx->pc = 0x5318CCu;
label_5318cc:
    // 0x5318cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x5318ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5318d0:
    // 0x5318d0: 0xc0754b4  jal         func_1D52D0
label_5318d4:
    if (ctx->pc == 0x5318D4u) {
        ctx->pc = 0x5318D4u;
            // 0x5318d4: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->pc = 0x5318D8u;
        goto label_5318d8;
    }
    ctx->pc = 0x5318D0u;
    SET_GPR_U32(ctx, 31, 0x5318D8u);
    ctx->pc = 0x5318D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5318D0u;
            // 0x5318d4: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5318D8u; }
        if (ctx->pc != 0x5318D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5318D8u; }
        if (ctx->pc != 0x5318D8u) { return; }
    }
    ctx->pc = 0x5318D8u;
label_5318d8:
    // 0x5318d8: 0x8e620e30  lw          $v0, 0xE30($s3)
    ctx->pc = 0x5318d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3632)));
label_5318dc:
    // 0x5318dc: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_5318e0:
    if (ctx->pc == 0x5318E0u) {
        ctx->pc = 0x5318E0u;
            // 0x5318e0: 0x8e630e30  lw          $v1, 0xE30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3632)));
        ctx->pc = 0x5318E4u;
        goto label_5318e4;
    }
    ctx->pc = 0x5318DCu;
    {
        const bool branch_taken_0x5318dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5318dc) {
            ctx->pc = 0x5318E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5318DCu;
            // 0x5318e0: 0x8e630e30  lw          $v1, 0xE30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531964u;
            goto label_531964;
        }
    }
    ctx->pc = 0x5318E4u;
label_5318e4:
    // 0x5318e4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x5318e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_5318e8:
    // 0x5318e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5318e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_5318ec:
    // 0x5318ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_5318f0:
    if (ctx->pc == 0x5318F0u) {
        ctx->pc = 0x5318F4u;
        goto label_5318f4;
    }
    ctx->pc = 0x5318ECu;
    {
        const bool branch_taken_0x5318ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5318ec) {
            ctx->pc = 0x531960u;
            goto label_531960;
        }
    }
    ctx->pc = 0x5318F4u;
label_5318f4:
    // 0x5318f4: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x5318f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_5318f8:
    // 0x5318f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5318f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5318fc:
    // 0x5318fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x5318fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_531900:
    // 0x531900: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x531900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_531904:
    // 0x531904: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x531904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_531908:
    // 0x531908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x531908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53190c:
    // 0x53190c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x53190cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_531910:
    // 0x531910: 0x24060031  addiu       $a2, $zero, 0x31
    ctx->pc = 0x531910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_531914:
    // 0x531914: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x531914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_531918:
    // 0x531918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x531918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_53191c:
    // 0x53191c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x53191cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_531920:
    // 0x531920: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x531920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_531924:
    // 0x531924: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x531924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_531928:
    // 0x531928: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x531928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_53192c:
    // 0x53192c: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x53192cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_531930:
    // 0x531930: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x531930u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_531934:
    // 0x531934: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x531934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_531938:
    // 0x531938: 0x320f809  jalr        $t9
label_53193c:
    if (ctx->pc == 0x53193Cu) {
        ctx->pc = 0x53193Cu;
            // 0x53193c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x531940u;
        goto label_531940;
    }
    ctx->pc = 0x531938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x531940u);
        ctx->pc = 0x53193Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531938u;
            // 0x53193c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x531940u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x531940u; }
            if (ctx->pc != 0x531940u) { return; }
        }
        }
    }
    ctx->pc = 0x531940u;
label_531940:
    // 0x531940: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x531940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_531944:
    // 0x531944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x531944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_531948:
    // 0x531948: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x531948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_53194c:
    // 0x53194c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x53194cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_531950:
    // 0x531950: 0x320f809  jalr        $t9
label_531954:
    if (ctx->pc == 0x531954u) {
        ctx->pc = 0x531954u;
            // 0x531954: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x531958u;
        goto label_531958;
    }
    ctx->pc = 0x531950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x531958u);
        ctx->pc = 0x531954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531950u;
            // 0x531954: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x531958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x531958u; }
            if (ctx->pc != 0x531958u) { return; }
        }
        }
    }
    ctx->pc = 0x531958u;
label_531958:
    // 0x531958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x531958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53195c:
    // 0x53195c: 0xae620e30  sw          $v0, 0xE30($s3)
    ctx->pc = 0x53195cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3632), GPR_U32(ctx, 2));
label_531960:
    // 0x531960: 0x8e630e30  lw          $v1, 0xE30($s3)
    ctx->pc = 0x531960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3632)));
label_531964:
    // 0x531964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x531964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_531968:
    // 0x531968: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_53196c:
    if (ctx->pc == 0x53196Cu) {
        ctx->pc = 0x53196Cu;
            // 0x53196c: 0x8e660d74  lw          $a2, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->pc = 0x531970u;
        goto label_531970;
    }
    ctx->pc = 0x531968u;
    {
        const bool branch_taken_0x531968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x531968) {
            ctx->pc = 0x53196Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531968u;
            // 0x53196c: 0x8e660d74  lw          $a2, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5319ACu;
            goto label_5319ac;
        }
    }
    ctx->pc = 0x531970u;
label_531970:
    // 0x531970: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x531970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_531974:
    // 0x531974: 0xc440cf90  lwc1        $f0, -0x3070($v0)
    ctx->pc = 0x531974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_531978:
    // 0x531978: 0xc6620de4  lwc1        $f2, 0xDE4($s3)
    ctx->pc = 0x531978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53197c:
    // 0x53197c: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x53197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_531980:
    // 0x531980: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x531980u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_531984:
    // 0x531984: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x531984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_531988:
    // 0x531988: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x531988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53198c:
    // 0x53198c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x53198cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_531990:
    // 0x531990: 0x0  nop
    ctx->pc = 0x531990u;
    // NOP
label_531994:
    // 0x531994: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x531994u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_531998:
    // 0x531998: 0xc6600dbc  lwc1        $f0, 0xDBC($s3)
    ctx->pc = 0x531998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53199c:
    // 0x53199c: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x53199cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_5319a0:
    // 0x5319a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x5319a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_5319a4:
    // 0x5319a4: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x5319a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_5319a8:
    // 0x5319a8: 0x8e660d74  lw          $a2, 0xD74($s3)
    ctx->pc = 0x5319a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_5319ac:
    // 0x5319ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x5319acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5319b0:
    // 0x5319b0: 0x90c502c5  lbu         $a1, 0x2C5($a2)
    ctx->pc = 0x5319b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 709)));
label_5319b4:
    // 0x5319b4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x5319b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_5319b8:
    // 0x5319b8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x5319b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_5319bc:
    // 0x5319bc: 0x90640281  lbu         $a0, 0x281($v1)
    ctx->pc = 0x5319bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_5319c0:
    // 0x5319c0: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
label_5319c4:
    if (ctx->pc == 0x5319C4u) {
        ctx->pc = 0x5319C4u;
            // 0x5319c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5319C8u;
        goto label_5319c8;
    }
    ctx->pc = 0x5319C0u;
    {
        const bool branch_taken_0x5319c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x5319c0) {
            ctx->pc = 0x5319C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5319C0u;
            // 0x5319c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5319D8u;
            goto label_5319d8;
        }
    }
    ctx->pc = 0x5319C8u;
label_5319c8:
    // 0x5319c8: 0xc0c1334  jal         func_304CD0
label_5319cc:
    if (ctx->pc == 0x5319CCu) {
        ctx->pc = 0x5319CCu;
            // 0x5319cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5319D0u;
        goto label_5319d0;
    }
    ctx->pc = 0x5319C8u;
    SET_GPR_U32(ctx, 31, 0x5319D0u);
    ctx->pc = 0x5319CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5319C8u;
            // 0x5319cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304CD0u;
    if (runtime->hasFunction(0x304CD0u)) {
        auto targetFn = runtime->lookupFunction(0x304CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5319D0u; }
        if (ctx->pc != 0x5319D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304CD0_0x304cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5319D0u; }
        if (ctx->pc != 0x5319D0u) { return; }
    }
    ctx->pc = 0x5319D0u;
label_5319d0:
    // 0x5319d0: 0x10000036  b           . + 4 + (0x36 << 2)
label_5319d4:
    if (ctx->pc == 0x5319D4u) {
        ctx->pc = 0x5319D4u;
            // 0x5319d4: 0x8e640d6c  lw          $a0, 0xD6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
        ctx->pc = 0x5319D8u;
        goto label_5319d8;
    }
    ctx->pc = 0x5319D0u;
    {
        const bool branch_taken_0x5319d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5319D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5319D0u;
            // 0x5319d4: 0x8e640d6c  lw          $a0, 0xD6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5319d0) {
            ctx->pc = 0x531AACu;
            goto label_531aac;
        }
    }
    ctx->pc = 0x5319D8u;
label_5319d8:
    // 0x5319d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x5319d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_5319dc:
    // 0x5319dc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x5319dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5319e0:
    // 0x5319e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x5319e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_5319e4:
    // 0x5319e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x5319e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_5319e8:
    // 0x5319e8: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x5319e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_5319ec:
    // 0x5319ec: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_5319f0:
    if (ctx->pc == 0x5319F0u) {
        ctx->pc = 0x5319F0u;
            // 0x5319f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5319F4u;
        goto label_5319f4;
    }
    ctx->pc = 0x5319ECu;
    {
        const bool branch_taken_0x5319ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5319ec) {
            ctx->pc = 0x5319F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5319ECu;
            // 0x5319f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531A18u;
            goto label_531a18;
        }
    }
    ctx->pc = 0x5319F4u;
label_5319f4:
    // 0x5319f4: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_5319f8:
    if (ctx->pc == 0x5319F8u) {
        ctx->pc = 0x5319FCu;
        goto label_5319fc;
    }
    ctx->pc = 0x5319F4u;
    {
        const bool branch_taken_0x5319f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x5319f4) {
            ctx->pc = 0x531A14u;
            goto label_531a14;
        }
    }
    ctx->pc = 0x5319FCu;
label_5319fc:
    // 0x5319fc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x5319fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_531a00:
    // 0x531a00: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x531a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_531a04:
    // 0x531a04: 0xc461c6c0  lwc1        $f1, -0x3940($v1)
    ctx->pc = 0x531a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_531a08:
    // 0x531a08: 0xc440c6c8  lwc1        $f0, -0x3938($v0)
    ctx->pc = 0x531a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_531a0c:
    // 0x531a0c: 0xe6610ddc  swc1        $f1, 0xDDC($s3)
    ctx->pc = 0x531a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3548), bits); }
label_531a10:
    // 0x531a10: 0xe6600de0  swc1        $f0, 0xDE0($s3)
    ctx->pc = 0x531a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3552), bits); }
label_531a14:
    // 0x531a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x531a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_531a18:
    // 0x531a18: 0xc102a2c  jal         func_40A8B0
label_531a1c:
    if (ctx->pc == 0x531A1Cu) {
        ctx->pc = 0x531A20u;
        goto label_531a20;
    }
    ctx->pc = 0x531A18u;
    SET_GPR_U32(ctx, 31, 0x531A20u);
    ctx->pc = 0x40A8B0u;
    if (runtime->hasFunction(0x40A8B0u)) {
        auto targetFn = runtime->lookupFunction(0x40A8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A20u; }
        if (ctx->pc != 0x531A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040A8B0_0x40a8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A20u; }
        if (ctx->pc != 0x531A20u) { return; }
    }
    ctx->pc = 0x531A20u;
label_531a20:
    // 0x531a20: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x531a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_531a24:
    // 0x531a24: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x531a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_531a28:
    // 0x531a28: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x531a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_531a2c:
    // 0x531a2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x531a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_531a30:
    // 0x531a30: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x531a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_531a34:
    // 0x531a34: 0x320f809  jalr        $t9
label_531a38:
    if (ctx->pc == 0x531A38u) {
        ctx->pc = 0x531A38u;
            // 0x531a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531A3Cu;
        goto label_531a3c;
    }
    ctx->pc = 0x531A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x531A3Cu);
        ctx->pc = 0x531A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531A34u;
            // 0x531a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x531A3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x531A3Cu; }
            if (ctx->pc != 0x531A3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x531A3Cu;
label_531a3c:
    // 0x531a3c: 0x26640c90  addiu       $a0, $s3, 0xC90
    ctx->pc = 0x531a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3216));
label_531a40:
    // 0x531a40: 0xc1309f8  jal         func_4C27E0
label_531a44:
    if (ctx->pc == 0x531A44u) {
        ctx->pc = 0x531A44u;
            // 0x531a44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531A48u;
        goto label_531a48;
    }
    ctx->pc = 0x531A40u;
    SET_GPR_U32(ctx, 31, 0x531A48u);
    ctx->pc = 0x531A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531A40u;
            // 0x531a44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C27E0u;
    if (runtime->hasFunction(0x4C27E0u)) {
        auto targetFn = runtime->lookupFunction(0x4C27E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A48u; }
        if (ctx->pc != 0x531A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C27E0_0x4c27e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A48u; }
        if (ctx->pc != 0x531A48u) { return; }
    }
    ctx->pc = 0x531A48u;
label_531a48:
    // 0x531a48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x531a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_531a4c:
    // 0x531a4c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x531a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_531a50:
    // 0x531a50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_531a54:
    if (ctx->pc == 0x531A54u) {
        ctx->pc = 0x531A54u;
            // 0x531a54: 0x8e640d74  lw          $a0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->pc = 0x531A58u;
        goto label_531a58;
    }
    ctx->pc = 0x531A50u;
    {
        const bool branch_taken_0x531a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x531a50) {
            ctx->pc = 0x531A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531A50u;
            // 0x531a54: 0x8e640d74  lw          $a0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531A68u;
            goto label_531a68;
        }
    }
    ctx->pc = 0x531A58u;
label_531a58:
    // 0x531a58: 0xc0c1298  jal         func_304A60
label_531a5c:
    if (ctx->pc == 0x531A5Cu) {
        ctx->pc = 0x531A5Cu;
            // 0x531a5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531A60u;
        goto label_531a60;
    }
    ctx->pc = 0x531A58u;
    SET_GPR_U32(ctx, 31, 0x531A60u);
    ctx->pc = 0x531A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531A58u;
            // 0x531a5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304A60u;
    if (runtime->hasFunction(0x304A60u)) {
        auto targetFn = runtime->lookupFunction(0x304A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A60u; }
        if (ctx->pc != 0x531A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304A60_0x304a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A60u; }
        if (ctx->pc != 0x531A60u) { return; }
    }
    ctx->pc = 0x531A60u;
label_531a60:
    // 0x531a60: 0x10000017  b           . + 4 + (0x17 << 2)
label_531a64:
    if (ctx->pc == 0x531A64u) {
        ctx->pc = 0x531A64u;
            // 0x531a64: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x531A68u;
        goto label_531a68;
    }
    ctx->pc = 0x531A60u;
    {
        const bool branch_taken_0x531a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x531A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531A60u;
            // 0x531a64: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x531a60) {
            ctx->pc = 0x531AC0u;
            goto label_531ac0;
        }
    }
    ctx->pc = 0x531A68u;
label_531a68:
    // 0x531a68: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x531a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_531a6c:
    // 0x531a6c: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x531a6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_531a70:
    // 0x531a70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x531a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_531a74:
    // 0x531a74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x531a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_531a78:
    // 0x531a78: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x531a78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_531a7c:
    // 0x531a7c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_531a80:
    if (ctx->pc == 0x531A80u) {
        ctx->pc = 0x531A80u;
            // 0x531a80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531A84u;
        goto label_531a84;
    }
    ctx->pc = 0x531A7Cu;
    {
        const bool branch_taken_0x531a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x531a7c) {
            ctx->pc = 0x531A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x531A7Cu;
            // 0x531a80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x531A90u;
            goto label_531a90;
        }
    }
    ctx->pc = 0x531A84u;
label_531a84:
    // 0x531a84: 0xc0c1530  jal         func_3054C0
label_531a88:
    if (ctx->pc == 0x531A88u) {
        ctx->pc = 0x531A88u;
            // 0x531a88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531A8Cu;
        goto label_531a8c;
    }
    ctx->pc = 0x531A84u;
    SET_GPR_U32(ctx, 31, 0x531A8Cu);
    ctx->pc = 0x531A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531A84u;
            // 0x531a88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3054C0u;
    if (runtime->hasFunction(0x3054C0u)) {
        auto targetFn = runtime->lookupFunction(0x3054C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A8Cu; }
        if (ctx->pc != 0x531A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003054C0_0x3054c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A8Cu; }
        if (ctx->pc != 0x531A8Cu) { return; }
    }
    ctx->pc = 0x531A8Cu;
label_531a8c:
    // 0x531a8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x531a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_531a90:
    // 0x531a90: 0xc0c14cc  jal         func_305330
label_531a94:
    if (ctx->pc == 0x531A94u) {
        ctx->pc = 0x531A98u;
        goto label_531a98;
    }
    ctx->pc = 0x531A90u;
    SET_GPR_U32(ctx, 31, 0x531A98u);
    ctx->pc = 0x305330u;
    if (runtime->hasFunction(0x305330u)) {
        auto targetFn = runtime->lookupFunction(0x305330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A98u; }
        if (ctx->pc != 0x531A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305330_0x305330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531A98u; }
        if (ctx->pc != 0x531A98u) { return; }
    }
    ctx->pc = 0x531A98u;
label_531a98:
    // 0x531a98: 0xc0c144c  jal         func_305130
label_531a9c:
    if (ctx->pc == 0x531A9Cu) {
        ctx->pc = 0x531A9Cu;
            // 0x531a9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531AA0u;
        goto label_531aa0;
    }
    ctx->pc = 0x531A98u;
    SET_GPR_U32(ctx, 31, 0x531AA0u);
    ctx->pc = 0x531A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531A98u;
            // 0x531a9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305130u;
    if (runtime->hasFunction(0x305130u)) {
        auto targetFn = runtime->lookupFunction(0x305130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531AA0u; }
        if (ctx->pc != 0x531AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305130_0x305130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531AA0u; }
        if (ctx->pc != 0x531AA0u) { return; }
    }
    ctx->pc = 0x531AA0u;
label_531aa0:
    // 0x531aa0: 0xc0c13c8  jal         func_304F20
label_531aa4:
    if (ctx->pc == 0x531AA4u) {
        ctx->pc = 0x531AA4u;
            // 0x531aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531AA8u;
        goto label_531aa8;
    }
    ctx->pc = 0x531AA0u;
    SET_GPR_U32(ctx, 31, 0x531AA8u);
    ctx->pc = 0x531AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531AA0u;
            // 0x531aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304F20u;
    if (runtime->hasFunction(0x304F20u)) {
        auto targetFn = runtime->lookupFunction(0x304F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531AA8u; }
        if (ctx->pc != 0x531AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304F20_0x304f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531AA8u; }
        if (ctx->pc != 0x531AA8u) { return; }
    }
    ctx->pc = 0x531AA8u;
label_531aa8:
    // 0x531aa8: 0x8e640d6c  lw          $a0, 0xD6C($s3)
    ctx->pc = 0x531aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
label_531aac:
    // 0x531aac: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x531aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_531ab0:
    // 0x531ab0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x531ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_531ab4:
    // 0x531ab4: 0x320f809  jalr        $t9
label_531ab8:
    if (ctx->pc == 0x531AB8u) {
        ctx->pc = 0x531ABCu;
        goto label_531abc;
    }
    ctx->pc = 0x531AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x531ABCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x531ABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x531ABCu; }
            if (ctx->pc != 0x531ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x531ABCu;
label_531abc:
    // 0x531abc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x531abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_531ac0:
    // 0x531ac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x531ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_531ac4:
    // 0x531ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x531ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_531ac8:
    // 0x531ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x531ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_531acc:
    // 0x531acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x531accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_531ad0:
    // 0x531ad0: 0x3e00008  jr          $ra
label_531ad4:
    if (ctx->pc == 0x531AD4u) {
        ctx->pc = 0x531AD4u;
            // 0x531ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x531AD8u;
        goto label_531ad8;
    }
    ctx->pc = 0x531AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x531AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531AD0u;
            // 0x531ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x531AD8u;
label_531ad8:
    // 0x531ad8: 0x0  nop
    ctx->pc = 0x531ad8u;
    // NOP
label_531adc:
    // 0x531adc: 0x0  nop
    ctx->pc = 0x531adcu;
    // NOP
label_531ae0:
    // 0x531ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x531ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_531ae4:
    // 0x531ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x531ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_531ae8:
    // 0x531ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x531ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_531aec:
    // 0x531aec: 0xc0c15dc  jal         func_305770
label_531af0:
    if (ctx->pc == 0x531AF0u) {
        ctx->pc = 0x531AF0u;
            // 0x531af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x531AF4u;
        goto label_531af4;
    }
    ctx->pc = 0x531AECu;
    SET_GPR_U32(ctx, 31, 0x531AF4u);
    ctx->pc = 0x531AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531AECu;
            // 0x531af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305770u;
    if (runtime->hasFunction(0x305770u)) {
        auto targetFn = runtime->lookupFunction(0x305770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531AF4u; }
        if (ctx->pc != 0x531AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305770_0x305770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531AF4u; }
        if (ctx->pc != 0x531AF4u) { return; }
    }
    ctx->pc = 0x531AF4u;
label_531af4:
    // 0x531af4: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x531af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_531af8:
    // 0x531af8: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x531af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_531afc:
    // 0x531afc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x531afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_531b00:
    // 0x531b00: 0x320f809  jalr        $t9
label_531b04:
    if (ctx->pc == 0x531B04u) {
        ctx->pc = 0x531B08u;
        goto label_531b08;
    }
    ctx->pc = 0x531B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x531B08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x531B08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x531B08u; }
            if (ctx->pc != 0x531B08u) { return; }
        }
        }
    }
    ctx->pc = 0x531B08u;
label_531b08:
    // 0x531b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x531b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_531b0c:
    // 0x531b0c: 0xc0c0f84  jal         func_303E10
label_531b10:
    if (ctx->pc == 0x531B10u) {
        ctx->pc = 0x531B10u;
            // 0x531b10: 0xae000e30  sw          $zero, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 0));
        ctx->pc = 0x531B14u;
        goto label_531b14;
    }
    ctx->pc = 0x531B0Cu;
    SET_GPR_U32(ctx, 31, 0x531B14u);
    ctx->pc = 0x531B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x531B0Cu;
            // 0x531b10: 0xae000e30  sw          $zero, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531B14u; }
        if (ctx->pc != 0x531B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x531B14u; }
        if (ctx->pc != 0x531B14u) { return; }
    }
    ctx->pc = 0x531B14u;
label_531b14:
    // 0x531b14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x531b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_531b18:
    // 0x531b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x531b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_531b1c:
    // 0x531b1c: 0x3e00008  jr          $ra
label_531b20:
    if (ctx->pc == 0x531B20u) {
        ctx->pc = 0x531B20u;
            // 0x531b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x531B24u;
        goto label_531b24;
    }
    ctx->pc = 0x531B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x531B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x531B1Cu;
            // 0x531b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x531B24u;
label_531b24:
    // 0x531b24: 0x0  nop
    ctx->pc = 0x531b24u;
    // NOP
label_531b28:
    // 0x531b28: 0x0  nop
    ctx->pc = 0x531b28u;
    // NOP
label_531b2c:
    // 0x531b2c: 0x0  nop
    ctx->pc = 0x531b2cu;
    // NOP
}
