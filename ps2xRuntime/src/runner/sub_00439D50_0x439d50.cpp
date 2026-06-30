#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00439D50
// Address: 0x439d50 - 0x43a150
void sub_00439D50_0x439d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439D50_0x439d50");
#endif

    switch (ctx->pc) {
        case 0x439d50u: goto label_439d50;
        case 0x439d54u: goto label_439d54;
        case 0x439d58u: goto label_439d58;
        case 0x439d5cu: goto label_439d5c;
        case 0x439d60u: goto label_439d60;
        case 0x439d64u: goto label_439d64;
        case 0x439d68u: goto label_439d68;
        case 0x439d6cu: goto label_439d6c;
        case 0x439d70u: goto label_439d70;
        case 0x439d74u: goto label_439d74;
        case 0x439d78u: goto label_439d78;
        case 0x439d7cu: goto label_439d7c;
        case 0x439d80u: goto label_439d80;
        case 0x439d84u: goto label_439d84;
        case 0x439d88u: goto label_439d88;
        case 0x439d8cu: goto label_439d8c;
        case 0x439d90u: goto label_439d90;
        case 0x439d94u: goto label_439d94;
        case 0x439d98u: goto label_439d98;
        case 0x439d9cu: goto label_439d9c;
        case 0x439da0u: goto label_439da0;
        case 0x439da4u: goto label_439da4;
        case 0x439da8u: goto label_439da8;
        case 0x439dacu: goto label_439dac;
        case 0x439db0u: goto label_439db0;
        case 0x439db4u: goto label_439db4;
        case 0x439db8u: goto label_439db8;
        case 0x439dbcu: goto label_439dbc;
        case 0x439dc0u: goto label_439dc0;
        case 0x439dc4u: goto label_439dc4;
        case 0x439dc8u: goto label_439dc8;
        case 0x439dccu: goto label_439dcc;
        case 0x439dd0u: goto label_439dd0;
        case 0x439dd4u: goto label_439dd4;
        case 0x439dd8u: goto label_439dd8;
        case 0x439ddcu: goto label_439ddc;
        case 0x439de0u: goto label_439de0;
        case 0x439de4u: goto label_439de4;
        case 0x439de8u: goto label_439de8;
        case 0x439decu: goto label_439dec;
        case 0x439df0u: goto label_439df0;
        case 0x439df4u: goto label_439df4;
        case 0x439df8u: goto label_439df8;
        case 0x439dfcu: goto label_439dfc;
        case 0x439e00u: goto label_439e00;
        case 0x439e04u: goto label_439e04;
        case 0x439e08u: goto label_439e08;
        case 0x439e0cu: goto label_439e0c;
        case 0x439e10u: goto label_439e10;
        case 0x439e14u: goto label_439e14;
        case 0x439e18u: goto label_439e18;
        case 0x439e1cu: goto label_439e1c;
        case 0x439e20u: goto label_439e20;
        case 0x439e24u: goto label_439e24;
        case 0x439e28u: goto label_439e28;
        case 0x439e2cu: goto label_439e2c;
        case 0x439e30u: goto label_439e30;
        case 0x439e34u: goto label_439e34;
        case 0x439e38u: goto label_439e38;
        case 0x439e3cu: goto label_439e3c;
        case 0x439e40u: goto label_439e40;
        case 0x439e44u: goto label_439e44;
        case 0x439e48u: goto label_439e48;
        case 0x439e4cu: goto label_439e4c;
        case 0x439e50u: goto label_439e50;
        case 0x439e54u: goto label_439e54;
        case 0x439e58u: goto label_439e58;
        case 0x439e5cu: goto label_439e5c;
        case 0x439e60u: goto label_439e60;
        case 0x439e64u: goto label_439e64;
        case 0x439e68u: goto label_439e68;
        case 0x439e6cu: goto label_439e6c;
        case 0x439e70u: goto label_439e70;
        case 0x439e74u: goto label_439e74;
        case 0x439e78u: goto label_439e78;
        case 0x439e7cu: goto label_439e7c;
        case 0x439e80u: goto label_439e80;
        case 0x439e84u: goto label_439e84;
        case 0x439e88u: goto label_439e88;
        case 0x439e8cu: goto label_439e8c;
        case 0x439e90u: goto label_439e90;
        case 0x439e94u: goto label_439e94;
        case 0x439e98u: goto label_439e98;
        case 0x439e9cu: goto label_439e9c;
        case 0x439ea0u: goto label_439ea0;
        case 0x439ea4u: goto label_439ea4;
        case 0x439ea8u: goto label_439ea8;
        case 0x439eacu: goto label_439eac;
        case 0x439eb0u: goto label_439eb0;
        case 0x439eb4u: goto label_439eb4;
        case 0x439eb8u: goto label_439eb8;
        case 0x439ebcu: goto label_439ebc;
        case 0x439ec0u: goto label_439ec0;
        case 0x439ec4u: goto label_439ec4;
        case 0x439ec8u: goto label_439ec8;
        case 0x439eccu: goto label_439ecc;
        case 0x439ed0u: goto label_439ed0;
        case 0x439ed4u: goto label_439ed4;
        case 0x439ed8u: goto label_439ed8;
        case 0x439edcu: goto label_439edc;
        case 0x439ee0u: goto label_439ee0;
        case 0x439ee4u: goto label_439ee4;
        case 0x439ee8u: goto label_439ee8;
        case 0x439eecu: goto label_439eec;
        case 0x439ef0u: goto label_439ef0;
        case 0x439ef4u: goto label_439ef4;
        case 0x439ef8u: goto label_439ef8;
        case 0x439efcu: goto label_439efc;
        case 0x439f00u: goto label_439f00;
        case 0x439f04u: goto label_439f04;
        case 0x439f08u: goto label_439f08;
        case 0x439f0cu: goto label_439f0c;
        case 0x439f10u: goto label_439f10;
        case 0x439f14u: goto label_439f14;
        case 0x439f18u: goto label_439f18;
        case 0x439f1cu: goto label_439f1c;
        case 0x439f20u: goto label_439f20;
        case 0x439f24u: goto label_439f24;
        case 0x439f28u: goto label_439f28;
        case 0x439f2cu: goto label_439f2c;
        case 0x439f30u: goto label_439f30;
        case 0x439f34u: goto label_439f34;
        case 0x439f38u: goto label_439f38;
        case 0x439f3cu: goto label_439f3c;
        case 0x439f40u: goto label_439f40;
        case 0x439f44u: goto label_439f44;
        case 0x439f48u: goto label_439f48;
        case 0x439f4cu: goto label_439f4c;
        case 0x439f50u: goto label_439f50;
        case 0x439f54u: goto label_439f54;
        case 0x439f58u: goto label_439f58;
        case 0x439f5cu: goto label_439f5c;
        case 0x439f60u: goto label_439f60;
        case 0x439f64u: goto label_439f64;
        case 0x439f68u: goto label_439f68;
        case 0x439f6cu: goto label_439f6c;
        case 0x439f70u: goto label_439f70;
        case 0x439f74u: goto label_439f74;
        case 0x439f78u: goto label_439f78;
        case 0x439f7cu: goto label_439f7c;
        case 0x439f80u: goto label_439f80;
        case 0x439f84u: goto label_439f84;
        case 0x439f88u: goto label_439f88;
        case 0x439f8cu: goto label_439f8c;
        case 0x439f90u: goto label_439f90;
        case 0x439f94u: goto label_439f94;
        case 0x439f98u: goto label_439f98;
        case 0x439f9cu: goto label_439f9c;
        case 0x439fa0u: goto label_439fa0;
        case 0x439fa4u: goto label_439fa4;
        case 0x439fa8u: goto label_439fa8;
        case 0x439facu: goto label_439fac;
        case 0x439fb0u: goto label_439fb0;
        case 0x439fb4u: goto label_439fb4;
        case 0x439fb8u: goto label_439fb8;
        case 0x439fbcu: goto label_439fbc;
        case 0x439fc0u: goto label_439fc0;
        case 0x439fc4u: goto label_439fc4;
        case 0x439fc8u: goto label_439fc8;
        case 0x439fccu: goto label_439fcc;
        case 0x439fd0u: goto label_439fd0;
        case 0x439fd4u: goto label_439fd4;
        case 0x439fd8u: goto label_439fd8;
        case 0x439fdcu: goto label_439fdc;
        case 0x439fe0u: goto label_439fe0;
        case 0x439fe4u: goto label_439fe4;
        case 0x439fe8u: goto label_439fe8;
        case 0x439fecu: goto label_439fec;
        case 0x439ff0u: goto label_439ff0;
        case 0x439ff4u: goto label_439ff4;
        case 0x439ff8u: goto label_439ff8;
        case 0x439ffcu: goto label_439ffc;
        case 0x43a000u: goto label_43a000;
        case 0x43a004u: goto label_43a004;
        case 0x43a008u: goto label_43a008;
        case 0x43a00cu: goto label_43a00c;
        case 0x43a010u: goto label_43a010;
        case 0x43a014u: goto label_43a014;
        case 0x43a018u: goto label_43a018;
        case 0x43a01cu: goto label_43a01c;
        case 0x43a020u: goto label_43a020;
        case 0x43a024u: goto label_43a024;
        case 0x43a028u: goto label_43a028;
        case 0x43a02cu: goto label_43a02c;
        case 0x43a030u: goto label_43a030;
        case 0x43a034u: goto label_43a034;
        case 0x43a038u: goto label_43a038;
        case 0x43a03cu: goto label_43a03c;
        case 0x43a040u: goto label_43a040;
        case 0x43a044u: goto label_43a044;
        case 0x43a048u: goto label_43a048;
        case 0x43a04cu: goto label_43a04c;
        case 0x43a050u: goto label_43a050;
        case 0x43a054u: goto label_43a054;
        case 0x43a058u: goto label_43a058;
        case 0x43a05cu: goto label_43a05c;
        case 0x43a060u: goto label_43a060;
        case 0x43a064u: goto label_43a064;
        case 0x43a068u: goto label_43a068;
        case 0x43a06cu: goto label_43a06c;
        case 0x43a070u: goto label_43a070;
        case 0x43a074u: goto label_43a074;
        case 0x43a078u: goto label_43a078;
        case 0x43a07cu: goto label_43a07c;
        case 0x43a080u: goto label_43a080;
        case 0x43a084u: goto label_43a084;
        case 0x43a088u: goto label_43a088;
        case 0x43a08cu: goto label_43a08c;
        case 0x43a090u: goto label_43a090;
        case 0x43a094u: goto label_43a094;
        case 0x43a098u: goto label_43a098;
        case 0x43a09cu: goto label_43a09c;
        case 0x43a0a0u: goto label_43a0a0;
        case 0x43a0a4u: goto label_43a0a4;
        case 0x43a0a8u: goto label_43a0a8;
        case 0x43a0acu: goto label_43a0ac;
        case 0x43a0b0u: goto label_43a0b0;
        case 0x43a0b4u: goto label_43a0b4;
        case 0x43a0b8u: goto label_43a0b8;
        case 0x43a0bcu: goto label_43a0bc;
        case 0x43a0c0u: goto label_43a0c0;
        case 0x43a0c4u: goto label_43a0c4;
        case 0x43a0c8u: goto label_43a0c8;
        case 0x43a0ccu: goto label_43a0cc;
        case 0x43a0d0u: goto label_43a0d0;
        case 0x43a0d4u: goto label_43a0d4;
        case 0x43a0d8u: goto label_43a0d8;
        case 0x43a0dcu: goto label_43a0dc;
        case 0x43a0e0u: goto label_43a0e0;
        case 0x43a0e4u: goto label_43a0e4;
        case 0x43a0e8u: goto label_43a0e8;
        case 0x43a0ecu: goto label_43a0ec;
        case 0x43a0f0u: goto label_43a0f0;
        case 0x43a0f4u: goto label_43a0f4;
        case 0x43a0f8u: goto label_43a0f8;
        case 0x43a0fcu: goto label_43a0fc;
        case 0x43a100u: goto label_43a100;
        case 0x43a104u: goto label_43a104;
        case 0x43a108u: goto label_43a108;
        case 0x43a10cu: goto label_43a10c;
        case 0x43a110u: goto label_43a110;
        case 0x43a114u: goto label_43a114;
        case 0x43a118u: goto label_43a118;
        case 0x43a11cu: goto label_43a11c;
        case 0x43a120u: goto label_43a120;
        case 0x43a124u: goto label_43a124;
        case 0x43a128u: goto label_43a128;
        case 0x43a12cu: goto label_43a12c;
        case 0x43a130u: goto label_43a130;
        case 0x43a134u: goto label_43a134;
        case 0x43a138u: goto label_43a138;
        case 0x43a13cu: goto label_43a13c;
        case 0x43a140u: goto label_43a140;
        case 0x43a144u: goto label_43a144;
        case 0x43a148u: goto label_43a148;
        case 0x43a14cu: goto label_43a14c;
        default: break;
    }

    ctx->pc = 0x439d50u;

