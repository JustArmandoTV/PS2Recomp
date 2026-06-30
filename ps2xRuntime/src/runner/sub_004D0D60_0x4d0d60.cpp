#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D0D60
// Address: 0x4d0d60 - 0x4d11b0
void sub_004D0D60_0x4d0d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0D60_0x4d0d60");
#endif

    switch (ctx->pc) {
        case 0x4d0d60u: goto label_4d0d60;
        case 0x4d0d64u: goto label_4d0d64;
        case 0x4d0d68u: goto label_4d0d68;
        case 0x4d0d6cu: goto label_4d0d6c;
        case 0x4d0d70u: goto label_4d0d70;
        case 0x4d0d74u: goto label_4d0d74;
        case 0x4d0d78u: goto label_4d0d78;
        case 0x4d0d7cu: goto label_4d0d7c;
        case 0x4d0d80u: goto label_4d0d80;
        case 0x4d0d84u: goto label_4d0d84;
        case 0x4d0d88u: goto label_4d0d88;
        case 0x4d0d8cu: goto label_4d0d8c;
        case 0x4d0d90u: goto label_4d0d90;
        case 0x4d0d94u: goto label_4d0d94;
        case 0x4d0d98u: goto label_4d0d98;
        case 0x4d0d9cu: goto label_4d0d9c;
        case 0x4d0da0u: goto label_4d0da0;
        case 0x4d0da4u: goto label_4d0da4;
        case 0x4d0da8u: goto label_4d0da8;
        case 0x4d0dacu: goto label_4d0dac;
        case 0x4d0db0u: goto label_4d0db0;
        case 0x4d0db4u: goto label_4d0db4;
        case 0x4d0db8u: goto label_4d0db8;
        case 0x4d0dbcu: goto label_4d0dbc;
        case 0x4d0dc0u: goto label_4d0dc0;
        case 0x4d0dc4u: goto label_4d0dc4;
        case 0x4d0dc8u: goto label_4d0dc8;
        case 0x4d0dccu: goto label_4d0dcc;
        case 0x4d0dd0u: goto label_4d0dd0;
        case 0x4d0dd4u: goto label_4d0dd4;
        case 0x4d0dd8u: goto label_4d0dd8;
        case 0x4d0ddcu: goto label_4d0ddc;
        case 0x4d0de0u: goto label_4d0de0;
        case 0x4d0de4u: goto label_4d0de4;
        case 0x4d0de8u: goto label_4d0de8;
        case 0x4d0decu: goto label_4d0dec;
        case 0x4d0df0u: goto label_4d0df0;
        case 0x4d0df4u: goto label_4d0df4;
        case 0x4d0df8u: goto label_4d0df8;
        case 0x4d0dfcu: goto label_4d0dfc;
        case 0x4d0e00u: goto label_4d0e00;
        case 0x4d0e04u: goto label_4d0e04;
        case 0x4d0e08u: goto label_4d0e08;
        case 0x4d0e0cu: goto label_4d0e0c;
        case 0x4d0e10u: goto label_4d0e10;
        case 0x4d0e14u: goto label_4d0e14;
        case 0x4d0e18u: goto label_4d0e18;
        case 0x4d0e1cu: goto label_4d0e1c;
        case 0x4d0e20u: goto label_4d0e20;
        case 0x4d0e24u: goto label_4d0e24;
        case 0x4d0e28u: goto label_4d0e28;
        case 0x4d0e2cu: goto label_4d0e2c;
        case 0x4d0e30u: goto label_4d0e30;
        case 0x4d0e34u: goto label_4d0e34;
        case 0x4d0e38u: goto label_4d0e38;
        case 0x4d0e3cu: goto label_4d0e3c;
        case 0x4d0e40u: goto label_4d0e40;
        case 0x4d0e44u: goto label_4d0e44;
        case 0x4d0e48u: goto label_4d0e48;
        case 0x4d0e4cu: goto label_4d0e4c;
        case 0x4d0e50u: goto label_4d0e50;
        case 0x4d0e54u: goto label_4d0e54;
        case 0x4d0e58u: goto label_4d0e58;
        case 0x4d0e5cu: goto label_4d0e5c;
        case 0x4d0e60u: goto label_4d0e60;
        case 0x4d0e64u: goto label_4d0e64;
        case 0x4d0e68u: goto label_4d0e68;
        case 0x4d0e6cu: goto label_4d0e6c;
        case 0x4d0e70u: goto label_4d0e70;
        case 0x4d0e74u: goto label_4d0e74;
        case 0x4d0e78u: goto label_4d0e78;
        case 0x4d0e7cu: goto label_4d0e7c;
        case 0x4d0e80u: goto label_4d0e80;
        case 0x4d0e84u: goto label_4d0e84;
        case 0x4d0e88u: goto label_4d0e88;
        case 0x4d0e8cu: goto label_4d0e8c;
        case 0x4d0e90u: goto label_4d0e90;
        case 0x4d0e94u: goto label_4d0e94;
        case 0x4d0e98u: goto label_4d0e98;
        case 0x4d0e9cu: goto label_4d0e9c;
        case 0x4d0ea0u: goto label_4d0ea0;
        case 0x4d0ea4u: goto label_4d0ea4;
        case 0x4d0ea8u: goto label_4d0ea8;
        case 0x4d0eacu: goto label_4d0eac;
        case 0x4d0eb0u: goto label_4d0eb0;
        case 0x4d0eb4u: goto label_4d0eb4;
        case 0x4d0eb8u: goto label_4d0eb8;
        case 0x4d0ebcu: goto label_4d0ebc;
        case 0x4d0ec0u: goto label_4d0ec0;
        case 0x4d0ec4u: goto label_4d0ec4;
        case 0x4d0ec8u: goto label_4d0ec8;
        case 0x4d0eccu: goto label_4d0ecc;
        case 0x4d0ed0u: goto label_4d0ed0;
        case 0x4d0ed4u: goto label_4d0ed4;
        case 0x4d0ed8u: goto label_4d0ed8;
        case 0x4d0edcu: goto label_4d0edc;
        case 0x4d0ee0u: goto label_4d0ee0;
        case 0x4d0ee4u: goto label_4d0ee4;
        case 0x4d0ee8u: goto label_4d0ee8;
        case 0x4d0eecu: goto label_4d0eec;
        case 0x4d0ef0u: goto label_4d0ef0;
        case 0x4d0ef4u: goto label_4d0ef4;
        case 0x4d0ef8u: goto label_4d0ef8;
        case 0x4d0efcu: goto label_4d0efc;
        case 0x4d0f00u: goto label_4d0f00;
        case 0x4d0f04u: goto label_4d0f04;
        case 0x4d0f08u: goto label_4d0f08;
        case 0x4d0f0cu: goto label_4d0f0c;
        case 0x4d0f10u: goto label_4d0f10;
        case 0x4d0f14u: goto label_4d0f14;
        case 0x4d0f18u: goto label_4d0f18;
        case 0x4d0f1cu: goto label_4d0f1c;
        case 0x4d0f20u: goto label_4d0f20;
        case 0x4d0f24u: goto label_4d0f24;
        case 0x4d0f28u: goto label_4d0f28;
        case 0x4d0f2cu: goto label_4d0f2c;
        case 0x4d0f30u: goto label_4d0f30;
        case 0x4d0f34u: goto label_4d0f34;
        case 0x4d0f38u: goto label_4d0f38;
        case 0x4d0f3cu: goto label_4d0f3c;
        case 0x4d0f40u: goto label_4d0f40;
        case 0x4d0f44u: goto label_4d0f44;
        case 0x4d0f48u: goto label_4d0f48;
        case 0x4d0f4cu: goto label_4d0f4c;
        case 0x4d0f50u: goto label_4d0f50;
        case 0x4d0f54u: goto label_4d0f54;
        case 0x4d0f58u: goto label_4d0f58;
        case 0x4d0f5cu: goto label_4d0f5c;
        case 0x4d0f60u: goto label_4d0f60;
        case 0x4d0f64u: goto label_4d0f64;
        case 0x4d0f68u: goto label_4d0f68;
        case 0x4d0f6cu: goto label_4d0f6c;
        case 0x4d0f70u: goto label_4d0f70;
        case 0x4d0f74u: goto label_4d0f74;
        case 0x4d0f78u: goto label_4d0f78;
        case 0x4d0f7cu: goto label_4d0f7c;
        case 0x4d0f80u: goto label_4d0f80;
        case 0x4d0f84u: goto label_4d0f84;
        case 0x4d0f88u: goto label_4d0f88;
        case 0x4d0f8cu: goto label_4d0f8c;
        case 0x4d0f90u: goto label_4d0f90;
        case 0x4d0f94u: goto label_4d0f94;
        case 0x4d0f98u: goto label_4d0f98;
        case 0x4d0f9cu: goto label_4d0f9c;
        case 0x4d0fa0u: goto label_4d0fa0;
        case 0x4d0fa4u: goto label_4d0fa4;
        case 0x4d0fa8u: goto label_4d0fa8;
        case 0x4d0facu: goto label_4d0fac;
        case 0x4d0fb0u: goto label_4d0fb0;
        case 0x4d0fb4u: goto label_4d0fb4;
        case 0x4d0fb8u: goto label_4d0fb8;
        case 0x4d0fbcu: goto label_4d0fbc;
        case 0x4d0fc0u: goto label_4d0fc0;
        case 0x4d0fc4u: goto label_4d0fc4;
        case 0x4d0fc8u: goto label_4d0fc8;
        case 0x4d0fccu: goto label_4d0fcc;
        case 0x4d0fd0u: goto label_4d0fd0;
        case 0x4d0fd4u: goto label_4d0fd4;
        case 0x4d0fd8u: goto label_4d0fd8;
        case 0x4d0fdcu: goto label_4d0fdc;
        case 0x4d0fe0u: goto label_4d0fe0;
        case 0x4d0fe4u: goto label_4d0fe4;
        case 0x4d0fe8u: goto label_4d0fe8;
        case 0x4d0fecu: goto label_4d0fec;
        case 0x4d0ff0u: goto label_4d0ff0;
        case 0x4d0ff4u: goto label_4d0ff4;
        case 0x4d0ff8u: goto label_4d0ff8;
        case 0x4d0ffcu: goto label_4d0ffc;
        case 0x4d1000u: goto label_4d1000;
        case 0x4d1004u: goto label_4d1004;
        case 0x4d1008u: goto label_4d1008;
        case 0x4d100cu: goto label_4d100c;
        case 0x4d1010u: goto label_4d1010;
        case 0x4d1014u: goto label_4d1014;
        case 0x4d1018u: goto label_4d1018;
        case 0x4d101cu: goto label_4d101c;
        case 0x4d1020u: goto label_4d1020;
        case 0x4d1024u: goto label_4d1024;
        case 0x4d1028u: goto label_4d1028;
        case 0x4d102cu: goto label_4d102c;
        case 0x4d1030u: goto label_4d1030;
        case 0x4d1034u: goto label_4d1034;
        case 0x4d1038u: goto label_4d1038;
        case 0x4d103cu: goto label_4d103c;
        case 0x4d1040u: goto label_4d1040;
        case 0x4d1044u: goto label_4d1044;
        case 0x4d1048u: goto label_4d1048;
        case 0x4d104cu: goto label_4d104c;
        case 0x4d1050u: goto label_4d1050;
        case 0x4d1054u: goto label_4d1054;
        case 0x4d1058u: goto label_4d1058;
        case 0x4d105cu: goto label_4d105c;
        case 0x4d1060u: goto label_4d1060;
        case 0x4d1064u: goto label_4d1064;
        case 0x4d1068u: goto label_4d1068;
        case 0x4d106cu: goto label_4d106c;
        case 0x4d1070u: goto label_4d1070;
        case 0x4d1074u: goto label_4d1074;
        case 0x4d1078u: goto label_4d1078;
        case 0x4d107cu: goto label_4d107c;
        case 0x4d1080u: goto label_4d1080;
        case 0x4d1084u: goto label_4d1084;
        case 0x4d1088u: goto label_4d1088;
        case 0x4d108cu: goto label_4d108c;
        case 0x4d1090u: goto label_4d1090;
        case 0x4d1094u: goto label_4d1094;
        case 0x4d1098u: goto label_4d1098;
        case 0x4d109cu: goto label_4d109c;
        case 0x4d10a0u: goto label_4d10a0;
        case 0x4d10a4u: goto label_4d10a4;
        case 0x4d10a8u: goto label_4d10a8;
        case 0x4d10acu: goto label_4d10ac;
        case 0x4d10b0u: goto label_4d10b0;
        case 0x4d10b4u: goto label_4d10b4;
        case 0x4d10b8u: goto label_4d10b8;
        case 0x4d10bcu: goto label_4d10bc;
        case 0x4d10c0u: goto label_4d10c0;
        case 0x4d10c4u: goto label_4d10c4;
        case 0x4d10c8u: goto label_4d10c8;
        case 0x4d10ccu: goto label_4d10cc;
        case 0x4d10d0u: goto label_4d10d0;
        case 0x4d10d4u: goto label_4d10d4;
        case 0x4d10d8u: goto label_4d10d8;
        case 0x4d10dcu: goto label_4d10dc;
        case 0x4d10e0u: goto label_4d10e0;
        case 0x4d10e4u: goto label_4d10e4;
        case 0x4d10e8u: goto label_4d10e8;
        case 0x4d10ecu: goto label_4d10ec;
        case 0x4d10f0u: goto label_4d10f0;
        case 0x4d10f4u: goto label_4d10f4;
        case 0x4d10f8u: goto label_4d10f8;
        case 0x4d10fcu: goto label_4d10fc;
        case 0x4d1100u: goto label_4d1100;
        case 0x4d1104u: goto label_4d1104;
        case 0x4d1108u: goto label_4d1108;
        case 0x4d110cu: goto label_4d110c;
        case 0x4d1110u: goto label_4d1110;
        case 0x4d1114u: goto label_4d1114;
        case 0x4d1118u: goto label_4d1118;
        case 0x4d111cu: goto label_4d111c;
        case 0x4d1120u: goto label_4d1120;
        case 0x4d1124u: goto label_4d1124;
        case 0x4d1128u: goto label_4d1128;
        case 0x4d112cu: goto label_4d112c;
        case 0x4d1130u: goto label_4d1130;
        case 0x4d1134u: goto label_4d1134;
        case 0x4d1138u: goto label_4d1138;
        case 0x4d113cu: goto label_4d113c;
        case 0x4d1140u: goto label_4d1140;
        case 0x4d1144u: goto label_4d1144;
        case 0x4d1148u: goto label_4d1148;
        case 0x4d114cu: goto label_4d114c;
        case 0x4d1150u: goto label_4d1150;
        case 0x4d1154u: goto label_4d1154;
        case 0x4d1158u: goto label_4d1158;
        case 0x4d115cu: goto label_4d115c;
        case 0x4d1160u: goto label_4d1160;
        case 0x4d1164u: goto label_4d1164;
        case 0x4d1168u: goto label_4d1168;
        case 0x4d116cu: goto label_4d116c;
        case 0x4d1170u: goto label_4d1170;
        case 0x4d1174u: goto label_4d1174;
        case 0x4d1178u: goto label_4d1178;
        case 0x4d117cu: goto label_4d117c;
        case 0x4d1180u: goto label_4d1180;
        case 0x4d1184u: goto label_4d1184;
        case 0x4d1188u: goto label_4d1188;
        case 0x4d118cu: goto label_4d118c;
        case 0x4d1190u: goto label_4d1190;
        case 0x4d1194u: goto label_4d1194;
        case 0x4d1198u: goto label_4d1198;
        case 0x4d119cu: goto label_4d119c;
        case 0x4d11a0u: goto label_4d11a0;
        case 0x4d11a4u: goto label_4d11a4;
        case 0x4d11a8u: goto label_4d11a8;
        case 0x4d11acu: goto label_4d11ac;
        default: break;
    }

    ctx->pc = 0x4d0d60u;

