#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C0D30
// Address: 0x4c0d30 - 0x4c11d0
void sub_004C0D30_0x4c0d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C0D30_0x4c0d30");
#endif

    switch (ctx->pc) {
        case 0x4c0d30u: goto label_4c0d30;
        case 0x4c0d34u: goto label_4c0d34;
        case 0x4c0d38u: goto label_4c0d38;
        case 0x4c0d3cu: goto label_4c0d3c;
        case 0x4c0d40u: goto label_4c0d40;
        case 0x4c0d44u: goto label_4c0d44;
        case 0x4c0d48u: goto label_4c0d48;
        case 0x4c0d4cu: goto label_4c0d4c;
        case 0x4c0d50u: goto label_4c0d50;
        case 0x4c0d54u: goto label_4c0d54;
        case 0x4c0d58u: goto label_4c0d58;
        case 0x4c0d5cu: goto label_4c0d5c;
        case 0x4c0d60u: goto label_4c0d60;
        case 0x4c0d64u: goto label_4c0d64;
        case 0x4c0d68u: goto label_4c0d68;
        case 0x4c0d6cu: goto label_4c0d6c;
        case 0x4c0d70u: goto label_4c0d70;
        case 0x4c0d74u: goto label_4c0d74;
        case 0x4c0d78u: goto label_4c0d78;
        case 0x4c0d7cu: goto label_4c0d7c;
        case 0x4c0d80u: goto label_4c0d80;
        case 0x4c0d84u: goto label_4c0d84;
        case 0x4c0d88u: goto label_4c0d88;
        case 0x4c0d8cu: goto label_4c0d8c;
        case 0x4c0d90u: goto label_4c0d90;
        case 0x4c0d94u: goto label_4c0d94;
        case 0x4c0d98u: goto label_4c0d98;
        case 0x4c0d9cu: goto label_4c0d9c;
        case 0x4c0da0u: goto label_4c0da0;
        case 0x4c0da4u: goto label_4c0da4;
        case 0x4c0da8u: goto label_4c0da8;
        case 0x4c0dacu: goto label_4c0dac;
        case 0x4c0db0u: goto label_4c0db0;
        case 0x4c0db4u: goto label_4c0db4;
        case 0x4c0db8u: goto label_4c0db8;
        case 0x4c0dbcu: goto label_4c0dbc;
        case 0x4c0dc0u: goto label_4c0dc0;
        case 0x4c0dc4u: goto label_4c0dc4;
        case 0x4c0dc8u: goto label_4c0dc8;
        case 0x4c0dccu: goto label_4c0dcc;
        case 0x4c0dd0u: goto label_4c0dd0;
        case 0x4c0dd4u: goto label_4c0dd4;
        case 0x4c0dd8u: goto label_4c0dd8;
        case 0x4c0ddcu: goto label_4c0ddc;
        case 0x4c0de0u: goto label_4c0de0;
        case 0x4c0de4u: goto label_4c0de4;
        case 0x4c0de8u: goto label_4c0de8;
        case 0x4c0decu: goto label_4c0dec;
        case 0x4c0df0u: goto label_4c0df0;
        case 0x4c0df4u: goto label_4c0df4;
        case 0x4c0df8u: goto label_4c0df8;
        case 0x4c0dfcu: goto label_4c0dfc;
        case 0x4c0e00u: goto label_4c0e00;
        case 0x4c0e04u: goto label_4c0e04;
        case 0x4c0e08u: goto label_4c0e08;
        case 0x4c0e0cu: goto label_4c0e0c;
        case 0x4c0e10u: goto label_4c0e10;
        case 0x4c0e14u: goto label_4c0e14;
        case 0x4c0e18u: goto label_4c0e18;
        case 0x4c0e1cu: goto label_4c0e1c;
        case 0x4c0e20u: goto label_4c0e20;
        case 0x4c0e24u: goto label_4c0e24;
        case 0x4c0e28u: goto label_4c0e28;
        case 0x4c0e2cu: goto label_4c0e2c;
        case 0x4c0e30u: goto label_4c0e30;
        case 0x4c0e34u: goto label_4c0e34;
        case 0x4c0e38u: goto label_4c0e38;
        case 0x4c0e3cu: goto label_4c0e3c;
        case 0x4c0e40u: goto label_4c0e40;
        case 0x4c0e44u: goto label_4c0e44;
        case 0x4c0e48u: goto label_4c0e48;
        case 0x4c0e4cu: goto label_4c0e4c;
        case 0x4c0e50u: goto label_4c0e50;
        case 0x4c0e54u: goto label_4c0e54;
        case 0x4c0e58u: goto label_4c0e58;
        case 0x4c0e5cu: goto label_4c0e5c;
        case 0x4c0e60u: goto label_4c0e60;
        case 0x4c0e64u: goto label_4c0e64;
        case 0x4c0e68u: goto label_4c0e68;
        case 0x4c0e6cu: goto label_4c0e6c;
        case 0x4c0e70u: goto label_4c0e70;
        case 0x4c0e74u: goto label_4c0e74;
        case 0x4c0e78u: goto label_4c0e78;
        case 0x4c0e7cu: goto label_4c0e7c;
        case 0x4c0e80u: goto label_4c0e80;
        case 0x4c0e84u: goto label_4c0e84;
        case 0x4c0e88u: goto label_4c0e88;
        case 0x4c0e8cu: goto label_4c0e8c;
        case 0x4c0e90u: goto label_4c0e90;
        case 0x4c0e94u: goto label_4c0e94;
        case 0x4c0e98u: goto label_4c0e98;
        case 0x4c0e9cu: goto label_4c0e9c;
        case 0x4c0ea0u: goto label_4c0ea0;
        case 0x4c0ea4u: goto label_4c0ea4;
        case 0x4c0ea8u: goto label_4c0ea8;
        case 0x4c0eacu: goto label_4c0eac;
        case 0x4c0eb0u: goto label_4c0eb0;
        case 0x4c0eb4u: goto label_4c0eb4;
        case 0x4c0eb8u: goto label_4c0eb8;
        case 0x4c0ebcu: goto label_4c0ebc;
        case 0x4c0ec0u: goto label_4c0ec0;
        case 0x4c0ec4u: goto label_4c0ec4;
        case 0x4c0ec8u: goto label_4c0ec8;
        case 0x4c0eccu: goto label_4c0ecc;
        case 0x4c0ed0u: goto label_4c0ed0;
        case 0x4c0ed4u: goto label_4c0ed4;
        case 0x4c0ed8u: goto label_4c0ed8;
        case 0x4c0edcu: goto label_4c0edc;
        case 0x4c0ee0u: goto label_4c0ee0;
        case 0x4c0ee4u: goto label_4c0ee4;
        case 0x4c0ee8u: goto label_4c0ee8;
        case 0x4c0eecu: goto label_4c0eec;
        case 0x4c0ef0u: goto label_4c0ef0;
        case 0x4c0ef4u: goto label_4c0ef4;
        case 0x4c0ef8u: goto label_4c0ef8;
        case 0x4c0efcu: goto label_4c0efc;
        case 0x4c0f00u: goto label_4c0f00;
        case 0x4c0f04u: goto label_4c0f04;
        case 0x4c0f08u: goto label_4c0f08;
        case 0x4c0f0cu: goto label_4c0f0c;
        case 0x4c0f10u: goto label_4c0f10;
        case 0x4c0f14u: goto label_4c0f14;
        case 0x4c0f18u: goto label_4c0f18;
        case 0x4c0f1cu: goto label_4c0f1c;
        case 0x4c0f20u: goto label_4c0f20;
        case 0x4c0f24u: goto label_4c0f24;
        case 0x4c0f28u: goto label_4c0f28;
        case 0x4c0f2cu: goto label_4c0f2c;
        case 0x4c0f30u: goto label_4c0f30;
        case 0x4c0f34u: goto label_4c0f34;
        case 0x4c0f38u: goto label_4c0f38;
        case 0x4c0f3cu: goto label_4c0f3c;
        case 0x4c0f40u: goto label_4c0f40;
        case 0x4c0f44u: goto label_4c0f44;
        case 0x4c0f48u: goto label_4c0f48;
        case 0x4c0f4cu: goto label_4c0f4c;
        case 0x4c0f50u: goto label_4c0f50;
        case 0x4c0f54u: goto label_4c0f54;
        case 0x4c0f58u: goto label_4c0f58;
        case 0x4c0f5cu: goto label_4c0f5c;
        case 0x4c0f60u: goto label_4c0f60;
        case 0x4c0f64u: goto label_4c0f64;
        case 0x4c0f68u: goto label_4c0f68;
        case 0x4c0f6cu: goto label_4c0f6c;
        case 0x4c0f70u: goto label_4c0f70;
        case 0x4c0f74u: goto label_4c0f74;
        case 0x4c0f78u: goto label_4c0f78;
        case 0x4c0f7cu: goto label_4c0f7c;
        case 0x4c0f80u: goto label_4c0f80;
        case 0x4c0f84u: goto label_4c0f84;
        case 0x4c0f88u: goto label_4c0f88;
        case 0x4c0f8cu: goto label_4c0f8c;
        case 0x4c0f90u: goto label_4c0f90;
        case 0x4c0f94u: goto label_4c0f94;
        case 0x4c0f98u: goto label_4c0f98;
        case 0x4c0f9cu: goto label_4c0f9c;
        case 0x4c0fa0u: goto label_4c0fa0;
        case 0x4c0fa4u: goto label_4c0fa4;
        case 0x4c0fa8u: goto label_4c0fa8;
        case 0x4c0facu: goto label_4c0fac;
        case 0x4c0fb0u: goto label_4c0fb0;
        case 0x4c0fb4u: goto label_4c0fb4;
        case 0x4c0fb8u: goto label_4c0fb8;
        case 0x4c0fbcu: goto label_4c0fbc;
        case 0x4c0fc0u: goto label_4c0fc0;
        case 0x4c0fc4u: goto label_4c0fc4;
        case 0x4c0fc8u: goto label_4c0fc8;
        case 0x4c0fccu: goto label_4c0fcc;
        case 0x4c0fd0u: goto label_4c0fd0;
        case 0x4c0fd4u: goto label_4c0fd4;
        case 0x4c0fd8u: goto label_4c0fd8;
        case 0x4c0fdcu: goto label_4c0fdc;
        case 0x4c0fe0u: goto label_4c0fe0;
        case 0x4c0fe4u: goto label_4c0fe4;
        case 0x4c0fe8u: goto label_4c0fe8;
        case 0x4c0fecu: goto label_4c0fec;
        case 0x4c0ff0u: goto label_4c0ff0;
        case 0x4c0ff4u: goto label_4c0ff4;
        case 0x4c0ff8u: goto label_4c0ff8;
        case 0x4c0ffcu: goto label_4c0ffc;
        case 0x4c1000u: goto label_4c1000;
        case 0x4c1004u: goto label_4c1004;
        case 0x4c1008u: goto label_4c1008;
        case 0x4c100cu: goto label_4c100c;
        case 0x4c1010u: goto label_4c1010;
        case 0x4c1014u: goto label_4c1014;
        case 0x4c1018u: goto label_4c1018;
        case 0x4c101cu: goto label_4c101c;
        case 0x4c1020u: goto label_4c1020;
        case 0x4c1024u: goto label_4c1024;
        case 0x4c1028u: goto label_4c1028;
        case 0x4c102cu: goto label_4c102c;
        case 0x4c1030u: goto label_4c1030;
        case 0x4c1034u: goto label_4c1034;
        case 0x4c1038u: goto label_4c1038;
        case 0x4c103cu: goto label_4c103c;
        case 0x4c1040u: goto label_4c1040;
        case 0x4c1044u: goto label_4c1044;
        case 0x4c1048u: goto label_4c1048;
        case 0x4c104cu: goto label_4c104c;
        case 0x4c1050u: goto label_4c1050;
        case 0x4c1054u: goto label_4c1054;
        case 0x4c1058u: goto label_4c1058;
        case 0x4c105cu: goto label_4c105c;
        case 0x4c1060u: goto label_4c1060;
        case 0x4c1064u: goto label_4c1064;
        case 0x4c1068u: goto label_4c1068;
        case 0x4c106cu: goto label_4c106c;
        case 0x4c1070u: goto label_4c1070;
        case 0x4c1074u: goto label_4c1074;
        case 0x4c1078u: goto label_4c1078;
        case 0x4c107cu: goto label_4c107c;
        case 0x4c1080u: goto label_4c1080;
        case 0x4c1084u: goto label_4c1084;
        case 0x4c1088u: goto label_4c1088;
        case 0x4c108cu: goto label_4c108c;
        case 0x4c1090u: goto label_4c1090;
        case 0x4c1094u: goto label_4c1094;
        case 0x4c1098u: goto label_4c1098;
        case 0x4c109cu: goto label_4c109c;
        case 0x4c10a0u: goto label_4c10a0;
        case 0x4c10a4u: goto label_4c10a4;
        case 0x4c10a8u: goto label_4c10a8;
        case 0x4c10acu: goto label_4c10ac;
        case 0x4c10b0u: goto label_4c10b0;
        case 0x4c10b4u: goto label_4c10b4;
        case 0x4c10b8u: goto label_4c10b8;
        case 0x4c10bcu: goto label_4c10bc;
        case 0x4c10c0u: goto label_4c10c0;
        case 0x4c10c4u: goto label_4c10c4;
        case 0x4c10c8u: goto label_4c10c8;
        case 0x4c10ccu: goto label_4c10cc;
        case 0x4c10d0u: goto label_4c10d0;
        case 0x4c10d4u: goto label_4c10d4;
        case 0x4c10d8u: goto label_4c10d8;
        case 0x4c10dcu: goto label_4c10dc;
        case 0x4c10e0u: goto label_4c10e0;
        case 0x4c10e4u: goto label_4c10e4;
        case 0x4c10e8u: goto label_4c10e8;
        case 0x4c10ecu: goto label_4c10ec;
        case 0x4c10f0u: goto label_4c10f0;
        case 0x4c10f4u: goto label_4c10f4;
        case 0x4c10f8u: goto label_4c10f8;
        case 0x4c10fcu: goto label_4c10fc;
        case 0x4c1100u: goto label_4c1100;
        case 0x4c1104u: goto label_4c1104;
        case 0x4c1108u: goto label_4c1108;
        case 0x4c110cu: goto label_4c110c;
        case 0x4c1110u: goto label_4c1110;
        case 0x4c1114u: goto label_4c1114;
        case 0x4c1118u: goto label_4c1118;
        case 0x4c111cu: goto label_4c111c;
        case 0x4c1120u: goto label_4c1120;
        case 0x4c1124u: goto label_4c1124;
        case 0x4c1128u: goto label_4c1128;
        case 0x4c112cu: goto label_4c112c;
        case 0x4c1130u: goto label_4c1130;
        case 0x4c1134u: goto label_4c1134;
        case 0x4c1138u: goto label_4c1138;
        case 0x4c113cu: goto label_4c113c;
        case 0x4c1140u: goto label_4c1140;
        case 0x4c1144u: goto label_4c1144;
        case 0x4c1148u: goto label_4c1148;
        case 0x4c114cu: goto label_4c114c;
        case 0x4c1150u: goto label_4c1150;
        case 0x4c1154u: goto label_4c1154;
        case 0x4c1158u: goto label_4c1158;
        case 0x4c115cu: goto label_4c115c;
        case 0x4c1160u: goto label_4c1160;
        case 0x4c1164u: goto label_4c1164;
        case 0x4c1168u: goto label_4c1168;
        case 0x4c116cu: goto label_4c116c;
        case 0x4c1170u: goto label_4c1170;
        case 0x4c1174u: goto label_4c1174;
        case 0x4c1178u: goto label_4c1178;
        case 0x4c117cu: goto label_4c117c;
        case 0x4c1180u: goto label_4c1180;
        case 0x4c1184u: goto label_4c1184;
        case 0x4c1188u: goto label_4c1188;
        case 0x4c118cu: goto label_4c118c;
        case 0x4c1190u: goto label_4c1190;
        case 0x4c1194u: goto label_4c1194;
        case 0x4c1198u: goto label_4c1198;
        case 0x4c119cu: goto label_4c119c;
        case 0x4c11a0u: goto label_4c11a0;
        case 0x4c11a4u: goto label_4c11a4;
        case 0x4c11a8u: goto label_4c11a8;
        case 0x4c11acu: goto label_4c11ac;
        case 0x4c11b0u: goto label_4c11b0;
        case 0x4c11b4u: goto label_4c11b4;
        case 0x4c11b8u: goto label_4c11b8;
        case 0x4c11bcu: goto label_4c11bc;
        case 0x4c11c0u: goto label_4c11c0;
        case 0x4c11c4u: goto label_4c11c4;
        case 0x4c11c8u: goto label_4c11c8;
        case 0x4c11ccu: goto label_4c11cc;
        default: break;
    }

    ctx->pc = 0x4c0d30u;

