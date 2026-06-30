#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00557C00
// Address: 0x557c00 - 0x558100
void sub_00557C00_0x557c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00557C00_0x557c00");
#endif

    switch (ctx->pc) {
        case 0x557c00u: goto label_557c00;
        case 0x557c04u: goto label_557c04;
        case 0x557c08u: goto label_557c08;
        case 0x557c0cu: goto label_557c0c;
        case 0x557c10u: goto label_557c10;
        case 0x557c14u: goto label_557c14;
        case 0x557c18u: goto label_557c18;
        case 0x557c1cu: goto label_557c1c;
        case 0x557c20u: goto label_557c20;
        case 0x557c24u: goto label_557c24;
        case 0x557c28u: goto label_557c28;
        case 0x557c2cu: goto label_557c2c;
        case 0x557c30u: goto label_557c30;
        case 0x557c34u: goto label_557c34;
        case 0x557c38u: goto label_557c38;
        case 0x557c3cu: goto label_557c3c;
        case 0x557c40u: goto label_557c40;
        case 0x557c44u: goto label_557c44;
        case 0x557c48u: goto label_557c48;
        case 0x557c4cu: goto label_557c4c;
        case 0x557c50u: goto label_557c50;
        case 0x557c54u: goto label_557c54;
        case 0x557c58u: goto label_557c58;
        case 0x557c5cu: goto label_557c5c;
        case 0x557c60u: goto label_557c60;
        case 0x557c64u: goto label_557c64;
        case 0x557c68u: goto label_557c68;
        case 0x557c6cu: goto label_557c6c;
        case 0x557c70u: goto label_557c70;
        case 0x557c74u: goto label_557c74;
        case 0x557c78u: goto label_557c78;
        case 0x557c7cu: goto label_557c7c;
        case 0x557c80u: goto label_557c80;
        case 0x557c84u: goto label_557c84;
        case 0x557c88u: goto label_557c88;
        case 0x557c8cu: goto label_557c8c;
        case 0x557c90u: goto label_557c90;
        case 0x557c94u: goto label_557c94;
        case 0x557c98u: goto label_557c98;
        case 0x557c9cu: goto label_557c9c;
        case 0x557ca0u: goto label_557ca0;
        case 0x557ca4u: goto label_557ca4;
        case 0x557ca8u: goto label_557ca8;
        case 0x557cacu: goto label_557cac;
        case 0x557cb0u: goto label_557cb0;
        case 0x557cb4u: goto label_557cb4;
        case 0x557cb8u: goto label_557cb8;
        case 0x557cbcu: goto label_557cbc;
        case 0x557cc0u: goto label_557cc0;
        case 0x557cc4u: goto label_557cc4;
        case 0x557cc8u: goto label_557cc8;
        case 0x557cccu: goto label_557ccc;
        case 0x557cd0u: goto label_557cd0;
        case 0x557cd4u: goto label_557cd4;
        case 0x557cd8u: goto label_557cd8;
        case 0x557cdcu: goto label_557cdc;
        case 0x557ce0u: goto label_557ce0;
        case 0x557ce4u: goto label_557ce4;
        case 0x557ce8u: goto label_557ce8;
        case 0x557cecu: goto label_557cec;
        case 0x557cf0u: goto label_557cf0;
        case 0x557cf4u: goto label_557cf4;
        case 0x557cf8u: goto label_557cf8;
        case 0x557cfcu: goto label_557cfc;
        case 0x557d00u: goto label_557d00;
        case 0x557d04u: goto label_557d04;
        case 0x557d08u: goto label_557d08;
        case 0x557d0cu: goto label_557d0c;
        case 0x557d10u: goto label_557d10;
        case 0x557d14u: goto label_557d14;
        case 0x557d18u: goto label_557d18;
        case 0x557d1cu: goto label_557d1c;
        case 0x557d20u: goto label_557d20;
        case 0x557d24u: goto label_557d24;
        case 0x557d28u: goto label_557d28;
        case 0x557d2cu: goto label_557d2c;
        case 0x557d30u: goto label_557d30;
        case 0x557d34u: goto label_557d34;
        case 0x557d38u: goto label_557d38;
        case 0x557d3cu: goto label_557d3c;
        case 0x557d40u: goto label_557d40;
        case 0x557d44u: goto label_557d44;
        case 0x557d48u: goto label_557d48;
        case 0x557d4cu: goto label_557d4c;
        case 0x557d50u: goto label_557d50;
        case 0x557d54u: goto label_557d54;
        case 0x557d58u: goto label_557d58;
        case 0x557d5cu: goto label_557d5c;
        case 0x557d60u: goto label_557d60;
        case 0x557d64u: goto label_557d64;
        case 0x557d68u: goto label_557d68;
        case 0x557d6cu: goto label_557d6c;
        case 0x557d70u: goto label_557d70;
        case 0x557d74u: goto label_557d74;
        case 0x557d78u: goto label_557d78;
        case 0x557d7cu: goto label_557d7c;
        case 0x557d80u: goto label_557d80;
        case 0x557d84u: goto label_557d84;
        case 0x557d88u: goto label_557d88;
        case 0x557d8cu: goto label_557d8c;
        case 0x557d90u: goto label_557d90;
        case 0x557d94u: goto label_557d94;
        case 0x557d98u: goto label_557d98;
        case 0x557d9cu: goto label_557d9c;
        case 0x557da0u: goto label_557da0;
        case 0x557da4u: goto label_557da4;
        case 0x557da8u: goto label_557da8;
        case 0x557dacu: goto label_557dac;
        case 0x557db0u: goto label_557db0;
        case 0x557db4u: goto label_557db4;
        case 0x557db8u: goto label_557db8;
        case 0x557dbcu: goto label_557dbc;
        case 0x557dc0u: goto label_557dc0;
        case 0x557dc4u: goto label_557dc4;
        case 0x557dc8u: goto label_557dc8;
        case 0x557dccu: goto label_557dcc;
        case 0x557dd0u: goto label_557dd0;
        case 0x557dd4u: goto label_557dd4;
        case 0x557dd8u: goto label_557dd8;
        case 0x557ddcu: goto label_557ddc;
        case 0x557de0u: goto label_557de0;
        case 0x557de4u: goto label_557de4;
        case 0x557de8u: goto label_557de8;
        case 0x557decu: goto label_557dec;
        case 0x557df0u: goto label_557df0;
        case 0x557df4u: goto label_557df4;
        case 0x557df8u: goto label_557df8;
        case 0x557dfcu: goto label_557dfc;
        case 0x557e00u: goto label_557e00;
        case 0x557e04u: goto label_557e04;
        case 0x557e08u: goto label_557e08;
        case 0x557e0cu: goto label_557e0c;
        case 0x557e10u: goto label_557e10;
        case 0x557e14u: goto label_557e14;
        case 0x557e18u: goto label_557e18;
        case 0x557e1cu: goto label_557e1c;
        case 0x557e20u: goto label_557e20;
        case 0x557e24u: goto label_557e24;
        case 0x557e28u: goto label_557e28;
        case 0x557e2cu: goto label_557e2c;
        case 0x557e30u: goto label_557e30;
        case 0x557e34u: goto label_557e34;
        case 0x557e38u: goto label_557e38;
        case 0x557e3cu: goto label_557e3c;
        case 0x557e40u: goto label_557e40;
        case 0x557e44u: goto label_557e44;
        case 0x557e48u: goto label_557e48;
        case 0x557e4cu: goto label_557e4c;
        case 0x557e50u: goto label_557e50;
        case 0x557e54u: goto label_557e54;
        case 0x557e58u: goto label_557e58;
        case 0x557e5cu: goto label_557e5c;
        case 0x557e60u: goto label_557e60;
        case 0x557e64u: goto label_557e64;
        case 0x557e68u: goto label_557e68;
        case 0x557e6cu: goto label_557e6c;
        case 0x557e70u: goto label_557e70;
        case 0x557e74u: goto label_557e74;
        case 0x557e78u: goto label_557e78;
        case 0x557e7cu: goto label_557e7c;
        case 0x557e80u: goto label_557e80;
        case 0x557e84u: goto label_557e84;
        case 0x557e88u: goto label_557e88;
        case 0x557e8cu: goto label_557e8c;
        case 0x557e90u: goto label_557e90;
        case 0x557e94u: goto label_557e94;
        case 0x557e98u: goto label_557e98;
        case 0x557e9cu: goto label_557e9c;
        case 0x557ea0u: goto label_557ea0;
        case 0x557ea4u: goto label_557ea4;
        case 0x557ea8u: goto label_557ea8;
        case 0x557eacu: goto label_557eac;
        case 0x557eb0u: goto label_557eb0;
        case 0x557eb4u: goto label_557eb4;
        case 0x557eb8u: goto label_557eb8;
        case 0x557ebcu: goto label_557ebc;
        case 0x557ec0u: goto label_557ec0;
        case 0x557ec4u: goto label_557ec4;
        case 0x557ec8u: goto label_557ec8;
        case 0x557eccu: goto label_557ecc;
        case 0x557ed0u: goto label_557ed0;
        case 0x557ed4u: goto label_557ed4;
        case 0x557ed8u: goto label_557ed8;
        case 0x557edcu: goto label_557edc;
        case 0x557ee0u: goto label_557ee0;
        case 0x557ee4u: goto label_557ee4;
        case 0x557ee8u: goto label_557ee8;
        case 0x557eecu: goto label_557eec;
        case 0x557ef0u: goto label_557ef0;
        case 0x557ef4u: goto label_557ef4;
        case 0x557ef8u: goto label_557ef8;
        case 0x557efcu: goto label_557efc;
        case 0x557f00u: goto label_557f00;
        case 0x557f04u: goto label_557f04;
        case 0x557f08u: goto label_557f08;
        case 0x557f0cu: goto label_557f0c;
        case 0x557f10u: goto label_557f10;
        case 0x557f14u: goto label_557f14;
        case 0x557f18u: goto label_557f18;
        case 0x557f1cu: goto label_557f1c;
        case 0x557f20u: goto label_557f20;
        case 0x557f24u: goto label_557f24;
        case 0x557f28u: goto label_557f28;
        case 0x557f2cu: goto label_557f2c;
        case 0x557f30u: goto label_557f30;
        case 0x557f34u: goto label_557f34;
        case 0x557f38u: goto label_557f38;
        case 0x557f3cu: goto label_557f3c;
        case 0x557f40u: goto label_557f40;
        case 0x557f44u: goto label_557f44;
        case 0x557f48u: goto label_557f48;
        case 0x557f4cu: goto label_557f4c;
        case 0x557f50u: goto label_557f50;
        case 0x557f54u: goto label_557f54;
        case 0x557f58u: goto label_557f58;
        case 0x557f5cu: goto label_557f5c;
        case 0x557f60u: goto label_557f60;
        case 0x557f64u: goto label_557f64;
        case 0x557f68u: goto label_557f68;
        case 0x557f6cu: goto label_557f6c;
        case 0x557f70u: goto label_557f70;
        case 0x557f74u: goto label_557f74;
        case 0x557f78u: goto label_557f78;
        case 0x557f7cu: goto label_557f7c;
        case 0x557f80u: goto label_557f80;
        case 0x557f84u: goto label_557f84;
        case 0x557f88u: goto label_557f88;
        case 0x557f8cu: goto label_557f8c;
        case 0x557f90u: goto label_557f90;
        case 0x557f94u: goto label_557f94;
        case 0x557f98u: goto label_557f98;
        case 0x557f9cu: goto label_557f9c;
        case 0x557fa0u: goto label_557fa0;
        case 0x557fa4u: goto label_557fa4;
        case 0x557fa8u: goto label_557fa8;
        case 0x557facu: goto label_557fac;
        case 0x557fb0u: goto label_557fb0;
        case 0x557fb4u: goto label_557fb4;
        case 0x557fb8u: goto label_557fb8;
        case 0x557fbcu: goto label_557fbc;
        case 0x557fc0u: goto label_557fc0;
        case 0x557fc4u: goto label_557fc4;
        case 0x557fc8u: goto label_557fc8;
        case 0x557fccu: goto label_557fcc;
        case 0x557fd0u: goto label_557fd0;
        case 0x557fd4u: goto label_557fd4;
        case 0x557fd8u: goto label_557fd8;
        case 0x557fdcu: goto label_557fdc;
        case 0x557fe0u: goto label_557fe0;
        case 0x557fe4u: goto label_557fe4;
        case 0x557fe8u: goto label_557fe8;
        case 0x557fecu: goto label_557fec;
        case 0x557ff0u: goto label_557ff0;
        case 0x557ff4u: goto label_557ff4;
        case 0x557ff8u: goto label_557ff8;
        case 0x557ffcu: goto label_557ffc;
        case 0x558000u: goto label_558000;
        case 0x558004u: goto label_558004;
        case 0x558008u: goto label_558008;
        case 0x55800cu: goto label_55800c;
        case 0x558010u: goto label_558010;
        case 0x558014u: goto label_558014;
        case 0x558018u: goto label_558018;
        case 0x55801cu: goto label_55801c;
        case 0x558020u: goto label_558020;
        case 0x558024u: goto label_558024;
        case 0x558028u: goto label_558028;
        case 0x55802cu: goto label_55802c;
        case 0x558030u: goto label_558030;
        case 0x558034u: goto label_558034;
        case 0x558038u: goto label_558038;
        case 0x55803cu: goto label_55803c;
        case 0x558040u: goto label_558040;
        case 0x558044u: goto label_558044;
        case 0x558048u: goto label_558048;
        case 0x55804cu: goto label_55804c;
        case 0x558050u: goto label_558050;
        case 0x558054u: goto label_558054;
        case 0x558058u: goto label_558058;
        case 0x55805cu: goto label_55805c;
        case 0x558060u: goto label_558060;
        case 0x558064u: goto label_558064;
        case 0x558068u: goto label_558068;
        case 0x55806cu: goto label_55806c;
        case 0x558070u: goto label_558070;
        case 0x558074u: goto label_558074;
        case 0x558078u: goto label_558078;
        case 0x55807cu: goto label_55807c;
        case 0x558080u: goto label_558080;
        case 0x558084u: goto label_558084;
        case 0x558088u: goto label_558088;
        case 0x55808cu: goto label_55808c;
        case 0x558090u: goto label_558090;
        case 0x558094u: goto label_558094;
        case 0x558098u: goto label_558098;
        case 0x55809cu: goto label_55809c;
        case 0x5580a0u: goto label_5580a0;
        case 0x5580a4u: goto label_5580a4;
        case 0x5580a8u: goto label_5580a8;
        case 0x5580acu: goto label_5580ac;
        case 0x5580b0u: goto label_5580b0;
        case 0x5580b4u: goto label_5580b4;
        case 0x5580b8u: goto label_5580b8;
        case 0x5580bcu: goto label_5580bc;
        case 0x5580c0u: goto label_5580c0;
        case 0x5580c4u: goto label_5580c4;
        case 0x5580c8u: goto label_5580c8;
        case 0x5580ccu: goto label_5580cc;
        case 0x5580d0u: goto label_5580d0;
        case 0x5580d4u: goto label_5580d4;
        case 0x5580d8u: goto label_5580d8;
        case 0x5580dcu: goto label_5580dc;
        case 0x5580e0u: goto label_5580e0;
        case 0x5580e4u: goto label_5580e4;
        case 0x5580e8u: goto label_5580e8;
        case 0x5580ecu: goto label_5580ec;
        case 0x5580f0u: goto label_5580f0;
        case 0x5580f4u: goto label_5580f4;
        case 0x5580f8u: goto label_5580f8;
        case 0x5580fcu: goto label_5580fc;
        default: break;
    }

    ctx->pc = 0x557c00u;