label_439d50:
    // 0x439d50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x439d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_439d54:
    // 0x439d54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x439d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_439d58:
    // 0x439d58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x439d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_439d5c:
    // 0x439d5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x439d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_439d60:
    // 0x439d60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x439d60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_439d64:
    // 0x439d64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x439d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_439d68:
    // 0x439d68: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x439d68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_439d6c:
    // 0x439d6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x439d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_439d70:
    // 0x439d70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x439d70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439d74:
    // 0x439d74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x439d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_439d78:
    // 0x439d78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x439d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439d7c:
    // 0x439d7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x439d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_439d80:
    // 0x439d80: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x439d80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_439d84:
    // 0x439d84: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x439d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_439d88:
    // 0x439d88: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x439d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_439d8c:
    // 0x439d8c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x439d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_439d90:
    // 0x439d90: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x439d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_439d94:
    // 0x439d94: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x439d94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_439d98:
    // 0x439d98: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x439d98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_439d9c:
    // 0x439d9c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x439d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_439da0:
    // 0x439da0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x439da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_439da4:
    // 0x439da4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_439da8:
    if (ctx->pc == 0x439DA8u) {
        ctx->pc = 0x439DACu;
        goto label_439dac;
    }
    ctx->pc = 0x439DA4u;
    {
        const bool branch_taken_0x439da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x439da4) {
            ctx->pc = 0x439E08u;
            goto label_439e08;
        }
    }
    ctx->pc = 0x439DACu;