label_4c0d30:
    // 0x4c0d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c0d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c0d34:
    // 0x4c0d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c0d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c0d38:
    // 0x4c0d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c0d3c:
    // 0x4c0d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c0d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c0d40:
    // 0x4c0d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c0d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c0d44:
    // 0x4c0d44: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4c0d48:
    if (ctx->pc == 0x4C0D48u) {
        ctx->pc = 0x4C0D48u;
            // 0x4c0d48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0D4Cu;
        goto label_4c0d4c;
    }
    ctx->pc = 0x4C0D44u;
    {
        const bool branch_taken_0x4c0d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0D44u;
            // 0x4c0d48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0d44) {
            ctx->pc = 0x4C0E78u;
            goto label_4c0e78;
        }
    }
    ctx->pc = 0x4C0D4Cu;
label_4c0d4c:
    // 0x4c0d4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c0d50:
    // 0x4c0d50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c0d54:
    // 0x4c0d54: 0x246313a0  addiu       $v1, $v1, 0x13A0
    ctx->pc = 0x4c0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5024));
label_4c0d58:
    // 0x4c0d58: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c0d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_4c0d5c:
    // 0x4c0d5c: 0x244213d8  addiu       $v0, $v0, 0x13D8
    ctx->pc = 0x4c0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5080));
