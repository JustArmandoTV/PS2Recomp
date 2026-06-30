#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00424BF0
// Address: 0x424bf0 - 0x4250a0
void sub_00424BF0_0x424bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424BF0_0x424bf0");
#endif

    switch (ctx->pc) {
        case 0x424bf0u: goto label_424bf0;
        case 0x424bf4u: goto label_424bf4;
        case 0x424bf8u: goto label_424bf8;
        case 0x424bfcu: goto label_424bfc;
        case 0x424c00u: goto label_424c00;
        case 0x424c04u: goto label_424c04;
        case 0x424c08u: goto label_424c08;
        case 0x424c0cu: goto label_424c0c;
        case 0x424c10u: goto label_424c10;
        case 0x424c14u: goto label_424c14;
        case 0x424c18u: goto label_424c18;
        case 0x424c1cu: goto label_424c1c;
        case 0x424c20u: goto label_424c20;
        case 0x424c24u: goto label_424c24;
        case 0x424c28u: goto label_424c28;
        case 0x424c2cu: goto label_424c2c;
        case 0x424c30u: goto label_424c30;
        case 0x424c34u: goto label_424c34;
        case 0x424c38u: goto label_424c38;
        case 0x424c3cu: goto label_424c3c;
        case 0x424c40u: goto label_424c40;
        case 0x424c44u: goto label_424c44;
        case 0x424c48u: goto label_424c48;
        case 0x424c4cu: goto label_424c4c;
        case 0x424c50u: goto label_424c50;
        case 0x424c54u: goto label_424c54;
        case 0x424c58u: goto label_424c58;
        case 0x424c5cu: goto label_424c5c;
        case 0x424c60u: goto label_424c60;
        case 0x424c64u: goto label_424c64;
        case 0x424c68u: goto label_424c68;
        case 0x424c6cu: goto label_424c6c;
        case 0x424c70u: goto label_424c70;
        case 0x424c74u: goto label_424c74;
        case 0x424c78u: goto label_424c78;
        case 0x424c7cu: goto label_424c7c;
        case 0x424c80u: goto label_424c80;
        case 0x424c84u: goto label_424c84;
        case 0x424c88u: goto label_424c88;
        case 0x424c8cu: goto label_424c8c;
        case 0x424c90u: goto label_424c90;
        case 0x424c94u: goto label_424c94;
        case 0x424c98u: goto label_424c98;
        case 0x424c9cu: goto label_424c9c;
        case 0x424ca0u: goto label_424ca0;
        case 0x424ca4u: goto label_424ca4;
        case 0x424ca8u: goto label_424ca8;
        case 0x424cacu: goto label_424cac;
        case 0x424cb0u: goto label_424cb0;
        case 0x424cb4u: goto label_424cb4;
        case 0x424cb8u: goto label_424cb8;
        case 0x424cbcu: goto label_424cbc;
        case 0x424cc0u: goto label_424cc0;
        case 0x424cc4u: goto label_424cc4;
        case 0x424cc8u: goto label_424cc8;
        case 0x424cccu: goto label_424ccc;
        case 0x424cd0u: goto label_424cd0;
        case 0x424cd4u: goto label_424cd4;
        case 0x424cd8u: goto label_424cd8;
        case 0x424cdcu: goto label_424cdc;
        case 0x424ce0u: goto label_424ce0;
        case 0x424ce4u: goto label_424ce4;
        case 0x424ce8u: goto label_424ce8;
        case 0x424cecu: goto label_424cec;
        case 0x424cf0u: goto label_424cf0;
        case 0x424cf4u: goto label_424cf4;
        case 0x424cf8u: goto label_424cf8;
        case 0x424cfcu: goto label_424cfc;
        case 0x424d00u: goto label_424d00;
        case 0x424d04u: goto label_424d04;
        case 0x424d08u: goto label_424d08;
        case 0x424d0cu: goto label_424d0c;
        case 0x424d10u: goto label_424d10;
        case 0x424d14u: goto label_424d14;
        case 0x424d18u: goto label_424d18;
        case 0x424d1cu: goto label_424d1c;
        case 0x424d20u: goto label_424d20;
        case 0x424d24u: goto label_424d24;
        case 0x424d28u: goto label_424d28;
        case 0x424d2cu: goto label_424d2c;
        case 0x424d30u: goto label_424d30;
        case 0x424d34u: goto label_424d34;
        case 0x424d38u: goto label_424d38;
        case 0x424d3cu: goto label_424d3c;
        case 0x424d40u: goto label_424d40;
        case 0x424d44u: goto label_424d44;
        case 0x424d48u: goto label_424d48;
        case 0x424d4cu: goto label_424d4c;
        case 0x424d50u: goto label_424d50;
        case 0x424d54u: goto label_424d54;
        case 0x424d58u: goto label_424d58;
        case 0x424d5cu: goto label_424d5c;
        case 0x424d60u: goto label_424d60;
        case 0x424d64u: goto label_424d64;
        case 0x424d68u: goto label_424d68;
        case 0x424d6cu: goto label_424d6c;
        case 0x424d70u: goto label_424d70;
        case 0x424d74u: goto label_424d74;
        case 0x424d78u: goto label_424d78;
        case 0x424d7cu: goto label_424d7c;
        case 0x424d80u: goto label_424d80;
        case 0x424d84u: goto label_424d84;
        case 0x424d88u: goto label_424d88;
        case 0x424d8cu: goto label_424d8c;
        case 0x424d90u: goto label_424d90;
        case 0x424d94u: goto label_424d94;
        case 0x424d98u: goto label_424d98;
        case 0x424d9cu: goto label_424d9c;
        case 0x424da0u: goto label_424da0;
        case 0x424da4u: goto label_424da4;
        case 0x424da8u: goto label_424da8;
        case 0x424dacu: goto label_424dac;
        case 0x424db0u: goto label_424db0;
        case 0x424db4u: goto label_424db4;
        case 0x424db8u: goto label_424db8;
        case 0x424dbcu: goto label_424dbc;
        case 0x424dc0u: goto label_424dc0;
        case 0x424dc4u: goto label_424dc4;
        case 0x424dc8u: goto label_424dc8;
        case 0x424dccu: goto label_424dcc;
        case 0x424dd0u: goto label_424dd0;
        case 0x424dd4u: goto label_424dd4;
        case 0x424dd8u: goto label_424dd8;
        case 0x424ddcu: goto label_424ddc;
        case 0x424de0u: goto label_424de0;
        case 0x424de4u: goto label_424de4;
        case 0x424de8u: goto label_424de8;
        case 0x424decu: goto label_424dec;
        case 0x424df0u: goto label_424df0;
        case 0x424df4u: goto label_424df4;
        case 0x424df8u: goto label_424df8;
        case 0x424dfcu: goto label_424dfc;
        case 0x424e00u: goto label_424e00;
        case 0x424e04u: goto label_424e04;
        case 0x424e08u: goto label_424e08;
        case 0x424e0cu: goto label_424e0c;
        case 0x424e10u: goto label_424e10;
        case 0x424e14u: goto label_424e14;
        case 0x424e18u: goto label_424e18;
        case 0x424e1cu: goto label_424e1c;
        case 0x424e20u: goto label_424e20;
        case 0x424e24u: goto label_424e24;
        case 0x424e28u: goto label_424e28;
        case 0x424e2cu: goto label_424e2c;
        case 0x424e30u: goto label_424e30;
        case 0x424e34u: goto label_424e34;
        case 0x424e38u: goto label_424e38;
        case 0x424e3cu: goto label_424e3c;
        case 0x424e40u: goto label_424e40;
        case 0x424e44u: goto label_424e44;
        case 0x424e48u: goto label_424e48;
        case 0x424e4cu: goto label_424e4c;
        case 0x424e50u: goto label_424e50;
        case 0x424e54u: goto label_424e54;
        case 0x424e58u: goto label_424e58;
        case 0x424e5cu: goto label_424e5c;
        case 0x424e60u: goto label_424e60;
        case 0x424e64u: goto label_424e64;
        case 0x424e68u: goto label_424e68;
        case 0x424e6cu: goto label_424e6c;
        case 0x424e70u: goto label_424e70;
        case 0x424e74u: goto label_424e74;
        case 0x424e78u: goto label_424e78;
        case 0x424e7cu: goto label_424e7c;
        case 0x424e80u: goto label_424e80;
        case 0x424e84u: goto label_424e84;
        case 0x424e88u: goto label_424e88;
        case 0x424e8cu: goto label_424e8c;
        case 0x424e90u: goto label_424e90;
        case 0x424e94u: goto label_424e94;
        case 0x424e98u: goto label_424e98;
        case 0x424e9cu: goto label_424e9c;
        case 0x424ea0u: goto label_424ea0;
        case 0x424ea4u: goto label_424ea4;
        case 0x424ea8u: goto label_424ea8;
        case 0x424eacu: goto label_424eac;
        case 0x424eb0u: goto label_424eb0;
        case 0x424eb4u: goto label_424eb4;
        case 0x424eb8u: goto label_424eb8;
        case 0x424ebcu: goto label_424ebc;
        case 0x424ec0u: goto label_424ec0;
        case 0x424ec4u: goto label_424ec4;
        case 0x424ec8u: goto label_424ec8;
        case 0x424eccu: goto label_424ecc;
        case 0x424ed0u: goto label_424ed0;
        case 0x424ed4u: goto label_424ed4;
        case 0x424ed8u: goto label_424ed8;
        case 0x424edcu: goto label_424edc;
        case 0x424ee0u: goto label_424ee0;
        case 0x424ee4u: goto label_424ee4;
        case 0x424ee8u: goto label_424ee8;
        case 0x424eecu: goto label_424eec;
        case 0x424ef0u: goto label_424ef0;
        case 0x424ef4u: goto label_424ef4;
        case 0x424ef8u: goto label_424ef8;
        case 0x424efcu: goto label_424efc;
        case 0x424f00u: goto label_424f00;
        case 0x424f04u: goto label_424f04;
        case 0x424f08u: goto label_424f08;
        case 0x424f0cu: goto label_424f0c;
        case 0x424f10u: goto label_424f10;
        case 0x424f14u: goto label_424f14;
        case 0x424f18u: goto label_424f18;
        case 0x424f1cu: goto label_424f1c;
        case 0x424f20u: goto label_424f20;
        case 0x424f24u: goto label_424f24;
        case 0x424f28u: goto label_424f28;
        case 0x424f2cu: goto label_424f2c;
        case 0x424f30u: goto label_424f30;
        case 0x424f34u: goto label_424f34;
        case 0x424f38u: goto label_424f38;
        case 0x424f3cu: goto label_424f3c;
        case 0x424f40u: goto label_424f40;
        case 0x424f44u: goto label_424f44;
        case 0x424f48u: goto label_424f48;
        case 0x424f4cu: goto label_424f4c;
        case 0x424f50u: goto label_424f50;
        case 0x424f54u: goto label_424f54;
        case 0x424f58u: goto label_424f58;
        case 0x424f5cu: goto label_424f5c;
        case 0x424f60u: goto label_424f60;
        case 0x424f64u: goto label_424f64;
        case 0x424f68u: goto label_424f68;
        case 0x424f6cu: goto label_424f6c;
        case 0x424f70u: goto label_424f70;
        case 0x424f74u: goto label_424f74;
        case 0x424f78u: goto label_424f78;
        case 0x424f7cu: goto label_424f7c;
        case 0x424f80u: goto label_424f80;
        case 0x424f84u: goto label_424f84;
        case 0x424f88u: goto label_424f88;
        case 0x424f8cu: goto label_424f8c;
        case 0x424f90u: goto label_424f90;
        case 0x424f94u: goto label_424f94;
        case 0x424f98u: goto label_424f98;
        case 0x424f9cu: goto label_424f9c;
        case 0x424fa0u: goto label_424fa0;
        case 0x424fa4u: goto label_424fa4;
        case 0x424fa8u: goto label_424fa8;
        case 0x424facu: goto label_424fac;
        case 0x424fb0u: goto label_424fb0;
        case 0x424fb4u: goto label_424fb4;
        case 0x424fb8u: goto label_424fb8;
        case 0x424fbcu: goto label_424fbc;
        case 0x424fc0u: goto label_424fc0;
        case 0x424fc4u: goto label_424fc4;
        case 0x424fc8u: goto label_424fc8;
        case 0x424fccu: goto label_424fcc;
        case 0x424fd0u: goto label_424fd0;
        case 0x424fd4u: goto label_424fd4;
        case 0x424fd8u: goto label_424fd8;
        case 0x424fdcu: goto label_424fdc;
        case 0x424fe0u: goto label_424fe0;
        case 0x424fe4u: goto label_424fe4;
        case 0x424fe8u: goto label_424fe8;
        case 0x424fecu: goto label_424fec;
        case 0x424ff0u: goto label_424ff0;
        case 0x424ff4u: goto label_424ff4;
        case 0x424ff8u: goto label_424ff8;
        case 0x424ffcu: goto label_424ffc;
        case 0x425000u: goto label_425000;
        case 0x425004u: goto label_425004;
        case 0x425008u: goto label_425008;
        case 0x42500cu: goto label_42500c;
        case 0x425010u: goto label_425010;
        case 0x425014u: goto label_425014;
        case 0x425018u: goto label_425018;
        case 0x42501cu: goto label_42501c;
        case 0x425020u: goto label_425020;
        case 0x425024u: goto label_425024;
        case 0x425028u: goto label_425028;
        case 0x42502cu: goto label_42502c;
        case 0x425030u: goto label_425030;
        case 0x425034u: goto label_425034;
        case 0x425038u: goto label_425038;
        case 0x42503cu: goto label_42503c;
        case 0x425040u: goto label_425040;
        case 0x425044u: goto label_425044;
        case 0x425048u: goto label_425048;
        case 0x42504cu: goto label_42504c;
        case 0x425050u: goto label_425050;
        case 0x425054u: goto label_425054;
        case 0x425058u: goto label_425058;
        case 0x42505cu: goto label_42505c;
        case 0x425060u: goto label_425060;
        case 0x425064u: goto label_425064;
        case 0x425068u: goto label_425068;
        case 0x42506cu: goto label_42506c;
        case 0x425070u: goto label_425070;
        case 0x425074u: goto label_425074;
        case 0x425078u: goto label_425078;
        case 0x42507cu: goto label_42507c;
        case 0x425080u: goto label_425080;
        case 0x425084u: goto label_425084;
        case 0x425088u: goto label_425088;
        case 0x42508cu: goto label_42508c;
        case 0x425090u: goto label_425090;
        case 0x425094u: goto label_425094;
        case 0x425098u: goto label_425098;
        case 0x42509cu: goto label_42509c;
        default: break;
    }

    ctx->pc = 0x424bf0u;