label_557c00:
    // 0x557c00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x557c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_557c04:
    // 0x557c04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x557c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_557c08:
    // 0x557c08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x557c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_557c0c:
    // 0x557c0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x557c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_557c10:
    // 0x557c10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x557c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_557c14:
    // 0x557c14: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x557c14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_557c18:
    // 0x557c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x557c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_557c1c:
    // 0x557c1c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x557c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_557c20:
    // 0x557c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x557c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_557c24:
    // 0x557c24: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x557c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_557c28:
    // 0x557c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x557c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_557c2c:
    // 0x557c2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x557c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_557c30:
    // 0x557c30: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x557c30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_557c34:
    // 0x557c34: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_557c38:
    if (ctx->pc == 0x557C38u) {
        ctx->pc = 0x557C38u;
            // 0x557c38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557C3Cu;
        goto label_557c3c;
    }
    ctx->pc = 0x557C34u;
    {
        const bool branch_taken_0x557c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x557C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557C34u;
            // 0x557c38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557c34) {
            ctx->pc = 0x557E34u;
            goto label_557e34;
        }
    }
    ctx->pc = 0x557C3Cu;
label_557c3c:
    // 0x557c3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x557c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_557c40:
    // 0x557c40: 0xc04f278  jal         func_13C9E0
label_557c44:
    if (ctx->pc == 0x557C44u) {
        ctx->pc = 0x557C44u;
            // 0x557c44: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x557C48u;
        goto label_557c48;
    }
    ctx->pc = 0x557C40u;
    SET_GPR_U32(ctx, 31, 0x557C48u);
    ctx->pc = 0x557C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557C40u;
            // 0x557c44: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C48u; }
        if (ctx->pc != 0x557C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C48u; }
        if (ctx->pc != 0x557C48u) { return; }
    }
    ctx->pc = 0x557C48u;