label_4d0d60:
    // 0x4d0d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d0d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d0d64:
    // 0x4d0d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d0d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d0d68:
    // 0x4d0d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d0d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d0d6c:
    // 0x4d0d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d0d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0d70:
    // 0x4d0d70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d0d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d0d74:
    // 0x4d0d74: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4d0d78:
    if (ctx->pc == 0x4D0D78u) {
        ctx->pc = 0x4D0D78u;
            // 0x4d0d78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0D7Cu;
        goto label_4d0d7c;
    }
    ctx->pc = 0x4D0D74u;
    {
        const bool branch_taken_0x4d0d74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0D74u;
            // 0x4d0d78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0d74) {
            ctx->pc = 0x4D0EA8u;
            goto label_4d0ea8;
        }
    }
    ctx->pc = 0x4D0D7Cu;
label_4d0d7c:
    // 0x4d0d7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d0d80:
    // 0x4d0d80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d0d84:
    // 0x4d0d84: 0x24632120  addiu       $v1, $v1, 0x2120
    ctx->pc = 0x4d0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8480));
label_4d0d88:
    // 0x4d0d88: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4d0d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4d0d8c:
    // 0x4d0d8c: 0x24422158  addiu       $v0, $v0, 0x2158
    ctx->pc = 0x4d0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8536));