label_424bf0:
    // 0x424bf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x424bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_424bf4:
    // 0x424bf4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x424bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_424bf8:
    // 0x424bf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x424bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_424bfc:
    // 0x424bfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x424bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_424c00:
    // 0x424c00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x424c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_424c04:
    // 0x424c04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x424c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_424c08:
    // 0x424c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x424c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_424c0c:
    // 0x424c0c: 0x90830060  lbu         $v1, 0x60($a0)
    ctx->pc = 0x424c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
label_424c10:
    // 0x424c10: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
label_424c14:
    if (ctx->pc == 0x424C14u) {
        ctx->pc = 0x424C14u;
            // 0x424c14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424C18u;
        goto label_424c18;
    }
    ctx->pc = 0x424C10u;
    {
        const bool branch_taken_0x424c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x424C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424C10u;
            // 0x424c14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c10) {
            ctx->pc = 0x424C94u;
            goto label_424c94;
        }
    }
    ctx->pc = 0x424C18u;
label_424c18:
    // 0x424c18: 0x8e140050  lw          $s4, 0x50($s0)
    ctx->pc = 0x424c18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_424c1c:
    // 0x424c1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x424c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424c20:
    // 0x424c20: 0x8e130058  lw          $s3, 0x58($s0)
    ctx->pc = 0x424c20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_424c24:
    // 0x424c24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x424c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424c28:
    // 0x424c28: 0x8e8300e0  lw          $v1, 0xE0($s4)
    ctx->pc = 0x424c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 224)));