label_439dac:
    // 0x439dac: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x439dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_439db0:
    // 0x439db0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x439db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_439db4:
    // 0x439db4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_439db8:
    if (ctx->pc == 0x439DB8u) {
        ctx->pc = 0x439DBCu;
        goto label_439dbc;
    }
    ctx->pc = 0x439DB4u;
    {
        const bool branch_taken_0x439db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x439db4) {
            ctx->pc = 0x439E08u;
            goto label_439e08;
        }
    }
    ctx->pc = 0x439DBCu;
label_439dbc:
    // 0x439dbc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x439dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_439dc0:
    // 0x439dc0: 0x3c02fddf  lui         $v0, 0xFDDF
    ctx->pc = 0x439dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64991 << 16));
label_439dc4:
    // 0x439dc4: 0x3444fddf  ori         $a0, $v0, 0xFDDF
    ctx->pc = 0x439dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64991);
label_439dc8:
    // 0x439dc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x439dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439dcc:
    // 0x439dcc: 0x3c020220  lui         $v0, 0x220
    ctx->pc = 0x439dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)544 << 16));
label_439dd0:
    // 0x439dd0: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x439dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_439dd4:
    // 0x439dd4: 0x34430220  ori         $v1, $v0, 0x220
    ctx->pc = 0x439dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)544);
