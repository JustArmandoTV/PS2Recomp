#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00546D40
// Address: 0x546d40 - 0x547070
void sub_00546D40_0x546d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00546D40_0x546d40");
#endif

    switch (ctx->pc) {
        case 0x546d40u: goto label_546d40;
        case 0x546d44u: goto label_546d44;
        case 0x546d48u: goto label_546d48;
        case 0x546d4cu: goto label_546d4c;
        case 0x546d50u: goto label_546d50;
        case 0x546d54u: goto label_546d54;
        case 0x546d58u: goto label_546d58;
        case 0x546d5cu: goto label_546d5c;
        case 0x546d60u: goto label_546d60;
        case 0x546d64u: goto label_546d64;
        case 0x546d68u: goto label_546d68;
        case 0x546d6cu: goto label_546d6c;
        case 0x546d70u: goto label_546d70;
        case 0x546d74u: goto label_546d74;
        case 0x546d78u: goto label_546d78;
        case 0x546d7cu: goto label_546d7c;
        case 0x546d80u: goto label_546d80;
        case 0x546d84u: goto label_546d84;
        case 0x546d88u: goto label_546d88;
        case 0x546d8cu: goto label_546d8c;
        case 0x546d90u: goto label_546d90;
        case 0x546d94u: goto label_546d94;
        case 0x546d98u: goto label_546d98;
        case 0x546d9cu: goto label_546d9c;
        case 0x546da0u: goto label_546da0;
        case 0x546da4u: goto label_546da4;
        case 0x546da8u: goto label_546da8;
        case 0x546dacu: goto label_546dac;
        case 0x546db0u: goto label_546db0;
        case 0x546db4u: goto label_546db4;
        case 0x546db8u: goto label_546db8;
        case 0x546dbcu: goto label_546dbc;
        case 0x546dc0u: goto label_546dc0;
        case 0x546dc4u: goto label_546dc4;
        case 0x546dc8u: goto label_546dc8;
        case 0x546dccu: goto label_546dcc;
        case 0x546dd0u: goto label_546dd0;
        case 0x546dd4u: goto label_546dd4;
        case 0x546dd8u: goto label_546dd8;
        case 0x546ddcu: goto label_546ddc;
        case 0x546de0u: goto label_546de0;
        case 0x546de4u: goto label_546de4;
        case 0x546de8u: goto label_546de8;
        case 0x546decu: goto label_546dec;
        case 0x546df0u: goto label_546df0;
        case 0x546df4u: goto label_546df4;
        case 0x546df8u: goto label_546df8;
        case 0x546dfcu: goto label_546dfc;
        case 0x546e00u: goto label_546e00;
        case 0x546e04u: goto label_546e04;
        case 0x546e08u: goto label_546e08;
        case 0x546e0cu: goto label_546e0c;
        case 0x546e10u: goto label_546e10;
        case 0x546e14u: goto label_546e14;
        case 0x546e18u: goto label_546e18;
        case 0x546e1cu: goto label_546e1c;
        case 0x546e20u: goto label_546e20;
        case 0x546e24u: goto label_546e24;
        case 0x546e28u: goto label_546e28;
        case 0x546e2cu: goto label_546e2c;
        case 0x546e30u: goto label_546e30;
        case 0x546e34u: goto label_546e34;
        case 0x546e38u: goto label_546e38;
        case 0x546e3cu: goto label_546e3c;
        case 0x546e40u: goto label_546e40;
        case 0x546e44u: goto label_546e44;
        case 0x546e48u: goto label_546e48;
        case 0x546e4cu: goto label_546e4c;
        case 0x546e50u: goto label_546e50;
        case 0x546e54u: goto label_546e54;
        case 0x546e58u: goto label_546e58;
        case 0x546e5cu: goto label_546e5c;
        case 0x546e60u: goto label_546e60;
        case 0x546e64u: goto label_546e64;
        case 0x546e68u: goto label_546e68;
        case 0x546e6cu: goto label_546e6c;
        case 0x546e70u: goto label_546e70;
        case 0x546e74u: goto label_546e74;
        case 0x546e78u: goto label_546e78;
        case 0x546e7cu: goto label_546e7c;
        case 0x546e80u: goto label_546e80;
        case 0x546e84u: goto label_546e84;
        case 0x546e88u: goto label_546e88;
        case 0x546e8cu: goto label_546e8c;
        case 0x546e90u: goto label_546e90;
        case 0x546e94u: goto label_546e94;
        case 0x546e98u: goto label_546e98;
        case 0x546e9cu: goto label_546e9c;
        case 0x546ea0u: goto label_546ea0;
        case 0x546ea4u: goto label_546ea4;
        case 0x546ea8u: goto label_546ea8;
        case 0x546eacu: goto label_546eac;
        case 0x546eb0u: goto label_546eb0;
        case 0x546eb4u: goto label_546eb4;
        case 0x546eb8u: goto label_546eb8;
        case 0x546ebcu: goto label_546ebc;
        case 0x546ec0u: goto label_546ec0;
        case 0x546ec4u: goto label_546ec4;
        case 0x546ec8u: goto label_546ec8;
        case 0x546eccu: goto label_546ecc;
        case 0x546ed0u: goto label_546ed0;
        case 0x546ed4u: goto label_546ed4;
        case 0x546ed8u: goto label_546ed8;
        case 0x546edcu: goto label_546edc;
        case 0x546ee0u: goto label_546ee0;
        case 0x546ee4u: goto label_546ee4;
        case 0x546ee8u: goto label_546ee8;
        case 0x546eecu: goto label_546eec;
        case 0x546ef0u: goto label_546ef0;
        case 0x546ef4u: goto label_546ef4;
        case 0x546ef8u: goto label_546ef8;
        case 0x546efcu: goto label_546efc;
        case 0x546f00u: goto label_546f00;
        case 0x546f04u: goto label_546f04;
        case 0x546f08u: goto label_546f08;
        case 0x546f0cu: goto label_546f0c;
        case 0x546f10u: goto label_546f10;
        case 0x546f14u: goto label_546f14;
        case 0x546f18u: goto label_546f18;
        case 0x546f1cu: goto label_546f1c;
        case 0x546f20u: goto label_546f20;
        case 0x546f24u: goto label_546f24;
        case 0x546f28u: goto label_546f28;
        case 0x546f2cu: goto label_546f2c;
        case 0x546f30u: goto label_546f30;
        case 0x546f34u: goto label_546f34;
        case 0x546f38u: goto label_546f38;
        case 0x546f3cu: goto label_546f3c;
        case 0x546f40u: goto label_546f40;
        case 0x546f44u: goto label_546f44;
        case 0x546f48u: goto label_546f48;
        case 0x546f4cu: goto label_546f4c;
        case 0x546f50u: goto label_546f50;
        case 0x546f54u: goto label_546f54;
        case 0x546f58u: goto label_546f58;
        case 0x546f5cu: goto label_546f5c;
        case 0x546f60u: goto label_546f60;
        case 0x546f64u: goto label_546f64;
        case 0x546f68u: goto label_546f68;
        case 0x546f6cu: goto label_546f6c;
        case 0x546f70u: goto label_546f70;
        case 0x546f74u: goto label_546f74;
        case 0x546f78u: goto label_546f78;
        case 0x546f7cu: goto label_546f7c;
        case 0x546f80u: goto label_546f80;
        case 0x546f84u: goto label_546f84;
        case 0x546f88u: goto label_546f88;
        case 0x546f8cu: goto label_546f8c;
        case 0x546f90u: goto label_546f90;
        case 0x546f94u: goto label_546f94;
        case 0x546f98u: goto label_546f98;
        case 0x546f9cu: goto label_546f9c;
        case 0x546fa0u: goto label_546fa0;
        case 0x546fa4u: goto label_546fa4;
        case 0x546fa8u: goto label_546fa8;
        case 0x546facu: goto label_546fac;
        case 0x546fb0u: goto label_546fb0;
        case 0x546fb4u: goto label_546fb4;
        case 0x546fb8u: goto label_546fb8;
        case 0x546fbcu: goto label_546fbc;
        case 0x546fc0u: goto label_546fc0;
        case 0x546fc4u: goto label_546fc4;
        case 0x546fc8u: goto label_546fc8;
        case 0x546fccu: goto label_546fcc;
        case 0x546fd0u: goto label_546fd0;
        case 0x546fd4u: goto label_546fd4;
        case 0x546fd8u: goto label_546fd8;
        case 0x546fdcu: goto label_546fdc;
        case 0x546fe0u: goto label_546fe0;
        case 0x546fe4u: goto label_546fe4;
        case 0x546fe8u: goto label_546fe8;
        case 0x546fecu: goto label_546fec;
        case 0x546ff0u: goto label_546ff0;
        case 0x546ff4u: goto label_546ff4;
        case 0x546ff8u: goto label_546ff8;
        case 0x546ffcu: goto label_546ffc;
        case 0x547000u: goto label_547000;
        case 0x547004u: goto label_547004;
        case 0x547008u: goto label_547008;
        case 0x54700cu: goto label_54700c;
        case 0x547010u: goto label_547010;
        case 0x547014u: goto label_547014;
        case 0x547018u: goto label_547018;
        case 0x54701cu: goto label_54701c;
        case 0x547020u: goto label_547020;
        case 0x547024u: goto label_547024;
        case 0x547028u: goto label_547028;
        case 0x54702cu: goto label_54702c;
        case 0x547030u: goto label_547030;
        case 0x547034u: goto label_547034;
        case 0x547038u: goto label_547038;
        case 0x54703cu: goto label_54703c;
        case 0x547040u: goto label_547040;
        case 0x547044u: goto label_547044;
        case 0x547048u: goto label_547048;
        case 0x54704cu: goto label_54704c;
        case 0x547050u: goto label_547050;
        case 0x547054u: goto label_547054;
        case 0x547058u: goto label_547058;
        case 0x54705cu: goto label_54705c;
        case 0x547060u: goto label_547060;
        case 0x547064u: goto label_547064;
        case 0x547068u: goto label_547068;
        case 0x54706cu: goto label_54706c;
        default: break;
    }

    ctx->pc = 0x546d40u;