label_424c2c:
    // 0x424c2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_424c30:
    if (ctx->pc == 0x424C30u) {
        ctx->pc = 0x424C34u;
        goto label_424c34;
    }
    ctx->pc = 0x424C2Cu;
    {
        const bool branch_taken_0x424c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x424c2c) {
            ctx->pc = 0x424C40u;
            goto label_424c40;
        }
    }
    ctx->pc = 0x424C34u;
label_424c34:
    // 0x424c34: 0x10000004  b           . + 4 + (0x4 << 2)
label_424c38:
    if (ctx->pc == 0x424C38u) {
        ctx->pc = 0x424C3Cu;
        goto label_424c3c;
    }
    ctx->pc = 0x424C34u;
    {
        const bool branch_taken_0x424c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x424c34) {
            ctx->pc = 0x424C48u;
            goto label_424c48;
        }
    }
    ctx->pc = 0x424C3Cu;
label_424c3c:
    // 0x424c3c: 0x0  nop
    ctx->pc = 0x424c3cu;
    // NOP
label_424c40:
    // 0x424c40: 0x1000000d  b           . + 4 + (0xD << 2)
label_424c44:
    if (ctx->pc == 0x424C44u) {
        ctx->pc = 0x424C44u;
            // 0x424c44: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x424C48u;
        goto label_424c48;
    }
    ctx->pc = 0x424C40u;
    {
        const bool branch_taken_0x424c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424C40u;
            // 0x424c44: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c40) {
            ctx->pc = 0x424C78u;
            goto label_424c78;
        }
    }
    ctx->pc = 0x424C48u;
label_424c48:
    // 0x424c48: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_424c4c:
    if (ctx->pc == 0x424C4Cu) {
        ctx->pc = 0x424C50u;
        goto label_424c50;
    }
    ctx->pc = 0x424C48u;
    {
        const bool branch_taken_0x424c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x424c48) {
            ctx->pc = 0x424C60u;
            goto label_424c60;
        }
    }
    ctx->pc = 0x424C50u;
label_424c50:
    // 0x424c50: 0xc0e3658  jal         func_38D960
label_424c54:
    if (ctx->pc == 0x424C54u) {
        ctx->pc = 0x424C54u;
            // 0x424c54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424C58u;
        goto label_424c58;
    }
    ctx->pc = 0x424C50u;
    SET_GPR_U32(ctx, 31, 0x424C58u);
    ctx->pc = 0x424C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424C50u;
            // 0x424c54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424C58u; }
        if (ctx->pc != 0x424C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424C58u; }
        if (ctx->pc != 0x424C58u) { return; }
    }
    ctx->pc = 0x424C58u;
label_424c58:
    // 0x424c58: 0x10000007  b           . + 4 + (0x7 << 2)
label_424c5c:
    if (ctx->pc == 0x424C5Cu) {
        ctx->pc = 0x424C60u;
        goto label_424c60;
    }
    ctx->pc = 0x424C58u;
    {
        const bool branch_taken_0x424c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x424c58) {
            ctx->pc = 0x424C78u;
            goto label_424c78;
        }
    }
    ctx->pc = 0x424C60u;
label_424c60:
    // 0x424c60: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x424c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_424c64:
    // 0x424c64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x424c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_424c68:
    // 0x424c68: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x424c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_424c6c:
    // 0x424c6c: 0x320f809  jalr        $t9