label_4c0d60:
    // 0x4c0d60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4c0d64:
    // 0x4c0d64: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4c0d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4c0d68:
    // 0x4c0d68: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4c0d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4c0d6c:
    // 0x4c0d6c: 0xc0407c0  jal         func_101F00
label_4c0d70:
    if (ctx->pc == 0x4C0D70u) {
        ctx->pc = 0x4C0D70u;
            // 0x4c0d70: 0x24a50e90  addiu       $a1, $a1, 0xE90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3728));
        ctx->pc = 0x4C0D74u;
        goto label_4c0d74;
    }
    ctx->pc = 0x4C0D6Cu;
    SET_GPR_U32(ctx, 31, 0x4C0D74u);
    ctx->pc = 0x4C0D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0D6Cu;
            // 0x4c0d70: 0x24a50e90  addiu       $a1, $a1, 0xE90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0D74u; }
        if (ctx->pc != 0x4C0D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0D74u; }
        if (ctx->pc != 0x4C0D74u) { return; }
    }
    ctx->pc = 0x4C0D74u;
label_4c0d74:
    // 0x4c0d74: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4c0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4c0d78:
    // 0x4c0d78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4c0d7c:
    if (ctx->pc == 0x4C0D7Cu) {
        ctx->pc = 0x4C0D7Cu;
            // 0x4c0d7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4C0D80u;
        goto label_4c0d80;
    }
    ctx->pc = 0x4C0D78u;
    {
        const bool branch_taken_0x4c0d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0d78) {
            ctx->pc = 0x4C0D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0D78u;
            // 0x4c0d7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0D8Cu;
            goto label_4c0d8c;
        }
    }
    ctx->pc = 0x4C0D80u;
label_4c0d80:
    // 0x4c0d80: 0xc07507c  jal         func_1D41F0
label_4c0d84:
    if (ctx->pc == 0x4C0D84u) {
        ctx->pc = 0x4C0D84u;
            // 0x4c0d84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4C0D88u;
        goto label_4c0d88;
    }
    ctx->pc = 0x4C0D80u;
    SET_GPR_U32(ctx, 31, 0x4C0D88u);
    ctx->pc = 0x4C0D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0D80u;
            // 0x4c0d84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0D88u; }
        if (ctx->pc != 0x4C0D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0D88u; }
        if (ctx->pc != 0x4C0D88u) { return; }
    }
    ctx->pc = 0x4C0D88u;
label_4c0d88:
    // 0x4c0d88: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4c0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4c0d8c:
    // 0x4c0d8c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4c0d90:
    if (ctx->pc == 0x4C0D90u) {
        ctx->pc = 0x4C0D90u;
            // 0x4c0d90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4C0D94u;
        goto label_4c0d94;
    }
    ctx->pc = 0x4C0D8Cu;
    {
        const bool branch_taken_0x4c0d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0d8c) {
            ctx->pc = 0x4C0D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0D8Cu;
            // 0x4c0d90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0DBCu;
            goto label_4c0dbc;
        }
    }
    ctx->pc = 0x4C0D94u;
label_4c0d94:
    // 0x4c0d94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c0d98:
    if (ctx->pc == 0x4C0D98u) {
        ctx->pc = 0x4C0D9Cu;
        goto label_4c0d9c;
    }
    ctx->pc = 0x4C0D94u;
    {
        const bool branch_taken_0x4c0d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0d94) {
            ctx->pc = 0x4C0DB8u;
            goto label_4c0db8;
        }
    }
    ctx->pc = 0x4C0D9Cu;
label_4c0d9c:
    // 0x4c0d9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c0da0:
    if (ctx->pc == 0x4C0DA0u) {
        ctx->pc = 0x4C0DA4u;
        goto label_4c0da4;
    }
    ctx->pc = 0x4C0D9Cu;
    {
        const bool branch_taken_0x4c0d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0d9c) {
            ctx->pc = 0x4C0DB8u;
            goto label_4c0db8;
        }
    }
    ctx->pc = 0x4C0DA4u;
label_4c0da4:
    // 0x4c0da4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4c0da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4c0da8:
    // 0x4c0da8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c0dac:
    if (ctx->pc == 0x4C0DACu) {
        ctx->pc = 0x4C0DB0u;
        goto label_4c0db0;
    }
    ctx->pc = 0x4C0DA8u;
    {
        const bool branch_taken_0x4c0da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0da8) {
            ctx->pc = 0x4C0DB8u;
            goto label_4c0db8;
        }
    }
    ctx->pc = 0x4C0DB0u;