label_546d40:
    // 0x546d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x546d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_546d44:
    // 0x546d44: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x546d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_546d48:
    // 0x546d48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x546d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_546d4c:
    // 0x546d4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x546d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_546d50:
    // 0x546d50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x546d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_546d54:
    // 0x546d54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x546d54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_546d58:
    // 0x546d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x546d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_546d5c:
    // 0x546d5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x546d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_546d60:
    // 0x546d60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x546d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_546d64:
    // 0x546d64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x546d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_546d68:
    // 0x546d68: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x546d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_546d6c:
    // 0x546d6c: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x546d6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_546d70:
    // 0x546d70: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x546d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_546d74:
    // 0x546d74: 0xc10ca68  jal         func_4329A0
label_546d78:
    if (ctx->pc == 0x546D78u) {
        ctx->pc = 0x546D78u;
            // 0x546d78: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x546D7Cu;
        goto label_546d7c;
    }
    ctx->pc = 0x546D74u;
    SET_GPR_U32(ctx, 31, 0x546D7Cu);
    ctx->pc = 0x546D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546D74u;
            // 0x546d78: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546D7Cu; }
        if (ctx->pc != 0x546D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546D7Cu; }
        if (ctx->pc != 0x546D7Cu) { return; }
    }
    ctx->pc = 0x546D7Cu;