label_424c70:
    if (ctx->pc == 0x424C70u) {
        ctx->pc = 0x424C70u;
            // 0x424c70: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x424C74u;
        goto label_424c74;
    }
    ctx->pc = 0x424C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x424C74u);
        ctx->pc = 0x424C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424C6Cu;
            // 0x424c70: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x424C74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x424C74u; }
            if (ctx->pc != 0x424C74u) { return; }
        }
        }
    }
    ctx->pc = 0x424C74u;
label_424c74:
    // 0x424c74: 0x0  nop
    ctx->pc = 0x424c74u;
    // NOP
label_424c78:
    // 0x424c78: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x424c78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_424c7c:
    // 0x424c7c: 0x1e60ffea  bgtz        $s3, . + 4 + (-0x16 << 2)
label_424c80:
    if (ctx->pc == 0x424C80u) {
        ctx->pc = 0x424C80u;
            // 0x424c80: 0x269400f0  addiu       $s4, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->pc = 0x424C84u;
        goto label_424c84;
    }
    ctx->pc = 0x424C7Cu;
    {
        const bool branch_taken_0x424c7c = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x424C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424C7Cu;
            // 0x424c80: 0x269400f0  addiu       $s4, $s4, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c7c) {
            ctx->pc = 0x424C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_424c28;
        }
    }
    ctx->pc = 0x424C84u;
label_424c84:
    // 0x424c84: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x424c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_424c88:
    // 0x424c88: 0x2431826  xor         $v1, $s2, $v1
    ctx->pc = 0x424c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 3));
label_424c8c:
    // 0x424c8c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x424c8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_424c90:
    // 0x424c90: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x424c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
label_424c94:
    // 0x424c94: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x424c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_424c98:
    // 0x424c98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x424c98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_424c9c:
    // 0x424c9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x424c9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_424ca0:
    // 0x424ca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x424ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_424ca4:
    // 0x424ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x424ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_424ca8:
    // 0x424ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424cac:
    // 0x424cac: 0x3e00008  jr          $ra
label_424cb0:
    if (ctx->pc == 0x424CB0u) {
        ctx->pc = 0x424CB0u;
            // 0x424cb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x424CB4u;
        goto label_424cb4;
    }
    ctx->pc = 0x424CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424CACu;
            // 0x424cb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424CB4u;
label_424cb4:
    // 0x424cb4: 0x0  nop
    ctx->pc = 0x424cb4u;
    // NOP
label_424cb8:
    // 0x424cb8: 0x0  nop
    ctx->pc = 0x424cb8u;
    // NOP
label_424cbc:
    // 0x424cbc: 0x0  nop
    ctx->pc = 0x424cbcu;
    // NOP
label_424cc0:
    // 0x424cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x424cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_424cc4:
    // 0x424cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x424cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_424cc8:
    // 0x424cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x424cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_424ccc:
    // 0x424ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x424cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_424cd0:
    // 0x424cd0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x424cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_424cd4:
    // 0x424cd4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_424cd8:
    if (ctx->pc == 0x424CD8u) {
        ctx->pc = 0x424CD8u;
            // 0x424cd8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x424CDCu;
        goto label_424cdc;
    }
    ctx->pc = 0x424CD4u;
    {
        const bool branch_taken_0x424cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x424cd4) {
            ctx->pc = 0x424CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424CD4u;
            // 0x424cd8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424CECu;
            goto label_424cec;
        }
    }
    ctx->pc = 0x424CDCu;
label_424cdc:
    // 0x424cdc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x424cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_424ce0:
    // 0x424ce0: 0xc0407c0  jal         func_101F00
label_424ce4:
    if (ctx->pc == 0x424CE4u) {
        ctx->pc = 0x424CE4u;
            // 0x424ce4: 0x24a54d10  addiu       $a1, $a1, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19728));
        ctx->pc = 0x424CE8u;
        goto label_424ce8;
    }
    ctx->pc = 0x424CE0u;
    SET_GPR_U32(ctx, 31, 0x424CE8u);
    ctx->pc = 0x424CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424CE0u;
            // 0x424ce4: 0x24a54d10  addiu       $a1, $a1, 0x4D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424CE8u; }
        if (ctx->pc != 0x424CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424CE8u; }
        if (ctx->pc != 0x424CE8u) { return; }
    }
    ctx->pc = 0x424CE8u;
label_424ce8:
    // 0x424ce8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x424ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_424cec:
    // 0x424cec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_424cf0:
    if (ctx->pc == 0x424CF0u) {
        ctx->pc = 0x424CF0u;
            // 0x424cf0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x424CF4u;
        goto label_424cf4;
    }
    ctx->pc = 0x424CECu;
    {
        const bool branch_taken_0x424cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x424cec) {
            ctx->pc = 0x424CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424CECu;
            // 0x424cf0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424D00u;
            goto label_424d00;
        }
    }
    ctx->pc = 0x424CF4u;
label_424cf4:
    // 0x424cf4: 0xc04008c  jal         func_100230
label_424cf8:
    if (ctx->pc == 0x424CF8u) {
        ctx->pc = 0x424CFCu;
        goto label_424cfc;
    }
    ctx->pc = 0x424CF4u;
    SET_GPR_U32(ctx, 31, 0x424CFCu);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424CFCu; }
        if (ctx->pc != 0x424CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424CFCu; }
        if (ctx->pc != 0x424CFCu) { return; }
    }
    ctx->pc = 0x424CFCu;
label_424cfc:
    // 0x424cfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x424cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_424d00:
    // 0x424d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424d04:
    // 0x424d04: 0x3e00008  jr          $ra
label_424d08:
    if (ctx->pc == 0x424D08u) {
        ctx->pc = 0x424D08u;
            // 0x424d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x424D0Cu;
        goto label_424d0c;
    }
    ctx->pc = 0x424D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424D04u;
            // 0x424d08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424D0Cu;
label_424d0c:
    // 0x424d0c: 0x0  nop
    ctx->pc = 0x424d0cu;
    // NOP
label_424d10:
    // 0x424d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x424d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_424d14:
    // 0x424d14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x424d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_424d18:
    // 0x424d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x424d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_424d1c:
    // 0x424d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x424d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_424d20:
    // 0x424d20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x424d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_424d24:
    // 0x424d24: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_424d28:
    if (ctx->pc == 0x424D28u) {
        ctx->pc = 0x424D28u;
            // 0x424d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424D2Cu;
        goto label_424d2c;
    }
    ctx->pc = 0x424D24u;
    {
        const bool branch_taken_0x424d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x424D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424D24u;
            // 0x424d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424d24) {
            ctx->pc = 0x424D98u;
            goto label_424d98;
        }
    }
    ctx->pc = 0x424D2Cu;
label_424d2c:
    // 0x424d2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x424d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_424d30:
    // 0x424d30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x424d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_424d34:
    // 0x424d34: 0x2463bdb0  addiu       $v1, $v1, -0x4250
    ctx->pc = 0x424d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950320));