label_4d0d90:
    // 0x4d0d90: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d0d94:
    // 0x4d0d94: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4d0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4d0d98:
    // 0x4d0d98: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4d0d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4d0d9c:
    // 0x4d0d9c: 0xc0407c0  jal         func_101F00
label_4d0da0:
    if (ctx->pc == 0x4D0DA0u) {
        ctx->pc = 0x4D0DA0u;
            // 0x4d0da0: 0x24a50ec0  addiu       $a1, $a1, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3776));
        ctx->pc = 0x4D0DA4u;
        goto label_4d0da4;
    }
    ctx->pc = 0x4D0D9Cu;
    SET_GPR_U32(ctx, 31, 0x4D0DA4u);
    ctx->pc = 0x4D0DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0D9Cu;
            // 0x4d0da0: 0x24a50ec0  addiu       $a1, $a1, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0DA4u; }
        if (ctx->pc != 0x4D0DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0DA4u; }
        if (ctx->pc != 0x4D0DA4u) { return; }
    }
    ctx->pc = 0x4D0DA4u;
label_4d0da4:
    // 0x4d0da4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4d0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4d0da8:
    // 0x4d0da8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4d0dac:
    if (ctx->pc == 0x4D0DACu) {
        ctx->pc = 0x4D0DACu;
            // 0x4d0dac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4D0DB0u;
        goto label_4d0db0;
    }
    ctx->pc = 0x4D0DA8u;
    {
        const bool branch_taken_0x4d0da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0da8) {
            ctx->pc = 0x4D0DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0DA8u;
            // 0x4d0dac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0DBCu;
            goto label_4d0dbc;
        }
    }
    ctx->pc = 0x4D0DB0u;
label_4d0db0:
    // 0x4d0db0: 0xc07507c  jal         func_1D41F0
label_4d0db4:
    if (ctx->pc == 0x4D0DB4u) {
        ctx->pc = 0x4D0DB4u;
            // 0x4d0db4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4D0DB8u;
        goto label_4d0db8;
    }
    ctx->pc = 0x4D0DB0u;
    SET_GPR_U32(ctx, 31, 0x4D0DB8u);
    ctx->pc = 0x4D0DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0DB0u;
            // 0x4d0db4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0DB8u; }
        if (ctx->pc != 0x4D0DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0DB8u; }
        if (ctx->pc != 0x4D0DB8u) { return; }
    }
    ctx->pc = 0x4D0DB8u;
label_4d0db8:
    // 0x4d0db8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4d0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4d0dbc:
    // 0x4d0dbc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d0dc0:
    if (ctx->pc == 0x4D0DC0u) {
        ctx->pc = 0x4D0DC0u;
            // 0x4d0dc0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4D0DC4u;
        goto label_4d0dc4;
    }
    ctx->pc = 0x4D0DBCu;
    {
        const bool branch_taken_0x4d0dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0dbc) {
            ctx->pc = 0x4D0DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0DBCu;
            // 0x4d0dc0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0DECu;
            goto label_4d0dec;
        }
    }
    ctx->pc = 0x4D0DC4u;
label_4d0dc4:
    // 0x4d0dc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d0dc8:
    if (ctx->pc == 0x4D0DC8u) {
        ctx->pc = 0x4D0DCCu;
        goto label_4d0dcc;
    }
    ctx->pc = 0x4D0DC4u;
    {
        const bool branch_taken_0x4d0dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0dc4) {
            ctx->pc = 0x4D0DE8u;
            goto label_4d0de8;
        }
    }
    ctx->pc = 0x4D0DCCu;
label_4d0dcc:
    // 0x4d0dcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d0dd0:
    if (ctx->pc == 0x4D0DD0u) {
        ctx->pc = 0x4D0DD4u;
        goto label_4d0dd4;
    }
    ctx->pc = 0x4D0DCCu;
    {
        const bool branch_taken_0x4d0dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0dcc) {
            ctx->pc = 0x4D0DE8u;
            goto label_4d0de8;
        }
    }
    ctx->pc = 0x4D0DD4u;
label_4d0dd4:
    // 0x4d0dd4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4d0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4d0dd8:
    // 0x4d0dd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d0ddc:
    if (ctx->pc == 0x4D0DDCu) {
        ctx->pc = 0x4D0DE0u;
        goto label_4d0de0;
    }
    ctx->pc = 0x4D0DD8u;
    {
        const bool branch_taken_0x4d0dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0dd8) {
            ctx->pc = 0x4D0DE8u;
            goto label_4d0de8;
        }
    }
    ctx->pc = 0x4D0DE0u;
label_4d0de0:
    // 0x4d0de0: 0xc0400a8  jal         func_1002A0
label_4d0de4:
    if (ctx->pc == 0x4D0DE4u) {
        ctx->pc = 0x4D0DE8u;
        goto label_4d0de8;
    }
    ctx->pc = 0x4D0DE0u;
    SET_GPR_U32(ctx, 31, 0x4D0DE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0DE8u; }
        if (ctx->pc != 0x4D0DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0DE8u; }
        if (ctx->pc != 0x4D0DE8u) { return; }
    }
    ctx->pc = 0x4D0DE8u;