label_439dd8:
    // 0x439dd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x439dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_439ddc:
    // 0x439ddc: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x439ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_439de0:
    // 0x439de0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x439de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_439de4:
    // 0x439de4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x439de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_439de8:
    // 0x439de8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x439de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_439dec:
    // 0x439dec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x439decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_439df0:
    // 0x439df0: 0xc08bff0  jal         func_22FFC0
label_439df4:
    if (ctx->pc == 0x439DF4u) {
        ctx->pc = 0x439DF4u;
            // 0x439df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439DF8u;
        goto label_439df8;
    }
    ctx->pc = 0x439DF0u;
    SET_GPR_U32(ctx, 31, 0x439DF8u);
    ctx->pc = 0x439DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439DF0u;
            // 0x439df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439DF8u; }
        if (ctx->pc != 0x439DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439DF8u; }
        if (ctx->pc != 0x439DF8u) { return; }
    }
    ctx->pc = 0x439DF8u;
label_439df8:
    // 0x439df8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x439df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_439dfc:
    // 0x439dfc: 0xa2030068  sb          $v1, 0x68($s0)
    ctx->pc = 0x439dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
label_439e00:
    // 0x439e00: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x439e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_439e04:
    // 0x439e04: 0x0  nop
    ctx->pc = 0x439e04u;
    // NOP
label_439e08:
    // 0x439e08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x439e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_439e0c:
    // 0x439e0c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x439e0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_439e10:
    // 0x439e10: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_439e14:
    if (ctx->pc == 0x439E14u) {
        ctx->pc = 0x439E14u;
            // 0x439e14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x439E18u;
        goto label_439e18;
    }
    ctx->pc = 0x439E10u;
    {
        const bool branch_taken_0x439e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x439E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439E10u;
            // 0x439e14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e10) {
            ctx->pc = 0x439D84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439d84;
        }
    }
    ctx->pc = 0x439E18u;
label_439e18:
    // 0x439e18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x439e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_439e1c:
    // 0x439e1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x439e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_439e20:
    // 0x439e20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x439e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_439e24:
    // 0x439e24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x439e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_439e28:
    // 0x439e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x439e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_439e2c:
    // 0x439e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_439e30:
    // 0x439e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x439e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_439e34:
    // 0x439e34: 0x3e00008  jr          $ra
label_439e38:
    if (ctx->pc == 0x439E38u) {
        ctx->pc = 0x439E38u;
            // 0x439e38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x439E3Cu;
        goto label_439e3c;
    }
    ctx->pc = 0x439E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439E34u;
            // 0x439e38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439E3Cu;
label_439e3c:
    // 0x439e3c: 0x0  nop
    ctx->pc = 0x439e3cu;
    // NOP
label_439e40:
    // 0x439e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x439e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_439e44:
    // 0x439e44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x439e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_439e48:
    // 0x439e48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x439e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_439e4c:
    // 0x439e4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x439e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_439e50:
    // 0x439e50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x439e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_439e54:
    // 0x439e54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x439e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_439e58:
    // 0x439e58: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x439e58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_439e5c:
    // 0x439e5c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_439e60:
    if (ctx->pc == 0x439E60u) {
        ctx->pc = 0x439E60u;
            // 0x439e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439E64u;
        goto label_439e64;
    }
    ctx->pc = 0x439E5Cu;
    {
        const bool branch_taken_0x439e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x439E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439E5Cu;
            // 0x439e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e5c) {
            ctx->pc = 0x439E98u;
            goto label_439e98;
        }
    }
    ctx->pc = 0x439E64u;
label_439e64:
    // 0x439e64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x439e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439e68:
    // 0x439e68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x439e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439e6c:
    // 0x439e6c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x439e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_439e70:
    // 0x439e70: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x439e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_439e74:
    // 0x439e74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x439e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_439e78:
    // 0x439e78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x439e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_439e7c:
    // 0x439e7c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x439e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_439e80:
    // 0x439e80: 0x320f809  jalr        $t9
label_439e84:
    if (ctx->pc == 0x439E84u) {
        ctx->pc = 0x439E88u;
        goto label_439e88;
    }
    ctx->pc = 0x439E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x439E88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x439E88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x439E88u; }
            if (ctx->pc != 0x439E88u) { return; }
        }
        }
    }
    ctx->pc = 0x439E88u;
label_439e88:
    // 0x439e88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x439e88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_439e8c:
    // 0x439e8c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x439e8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_439e90:
    // 0x439e90: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_439e94:
    if (ctx->pc == 0x439E94u) {
        ctx->pc = 0x439E94u;
            // 0x439e94: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x439E98u;
        goto label_439e98;
    }
    ctx->pc = 0x439E90u;
    {
        const bool branch_taken_0x439e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x439E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439E90u;
            // 0x439e94: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439e90) {
            ctx->pc = 0x439E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439e6c;
        }
    }
    ctx->pc = 0x439E98u;
label_439e98:
    // 0x439e98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x439e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_439e9c:
    // 0x439e9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x439e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_439ea0:
    // 0x439ea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x439ea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_439ea4:
    // 0x439ea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_439ea8:
    // 0x439ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x439ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_439eac:
    // 0x439eac: 0x3e00008  jr          $ra
label_439eb0:
    if (ctx->pc == 0x439EB0u) {
        ctx->pc = 0x439EB0u;
            // 0x439eb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x439EB4u;
        goto label_439eb4;
    }
    ctx->pc = 0x439EACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439EACu;
            // 0x439eb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439EB4u;