label_546d7c:
    // 0x546d7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x546d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_546d80:
    // 0x546d80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x546d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_546d84:
    // 0x546d84: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x546d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_546d88:
    // 0x546d88: 0x24427870  addiu       $v0, $v0, 0x7870
    ctx->pc = 0x546d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30832));
label_546d8c:
    // 0x546d8c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x546d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_546d90:
    // 0x546d90: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x546d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_546d94:
    // 0x546d94: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x546d94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_546d98:
    // 0x546d98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x546d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_546d9c:
    // 0x546d9c: 0xae600054  sw          $zero, 0x54($s3)
    ctx->pc = 0x546d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
label_546da0:
    // 0x546da0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x546da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_546da4:
    // 0x546da4: 0xae720058  sw          $s2, 0x58($s3)
    ctx->pc = 0x546da4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 18));
label_546da8:
    // 0x546da8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x546da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_546dac:
    // 0x546dac: 0xae71005c  sw          $s1, 0x5C($s3)
    ctx->pc = 0x546dacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 17));
label_546db0:
    // 0x546db0: 0xae700060  sw          $s0, 0x60($s3)
    ctx->pc = 0x546db0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 16));
label_546db4:
    // 0x546db4: 0xae640074  sw          $a0, 0x74($s3)
    ctx->pc = 0x546db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 4));
label_546db8:
    // 0x546db8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x546db8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_546dbc:
    // 0x546dbc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x546dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_546dc0:
    // 0x546dc0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x546dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_546dc4:
    // 0x546dc4: 0xae630084  sw          $v1, 0x84($s3)
    ctx->pc = 0x546dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 3));
label_546dc8:
    // 0x546dc8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x546dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_546dcc:
    // 0x546dcc: 0x8c430eac  lw          $v1, 0xEAC($v0)
    ctx->pc = 0x546dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_546dd0:
    // 0x546dd0: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x546dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_546dd4:
    // 0x546dd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x546dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_546dd8:
    // 0x546dd8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x546dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_546ddc:
    // 0x546ddc: 0x8ce50094  lw          $a1, 0x94($a3)
    ctx->pc = 0x546ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
label_546de0:
    // 0x546de0: 0x8ce4009c  lw          $a0, 0x9C($a3)
    ctx->pc = 0x546de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
label_546de4:
    // 0x546de4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x546de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_546de8:
    // 0x546de8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x546de8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_546dec:
    // 0x546dec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x546decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_546df0:
    // 0x546df0: 0xae640064  sw          $a0, 0x64($s3)
    ctx->pc = 0x546df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
label_546df4:
    // 0x546df4: 0x8ce50098  lw          $a1, 0x98($a3)
    ctx->pc = 0x546df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
label_546df8:
    // 0x546df8: 0x8ce400a0  lw          $a0, 0xA0($a3)
    ctx->pc = 0x546df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