label_4d0de8:
    // 0x4d0de8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4d0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4d0dec:
    // 0x4d0dec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4d0df0:
    if (ctx->pc == 0x4D0DF0u) {
        ctx->pc = 0x4D0DF0u;
            // 0x4d0df0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4D0DF4u;
        goto label_4d0df4;
    }
    ctx->pc = 0x4D0DECu;
    {
        const bool branch_taken_0x4d0dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0dec) {
            ctx->pc = 0x4D0DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0DECu;
            // 0x4d0df0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0E1Cu;
            goto label_4d0e1c;
        }
    }
    ctx->pc = 0x4D0DF4u;
label_4d0df4:
    // 0x4d0df4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4d0df8:
    if (ctx->pc == 0x4D0DF8u) {
        ctx->pc = 0x4D0DFCu;
        goto label_4d0dfc;
    }
    ctx->pc = 0x4D0DF4u;
    {
        const bool branch_taken_0x4d0df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0df4) {
            ctx->pc = 0x4D0E18u;
            goto label_4d0e18;
        }
    }
    ctx->pc = 0x4D0DFCu;
label_4d0dfc:
    // 0x4d0dfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d0e00:
    if (ctx->pc == 0x4D0E00u) {
        ctx->pc = 0x4D0E04u;
        goto label_4d0e04;
    }
    ctx->pc = 0x4D0DFCu;
    {
        const bool branch_taken_0x4d0dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0dfc) {
            ctx->pc = 0x4D0E18u;
            goto label_4d0e18;
        }
    }
    ctx->pc = 0x4D0E04u;
label_4d0e04:
    // 0x4d0e04: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4d0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4d0e08:
    // 0x4d0e08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4d0e0c:
    if (ctx->pc == 0x4D0E0Cu) {
        ctx->pc = 0x4D0E10u;
        goto label_4d0e10;
    }
    ctx->pc = 0x4D0E08u;
    {
        const bool branch_taken_0x4d0e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0e08) {
            ctx->pc = 0x4D0E18u;
            goto label_4d0e18;
        }
    }
    ctx->pc = 0x4D0E10u;
label_4d0e10:
    // 0x4d0e10: 0xc0400a8  jal         func_1002A0
label_4d0e14:
    if (ctx->pc == 0x4D0E14u) {
        ctx->pc = 0x4D0E18u;
        goto label_4d0e18;
    }
    ctx->pc = 0x4D0E10u;
    SET_GPR_U32(ctx, 31, 0x4D0E18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0E18u; }
        if (ctx->pc != 0x4D0E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0E18u; }
        if (ctx->pc != 0x4D0E18u) { return; }
    }
    ctx->pc = 0x4D0E18u;
label_4d0e18:
    // 0x4d0e18: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4d0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4d0e1c:
    // 0x4d0e1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4d0e20:
    if (ctx->pc == 0x4D0E20u) {
        ctx->pc = 0x4D0E24u;
        goto label_4d0e24;
    }
    ctx->pc = 0x4D0E1Cu;
    {
        const bool branch_taken_0x4d0e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0e1c) {
            ctx->pc = 0x4D0E38u;
            goto label_4d0e38;
        }
    }
    ctx->pc = 0x4D0E24u;
label_4d0e24:
    // 0x4d0e24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d0e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d0e28:
    // 0x4d0e28: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4d0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4d0e2c:
    // 0x4d0e2c: 0x24632108  addiu       $v1, $v1, 0x2108
    ctx->pc = 0x4d0e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8456));
label_4d0e30:
    // 0x4d0e30: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4d0e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4d0e34:
    // 0x4d0e34: 0xac40aa30  sw          $zero, -0x55D0($v0)
    ctx->pc = 0x4d0e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945328), GPR_U32(ctx, 0));
label_4d0e38:
    // 0x4d0e38: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4d0e3c:
    if (ctx->pc == 0x4D0E3Cu) {
        ctx->pc = 0x4D0E3Cu;
            // 0x4d0e3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4D0E40u;
        goto label_4d0e40;
    }
    ctx->pc = 0x4D0E38u;
    {
        const bool branch_taken_0x4d0e38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0e38) {
            ctx->pc = 0x4D0E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0E38u;
            // 0x4d0e3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0E94u;
            goto label_4d0e94;
        }
    }
    ctx->pc = 0x4D0E40u;
label_4d0e40:
    // 0x4d0e40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4d0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4d0e44:
    // 0x4d0e44: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4d0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4d0e48:
    // 0x4d0e48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4d0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4d0e4c:
    // 0x4d0e4c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4d0e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4d0e50:
    // 0x4d0e50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d0e54:
    if (ctx->pc == 0x4D0E54u) {
        ctx->pc = 0x4D0E54u;
            // 0x4d0e54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4D0E58u;
        goto label_4d0e58;
    }
    ctx->pc = 0x4D0E50u;
    {
        const bool branch_taken_0x4d0e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0e50) {
            ctx->pc = 0x4D0E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0E50u;
            // 0x4d0e54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0E6Cu;
            goto label_4d0e6c;
        }
    }
    ctx->pc = 0x4D0E58u;
label_4d0e58:
    // 0x4d0e58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d0e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0e5c:
    // 0x4d0e5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d0e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d0e60:
    // 0x4d0e60: 0x320f809  jalr        $t9
label_4d0e64:
    if (ctx->pc == 0x4D0E64u) {
        ctx->pc = 0x4D0E64u;
            // 0x4d0e64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D0E68u;
        goto label_4d0e68;
    }
    ctx->pc = 0x4D0E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0E68u);
        ctx->pc = 0x4D0E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0E60u;
            // 0x4d0e64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0E68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0E68u; }
            if (ctx->pc != 0x4D0E68u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0E68u;
label_4d0e68:
    // 0x4d0e68: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4d0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4d0e6c:
    // 0x4d0e6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4d0e70:
    if (ctx->pc == 0x4D0E70u) {
        ctx->pc = 0x4D0E70u;
            // 0x4d0e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0E74u;
        goto label_4d0e74;
    }
    ctx->pc = 0x4D0E6Cu;
    {
        const bool branch_taken_0x4d0e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0e6c) {
            ctx->pc = 0x4D0E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0E6Cu;
            // 0x4d0e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0E88u;
            goto label_4d0e88;
        }
    }
    ctx->pc = 0x4D0E74u;
label_4d0e74:
    // 0x4d0e74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d0e74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0e78:
    // 0x4d0e78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4d0e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4d0e7c:
    // 0x4d0e7c: 0x320f809  jalr        $t9
label_4d0e80:
    if (ctx->pc == 0x4D0E80u) {
        ctx->pc = 0x4D0E80u;
            // 0x4d0e80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D0E84u;
        goto label_4d0e84;
    }
    ctx->pc = 0x4D0E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0E84u);
        ctx->pc = 0x4D0E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0E7Cu;
            // 0x4d0e80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0E84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0E84u; }
            if (ctx->pc != 0x4D0E84u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0E84u;
label_4d0e84:
    // 0x4d0e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d0e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d0e88:
    // 0x4d0e88: 0xc075bf8  jal         func_1D6FE0
label_4d0e8c:
    if (ctx->pc == 0x4D0E8Cu) {
        ctx->pc = 0x4D0E8Cu;
            // 0x4d0e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0E90u;
        goto label_4d0e90;
    }
    ctx->pc = 0x4D0E88u;
    SET_GPR_U32(ctx, 31, 0x4D0E90u);
    ctx->pc = 0x4D0E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0E88u;
            // 0x4d0e8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0E90u; }
        if (ctx->pc != 0x4D0E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0E90u; }
        if (ctx->pc != 0x4D0E90u) { return; }
    }
    ctx->pc = 0x4D0E90u;