label_439eb4:
    // 0x439eb4: 0x0  nop
    ctx->pc = 0x439eb4u;
    // NOP
label_439eb8:
    // 0x439eb8: 0x0  nop
    ctx->pc = 0x439eb8u;
    // NOP
label_439ebc:
    // 0x439ebc: 0x0  nop
    ctx->pc = 0x439ebcu;
    // NOP
label_439ec0:
    // 0x439ec0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x439ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_439ec4:
    // 0x439ec4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x439ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_439ec8:
    // 0x439ec8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x439ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_439ecc:
    // 0x439ecc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x439eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_439ed0:
    // 0x439ed0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x439ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_439ed4:
    // 0x439ed4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x439ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_439ed8:
    // 0x439ed8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x439ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_439edc:
    // 0x439edc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x439edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_439ee0:
    // 0x439ee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x439ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_439ee4:
    // 0x439ee4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x439ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_439ee8:
    // 0x439ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x439ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_439eec:
    // 0x439eec: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x439eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_439ef0:
    // 0x439ef0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x439ef0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_439ef4:
    // 0x439ef4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x439ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_439ef8:
    // 0x439ef8: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_439efc:
    if (ctx->pc == 0x439EFCu) {
        ctx->pc = 0x439EFCu;
            // 0x439efc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439F00u;
        goto label_439f00;
    }
    ctx->pc = 0x439EF8u;
    {
        const bool branch_taken_0x439ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x439EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439EF8u;
            // 0x439efc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439ef8) {
            ctx->pc = 0x439F4Cu;
            goto label_439f4c;
        }
    }
    ctx->pc = 0x439F00u;
label_439f00:
    // 0x439f00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x439f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_439f04:
    // 0x439f04: 0x50a30059  beql        $a1, $v1, . + 4 + (0x59 << 2)
label_439f08:
    if (ctx->pc == 0x439F08u) {
        ctx->pc = 0x439F08u;
            // 0x439f08: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x439F0Cu;
        goto label_439f0c;
    }
    ctx->pc = 0x439F04u;
    {
        const bool branch_taken_0x439f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x439f04) {
            ctx->pc = 0x439F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x439F04u;
            // 0x439f08: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A06Cu;
            goto label_43a06c;
        }
    }
    ctx->pc = 0x439F0Cu;
label_439f0c:
    // 0x439f0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x439f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_439f10:
    // 0x439f10: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_439f14:
    if (ctx->pc == 0x439F14u) {
        ctx->pc = 0x439F14u;
            // 0x439f14: 0x8cc50cb4  lw          $a1, 0xCB4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
        ctx->pc = 0x439F18u;
        goto label_439f18;
    }
    ctx->pc = 0x439F10u;
    {
        const bool branch_taken_0x439f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x439f10) {
            ctx->pc = 0x439F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x439F10u;
            // 0x439f14: 0x8cc50cb4  lw          $a1, 0xCB4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x439F20u;
            goto label_439f20;
        }
    }
    ctx->pc = 0x439F18u;
label_439f18:
    // 0x439f18: 0x10000053  b           . + 4 + (0x53 << 2)
label_439f1c:
    if (ctx->pc == 0x439F1Cu) {
        ctx->pc = 0x439F20u;
        goto label_439f20;
    }
    ctx->pc = 0x439F18u;
    {
        const bool branch_taken_0x439f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x439f18) {
            ctx->pc = 0x43A068u;
            goto label_43a068;
        }
    }
    ctx->pc = 0x439F20u;
label_439f20:
    // 0x439f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x439f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_439f24:
    // 0x439f24: 0x10a30050  beq         $a1, $v1, . + 4 + (0x50 << 2)
label_439f28:
    if (ctx->pc == 0x439F28u) {
        ctx->pc = 0x439F2Cu;
        goto label_439f2c;
    }
    ctx->pc = 0x439F24u;
    {
        const bool branch_taken_0x439f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x439f24) {
            ctx->pc = 0x43A068u;
            goto label_43a068;
        }
    }
    ctx->pc = 0x439F2Cu;
label_439f2c:
    // 0x439f2c: 0xc10e6ec  jal         func_439BB0
label_439f30:
    if (ctx->pc == 0x439F30u) {
        ctx->pc = 0x439F34u;
        goto label_439f34;
    }
    ctx->pc = 0x439F2Cu;
    SET_GPR_U32(ctx, 31, 0x439F34u);
    ctx->pc = 0x439BB0u;
    if (runtime->hasFunction(0x439BB0u)) {
        auto targetFn = runtime->lookupFunction(0x439BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439F34u; }
        if (ctx->pc != 0x439F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00439BB0_0x439bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439F34u; }
        if (ctx->pc != 0x439F34u) { return; }
    }
    ctx->pc = 0x439F34u;
label_439f34:
    // 0x439f34: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x439f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_439f38:
    // 0x439f38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x439f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_439f3c:
    // 0x439f3c: 0x320f809  jalr        $t9
label_439f40:
    if (ctx->pc == 0x439F40u) {
        ctx->pc = 0x439F40u;
            // 0x439f40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x439F44u;
        goto label_439f44;
    }
    ctx->pc = 0x439F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x439F44u);
        ctx->pc = 0x439F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439F3Cu;
            // 0x439f40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x439F44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x439F44u; }
            if (ctx->pc != 0x439F44u) { return; }
        }
        }
    }
    ctx->pc = 0x439F44u;
