#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00333D70
// Address: 0x333d70 - 0x334230
void sub_00333D70_0x333d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333D70_0x333d70");
#endif

    switch (ctx->pc) {
        case 0x333d70u: goto label_333d70;
        case 0x333d74u: goto label_333d74;
        case 0x333d78u: goto label_333d78;
        case 0x333d7cu: goto label_333d7c;
        case 0x333d80u: goto label_333d80;
        case 0x333d84u: goto label_333d84;
        case 0x333d88u: goto label_333d88;
        case 0x333d8cu: goto label_333d8c;
        case 0x333d90u: goto label_333d90;
        case 0x333d94u: goto label_333d94;
        case 0x333d98u: goto label_333d98;
        case 0x333d9cu: goto label_333d9c;
        case 0x333da0u: goto label_333da0;
        case 0x333da4u: goto label_333da4;
        case 0x333da8u: goto label_333da8;
        case 0x333dacu: goto label_333dac;
        case 0x333db0u: goto label_333db0;
        case 0x333db4u: goto label_333db4;
        case 0x333db8u: goto label_333db8;
        case 0x333dbcu: goto label_333dbc;
        case 0x333dc0u: goto label_333dc0;
        case 0x333dc4u: goto label_333dc4;
        case 0x333dc8u: goto label_333dc8;
        case 0x333dccu: goto label_333dcc;
        case 0x333dd0u: goto label_333dd0;
        case 0x333dd4u: goto label_333dd4;
        case 0x333dd8u: goto label_333dd8;
        case 0x333ddcu: goto label_333ddc;
        case 0x333de0u: goto label_333de0;
        case 0x333de4u: goto label_333de4;
        case 0x333de8u: goto label_333de8;
        case 0x333decu: goto label_333dec;
        case 0x333df0u: goto label_333df0;
        case 0x333df4u: goto label_333df4;
        case 0x333df8u: goto label_333df8;
        case 0x333dfcu: goto label_333dfc;
        case 0x333e00u: goto label_333e00;
        case 0x333e04u: goto label_333e04;
        case 0x333e08u: goto label_333e08;
        case 0x333e0cu: goto label_333e0c;
        case 0x333e10u: goto label_333e10;
        case 0x333e14u: goto label_333e14;
        case 0x333e18u: goto label_333e18;
        case 0x333e1cu: goto label_333e1c;
        case 0x333e20u: goto label_333e20;
        case 0x333e24u: goto label_333e24;
        case 0x333e28u: goto label_333e28;
        case 0x333e2cu: goto label_333e2c;
        case 0x333e30u: goto label_333e30;
        case 0x333e34u: goto label_333e34;
        case 0x333e38u: goto label_333e38;
        case 0x333e3cu: goto label_333e3c;
        case 0x333e40u: goto label_333e40;
        case 0x333e44u: goto label_333e44;
        case 0x333e48u: goto label_333e48;
        case 0x333e4cu: goto label_333e4c;
        case 0x333e50u: goto label_333e50;
        case 0x333e54u: goto label_333e54;
        case 0x333e58u: goto label_333e58;
        case 0x333e5cu: goto label_333e5c;
        case 0x333e60u: goto label_333e60;
        case 0x333e64u: goto label_333e64;
        case 0x333e68u: goto label_333e68;
        case 0x333e6cu: goto label_333e6c;
        case 0x333e70u: goto label_333e70;
        case 0x333e74u: goto label_333e74;
        case 0x333e78u: goto label_333e78;
        case 0x333e7cu: goto label_333e7c;
        case 0x333e80u: goto label_333e80;
        case 0x333e84u: goto label_333e84;
        case 0x333e88u: goto label_333e88;
        case 0x333e8cu: goto label_333e8c;
        case 0x333e90u: goto label_333e90;
        case 0x333e94u: goto label_333e94;
        case 0x333e98u: goto label_333e98;
        case 0x333e9cu: goto label_333e9c;
        case 0x333ea0u: goto label_333ea0;
        case 0x333ea4u: goto label_333ea4;
        case 0x333ea8u: goto label_333ea8;
        case 0x333eacu: goto label_333eac;
        case 0x333eb0u: goto label_333eb0;
        case 0x333eb4u: goto label_333eb4;
        case 0x333eb8u: goto label_333eb8;
        case 0x333ebcu: goto label_333ebc;
        case 0x333ec0u: goto label_333ec0;
        case 0x333ec4u: goto label_333ec4;
        case 0x333ec8u: goto label_333ec8;
        case 0x333eccu: goto label_333ecc;
        case 0x333ed0u: goto label_333ed0;
        case 0x333ed4u: goto label_333ed4;
        case 0x333ed8u: goto label_333ed8;
        case 0x333edcu: goto label_333edc;
        case 0x333ee0u: goto label_333ee0;
        case 0x333ee4u: goto label_333ee4;
        case 0x333ee8u: goto label_333ee8;
        case 0x333eecu: goto label_333eec;
        case 0x333ef0u: goto label_333ef0;
        case 0x333ef4u: goto label_333ef4;
        case 0x333ef8u: goto label_333ef8;
        case 0x333efcu: goto label_333efc;
        case 0x333f00u: goto label_333f00;
        case 0x333f04u: goto label_333f04;
        case 0x333f08u: goto label_333f08;
        case 0x333f0cu: goto label_333f0c;
        case 0x333f10u: goto label_333f10;
        case 0x333f14u: goto label_333f14;
        case 0x333f18u: goto label_333f18;
        case 0x333f1cu: goto label_333f1c;
        case 0x333f20u: goto label_333f20;
        case 0x333f24u: goto label_333f24;
        case 0x333f28u: goto label_333f28;
        case 0x333f2cu: goto label_333f2c;
        case 0x333f30u: goto label_333f30;
        case 0x333f34u: goto label_333f34;
        case 0x333f38u: goto label_333f38;
        case 0x333f3cu: goto label_333f3c;
        case 0x333f40u: goto label_333f40;
        case 0x333f44u: goto label_333f44;
        case 0x333f48u: goto label_333f48;
        case 0x333f4cu: goto label_333f4c;
        case 0x333f50u: goto label_333f50;
        case 0x333f54u: goto label_333f54;
        case 0x333f58u: goto label_333f58;
        case 0x333f5cu: goto label_333f5c;
        case 0x333f60u: goto label_333f60;
        case 0x333f64u: goto label_333f64;
        case 0x333f68u: goto label_333f68;
        case 0x333f6cu: goto label_333f6c;
        case 0x333f70u: goto label_333f70;
        case 0x333f74u: goto label_333f74;
        case 0x333f78u: goto label_333f78;
        case 0x333f7cu: goto label_333f7c;
        case 0x333f80u: goto label_333f80;
        case 0x333f84u: goto label_333f84;
        case 0x333f88u: goto label_333f88;
        case 0x333f8cu: goto label_333f8c;
        case 0x333f90u: goto label_333f90;
        case 0x333f94u: goto label_333f94;
        case 0x333f98u: goto label_333f98;
        case 0x333f9cu: goto label_333f9c;
        case 0x333fa0u: goto label_333fa0;
        case 0x333fa4u: goto label_333fa4;
        case 0x333fa8u: goto label_333fa8;
        case 0x333facu: goto label_333fac;
        case 0x333fb0u: goto label_333fb0;
        case 0x333fb4u: goto label_333fb4;
        case 0x333fb8u: goto label_333fb8;
        case 0x333fbcu: goto label_333fbc;
        case 0x333fc0u: goto label_333fc0;
        case 0x333fc4u: goto label_333fc4;
        case 0x333fc8u: goto label_333fc8;
        case 0x333fccu: goto label_333fcc;
        case 0x333fd0u: goto label_333fd0;
        case 0x333fd4u: goto label_333fd4;
        case 0x333fd8u: goto label_333fd8;
        case 0x333fdcu: goto label_333fdc;
        case 0x333fe0u: goto label_333fe0;
        case 0x333fe4u: goto label_333fe4;
        case 0x333fe8u: goto label_333fe8;
        case 0x333fecu: goto label_333fec;
        case 0x333ff0u: goto label_333ff0;
        case 0x333ff4u: goto label_333ff4;
        case 0x333ff8u: goto label_333ff8;
        case 0x333ffcu: goto label_333ffc;
        case 0x334000u: goto label_334000;
        case 0x334004u: goto label_334004;
        case 0x334008u: goto label_334008;
        case 0x33400cu: goto label_33400c;
        case 0x334010u: goto label_334010;
        case 0x334014u: goto label_334014;
        case 0x334018u: goto label_334018;
        case 0x33401cu: goto label_33401c;
        case 0x334020u: goto label_334020;
        case 0x334024u: goto label_334024;
        case 0x334028u: goto label_334028;
        case 0x33402cu: goto label_33402c;
        case 0x334030u: goto label_334030;
        case 0x334034u: goto label_334034;
        case 0x334038u: goto label_334038;
        case 0x33403cu: goto label_33403c;
        case 0x334040u: goto label_334040;
        case 0x334044u: goto label_334044;
        case 0x334048u: goto label_334048;
        case 0x33404cu: goto label_33404c;
        case 0x334050u: goto label_334050;
        case 0x334054u: goto label_334054;
        case 0x334058u: goto label_334058;
        case 0x33405cu: goto label_33405c;
        case 0x334060u: goto label_334060;
        case 0x334064u: goto label_334064;
        case 0x334068u: goto label_334068;
        case 0x33406cu: goto label_33406c;
        case 0x334070u: goto label_334070;
        case 0x334074u: goto label_334074;
        case 0x334078u: goto label_334078;
        case 0x33407cu: goto label_33407c;
        case 0x334080u: goto label_334080;
        case 0x334084u: goto label_334084;
        case 0x334088u: goto label_334088;
        case 0x33408cu: goto label_33408c;
        case 0x334090u: goto label_334090;
        case 0x334094u: goto label_334094;
        case 0x334098u: goto label_334098;
        case 0x33409cu: goto label_33409c;
        case 0x3340a0u: goto label_3340a0;
        case 0x3340a4u: goto label_3340a4;
        case 0x3340a8u: goto label_3340a8;
        case 0x3340acu: goto label_3340ac;
        case 0x3340b0u: goto label_3340b0;
        case 0x3340b4u: goto label_3340b4;
        case 0x3340b8u: goto label_3340b8;
        case 0x3340bcu: goto label_3340bc;
        case 0x3340c0u: goto label_3340c0;
        case 0x3340c4u: goto label_3340c4;
        case 0x3340c8u: goto label_3340c8;
        case 0x3340ccu: goto label_3340cc;
        case 0x3340d0u: goto label_3340d0;
        case 0x3340d4u: goto label_3340d4;
        case 0x3340d8u: goto label_3340d8;
        case 0x3340dcu: goto label_3340dc;
        case 0x3340e0u: goto label_3340e0;
        case 0x3340e4u: goto label_3340e4;
        case 0x3340e8u: goto label_3340e8;
        case 0x3340ecu: goto label_3340ec;
        case 0x3340f0u: goto label_3340f0;
        case 0x3340f4u: goto label_3340f4;
        case 0x3340f8u: goto label_3340f8;
        case 0x3340fcu: goto label_3340fc;
        case 0x334100u: goto label_334100;
        case 0x334104u: goto label_334104;
        case 0x334108u: goto label_334108;
        case 0x33410cu: goto label_33410c;
        case 0x334110u: goto label_334110;
        case 0x334114u: goto label_334114;
        case 0x334118u: goto label_334118;
        case 0x33411cu: goto label_33411c;
        case 0x334120u: goto label_334120;
        case 0x334124u: goto label_334124;
        case 0x334128u: goto label_334128;
        case 0x33412cu: goto label_33412c;
        case 0x334130u: goto label_334130;
        case 0x334134u: goto label_334134;
        case 0x334138u: goto label_334138;
        case 0x33413cu: goto label_33413c;
        case 0x334140u: goto label_334140;
        case 0x334144u: goto label_334144;
        case 0x334148u: goto label_334148;
        case 0x33414cu: goto label_33414c;
        case 0x334150u: goto label_334150;
        case 0x334154u: goto label_334154;
        case 0x334158u: goto label_334158;
        case 0x33415cu: goto label_33415c;
        case 0x334160u: goto label_334160;
        case 0x334164u: goto label_334164;
        case 0x334168u: goto label_334168;
        case 0x33416cu: goto label_33416c;
        case 0x334170u: goto label_334170;
        case 0x334174u: goto label_334174;
        case 0x334178u: goto label_334178;
        case 0x33417cu: goto label_33417c;
        case 0x334180u: goto label_334180;
        case 0x334184u: goto label_334184;
        case 0x334188u: goto label_334188;
        case 0x33418cu: goto label_33418c;
        case 0x334190u: goto label_334190;
        case 0x334194u: goto label_334194;
        case 0x334198u: goto label_334198;
        case 0x33419cu: goto label_33419c;
        case 0x3341a0u: goto label_3341a0;
        case 0x3341a4u: goto label_3341a4;
        case 0x3341a8u: goto label_3341a8;
        case 0x3341acu: goto label_3341ac;
        case 0x3341b0u: goto label_3341b0;
        case 0x3341b4u: goto label_3341b4;
        case 0x3341b8u: goto label_3341b8;
        case 0x3341bcu: goto label_3341bc;
        case 0x3341c0u: goto label_3341c0;
        case 0x3341c4u: goto label_3341c4;
        case 0x3341c8u: goto label_3341c8;
        case 0x3341ccu: goto label_3341cc;
        case 0x3341d0u: goto label_3341d0;
        case 0x3341d4u: goto label_3341d4;
        case 0x3341d8u: goto label_3341d8;
        case 0x3341dcu: goto label_3341dc;
        case 0x3341e0u: goto label_3341e0;
        case 0x3341e4u: goto label_3341e4;
        case 0x3341e8u: goto label_3341e8;
        case 0x3341ecu: goto label_3341ec;
        case 0x3341f0u: goto label_3341f0;
        case 0x3341f4u: goto label_3341f4;
        case 0x3341f8u: goto label_3341f8;
        case 0x3341fcu: goto label_3341fc;
        case 0x334200u: goto label_334200;
        case 0x334204u: goto label_334204;
        case 0x334208u: goto label_334208;
        case 0x33420cu: goto label_33420c;
        case 0x334210u: goto label_334210;
        case 0x334214u: goto label_334214;
        case 0x334218u: goto label_334218;
        case 0x33421cu: goto label_33421c;
        case 0x334220u: goto label_334220;
        case 0x334224u: goto label_334224;
        case 0x334228u: goto label_334228;
        case 0x33422cu: goto label_33422c;
        default: break;
    }

    ctx->pc = 0x333d70u;