label_4d0e90:
    // 0x4d0e90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d0e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d0e94:
    // 0x4d0e94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d0e94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d0e98:
    // 0x4d0e98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d0e9c:
    if (ctx->pc == 0x4D0E9Cu) {
        ctx->pc = 0x4D0E9Cu;
            // 0x4d0e9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0EA0u;
        goto label_4d0ea0;
    }
    ctx->pc = 0x4D0E98u;
    {
        const bool branch_taken_0x4d0e98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d0e98) {
            ctx->pc = 0x4D0E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0E98u;
            // 0x4d0e9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0EACu;
            goto label_4d0eac;
        }
    }
    ctx->pc = 0x4D0EA0u;
label_4d0ea0:
    // 0x4d0ea0: 0xc0400a8  jal         func_1002A0
label_4d0ea4:
    if (ctx->pc == 0x4D0EA4u) {
        ctx->pc = 0x4D0EA4u;
            // 0x4d0ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0EA8u;
        goto label_4d0ea8;
    }
    ctx->pc = 0x4D0EA0u;
    SET_GPR_U32(ctx, 31, 0x4D0EA8u);
    ctx->pc = 0x4D0EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0EA0u;
            // 0x4d0ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0EA8u; }
        if (ctx->pc != 0x4D0EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0EA8u; }
        if (ctx->pc != 0x4D0EA8u) { return; }
    }
    ctx->pc = 0x4D0EA8u;
label_4d0ea8:
    // 0x4d0ea8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d0ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d0eac:
    // 0x4d0eac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d0eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d0eb0:
    // 0x4d0eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d0eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0eb4:
    // 0x4d0eb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0eb8:
    // 0x4d0eb8: 0x3e00008  jr          $ra
label_4d0ebc:
    if (ctx->pc == 0x4D0EBCu) {
        ctx->pc = 0x4D0EBCu;
            // 0x4d0ebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D0EC0u;
        goto label_4d0ec0;
    }
    ctx->pc = 0x4D0EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0EB8u;
            // 0x4d0ebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0EC0u;
label_4d0ec0:
    // 0x4d0ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d0ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d0ec4:
    // 0x4d0ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d0ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d0ec8:
    // 0x4d0ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d0ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d0ecc:
    // 0x4d0ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d0eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d0ed0:
    // 0x4d0ed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d0ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d0ed4:
    // 0x4d0ed4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_4d0ed8:
    if (ctx->pc == 0x4D0ED8u) {
        ctx->pc = 0x4D0ED8u;
            // 0x4d0ed8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0EDCu;
        goto label_4d0edc;
    }
    ctx->pc = 0x4D0ED4u;
    {
        const bool branch_taken_0x4d0ed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0ED4u;
            // 0x4d0ed8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0ed4) {
            ctx->pc = 0x4D0F28u;
            goto label_4d0f28;
        }
    }
    ctx->pc = 0x4D0EDCu;
label_4d0edc:
    // 0x4d0edc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d0edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d0ee0:
    // 0x4d0ee0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d0ee4:
    // 0x4d0ee4: 0x246321c0  addiu       $v1, $v1, 0x21C0
    ctx->pc = 0x4d0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8640));
label_4d0ee8:
    // 0x4d0ee8: 0x24422200  addiu       $v0, $v0, 0x2200
    ctx->pc = 0x4d0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8704));
label_4d0eec:
    // 0x4d0eec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4d0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4d0ef0:
    // 0x4d0ef0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4d0ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4d0ef4:
    // 0x4d0ef4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d0ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0ef8:
    // 0x4d0ef8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4d0ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4d0efc:
    // 0x4d0efc: 0x320f809  jalr        $t9
label_4d0f00:
    if (ctx->pc == 0x4D0F00u) {
        ctx->pc = 0x4D0F04u;
        goto label_4d0f04;
    }
    ctx->pc = 0x4D0EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0F04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0F04u; }
            if (ctx->pc != 0x4D0F04u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0F04u;
label_4d0f04:
    // 0x4d0f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d0f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d0f08:
    // 0x4d0f08: 0xc12e684  jal         func_4B9A10
label_4d0f0c:
    if (ctx->pc == 0x4D0F0Cu) {
        ctx->pc = 0x4D0F0Cu;
            // 0x4d0f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F10u;
        goto label_4d0f10;
    }
    ctx->pc = 0x4D0F08u;
    SET_GPR_U32(ctx, 31, 0x4D0F10u);
    ctx->pc = 0x4D0F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0F08u;
            // 0x4d0f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0F10u; }
        if (ctx->pc != 0x4D0F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0F10u; }
        if (ctx->pc != 0x4D0F10u) { return; }
    }
    ctx->pc = 0x4D0F10u;
label_4d0f10:
    // 0x4d0f10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d0f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d0f14:
    // 0x4d0f14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d0f14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d0f18:
    // 0x4d0f18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d0f1c:
    if (ctx->pc == 0x4D0F1Cu) {
        ctx->pc = 0x4D0F1Cu;
            // 0x4d0f1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F20u;
        goto label_4d0f20;
    }
    ctx->pc = 0x4D0F18u;
    {
        const bool branch_taken_0x4d0f18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d0f18) {
            ctx->pc = 0x4D0F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0F18u;
            // 0x4d0f1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D0F2Cu;
            goto label_4d0f2c;
        }
    }
    ctx->pc = 0x4D0F20u;
label_4d0f20:
    // 0x4d0f20: 0xc0400a8  jal         func_1002A0
label_4d0f24:
    if (ctx->pc == 0x4D0F24u) {
        ctx->pc = 0x4D0F24u;
            // 0x4d0f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F28u;
        goto label_4d0f28;
    }
    ctx->pc = 0x4D0F20u;
    SET_GPR_U32(ctx, 31, 0x4D0F28u);
    ctx->pc = 0x4D0F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0F20u;
            // 0x4d0f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0F28u; }
        if (ctx->pc != 0x4D0F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D0F28u; }
        if (ctx->pc != 0x4D0F28u) { return; }
    }
    ctx->pc = 0x4D0F28u;
label_4d0f28:
    // 0x4d0f28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d0f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d0f2c:
    // 0x4d0f2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d0f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d0f30:
    // 0x4d0f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d0f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d0f34:
    // 0x4d0f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d0f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d0f38:
    // 0x4d0f38: 0x3e00008  jr          $ra
label_4d0f3c:
    if (ctx->pc == 0x4D0F3Cu) {
        ctx->pc = 0x4D0F3Cu;
            // 0x4d0f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D0F40u;
        goto label_4d0f40;
    }
    ctx->pc = 0x4D0F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0F38u;
            // 0x4d0f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D0F40u;
label_4d0f40:
    // 0x4d0f40: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4d0f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4d0f44:
    // 0x4d0f44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d0f48:
    // 0x4d0f48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4d0f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4d0f4c:
    // 0x4d0f4c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4d0f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4d0f50:
    // 0x4d0f50: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4d0f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4d0f54:
    // 0x4d0f54: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4d0f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4d0f58:
    // 0x4d0f58: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4d0f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4d0f5c:
    // 0x4d0f5c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4d0f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4d0f60:
    // 0x4d0f60: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4d0f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4d0f64:
    // 0x4d0f64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4d0f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4d0f68:
    // 0x4d0f68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4d0f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4d0f6c:
    // 0x4d0f6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4d0f70:
    // 0x4d0f70: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4d0f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4d0f74:
    // 0x4d0f74: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d0f74u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d0f78:
    // 0x4d0f78: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4d0f7c:
    if (ctx->pc == 0x4D0F7Cu) {
        ctx->pc = 0x4D0F7Cu;
            // 0x4d0f7c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D0F80u;
        goto label_4d0f80;
    }
    ctx->pc = 0x4D0F78u;
    {
        const bool branch_taken_0x4d0f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D0F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0F78u;
            // 0x4d0f7c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0f78) {
            ctx->pc = 0x4D0FC8u;
            goto label_4d0fc8;
        }
    }
    ctx->pc = 0x4D0F80u;