label_557c48:
    // 0x557c48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x557c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_557c4c:
    // 0x557c4c: 0xc04ce80  jal         func_133A00
label_557c50:
    if (ctx->pc == 0x557C50u) {
        ctx->pc = 0x557C50u;
            // 0x557c50: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x557C54u;
        goto label_557c54;
    }
    ctx->pc = 0x557C4Cu;
    SET_GPR_U32(ctx, 31, 0x557C54u);
    ctx->pc = 0x557C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557C4Cu;
            // 0x557c50: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C54u; }
        if (ctx->pc != 0x557C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C54u; }
        if (ctx->pc != 0x557C54u) { return; }
    }
    ctx->pc = 0x557C54u;
label_557c54:
    // 0x557c54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x557c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_557c58:
    // 0x557c58: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x557c58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_557c5c:
    // 0x557c5c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x557c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_557c60:
    // 0x557c60: 0xc07698c  jal         func_1DA630
label_557c64:
    if (ctx->pc == 0x557C64u) {
        ctx->pc = 0x557C64u;
            // 0x557c64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557C68u;
        goto label_557c68;
    }
    ctx->pc = 0x557C60u;
    SET_GPR_U32(ctx, 31, 0x557C68u);
    ctx->pc = 0x557C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557C60u;
            // 0x557c64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C68u; }
        if (ctx->pc != 0x557C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C68u; }
        if (ctx->pc != 0x557C68u) { return; }
    }
    ctx->pc = 0x557C68u;
label_557c68:
    // 0x557c68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x557c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_557c6c:
    // 0x557c6c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_557c70:
    if (ctx->pc == 0x557C70u) {
        ctx->pc = 0x557C74u;
        goto label_557c74;
    }
    ctx->pc = 0x557C6Cu;
    {
        const bool branch_taken_0x557c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x557c6c) {
            ctx->pc = 0x557C7Cu;
            goto label_557c7c;
        }
    }
    ctx->pc = 0x557C74u;
label_557c74:
    // 0x557c74: 0x10000033  b           . + 4 + (0x33 << 2)
label_557c78:
    if (ctx->pc == 0x557C78u) {
        ctx->pc = 0x557C78u;
            // 0x557c78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x557C7Cu;
        goto label_557c7c;
    }
    ctx->pc = 0x557C74u;
    {
        const bool branch_taken_0x557c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x557C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557C74u;
            // 0x557c78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557c74) {
            ctx->pc = 0x557D44u;
            goto label_557d44;
        }
    }
    ctx->pc = 0x557C7Cu;