label_333d70:
    // 0x333d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x333d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_333d74:
    // 0x333d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x333d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_333d78:
    // 0x333d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_333d7c:
    // 0x333d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x333d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_333d80:
    // 0x333d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x333d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_333d84:
    // 0x333d84: 0x122000db  beqz        $s1, . + 4 + (0xDB << 2)
label_333d88:
    if (ctx->pc == 0x333D88u) {
        ctx->pc = 0x333D88u;
            // 0x333d88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333D8Cu;
        goto label_333d8c;
    }
    ctx->pc = 0x333D84u;
    {
        const bool branch_taken_0x333d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333D84u;
            // 0x333d88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d84) {
            ctx->pc = 0x3340F4u;
            goto label_3340f4;
        }
    }
    ctx->pc = 0x333D8Cu;
label_333d8c:
    // 0x333d8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x333d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_333d90:
    // 0x333d90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_333d94:
    // 0x333d94: 0x24634a90  addiu       $v1, $v1, 0x4A90
    ctx->pc = 0x333d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19088));
label_333d98:
    // 0x333d98: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x333d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_333d9c:
    // 0x333d9c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x333d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_333da0:
    // 0x333da0: 0xac400e80  sw          $zero, 0xE80($v0)
    ctx->pc = 0x333da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3712), GPR_U32(ctx, 0));
label_333da4:
    // 0x333da4: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x333da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_333da8:
    // 0x333da8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x333da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_333dac:
    // 0x333dac: 0x8c4889f0  lw          $t0, -0x7610($v0)
    ctx->pc = 0x333dacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_333db0:
    // 0x333db0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x333db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_333db4:
    // 0x333db4: 0x93a7003c  lbu         $a3, 0x3C($sp)
    ctx->pc = 0x333db4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
label_333db8:
    // 0x333db8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x333db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_333dbc:
    // 0x333dbc: 0x93a6003d  lbu         $a2, 0x3D($sp)
    ctx->pc = 0x333dbcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
label_333dc0:
    // 0x333dc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x333dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_333dc4:
    // 0x333dc4: 0x93a5003e  lbu         $a1, 0x3E($sp)
    ctx->pc = 0x333dc4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
label_333dc8:
    // 0x333dc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x333dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_333dcc:
    // 0x333dcc: 0xa107003c  sb          $a3, 0x3C($t0)
    ctx->pc = 0x333dccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 60), (uint8_t)GPR_U32(ctx, 7));
label_333dd0:
    // 0x333dd0: 0xa106003d  sb          $a2, 0x3D($t0)
    ctx->pc = 0x333dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 61), (uint8_t)GPR_U32(ctx, 6));
label_333dd4:
    // 0x333dd4: 0xa105003e  sb          $a1, 0x3E($t0)
    ctx->pc = 0x333dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 62), (uint8_t)GPR_U32(ctx, 5));
label_333dd8:
    // 0x333dd8: 0x93a5003f  lbu         $a1, 0x3F($sp)
    ctx->pc = 0x333dd8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
label_333ddc:
    // 0x333ddc: 0xa105003f  sb          $a1, 0x3F($t0)
    ctx->pc = 0x333ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 63), (uint8_t)GPR_U32(ctx, 5));
label_333de0:
    // 0x333de0: 0x9106003e  lbu         $a2, 0x3E($t0)
    ctx->pc = 0x333de0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 62)));
label_333de4:
    // 0x333de4: 0x9105003d  lbu         $a1, 0x3D($t0)
    ctx->pc = 0x333de4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 61)));
label_333de8:
    // 0x333de8: 0x9107003f  lbu         $a3, 0x3F($t0)
    ctx->pc = 0x333de8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 63)));
label_333dec:
    // 0x333dec: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x333decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