label_439f44:
    // 0x439f44: 0x10000048  b           . + 4 + (0x48 << 2)
label_439f48:
    if (ctx->pc == 0x439F48u) {
        ctx->pc = 0x439F4Cu;
        goto label_439f4c;
    }
    ctx->pc = 0x439F44u;
    {
        const bool branch_taken_0x439f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x439f44) {
            ctx->pc = 0x43A068u;
            goto label_43a068;
        }
    }
    ctx->pc = 0x439F4Cu;
label_439f4c:
    // 0x439f4c: 0x8eb10070  lw          $s1, 0x70($s5)
    ctx->pc = 0x439f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_439f50:
    // 0x439f50: 0x12200045  beqz        $s1, . + 4 + (0x45 << 2)
label_439f54:
    if (ctx->pc == 0x439F54u) {
        ctx->pc = 0x439F58u;
        goto label_439f58;
    }
    ctx->pc = 0x439F50u;
    {
        const bool branch_taken_0x439f50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x439f50) {
            ctx->pc = 0x43A068u;
            goto label_43a068;
        }
    }
    ctx->pc = 0x439F58u;
label_439f58:
    // 0x439f58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x439f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_439f5c:
    // 0x439f5c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x439f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_439f60:
    // 0x439f60: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x439f60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_439f64:
    // 0x439f64: 0x26b00084  addiu       $s0, $s5, 0x84
    ctx->pc = 0x439f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_439f68:
    // 0x439f68: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x439f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_439f6c:
    // 0x439f6c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x439f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_439f70:
    // 0x439f70: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x439f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_439f74:
    // 0x439f74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x439f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_439f78:
    // 0x439f78: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x439f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_439f7c:
    // 0x439f7c: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x439f7cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_439f80:
    // 0x439f80: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x439f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_439f84:
    // 0x439f84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x439f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_439f88:
    // 0x439f88: 0x92a20090  lbu         $v0, 0x90($s5)
    ctx->pc = 0x439f88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_439f8c:
    // 0x439f8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x439f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_439f90:
    // 0x439f90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x439f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_439f94:
    // 0x439f94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_439f98:
    if (ctx->pc == 0x439F98u) {
        ctx->pc = 0x439F98u;
            // 0x439f98: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x439F9Cu;
        goto label_439f9c;
    }
    ctx->pc = 0x439F94u;
    {
        const bool branch_taken_0x439f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439F94u;
            // 0x439f98: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439f94) {
            ctx->pc = 0x439FB4u;
            goto label_439fb4;
        }
    }
    ctx->pc = 0x439F9Cu;
label_439f9c:
    // 0x439f9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x439f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_439fa0:
    // 0x439fa0: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x439fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_439fa4:
    // 0x439fa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x439fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_439fa8:
    // 0x439fa8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x439fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_439fac:
    // 0x439fac: 0x320f809  jalr        $t9
label_439fb0:
    if (ctx->pc == 0x439FB0u) {
        ctx->pc = 0x439FB4u;
        goto label_439fb4;
    }
    ctx->pc = 0x439FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x439FB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x439FB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x439FB4u; }
            if (ctx->pc != 0x439FB4u) { return; }
        }
        }
    }
    ctx->pc = 0x439FB4u;
label_439fb4:
    // 0x439fb4: 0xc04e738  jal         func_139CE0
label_439fb8:
    if (ctx->pc == 0x439FB8u) {
        ctx->pc = 0x439FB8u;
            // 0x439fb8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x439FBCu;
        goto label_439fbc;
    }
    ctx->pc = 0x439FB4u;
    SET_GPR_U32(ctx, 31, 0x439FBCu);
    ctx->pc = 0x439FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439FB4u;
            // 0x439fb8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439FBCu; }
        if (ctx->pc != 0x439FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439FBCu; }
        if (ctx->pc != 0x439FBCu) { return; }
    }
    ctx->pc = 0x439FBCu;
label_439fbc:
    // 0x439fbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x439fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_439fc0:
    // 0x439fc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x439fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_439fc4:
    // 0x439fc4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x439fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_439fc8:
    // 0x439fc8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x439fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439fcc:
    // 0x439fcc: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x439fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_439fd0:
    // 0x439fd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x439fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_439fd4:
    // 0x439fd4: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x439fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_439fd8:
    // 0x439fd8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x439fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_439fdc:
    // 0x439fdc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x439fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_439fe0:
    // 0x439fe0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x439fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_439fe4:
    // 0x439fe4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x439fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_439fe8:
    // 0x439fe8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x439fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_439fec:
    // 0x439fec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x439fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_439ff0:
    // 0x439ff0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x439ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_439ff4:
    // 0x439ff4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x439ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_439ff8:
    // 0x439ff8: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x439ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_439ffc:
    // 0x439ffc: 0xc10ecc0  jal         func_43B300
label_43a000:
    if (ctx->pc == 0x43A000u) {
        ctx->pc = 0x43A000u;
            // 0x43a000: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x43A004u;
        goto label_43a004;
    }
    ctx->pc = 0x439FFCu;
    SET_GPR_U32(ctx, 31, 0x43A004u);
    ctx->pc = 0x43A000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439FFCu;
            // 0x43a000: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43B300u;
    if (runtime->hasFunction(0x43B300u)) {
        auto targetFn = runtime->lookupFunction(0x43B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A004u; }
        if (ctx->pc != 0x43A004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043B300_0x43b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A004u; }
        if (ctx->pc != 0x43A004u) { return; }
    }
    ctx->pc = 0x43A004u;