label_557c7c:
    // 0x557c7c: 0xc0576f4  jal         func_15DBD0
label_557c80:
    if (ctx->pc == 0x557C80u) {
        ctx->pc = 0x557C84u;
        goto label_557c84;
    }
    ctx->pc = 0x557C7Cu;
    SET_GPR_U32(ctx, 31, 0x557C84u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C84u; }
        if (ctx->pc != 0x557C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C84u; }
        if (ctx->pc != 0x557C84u) { return; }
    }
    ctx->pc = 0x557C84u;
label_557c84:
    // 0x557c84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x557c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_557c88:
    // 0x557c88: 0xc076984  jal         func_1DA610
label_557c8c:
    if (ctx->pc == 0x557C8Cu) {
        ctx->pc = 0x557C8Cu;
            // 0x557c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557C90u;
        goto label_557c90;
    }
    ctx->pc = 0x557C88u;
    SET_GPR_U32(ctx, 31, 0x557C90u);
    ctx->pc = 0x557C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557C88u;
            // 0x557c8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C90u; }
        if (ctx->pc != 0x557C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557C90u; }
        if (ctx->pc != 0x557C90u) { return; }
    }
    ctx->pc = 0x557C90u;
label_557c90:
    // 0x557c90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x557c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_557c94:
    // 0x557c94: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x557c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_557c98:
    // 0x557c98: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x557c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_557c9c:
    // 0x557c9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x557c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_557ca0:
    // 0x557ca0: 0xc442dc60  lwc1        $f2, -0x23A0($v0)
    ctx->pc = 0x557ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_557ca4:
    // 0x557ca4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x557ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_557ca8:
    // 0x557ca8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x557ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_557cac:
    // 0x557cac: 0xc441dc68  lwc1        $f1, -0x2398($v0)
    ctx->pc = 0x557cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557cb0:
    // 0x557cb0: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x557cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_557cb4:
    // 0x557cb4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x557cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_557cb8:
    // 0x557cb8: 0xc440dc6c  lwc1        $f0, -0x2394($v0)
    ctx->pc = 0x557cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_557cbc:
    // 0x557cbc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x557cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_557cc0:
    // 0x557cc0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x557cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_557cc4:
    // 0x557cc4: 0x8c42dc64  lw          $v0, -0x239C($v0)
    ctx->pc = 0x557cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958180)));
label_557cc8:
    // 0x557cc8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x557cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_557ccc:
    // 0x557ccc: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x557cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_557cd0:
    // 0x557cd0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x557cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_557cd4:
    // 0x557cd4: 0xc04cca0  jal         func_133280
label_557cd8:
    if (ctx->pc == 0x557CD8u) {
        ctx->pc = 0x557CD8u;
            // 0x557cd8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x557CDCu;
        goto label_557cdc;
    }
    ctx->pc = 0x557CD4u;
    SET_GPR_U32(ctx, 31, 0x557CDCu);
    ctx->pc = 0x557CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557CD4u;
            // 0x557cd8: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557CDCu; }
        if (ctx->pc != 0x557CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557CDCu; }
        if (ctx->pc != 0x557CDCu) { return; }
    }
    ctx->pc = 0x557CDCu;
label_557cdc:
    // 0x557cdc: 0xc076980  jal         func_1DA600
label_557ce0:
    if (ctx->pc == 0x557CE0u) {
        ctx->pc = 0x557CE0u;
            // 0x557ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557CE4u;
        goto label_557ce4;
    }
    ctx->pc = 0x557CDCu;
    SET_GPR_U32(ctx, 31, 0x557CE4u);
    ctx->pc = 0x557CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557CDCu;
            // 0x557ce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557CE4u; }
        if (ctx->pc != 0x557CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557CE4u; }
        if (ctx->pc != 0x557CE4u) { return; }
    }
    ctx->pc = 0x557CE4u;
label_557ce4:
    // 0x557ce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x557ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_557ce8:
    // 0x557ce8: 0xc04cc34  jal         func_1330D0
label_557cec:
    if (ctx->pc == 0x557CECu) {
        ctx->pc = 0x557CECu;
            // 0x557cec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x557CF0u;
        goto label_557cf0;
    }
    ctx->pc = 0x557CE8u;
    SET_GPR_U32(ctx, 31, 0x557CF0u);
    ctx->pc = 0x557CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557CE8u;
            // 0x557cec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557CF0u; }
        if (ctx->pc != 0x557CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557CF0u; }
        if (ctx->pc != 0x557CF0u) { return; }
    }
    ctx->pc = 0x557CF0u;
label_557cf0:
    // 0x557cf0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x557cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_557cf4:
    // 0x557cf4: 0xc441efc8  lwc1        $f1, -0x1038($v0)
    ctx->pc = 0x557cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294963144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_557cf8:
    // 0x557cf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x557cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_557cfc:
    // 0x557cfc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_557d00:
    if (ctx->pc == 0x557D00u) {
        ctx->pc = 0x557D00u;
            // 0x557d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557D04u;
        goto label_557d04;
    }
    ctx->pc = 0x557CFCu;
    {
        const bool branch_taken_0x557cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x557cfc) {
            ctx->pc = 0x557D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557CFCu;
            // 0x557d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x557D0Cu;
            goto label_557d0c;
        }
    }
    ctx->pc = 0x557D04u;
label_557d04:
    // 0x557d04: 0x1000000f  b           . + 4 + (0xF << 2)
label_557d08:
    if (ctx->pc == 0x557D08u) {
        ctx->pc = 0x557D08u;
            // 0x557d08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x557D0Cu;
        goto label_557d0c;
    }
    ctx->pc = 0x557D04u;
    {
        const bool branch_taken_0x557d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x557D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557D04u;
            // 0x557d08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557d04) {
            ctx->pc = 0x557D44u;
            goto label_557d44;
        }
    }
    ctx->pc = 0x557D0Cu;
label_557d0c:
    // 0x557d0c: 0xc07697c  jal         func_1DA5F0
label_557d10:
    if (ctx->pc == 0x557D10u) {
        ctx->pc = 0x557D14u;
        goto label_557d14;
    }
    ctx->pc = 0x557D0Cu;
    SET_GPR_U32(ctx, 31, 0x557D14u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557D14u; }
        if (ctx->pc != 0x557D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557D14u; }
        if (ctx->pc != 0x557D14u) { return; }
    }
    ctx->pc = 0x557D14u;
label_557d14:
    // 0x557d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x557d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_557d18:
    // 0x557d18: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x557d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_557d1c:
    // 0x557d1c: 0xc04cd60  jal         func_133580