label_333df0:
    // 0x333df0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x333df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_333df4:
    // 0x333df4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x333df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_333df8:
    // 0x333df8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x333df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_333dfc:
    // 0x333dfc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x333dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_333e00:
    // 0x333e00: 0xfc64ec90  sd          $a0, -0x1370($v1)
    ctx->pc = 0x333e00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294962320), GPR_U64(ctx, 4));
label_333e04:
    // 0x333e04: 0xfc44ee00  sd          $a0, -0x1200($v0)
    ctx->pc = 0x333e04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294962688), GPR_U64(ctx, 4));
label_333e08:
    // 0x333e08: 0x8e240970  lw          $a0, 0x970($s1)
    ctx->pc = 0x333e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2416)));
label_333e0c:
    // 0x333e0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_333e10:
    if (ctx->pc == 0x333E10u) {
        ctx->pc = 0x333E10u;
            // 0x333e10: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->pc = 0x333E14u;
        goto label_333e14;
    }
    ctx->pc = 0x333E0Cu;
    {
        const bool branch_taken_0x333e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e0c) {
            ctx->pc = 0x333E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333E0Cu;
            // 0x333e10: 0x8e240ca4  lw          $a0, 0xCA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333E28u;
            goto label_333e28;
        }
    }
    ctx->pc = 0x333E14u;
label_333e14:
    // 0x333e14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x333e14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_333e18:
    // 0x333e18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x333e18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_333e1c:
    // 0x333e1c: 0x320f809  jalr        $t9
label_333e20:
    if (ctx->pc == 0x333E20u) {
        ctx->pc = 0x333E20u;
            // 0x333e20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x333E24u;
        goto label_333e24;
    }
    ctx->pc = 0x333E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x333E24u);
        ctx->pc = 0x333E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333E1Cu;
            // 0x333e20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x333E24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x333E24u; }
            if (ctx->pc != 0x333E24u) { return; }
        }
        }
    }
    ctx->pc = 0x333E24u;
label_333e24:
    // 0x333e24: 0x8e240ca4  lw          $a0, 0xCA4($s1)
    ctx->pc = 0x333e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3236)));
label_333e28:
    // 0x333e28: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_333e2c:
    if (ctx->pc == 0x333E2Cu) {
        ctx->pc = 0x333E2Cu;
            // 0x333e2c: 0x26220838  addiu       $v0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->pc = 0x333E30u;
        goto label_333e30;
    }
    ctx->pc = 0x333E28u;
    {
        const bool branch_taken_0x333e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e28) {
            ctx->pc = 0x333E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333E28u;
            // 0x333e2c: 0x26220838  addiu       $v0, $s1, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333E44u;
            goto label_333e44;
        }
    }
    ctx->pc = 0x333E30u;
label_333e30:
    // 0x333e30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x333e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_333e34:
    // 0x333e34: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x333e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_333e38:
    // 0x333e38: 0x320f809  jalr        $t9
label_333e3c:
    if (ctx->pc == 0x333E3Cu) {
        ctx->pc = 0x333E3Cu;
            // 0x333e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x333E40u;
        goto label_333e40;
    }
    ctx->pc = 0x333E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x333E40u);
        ctx->pc = 0x333E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333E38u;
            // 0x333e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x333E40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x333E40u; }
            if (ctx->pc != 0x333E40u) { return; }
        }
        }
    }
    ctx->pc = 0x333E40u;
label_333e40:
    // 0x333e40: 0x26220838  addiu       $v0, $s1, 0x838
    ctx->pc = 0x333e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
label_333e44:
    // 0x333e44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_333e48:
    if (ctx->pc == 0x333E48u) {
        ctx->pc = 0x333E48u;
            // 0x333e48: 0x26220814  addiu       $v0, $s1, 0x814 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2068));
        ctx->pc = 0x333E4Cu;
        goto label_333e4c;
    }
    ctx->pc = 0x333E44u;
    {
        const bool branch_taken_0x333e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e44) {
            ctx->pc = 0x333E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333E44u;
            // 0x333e48: 0x26220814  addiu       $v0, $s1, 0x814 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2068));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333E5Cu;
            goto label_333e5c;
        }
    }
    ctx->pc = 0x333E4Cu;
label_333e4c:
    // 0x333e4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x333e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_333e50:
    // 0x333e50: 0x24424b70  addiu       $v0, $v0, 0x4B70
    ctx->pc = 0x333e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19312));
label_333e54:
    // 0x333e54: 0xae220838  sw          $v0, 0x838($s1)
    ctx->pc = 0x333e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 2));
label_333e58:
    // 0x333e58: 0x26220814  addiu       $v0, $s1, 0x814
    ctx->pc = 0x333e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2068));
label_333e5c:
    // 0x333e5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_333e60:
    if (ctx->pc == 0x333E60u) {
        ctx->pc = 0x333E60u;
            // 0x333e60: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->pc = 0x333E64u;
        goto label_333e64;
    }
    ctx->pc = 0x333E5Cu;
    {
        const bool branch_taken_0x333e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e5c) {
            ctx->pc = 0x333E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333E5Cu;
            // 0x333e60: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333E74u;
            goto label_333e74;
        }
    }
    ctx->pc = 0x333E64u;
label_333e64:
    // 0x333e64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x333e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_333e68:
    // 0x333e68: 0x24424b70  addiu       $v0, $v0, 0x4B70
    ctx->pc = 0x333e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19312));
label_333e6c:
    // 0x333e6c: 0xae220814  sw          $v0, 0x814($s1)
    ctx->pc = 0x333e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 2));
label_333e70:
    // 0x333e70: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x333e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_333e74:
    // 0x333e74: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_333e78:
    if (ctx->pc == 0x333E78u) {
        ctx->pc = 0x333E7Cu;
        goto label_333e7c;
    }
    ctx->pc = 0x333E74u;
    {
        const bool branch_taken_0x333e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e74) {
            ctx->pc = 0x3340BCu;
            goto label_3340bc;
        }
    }
    ctx->pc = 0x333E7Cu;
label_333e7c:
    // 0x333e7c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x333e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_333e80:
    // 0x333e80: 0xc0ad6c4  jal         func_2B5B10
label_333e84:
    if (ctx->pc == 0x333E84u) {
        ctx->pc = 0x333E84u;
            // 0x333e84: 0x2484d3d0  addiu       $a0, $a0, -0x2C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955984));
        ctx->pc = 0x333E88u;
        goto label_333e88;
    }
    ctx->pc = 0x333E80u;
    SET_GPR_U32(ctx, 31, 0x333E88u);
    ctx->pc = 0x333E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E80u;
            // 0x333e84: 0x2484d3d0  addiu       $a0, $a0, -0x2C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E88u; }
        if (ctx->pc != 0x333E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E88u; }
        if (ctx->pc != 0x333E88u) { return; }
    }
    ctx->pc = 0x333E88u;
label_333e88:
    // 0x333e88: 0x26240738  addiu       $a0, $s1, 0x738
    ctx->pc = 0x333e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1848));
label_333e8c:
    // 0x333e8c: 0xc0a8c98  jal         func_2A3260
label_333e90:
    if (ctx->pc == 0x333E90u) {
        ctx->pc = 0x333E90u;
            // 0x333e90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333E94u;
        goto label_333e94;
    }
    ctx->pc = 0x333E8Cu;
    SET_GPR_U32(ctx, 31, 0x333E94u);
    ctx->pc = 0x333E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E8Cu;
            // 0x333e90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E94u; }
        if (ctx->pc != 0x333E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E94u; }
        if (ctx->pc != 0x333E94u) { return; }
    }
    ctx->pc = 0x333E94u;
label_333e94:
    // 0x333e94: 0x26240718  addiu       $a0, $s1, 0x718
    ctx->pc = 0x333e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1816));
label_333e98:
    // 0x333e98: 0xc0a8c98  jal         func_2A3260
label_333e9c:
    if (ctx->pc == 0x333E9Cu) {
        ctx->pc = 0x333E9Cu;
            // 0x333e9c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333EA0u;
        goto label_333ea0;
    }
    ctx->pc = 0x333E98u;
    SET_GPR_U32(ctx, 31, 0x333EA0u);
    ctx->pc = 0x333E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E98u;
            // 0x333e9c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EA0u; }
        if (ctx->pc != 0x333EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EA0u; }
        if (ctx->pc != 0x333EA0u) { return; }
    }
    ctx->pc = 0x333EA0u;
label_333ea0:
    // 0x333ea0: 0x262406f8  addiu       $a0, $s1, 0x6F8
    ctx->pc = 0x333ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1784));
label_333ea4:
    // 0x333ea4: 0xc0a8c98  jal         func_2A3260
label_333ea8:
    if (ctx->pc == 0x333EA8u) {
        ctx->pc = 0x333EA8u;
            // 0x333ea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333EACu;
        goto label_333eac;
    }
    ctx->pc = 0x333EA4u;
    SET_GPR_U32(ctx, 31, 0x333EACu);
    ctx->pc = 0x333EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333EA4u;
            // 0x333ea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EACu; }
        if (ctx->pc != 0x333EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EACu; }
        if (ctx->pc != 0x333EACu) { return; }
    }
    ctx->pc = 0x333EACu;
label_333eac:
    // 0x333eac: 0x262406d8  addiu       $a0, $s1, 0x6D8
    ctx->pc = 0x333eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1752));