label_4d0f80:
    // 0x4d0f80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d0f84:
    // 0x4d0f84: 0x50a3007e  beql        $a1, $v1, . + 4 + (0x7E << 2)
label_4d0f88:
    if (ctx->pc == 0x4D0F88u) {
        ctx->pc = 0x4D0F88u;
            // 0x4d0f88: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4D0F8Cu;
        goto label_4d0f8c;
    }
    ctx->pc = 0x4D0F84u;
    {
        const bool branch_taken_0x4d0f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d0f84) {
            ctx->pc = 0x4D0F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0F84u;
            // 0x4d0f88: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1180u;
            goto label_4d1180;
        }
    }
    ctx->pc = 0x4D0F8Cu;
label_4d0f8c:
    // 0x4d0f8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d0f90:
    // 0x4d0f90: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4d0f94:
    if (ctx->pc == 0x4D0F94u) {
        ctx->pc = 0x4D0F98u;
        goto label_4d0f98;
    }
    ctx->pc = 0x4D0F90u;
    {
        const bool branch_taken_0x4d0f90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d0f90) {
            ctx->pc = 0x4D0FA0u;
            goto label_4d0fa0;
        }
    }
    ctx->pc = 0x4D0F98u;
label_4d0f98:
    // 0x4d0f98: 0x10000078  b           . + 4 + (0x78 << 2)
label_4d0f9c:
    if (ctx->pc == 0x4D0F9Cu) {
        ctx->pc = 0x4D0FA0u;
        goto label_4d0fa0;
    }
    ctx->pc = 0x4D0F98u;
    {
        const bool branch_taken_0x4d0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0f98) {
            ctx->pc = 0x4D117Cu;
            goto label_4d117c;
        }
    }
    ctx->pc = 0x4D0FA0u;
label_4d0fa0:
    // 0x4d0fa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d0fa4:
    // 0x4d0fa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d0fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d0fa8:
    // 0x4d0fa8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4d0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4d0fac:
    // 0x4d0fac: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4d0facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4d0fb0:
    // 0x4d0fb0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4d0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4d0fb4:
    // 0x4d0fb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4d0fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4d0fb8:
    // 0x4d0fb8: 0x320f809  jalr        $t9
label_4d0fbc:
    if (ctx->pc == 0x4D0FBCu) {
        ctx->pc = 0x4D0FBCu;
            // 0x4d0fbc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4D0FC0u;
        goto label_4d0fc0;
    }
    ctx->pc = 0x4D0FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D0FC0u);
        ctx->pc = 0x4D0FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D0FB8u;
            // 0x4d0fbc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D0FC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D0FC0u; }
            if (ctx->pc != 0x4D0FC0u) { return; }
        }
        }
    }
    ctx->pc = 0x4D0FC0u;
label_4d0fc0:
    // 0x4d0fc0: 0x1000006e  b           . + 4 + (0x6E << 2)
label_4d0fc4:
    if (ctx->pc == 0x4D0FC4u) {
        ctx->pc = 0x4D0FC8u;
        goto label_4d0fc8;
    }
    ctx->pc = 0x4D0FC0u;
    {
        const bool branch_taken_0x4d0fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0fc0) {
            ctx->pc = 0x4D117Cu;
            goto label_4d117c;
        }
    }
    ctx->pc = 0x4D0FC8u;
label_4d0fc8:
    // 0x4d0fc8: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4d0fc8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4d0fcc:
    // 0x4d0fcc: 0x12e0006b  beqz        $s7, . + 4 + (0x6B << 2)
label_4d0fd0:
    if (ctx->pc == 0x4D0FD0u) {
        ctx->pc = 0x4D0FD4u;
        goto label_4d0fd4;
    }
    ctx->pc = 0x4D0FCCu;
    {
        const bool branch_taken_0x4d0fcc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d0fcc) {
            ctx->pc = 0x4D117Cu;
            goto label_4d117c;
        }
    }
    ctx->pc = 0x4D0FD4u;
label_4d0fd4:
    // 0x4d0fd4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4d0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4d0fd8:
    // 0x4d0fd8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d0fdc:
    // 0x4d0fdc: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4d0fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4d0fe0:
    // 0x4d0fe0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4d0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4d0fe4:
    // 0x4d0fe4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x4d0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4d0fe8:
    // 0x4d0fe8: 0x26d50084  addiu       $s5, $s6, 0x84
    ctx->pc = 0x4d0fe8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_4d0fec:
    // 0x4d0fec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4d0fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0ff0:
    // 0x4d0ff0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d0ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d0ff4:
    // 0x4d0ff4: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x4d0ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4d0ff8:
    // 0x4d0ff8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d0ffc:
    // 0x4d0ffc: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x4d0ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4d1000:
    // 0x4d1000: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d1000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d1004:
    // 0x4d1004: 0xc4547ba8  lwc1        $f20, 0x7BA8($v0)
    ctx->pc = 0x4d1004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d1008:
    // 0x4d1008: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d1008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4d100c:
    // 0x4d100c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4d100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4d1010:
    // 0x4d1010: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d1010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d1014:
    // 0x4d1014: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x4d1014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_4d1018:
    // 0x4d1018: 0x245e0010  addiu       $fp, $v0, 0x10
    ctx->pc = 0x4d1018u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4d101c:
    // 0x4d101c: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x4d101cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_4d1020:
    // 0x4d1020: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4d1020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4d1024:
    // 0x4d1024: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4d1024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4d1028:
    // 0x4d1028: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4d1028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4d102c:
    // 0x4d102c: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4d102cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4d1030:
    // 0x4d1030: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x4d1030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4d1034:
    // 0x4d1034: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d1034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d1038:
    // 0x4d1038: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x4d1038u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d103c:
    // 0x4d103c: 0xc0d639c  jal         func_358E70
label_4d1040:
    if (ctx->pc == 0x4D1040u) {
        ctx->pc = 0x4D1040u;
            // 0x4d1040: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x4D1044u;
        goto label_4d1044;
    }
    ctx->pc = 0x4D103Cu;
    SET_GPR_U32(ctx, 31, 0x4D1044u);
    ctx->pc = 0x4D1040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D103Cu;
            // 0x4d1040: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1044u; }
        if (ctx->pc != 0x4D1044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1044u; }
        if (ctx->pc != 0x4D1044u) { return; }
    }
    ctx->pc = 0x4D1044u;
label_4d1044:
    // 0x4d1044: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_4d1048:
    if (ctx->pc == 0x4D1048u) {
        ctx->pc = 0x4D104Cu;
        goto label_4d104c;
    }
    ctx->pc = 0x4D1044u;
    {
        const bool branch_taken_0x4d1044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1044) {
            ctx->pc = 0x4D1138u;
            goto label_4d1138;
        }
    }
    ctx->pc = 0x4D104Cu;
label_4d104c:
    // 0x4d104c: 0xc0d1c14  jal         func_347050