label_557d20:
    if (ctx->pc == 0x557D20u) {
        ctx->pc = 0x557D20u;
            // 0x557d20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557D24u;
        goto label_557d24;
    }
    ctx->pc = 0x557D1Cu;
    SET_GPR_U32(ctx, 31, 0x557D24u);
    ctx->pc = 0x557D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557D1Cu;
            // 0x557d20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557D24u; }
        if (ctx->pc != 0x557D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557D24u; }
        if (ctx->pc != 0x557D24u) { return; }
    }
    ctx->pc = 0x557D24u;
label_557d24:
    // 0x557d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x557d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_557d28:
    // 0x557d28: 0xc04c650  jal         func_131940
label_557d2c:
    if (ctx->pc == 0x557D2Cu) {
        ctx->pc = 0x557D2Cu;
            // 0x557d2c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x557D30u;
        goto label_557d30;
    }
    ctx->pc = 0x557D28u;
    SET_GPR_U32(ctx, 31, 0x557D30u);
    ctx->pc = 0x557D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557D28u;
            // 0x557d2c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557D30u; }
        if (ctx->pc != 0x557D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557D30u; }
        if (ctx->pc != 0x557D30u) { return; }
    }
    ctx->pc = 0x557D30u;
label_557d30:
    // 0x557d30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x557d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_557d34:
    // 0x557d34: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x557d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_557d38:
    // 0x557d38: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x557d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_557d3c:
    // 0x557d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x557d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_557d40:
    // 0x557d40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x557d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_557d44:
    // 0x557d44: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x557d44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_557d48:
    // 0x557d48: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_557d4c:
    if (ctx->pc == 0x557D4Cu) {
        ctx->pc = 0x557D4Cu;
            // 0x557d4c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x557D50u;
        goto label_557d50;
    }
    ctx->pc = 0x557D48u;
    {
        const bool branch_taken_0x557d48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x557D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557D48u;
            // 0x557d4c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557d48) {
            ctx->pc = 0x557D58u;
            goto label_557d58;
        }
    }
    ctx->pc = 0x557D50u;
label_557d50:
    // 0x557d50: 0x10000039  b           . + 4 + (0x39 << 2)
label_557d54:
    if (ctx->pc == 0x557D54u) {
        ctx->pc = 0x557D54u;
            // 0x557d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557D58u;
        goto label_557d58;
    }
    ctx->pc = 0x557D50u;
    {
        const bool branch_taken_0x557d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x557D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557D50u;
            // 0x557d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557d50) {
            ctx->pc = 0x557E38u;
            goto label_557e38;
        }
    }
    ctx->pc = 0x557D58u;
label_557d58:
    // 0x557d58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x557d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_557d5c:
    // 0x557d5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557d60:
    // 0x557d60: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x557d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_557d64:
    // 0x557d64: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x557d64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_557d68:
    // 0x557d68: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x557d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_557d6c:
    // 0x557d6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x557d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_557d70:
    // 0x557d70: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x557d70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_557d74:
    // 0x557d74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557d78:
    // 0x557d78: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x557d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_557d7c:
    // 0x557d7c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x557d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_557d80:
    // 0x557d80: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x557d80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_557d84:
    // 0x557d84: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x557d84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_557d88:
    // 0x557d88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x557d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_557d8c:
    // 0x557d8c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x557d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_557d90:
    // 0x557d90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557d94:
    // 0x557d94: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x557d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_557d98:
    // 0x557d98: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x557d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_557d9c:
    // 0x557d9c: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x557d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_557da0:
    // 0x557da0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x557da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_557da4:
    // 0x557da4: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x557da4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_557da8:
    // 0x557da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x557da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557dac:
    // 0x557dac: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x557dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_557db0:
    // 0x557db0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x557db0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_557db4:
    // 0x557db4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x557db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_557db8:
    // 0x557db8: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x557db8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_557dbc:
    // 0x557dbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557dc0:
    // 0x557dc0: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x557dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_557dc4:
    // 0x557dc4: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x557dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_557dc8:
    // 0x557dc8: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x557dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_557dcc:
    // 0x557dcc: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x557dccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_557dd0:
    // 0x557dd0: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x557dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_557dd4:
    // 0x557dd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x557dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_557dd8:
    // 0x557dd8: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x557dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_557ddc:
    // 0x557ddc: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x557ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_557de0:
    // 0x557de0: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x557de0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_557de4:
    // 0x557de4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x557de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_557de8:
    // 0x557de8: 0xc04e4a4  jal         func_139290
label_557dec:
    if (ctx->pc == 0x557DECu) {
        ctx->pc = 0x557DECu;
            // 0x557dec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557DF0u;
        goto label_557df0;
    }
    ctx->pc = 0x557DE8u;
    SET_GPR_U32(ctx, 31, 0x557DF0u);
    ctx->pc = 0x557DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557DE8u;
            // 0x557dec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557DF0u; }
        if (ctx->pc != 0x557DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557DF0u; }
        if (ctx->pc != 0x557DF0u) { return; }
    }
    ctx->pc = 0x557DF0u;
label_557df0:
    // 0x557df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x557df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_557df4:
    // 0x557df4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x557df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_557df8:
    // 0x557df8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x557df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_557dfc:
    // 0x557dfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x557dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_557e00:
    // 0x557e00: 0xc04cd60  jal         func_133580
label_557e04:
    if (ctx->pc == 0x557E04u) {
        ctx->pc = 0x557E04u;
            // 0x557e04: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x557E08u;
        goto label_557e08;
    }
    ctx->pc = 0x557E00u;
    SET_GPR_U32(ctx, 31, 0x557E08u);
    ctx->pc = 0x557E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557E00u;
            // 0x557e04: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557E08u; }
        if (ctx->pc != 0x557E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557E08u; }
        if (ctx->pc != 0x557E08u) { return; }
    }
    ctx->pc = 0x557E08u;
label_557e08:
    // 0x557e08: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x557e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_557e0c:
    // 0x557e0c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x557e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_557e10:
    // 0x557e10: 0x320f809  jalr        $t9
label_557e14:
    if (ctx->pc == 0x557E14u) {
        ctx->pc = 0x557E14u;
            // 0x557e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557E18u;
        goto label_557e18;
    }
    ctx->pc = 0x557E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x557E18u);
        ctx->pc = 0x557E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557E10u;
            // 0x557e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x557E18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x557E18u; }
            if (ctx->pc != 0x557E18u) { return; }
        }
        }
    }
    ctx->pc = 0x557E18u;
label_557e18:
    // 0x557e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x557e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_557e1c:
    // 0x557e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x557e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_557e20:
    // 0x557e20: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x557e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_557e24:
    // 0x557e24: 0xc054fd4  jal         func_153F50