label_333eb0:
    // 0x333eb0: 0xc0a8c98  jal         func_2A3260
label_333eb4:
    if (ctx->pc == 0x333EB4u) {
        ctx->pc = 0x333EB4u;
            // 0x333eb4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333EB8u;
        goto label_333eb8;
    }
    ctx->pc = 0x333EB0u;
    SET_GPR_U32(ctx, 31, 0x333EB8u);
    ctx->pc = 0x333EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333EB0u;
            // 0x333eb4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EB8u; }
        if (ctx->pc != 0x333EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EB8u; }
        if (ctx->pc != 0x333EB8u) { return; }
    }
    ctx->pc = 0x333EB8u;
label_333eb8:
    // 0x333eb8: 0x262406b8  addiu       $a0, $s1, 0x6B8
    ctx->pc = 0x333eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1720));
label_333ebc:
    // 0x333ebc: 0xc0a8c98  jal         func_2A3260
label_333ec0:
    if (ctx->pc == 0x333EC0u) {
        ctx->pc = 0x333EC0u;
            // 0x333ec0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333EC4u;
        goto label_333ec4;
    }
    ctx->pc = 0x333EBCu;
    SET_GPR_U32(ctx, 31, 0x333EC4u);
    ctx->pc = 0x333EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333EBCu;
            // 0x333ec0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EC4u; }
        if (ctx->pc != 0x333EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EC4u; }
        if (ctx->pc != 0x333EC4u) { return; }
    }
    ctx->pc = 0x333EC4u;
label_333ec4:
    // 0x333ec4: 0x26240698  addiu       $a0, $s1, 0x698
    ctx->pc = 0x333ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1688));
label_333ec8:
    // 0x333ec8: 0xc0a8c98  jal         func_2A3260
label_333ecc:
    if (ctx->pc == 0x333ECCu) {
        ctx->pc = 0x333ECCu;
            // 0x333ecc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333ED0u;
        goto label_333ed0;
    }
    ctx->pc = 0x333EC8u;
    SET_GPR_U32(ctx, 31, 0x333ED0u);
    ctx->pc = 0x333ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333EC8u;
            // 0x333ecc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333ED0u; }
        if (ctx->pc != 0x333ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333ED0u; }
        if (ctx->pc != 0x333ED0u) { return; }
    }
    ctx->pc = 0x333ED0u;
label_333ed0:
    // 0x333ed0: 0x26240678  addiu       $a0, $s1, 0x678
    ctx->pc = 0x333ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1656));
label_333ed4:
    // 0x333ed4: 0xc0a8c98  jal         func_2A3260
label_333ed8:
    if (ctx->pc == 0x333ED8u) {
        ctx->pc = 0x333ED8u;
            // 0x333ed8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333EDCu;
        goto label_333edc;
    }
    ctx->pc = 0x333ED4u;
    SET_GPR_U32(ctx, 31, 0x333EDCu);
    ctx->pc = 0x333ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333ED4u;
            // 0x333ed8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EDCu; }
        if (ctx->pc != 0x333EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EDCu; }
        if (ctx->pc != 0x333EDCu) { return; }
    }
    ctx->pc = 0x333EDCu;
label_333edc:
    // 0x333edc: 0x26240658  addiu       $a0, $s1, 0x658
    ctx->pc = 0x333edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1624));
label_333ee0:
    // 0x333ee0: 0xc0a8c98  jal         func_2A3260
label_333ee4:
    if (ctx->pc == 0x333EE4u) {
        ctx->pc = 0x333EE4u;
            // 0x333ee4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333EE8u;
        goto label_333ee8;
    }
    ctx->pc = 0x333EE0u;
    SET_GPR_U32(ctx, 31, 0x333EE8u);
    ctx->pc = 0x333EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333EE0u;
            // 0x333ee4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EE8u; }
        if (ctx->pc != 0x333EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EE8u; }
        if (ctx->pc != 0x333EE8u) { return; }
    }
    ctx->pc = 0x333EE8u;
label_333ee8:
    // 0x333ee8: 0x26240638  addiu       $a0, $s1, 0x638
    ctx->pc = 0x333ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1592));
label_333eec:
    // 0x333eec: 0xc0a8c98  jal         func_2A3260
label_333ef0:
    if (ctx->pc == 0x333EF0u) {
        ctx->pc = 0x333EF0u;
            // 0x333ef0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333EF4u;
        goto label_333ef4;
    }
    ctx->pc = 0x333EECu;
    SET_GPR_U32(ctx, 31, 0x333EF4u);
    ctx->pc = 0x333EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333EECu;
            // 0x333ef0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EF4u; }
        if (ctx->pc != 0x333EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EF4u; }
        if (ctx->pc != 0x333EF4u) { return; }
    }
    ctx->pc = 0x333EF4u;
label_333ef4:
    // 0x333ef4: 0x26240618  addiu       $a0, $s1, 0x618
    ctx->pc = 0x333ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1560));
label_333ef8:
    // 0x333ef8: 0xc0a8c98  jal         func_2A3260
label_333efc:
    if (ctx->pc == 0x333EFCu) {
        ctx->pc = 0x333EFCu;
            // 0x333efc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F00u;
        goto label_333f00;
    }
    ctx->pc = 0x333EF8u;
    SET_GPR_U32(ctx, 31, 0x333F00u);
    ctx->pc = 0x333EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333EF8u;
            // 0x333efc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F00u; }
        if (ctx->pc != 0x333F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F00u; }
        if (ctx->pc != 0x333F00u) { return; }
    }
    ctx->pc = 0x333F00u;
label_333f00:
    // 0x333f00: 0x262405f8  addiu       $a0, $s1, 0x5F8
    ctx->pc = 0x333f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1528));
label_333f04:
    // 0x333f04: 0xc0a8c98  jal         func_2A3260
label_333f08:
    if (ctx->pc == 0x333F08u) {
        ctx->pc = 0x333F08u;
            // 0x333f08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F0Cu;
        goto label_333f0c;
    }
    ctx->pc = 0x333F04u;
    SET_GPR_U32(ctx, 31, 0x333F0Cu);
    ctx->pc = 0x333F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F04u;
            // 0x333f08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F0Cu; }
        if (ctx->pc != 0x333F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F0Cu; }
        if (ctx->pc != 0x333F0Cu) { return; }
    }
    ctx->pc = 0x333F0Cu;
label_333f0c:
    // 0x333f0c: 0x262405d8  addiu       $a0, $s1, 0x5D8
    ctx->pc = 0x333f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1496));
label_333f10:
    // 0x333f10: 0xc0a8c98  jal         func_2A3260
label_333f14:
    if (ctx->pc == 0x333F14u) {
        ctx->pc = 0x333F14u;
            // 0x333f14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F18u;
        goto label_333f18;
    }
    ctx->pc = 0x333F10u;
    SET_GPR_U32(ctx, 31, 0x333F18u);
    ctx->pc = 0x333F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F10u;
            // 0x333f14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F18u; }
        if (ctx->pc != 0x333F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F18u; }
        if (ctx->pc != 0x333F18u) { return; }
    }
    ctx->pc = 0x333F18u;
label_333f18:
    // 0x333f18: 0x262405b8  addiu       $a0, $s1, 0x5B8
    ctx->pc = 0x333f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1464));
label_333f1c:
    // 0x333f1c: 0xc0a8c98  jal         func_2A3260
label_333f20:
    if (ctx->pc == 0x333F20u) {
        ctx->pc = 0x333F20u;
            // 0x333f20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F24u;
        goto label_333f24;
    }
    ctx->pc = 0x333F1Cu;
    SET_GPR_U32(ctx, 31, 0x333F24u);
    ctx->pc = 0x333F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F1Cu;
            // 0x333f20: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F24u; }
        if (ctx->pc != 0x333F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F24u; }
        if (ctx->pc != 0x333F24u) { return; }
    }
    ctx->pc = 0x333F24u;
label_333f24:
    // 0x333f24: 0x26240598  addiu       $a0, $s1, 0x598
    ctx->pc = 0x333f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1432));
label_333f28:
    // 0x333f28: 0xc0a8c98  jal         func_2A3260
label_333f2c:
    if (ctx->pc == 0x333F2Cu) {
        ctx->pc = 0x333F2Cu;
            // 0x333f2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F30u;
        goto label_333f30;
    }
    ctx->pc = 0x333F28u;
    SET_GPR_U32(ctx, 31, 0x333F30u);
    ctx->pc = 0x333F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F28u;
            // 0x333f2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F30u; }
        if (ctx->pc != 0x333F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F30u; }
        if (ctx->pc != 0x333F30u) { return; }
    }
    ctx->pc = 0x333F30u;
label_333f30:
    // 0x333f30: 0x26240578  addiu       $a0, $s1, 0x578
    ctx->pc = 0x333f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1400));
label_333f34:
    // 0x333f34: 0xc0a8c98  jal         func_2A3260
label_333f38:
    if (ctx->pc == 0x333F38u) {
        ctx->pc = 0x333F38u;
            // 0x333f38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F3Cu;
        goto label_333f3c;
    }
    ctx->pc = 0x333F34u;
    SET_GPR_U32(ctx, 31, 0x333F3Cu);
    ctx->pc = 0x333F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F34u;
            // 0x333f38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F3Cu; }
        if (ctx->pc != 0x333F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F3Cu; }
        if (ctx->pc != 0x333F3Cu) { return; }
    }
    ctx->pc = 0x333F3Cu;