label_43a004:
    // 0x43a004: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x43a004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_43a008:
    // 0x43a008: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x43a008u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43a00c:
    // 0x43a00c: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_43a010:
    if (ctx->pc == 0x43A010u) {
        ctx->pc = 0x43A010u;
            // 0x43a010: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x43A014u;
        goto label_43a014;
    }
    ctx->pc = 0x43A00Cu;
    {
        const bool branch_taken_0x43a00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A00Cu;
            // 0x43a010: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a00c) {
            ctx->pc = 0x439FD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_439fd4;
        }
    }
    ctx->pc = 0x43A014u;
label_43a014:
    // 0x43a014: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43a014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43a018:
    // 0x43a018: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x43a018u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_43a01c:
    // 0x43a01c: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_43a020:
    if (ctx->pc == 0x43A020u) {
        ctx->pc = 0x43A020u;
            // 0x43a020: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x43A024u;
        goto label_43a024;
    }
    ctx->pc = 0x43A01Cu;
    {
        const bool branch_taken_0x43a01c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x43A020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A01Cu;
            // 0x43a020: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a01c) {
            ctx->pc = 0x43A044u;
            goto label_43a044;
        }
    }
    ctx->pc = 0x43A024u;
label_43a024:
    // 0x43a024: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43a024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43a028:
    // 0x43a028: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43a028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43a02c:
    // 0x43a02c: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x43a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_43a030:
    // 0x43a030: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x43a030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_43a034:
    // 0x43a034: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x43a034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_43a038:
    // 0x43a038: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x43a038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_43a03c:
    // 0x43a03c: 0xc055ea8  jal         func_157AA0
label_43a040:
    if (ctx->pc == 0x43A040u) {
        ctx->pc = 0x43A040u;
            // 0x43a040: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A044u;
        goto label_43a044;
    }
    ctx->pc = 0x43A03Cu;
    SET_GPR_U32(ctx, 31, 0x43A044u);
    ctx->pc = 0x43A040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A03Cu;
            // 0x43a040: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A044u; }
        if (ctx->pc != 0x43A044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A044u; }
        if (ctx->pc != 0x43A044u) { return; }
    }
    ctx->pc = 0x43A044u;
label_43a044:
    // 0x43a044: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x43a044u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_43a048:
    // 0x43a048: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_43a04c:
    if (ctx->pc == 0x43A04Cu) {
        ctx->pc = 0x43A050u;
        goto label_43a050;
    }
    ctx->pc = 0x43A048u;
    {
        const bool branch_taken_0x43a048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a048) {
            ctx->pc = 0x43A068u;
            goto label_43a068;
        }
    }
    ctx->pc = 0x43A050u;
label_43a050:
    // 0x43a050: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43a050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43a054:
    // 0x43a054: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x43a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_43a058:
    // 0x43a058: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43a058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43a05c:
    // 0x43a05c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x43a05cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_43a060:
    // 0x43a060: 0x320f809  jalr        $t9
label_43a064:
    if (ctx->pc == 0x43A064u) {
        ctx->pc = 0x43A068u;
        goto label_43a068;
    }
    ctx->pc = 0x43A060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43A068u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43A068u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43A068u; }
            if (ctx->pc != 0x43A068u) { return; }
        }
        }
    }
    ctx->pc = 0x43A068u;
label_43a068:
    // 0x43a068: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x43a068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_43a06c:
    // 0x43a06c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x43a06cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43a070:
    // 0x43a070: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x43a070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43a074:
    // 0x43a074: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43a074u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43a078:
    // 0x43a078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43a078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43a07c:
    // 0x43a07c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43a07cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43a080:
    // 0x43a080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43a080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43a084:
    // 0x43a084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43a084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43a088:
    // 0x43a088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43a088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43a08c:
    // 0x43a08c: 0x3e00008  jr          $ra
label_43a090:
    if (ctx->pc == 0x43A090u) {
        ctx->pc = 0x43A090u;
            // 0x43a090: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x43A094u;
        goto label_43a094;
    }
    ctx->pc = 0x43A08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A08Cu;
            // 0x43a090: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43A094u;
label_43a094:
    // 0x43a094: 0x0  nop
    ctx->pc = 0x43a094u;
    // NOP
label_43a098:
    // 0x43a098: 0x0  nop
    ctx->pc = 0x43a098u;
    // NOP
label_43a09c:
    // 0x43a09c: 0x0  nop
    ctx->pc = 0x43a09cu;
    // NOP
label_43a0a0:
    // 0x43a0a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_43a0a4:
    // 0x43a0a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43a0a8:
    // 0x43a0a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43a0ac:
    // 0x43a0ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43a0b0:
    // 0x43a0b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43a0b4:
    // 0x43a0b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43a0b8:
    // 0x43a0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43a0bc:
    // 0x43a0bc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x43a0bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_43a0c0:
    // 0x43a0c0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_43a0c4:
    if (ctx->pc == 0x43A0C4u) {
        ctx->pc = 0x43A0C4u;
            // 0x43a0c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43A0C8u;
        goto label_43a0c8;
    }
    ctx->pc = 0x43A0C0u;
    {
        const bool branch_taken_0x43a0c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x43A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A0C0u;
            // 0x43a0c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a0c0) {
            ctx->pc = 0x43A0F4u;
            goto label_43a0f4;
        }
    }
    ctx->pc = 0x43A0C8u;