label_424d38:
    // 0x424d38: 0x2442bdf0  addiu       $v0, $v0, -0x4210
    ctx->pc = 0x424d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950384));
label_424d3c:
    // 0x424d3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x424d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_424d40:
    // 0x424d40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x424d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_424d44:
    // 0x424d44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x424d44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_424d48:
    // 0x424d48: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x424d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_424d4c:
    // 0x424d4c: 0x320f809  jalr        $t9
label_424d50:
    if (ctx->pc == 0x424D50u) {
        ctx->pc = 0x424D54u;
        goto label_424d54;
    }
    ctx->pc = 0x424D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x424D54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x424D54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x424D54u; }
            if (ctx->pc != 0x424D54u) { return; }
        }
        }
    }
    ctx->pc = 0x424D54u;
label_424d54:
    // 0x424d54: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_424d58:
    if (ctx->pc == 0x424D58u) {
        ctx->pc = 0x424D58u;
            // 0x424d58: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x424D5Cu;
        goto label_424d5c;
    }
    ctx->pc = 0x424D54u;
    {
        const bool branch_taken_0x424d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x424d54) {
            ctx->pc = 0x424D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424D54u;
            // 0x424d58: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424D84u;
            goto label_424d84;
        }
    }
    ctx->pc = 0x424D5Cu;
label_424d5c:
    // 0x424d5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x424d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_424d60:
    // 0x424d60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x424d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_424d64:
    // 0x424d64: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x424d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_424d68:
    // 0x424d68: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x424d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_424d6c:
    // 0x424d6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x424d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_424d70:
    // 0x424d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x424d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424d74:
    // 0x424d74: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x424d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_424d78:
    // 0x424d78: 0xc0aee40  jal         func_2BB900
label_424d7c:
    if (ctx->pc == 0x424D7Cu) {
        ctx->pc = 0x424D7Cu;
            // 0x424d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424D80u;
        goto label_424d80;
    }
    ctx->pc = 0x424D78u;
    SET_GPR_U32(ctx, 31, 0x424D80u);
    ctx->pc = 0x424D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424D78u;
            // 0x424d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424D80u; }
        if (ctx->pc != 0x424D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424D80u; }
        if (ctx->pc != 0x424D80u) { return; }
    }
    ctx->pc = 0x424D80u;
label_424d80:
    // 0x424d80: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x424d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_424d84:
    // 0x424d84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x424d84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_424d88:
    // 0x424d88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_424d8c:
    if (ctx->pc == 0x424D8Cu) {
        ctx->pc = 0x424D8Cu;
            // 0x424d8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424D90u;
        goto label_424d90;
    }
    ctx->pc = 0x424D88u;
    {
        const bool branch_taken_0x424d88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x424d88) {
            ctx->pc = 0x424D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424D88u;
            // 0x424d8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424D9Cu;
            goto label_424d9c;
        }
    }
    ctx->pc = 0x424D90u;
label_424d90:
    // 0x424d90: 0xc0400a8  jal         func_1002A0
label_424d94:
    if (ctx->pc == 0x424D94u) {
        ctx->pc = 0x424D94u;
            // 0x424d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424D98u;
        goto label_424d98;
    }
    ctx->pc = 0x424D90u;
    SET_GPR_U32(ctx, 31, 0x424D98u);
    ctx->pc = 0x424D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424D90u;
            // 0x424d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424D98u; }
        if (ctx->pc != 0x424D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424D98u; }
        if (ctx->pc != 0x424D98u) { return; }
    }
    ctx->pc = 0x424D98u;
label_424d98:
    // 0x424d98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x424d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424d9c:
    // 0x424d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x424d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_424da0:
    // 0x424da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x424da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_424da4:
    // 0x424da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424da8:
    // 0x424da8: 0x3e00008  jr          $ra
label_424dac:
    if (ctx->pc == 0x424DACu) {
        ctx->pc = 0x424DACu;
            // 0x424dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x424DB0u;
        goto label_424db0;
    }
    ctx->pc = 0x424DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424DA8u;
            // 0x424dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424DB0u;
label_424db0:
    // 0x424db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x424db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_424db4:
    // 0x424db4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x424db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_424db8:
    // 0x424db8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x424db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_424dbc:
    // 0x424dbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x424dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_424dc0:
    // 0x424dc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x424dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_424dc4:
    // 0x424dc4: 0x8c910058  lw          $s1, 0x58($a0)
    ctx->pc = 0x424dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_424dc8:
    // 0x424dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x424dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_424dcc:
    // 0x424dcc: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x424dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_424dd0:
    // 0x424dd0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x424dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_424dd4:
    // 0x424dd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x424dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_424dd8:
    // 0x424dd8: 0xc040138  jal         func_1004E0
label_424ddc:
    if (ctx->pc == 0x424DDCu) {
        ctx->pc = 0x424DDCu;
            // 0x424ddc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x424DE0u;
        goto label_424de0;
    }
    ctx->pc = 0x424DD8u;
    SET_GPR_U32(ctx, 31, 0x424DE0u);
    ctx->pc = 0x424DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424DD8u;
            // 0x424ddc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424DE0u; }
        if (ctx->pc != 0x424DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424DE0u; }
        if (ctx->pc != 0x424DE0u) { return; }
    }
    ctx->pc = 0x424DE0u;
label_424de0:
    // 0x424de0: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x424de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_424de4:
    // 0x424de4: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x424de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
label_424de8:
    // 0x424de8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x424de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_424dec:
    // 0x424dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x424decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424df0:
    // 0x424df0: 0x24a54ea0  addiu       $a1, $a1, 0x4EA0
    ctx->pc = 0x424df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20128));
label_424df4:
    // 0x424df4: 0x24c64d10  addiu       $a2, $a2, 0x4D10
    ctx->pc = 0x424df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19728));
label_424df8:
    // 0x424df8: 0xc040840  jal         func_102100
label_424dfc:
    if (ctx->pc == 0x424DFCu) {
        ctx->pc = 0x424DFCu;
            // 0x424dfc: 0x240700f0  addiu       $a3, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x424E00u;
        goto label_424e00;
    }
    ctx->pc = 0x424DF8u;
    SET_GPR_U32(ctx, 31, 0x424E00u);
    ctx->pc = 0x424DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424DF8u;
            // 0x424dfc: 0x240700f0  addiu       $a3, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424E00u; }
        if (ctx->pc != 0x424E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424E00u; }
        if (ctx->pc != 0x424E00u) { return; }
    }
    ctx->pc = 0x424E00u;