label_4d1050:
    if (ctx->pc == 0x4D1050u) {
        ctx->pc = 0x4D1050u;
            // 0x4d1050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1054u;
        goto label_4d1054;
    }
    ctx->pc = 0x4D104Cu;
    SET_GPR_U32(ctx, 31, 0x4D1054u);
    ctx->pc = 0x4D1050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D104Cu;
            // 0x4d1050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1054u; }
        if (ctx->pc != 0x4D1054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1054u; }
        if (ctx->pc != 0x4D1054u) { return; }
    }
    ctx->pc = 0x4D1054u;
label_4d1054:
    // 0x4d1054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d1054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1058:
    // 0x4d1058: 0xc04f278  jal         func_13C9E0
label_4d105c:
    if (ctx->pc == 0x4D105Cu) {
        ctx->pc = 0x4D105Cu;
            // 0x4d105c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D1060u;
        goto label_4d1060;
    }
    ctx->pc = 0x4D1058u;
    SET_GPR_U32(ctx, 31, 0x4D1060u);
    ctx->pc = 0x4D105Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1058u;
            // 0x4d105c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1060u; }
        if (ctx->pc != 0x4D1060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1060u; }
        if (ctx->pc != 0x4D1060u) { return; }
    }
    ctx->pc = 0x4D1060u;
label_4d1060:
    // 0x4d1060: 0xc0d1c10  jal         func_347040
label_4d1064:
    if (ctx->pc == 0x4D1064u) {
        ctx->pc = 0x4D1064u;
            // 0x4d1064: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1068u;
        goto label_4d1068;
    }
    ctx->pc = 0x4D1060u;
    SET_GPR_U32(ctx, 31, 0x4D1068u);
    ctx->pc = 0x4D1064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1060u;
            // 0x4d1064: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1068u; }
        if (ctx->pc != 0x4D1068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1068u; }
        if (ctx->pc != 0x4D1068u) { return; }
    }
    ctx->pc = 0x4D1068u;
label_4d1068:
    // 0x4d1068: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d1068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d106c:
    // 0x4d106c: 0xc04ce80  jal         func_133A00
label_4d1070:
    if (ctx->pc == 0x4D1070u) {
        ctx->pc = 0x4D1070u;
            // 0x4d1070: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D1074u;
        goto label_4d1074;
    }
    ctx->pc = 0x4D106Cu;
    SET_GPR_U32(ctx, 31, 0x4D1074u);
    ctx->pc = 0x4D1070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D106Cu;
            // 0x4d1070: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1074u; }
        if (ctx->pc != 0x4D1074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1074u; }
        if (ctx->pc != 0x4D1074u) { return; }
    }
    ctx->pc = 0x4D1074u;
label_4d1074:
    // 0x4d1074: 0xc0d4108  jal         func_350420
label_4d1078:
    if (ctx->pc == 0x4D1078u) {
        ctx->pc = 0x4D107Cu;
        goto label_4d107c;
    }
    ctx->pc = 0x4D1074u;
    SET_GPR_U32(ctx, 31, 0x4D107Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D107Cu; }
        if (ctx->pc != 0x4D107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D107Cu; }
        if (ctx->pc != 0x4D107Cu) { return; }
    }
    ctx->pc = 0x4D107Cu;
label_4d107c:
    // 0x4d107c: 0xc0b36b4  jal         func_2CDAD0
label_4d1080:
    if (ctx->pc == 0x4D1080u) {
        ctx->pc = 0x4D1080u;
            // 0x4d1080: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1084u;
        goto label_4d1084;
    }
    ctx->pc = 0x4D107Cu;
    SET_GPR_U32(ctx, 31, 0x4D1084u);
    ctx->pc = 0x4D1080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D107Cu;
            // 0x4d1080: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1084u; }
        if (ctx->pc != 0x4D1084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1084u; }
        if (ctx->pc != 0x4D1084u) { return; }
    }
    ctx->pc = 0x4D1084u;
label_4d1084:
    // 0x4d1084: 0xc0b9c64  jal         func_2E7190
label_4d1088:
    if (ctx->pc == 0x4D1088u) {
        ctx->pc = 0x4D1088u;
            // 0x4d1088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D108Cu;
        goto label_4d108c;
    }
    ctx->pc = 0x4D1084u;
    SET_GPR_U32(ctx, 31, 0x4D108Cu);
    ctx->pc = 0x4D1088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1084u;
            // 0x4d1088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D108Cu; }
        if (ctx->pc != 0x4D108Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D108Cu; }
        if (ctx->pc != 0x4D108Cu) { return; }
    }
    ctx->pc = 0x4D108Cu;
label_4d108c:
    // 0x4d108c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d108cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1090:
    // 0x4d1090: 0xc0d4104  jal         func_350410
label_4d1094:
    if (ctx->pc == 0x4D1094u) {
        ctx->pc = 0x4D1094u;
            // 0x4d1094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1098u;
        goto label_4d1098;
    }
    ctx->pc = 0x4D1090u;
    SET_GPR_U32(ctx, 31, 0x4D1098u);
    ctx->pc = 0x4D1094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1090u;
            // 0x4d1094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1098u; }
        if (ctx->pc != 0x4D1098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1098u; }
        if (ctx->pc != 0x4D1098u) { return; }
    }
    ctx->pc = 0x4D1098u;
label_4d1098:
    // 0x4d1098: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d1098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d109c:
    // 0x4d109c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d10a0:
    // 0x4d10a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d10a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d10a4:
    // 0x4d10a4: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4d10a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4d10a8:
    // 0x4d10a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4d10a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d10ac:
    // 0x4d10ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4d10acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d10b0:
    // 0x4d10b0: 0xc0d40ac  jal         func_3502B0
label_4d10b4:
    if (ctx->pc == 0x4D10B4u) {
        ctx->pc = 0x4D10B4u;
            // 0x4d10b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4D10B8u;
        goto label_4d10b8;
    }
    ctx->pc = 0x4D10B0u;
    SET_GPR_U32(ctx, 31, 0x4D10B8u);
    ctx->pc = 0x4D10B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D10B0u;
            // 0x4d10b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D10B8u; }
        if (ctx->pc != 0x4D10B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D10B8u; }
        if (ctx->pc != 0x4D10B8u) { return; }
    }
    ctx->pc = 0x4D10B8u;
label_4d10b8:
    // 0x4d10b8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4d10b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4d10bc:
    // 0x4d10bc: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_4d10c0:
    if (ctx->pc == 0x4D10C0u) {
        ctx->pc = 0x4D10C0u;
            // 0x4d10c0: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4D10C4u;
        goto label_4d10c4;
    }
    ctx->pc = 0x4D10BCu;
    {
        const bool branch_taken_0x4d10bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D10C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D10BCu;
            // 0x4d10c0: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d10bc) {
            ctx->pc = 0x4D1138u;
            goto label_4d1138;
        }
    }
    ctx->pc = 0x4D10C4u;
label_4d10c4:
    // 0x4d10c4: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4d10c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d10c8:
    // 0x4d10c8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4d10c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4d10cc:
    // 0x4d10cc: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x4d10ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_4d10d0:
    // 0x4d10d0: 0xc13446c  jal         func_4D11B0