label_333f3c:
    // 0x333f3c: 0x26240558  addiu       $a0, $s1, 0x558
    ctx->pc = 0x333f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1368));
label_333f40:
    // 0x333f40: 0xc0a8c98  jal         func_2A3260
label_333f44:
    if (ctx->pc == 0x333F44u) {
        ctx->pc = 0x333F44u;
            // 0x333f44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F48u;
        goto label_333f48;
    }
    ctx->pc = 0x333F40u;
    SET_GPR_U32(ctx, 31, 0x333F48u);
    ctx->pc = 0x333F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F40u;
            // 0x333f44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F48u; }
        if (ctx->pc != 0x333F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F48u; }
        if (ctx->pc != 0x333F48u) { return; }
    }
    ctx->pc = 0x333F48u;
label_333f48:
    // 0x333f48: 0x26240538  addiu       $a0, $s1, 0x538
    ctx->pc = 0x333f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1336));
label_333f4c:
    // 0x333f4c: 0xc0a8c98  jal         func_2A3260
label_333f50:
    if (ctx->pc == 0x333F50u) {
        ctx->pc = 0x333F50u;
            // 0x333f50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F54u;
        goto label_333f54;
    }
    ctx->pc = 0x333F4Cu;
    SET_GPR_U32(ctx, 31, 0x333F54u);
    ctx->pc = 0x333F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F4Cu;
            // 0x333f50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F54u; }
        if (ctx->pc != 0x333F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F54u; }
        if (ctx->pc != 0x333F54u) { return; }
    }
    ctx->pc = 0x333F54u;
label_333f54:
    // 0x333f54: 0x26240518  addiu       $a0, $s1, 0x518
    ctx->pc = 0x333f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1304));
label_333f58:
    // 0x333f58: 0xc0a8c98  jal         func_2A3260
label_333f5c:
    if (ctx->pc == 0x333F5Cu) {
        ctx->pc = 0x333F5Cu;
            // 0x333f5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F60u;
        goto label_333f60;
    }
    ctx->pc = 0x333F58u;
    SET_GPR_U32(ctx, 31, 0x333F60u);
    ctx->pc = 0x333F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F58u;
            // 0x333f5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F60u; }
        if (ctx->pc != 0x333F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F60u; }
        if (ctx->pc != 0x333F60u) { return; }
    }
    ctx->pc = 0x333F60u;
label_333f60:
    // 0x333f60: 0x262404f8  addiu       $a0, $s1, 0x4F8
    ctx->pc = 0x333f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1272));
label_333f64:
    // 0x333f64: 0xc0a8c98  jal         func_2A3260
label_333f68:
    if (ctx->pc == 0x333F68u) {
        ctx->pc = 0x333F68u;
            // 0x333f68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F6Cu;
        goto label_333f6c;
    }
    ctx->pc = 0x333F64u;
    SET_GPR_U32(ctx, 31, 0x333F6Cu);
    ctx->pc = 0x333F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F64u;
            // 0x333f68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F6Cu; }
        if (ctx->pc != 0x333F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F6Cu; }
        if (ctx->pc != 0x333F6Cu) { return; }
    }
    ctx->pc = 0x333F6Cu;
label_333f6c:
    // 0x333f6c: 0x262404d8  addiu       $a0, $s1, 0x4D8
    ctx->pc = 0x333f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1240));
label_333f70:
    // 0x333f70: 0xc0a8c98  jal         func_2A3260
label_333f74:
    if (ctx->pc == 0x333F74u) {
        ctx->pc = 0x333F74u;
            // 0x333f74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F78u;
        goto label_333f78;
    }
    ctx->pc = 0x333F70u;
    SET_GPR_U32(ctx, 31, 0x333F78u);
    ctx->pc = 0x333F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F70u;
            // 0x333f74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F78u; }
        if (ctx->pc != 0x333F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F78u; }
        if (ctx->pc != 0x333F78u) { return; }
    }
    ctx->pc = 0x333F78u;
label_333f78:
    // 0x333f78: 0x262404b8  addiu       $a0, $s1, 0x4B8
    ctx->pc = 0x333f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1208));
label_333f7c:
    // 0x333f7c: 0xc0a8c98  jal         func_2A3260
label_333f80:
    if (ctx->pc == 0x333F80u) {
        ctx->pc = 0x333F80u;
            // 0x333f80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F84u;
        goto label_333f84;
    }
    ctx->pc = 0x333F7Cu;
    SET_GPR_U32(ctx, 31, 0x333F84u);
    ctx->pc = 0x333F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F7Cu;
            // 0x333f80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F84u; }
        if (ctx->pc != 0x333F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F84u; }
        if (ctx->pc != 0x333F84u) { return; }
    }
    ctx->pc = 0x333F84u;
label_333f84:
    // 0x333f84: 0x26240498  addiu       $a0, $s1, 0x498
    ctx->pc = 0x333f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1176));
label_333f88:
    // 0x333f88: 0xc0a8c98  jal         func_2A3260
label_333f8c:
    if (ctx->pc == 0x333F8Cu) {
        ctx->pc = 0x333F8Cu;
            // 0x333f8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F90u;
        goto label_333f90;
    }
    ctx->pc = 0x333F88u;
    SET_GPR_U32(ctx, 31, 0x333F90u);
    ctx->pc = 0x333F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F88u;
            // 0x333f8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F90u; }
        if (ctx->pc != 0x333F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F90u; }
        if (ctx->pc != 0x333F90u) { return; }
    }
    ctx->pc = 0x333F90u;
label_333f90:
    // 0x333f90: 0x26240478  addiu       $a0, $s1, 0x478
    ctx->pc = 0x333f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1144));
label_333f94:
    // 0x333f94: 0xc0a8c98  jal         func_2A3260
label_333f98:
    if (ctx->pc == 0x333F98u) {
        ctx->pc = 0x333F98u;
            // 0x333f98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333F9Cu;
        goto label_333f9c;
    }
    ctx->pc = 0x333F94u;
    SET_GPR_U32(ctx, 31, 0x333F9Cu);
    ctx->pc = 0x333F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F94u;
            // 0x333f98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F9Cu; }
        if (ctx->pc != 0x333F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F9Cu; }
        if (ctx->pc != 0x333F9Cu) { return; }
    }
    ctx->pc = 0x333F9Cu;
label_333f9c:
    // 0x333f9c: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x333f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_333fa0:
    // 0x333fa0: 0xc0a8c98  jal         func_2A3260
label_333fa4:
    if (ctx->pc == 0x333FA4u) {
        ctx->pc = 0x333FA4u;
            // 0x333fa4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333FA8u;
        goto label_333fa8;
    }
    ctx->pc = 0x333FA0u;
    SET_GPR_U32(ctx, 31, 0x333FA8u);
    ctx->pc = 0x333FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333FA0u;
            // 0x333fa4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FA8u; }
        if (ctx->pc != 0x333FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FA8u; }
        if (ctx->pc != 0x333FA8u) { return; }
    }
    ctx->pc = 0x333FA8u;
label_333fa8:
    // 0x333fa8: 0x26240438  addiu       $a0, $s1, 0x438
    ctx->pc = 0x333fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1080));
label_333fac:
    // 0x333fac: 0xc0a8c98  jal         func_2A3260
label_333fb0:
    if (ctx->pc == 0x333FB0u) {
        ctx->pc = 0x333FB0u;
            // 0x333fb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333FB4u;
        goto label_333fb4;
    }
    ctx->pc = 0x333FACu;
    SET_GPR_U32(ctx, 31, 0x333FB4u);
    ctx->pc = 0x333FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333FACu;
            // 0x333fb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FB4u; }
        if (ctx->pc != 0x333FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FB4u; }
        if (ctx->pc != 0x333FB4u) { return; }
    }
    ctx->pc = 0x333FB4u;
label_333fb4:
    // 0x333fb4: 0x26240418  addiu       $a0, $s1, 0x418
    ctx->pc = 0x333fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
label_333fb8:
    // 0x333fb8: 0xc0a8c98  jal         func_2A3260
label_333fbc:
    if (ctx->pc == 0x333FBCu) {
        ctx->pc = 0x333FBCu;
            // 0x333fbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333FC0u;
        goto label_333fc0;
    }
    ctx->pc = 0x333FB8u;
    SET_GPR_U32(ctx, 31, 0x333FC0u);
    ctx->pc = 0x333FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333FB8u;
            // 0x333fbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FC0u; }
        if (ctx->pc != 0x333FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FC0u; }
        if (ctx->pc != 0x333FC0u) { return; }
    }
    ctx->pc = 0x333FC0u;
label_333fc0:
    // 0x333fc0: 0x262403f8  addiu       $a0, $s1, 0x3F8
    ctx->pc = 0x333fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1016));
label_333fc4:
    // 0x333fc4: 0xc0a8c98  jal         func_2A3260