label_424e00:
    // 0x424e00: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x424e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_424e04:
    // 0x424e04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x424e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424e08:
    // 0x424e08: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x424e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_424e0c:
    // 0x424e0c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_424e10:
    if (ctx->pc == 0x424E10u) {
        ctx->pc = 0x424E10u;
            // 0x424e10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424E14u;
        goto label_424e14;
    }
    ctx->pc = 0x424E0Cu;
    {
        const bool branch_taken_0x424e0c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x424E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424E0Cu;
            // 0x424e10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e0c) {
            ctx->pc = 0x424E38u;
            goto label_424e38;
        }
    }
    ctx->pc = 0x424E14u;
label_424e14:
    // 0x424e14: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x424e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_424e18:
    // 0x424e18: 0xc0d879c  jal         func_361E70
label_424e1c:
    if (ctx->pc == 0x424E1Cu) {
        ctx->pc = 0x424E1Cu;
            // 0x424e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424E20u;
        goto label_424e20;
    }
    ctx->pc = 0x424E18u;
    SET_GPR_U32(ctx, 31, 0x424E20u);
    ctx->pc = 0x424E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424E18u;
            // 0x424e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424E20u; }
        if (ctx->pc != 0x424E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424E20u; }
        if (ctx->pc != 0x424E20u) { return; }
    }
    ctx->pc = 0x424E20u;
label_424e20:
    // 0x424e20: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x424e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_424e24:
    // 0x424e24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x424e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_424e28:
    // 0x424e28: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x424e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_424e2c:
    // 0x424e2c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_424e30:
    if (ctx->pc == 0x424E30u) {
        ctx->pc = 0x424E30u;
            // 0x424e30: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x424E34u;
        goto label_424e34;
    }
    ctx->pc = 0x424E2Cu;
    {
        const bool branch_taken_0x424e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424E2Cu;
            // 0x424e30: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e2c) {
            ctx->pc = 0x424E14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_424e14;
        }
    }
    ctx->pc = 0x424E34u;
label_424e34:
    // 0x424e34: 0x0  nop
    ctx->pc = 0x424e34u;
    // NOP
label_424e38:
    // 0x424e38: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x424e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_424e3c:
    // 0x424e3c: 0x113980  sll         $a3, $s1, 6
    ctx->pc = 0x424e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_424e40:
    // 0x424e40: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x424e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_424e44:
    // 0x424e44: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x424e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_424e48:
    // 0x424e48: 0xc040140  jal         func_100500
label_424e4c:
    if (ctx->pc == 0x424E4Cu) {
        ctx->pc = 0x424E4Cu;
            // 0x424e4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x424E50u;
        goto label_424e50;
    }
    ctx->pc = 0x424E48u;
    SET_GPR_U32(ctx, 31, 0x424E50u);
    ctx->pc = 0x424E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424E48u;
            // 0x424e4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424E50u; }
        if (ctx->pc != 0x424E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424E50u; }
        if (ctx->pc != 0x424E50u) { return; }
    }
    ctx->pc = 0x424E50u;
label_424e50:
    // 0x424e50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x424e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424e54:
    // 0x424e54: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_424e58:
    if (ctx->pc == 0x424E58u) {
        ctx->pc = 0x424E58u;
            // 0x424e58: 0xae04005c  sw          $a0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
        ctx->pc = 0x424E5Cu;
        goto label_424e5c;
    }
    ctx->pc = 0x424E54u;
    {
        const bool branch_taken_0x424e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x424e54) {
            ctx->pc = 0x424E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x424E54u;
            // 0x424e58: 0xae04005c  sw          $a0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x424E7Cu;
            goto label_424e7c;
        }
    }
    ctx->pc = 0x424E5Cu;
label_424e5c:
    // 0x424e5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x424e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_424e60:
    // 0x424e60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x424e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_424e64:
    // 0x424e64: 0x8c427380  lw          $v0, 0x7380($v0)
    ctx->pc = 0x424e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29568)));
label_424e68:
    // 0x424e68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x424e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424e6c:
    // 0x424e6c: 0xc0b4554  jal         func_2D1550
label_424e70:
    if (ctx->pc == 0x424E70u) {
        ctx->pc = 0x424E70u;
            // 0x424e70: 0x24450084  addiu       $a1, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->pc = 0x424E74u;
        goto label_424e74;
    }
    ctx->pc = 0x424E6Cu;
    SET_GPR_U32(ctx, 31, 0x424E74u);
    ctx->pc = 0x424E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424E6Cu;
            // 0x424e70: 0x24450084  addiu       $a1, $v0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424E74u; }
        if (ctx->pc != 0x424E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424E74u; }
        if (ctx->pc != 0x424E74u) { return; }
    }
    ctx->pc = 0x424E74u;
label_424e74:
    // 0x424e74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x424e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424e78:
    // 0x424e78: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x424e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_424e7c:
    // 0x424e7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x424e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_424e80:
    // 0x424e80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x424e80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_424e84:
    // 0x424e84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x424e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_424e88:
    // 0x424e88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424e8c:
    // 0x424e8c: 0x3e00008  jr          $ra
label_424e90:
    if (ctx->pc == 0x424E90u) {
        ctx->pc = 0x424E90u;
            // 0x424e90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x424E94u;
        goto label_424e94;
    }
    ctx->pc = 0x424E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424E8Cu;
            // 0x424e90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424E94u;
label_424e94:
    // 0x424e94: 0x0  nop
    ctx->pc = 0x424e94u;
    // NOP
label_424e98:
    // 0x424e98: 0x0  nop
    ctx->pc = 0x424e98u;
    // NOP
label_424e9c:
    // 0x424e9c: 0x0  nop
    ctx->pc = 0x424e9cu;
    // NOP
label_424ea0:
    // 0x424ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x424ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_424ea4:
    // 0x424ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x424ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_424ea8:
    // 0x424ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x424ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_424eac:
    // 0x424eac: 0xc0b1370  jal         func_2C4DC0
label_424eb0:
    if (ctx->pc == 0x424EB0u) {
        ctx->pc = 0x424EB0u;
            // 0x424eb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424EB4u;
        goto label_424eb4;
    }
    ctx->pc = 0x424EACu;
    SET_GPR_U32(ctx, 31, 0x424EB4u);
    ctx->pc = 0x424EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x424EACu;
            // 0x424eb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424EB4u; }
        if (ctx->pc != 0x424EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x424EB4u; }
        if (ctx->pc != 0x424EB4u) { return; }
    }
    ctx->pc = 0x424EB4u;