label_557e28:
    if (ctx->pc == 0x557E28u) {
        ctx->pc = 0x557E28u;
            // 0x557e28: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557E2Cu;
        goto label_557e2c;
    }
    ctx->pc = 0x557E24u;
    SET_GPR_U32(ctx, 31, 0x557E2Cu);
    ctx->pc = 0x557E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557E24u;
            // 0x557e28: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557E2Cu; }
        if (ctx->pc != 0x557E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557E2Cu; }
        if (ctx->pc != 0x557E2Cu) { return; }
    }
    ctx->pc = 0x557E2Cu;
label_557e2c:
    // 0x557e2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_557e30:
    if (ctx->pc == 0x557E30u) {
        ctx->pc = 0x557E30u;
            // 0x557e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x557E34u;
        goto label_557e34;
    }
    ctx->pc = 0x557E2Cu;
    {
        const bool branch_taken_0x557e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x557E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557E2Cu;
            // 0x557e30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557e2c) {
            ctx->pc = 0x557E38u;
            goto label_557e38;
        }
    }
    ctx->pc = 0x557E34u;
label_557e34:
    // 0x557e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x557e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557e38:
    // 0x557e38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x557e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_557e3c:
    // 0x557e3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x557e3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_557e40:
    // 0x557e40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x557e40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_557e44:
    // 0x557e44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x557e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_557e48:
    // 0x557e48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x557e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_557e4c:
    // 0x557e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x557e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_557e50:
    // 0x557e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x557e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_557e54:
    // 0x557e54: 0x3e00008  jr          $ra
label_557e58:
    if (ctx->pc == 0x557E58u) {
        ctx->pc = 0x557E58u;
            // 0x557e58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x557E5Cu;
        goto label_557e5c;
    }
    ctx->pc = 0x557E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557E54u;
            // 0x557e58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557E5Cu;
label_557e5c:
    // 0x557e5c: 0x0  nop
    ctx->pc = 0x557e5cu;
    // NOP
label_557e60:
    // 0x557e60: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x557e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_557e64:
    // 0x557e64: 0x3e00008  jr          $ra
label_557e68:
    if (ctx->pc == 0x557E68u) {
        ctx->pc = 0x557E68u;
            // 0x557e68: 0x2442efb8  addiu       $v0, $v0, -0x1048 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963128));
        ctx->pc = 0x557E6Cu;
        goto label_557e6c;
    }
    ctx->pc = 0x557E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557E64u;
            // 0x557e68: 0x2442efb8  addiu       $v0, $v0, -0x1048 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557E6Cu;
label_557e6c:
    // 0x557e6c: 0x0  nop
    ctx->pc = 0x557e6cu;
    // NOP
label_557e70:
    // 0x557e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x557e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_557e74:
    // 0x557e74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x557e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_557e78:
    // 0x557e78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x557e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_557e7c:
    // 0x557e7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x557e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_557e80:
    // 0x557e80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x557e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_557e84:
    // 0x557e84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x557e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_557e88:
    // 0x557e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x557e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_557e8c:
    // 0x557e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x557e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_557e90:
    // 0x557e90: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x557e90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_557e94:
    // 0x557e94: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_557e98:
    if (ctx->pc == 0x557E98u) {
        ctx->pc = 0x557E98u;
            // 0x557e98: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557E9Cu;
        goto label_557e9c;
    }
    ctx->pc = 0x557E94u;
    {
        const bool branch_taken_0x557e94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x557E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557E94u;
            // 0x557e98: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557e94) {
            ctx->pc = 0x557ED8u;
            goto label_557ed8;
        }
    }
    ctx->pc = 0x557E9Cu;
label_557e9c:
    // 0x557e9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x557e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557ea0:
    // 0x557ea0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x557ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557ea4:
    // 0x557ea4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x557ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_557ea8:
    // 0x557ea8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x557ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_557eac:
    // 0x557eac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x557eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_557eb0:
    // 0x557eb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x557eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_557eb4:
    // 0x557eb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x557eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_557eb8:
    // 0x557eb8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x557eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_557ebc:
    // 0x557ebc: 0x320f809  jalr        $t9
label_557ec0:
    if (ctx->pc == 0x557EC0u) {
        ctx->pc = 0x557EC4u;
        goto label_557ec4;
    }
    ctx->pc = 0x557EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x557EC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x557EC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x557EC4u; }
            if (ctx->pc != 0x557EC4u) { return; }
        }
        }
    }
    ctx->pc = 0x557EC4u;
label_557ec4:
    // 0x557ec4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x557ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_557ec8:
    // 0x557ec8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x557ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_557ecc:
    // 0x557ecc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x557eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_557ed0:
    // 0x557ed0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_557ed4:
    if (ctx->pc == 0x557ED4u) {
        ctx->pc = 0x557ED4u;
            // 0x557ed4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x557ED8u;
        goto label_557ed8;
    }
    ctx->pc = 0x557ED0u;
    {
        const bool branch_taken_0x557ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x557ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557ED0u;
            // 0x557ed4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557ed0) {
            ctx->pc = 0x557EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_557ea8;
        }
    }
    ctx->pc = 0x557ED8u;
label_557ed8:
    // 0x557ed8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x557ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_557edc:
    // 0x557edc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x557edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_557ee0:
    // 0x557ee0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x557ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_557ee4:
    // 0x557ee4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x557ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_557ee8:
    // 0x557ee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x557ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_557eec:
    // 0x557eec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x557eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_557ef0:
    // 0x557ef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x557ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_557ef4:
    // 0x557ef4: 0x3e00008  jr          $ra
label_557ef8:
    if (ctx->pc == 0x557EF8u) {
        ctx->pc = 0x557EF8u;
            // 0x557ef8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x557EFCu;
        goto label_557efc;
    }
    ctx->pc = 0x557EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557EF4u;
            // 0x557ef8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557EFCu;
label_557efc:
    // 0x557efc: 0x0  nop
    ctx->pc = 0x557efcu;
    // NOP
label_557f00:
    // 0x557f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x557f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_557f04:
    // 0x557f04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x557f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_557f08:
    // 0x557f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x557f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_557f0c:
    // 0x557f0c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x557f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_557f10:
    // 0x557f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x557f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_557f14:
    // 0x557f14: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x557f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_557f18:
    // 0x557f18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x557f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_557f1c:
    // 0x557f1c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x557f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_557f20:
    // 0x557f20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x557f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_557f24:
    // 0x557f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x557f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_557f28:
    // 0x557f28: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x557f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_557f2c:
    // 0x557f2c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x557f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_557f30:
    // 0x557f30: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x557f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_557f34:
    // 0x557f34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x557f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_557f38:
    // 0x557f38: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x557f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_557f3c:
    // 0x557f3c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x557f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_557f40:
    // 0x557f40: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x557f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_557f44:
    // 0x557f44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x557f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_557f48:
    // 0x557f48: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x557f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_557f4c:
    // 0x557f4c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x557f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_557f50:
    // 0x557f50: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x557f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_557f54:
    // 0x557f54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x557f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_557f58:
    // 0x557f58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x557f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_557f5c:
    // 0x557f5c: 0xc0a997c  jal         func_2A65F0