label_4c0db0:
    // 0x4c0db0: 0xc0400a8  jal         func_1002A0
label_4c0db4:
    if (ctx->pc == 0x4C0DB4u) {
        ctx->pc = 0x4C0DB8u;
        goto label_4c0db8;
    }
    ctx->pc = 0x4C0DB0u;
    SET_GPR_U32(ctx, 31, 0x4C0DB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0DB8u; }
        if (ctx->pc != 0x4C0DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0DB8u; }
        if (ctx->pc != 0x4C0DB8u) { return; }
    }
    ctx->pc = 0x4C0DB8u;
label_4c0db8:
    // 0x4c0db8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4c0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4c0dbc:
    // 0x4c0dbc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4c0dc0:
    if (ctx->pc == 0x4C0DC0u) {
        ctx->pc = 0x4C0DC0u;
            // 0x4c0dc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4C0DC4u;
        goto label_4c0dc4;
    }
    ctx->pc = 0x4C0DBCu;
    {
        const bool branch_taken_0x4c0dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0dbc) {
            ctx->pc = 0x4C0DC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0DBCu;
            // 0x4c0dc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0DECu;
            goto label_4c0dec;
        }
    }
    ctx->pc = 0x4C0DC4u;
label_4c0dc4:
    // 0x4c0dc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c0dc8:
    if (ctx->pc == 0x4C0DC8u) {
        ctx->pc = 0x4C0DCCu;
        goto label_4c0dcc;
    }
    ctx->pc = 0x4C0DC4u;
    {
        const bool branch_taken_0x4c0dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0dc4) {
            ctx->pc = 0x4C0DE8u;
            goto label_4c0de8;
        }
    }
    ctx->pc = 0x4C0DCCu;
label_4c0dcc:
    // 0x4c0dcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c0dd0:
    if (ctx->pc == 0x4C0DD0u) {
        ctx->pc = 0x4C0DD4u;
        goto label_4c0dd4;
    }
    ctx->pc = 0x4C0DCCu;
    {
        const bool branch_taken_0x4c0dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0dcc) {
            ctx->pc = 0x4C0DE8u;
            goto label_4c0de8;
        }
    }
    ctx->pc = 0x4C0DD4u;
label_4c0dd4:
    // 0x4c0dd4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4c0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4c0dd8:
    // 0x4c0dd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4c0ddc:
    if (ctx->pc == 0x4C0DDCu) {
        ctx->pc = 0x4C0DE0u;
        goto label_4c0de0;
    }
    ctx->pc = 0x4C0DD8u;
    {
        const bool branch_taken_0x4c0dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0dd8) {
            ctx->pc = 0x4C0DE8u;
            goto label_4c0de8;
        }
    }
    ctx->pc = 0x4C0DE0u;
label_4c0de0:
    // 0x4c0de0: 0xc0400a8  jal         func_1002A0
label_4c0de4:
    if (ctx->pc == 0x4C0DE4u) {
        ctx->pc = 0x4C0DE8u;
        goto label_4c0de8;
    }
    ctx->pc = 0x4C0DE0u;
    SET_GPR_U32(ctx, 31, 0x4C0DE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0DE8u; }
        if (ctx->pc != 0x4C0DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0DE8u; }
        if (ctx->pc != 0x4C0DE8u) { return; }
    }
    ctx->pc = 0x4C0DE8u;
label_4c0de8:
    // 0x4c0de8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4c0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4c0dec:
    // 0x4c0dec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4c0df0:
    if (ctx->pc == 0x4C0DF0u) {
        ctx->pc = 0x4C0DF4u;
        goto label_4c0df4;
    }
    ctx->pc = 0x4C0DECu;
    {
        const bool branch_taken_0x4c0dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0dec) {
            ctx->pc = 0x4C0E08u;
            goto label_4c0e08;
        }
    }
    ctx->pc = 0x4C0DF4u;
label_4c0df4:
    // 0x4c0df4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c0df8:
    // 0x4c0df8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4c0dfc:
    // 0x4c0dfc: 0x24631390  addiu       $v1, $v1, 0x1390
    ctx->pc = 0x4c0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5008));
label_4c0e00:
    // 0x4c0e00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4c0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4c0e04:
    // 0x4c0e04: 0xac40a9f0  sw          $zero, -0x5610($v0)
    ctx->pc = 0x4c0e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945264), GPR_U32(ctx, 0));
label_4c0e08:
    // 0x4c0e08: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4c0e0c:
    if (ctx->pc == 0x4C0E0Cu) {
        ctx->pc = 0x4C0E0Cu;
            // 0x4c0e0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4C0E10u;
        goto label_4c0e10;
    }
    ctx->pc = 0x4C0E08u;
    {
        const bool branch_taken_0x4c0e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0e08) {
            ctx->pc = 0x4C0E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0E08u;
            // 0x4c0e0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0E64u;
            goto label_4c0e64;
        }
    }
    ctx->pc = 0x4C0E10u;
label_4c0e10:
    // 0x4c0e10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4c0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4c0e14:
    // 0x4c0e14: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4c0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4c0e18:
    // 0x4c0e18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c0e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4c0e1c:
    // 0x4c0e1c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4c0e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4c0e20:
    // 0x4c0e20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c0e24:
    if (ctx->pc == 0x4C0E24u) {
        ctx->pc = 0x4C0E24u;
            // 0x4c0e24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4C0E28u;
        goto label_4c0e28;
    }
    ctx->pc = 0x4C0E20u;
    {
        const bool branch_taken_0x4c0e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0e20) {
            ctx->pc = 0x4C0E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0E20u;
            // 0x4c0e24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0E3Cu;
            goto label_4c0e3c;
        }
    }
    ctx->pc = 0x4C0E28u;
label_4c0e28:
    // 0x4c0e28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c0e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0e2c:
    // 0x4c0e2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c0e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c0e30:
    // 0x4c0e30: 0x320f809  jalr        $t9
label_4c0e34:
    if (ctx->pc == 0x4C0E34u) {
        ctx->pc = 0x4C0E34u;
            // 0x4c0e34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C0E38u;
        goto label_4c0e38;
    }
    ctx->pc = 0x4C0E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C0E38u);
        ctx->pc = 0x4C0E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0E30u;
            // 0x4c0e34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C0E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C0E38u; }
            if (ctx->pc != 0x4C0E38u) { return; }
        }
        }
    }
    ctx->pc = 0x4C0E38u;
label_4c0e38:
    // 0x4c0e38: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4c0e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4c0e3c:
    // 0x4c0e3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4c0e40:
    if (ctx->pc == 0x4C0E40u) {
        ctx->pc = 0x4C0E40u;
            // 0x4c0e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0E44u;
        goto label_4c0e44;
    }
    ctx->pc = 0x4C0E3Cu;
    {
        const bool branch_taken_0x4c0e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0e3c) {
            ctx->pc = 0x4C0E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0E3Cu;
            // 0x4c0e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0E58u;
            goto label_4c0e58;
        }
    }
    ctx->pc = 0x4C0E44u;
label_4c0e44:
    // 0x4c0e44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c0e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0e48:
    // 0x4c0e48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c0e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c0e4c:
    // 0x4c0e4c: 0x320f809  jalr        $t9