label_333fc8:
    if (ctx->pc == 0x333FC8u) {
        ctx->pc = 0x333FC8u;
            // 0x333fc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333FCCu;
        goto label_333fcc;
    }
    ctx->pc = 0x333FC4u;
    SET_GPR_U32(ctx, 31, 0x333FCCu);
    ctx->pc = 0x333FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333FC4u;
            // 0x333fc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FCCu; }
        if (ctx->pc != 0x333FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FCCu; }
        if (ctx->pc != 0x333FCCu) { return; }
    }
    ctx->pc = 0x333FCCu;
label_333fcc:
    // 0x333fcc: 0x262403d8  addiu       $a0, $s1, 0x3D8
    ctx->pc = 0x333fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 984));
label_333fd0:
    // 0x333fd0: 0xc0a8c98  jal         func_2A3260
label_333fd4:
    if (ctx->pc == 0x333FD4u) {
        ctx->pc = 0x333FD4u;
            // 0x333fd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333FD8u;
        goto label_333fd8;
    }
    ctx->pc = 0x333FD0u;
    SET_GPR_U32(ctx, 31, 0x333FD8u);
    ctx->pc = 0x333FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333FD0u;
            // 0x333fd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FD8u; }
        if (ctx->pc != 0x333FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FD8u; }
        if (ctx->pc != 0x333FD8u) { return; }
    }
    ctx->pc = 0x333FD8u;
label_333fd8:
    // 0x333fd8: 0x262403b8  addiu       $a0, $s1, 0x3B8
    ctx->pc = 0x333fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 952));
label_333fdc:
    // 0x333fdc: 0xc0a8c98  jal         func_2A3260
label_333fe0:
    if (ctx->pc == 0x333FE0u) {
        ctx->pc = 0x333FE0u;
            // 0x333fe0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333FE4u;
        goto label_333fe4;
    }
    ctx->pc = 0x333FDCu;
    SET_GPR_U32(ctx, 31, 0x333FE4u);
    ctx->pc = 0x333FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333FDCu;
            // 0x333fe0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FE4u; }
        if (ctx->pc != 0x333FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FE4u; }
        if (ctx->pc != 0x333FE4u) { return; }
    }
    ctx->pc = 0x333FE4u;
label_333fe4:
    // 0x333fe4: 0x26240398  addiu       $a0, $s1, 0x398
    ctx->pc = 0x333fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 920));
label_333fe8:
    // 0x333fe8: 0xc0a8c98  jal         func_2A3260
label_333fec:
    if (ctx->pc == 0x333FECu) {
        ctx->pc = 0x333FECu;
            // 0x333fec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333FF0u;
        goto label_333ff0;
    }
    ctx->pc = 0x333FE8u;
    SET_GPR_U32(ctx, 31, 0x333FF0u);
    ctx->pc = 0x333FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333FE8u;
            // 0x333fec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FF0u; }
        if (ctx->pc != 0x333FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FF0u; }
        if (ctx->pc != 0x333FF0u) { return; }
    }
    ctx->pc = 0x333FF0u;
label_333ff0:
    // 0x333ff0: 0x26240378  addiu       $a0, $s1, 0x378
    ctx->pc = 0x333ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 888));
label_333ff4:
    // 0x333ff4: 0xc0a8c98  jal         func_2A3260
label_333ff8:
    if (ctx->pc == 0x333FF8u) {
        ctx->pc = 0x333FF8u;
            // 0x333ff8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x333FFCu;
        goto label_333ffc;
    }
    ctx->pc = 0x333FF4u;
    SET_GPR_U32(ctx, 31, 0x333FFCu);
    ctx->pc = 0x333FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333FF4u;
            // 0x333ff8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FFCu; }
        if (ctx->pc != 0x333FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FFCu; }
        if (ctx->pc != 0x333FFCu) { return; }
    }
    ctx->pc = 0x333FFCu;
label_333ffc:
    // 0x333ffc: 0x26240358  addiu       $a0, $s1, 0x358
    ctx->pc = 0x333ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 856));
label_334000:
    // 0x334000: 0xc0a8c98  jal         func_2A3260
label_334004:
    if (ctx->pc == 0x334004u) {
        ctx->pc = 0x334004u;
            // 0x334004: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x334008u;
        goto label_334008;
    }
    ctx->pc = 0x334000u;
    SET_GPR_U32(ctx, 31, 0x334008u);
    ctx->pc = 0x334004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334000u;
            // 0x334004: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334008u; }
        if (ctx->pc != 0x334008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334008u; }
        if (ctx->pc != 0x334008u) { return; }
    }
    ctx->pc = 0x334008u;
label_334008:
    // 0x334008: 0x26240338  addiu       $a0, $s1, 0x338
    ctx->pc = 0x334008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
label_33400c:
    // 0x33400c: 0xc0a8c98  jal         func_2A3260
label_334010:
    if (ctx->pc == 0x334010u) {
        ctx->pc = 0x334010u;
            // 0x334010: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x334014u;
        goto label_334014;
    }
    ctx->pc = 0x33400Cu;
    SET_GPR_U32(ctx, 31, 0x334014u);
    ctx->pc = 0x334010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33400Cu;
            // 0x334010: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334014u; }
        if (ctx->pc != 0x334014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334014u; }
        if (ctx->pc != 0x334014u) { return; }
    }
    ctx->pc = 0x334014u;
label_334014:
    // 0x334014: 0x26240318  addiu       $a0, $s1, 0x318
    ctx->pc = 0x334014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
label_334018:
    // 0x334018: 0xc0a8c98  jal         func_2A3260
label_33401c:
    if (ctx->pc == 0x33401Cu) {
        ctx->pc = 0x33401Cu;
            // 0x33401c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x334020u;
        goto label_334020;
    }
    ctx->pc = 0x334018u;
    SET_GPR_U32(ctx, 31, 0x334020u);
    ctx->pc = 0x33401Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334018u;
            // 0x33401c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334020u; }
        if (ctx->pc != 0x334020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334020u; }
        if (ctx->pc != 0x334020u) { return; }
    }
    ctx->pc = 0x334020u;
label_334020:
    // 0x334020: 0x262402f8  addiu       $a0, $s1, 0x2F8
    ctx->pc = 0x334020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 760));
label_334024:
    // 0x334024: 0xc0a8c98  jal         func_2A3260
label_334028:
    if (ctx->pc == 0x334028u) {
        ctx->pc = 0x334028u;
            // 0x334028: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x33402Cu;
        goto label_33402c;
    }
    ctx->pc = 0x334024u;
    SET_GPR_U32(ctx, 31, 0x33402Cu);
    ctx->pc = 0x334028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334024u;
            // 0x334028: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33402Cu; }
        if (ctx->pc != 0x33402Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33402Cu; }
        if (ctx->pc != 0x33402Cu) { return; }
    }
    ctx->pc = 0x33402Cu;
label_33402c:
    // 0x33402c: 0x262402d8  addiu       $a0, $s1, 0x2D8
    ctx->pc = 0x33402cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 728));
label_334030:
    // 0x334030: 0xc0a8c98  jal         func_2A3260
label_334034:
    if (ctx->pc == 0x334034u) {
        ctx->pc = 0x334034u;
            // 0x334034: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x334038u;
        goto label_334038;
    }
    ctx->pc = 0x334030u;
    SET_GPR_U32(ctx, 31, 0x334038u);
    ctx->pc = 0x334034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334030u;
            // 0x334034: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334038u; }
        if (ctx->pc != 0x334038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334038u; }
        if (ctx->pc != 0x334038u) { return; }
    }
    ctx->pc = 0x334038u;
label_334038:
    // 0x334038: 0x262402b8  addiu       $a0, $s1, 0x2B8
    ctx->pc = 0x334038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 696));
label_33403c:
    // 0x33403c: 0xc0a8c98  jal         func_2A3260
label_334040:
    if (ctx->pc == 0x334040u) {
        ctx->pc = 0x334040u;
            // 0x334040: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x334044u;
        goto label_334044;
    }
    ctx->pc = 0x33403Cu;
    SET_GPR_U32(ctx, 31, 0x334044u);
    ctx->pc = 0x334040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33403Cu;
            // 0x334040: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334044u; }
        if (ctx->pc != 0x334044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334044u; }
        if (ctx->pc != 0x334044u) { return; }
    }
    ctx->pc = 0x334044u;
label_334044:
    // 0x334044: 0x26240298  addiu       $a0, $s1, 0x298
    ctx->pc = 0x334044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 664));
label_334048:
    // 0x334048: 0xc0a8c98  jal         func_2A3260
label_33404c:
    if (ctx->pc == 0x33404Cu) {
        ctx->pc = 0x33404Cu;
            // 0x33404c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x334050u;
        goto label_334050;
    }
    ctx->pc = 0x334048u;
    SET_GPR_U32(ctx, 31, 0x334050u);
    ctx->pc = 0x33404Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334048u;
            // 0x33404c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334050u; }
        if (ctx->pc != 0x334050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334050u; }
        if (ctx->pc != 0x334050u) { return; }
    }
    ctx->pc = 0x334050u;
label_334050:
    // 0x334050: 0x26240278  addiu       $a0, $s1, 0x278
    ctx->pc = 0x334050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 632));
label_334054:
    // 0x334054: 0xc0a8c98  jal         func_2A3260