label_557f60:
    if (ctx->pc == 0x557F60u) {
        ctx->pc = 0x557F60u;
            // 0x557f60: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x557F64u;
        goto label_557f64;
    }
    ctx->pc = 0x557F5Cu;
    SET_GPR_U32(ctx, 31, 0x557F64u);
    ctx->pc = 0x557F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557F5Cu;
            // 0x557f60: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557F64u; }
        if (ctx->pc != 0x557F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557F64u; }
        if (ctx->pc != 0x557F64u) { return; }
    }
    ctx->pc = 0x557F64u;
label_557f64:
    // 0x557f64: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x557f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_557f68:
    // 0x557f68: 0xc0d879c  jal         func_361E70
label_557f6c:
    if (ctx->pc == 0x557F6Cu) {
        ctx->pc = 0x557F6Cu;
            // 0x557f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557F70u;
        goto label_557f70;
    }
    ctx->pc = 0x557F68u;
    SET_GPR_U32(ctx, 31, 0x557F70u);
    ctx->pc = 0x557F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557F68u;
            // 0x557f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557F70u; }
        if (ctx->pc != 0x557F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557F70u; }
        if (ctx->pc != 0x557F70u) { return; }
    }
    ctx->pc = 0x557F70u;
label_557f70:
    // 0x557f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x557f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_557f74:
    // 0x557f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x557f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_557f78:
    // 0x557f78: 0x3e00008  jr          $ra
label_557f7c:
    if (ctx->pc == 0x557F7Cu) {
        ctx->pc = 0x557F7Cu;
            // 0x557f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x557F80u;
        goto label_557f80;
    }
    ctx->pc = 0x557F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557F78u;
            // 0x557f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557F80u;
label_557f80:
    // 0x557f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x557f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_557f84:
    // 0x557f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x557f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_557f88:
    // 0x557f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x557f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_557f8c:
    // 0x557f8c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x557f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_557f90:
    // 0x557f90: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_557f94:
    if (ctx->pc == 0x557F94u) {
        ctx->pc = 0x557F94u;
            // 0x557f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x557F98u;
        goto label_557f98;
    }
    ctx->pc = 0x557F90u;
    {
        const bool branch_taken_0x557f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x557F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557F90u;
            // 0x557f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557f90) {
            ctx->pc = 0x5580B0u;
            goto label_5580b0;
        }
    }
    ctx->pc = 0x557F98u;
label_557f98:
    // 0x557f98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x557f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_557f9c:
    // 0x557f9c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x557f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_557fa0:
    // 0x557fa0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x557fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_557fa4:
    // 0x557fa4: 0xc075128  jal         func_1D44A0
label_557fa8:
    if (ctx->pc == 0x557FA8u) {
        ctx->pc = 0x557FA8u;
            // 0x557fa8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x557FACu;
        goto label_557fac;
    }
    ctx->pc = 0x557FA4u;
    SET_GPR_U32(ctx, 31, 0x557FACu);
    ctx->pc = 0x557FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x557FA4u;
            // 0x557fa8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557FACu; }
        if (ctx->pc != 0x557FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557FACu; }
        if (ctx->pc != 0x557FACu) { return; }
    }
    ctx->pc = 0x557FACu;
label_557fac:
    // 0x557fac: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x557facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_557fb0:
    // 0x557fb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557fb4:
    // 0x557fb4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x557fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_557fb8:
    // 0x557fb8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x557fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_557fbc:
    // 0x557fbc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x557fbcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_557fc0:
    // 0x557fc0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_557fc4:
    if (ctx->pc == 0x557FC4u) {
        ctx->pc = 0x557FC4u;
            // 0x557fc4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x557FC8u;
        goto label_557fc8;
    }
    ctx->pc = 0x557FC0u;
    {
        const bool branch_taken_0x557fc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x557FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557FC0u;
            // 0x557fc4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557fc0) {
            ctx->pc = 0x557FD0u;
            goto label_557fd0;
        }
    }
    ctx->pc = 0x557FC8u;
label_557fc8:
    // 0x557fc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557fcc:
    // 0x557fcc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x557fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_557fd0:
    // 0x557fd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x557fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_557fd4:
    // 0x557fd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557fd8:
    // 0x557fd8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x557fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_557fdc:
    // 0x557fdc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x557fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_557fe0:
    // 0x557fe0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x557fe0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_557fe4:
    // 0x557fe4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_557fe8:
    if (ctx->pc == 0x557FE8u) {
        ctx->pc = 0x557FE8u;
            // 0x557fe8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x557FECu;
        goto label_557fec;
    }
    ctx->pc = 0x557FE4u;
    {
        const bool branch_taken_0x557fe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x557fe4) {
            ctx->pc = 0x557FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557FE4u;
            // 0x557fe8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x557FF8u;
            goto label_557ff8;
        }
    }
    ctx->pc = 0x557FECu;
label_557fec:
    // 0x557fec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557ff0:
    // 0x557ff0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x557ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_557ff4:
    // 0x557ff4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x557ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_557ff8:
    // 0x557ff8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x557ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_557ffc:
    // 0x557ffc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x557ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_558000:
    // 0x558000: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x558000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_558004:
    // 0x558004: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x558004u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_558008:
    // 0x558008: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_55800c:
    if (ctx->pc == 0x55800Cu) {
        ctx->pc = 0x55800Cu;
            // 0x55800c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x558010u;
        goto label_558010;
    }
    ctx->pc = 0x558008u;
    {
        const bool branch_taken_0x558008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x558008) {
            ctx->pc = 0x55800Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x558008u;
            // 0x55800c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55801Cu;
            goto label_55801c;
        }
    }
    ctx->pc = 0x558010u;
label_558010:
    // 0x558010: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x558010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_558014:
    // 0x558014: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x558014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_558018:
    // 0x558018: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x558018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_55801c:
    // 0x55801c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x55801cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_558020:
    // 0x558020: 0x320f809  jalr        $t9
label_558024:
    if (ctx->pc == 0x558024u) {
        ctx->pc = 0x558024u;
            // 0x558024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x558028u;
        goto label_558028;
    }
    ctx->pc = 0x558020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x558028u);
        ctx->pc = 0x558024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x558020u;
            // 0x558024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x558028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x558028u; }
            if (ctx->pc != 0x558028u) { return; }
        }
        }
    }
    ctx->pc = 0x558028u;