label_4c0e50:
    if (ctx->pc == 0x4C0E50u) {
        ctx->pc = 0x4C0E50u;
            // 0x4c0e50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C0E54u;
        goto label_4c0e54;
    }
    ctx->pc = 0x4C0E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C0E54u);
        ctx->pc = 0x4C0E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0E4Cu;
            // 0x4c0e50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C0E54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C0E54u; }
            if (ctx->pc != 0x4C0E54u) { return; }
        }
        }
    }
    ctx->pc = 0x4C0E54u;
label_4c0e54:
    // 0x4c0e54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c0e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c0e58:
    // 0x4c0e58: 0xc075bf8  jal         func_1D6FE0
label_4c0e5c:
    if (ctx->pc == 0x4C0E5Cu) {
        ctx->pc = 0x4C0E5Cu;
            // 0x4c0e5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0E60u;
        goto label_4c0e60;
    }
    ctx->pc = 0x4C0E58u;
    SET_GPR_U32(ctx, 31, 0x4C0E60u);
    ctx->pc = 0x4C0E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0E58u;
            // 0x4c0e5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0E60u; }
        if (ctx->pc != 0x4C0E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0E60u; }
        if (ctx->pc != 0x4C0E60u) { return; }
    }
    ctx->pc = 0x4C0E60u;
label_4c0e60:
    // 0x4c0e60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c0e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c0e64:
    // 0x4c0e64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c0e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c0e68:
    // 0x4c0e68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c0e6c:
    if (ctx->pc == 0x4C0E6Cu) {
        ctx->pc = 0x4C0E6Cu;
            // 0x4c0e6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0E70u;
        goto label_4c0e70;
    }
    ctx->pc = 0x4C0E68u;
    {
        const bool branch_taken_0x4c0e68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c0e68) {
            ctx->pc = 0x4C0E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0E68u;
            // 0x4c0e6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0E7Cu;
            goto label_4c0e7c;
        }
    }
    ctx->pc = 0x4C0E70u;
label_4c0e70:
    // 0x4c0e70: 0xc0400a8  jal         func_1002A0
label_4c0e74:
    if (ctx->pc == 0x4C0E74u) {
        ctx->pc = 0x4C0E74u;
            // 0x4c0e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0E78u;
        goto label_4c0e78;
    }
    ctx->pc = 0x4C0E70u;
    SET_GPR_U32(ctx, 31, 0x4C0E78u);
    ctx->pc = 0x4C0E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0E70u;
            // 0x4c0e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0E78u; }
        if (ctx->pc != 0x4C0E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0E78u; }
        if (ctx->pc != 0x4C0E78u) { return; }
    }
    ctx->pc = 0x4C0E78u;
label_4c0e78:
    // 0x4c0e78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c0e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c0e7c:
    // 0x4c0e7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c0e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c0e80:
    // 0x4c0e80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c0e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c0e84:
    // 0x4c0e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c0e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0e88:
    // 0x4c0e88: 0x3e00008  jr          $ra
label_4c0e8c:
    if (ctx->pc == 0x4C0E8Cu) {
        ctx->pc = 0x4C0E8Cu;
            // 0x4c0e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C0E90u;
        goto label_4c0e90;
    }
    ctx->pc = 0x4C0E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0E88u;
            // 0x4c0e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C0E90u;
label_4c0e90:
    // 0x4c0e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c0e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c0e94:
    // 0x4c0e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c0e98:
    // 0x4c0e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c0e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c0e9c:
    // 0x4c0e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c0e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c0ea0:
    // 0x4c0ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c0ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c0ea4:
    // 0x4c0ea4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_4c0ea8:
    if (ctx->pc == 0x4C0EA8u) {
        ctx->pc = 0x4C0EA8u;
            // 0x4c0ea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0EACu;
        goto label_4c0eac;
    }
    ctx->pc = 0x4C0EA4u;
    {
        const bool branch_taken_0x4c0ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0EA4u;
            // 0x4c0ea8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0ea4) {
            ctx->pc = 0x4C0F18u;
            goto label_4c0f18;
        }
    }
    ctx->pc = 0x4C0EACu;
label_4c0eac:
    // 0x4c0eac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c0eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c0eb0:
    // 0x4c0eb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c0eb4:
    // 0x4c0eb4: 0x246312e0  addiu       $v1, $v1, 0x12E0
    ctx->pc = 0x4c0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4832));
label_4c0eb8:
    // 0x4c0eb8: 0x24421320  addiu       $v0, $v0, 0x1320
    ctx->pc = 0x4c0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
label_4c0ebc:
    // 0x4c0ebc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c0ec0:
    // 0x4c0ec0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c0ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c0ec4:
    // 0x4c0ec4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c0ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0ec8:
    // 0x4c0ec8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c0ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c0ecc:
    // 0x4c0ecc: 0x320f809  jalr        $t9
label_4c0ed0:
    if (ctx->pc == 0x4C0ED0u) {
        ctx->pc = 0x4C0ED4u;
        goto label_4c0ed4;
    }
    ctx->pc = 0x4C0ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C0ED4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C0ED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C0ED4u; }
            if (ctx->pc != 0x4C0ED4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C0ED4u;
label_4c0ed4:
    // 0x4c0ed4: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_4c0ed8:
    if (ctx->pc == 0x4C0ED8u) {
        ctx->pc = 0x4C0ED8u;
            // 0x4c0ed8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4C0EDCu;
        goto label_4c0edc;
    }
    ctx->pc = 0x4C0ED4u;
    {
        const bool branch_taken_0x4c0ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0ed4) {
            ctx->pc = 0x4C0ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0ED4u;
            // 0x4c0ed8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0F04u;
            goto label_4c0f04;
        }
    }
    ctx->pc = 0x4C0EDCu;
label_4c0edc:
    // 0x4c0edc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c0edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c0ee0:
    // 0x4c0ee0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c0ee4:
    // 0x4c0ee4: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x4c0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_4c0ee8:
    // 0x4c0ee8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x4c0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_4c0eec:
    // 0x4c0eec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4c0ef0:
    // 0x4c0ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c0ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c0ef4:
    // 0x4c0ef4: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c0ef8:
    // 0x4c0ef8: 0xc0aee40  jal         func_2BB900
label_4c0efc:
    if (ctx->pc == 0x4C0EFCu) {
        ctx->pc = 0x4C0EFCu;
            // 0x4c0efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0F00u;
        goto label_4c0f00;
    }
    ctx->pc = 0x4C0EF8u;
    SET_GPR_U32(ctx, 31, 0x4C0F00u);
    ctx->pc = 0x4C0EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0EF8u;
            // 0x4c0efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0F00u; }
        if (ctx->pc != 0x4C0F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0F00u; }
        if (ctx->pc != 0x4C0F00u) { return; }
    }
    ctx->pc = 0x4C0F00u;
label_4c0f00:
    // 0x4c0f00: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c0f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4c0f04:
    // 0x4c0f04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c0f04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c0f08:
    // 0x4c0f08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c0f0c:
    if (ctx->pc == 0x4C0F0Cu) {
        ctx->pc = 0x4C0F0Cu;
            // 0x4c0f0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0F10u;
        goto label_4c0f10;
    }
    ctx->pc = 0x4C0F08u;
    {
        const bool branch_taken_0x4c0f08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c0f08) {
            ctx->pc = 0x4C0F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0F08u;
            // 0x4c0f0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0F1Cu;
            goto label_4c0f1c;
        }
    }
    ctx->pc = 0x4C0F10u;
label_4c0f10:
    // 0x4c0f10: 0xc0400a8  jal         func_1002A0