label_424eb4:
    // 0x424eb4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x424eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_424eb8:
    // 0x424eb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x424eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_424ebc:
    // 0x424ebc: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x424ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_424ec0:
    // 0x424ec0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x424ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_424ec4:
    // 0x424ec4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x424ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_424ec8:
    // 0x424ec8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x424ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_424ecc:
    // 0x424ecc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x424eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_424ed0:
    // 0x424ed0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x424ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_424ed4:
    // 0x424ed4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x424ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_424ed8:
    // 0x424ed8: 0x2484bdb0  addiu       $a0, $a0, -0x4250
    ctx->pc = 0x424ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950320));
label_424edc:
    // 0x424edc: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x424edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_424ee0:
    // 0x424ee0: 0x2463bdf0  addiu       $v1, $v1, -0x4210
    ctx->pc = 0x424ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950384));
label_424ee4:
    // 0x424ee4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x424ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_424ee8:
    // 0x424ee8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x424ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_424eec:
    // 0x424eec: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x424eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_424ef0:
    // 0x424ef0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x424ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_424ef4:
    // 0x424ef4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x424ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_424ef8:
    // 0x424ef8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x424ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_424efc:
    // 0x424efc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x424efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_424f00:
    // 0x424f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x424f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_424f04:
    // 0x424f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x424f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_424f08:
    // 0x424f08: 0x3e00008  jr          $ra
label_424f0c:
    if (ctx->pc == 0x424F0Cu) {
        ctx->pc = 0x424F0Cu;
            // 0x424f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x424F10u;
        goto label_424f10;
    }
    ctx->pc = 0x424F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424F08u;
            // 0x424f0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x424F10u;
label_424f10:
    // 0x424f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x424f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_424f14:
    // 0x424f14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x424f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_424f18:
    // 0x424f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x424f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_424f1c:
    // 0x424f1c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x424f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_424f20:
    // 0x424f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x424f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_424f24:
    // 0x424f24: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x424f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_424f28:
    // 0x424f28: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x424f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_424f2c:
    // 0x424f2c: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_424f30:
    if (ctx->pc == 0x424F30u) {
        ctx->pc = 0x424F30u;
            // 0x424f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x424F34u;
        goto label_424f34;
    }
    ctx->pc = 0x424F2Cu;
    {
        const bool branch_taken_0x424f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x424F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424F2Cu;
            // 0x424f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424f2c) {
            ctx->pc = 0x424F9Cu;
            goto label_424f9c;
        }
    }
    ctx->pc = 0x424F34u;
label_424f34:
    // 0x424f34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x424f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_424f38:
    // 0x424f38: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x424f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_424f3c:
    // 0x424f3c: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x424f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_424f40:
    // 0x424f40: 0x8c820968  lw          $v0, 0x968($a0)
    ctx->pc = 0x424f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_424f44:
    // 0x424f44: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_424f48:
    if (ctx->pc == 0x424F48u) {
        ctx->pc = 0x424F4Cu;
        goto label_424f4c;
    }
    ctx->pc = 0x424F44u;
    {
        const bool branch_taken_0x424f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x424f44) {
            ctx->pc = 0x424F9Cu;
            goto label_424f9c;
        }
    }
    ctx->pc = 0x424F4Cu;
label_424f4c:
    // 0x424f4c: 0x8c820cc4  lw          $v0, 0xCC4($a0)
    ctx->pc = 0x424f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
label_424f50:
    // 0x424f50: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_424f54:
    if (ctx->pc == 0x424F54u) {
        ctx->pc = 0x424F58u;
        goto label_424f58;
    }
    ctx->pc = 0x424F50u;
    {
        const bool branch_taken_0x424f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x424f50) {
            ctx->pc = 0x424F9Cu;
            goto label_424f9c;
        }
    }
    ctx->pc = 0x424F58u;
label_424f58:
    // 0x424f58: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x424f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_424f5c:
    // 0x424f5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x424f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_424f60:
    // 0x424f60: 0x2463c8c8  addiu       $v1, $v1, -0x3738
    ctx->pc = 0x424f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953160));
label_424f64:
    // 0x424f64: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x424f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_424f68:
    // 0x424f68: 0xac437430  sw          $v1, 0x7430($v0)
    ctx->pc = 0x424f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29744), GPR_U32(ctx, 3));
label_424f6c:
    // 0x424f6c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x424f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_424f70:
    // 0x424f70: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x424f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_424f74:
    // 0x424f74: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x424f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_424f78:
    // 0x424f78: 0xc440c82c  lwc1        $f0, -0x37D4($v0)
    ctx->pc = 0x424f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424f7c:
    // 0x424f7c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x424f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_424f80:
    // 0x424f80: 0xc441c824  lwc1        $f1, -0x37DC($v0)
    ctx->pc = 0x424f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_424f84:
    // 0x424f84: 0xe4a07440  swc1        $f0, 0x7440($a1)
    ctx->pc = 0x424f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 29760), bits); }
label_424f88:
    // 0x424f88: 0xc460c834  lwc1        $f0, -0x37CC($v1)
    ctx->pc = 0x424f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424f8c:
    // 0x424f8c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x424f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_424f90:
    // 0x424f90: 0xe4817438  swc1        $f1, 0x7438($a0)
    ctx->pc = 0x424f90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 29752), bits); }
label_424f94:
    // 0x424f94: 0x10000011  b           . + 4 + (0x11 << 2)
label_424f98:
    if (ctx->pc == 0x424F98u) {
        ctx->pc = 0x424F98u;
            // 0x424f98: 0xe440ffc0  swc1        $f0, -0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967232), bits); }
        ctx->pc = 0x424F9Cu;
        goto label_424f9c;
    }
    ctx->pc = 0x424F94u;
    {
        const bool branch_taken_0x424f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x424F94u;
            // 0x424f98: 0xe440ffc0  swc1        $f0, -0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x424f94) {
            ctx->pc = 0x424FDCu;
            goto label_424fdc;
        }
    }
    ctx->pc = 0x424F9Cu;
label_424f9c:
    // 0x424f9c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x424f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_424fa0:
    // 0x424fa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x424fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_424fa4:
    // 0x424fa4: 0x2463c850  addiu       $v1, $v1, -0x37B0
    ctx->pc = 0x424fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953040));
label_424fa8:
    // 0x424fa8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x424fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_424fac:
    // 0x424fac: 0xac437430  sw          $v1, 0x7430($v0)
    ctx->pc = 0x424facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29744), GPR_U32(ctx, 3));
label_424fb0:
    // 0x424fb0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x424fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_424fb4:
    // 0x424fb4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x424fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_424fb8:
    // 0x424fb8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x424fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_424fbc:
    // 0x424fbc: 0xc440c828  lwc1        $f0, -0x37D8($v0)
    ctx->pc = 0x424fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424fc0:
    // 0x424fc0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x424fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_424fc4:
    // 0x424fc4: 0xc441c820  lwc1        $f1, -0x37E0($v0)
    ctx->pc = 0x424fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_424fc8:
    // 0x424fc8: 0xe4a07440  swc1        $f0, 0x7440($a1)
    ctx->pc = 0x424fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 29760), bits); }