label_546dfc:
    // 0x546dfc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x546dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_546e00:
    // 0x546e00: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x546e00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_546e04:
    // 0x546e04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x546e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_546e08:
    // 0x546e08: 0xae640068  sw          $a0, 0x68($s3)
    ctx->pc = 0x546e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 4));
label_546e0c:
    // 0x546e0c: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x546e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_546e10:
    // 0x546e10: 0x10860009  beq         $a0, $a2, . + 4 + (0x9 << 2)
label_546e14:
    if (ctx->pc == 0x546E14u) {
        ctx->pc = 0x546E14u;
            // 0x546e14: 0x24e20094  addiu       $v0, $a3, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 148));
        ctx->pc = 0x546E18u;
        goto label_546e18;
    }
    ctx->pc = 0x546E10u;
    {
        const bool branch_taken_0x546e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x546E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546E10u;
            // 0x546e14: 0x24e20094  addiu       $v0, $a3, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546e10) {
            ctx->pc = 0x546E38u;
            goto label_546e38;
        }
    }
    ctx->pc = 0x546E18u;
label_546e18:
    // 0x546e18: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_546e1c:
    if (ctx->pc == 0x546E1Cu) {
        ctx->pc = 0x546E1Cu;
            // 0x546e1c: 0x8e620064  lw          $v0, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->pc = 0x546E20u;
        goto label_546e20;
    }
    ctx->pc = 0x546E18u;
    {
        const bool branch_taken_0x546e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x546e18) {
            ctx->pc = 0x546E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546E18u;
            // 0x546e1c: 0x8e620064  lw          $v0, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546E28u;
            goto label_546e28;
        }
    }
    ctx->pc = 0x546E20u;
label_546e20:
    // 0x546e20: 0x1000002c  b           . + 4 + (0x2C << 2)
label_546e24:
    if (ctx->pc == 0x546E24u) {
        ctx->pc = 0x546E24u;
            // 0x546e24: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x546E28u;
        goto label_546e28;
    }
    ctx->pc = 0x546E20u;
    {
        const bool branch_taken_0x546e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546E20u;
            // 0x546e24: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546e20) {
            ctx->pc = 0x546ED4u;
            goto label_546ed4;
        }
    }
    ctx->pc = 0x546E28u;
label_546e28:
    // 0x546e28: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x546e28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
label_546e2c:
    // 0x546e2c: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x546e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_546e30:
    // 0x546e30: 0x1000002c  b           . + 4 + (0x2C << 2)
label_546e34:
    if (ctx->pc == 0x546E34u) {
        ctx->pc = 0x546E34u;
            // 0x546e34: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x546E38u;
        goto label_546e38;
    }
    ctx->pc = 0x546E30u;
    {
        const bool branch_taken_0x546e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546E30u;
            // 0x546e34: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546e30) {
            ctx->pc = 0x546EE4u;
            goto label_546ee4;
        }
    }
    ctx->pc = 0x546E38u;
label_546e38:
    // 0x546e38: 0x8c650110  lw          $a1, 0x110($v1)
    ctx->pc = 0x546e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_546e3c:
    // 0x546e3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x546e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_546e40:
    // 0x546e40: 0x50a40013  beql        $a1, $a0, . + 4 + (0x13 << 2)
label_546e44:
    if (ctx->pc == 0x546E44u) {
        ctx->pc = 0x546E44u;
            // 0x546e44: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x546E48u;
        goto label_546e48;
    }
    ctx->pc = 0x546E40u;
    {
        const bool branch_taken_0x546e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x546e40) {
            ctx->pc = 0x546E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546E40u;
            // 0x546e44: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546E90u;
            goto label_546e90;
        }
    }
    ctx->pc = 0x546E48u;
label_546e48:
    // 0x546e48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x546e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_546e4c:
    // 0x546e4c: 0x10a4000f  beq         $a1, $a0, . + 4 + (0xF << 2)
label_546e50:
    if (ctx->pc == 0x546E50u) {
        ctx->pc = 0x546E54u;
        goto label_546e54;
    }
    ctx->pc = 0x546E4Cu;
    {
        const bool branch_taken_0x546e4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x546e4c) {
            ctx->pc = 0x546E8Cu;
            goto label_546e8c;
        }
    }
    ctx->pc = 0x546E54u;
label_546e54:
    // 0x546e54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x546e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_546e58:
    // 0x546e58: 0x50a40006  beql        $a1, $a0, . + 4 + (0x6 << 2)
label_546e5c:
    if (ctx->pc == 0x546E5Cu) {
        ctx->pc = 0x546E5Cu;
            // 0x546e5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x546E60u;
        goto label_546e60;
    }
    ctx->pc = 0x546E58u;
    {
        const bool branch_taken_0x546e58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x546e58) {
            ctx->pc = 0x546E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546E58u;
            // 0x546e5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546E74u;
            goto label_546e74;
        }
    }
    ctx->pc = 0x546E60u;