label_4c0f14:
    if (ctx->pc == 0x4C0F14u) {
        ctx->pc = 0x4C0F14u;
            // 0x4c0f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0F18u;
        goto label_4c0f18;
    }
    ctx->pc = 0x4C0F10u;
    SET_GPR_U32(ctx, 31, 0x4C0F18u);
    ctx->pc = 0x4C0F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0F10u;
            // 0x4c0f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0F18u; }
        if (ctx->pc != 0x4C0F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0F18u; }
        if (ctx->pc != 0x4C0F18u) { return; }
    }
    ctx->pc = 0x4C0F18u;
label_4c0f18:
    // 0x4c0f18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c0f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c0f1c:
    // 0x4c0f1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c0f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c0f20:
    // 0x4c0f20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c0f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c0f24:
    // 0x4c0f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c0f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c0f28:
    // 0x4c0f28: 0x3e00008  jr          $ra
label_4c0f2c:
    if (ctx->pc == 0x4C0F2Cu) {
        ctx->pc = 0x4C0F2Cu;
            // 0x4c0f2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C0F30u;
        goto label_4c0f30;
    }
    ctx->pc = 0x4C0F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0F28u;
            // 0x4c0f2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C0F30u;
label_4c0f30:
    // 0x4c0f30: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4c0f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4c0f34:
    // 0x4c0f34: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4c0f38:
    // 0x4c0f38: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4c0f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4c0f3c:
    // 0x4c0f3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4c0f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4c0f40:
    // 0x4c0f40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4c0f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4c0f44:
    // 0x4c0f44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4c0f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4c0f48:
    // 0x4c0f48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c0f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c0f4c:
    // 0x4c0f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c0f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c0f50:
    // 0x4c0f50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c0f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c0f54:
    // 0x4c0f54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c0f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c0f58:
    // 0x4c0f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c0f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c0f5c:
    // 0x4c0f5c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4c0f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4c0f60:
    // 0x4c0f60: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4c0f60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4c0f64:
    // 0x4c0f64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c0f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c0f68:
    // 0x4c0f68: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4c0f6c:
    if (ctx->pc == 0x4C0F6Cu) {
        ctx->pc = 0x4C0F6Cu;
            // 0x4c0f6c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C0F70u;
        goto label_4c0f70;
    }
    ctx->pc = 0x4C0F68u;
    {
        const bool branch_taken_0x4c0f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C0F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0F68u;
            // 0x4c0f6c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0f68) {
            ctx->pc = 0x4C0FACu;
            goto label_4c0fac;
        }
    }
    ctx->pc = 0x4C0F70u;
label_4c0f70:
    // 0x4c0f70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c0f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c0f74:
    // 0x4c0f74: 0x50a30044  beql        $a1, $v1, . + 4 + (0x44 << 2)
label_4c0f78:
    if (ctx->pc == 0x4C0F78u) {
        ctx->pc = 0x4C0F78u;
            // 0x4c0f78: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4C0F7Cu;
        goto label_4c0f7c;
    }
    ctx->pc = 0x4C0F74u;
    {
        const bool branch_taken_0x4c0f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c0f74) {
            ctx->pc = 0x4C0F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0F74u;
            // 0x4c0f78: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1088u;
            goto label_4c1088;
        }
    }
    ctx->pc = 0x4C0F7Cu;
label_4c0f7c:
    // 0x4c0f7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c0f80:
    // 0x4c0f80: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4c0f84:
    if (ctx->pc == 0x4C0F84u) {
        ctx->pc = 0x4C0F84u;
            // 0x4c0f84: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4C0F88u;
        goto label_4c0f88;
    }
    ctx->pc = 0x4C0F80u;
    {
        const bool branch_taken_0x4c0f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c0f80) {
            ctx->pc = 0x4C0F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0F80u;
            // 0x4c0f84: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C0F90u;
            goto label_4c0f90;
        }
    }
    ctx->pc = 0x4C0F88u;
label_4c0f88:
    // 0x4c0f88: 0x1000003e  b           . + 4 + (0x3E << 2)
label_4c0f8c:
    if (ctx->pc == 0x4C0F8Cu) {
        ctx->pc = 0x4C0F90u;
        goto label_4c0f90;
    }
    ctx->pc = 0x4C0F88u;
    {
        const bool branch_taken_0x4c0f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0f88) {
            ctx->pc = 0x4C1084u;
            goto label_4c1084;
        }
    }
    ctx->pc = 0x4C0F90u;
label_4c0f90:
    // 0x4c0f90: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4c0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4c0f94:
    // 0x4c0f94: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4c0f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4c0f98:
    // 0x4c0f98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c0f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c0f9c:
    // 0x4c0f9c: 0x320f809  jalr        $t9
label_4c0fa0:
    if (ctx->pc == 0x4C0FA0u) {
        ctx->pc = 0x4C0FA0u;
            // 0x4c0fa0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4C0FA4u;
        goto label_4c0fa4;
    }
    ctx->pc = 0x4C0F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C0FA4u);
        ctx->pc = 0x4C0FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0F9Cu;
            // 0x4c0fa0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C0FA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C0FA4u; }
            if (ctx->pc != 0x4C0FA4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C0FA4u;
label_4c0fa4:
    // 0x4c0fa4: 0x10000037  b           . + 4 + (0x37 << 2)
label_4c0fa8:
    if (ctx->pc == 0x4C0FA8u) {
        ctx->pc = 0x4C0FACu;
        goto label_4c0fac;
    }
    ctx->pc = 0x4C0FA4u;
    {
        const bool branch_taken_0x4c0fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0fa4) {
            ctx->pc = 0x4C1084u;
            goto label_4c1084;
        }
    }
    ctx->pc = 0x4C0FACu;
label_4c0fac:
    // 0x4c0fac: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x4c0facu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4c0fb0:
    // 0x4c0fb0: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_4c0fb4:
    if (ctx->pc == 0x4C0FB4u) {
        ctx->pc = 0x4C0FB8u;
        goto label_4c0fb8;
    }
    ctx->pc = 0x4C0FB0u;
    {
        const bool branch_taken_0x4c0fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c0fb0) {
            ctx->pc = 0x4C1084u;
            goto label_4c1084;
        }
    }
    ctx->pc = 0x4C0FB8u;
label_4c0fb8:
    // 0x4c0fb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c0fbc:
    // 0x4c0fbc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4c0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4c0fc0:
    // 0x4c0fc0: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x4c0fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4c0fc4:
    // 0x4c0fc4: 0x26b00084  addiu       $s0, $s5, 0x84
    ctx->pc = 0x4c0fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4c0fc8:
    // 0x4c0fc8: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x4c0fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4c0fcc:
    // 0x4c0fcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c0fd0:
    // 0x4c0fd0: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x4c0fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4c0fd4:
    // 0x4c0fd4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4c0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4c0fd8:
    // 0x4c0fd8: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x4c0fd8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4c0fdc:
    // 0x4c0fdc: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x4c0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_4c0fe0:
    // 0x4c0fe0: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x4c0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_4c0fe4:
    // 0x4c0fe4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4c0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4c0fe8:
    // 0x4c0fe8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4c0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4c0fec:
    // 0x4c0fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c0ff0:
    // 0x4c0ff0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4c0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0ff4:
    // 0x4c0ff4: 0xc04e738  jal         func_139CE0
label_4c0ff8:
    if (ctx->pc == 0x4C0FF8u) {
        ctx->pc = 0x4C0FF8u;
            // 0x4c0ff8: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4C0FFCu;
        goto label_4c0ffc;
    }
    ctx->pc = 0x4C0FF4u;
    SET_GPR_U32(ctx, 31, 0x4C0FFCu);
    ctx->pc = 0x4C0FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C0FF4u;
            // 0x4c0ff8: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0FFCu; }
        if (ctx->pc != 0x4C0FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C0FFCu; }
        if (ctx->pc != 0x4C0FFCu) { return; }
    }
    ctx->pc = 0x4C0FFCu;