label_334058:
    if (ctx->pc == 0x334058u) {
        ctx->pc = 0x334058u;
            // 0x334058: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x33405Cu;
        goto label_33405c;
    }
    ctx->pc = 0x334054u;
    SET_GPR_U32(ctx, 31, 0x33405Cu);
    ctx->pc = 0x334058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334054u;
            // 0x334058: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33405Cu; }
        if (ctx->pc != 0x33405Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33405Cu; }
        if (ctx->pc != 0x33405Cu) { return; }
    }
    ctx->pc = 0x33405Cu;
label_33405c:
    // 0x33405c: 0x26240258  addiu       $a0, $s1, 0x258
    ctx->pc = 0x33405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 600));
label_334060:
    // 0x334060: 0xc0a8c98  jal         func_2A3260
label_334064:
    if (ctx->pc == 0x334064u) {
        ctx->pc = 0x334064u;
            // 0x334064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x334068u;
        goto label_334068;
    }
    ctx->pc = 0x334060u;
    SET_GPR_U32(ctx, 31, 0x334068u);
    ctx->pc = 0x334064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334060u;
            // 0x334064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334068u; }
        if (ctx->pc != 0x334068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334068u; }
        if (ctx->pc != 0x334068u) { return; }
    }
    ctx->pc = 0x334068u;
label_334068:
    // 0x334068: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x334068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_33406c:
    // 0x33406c: 0x26240188  addiu       $a0, $s1, 0x188
    ctx->pc = 0x33406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 392));
label_334070:
    // 0x334070: 0x24a54110  addiu       $a1, $a1, 0x4110
    ctx->pc = 0x334070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16656));
label_334074:
    // 0x334074: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x334074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_334078:
    // 0x334078: 0xc0407e8  jal         func_101FA0
label_33407c:
    if (ctx->pc == 0x33407Cu) {
        ctx->pc = 0x33407Cu;
            // 0x33407c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x334080u;
        goto label_334080;
    }
    ctx->pc = 0x334078u;
    SET_GPR_U32(ctx, 31, 0x334080u);
    ctx->pc = 0x33407Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334078u;
            // 0x33407c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334080u; }
        if (ctx->pc != 0x334080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334080u; }
        if (ctx->pc != 0x334080u) { return; }
    }
    ctx->pc = 0x334080u;
label_334080:
    // 0x334080: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x334080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_334084:
    // 0x334084: 0x262400b8  addiu       $a0, $s1, 0xB8
    ctx->pc = 0x334084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_334088:
    // 0x334088: 0x24a54110  addiu       $a1, $a1, 0x4110
    ctx->pc = 0x334088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16656));
label_33408c:
    // 0x33408c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x33408cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_334090:
    // 0x334090: 0xc0407e8  jal         func_101FA0
label_334094:
    if (ctx->pc == 0x334094u) {
        ctx->pc = 0x334094u;
            // 0x334094: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x334098u;
        goto label_334098;
    }
    ctx->pc = 0x334090u;
    SET_GPR_U32(ctx, 31, 0x334098u);
    ctx->pc = 0x334094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334090u;
            // 0x334094: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334098u; }
        if (ctx->pc != 0x334098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334098u; }
        if (ctx->pc != 0x334098u) { return; }
    }
    ctx->pc = 0x334098u;
label_334098:
    // 0x334098: 0x26240098  addiu       $a0, $s1, 0x98
    ctx->pc = 0x334098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_33409c:
    // 0x33409c: 0xc0a8c98  jal         func_2A3260
label_3340a0:
    if (ctx->pc == 0x3340A0u) {
        ctx->pc = 0x3340A0u;
            // 0x3340a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3340A4u;
        goto label_3340a4;
    }
    ctx->pc = 0x33409Cu;
    SET_GPR_U32(ctx, 31, 0x3340A4u);
    ctx->pc = 0x3340A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33409Cu;
            // 0x3340a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340A4u; }
        if (ctx->pc != 0x3340A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340A4u; }
        if (ctx->pc != 0x3340A4u) { return; }
    }
    ctx->pc = 0x3340A4u;
label_3340a4:
    // 0x3340a4: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3340a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3340a8:
    // 0x3340a8: 0xc0a8c98  jal         func_2A3260
label_3340ac:
    if (ctx->pc == 0x3340ACu) {
        ctx->pc = 0x3340ACu;
            // 0x3340ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3340B0u;
        goto label_3340b0;
    }
    ctx->pc = 0x3340A8u;
    SET_GPR_U32(ctx, 31, 0x3340B0u);
    ctx->pc = 0x3340ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3340A8u;
            // 0x3340ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340B0u; }
        if (ctx->pc != 0x3340B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340B0u; }
        if (ctx->pc != 0x3340B0u) { return; }
    }
    ctx->pc = 0x3340B0u;
label_3340b0:
    // 0x3340b0: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x3340b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_3340b4:
    // 0x3340b4: 0xc0a8c98  jal         func_2A3260
label_3340b8:
    if (ctx->pc == 0x3340B8u) {
        ctx->pc = 0x3340B8u;
            // 0x3340b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3340BCu;
        goto label_3340bc;
    }
    ctx->pc = 0x3340B4u;
    SET_GPR_U32(ctx, 31, 0x3340BCu);
    ctx->pc = 0x3340B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3340B4u;
            // 0x3340b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340BCu; }
        if (ctx->pc != 0x3340BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340BCu; }
        if (ctx->pc != 0x3340BCu) { return; }
    }
    ctx->pc = 0x3340BCu;
label_3340bc:
    // 0x3340bc: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_3340c0:
    if (ctx->pc == 0x3340C0u) {
        ctx->pc = 0x3340C0u;
            // 0x3340c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3340C4u;
        goto label_3340c4;
    }
    ctx->pc = 0x3340BCu;
    {
        const bool branch_taken_0x3340bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3340bc) {
            ctx->pc = 0x3340C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3340BCu;
            // 0x3340c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3340E0u;
            goto label_3340e0;
        }
    }
    ctx->pc = 0x3340C4u;
label_3340c4:
    // 0x3340c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3340c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3340c8:
    // 0x3340c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3340c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3340cc:
    // 0x3340cc: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x3340ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_3340d0:
    // 0x3340d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3340d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3340d4:
    // 0x3340d4: 0xc057a68  jal         func_15E9A0
label_3340d8:
    if (ctx->pc == 0x3340D8u) {
        ctx->pc = 0x3340D8u;
            // 0x3340d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3340DCu;
        goto label_3340dc;
    }
    ctx->pc = 0x3340D4u;
    SET_GPR_U32(ctx, 31, 0x3340DCu);
    ctx->pc = 0x3340D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3340D4u;
            // 0x3340d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340DCu; }
        if (ctx->pc != 0x3340DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340DCu; }
        if (ctx->pc != 0x3340DCu) { return; }
    }
    ctx->pc = 0x3340DCu;
label_3340dc:
    // 0x3340dc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3340dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3340e0:
    // 0x3340e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3340e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3340e4:
    // 0x3340e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3340e8:
    if (ctx->pc == 0x3340E8u) {
        ctx->pc = 0x3340E8u;
            // 0x3340e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3340ECu;
        goto label_3340ec;
    }
    ctx->pc = 0x3340E4u;
    {
        const bool branch_taken_0x3340e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3340e4) {
            ctx->pc = 0x3340E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3340E4u;
            // 0x3340e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3340F8u;
            goto label_3340f8;
        }
    }
    ctx->pc = 0x3340ECu;
label_3340ec:
    // 0x3340ec: 0xc0400a8  jal         func_1002A0
label_3340f0:
    if (ctx->pc == 0x3340F0u) {
        ctx->pc = 0x3340F0u;
            // 0x3340f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3340F4u;
        goto label_3340f4;
    }
    ctx->pc = 0x3340ECu;
    SET_GPR_U32(ctx, 31, 0x3340F4u);
    ctx->pc = 0x3340F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3340ECu;
            // 0x3340f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340F4u; }
        if (ctx->pc != 0x3340F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340F4u; }
        if (ctx->pc != 0x3340F4u) { return; }
    }
    ctx->pc = 0x3340F4u;
label_3340f4:
    // 0x3340f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3340f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3340f8:
    // 0x3340f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3340f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3340fc:
    // 0x3340fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3340fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_334100:
    // 0x334100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_334104:
    // 0x334104: 0x3e00008  jr          $ra
label_334108:
    if (ctx->pc == 0x334108u) {
        ctx->pc = 0x334108u;
            // 0x334108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x33410Cu;
        goto label_33410c;
    }
    ctx->pc = 0x334104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334104u;
            // 0x334108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33410Cu;
label_33410c:
    // 0x33410c: 0x0  nop
    ctx->pc = 0x33410cu;
    // NOP
label_334110:
    // 0x334110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_334114:
    // 0x334114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x334114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_334118:
    // 0x334118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x334118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33411c:
    // 0x33411c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_334120:
    // 0x334120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334124:
    // 0x334124: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_334128:
    if (ctx->pc == 0x334128u) {
        ctx->pc = 0x334128u;
            // 0x334128: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33412Cu;
        goto label_33412c;
    }
    ctx->pc = 0x334124u;
    {
        const bool branch_taken_0x334124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x334128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334124u;
            // 0x334128: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334124) {
            ctx->pc = 0x33414Cu;
            goto label_33414c;
        }
    }
    ctx->pc = 0x33412Cu;