label_43a0c8:
    // 0x43a0c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x43a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43a0cc:
    // 0x43a0cc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_43a0d0:
    if (ctx->pc == 0x43A0D0u) {
        ctx->pc = 0x43A0D0u;
            // 0x43a0d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43A0D4u;
        goto label_43a0d4;
    }
    ctx->pc = 0x43A0CCu;
    {
        const bool branch_taken_0x43a0cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43a0cc) {
            ctx->pc = 0x43A0D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43A0CCu;
            // 0x43a0d0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A0E8u;
            goto label_43a0e8;
        }
    }
    ctx->pc = 0x43A0D4u;
label_43a0d4:
    // 0x43a0d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43a0d8:
    // 0x43a0d8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_43a0dc:
    if (ctx->pc == 0x43A0DCu) {
        ctx->pc = 0x43A0E0u;
        goto label_43a0e0;
    }
    ctx->pc = 0x43A0D8u;
    {
        const bool branch_taken_0x43a0d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43a0d8) {
            ctx->pc = 0x43A128u;
            goto label_43a128;
        }
    }
    ctx->pc = 0x43A0E0u;
label_43a0e0:
    // 0x43a0e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_43a0e4:
    if (ctx->pc == 0x43A0E4u) {
        ctx->pc = 0x43A0E8u;
        goto label_43a0e8;
    }
    ctx->pc = 0x43A0E0u;
    {
        const bool branch_taken_0x43a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a0e0) {
            ctx->pc = 0x43A128u;
            goto label_43a128;
        }
    }
    ctx->pc = 0x43A0E8u;
label_43a0e8:
    // 0x43a0e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x43a0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_43a0ec:
    // 0x43a0ec: 0x320f809  jalr        $t9
label_43a0f0:
    if (ctx->pc == 0x43A0F0u) {
        ctx->pc = 0x43A0F4u;
        goto label_43a0f4;
    }
    ctx->pc = 0x43A0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43A0F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43A0F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43A0F4u; }
            if (ctx->pc != 0x43A0F4u) { return; }
        }
        }
    }
    ctx->pc = 0x43A0F4u;
label_43a0f4:
    // 0x43a0f4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x43a0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_43a0f8:
    // 0x43a0f8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_43a0fc:
    if (ctx->pc == 0x43A0FCu) {
        ctx->pc = 0x43A100u;
        goto label_43a100;
    }
    ctx->pc = 0x43A0F8u;
    {
        const bool branch_taken_0x43a0f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a0f8) {
            ctx->pc = 0x43A128u;
            goto label_43a128;
        }
    }
    ctx->pc = 0x43A100u;
label_43a100:
    // 0x43a100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43a100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43a104:
    // 0x43a104: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43a104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43a108:
    // 0x43a108: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x43a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_43a10c:
    // 0x43a10c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x43a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_43a110:
    // 0x43a110: 0xc0e3658  jal         func_38D960
label_43a114:
    if (ctx->pc == 0x43A114u) {
        ctx->pc = 0x43A114u;
            // 0x43a114: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x43A118u;
        goto label_43a118;
    }
    ctx->pc = 0x43A110u;
    SET_GPR_U32(ctx, 31, 0x43A118u);
    ctx->pc = 0x43A114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A110u;
            // 0x43a114: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A118u; }
        if (ctx->pc != 0x43A118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A118u; }
        if (ctx->pc != 0x43A118u) { return; }
    }
    ctx->pc = 0x43A118u;
label_43a118:
    // 0x43a118: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x43a118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_43a11c:
    // 0x43a11c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x43a11cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43a120:
    // 0x43a120: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_43a124:
    if (ctx->pc == 0x43A124u) {
        ctx->pc = 0x43A124u;
            // 0x43a124: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x43A128u;
        goto label_43a128;
    }
    ctx->pc = 0x43A120u;
    {
        const bool branch_taken_0x43a120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A120u;
            // 0x43a124: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a120) {
            ctx->pc = 0x43A108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43a108;
        }
    }
    ctx->pc = 0x43A128u;
label_43a128:
    // 0x43a128: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43a128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43a12c:
    // 0x43a12c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43a12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43a130:
    // 0x43a130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43a130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43a134:
    // 0x43a134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43a134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43a138:
    // 0x43a138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43a138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43a13c:
    // 0x43a13c: 0x3e00008  jr          $ra
label_43a140:
    if (ctx->pc == 0x43A140u) {
        ctx->pc = 0x43A140u;
            // 0x43a140: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43A144u;
        goto label_43a144;
    }
    ctx->pc = 0x43A13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A13Cu;
            // 0x43a140: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43A144u;
label_43a144:
    // 0x43a144: 0x0  nop
    ctx->pc = 0x43a144u;
    // NOP
label_43a148:
    // 0x43a148: 0x0  nop
    ctx->pc = 0x43a148u;
    // NOP
label_43a14c:
    // 0x43a14c: 0x0  nop
    ctx->pc = 0x43a14cu;
    // NOP
}