label_4c0ffc:
    // 0x4c0ffc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c1000:
    // 0x4c1000: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c1000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c1004:
    // 0x4c1004: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4c1004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4c1008:
    // 0x4c1008: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c1008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c100c:
    // 0x4c100c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4c100cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4c1010:
    // 0x4c1010: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c1010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1014:
    // 0x4c1014: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x4c1014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4c1018:
    // 0x4c1018: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4c1018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4c101c:
    // 0x4c101c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4c101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4c1020:
    // 0x4c1020: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4c1020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4c1024:
    // 0x4c1024: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4c1024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c1028:
    // 0x4c1028: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4c1028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c102c:
    // 0x4c102c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4c102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4c1030:
    // 0x4c1030: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4c1030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4c1034:
    // 0x4c1034: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c1034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c1038:
    // 0x4c1038: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x4c1038u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_4c103c:
    // 0x4c103c: 0xc1308a8  jal         func_4C22A0
label_4c1040:
    if (ctx->pc == 0x4C1040u) {
        ctx->pc = 0x4C1040u;
            // 0x4c1040: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C1044u;
        goto label_4c1044;
    }
    ctx->pc = 0x4C103Cu;
    SET_GPR_U32(ctx, 31, 0x4C1044u);
    ctx->pc = 0x4C1040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C103Cu;
            // 0x4c1040: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C22A0u;
    if (runtime->hasFunction(0x4C22A0u)) {
        auto targetFn = runtime->lookupFunction(0x4C22A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1044u; }
        if (ctx->pc != 0x4C1044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C22A0_0x4c22a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1044u; }
        if (ctx->pc != 0x4C1044u) { return; }
    }
    ctx->pc = 0x4C1044u;
label_4c1044:
    // 0x4c1044: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4c1044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4c1048:
    // 0x4c1048: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4c1048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4c104c:
    // 0x4c104c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_4c1050:
    if (ctx->pc == 0x4C1050u) {
        ctx->pc = 0x4C1050u;
            // 0x4c1050: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4C1054u;
        goto label_4c1054;
    }
    ctx->pc = 0x4C104Cu;
    {
        const bool branch_taken_0x4c104c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C1050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C104Cu;
            // 0x4c1050: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c104c) {
            ctx->pc = 0x4C1014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c1014;
        }
    }
    ctx->pc = 0x4C1054u;
label_4c1054:
    // 0x4c1054: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c1054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c1058:
    // 0x4c1058: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4c1058u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4c105c:
    // 0x4c105c: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_4c1060:
    if (ctx->pc == 0x4C1060u) {
        ctx->pc = 0x4C1060u;
            // 0x4c1060: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4C1064u;
        goto label_4c1064;
    }
    ctx->pc = 0x4C105Cu;
    {
        const bool branch_taken_0x4c105c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4C1060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C105Cu;
            // 0x4c1060: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c105c) {
            ctx->pc = 0x4C1084u;
            goto label_4c1084;
        }
    }
    ctx->pc = 0x4C1064u;
label_4c1064:
    // 0x4c1064: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c1064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c1068:
    // 0x4c1068: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c1068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c106c:
    // 0x4c106c: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4c106cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4c1070:
    // 0x4c1070: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4c1070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4c1074:
    // 0x4c1074: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4c1074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4c1078:
    // 0x4c1078: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x4c1078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_4c107c:
    // 0x4c107c: 0xc055ea8  jal         func_157AA0
label_4c1080:
    if (ctx->pc == 0x4C1080u) {
        ctx->pc = 0x4C1080u;
            // 0x4c1080: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C1084u;
        goto label_4c1084;
    }
    ctx->pc = 0x4C107Cu;
    SET_GPR_U32(ctx, 31, 0x4C1084u);
    ctx->pc = 0x4C1080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C107Cu;
            // 0x4c1080: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1084u; }
        if (ctx->pc != 0x4C1084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1084u; }
        if (ctx->pc != 0x4C1084u) { return; }
    }
    ctx->pc = 0x4C1084u;
label_4c1084:
    // 0x4c1084: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4c1084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4c1088:
    // 0x4c1088: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4c1088u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c108c:
    // 0x4c108c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4c108cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c1090:
    // 0x4c1090: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c1090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c1094:
    // 0x4c1094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c1094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c1098:
    // 0x4c1098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c1098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c109c:
    // 0x4c109c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c109cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c10a0:
    // 0x4c10a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c10a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c10a4:
    // 0x4c10a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c10a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c10a8:
    // 0x4c10a8: 0x3e00008  jr          $ra
label_4c10ac:
    if (ctx->pc == 0x4C10ACu) {
        ctx->pc = 0x4C10ACu;
            // 0x4c10ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4C10B0u;
        goto label_4c10b0;
    }
    ctx->pc = 0x4C10A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C10ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C10A8u;
            // 0x4c10ac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C10B0u;
label_4c10b0:
    // 0x4c10b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c10b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4c10b4:
    // 0x4c10b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c10b8:
    // 0x4c10b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4c10bc:
    // 0x4c10bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c10bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c10c0:
    // 0x4c10c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c10c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c10c4:
    // 0x4c10c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c10c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c10c8:
    // 0x4c10c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c10c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c10cc:
    // 0x4c10cc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4c10ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4c10d0:
    // 0x4c10d0: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
label_4c10d4:
    if (ctx->pc == 0x4C10D4u) {
        ctx->pc = 0x4C10D4u;
            // 0x4c10d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C10D8u;
        goto label_4c10d8;
    }
    ctx->pc = 0x4C10D0u;
    {
        const bool branch_taken_0x4c10d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C10D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C10D0u;
            // 0x4c10d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c10d0) {
            ctx->pc = 0x4C1178u;
            goto label_4c1178;
        }
    }
    ctx->pc = 0x4C10D8u;
label_4c10d8:
    // 0x4c10d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4c10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c10dc:
    // 0x4c10dc: 0x50a30023  beql        $a1, $v1, . + 4 + (0x23 << 2)
label_4c10e0:
    if (ctx->pc == 0x4C10E0u) {
        ctx->pc = 0x4C10E0u;
            // 0x4c10e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4C10E4u;
        goto label_4c10e4;
    }
    ctx->pc = 0x4C10DCu;
    {
        const bool branch_taken_0x4c10dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c10dc) {
            ctx->pc = 0x4C10E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C10DCu;
            // 0x4c10e0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C116Cu;
            goto label_4c116c;
        }
    }
    ctx->pc = 0x4C10E4u;
label_4c10e4:
    // 0x4c10e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4c10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c10e8:
    // 0x4c10e8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4c10ec:
    if (ctx->pc == 0x4C10ECu) {
        ctx->pc = 0x4C10F0u;
        goto label_4c10f0;
    }
    ctx->pc = 0x4C10E8u;
    {
        const bool branch_taken_0x4c10e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c10e8) {
            ctx->pc = 0x4C10F8u;
            goto label_4c10f8;
        }
    }
    ctx->pc = 0x4C10F0u;
label_4c10f0:
    // 0x4c10f0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_4c10f4:
    if (ctx->pc == 0x4C10F4u) {
        ctx->pc = 0x4C10F8u;
        goto label_4c10f8;
    }
    ctx->pc = 0x4C10F0u;
    {
        const bool branch_taken_0x4c10f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c10f0) {
            ctx->pc = 0x4C11B0u;
            goto label_4c11b0;
        }
    }
    ctx->pc = 0x4C10F8u;