label_546e60:
    // 0x546e60: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
label_546e64:
    if (ctx->pc == 0x546E64u) {
        ctx->pc = 0x546E68u;
        goto label_546e68;
    }
    ctx->pc = 0x546E60u;
    {
        const bool branch_taken_0x546e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x546e60) {
            ctx->pc = 0x546E70u;
            goto label_546e70;
        }
    }
    ctx->pc = 0x546E68u;
label_546e68:
    // 0x546e68: 0x1000001f  b           . + 4 + (0x1F << 2)
label_546e6c:
    if (ctx->pc == 0x546E6Cu) {
        ctx->pc = 0x546E6Cu;
            // 0x546e6c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546E70u;
        goto label_546e70;
    }
    ctx->pc = 0x546E68u;
    {
        const bool branch_taken_0x546e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546E68u;
            // 0x546e6c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546e68) {
            ctx->pc = 0x546EE8u;
            goto label_546ee8;
        }
    }
    ctx->pc = 0x546E70u;
label_546e70:
    // 0x546e70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x546e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_546e74:
    // 0x546e74: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x546e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_546e78:
    // 0x546e78: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x546e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_546e7c:
    // 0x546e7c: 0xae62006c  sw          $v0, 0x6C($s3)
    ctx->pc = 0x546e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
label_546e80:
    // 0x546e80: 0x8e620068  lw          $v0, 0x68($s3)
    ctx->pc = 0x546e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_546e84:
    // 0x546e84: 0x10000017  b           . + 4 + (0x17 << 2)
label_546e88:
    if (ctx->pc == 0x546E88u) {
        ctx->pc = 0x546E88u;
            // 0x546e88: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x546E8Cu;
        goto label_546e8c;
    }
    ctx->pc = 0x546E84u;
    {
        const bool branch_taken_0x546e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546E84u;
            // 0x546e88: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546e84) {
            ctx->pc = 0x546EE4u;
            goto label_546ee4;
        }
    }
    ctx->pc = 0x546E8Cu;
label_546e8c:
    // 0x546e8c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x546e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_546e90:
    // 0x546e90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x546e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_546e94:
    // 0x546e94: 0x8c650078  lw          $a1, 0x78($v1)
    ctx->pc = 0x546e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_546e98:
    // 0x546e98: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x546e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_546e9c:
    // 0x546e9c: 0xae65006c  sw          $a1, 0x6C($s3)
    ctx->pc = 0x546e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 5));
label_546ea0:
    // 0x546ea0: 0x8e650068  lw          $a1, 0x68($s3)
    ctx->pc = 0x546ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_546ea4:
    // 0x546ea4: 0xae650070  sw          $a1, 0x70($s3)
    ctx->pc = 0x546ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 5));
label_546ea8:
    // 0x546ea8: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x546ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_546eac:
    // 0x546eac: 0x50a40005  beql        $a1, $a0, . + 4 + (0x5 << 2)
label_546eb0:
    if (ctx->pc == 0x546EB0u) {
        ctx->pc = 0x546EB0u;
            // 0x546eb0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x546EB4u;
        goto label_546eb4;
    }
    ctx->pc = 0x546EACu;
    {
        const bool branch_taken_0x546eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x546eac) {
            ctx->pc = 0x546EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546EACu;
            // 0x546eb0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546EC4u;
            goto label_546ec4;
        }
    }
    ctx->pc = 0x546EB4u;
label_546eb4:
    // 0x546eb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x546eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_546eb8:
    // 0x546eb8: 0x14a4000a  bne         $a1, $a0, . + 4 + (0xA << 2)
label_546ebc:
    if (ctx->pc == 0x546EBCu) {
        ctx->pc = 0x546EC0u;
        goto label_546ec0;
    }
    ctx->pc = 0x546EB8u;
    {
        const bool branch_taken_0x546eb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x546eb8) {
            ctx->pc = 0x546EE4u;
            goto label_546ee4;
        }
    }
    ctx->pc = 0x546EC0u;
label_546ec0:
    // 0x546ec0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x546ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_546ec4:
    // 0x546ec4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x546ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_546ec8:
    // 0x546ec8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x546ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_546ecc:
    // 0x546ecc: 0x10000005  b           . + 4 + (0x5 << 2)
label_546ed0:
    if (ctx->pc == 0x546ED0u) {
        ctx->pc = 0x546ED0u;
            // 0x546ed0: 0xae62006c  sw          $v0, 0x6C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x546ED4u;
        goto label_546ed4;
    }
    ctx->pc = 0x546ECCu;
    {
        const bool branch_taken_0x546ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546ECCu;
            // 0x546ed0: 0xae62006c  sw          $v0, 0x6C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546ecc) {
            ctx->pc = 0x546EE4u;
            goto label_546ee4;
        }
    }
    ctx->pc = 0x546ED4u;