label_424fcc:
    // 0x424fcc: 0xc460c830  lwc1        $f0, -0x37D0($v1)
    ctx->pc = 0x424fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_424fd0:
    // 0x424fd0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x424fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_424fd4:
    // 0x424fd4: 0xe4817438  swc1        $f1, 0x7438($a0)
    ctx->pc = 0x424fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 29752), bits); }
label_424fd8:
    // 0x424fd8: 0xe440ffc0  swc1        $f0, -0x40($v0)
    ctx->pc = 0x424fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967232), bits); }
label_424fdc:
    // 0x424fdc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x424fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_424fe0:
    // 0x424fe0: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x424fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_424fe4:
    // 0x424fe4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x424fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_424fe8:
    // 0x424fe8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x424fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_424fec:
    // 0x424fec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x424fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_424ff0:
    // 0x424ff0: 0x24847390  addiu       $a0, $a0, 0x7390
    ctx->pc = 0x424ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
label_424ff4:
    // 0x424ff4: 0xc4427438  lwc1        $f2, 0x7438($v0)
    ctx->pc = 0x424ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_424ff8:
    // 0x424ff8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x424ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_424ffc:
    // 0x424ffc: 0xc463002c  lwc1        $f3, 0x2C($v1)
    ctx->pc = 0x424ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_425000:
    // 0x425000: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x425000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_425004:
    // 0x425004: 0xc4417440  lwc1        $f1, 0x7440($v0)
    ctx->pc = 0x425004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425008:
    // 0x425008: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x425008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_42500c:
    // 0x42500c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x42500cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_425010:
    // 0x425010: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x425010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_425014:
    // 0x425014: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x425014u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[1] = ctx->f[3] / ctx->f[1];
label_425018:
    // 0x425018: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x425018u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_42501c:
    // 0x42501c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42501cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_425020:
    // 0x425020: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x425020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_425024:
    // 0x425024: 0x0  nop
    ctx->pc = 0x425024u;
    // NOP
label_425028:
    // 0x425028: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x425028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_42502c:
    // 0x42502c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x42502cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_425030:
    // 0x425030: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x425030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_425034:
    // 0x425034: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x425034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_425038:
    // 0x425038: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x425038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_42503c:
    // 0x42503c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42503cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_425040:
    // 0x425040: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x425040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_425044:
    // 0x425044: 0xc04f278  jal         func_13C9E0
label_425048:
    if (ctx->pc == 0x425048u) {
        ctx->pc = 0x425048u;
            // 0x425048: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x42504Cu;
        goto label_42504c;
    }
    ctx->pc = 0x425044u;
    SET_GPR_U32(ctx, 31, 0x42504Cu);
    ctx->pc = 0x425048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425044u;
            // 0x425048: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42504Cu; }
        if (ctx->pc != 0x42504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42504Cu; }
        if (ctx->pc != 0x42504Cu) { return; }
    }
    ctx->pc = 0x42504Cu;
label_42504c:
    // 0x42504c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x42504cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_425050:
    // 0x425050: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x425050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_425054:
    // 0x425054: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x425054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_425058:
    // 0x425058: 0x24847410  addiu       $a0, $a0, 0x7410
    ctx->pc = 0x425058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29712));
label_42505c:
    // 0x42505c: 0x24a57390  addiu       $a1, $a1, 0x7390
    ctx->pc = 0x42505cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29584));
label_425060:
    // 0x425060: 0xc04cca0  jal         func_133280
label_425064:
    if (ctx->pc == 0x425064u) {
        ctx->pc = 0x425064u;
            // 0x425064: 0x24c6c810  addiu       $a2, $a2, -0x37F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952976));
        ctx->pc = 0x425068u;
        goto label_425068;
    }
    ctx->pc = 0x425060u;
    SET_GPR_U32(ctx, 31, 0x425068u);
    ctx->pc = 0x425064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425060u;
            // 0x425064: 0x24c6c810  addiu       $a2, $a2, -0x37F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425068u; }
        if (ctx->pc != 0x425068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425068u; }
        if (ctx->pc != 0x425068u) { return; }
    }
    ctx->pc = 0x425068u;
label_425068:
    // 0x425068: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x425068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_42506c:
    // 0x42506c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x42506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_425070:
    // 0x425070: 0xc04ce80  jal         func_133A00
label_425074:
    if (ctx->pc == 0x425074u) {
        ctx->pc = 0x425074u;
            // 0x425074: 0x24847390  addiu       $a0, $a0, 0x7390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
        ctx->pc = 0x425078u;
        goto label_425078;
    }
    ctx->pc = 0x425070u;
    SET_GPR_U32(ctx, 31, 0x425078u);
    ctx->pc = 0x425074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425070u;
            // 0x425074: 0x24847390  addiu       $a0, $a0, 0x7390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425078u; }
        if (ctx->pc != 0x425078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425078u; }
        if (ctx->pc != 0x425078u) { return; }
    }
    ctx->pc = 0x425078u;
label_425078:
    // 0x425078: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x425078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_42507c:
    // 0x42507c: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x42507cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_425080:
    // 0x425080: 0x248473d0  addiu       $a0, $a0, 0x73D0
    ctx->pc = 0x425080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29648));
label_425084:
    // 0x425084: 0xc04ccf4  jal         func_1333D0
label_425088:
    if (ctx->pc == 0x425088u) {
        ctx->pc = 0x425088u;
            // 0x425088: 0x24a57390  addiu       $a1, $a1, 0x7390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29584));
        ctx->pc = 0x42508Cu;
        goto label_42508c;
    }
    ctx->pc = 0x425084u;
    SET_GPR_U32(ctx, 31, 0x42508Cu);
    ctx->pc = 0x425088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x425084u;
            // 0x425088: 0x24a57390  addiu       $a1, $a1, 0x7390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42508Cu; }
        if (ctx->pc != 0x42508Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42508Cu; }
        if (ctx->pc != 0x42508Cu) { return; }
    }
    ctx->pc = 0x42508Cu;
label_42508c:
    // 0x42508c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_425090:
    // 0x425090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x425090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_425094:
    // 0x425094: 0x3e00008  jr          $ra
label_425098:
    if (ctx->pc == 0x425098u) {
        ctx->pc = 0x425098u;
            // 0x425098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42509Cu;
        goto label_42509c;
    }
    ctx->pc = 0x425094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x425094u;
            // 0x425098: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42509Cu;
label_42509c:
    // 0x42509c: 0x0  nop
    ctx->pc = 0x42509cu;
    // NOP
}