label_33412c:
    // 0x33412c: 0xc07507c  jal         func_1D41F0
label_334130:
    if (ctx->pc == 0x334130u) {
        ctx->pc = 0x334130u;
            // 0x334130: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x334134u;
        goto label_334134;
    }
    ctx->pc = 0x33412Cu;
    SET_GPR_U32(ctx, 31, 0x334134u);
    ctx->pc = 0x334130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33412Cu;
            // 0x334130: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334134u; }
        if (ctx->pc != 0x334134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334134u; }
        if (ctx->pc != 0x334134u) { return; }
    }
    ctx->pc = 0x334134u;
label_334134:
    // 0x334134: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x334134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_334138:
    // 0x334138: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x334138u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33413c:
    // 0x33413c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_334140:
    if (ctx->pc == 0x334140u) {
        ctx->pc = 0x334140u;
            // 0x334140: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x334144u;
        goto label_334144;
    }
    ctx->pc = 0x33413Cu;
    {
        const bool branch_taken_0x33413c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33413c) {
            ctx->pc = 0x334140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33413Cu;
            // 0x334140: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334150u;
            goto label_334150;
        }
    }
    ctx->pc = 0x334144u;
label_334144:
    // 0x334144: 0xc0400a8  jal         func_1002A0
label_334148:
    if (ctx->pc == 0x334148u) {
        ctx->pc = 0x334148u;
            // 0x334148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33414Cu;
        goto label_33414c;
    }
    ctx->pc = 0x334144u;
    SET_GPR_U32(ctx, 31, 0x33414Cu);
    ctx->pc = 0x334148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334144u;
            // 0x334148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33414Cu; }
        if (ctx->pc != 0x33414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33414Cu; }
        if (ctx->pc != 0x33414Cu) { return; }
    }
    ctx->pc = 0x33414Cu;
label_33414c:
    // 0x33414c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33414cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334150:
    // 0x334150: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_334154:
    // 0x334154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_334158:
    // 0x334158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33415c:
    // 0x33415c: 0x3e00008  jr          $ra
label_334160:
    if (ctx->pc == 0x334160u) {
        ctx->pc = 0x334160u;
            // 0x334160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x334164u;
        goto label_334164;
    }
    ctx->pc = 0x33415Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33415Cu;
            // 0x334160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334164u;
label_334164:
    // 0x334164: 0x0  nop
    ctx->pc = 0x334164u;
    // NOP
label_334168:
    // 0x334168: 0x0  nop
    ctx->pc = 0x334168u;
    // NOP
label_33416c:
    // 0x33416c: 0x0  nop
    ctx->pc = 0x33416cu;
    // NOP
label_334170:
    // 0x334170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x334170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_334174:
    // 0x334174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x334174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_334178:
    // 0x334178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x334178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33417c:
    // 0x33417c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_334180:
    // 0x334180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334184:
    // 0x334184: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_334188:
    if (ctx->pc == 0x334188u) {
        ctx->pc = 0x334188u;
            // 0x334188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33418Cu;
        goto label_33418c;
    }
    ctx->pc = 0x334184u;
    {
        const bool branch_taken_0x334184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x334188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334184u;
            // 0x334188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334184) {
            ctx->pc = 0x33420Cu;
            goto label_33420c;
        }
    }
    ctx->pc = 0x33418Cu;
label_33418c:
    // 0x33418c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_334190:
    // 0x334190: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x334190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_334194:
    // 0x334194: 0x24424b60  addiu       $v0, $v0, 0x4B60
    ctx->pc = 0x334194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19296));
label_334198:
    // 0x334198: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_33419c:
    if (ctx->pc == 0x33419Cu) {
        ctx->pc = 0x33419Cu;
            // 0x33419c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3341A0u;
        goto label_3341a0;
    }
    ctx->pc = 0x334198u;
    {
        const bool branch_taken_0x334198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334198u;
            // 0x33419c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334198) {
            ctx->pc = 0x3341D8u;
            goto label_3341d8;
        }
    }
    ctx->pc = 0x3341A0u;
label_3341a0:
    // 0x3341a0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_3341a4:
    if (ctx->pc == 0x3341A4u) {
        ctx->pc = 0x3341A8u;
        goto label_3341a8;
    }
    ctx->pc = 0x3341A0u;
    {
        const bool branch_taken_0x3341a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3341a0) {
            ctx->pc = 0x3341D8u;
            goto label_3341d8;
        }
    }
    ctx->pc = 0x3341A8u;
label_3341a8:
    // 0x3341a8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_3341ac:
    if (ctx->pc == 0x3341ACu) {
        ctx->pc = 0x3341B0u;
        goto label_3341b0;
    }
    ctx->pc = 0x3341A8u;
    {
        const bool branch_taken_0x3341a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3341a8) {
            ctx->pc = 0x3341D8u;
            goto label_3341d8;
        }
    }
    ctx->pc = 0x3341B0u;
label_3341b0:
    // 0x3341b0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_3341b4:
    if (ctx->pc == 0x3341B4u) {
        ctx->pc = 0x3341B8u;
        goto label_3341b8;
    }
    ctx->pc = 0x3341B0u;
    {
        const bool branch_taken_0x3341b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3341b0) {
            ctx->pc = 0x3341D8u;
            goto label_3341d8;
        }
    }
    ctx->pc = 0x3341B8u;
label_3341b8:
    // 0x3341b8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x3341b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3341bc:
    // 0x3341bc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x3341bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_3341c0:
    // 0x3341c0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3341c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3341c4:
    // 0x3341c4: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x3341c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3341c8:
    // 0x3341c8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3341c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3341cc:
    // 0x3341cc: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x3341ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_3341d0:
    // 0x3341d0: 0xc05827c  jal         func_1609F0
label_3341d4:
    if (ctx->pc == 0x3341D4u) {
        ctx->pc = 0x3341D4u;
            // 0x3341d4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x3341D8u;
        goto label_3341d8;
    }
    ctx->pc = 0x3341D0u;
    SET_GPR_U32(ctx, 31, 0x3341D8u);
    ctx->pc = 0x3341D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3341D0u;
            // 0x3341d4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3341D8u; }
        if (ctx->pc != 0x3341D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3341D8u; }
        if (ctx->pc != 0x3341D8u) { return; }
    }
    ctx->pc = 0x3341D8u;
label_3341d8:
    // 0x3341d8: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_3341dc:
    if (ctx->pc == 0x3341DCu) {
        ctx->pc = 0x3341DCu;
            // 0x3341dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3341E0u;
        goto label_3341e0;
    }
    ctx->pc = 0x3341D8u;
    {
        const bool branch_taken_0x3341d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3341d8) {
            ctx->pc = 0x3341DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3341D8u;
            // 0x3341dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3341F8u;
            goto label_3341f8;
        }
    }
    ctx->pc = 0x3341E0u;
label_3341e0:
    // 0x3341e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3341e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3341e4:
    // 0x3341e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3341e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3341e8:
    // 0x3341e8: 0x24634b50  addiu       $v1, $v1, 0x4B50
    ctx->pc = 0x3341e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19280));
label_3341ec:
    // 0x3341ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3341ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3341f0:
    // 0x3341f0: 0xac400e60  sw          $zero, 0xE60($v0)
    ctx->pc = 0x3341f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3680), GPR_U32(ctx, 0));
label_3341f4:
    // 0x3341f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3341f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3341f8:
    // 0x3341f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3341f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3341fc:
    // 0x3341fc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_334200:
    if (ctx->pc == 0x334200u) {
        ctx->pc = 0x334200u;
            // 0x334200: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x334204u;
        goto label_334204;
    }
    ctx->pc = 0x3341FCu;
    {
        const bool branch_taken_0x3341fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3341fc) {
            ctx->pc = 0x334200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3341FCu;
            // 0x334200: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334210u;
            goto label_334210;
        }
    }
    ctx->pc = 0x334204u;
label_334204:
    // 0x334204: 0xc0400a8  jal         func_1002A0
label_334208:
    if (ctx->pc == 0x334208u) {
        ctx->pc = 0x334208u;
            // 0x334208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33420Cu;
        goto label_33420c;
    }
    ctx->pc = 0x334204u;
    SET_GPR_U32(ctx, 31, 0x33420Cu);
    ctx->pc = 0x334208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334204u;
            // 0x334208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33420Cu; }
        if (ctx->pc != 0x33420Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33420Cu; }
        if (ctx->pc != 0x33420Cu) { return; }
    }
    ctx->pc = 0x33420Cu;
label_33420c:
    // 0x33420c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33420cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334210:
    // 0x334210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_334214:
    // 0x334214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_334218:
    // 0x334218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33421c:
    // 0x33421c: 0x3e00008  jr          $ra
label_334220:
    if (ctx->pc == 0x334220u) {
        ctx->pc = 0x334220u;
            // 0x334220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x334224u;
        goto label_334224;
    }
    ctx->pc = 0x33421Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33421Cu;
            // 0x334220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334224u;
label_334224:
    // 0x334224: 0x0  nop
    ctx->pc = 0x334224u;
    // NOP
label_334228:
    // 0x334228: 0x0  nop
    ctx->pc = 0x334228u;
    // NOP
label_33422c:
    // 0x33422c: 0x0  nop
    ctx->pc = 0x33422cu;
    // NOP
}