label_546ed4:
    // 0x546ed4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x546ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_546ed8:
    // 0x546ed8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x546ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_546edc:
    // 0x546edc: 0x320f809  jalr        $t9
label_546ee0:
    if (ctx->pc == 0x546EE0u) {
        ctx->pc = 0x546EE0u;
            // 0x546ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546EE4u;
        goto label_546ee4;
    }
    ctx->pc = 0x546EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x546EE4u);
        ctx->pc = 0x546EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546EDCu;
            // 0x546ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x546EE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x546EE4u; }
            if (ctx->pc != 0x546EE4u) { return; }
        }
        }
    }
    ctx->pc = 0x546EE4u;
label_546ee4:
    // 0x546ee4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x546ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_546ee8:
    // 0x546ee8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x546ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_546eec:
    // 0x546eec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x546eecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_546ef0:
    // 0x546ef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x546ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_546ef4:
    // 0x546ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x546ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_546ef8:
    // 0x546ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x546ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_546efc:
    // 0x546efc: 0x3e00008  jr          $ra
label_546f00:
    if (ctx->pc == 0x546F00u) {
        ctx->pc = 0x546F00u;
            // 0x546f00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x546F04u;
        goto label_546f04;
    }
    ctx->pc = 0x546EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x546F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546EFCu;
            // 0x546f00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x546F04u;
label_546f04:
    // 0x546f04: 0x0  nop
    ctx->pc = 0x546f04u;
    // NOP
label_546f08:
    // 0x546f08: 0x0  nop
    ctx->pc = 0x546f08u;
    // NOP
label_546f0c:
    // 0x546f0c: 0x0  nop
    ctx->pc = 0x546f0cu;
    // NOP
label_546f10:
    // 0x546f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x546f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_546f14:
    // 0x546f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x546f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_546f18:
    // 0x546f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x546f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_546f1c:
    // 0x546f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x546f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_546f20:
    // 0x546f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x546f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_546f24:
    // 0x546f24: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_546f28:
    if (ctx->pc == 0x546F28u) {
        ctx->pc = 0x546F28u;
            // 0x546f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546F2Cu;
        goto label_546f2c;
    }
    ctx->pc = 0x546F24u;
    {
        const bool branch_taken_0x546f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x546F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546F24u;
            // 0x546f28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546f24) {
            ctx->pc = 0x546F68u;
            goto label_546f68;
        }
    }
    ctx->pc = 0x546F2Cu;
label_546f2c:
    // 0x546f2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x546f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_546f30:
    // 0x546f30: 0x24427870  addiu       $v0, $v0, 0x7870
    ctx->pc = 0x546f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30832));
label_546f34:
    // 0x546f34: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_546f38:
    if (ctx->pc == 0x546F38u) {
        ctx->pc = 0x546F38u;
            // 0x546f38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x546F3Cu;
        goto label_546f3c;
    }
    ctx->pc = 0x546F34u;
    {
        const bool branch_taken_0x546f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x546F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546F34u;
            // 0x546f38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546f34) {
            ctx->pc = 0x546F50u;
            goto label_546f50;
        }
    }
    ctx->pc = 0x546F3Cu;
label_546f3c:
    // 0x546f3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x546f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_546f40:
    // 0x546f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x546f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_546f44:
    // 0x546f44: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x546f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_546f48:
    // 0x546f48: 0xc057a68  jal         func_15E9A0
label_546f4c:
    if (ctx->pc == 0x546F4Cu) {
        ctx->pc = 0x546F4Cu;
            // 0x546f4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x546F50u;
        goto label_546f50;
    }
    ctx->pc = 0x546F48u;
    SET_GPR_U32(ctx, 31, 0x546F50u);
    ctx->pc = 0x546F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546F48u;
            // 0x546f4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546F50u; }
        if (ctx->pc != 0x546F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546F50u; }
        if (ctx->pc != 0x546F50u) { return; }
    }
    ctx->pc = 0x546F50u;
label_546f50:
    // 0x546f50: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x546f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_546f54:
    // 0x546f54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x546f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_546f58:
    // 0x546f58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_546f5c:
    if (ctx->pc == 0x546F5Cu) {
        ctx->pc = 0x546F5Cu;
            // 0x546f5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546F60u;
        goto label_546f60;
    }
    ctx->pc = 0x546F58u;
    {
        const bool branch_taken_0x546f58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x546f58) {
            ctx->pc = 0x546F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546F58u;
            // 0x546f5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546F6Cu;
            goto label_546f6c;
        }
    }
    ctx->pc = 0x546F60u;
label_546f60:
    // 0x546f60: 0xc0400a8  jal         func_1002A0