label_558028:
    // 0x558028: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x558028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_55802c:
    // 0x55802c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55802cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_558030:
    // 0x558030: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x558030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_558034:
    // 0x558034: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x558034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_558038:
    // 0x558038: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x558038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_55803c:
    // 0x55803c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x55803cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_558040:
    // 0x558040: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_558044:
    if (ctx->pc == 0x558044u) {
        ctx->pc = 0x558044u;
            // 0x558044: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x558048u;
        goto label_558048;
    }
    ctx->pc = 0x558040u;
    {
        const bool branch_taken_0x558040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x558040) {
            ctx->pc = 0x558044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x558040u;
            // 0x558044: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x558054u;
            goto label_558054;
        }
    }
    ctx->pc = 0x558048u;
label_558048:
    // 0x558048: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x558048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55804c:
    // 0x55804c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x55804cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_558050:
    // 0x558050: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x558050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_558054:
    // 0x558054: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x558054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_558058:
    // 0x558058: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x558058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_55805c:
    // 0x55805c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x55805cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_558060:
    // 0x558060: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x558060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_558064:
    // 0x558064: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x558064u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_558068:
    // 0x558068: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_55806c:
    if (ctx->pc == 0x55806Cu) {
        ctx->pc = 0x558070u;
        goto label_558070;
    }
    ctx->pc = 0x558068u;
    {
        const bool branch_taken_0x558068 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x558068) {
            ctx->pc = 0x558078u;
            goto label_558078;
        }
    }
    ctx->pc = 0x558070u;
label_558070:
    // 0x558070: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x558070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_558074:
    // 0x558074: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x558074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_558078:
    // 0x558078: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x558078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55807c:
    // 0x55807c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x55807cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_558080:
    // 0x558080: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x558080u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_558084:
    // 0x558084: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_558088:
    if (ctx->pc == 0x558088u) {
        ctx->pc = 0x55808Cu;
        goto label_55808c;
    }
    ctx->pc = 0x558084u;
    {
        const bool branch_taken_0x558084 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x558084) {
            ctx->pc = 0x558094u;
            goto label_558094;
        }
    }
    ctx->pc = 0x55808Cu;
label_55808c:
    // 0x55808c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x55808cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_558090:
    // 0x558090: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x558090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_558094:
    // 0x558094: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x558094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_558098:
    // 0x558098: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x558098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_55809c:
    // 0x55809c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x55809cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_5580a0:
    // 0x5580a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5580a4:
    if (ctx->pc == 0x5580A4u) {
        ctx->pc = 0x5580A4u;
            // 0x5580a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x5580A8u;
        goto label_5580a8;
    }
    ctx->pc = 0x5580A0u;
    {
        const bool branch_taken_0x5580a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5580a0) {
            ctx->pc = 0x5580A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5580A0u;
            // 0x5580a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5580B4u;
            goto label_5580b4;
        }
    }
    ctx->pc = 0x5580A8u;
label_5580a8:
    // 0x5580a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5580a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5580ac:
    // 0x5580ac: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x5580acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_5580b0:
    // 0x5580b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5580b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5580b4:
    // 0x5580b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5580b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5580b8:
    // 0x5580b8: 0x3e00008  jr          $ra
label_5580bc:
    if (ctx->pc == 0x5580BCu) {
        ctx->pc = 0x5580BCu;
            // 0x5580bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5580C0u;
        goto label_5580c0;
    }
    ctx->pc = 0x5580B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5580BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5580B8u;
            // 0x5580bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5580C0u;
label_5580c0:
    // 0x5580c0: 0x8155c0c  j           func_557030
label_5580c4:
    if (ctx->pc == 0x5580C4u) {
        ctx->pc = 0x5580C4u;
            // 0x5580c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x5580C8u;
        goto label_5580c8;
    }
    ctx->pc = 0x5580C0u;
    ctx->pc = 0x5580C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5580C0u;
            // 0x5580c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x557030u;
    {
        auto targetFn = runtime->lookupFunction(0x557030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5580C8u;
label_5580c8:
    // 0x5580c8: 0x0  nop
    ctx->pc = 0x5580c8u;
    // NOP
label_5580cc:
    // 0x5580cc: 0x0  nop
    ctx->pc = 0x5580ccu;
    // NOP
label_5580d0:
    // 0x5580d0: 0x8155aa0  j           func_556A80
label_5580d4:
    if (ctx->pc == 0x5580D4u) {
        ctx->pc = 0x5580D4u;
            // 0x5580d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x5580D8u;
        goto label_5580d8;
    }
    ctx->pc = 0x5580D0u;
    ctx->pc = 0x5580D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5580D0u;
            // 0x5580d4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556A80u;
    if (runtime->hasFunction(0x556A80u)) {
        auto targetFn = runtime->lookupFunction(0x556A80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00556A80_0x556a80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x5580D8u;
label_5580d8:
    // 0x5580d8: 0x0  nop
    ctx->pc = 0x5580d8u;
    // NOP
label_5580dc:
    // 0x5580dc: 0x0  nop
    ctx->pc = 0x5580dcu;
    // NOP
label_5580e0:
    // 0x5580e0: 0x8155af8  j           func_556BE0
label_5580e4:
    if (ctx->pc == 0x5580E4u) {
        ctx->pc = 0x5580E4u;
            // 0x5580e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x5580E8u;
        goto label_5580e8;
    }
    ctx->pc = 0x5580E0u;
    ctx->pc = 0x5580E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5580E0u;
            // 0x5580e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556BE0u;
    {
        auto targetFn = runtime->lookupFunction(0x556BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5580E8u;
label_5580e8:
    // 0x5580e8: 0x0  nop
    ctx->pc = 0x5580e8u;
    // NOP
label_5580ec:
    // 0x5580ec: 0x0  nop
    ctx->pc = 0x5580ecu;
    // NOP
label_5580f0:
    // 0x5580f0: 0x8155a7c  j           func_5569F0
label_5580f4:
    if (ctx->pc == 0x5580F4u) {
        ctx->pc = 0x5580F4u;
            // 0x5580f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x5580F8u;
        goto label_5580f8;
    }
    ctx->pc = 0x5580F0u;
    ctx->pc = 0x5580F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5580F0u;
            // 0x5580f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5569F0u;
    {
        auto targetFn = runtime->lookupFunction(0x5569F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5580F8u;
label_5580f8:
    // 0x5580f8: 0x0  nop
    ctx->pc = 0x5580f8u;
    // NOP
label_5580fc:
    // 0x5580fc: 0x0  nop
    ctx->pc = 0x5580fcu;
    // NOP
}