label_4d10d4:
    if (ctx->pc == 0x4D10D4u) {
        ctx->pc = 0x4D10D4u;
            // 0x4d10d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D10D8u;
        goto label_4d10d8;
    }
    ctx->pc = 0x4D10D0u;
    SET_GPR_U32(ctx, 31, 0x4D10D8u);
    ctx->pc = 0x4D10D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D10D0u;
            // 0x4d10d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D11B0u;
    if (runtime->hasFunction(0x4D11B0u)) {
        auto targetFn = runtime->lookupFunction(0x4D11B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D10D8u; }
        if (ctx->pc != 0x4D10D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D11B0_0x4d11b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D10D8u; }
        if (ctx->pc != 0x4D10D8u) { return; }
    }
    ctx->pc = 0x4D10D8u;
label_4d10d8:
    // 0x4d10d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4d10d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d10dc:
    // 0x4d10dc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4d10dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4d10e0:
    // 0x4d10e0: 0xc04cd60  jal         func_133580
label_4d10e4:
    if (ctx->pc == 0x4D10E4u) {
        ctx->pc = 0x4D10E4u;
            // 0x4d10e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D10E8u;
        goto label_4d10e8;
    }
    ctx->pc = 0x4D10E0u;
    SET_GPR_U32(ctx, 31, 0x4D10E8u);
    ctx->pc = 0x4D10E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D10E0u;
            // 0x4d10e4: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D10E8u; }
        if (ctx->pc != 0x4D10E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D10E8u; }
        if (ctx->pc != 0x4D10E8u) { return; }
    }
    ctx->pc = 0x4D10E8u;
label_4d10e8:
    // 0x4d10e8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4d10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d10ec:
    // 0x4d10ec: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4d10ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4d10f0:
    // 0x4d10f0: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4d10f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4d10f4:
    // 0x4d10f4: 0xc04e4a4  jal         func_139290
label_4d10f8:
    if (ctx->pc == 0x4D10F8u) {
        ctx->pc = 0x4D10F8u;
            // 0x4d10f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D10FCu;
        goto label_4d10fc;
    }
    ctx->pc = 0x4D10F4u;
    SET_GPR_U32(ctx, 31, 0x4D10FCu);
    ctx->pc = 0x4D10F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D10F4u;
            // 0x4d10f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D10FCu; }
        if (ctx->pc != 0x4D10FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D10FCu; }
        if (ctx->pc != 0x4D10FCu) { return; }
    }
    ctx->pc = 0x4D10FCu;
label_4d10fc:
    // 0x4d10fc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4d10fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d1100:
    // 0x4d1100: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4d1100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4d1104:
    // 0x4d1104: 0x320f809  jalr        $t9
label_4d1108:
    if (ctx->pc == 0x4D1108u) {
        ctx->pc = 0x4D1108u;
            // 0x4d1108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D110Cu;
        goto label_4d110c;
    }
    ctx->pc = 0x4D1104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D110Cu);
        ctx->pc = 0x4D1108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1104u;
            // 0x4d1108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D110Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D110Cu; }
            if (ctx->pc != 0x4D110Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D110Cu;
label_4d110c:
    // 0x4d110c: 0xc66c00e0  lwc1        $f12, 0xE0($s3)
    ctx->pc = 0x4d110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4d1110:
    // 0x4d1110: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4d1110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4d1114:
    // 0x4d1114: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4d1114u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4d1118:
    // 0x4d1118: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4d1118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4d111c:
    // 0x4d111c: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x4d111cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4d1120:
    // 0x4d1120: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4d1120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d1124:
    // 0x4d1124: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4d1124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1128:
    // 0x4d1128: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x4d1128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d112c:
    // 0x4d112c: 0xc04cff4  jal         func_133FD0
label_4d1130:
    if (ctx->pc == 0x4D1130u) {
        ctx->pc = 0x4D1130u;
            // 0x4d1130: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4D1134u;
        goto label_4d1134;
    }
    ctx->pc = 0x4D112Cu;
    SET_GPR_U32(ctx, 31, 0x4D1134u);
    ctx->pc = 0x4D1130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D112Cu;
            // 0x4d1130: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1134u; }
        if (ctx->pc != 0x4D1134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1134u; }
        if (ctx->pc != 0x4D1134u) { return; }
    }
    ctx->pc = 0x4D1134u;
label_4d1134:
    // 0x4d1134: 0x0  nop
    ctx->pc = 0x4d1134u;
    // NOP
label_4d1138:
    // 0x4d1138: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4d1138u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4d113c:
    // 0x4d113c: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x4d113cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4d1140:
    // 0x4d1140: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_4d1144:
    if (ctx->pc == 0x4D1144u) {
        ctx->pc = 0x4D1144u;
            // 0x4d1144: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D1148u;
        goto label_4d1148;
    }
    ctx->pc = 0x4D1140u;
    {
        const bool branch_taken_0x4d1140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1140u;
            // 0x4d1144: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1140) {
            ctx->pc = 0x4D1020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d1020;
        }
    }
    ctx->pc = 0x4D1148u;
label_4d1148:
    // 0x4d1148: 0xc04e738  jal         func_139CE0
label_4d114c:
    if (ctx->pc == 0x4D114Cu) {
        ctx->pc = 0x4D114Cu;
            // 0x4d114c: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x4D1150u;
        goto label_4d1150;
    }
    ctx->pc = 0x4D1148u;
    SET_GPR_U32(ctx, 31, 0x4D1150u);
    ctx->pc = 0x4D114Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1148u;
            // 0x4d114c: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1150u; }
        if (ctx->pc != 0x4D1150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D1150u; }
        if (ctx->pc != 0x4D1150u) { return; }
    }
    ctx->pc = 0x4D1150u;
label_4d1150:
    // 0x4d1150: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d1150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d1154:
    // 0x4d1154: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4d1154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d1158:
    // 0x4d1158: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4d1158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4d115c:
    // 0x4d115c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4d115cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4d1160:
    // 0x4d1160: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4d1160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1164:
    // 0x4d1164: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d1164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d1168:
    // 0x4d1168: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4d1168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4d116c:
    // 0x4d116c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d1170:
    // 0x4d1170: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4d1170u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4d1174:
    // 0x4d1174: 0xc055d28  jal         func_1574A0
label_4d1178:
    if (ctx->pc == 0x4D1178u) {
        ctx->pc = 0x4D1178u;
            // 0x4d1178: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D117Cu;
        goto label_4d117c;
    }
    ctx->pc = 0x4D1174u;
    SET_GPR_U32(ctx, 31, 0x4D117Cu);
    ctx->pc = 0x4D1178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1174u;
            // 0x4d1178: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D117Cu; }
        if (ctx->pc != 0x4D117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D117Cu; }
        if (ctx->pc != 0x4D117Cu) { return; }
    }
    ctx->pc = 0x4D117Cu;
label_4d117c:
    // 0x4d117c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4d117cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4d1180:
    // 0x4d1180: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4d1180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4d1184:
    // 0x4d1184: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4d1184u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4d1188:
    // 0x4d1188: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4d1188u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4d118c:
    // 0x4d118c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4d118cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4d1190:
    // 0x4d1190: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4d1190u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4d1194:
    // 0x4d1194: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4d1194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d1198:
    // 0x4d1198: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4d1198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d119c:
    // 0x4d119c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4d119cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d11a0:
    // 0x4d11a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4d11a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d11a4:
    // 0x4d11a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d11a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d11a8:
    // 0x4d11a8: 0x3e00008  jr          $ra
label_4d11ac:
    if (ctx->pc == 0x4D11ACu) {
        ctx->pc = 0x4D11ACu;
            // 0x4d11ac: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4D11B0u;
        goto label_fallthrough_0x4d11a8;
    }
    ctx->pc = 0x4D11A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D11ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D11A8u;
            // 0x4d11ac: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4d11a8:
    ctx->pc = 0x4D11B0u;
}