label_546f64:
    if (ctx->pc == 0x546F64u) {
        ctx->pc = 0x546F64u;
            // 0x546f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546F68u;
        goto label_546f68;
    }
    ctx->pc = 0x546F60u;
    SET_GPR_U32(ctx, 31, 0x546F68u);
    ctx->pc = 0x546F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546F60u;
            // 0x546f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546F68u; }
        if (ctx->pc != 0x546F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546F68u; }
        if (ctx->pc != 0x546F68u) { return; }
    }
    ctx->pc = 0x546F68u;
label_546f68:
    // 0x546f68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x546f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_546f6c:
    // 0x546f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x546f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_546f70:
    // 0x546f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x546f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_546f74:
    // 0x546f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x546f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_546f78:
    // 0x546f78: 0x3e00008  jr          $ra
label_546f7c:
    if (ctx->pc == 0x546F7Cu) {
        ctx->pc = 0x546F7Cu;
            // 0x546f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x546F80u;
        goto label_546f80;
    }
    ctx->pc = 0x546F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x546F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546F78u;
            // 0x546f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x546F80u;
label_546f80:
    // 0x546f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x546f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_546f84:
    // 0x546f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x546f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_546f88:
    // 0x546f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x546f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_546f8c:
    // 0x546f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x546f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_546f90:
    // 0x546f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x546f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_546f94:
    // 0x546f94: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_546f98:
    if (ctx->pc == 0x546F98u) {
        ctx->pc = 0x546F98u;
            // 0x546f98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546F9Cu;
        goto label_546f9c;
    }
    ctx->pc = 0x546F94u;
    {
        const bool branch_taken_0x546f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x546F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546F94u;
            // 0x546f98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546f94) {
            ctx->pc = 0x546FECu;
            goto label_546fec;
        }
    }
    ctx->pc = 0x546F9Cu;
label_546f9c:
    // 0x546f9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x546f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_546fa0:
    // 0x546fa0: 0x244278a0  addiu       $v0, $v0, 0x78A0
    ctx->pc = 0x546fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30880));
label_546fa4:
    // 0x546fa4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_546fa8:
    if (ctx->pc == 0x546FA8u) {
        ctx->pc = 0x546FA8u;
            // 0x546fa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x546FACu;
        goto label_546fac;
    }
    ctx->pc = 0x546FA4u;
    {
        const bool branch_taken_0x546fa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x546FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546FA4u;
            // 0x546fa8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546fa4) {
            ctx->pc = 0x546FD4u;
            goto label_546fd4;
        }
    }
    ctx->pc = 0x546FACu;
label_546fac:
    // 0x546fac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x546facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_546fb0:
    // 0x546fb0: 0x24427960  addiu       $v0, $v0, 0x7960
    ctx->pc = 0x546fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31072));
label_546fb4:
    // 0x546fb4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x546fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_546fb8:
    // 0x546fb8: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x546fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_546fbc:
    // 0x546fbc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_546fc0:
    if (ctx->pc == 0x546FC0u) {
        ctx->pc = 0x546FC0u;
            // 0x546fc0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x546FC4u;
        goto label_546fc4;
    }
    ctx->pc = 0x546FBCu;
    {
        const bool branch_taken_0x546fbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x546fbc) {
            ctx->pc = 0x546FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546FBCu;
            // 0x546fc0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546FD8u;
            goto label_546fd8;
        }
    }
    ctx->pc = 0x546FC4u;
label_546fc4:
    // 0x546fc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x546fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_546fc8:
    // 0x546fc8: 0xc0fe48c  jal         func_3F9230
label_546fcc:
    if (ctx->pc == 0x546FCCu) {
        ctx->pc = 0x546FCCu;
            // 0x546fcc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x546FD0u;
        goto label_546fd0;
    }
    ctx->pc = 0x546FC8u;
    SET_GPR_U32(ctx, 31, 0x546FD0u);
    ctx->pc = 0x546FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546FC8u;
            // 0x546fcc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546FD0u; }
        if (ctx->pc != 0x546FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546FD0u; }
        if (ctx->pc != 0x546FD0u) { return; }
    }
    ctx->pc = 0x546FD0u;
label_546fd0:
    // 0x546fd0: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x546fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_546fd4:
    // 0x546fd4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x546fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_546fd8:
    // 0x546fd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x546fd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_546fdc:
    // 0x546fdc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_546fe0:
    if (ctx->pc == 0x546FE0u) {
        ctx->pc = 0x546FE0u;
            // 0x546fe0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546FE4u;
        goto label_546fe4;
    }
    ctx->pc = 0x546FDCu;
    {
        const bool branch_taken_0x546fdc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x546fdc) {
            ctx->pc = 0x546FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546FDCu;
            // 0x546fe0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546FF0u;
            goto label_546ff0;
        }
    }
    ctx->pc = 0x546FE4u;
label_546fe4:
    // 0x546fe4: 0xc0400a8  jal         func_1002A0