label_4c10f8:
    // 0x4c10f8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4c10fc:
    // 0x4c10fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4c10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c1100:
    // 0x4c1100: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4c1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4c1104:
    // 0x4c1104: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4c1104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4c1108:
    // 0x4c1108: 0x10640029  beq         $v1, $a0, . + 4 + (0x29 << 2)
label_4c110c:
    if (ctx->pc == 0x4C110Cu) {
        ctx->pc = 0x4C1110u;
        goto label_4c1110;
    }
    ctx->pc = 0x4C1108u;
    {
        const bool branch_taken_0x4c1108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4c1108) {
            ctx->pc = 0x4C11B0u;
            goto label_4c11b0;
        }
    }
    ctx->pc = 0x4C1110u;
label_4c1110:
    // 0x4c1110: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x4c1110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c1114:
    // 0x4c1114: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4c1114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4c1118:
    // 0x4c1118: 0x8c67c7c8  lw          $a3, -0x3838($v1)
    ctx->pc = 0x4c1118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952904)));
label_4c111c:
    // 0x4c111c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4c111cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4c1120:
    // 0x4c1120: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4c1120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4c1124:
    // 0x4c1124: 0x8cc80030  lw          $t0, 0x30($a2)
    ctx->pc = 0x4c1124u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_4c1128:
    // 0x4c1128: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4c1128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4c112c:
    // 0x4c112c: 0x8d060090  lw          $a2, 0x90($t0)
    ctx->pc = 0x4c112cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 144)));
label_4c1130:
    // 0x4c1130: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4c1130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_4c1134:
    // 0x4c1134: 0xad060090  sw          $a2, 0x90($t0)
    ctx->pc = 0x4c1134u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 6));
label_4c1138:
    // 0x4c1138: 0x8ca6c7d0  lw          $a2, -0x3830($a1)
    ctx->pc = 0x4c1138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952912)));
label_4c113c:
    // 0x4c113c: 0x8d050120  lw          $a1, 0x120($t0)
    ctx->pc = 0x4c113cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 288)));
label_4c1140:
    // 0x4c1140: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4c1140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_4c1144:
    // 0x4c1144: 0xad050120  sw          $a1, 0x120($t0)
    ctx->pc = 0x4c1144u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 288), GPR_U32(ctx, 5));
label_4c1148:
    // 0x4c1148: 0x8c85c7d8  lw          $a1, -0x3828($a0)
    ctx->pc = 0x4c1148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952920)));
label_4c114c:
    // 0x4c114c: 0x8d0401b0  lw          $a0, 0x1B0($t0)
    ctx->pc = 0x4c114cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 432)));
label_4c1150:
    // 0x4c1150: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4c1150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4c1154:
    // 0x4c1154: 0xad0401b0  sw          $a0, 0x1B0($t0)
    ctx->pc = 0x4c1154u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 432), GPR_U32(ctx, 4));
label_4c1158:
    // 0x4c1158: 0x8c64c7e0  lw          $a0, -0x3820($v1)
    ctx->pc = 0x4c1158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952928)));
label_4c115c:
    // 0x4c115c: 0x8d030240  lw          $v1, 0x240($t0)
    ctx->pc = 0x4c115cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 576)));
label_4c1160:
    // 0x4c1160: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4c1160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4c1164:
    // 0x4c1164: 0x10000012  b           . + 4 + (0x12 << 2)
label_4c1168:
    if (ctx->pc == 0x4C1168u) {
        ctx->pc = 0x4C1168u;
            // 0x4c1168: 0xad030240  sw          $v1, 0x240($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 576), GPR_U32(ctx, 3));
        ctx->pc = 0x4C116Cu;
        goto label_4c116c;
    }
    ctx->pc = 0x4C1164u;
    {
        const bool branch_taken_0x4c1164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1164u;
            // 0x4c1168: 0xad030240  sw          $v1, 0x240($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c1164) {
            ctx->pc = 0x4C11B0u;
            goto label_4c11b0;
        }
    }
    ctx->pc = 0x4C116Cu;
label_4c116c:
    // 0x4c116c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4c116cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4c1170:
    // 0x4c1170: 0x320f809  jalr        $t9
label_4c1174:
    if (ctx->pc == 0x4C1174u) {
        ctx->pc = 0x4C1178u;
        goto label_4c1178;
    }
    ctx->pc = 0x4C1170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C1178u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C1178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C1178u; }
            if (ctx->pc != 0x4C1178u) { return; }
        }
        }
    }
    ctx->pc = 0x4C1178u;
label_4c1178:
    // 0x4c1178: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4c1178u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4c117c:
    // 0x4c117c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4c1180:
    if (ctx->pc == 0x4C1180u) {
        ctx->pc = 0x4C1184u;
        goto label_4c1184;
    }
    ctx->pc = 0x4C117Cu;
    {
        const bool branch_taken_0x4c117c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c117c) {
            ctx->pc = 0x4C11B0u;
            goto label_4c11b0;
        }
    }
    ctx->pc = 0x4C1184u;
label_4c1184:
    // 0x4c1184: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c1184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c1188:
    // 0x4c1188: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c1188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c118c:
    // 0x4c118c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4c118cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4c1190:
    // 0x4c1190: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4c1190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4c1194:
    // 0x4c1194: 0xc0e3658  jal         func_38D960
label_4c1198:
    if (ctx->pc == 0x4C1198u) {
        ctx->pc = 0x4C1198u;
            // 0x4c1198: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4C119Cu;
        goto label_4c119c;
    }
    ctx->pc = 0x4C1194u;
    SET_GPR_U32(ctx, 31, 0x4C119Cu);
    ctx->pc = 0x4C1198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1194u;
            // 0x4c1198: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C119Cu; }
        if (ctx->pc != 0x4C119Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C119Cu; }
        if (ctx->pc != 0x4C119Cu) { return; }
    }
    ctx->pc = 0x4C119Cu;
label_4c119c:
    // 0x4c119c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4c119cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4c11a0:
    // 0x4c11a0: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4c11a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4c11a4:
    // 0x4c11a4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4c11a8:
    if (ctx->pc == 0x4C11A8u) {
        ctx->pc = 0x4C11A8u;
            // 0x4c11a8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4C11ACu;
        goto label_4c11ac;
    }
    ctx->pc = 0x4C11A4u;
    {
        const bool branch_taken_0x4c11a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C11A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C11A4u;
            // 0x4c11a8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c11a4) {
            ctx->pc = 0x4C118Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c118c;
        }
    }
    ctx->pc = 0x4C11ACu;
label_4c11ac:
    // 0x4c11ac: 0x0  nop
    ctx->pc = 0x4c11acu;
    // NOP
label_4c11b0:
    // 0x4c11b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c11b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c11b4:
    // 0x4c11b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c11b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c11b8:
    // 0x4c11b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c11b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c11bc:
    // 0x4c11bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c11bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c11c0:
    // 0x4c11c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c11c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c11c4:
    // 0x4c11c4: 0x3e00008  jr          $ra
label_4c11c8:
    if (ctx->pc == 0x4C11C8u) {
        ctx->pc = 0x4C11C8u;
            // 0x4c11c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4C11CCu;
        goto label_4c11cc;
    }
    ctx->pc = 0x4C11C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C11C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C11C4u;
            // 0x4c11c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C11CCu;
label_4c11cc:
    // 0x4c11cc: 0x0  nop
    ctx->pc = 0x4c11ccu;
    // NOP
}