label_546fe8:
    if (ctx->pc == 0x546FE8u) {
        ctx->pc = 0x546FE8u;
            // 0x546fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546FECu;
        goto label_546fec;
    }
    ctx->pc = 0x546FE4u;
    SET_GPR_U32(ctx, 31, 0x546FECu);
    ctx->pc = 0x546FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546FE4u;
            // 0x546fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546FECu; }
        if (ctx->pc != 0x546FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546FECu; }
        if (ctx->pc != 0x546FECu) { return; }
    }
    ctx->pc = 0x546FECu;
label_546fec:
    // 0x546fec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x546fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_546ff0:
    // 0x546ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x546ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_546ff4:
    // 0x546ff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x546ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_546ff8:
    // 0x546ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x546ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_546ffc:
    // 0x546ffc: 0x3e00008  jr          $ra
label_547000:
    if (ctx->pc == 0x547000u) {
        ctx->pc = 0x547000u;
            // 0x547000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x547004u;
        goto label_547004;
    }
    ctx->pc = 0x546FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546FFCu;
            // 0x547000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547004u;
label_547004:
    // 0x547004: 0x0  nop
    ctx->pc = 0x547004u;
    // NOP
label_547008:
    // 0x547008: 0x0  nop
    ctx->pc = 0x547008u;
    // NOP
label_54700c:
    // 0x54700c: 0x0  nop
    ctx->pc = 0x54700cu;
    // NOP
label_547010:
    // 0x547010: 0x3e00008  jr          $ra
label_547014:
    if (ctx->pc == 0x547014u) {
        ctx->pc = 0x547014u;
            // 0x547014: 0x3402fd40  ori         $v0, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->pc = 0x547018u;
        goto label_547018;
    }
    ctx->pc = 0x547010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547010u;
            // 0x547014: 0x3402fd40  ori         $v0, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547018u;
label_547018:
    // 0x547018: 0x0  nop
    ctx->pc = 0x547018u;
    // NOP
label_54701c:
    // 0x54701c: 0x0  nop
    ctx->pc = 0x54701cu;
    // NOP
label_547020:
    // 0x547020: 0x3e00008  jr          $ra
label_547024:
    if (ctx->pc == 0x547024u) {
        ctx->pc = 0x547024u;
            // 0x547024: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x547028u;
        goto label_547028;
    }
    ctx->pc = 0x547020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547020u;
            // 0x547024: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547028u;
label_547028:
    // 0x547028: 0x0  nop
    ctx->pc = 0x547028u;
    // NOP
label_54702c:
    // 0x54702c: 0x0  nop
    ctx->pc = 0x54702cu;
    // NOP
label_547030:
    // 0x547030: 0x3e00008  jr          $ra
label_547034:
    if (ctx->pc == 0x547034u) {
        ctx->pc = 0x547034u;
            // 0x547034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x547038u;
        goto label_547038;
    }
    ctx->pc = 0x547030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547030u;
            // 0x547034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547038u;
label_547038:
    // 0x547038: 0x0  nop
    ctx->pc = 0x547038u;
    // NOP
label_54703c:
    // 0x54703c: 0x0  nop
    ctx->pc = 0x54703cu;
    // NOP
label_547040:
    // 0x547040: 0x3e00008  jr          $ra
label_547044:
    if (ctx->pc == 0x547044u) {
        ctx->pc = 0x547044u;
            // 0x547044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x547048u;
        goto label_547048;
    }
    ctx->pc = 0x547040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547040u;
            // 0x547044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547048u;
label_547048:
    // 0x547048: 0x0  nop
    ctx->pc = 0x547048u;
    // NOP
label_54704c:
    // 0x54704c: 0x0  nop
    ctx->pc = 0x54704cu;
    // NOP
label_547050:
    // 0x547050: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x547050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_547054:
    // 0x547054: 0x804b156  j           func_12C558
label_547058:
    if (ctx->pc == 0x547058u) {
        ctx->pc = 0x547058u;
            // 0x547058: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x54705Cu;
        goto label_54705c;
    }
    ctx->pc = 0x547054u;
    ctx->pc = 0x547058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547054u;
            // 0x547058: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0012C558_0x12c558(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x54705Cu;
label_54705c:
    // 0x54705c: 0x0  nop
    ctx->pc = 0x54705cu;
    // NOP
label_547060:
    // 0x547060: 0x3e00008  jr          $ra
label_547064:
    if (ctx->pc == 0x547064u) {
        ctx->pc = 0x547068u;
        goto label_547068;
    }
    ctx->pc = 0x547060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547068u;
label_547068:
    // 0x547068: 0x0  nop
    ctx->pc = 0x547068u;
    // NOP
label_54706c:
    // 0x54706c: 0x0  nop
    ctx->pc = 0x54706cu;
    // NOP
}
