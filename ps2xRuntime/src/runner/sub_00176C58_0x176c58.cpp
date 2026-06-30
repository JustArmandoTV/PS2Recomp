#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00176C58
// Address: 0x176c58 - 0x1770b8
void sub_00176C58_0x176c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176C58_0x176c58");
#endif

    switch (ctx->pc) {
        case 0x176c58u: goto label_176c58;
        case 0x176c5cu: goto label_176c5c;
        case 0x176c60u: goto label_176c60;
        case 0x176c64u: goto label_176c64;
        case 0x176c68u: goto label_176c68;
        case 0x176c6cu: goto label_176c6c;
        case 0x176c70u: goto label_176c70;
        case 0x176c74u: goto label_176c74;
        case 0x176c78u: goto label_176c78;
        case 0x176c7cu: goto label_176c7c;
        case 0x176c80u: goto label_176c80;
        case 0x176c84u: goto label_176c84;
        case 0x176c88u: goto label_176c88;
        case 0x176c8cu: goto label_176c8c;
        case 0x176c90u: goto label_176c90;
        case 0x176c94u: goto label_176c94;
        case 0x176c98u: goto label_176c98;
        case 0x176c9cu: goto label_176c9c;
        case 0x176ca0u: goto label_176ca0;
        case 0x176ca4u: goto label_176ca4;
        case 0x176ca8u: goto label_176ca8;
        case 0x176cacu: goto label_176cac;
        case 0x176cb0u: goto label_176cb0;
        case 0x176cb4u: goto label_176cb4;
        case 0x176cb8u: goto label_176cb8;
        case 0x176cbcu: goto label_176cbc;
        case 0x176cc0u: goto label_176cc0;
        case 0x176cc4u: goto label_176cc4;
        case 0x176cc8u: goto label_176cc8;
        case 0x176cccu: goto label_176ccc;
        case 0x176cd0u: goto label_176cd0;
        case 0x176cd4u: goto label_176cd4;
        case 0x176cd8u: goto label_176cd8;
        case 0x176cdcu: goto label_176cdc;
        case 0x176ce0u: goto label_176ce0;
        case 0x176ce4u: goto label_176ce4;
        case 0x176ce8u: goto label_176ce8;
        case 0x176cecu: goto label_176cec;
        case 0x176cf0u: goto label_176cf0;
        case 0x176cf4u: goto label_176cf4;
        case 0x176cf8u: goto label_176cf8;
        case 0x176cfcu: goto label_176cfc;
        case 0x176d00u: goto label_176d00;
        case 0x176d04u: goto label_176d04;
        case 0x176d08u: goto label_176d08;
        case 0x176d0cu: goto label_176d0c;
        case 0x176d10u: goto label_176d10;
        case 0x176d14u: goto label_176d14;
        case 0x176d18u: goto label_176d18;
        case 0x176d1cu: goto label_176d1c;
        case 0x176d20u: goto label_176d20;
        case 0x176d24u: goto label_176d24;
        case 0x176d28u: goto label_176d28;
        case 0x176d2cu: goto label_176d2c;
        case 0x176d30u: goto label_176d30;
        case 0x176d34u: goto label_176d34;
        case 0x176d38u: goto label_176d38;
        case 0x176d3cu: goto label_176d3c;
        case 0x176d40u: goto label_176d40;
        case 0x176d44u: goto label_176d44;
        case 0x176d48u: goto label_176d48;
        case 0x176d4cu: goto label_176d4c;
        case 0x176d50u: goto label_176d50;
        case 0x176d54u: goto label_176d54;
        case 0x176d58u: goto label_176d58;
        case 0x176d5cu: goto label_176d5c;
        case 0x176d60u: goto label_176d60;
        case 0x176d64u: goto label_176d64;
        case 0x176d68u: goto label_176d68;
        case 0x176d6cu: goto label_176d6c;
        case 0x176d70u: goto label_176d70;
        case 0x176d74u: goto label_176d74;
        case 0x176d78u: goto label_176d78;
        case 0x176d7cu: goto label_176d7c;
        case 0x176d80u: goto label_176d80;
        case 0x176d84u: goto label_176d84;
        case 0x176d88u: goto label_176d88;
        case 0x176d8cu: goto label_176d8c;
        case 0x176d90u: goto label_176d90;
        case 0x176d94u: goto label_176d94;
        case 0x176d98u: goto label_176d98;
        case 0x176d9cu: goto label_176d9c;
        case 0x176da0u: goto label_176da0;
        case 0x176da4u: goto label_176da4;
        case 0x176da8u: goto label_176da8;
        case 0x176dacu: goto label_176dac;
        case 0x176db0u: goto label_176db0;
        case 0x176db4u: goto label_176db4;
        case 0x176db8u: goto label_176db8;
        case 0x176dbcu: goto label_176dbc;
        case 0x176dc0u: goto label_176dc0;
        case 0x176dc4u: goto label_176dc4;
        case 0x176dc8u: goto label_176dc8;
        case 0x176dccu: goto label_176dcc;
        case 0x176dd0u: goto label_176dd0;
        case 0x176dd4u: goto label_176dd4;
        case 0x176dd8u: goto label_176dd8;
        case 0x176ddcu: goto label_176ddc;
        case 0x176de0u: goto label_176de0;
        case 0x176de4u: goto label_176de4;
        case 0x176de8u: goto label_176de8;
        case 0x176decu: goto label_176dec;
        case 0x176df0u: goto label_176df0;
        case 0x176df4u: goto label_176df4;
        case 0x176df8u: goto label_176df8;
        case 0x176dfcu: goto label_176dfc;
        case 0x176e00u: goto label_176e00;
        case 0x176e04u: goto label_176e04;
        case 0x176e08u: goto label_176e08;
        case 0x176e0cu: goto label_176e0c;
        case 0x176e10u: goto label_176e10;
        case 0x176e14u: goto label_176e14;
        case 0x176e18u: goto label_176e18;
        case 0x176e1cu: goto label_176e1c;
        case 0x176e20u: goto label_176e20;
        case 0x176e24u: goto label_176e24;
        case 0x176e28u: goto label_176e28;
        case 0x176e2cu: goto label_176e2c;
        case 0x176e30u: goto label_176e30;
        case 0x176e34u: goto label_176e34;
        case 0x176e38u: goto label_176e38;
        case 0x176e3cu: goto label_176e3c;
        case 0x176e40u: goto label_176e40;
        case 0x176e44u: goto label_176e44;
        case 0x176e48u: goto label_176e48;
        case 0x176e4cu: goto label_176e4c;
        case 0x176e50u: goto label_176e50;
        case 0x176e54u: goto label_176e54;
        case 0x176e58u: goto label_176e58;
        case 0x176e5cu: goto label_176e5c;
        case 0x176e60u: goto label_176e60;
        case 0x176e64u: goto label_176e64;
        case 0x176e68u: goto label_176e68;
        case 0x176e6cu: goto label_176e6c;
        case 0x176e70u: goto label_176e70;
        case 0x176e74u: goto label_176e74;
        case 0x176e78u: goto label_176e78;
        case 0x176e7cu: goto label_176e7c;
        case 0x176e80u: goto label_176e80;
        case 0x176e84u: goto label_176e84;
        case 0x176e88u: goto label_176e88;
        case 0x176e8cu: goto label_176e8c;
        case 0x176e90u: goto label_176e90;
        case 0x176e94u: goto label_176e94;
        case 0x176e98u: goto label_176e98;
        case 0x176e9cu: goto label_176e9c;
        case 0x176ea0u: goto label_176ea0;
        case 0x176ea4u: goto label_176ea4;
        case 0x176ea8u: goto label_176ea8;
        case 0x176eacu: goto label_176eac;
        case 0x176eb0u: goto label_176eb0;
        case 0x176eb4u: goto label_176eb4;
        case 0x176eb8u: goto label_176eb8;
        case 0x176ebcu: goto label_176ebc;
        case 0x176ec0u: goto label_176ec0;
        case 0x176ec4u: goto label_176ec4;
        case 0x176ec8u: goto label_176ec8;
        case 0x176eccu: goto label_176ecc;
        case 0x176ed0u: goto label_176ed0;
        case 0x176ed4u: goto label_176ed4;
        case 0x176ed8u: goto label_176ed8;
        case 0x176edcu: goto label_176edc;
        case 0x176ee0u: goto label_176ee0;
        case 0x176ee4u: goto label_176ee4;
        case 0x176ee8u: goto label_176ee8;
        case 0x176eecu: goto label_176eec;
        case 0x176ef0u: goto label_176ef0;
        case 0x176ef4u: goto label_176ef4;
        case 0x176ef8u: goto label_176ef8;
        case 0x176efcu: goto label_176efc;
        case 0x176f00u: goto label_176f00;
        case 0x176f04u: goto label_176f04;
        case 0x176f08u: goto label_176f08;
        case 0x176f0cu: goto label_176f0c;
        case 0x176f10u: goto label_176f10;
        case 0x176f14u: goto label_176f14;
        case 0x176f18u: goto label_176f18;
        case 0x176f1cu: goto label_176f1c;
        case 0x176f20u: goto label_176f20;
        case 0x176f24u: goto label_176f24;
        case 0x176f28u: goto label_176f28;
        case 0x176f2cu: goto label_176f2c;
        case 0x176f30u: goto label_176f30;
        case 0x176f34u: goto label_176f34;
        case 0x176f38u: goto label_176f38;
        case 0x176f3cu: goto label_176f3c;
        case 0x176f40u: goto label_176f40;
        case 0x176f44u: goto label_176f44;
        case 0x176f48u: goto label_176f48;
        case 0x176f4cu: goto label_176f4c;
        case 0x176f50u: goto label_176f50;
        case 0x176f54u: goto label_176f54;
        case 0x176f58u: goto label_176f58;
        case 0x176f5cu: goto label_176f5c;
        case 0x176f60u: goto label_176f60;
        case 0x176f64u: goto label_176f64;
        case 0x176f68u: goto label_176f68;
        case 0x176f6cu: goto label_176f6c;
        case 0x176f70u: goto label_176f70;
        case 0x176f74u: goto label_176f74;
        case 0x176f78u: goto label_176f78;
        case 0x176f7cu: goto label_176f7c;
        case 0x176f80u: goto label_176f80;
        case 0x176f84u: goto label_176f84;
        case 0x176f88u: goto label_176f88;
        case 0x176f8cu: goto label_176f8c;
        case 0x176f90u: goto label_176f90;
        case 0x176f94u: goto label_176f94;
        case 0x176f98u: goto label_176f98;
        case 0x176f9cu: goto label_176f9c;
        case 0x176fa0u: goto label_176fa0;
        case 0x176fa4u: goto label_176fa4;
        case 0x176fa8u: goto label_176fa8;
        case 0x176facu: goto label_176fac;
        case 0x176fb0u: goto label_176fb0;
        case 0x176fb4u: goto label_176fb4;
        case 0x176fb8u: goto label_176fb8;
        case 0x176fbcu: goto label_176fbc;
        case 0x176fc0u: goto label_176fc0;
        case 0x176fc4u: goto label_176fc4;
        case 0x176fc8u: goto label_176fc8;
        case 0x176fccu: goto label_176fcc;
        case 0x176fd0u: goto label_176fd0;
        case 0x176fd4u: goto label_176fd4;
        case 0x176fd8u: goto label_176fd8;
        case 0x176fdcu: goto label_176fdc;
        case 0x176fe0u: goto label_176fe0;
        case 0x176fe4u: goto label_176fe4;
        case 0x176fe8u: goto label_176fe8;
        case 0x176fecu: goto label_176fec;
        case 0x176ff0u: goto label_176ff0;
        case 0x176ff4u: goto label_176ff4;
        case 0x176ff8u: goto label_176ff8;
        case 0x176ffcu: goto label_176ffc;
        case 0x177000u: goto label_177000;
        case 0x177004u: goto label_177004;
        case 0x177008u: goto label_177008;
        case 0x17700cu: goto label_17700c;
        case 0x177010u: goto label_177010;
        case 0x177014u: goto label_177014;
        case 0x177018u: goto label_177018;
        case 0x17701cu: goto label_17701c;
        case 0x177020u: goto label_177020;
        case 0x177024u: goto label_177024;
        case 0x177028u: goto label_177028;
        case 0x17702cu: goto label_17702c;
        case 0x177030u: goto label_177030;
        case 0x177034u: goto label_177034;
        case 0x177038u: goto label_177038;
        case 0x17703cu: goto label_17703c;
        case 0x177040u: goto label_177040;
        case 0x177044u: goto label_177044;
        case 0x177048u: goto label_177048;
        case 0x17704cu: goto label_17704c;
        case 0x177050u: goto label_177050;
        case 0x177054u: goto label_177054;
        case 0x177058u: goto label_177058;
        case 0x17705cu: goto label_17705c;
        case 0x177060u: goto label_177060;
        case 0x177064u: goto label_177064;
        case 0x177068u: goto label_177068;
        case 0x17706cu: goto label_17706c;
        case 0x177070u: goto label_177070;
        case 0x177074u: goto label_177074;
        case 0x177078u: goto label_177078;
        case 0x17707cu: goto label_17707c;
        case 0x177080u: goto label_177080;
        case 0x177084u: goto label_177084;
        case 0x177088u: goto label_177088;
        case 0x17708cu: goto label_17708c;
        case 0x177090u: goto label_177090;
        case 0x177094u: goto label_177094;
        case 0x177098u: goto label_177098;
        case 0x17709cu: goto label_17709c;
        case 0x1770a0u: goto label_1770a0;
        case 0x1770a4u: goto label_1770a4;
        case 0x1770a8u: goto label_1770a8;
        case 0x1770acu: goto label_1770ac;
        case 0x1770b0u: goto label_1770b0;
        case 0x1770b4u: goto label_1770b4;
        default: break;
    }

    ctx->pc = 0x176c58u;

label_176c58:
    // 0x176c58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x176c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_176c5c:
    // 0x176c5c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x176c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_176c60:
    // 0x176c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176c64:
    // 0x176c64: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x176c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_176c68:
    // 0x176c68: 0x24140800  addiu       $s4, $zero, 0x800
    ctx->pc = 0x176c68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_176c6c:
    // 0x176c6c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x176c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_176c70:
    // 0x176c70: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x176c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_176c74:
    // 0x176c74: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x176c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_176c78:
    // 0x176c78: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x176c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_176c7c:
    // 0x176c7c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x176c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_176c80:
    // 0x176c80: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x176c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_176c84:
    // 0x176c84: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x176c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_176c88:
    // 0x176c88: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x176c88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_176c8c:
    // 0x176c8c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x176c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_176c90:
    // 0x176c90: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x176c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_176c94:
    // 0x176c94: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_176c98:
    if (ctx->pc == 0x176C98u) {
        ctx->pc = 0x176C98u;
            // 0x176c98: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x176C9Cu;
        goto label_176c9c;
    }
    ctx->pc = 0x176C94u;
    {
        const bool branch_taken_0x176c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C94u;
            // 0x176c98: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c94) {
            ctx->pc = 0x176CF8u;
            goto label_176cf8;
        }
    }
    ctx->pc = 0x176C9Cu;
label_176c9c:
    // 0x176c9c: 0x820300ac  lb          $v1, 0xAC($s0)
    ctx->pc = 0x176c9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 172)));
label_176ca0:
    // 0x176ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176ca4:
    // 0x176ca4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_176ca8:
    if (ctx->pc == 0x176CA8u) {
        ctx->pc = 0x176CACu;
        goto label_176cac;
    }
    ctx->pc = 0x176CA4u;
    {
        const bool branch_taken_0x176ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x176ca4) {
            ctx->pc = 0x176CF8u;
            goto label_176cf8;
        }
    }
    ctx->pc = 0x176CACu;
label_176cac:
    // 0x176cac: 0xc05c2e2  jal         func_170B88
label_176cb0:
    if (ctx->pc == 0x176CB0u) {
        ctx->pc = 0x176CB0u;
            // 0x176cb0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x176CB4u;
        goto label_176cb4;
    }
    ctx->pc = 0x176CACu;
    SET_GPR_U32(ctx, 31, 0x176CB4u);
    ctx->pc = 0x176CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176CACu;
            // 0x176cb0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CB4u; }
        if (ctx->pc != 0x176CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170B88_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CB4u; }
        if (ctx->pc != 0x176CB4u) { return; }
    }
    ctx->pc = 0x176CB4u;
label_176cb4:
    // 0x176cb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176cb8:
    // 0x176cb8: 0x504300f0  beql        $v0, $v1, . + 4 + (0xF0 << 2)
label_176cbc:
    if (ctx->pc == 0x176CBCu) {
        ctx->pc = 0x176CBCu;
            // 0x176cbc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x176CC0u;
        goto label_176cc0;
    }
    ctx->pc = 0x176CB8u;
    {
        const bool branch_taken_0x176cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x176cb8) {
            ctx->pc = 0x176CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176CB8u;
            // 0x176cbc: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17707Cu;
            goto label_17707c;
        }
    }
    ctx->pc = 0x176CC0u;
label_176cc0:
    // 0x176cc0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x176cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_176cc4:
    // 0x176cc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_176cc8:
    if (ctx->pc == 0x176CC8u) {
        ctx->pc = 0x176CC8u;
            // 0x176cc8: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->pc = 0x176CCCu;
        goto label_176ccc;
    }
    ctx->pc = 0x176CC4u;
    {
        const bool branch_taken_0x176cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176cc4) {
            ctx->pc = 0x176CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176CC4u;
            // 0x176cc8: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176CE0u;
            goto label_176ce0;
        }
    }
    ctx->pc = 0x176CCCu;
label_176ccc:
    // 0x176ccc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x176cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_176cd0:
    // 0x176cd0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x176cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_176cd4:
    // 0x176cd4: 0x40f809  jalr        $v0
label_176cd8:
    if (ctx->pc == 0x176CD8u) {
        ctx->pc = 0x176CDCu;
        goto label_176cdc;
    }
    ctx->pc = 0x176CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176CDCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x176CDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176CDCu; }
            if (ctx->pc != 0x176CDCu) { return; }
        }
        }
    }
    ctx->pc = 0x176CDCu;
label_176cdc:
    // 0x176cdc: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_176ce0:
    // 0x176ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176ce4:
    // 0x176ce4: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x176ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_176ce8:
    // 0x176ce8: 0x8e0700bc  lw          $a3, 0xBC($s0)
    ctx->pc = 0x176ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_176cec:
    // 0x176cec: 0xc05cbea  jal         func_172FA8
label_176cf0:
    if (ctx->pc == 0x176CF0u) {
        ctx->pc = 0x176CF0u;
            // 0x176cf0: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->pc = 0x176CF4u;
        goto label_176cf4;
    }
    ctx->pc = 0x176CECu;
    SET_GPR_U32(ctx, 31, 0x176CF4u);
    ctx->pc = 0x176CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176CECu;
            // 0x176cf0: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172FA8u;
    if (runtime->hasFunction(0x172FA8u)) {
        auto targetFn = runtime->lookupFunction(0x172FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CF4u; }
        if (ctx->pc != 0x176CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172FA8_0x172fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CF4u; }
        if (ctx->pc != 0x176CF4u) { return; }
    }
    ctx->pc = 0x176CF4u;
label_176cf4:
    // 0x176cf4: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x176cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_176cf8:
    // 0x176cf8: 0xc05bbd0  jal         func_16EF40
label_176cfc:
    if (ctx->pc == 0x176CFCu) {
        ctx->pc = 0x176CFCu;
            // 0x176cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176D00u;
        goto label_176d00;
    }
    ctx->pc = 0x176CF8u;
    SET_GPR_U32(ctx, 31, 0x176D00u);
    ctx->pc = 0x176CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176CF8u;
            // 0x176cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF40u;
    if (runtime->hasFunction(0x16EF40u)) {
        auto targetFn = runtime->lookupFunction(0x16EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D00u; }
        if (ctx->pc != 0x176D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF40_0x16ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D00u; }
        if (ctx->pc != 0x176D00u) { return; }
    }
    ctx->pc = 0x176D00u;
label_176d00:
    // 0x176d00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x176d00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176d04:
    // 0x176d04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176d08:
    // 0x176d08: 0x546200d7  bnel        $v1, $v0, . + 4 + (0xD7 << 2)
label_176d0c:
    if (ctx->pc == 0x176D0Cu) {
        ctx->pc = 0x176D0Cu;
            // 0x176d0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x176D10u;
        goto label_176d10;
    }
    ctx->pc = 0x176D08u;
    {
        const bool branch_taken_0x176d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x176d08) {
            ctx->pc = 0x176D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176D08u;
            // 0x176d0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177068u;
            goto label_177068;
        }
    }
    ctx->pc = 0x176D10u;
label_176d10:
    // 0x176d10: 0xc05c04c  jal         func_170130
label_176d14:
    if (ctx->pc == 0x176D14u) {
        ctx->pc = 0x176D14u;
            // 0x176d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176D18u;
        goto label_176d18;
    }
    ctx->pc = 0x176D10u;
    SET_GPR_U32(ctx, 31, 0x176D18u);
    ctx->pc = 0x176D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D10u;
            // 0x176d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170130u;
    if (runtime->hasFunction(0x170130u)) {
        auto targetFn = runtime->lookupFunction(0x170130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D18u; }
        if (ctx->pc != 0x176D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170130_0x170130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D18u; }
        if (ctx->pc != 0x176D18u) { return; }
    }
    ctx->pc = 0x176D18u;
label_176d18:
    // 0x176d18: 0x82050003  lb          $a1, 0x3($s0)
    ctx->pc = 0x176d18u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_176d1c:
    // 0x176d1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x176d1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176d20:
    // 0x176d20: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x176d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_176d24:
    // 0x176d24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_176d28:
    if (ctx->pc == 0x176D28u) {
        ctx->pc = 0x176D28u;
            // 0x176d28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176D2Cu;
        goto label_176d2c;
    }
    ctx->pc = 0x176D24u;
    {
        const bool branch_taken_0x176d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D24u;
            // 0x176d28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d24) {
            ctx->pc = 0x176D58u;
            goto label_176d58;
        }
    }
    ctx->pc = 0x176D2Cu;
label_176d2c:
    // 0x176d2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x176d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_176d30:
    // 0x176d30: 0xc059fd4  jal         func_167F50
label_176d34:
    if (ctx->pc == 0x176D34u) {
        ctx->pc = 0x176D34u;
            // 0x176d34: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x176D38u;
        goto label_176d38;
    }
    ctx->pc = 0x176D30u;
    SET_GPR_U32(ctx, 31, 0x176D38u);
    ctx->pc = 0x176D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D30u;
            // 0x176d34: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167F50u;
    if (runtime->hasFunction(0x167F50u)) {
        auto targetFn = runtime->lookupFunction(0x167F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D38u; }
        if (ctx->pc != 0x176D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167F50_0x167f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D38u; }
        if (ctx->pc != 0x176D38u) { return; }
    }
    ctx->pc = 0x176D38u;
label_176d38:
    // 0x176d38: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x176d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_176d3c:
    // 0x176d3c: 0x24844a50  addiu       $a0, $a0, 0x4A50
    ctx->pc = 0x176d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19024));
label_176d40:
    // 0x176d40: 0xc059f6c  jal         func_167DB0
label_176d44:
    if (ctx->pc == 0x176D44u) {
        ctx->pc = 0x176D44u;
            // 0x176d44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176D48u;
        goto label_176d48;
    }
    ctx->pc = 0x176D40u;
    SET_GPR_U32(ctx, 31, 0x176D48u);
    ctx->pc = 0x176D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D40u;
            // 0x176d44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167DB0u;
    if (runtime->hasFunction(0x167DB0u)) {
        auto targetFn = runtime->lookupFunction(0x167DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D48u; }
        if (ctx->pc != 0x176D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167DB0_0x167db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D48u; }
        if (ctx->pc != 0x176D48u) { return; }
    }
    ctx->pc = 0x176D48u;
label_176d48:
    // 0x176d48: 0xc05cc84  jal         func_173210
label_176d4c:
    if (ctx->pc == 0x176D4Cu) {
        ctx->pc = 0x176D4Cu;
            // 0x176d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176D50u;
        goto label_176d50;
    }
    ctx->pc = 0x176D48u;
    SET_GPR_U32(ctx, 31, 0x176D50u);
    ctx->pc = 0x176D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D48u;
            // 0x176d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D50u; }
        if (ctx->pc != 0x176D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173210_0x173210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D50u; }
        if (ctx->pc != 0x176D50u) { return; }
    }
    ctx->pc = 0x176D50u;
label_176d50:
    // 0x176d50: 0x100000ca  b           . + 4 + (0xCA << 2)
label_176d54:
    if (ctx->pc == 0x176D54u) {
        ctx->pc = 0x176D54u;
            // 0x176d54: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x176D58u;
        goto label_176d58;
    }
    ctx->pc = 0x176D50u;
    {
        const bool branch_taken_0x176d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D50u;
            // 0x176d54: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d50) {
            ctx->pc = 0x17707Cu;
            goto label_17707c;
        }
    }
    ctx->pc = 0x176D58u;
label_176d58:
    // 0x176d58: 0xc05c046  jal         func_170118
label_176d5c:
    if (ctx->pc == 0x176D5Cu) {
        ctx->pc = 0x176D5Cu;
            // 0x176d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176D60u;
        goto label_176d60;
    }
    ctx->pc = 0x176D58u;
    SET_GPR_U32(ctx, 31, 0x176D60u);
    ctx->pc = 0x176D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D58u;
            // 0x176d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170118u;
    if (runtime->hasFunction(0x170118u)) {
        auto targetFn = runtime->lookupFunction(0x170118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D60u; }
        if (ctx->pc != 0x176D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170118_0x170118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D60u; }
        if (ctx->pc != 0x176D60u) { return; }
    }
    ctx->pc = 0x176D60u;
label_176d60:
    // 0x176d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176d64:
    // 0x176d64: 0xc05c070  jal         func_1701C0
label_176d68:
    if (ctx->pc == 0x176D68u) {
        ctx->pc = 0x176D68u;
            // 0x176d68: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176D6Cu;
        goto label_176d6c;
    }
    ctx->pc = 0x176D64u;
    SET_GPR_U32(ctx, 31, 0x176D6Cu);
    ctx->pc = 0x176D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D64u;
            // 0x176d68: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1701C0u;
    if (runtime->hasFunction(0x1701C0u)) {
        auto targetFn = runtime->lookupFunction(0x1701C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D6Cu; }
        if (ctx->pc != 0x176D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001701C0_0x1701c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D6Cu; }
        if (ctx->pc != 0x176D6Cu) { return; }
    }
    ctx->pc = 0x176D6Cu;
label_176d6c:
    // 0x176d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176d70:
    // 0x176d70: 0xc05c040  jal         func_170100
label_176d74:
    if (ctx->pc == 0x176D74u) {
        ctx->pc = 0x176D74u;
            // 0x176d74: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176D78u;
        goto label_176d78;
    }
    ctx->pc = 0x176D70u;
    SET_GPR_U32(ctx, 31, 0x176D78u);
    ctx->pc = 0x176D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D70u;
            // 0x176d74: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170100u;
    if (runtime->hasFunction(0x170100u)) {
        auto targetFn = runtime->lookupFunction(0x170100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D78u; }
        if (ctx->pc != 0x176D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170100_0x170100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D78u; }
        if (ctx->pc != 0x176D78u) { return; }
    }
    ctx->pc = 0x176D78u;
label_176d78:
    // 0x176d78: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x176d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_176d7c:
    // 0x176d7c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_176d80:
    if (ctx->pc == 0x176D80u) {
        ctx->pc = 0x176D80u;
            // 0x176d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176D84u;
        goto label_176d84;
    }
    ctx->pc = 0x176D7Cu;
    {
        const bool branch_taken_0x176d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x176D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D7Cu;
            // 0x176d80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d7c) {
            ctx->pc = 0x176DA8u;
            goto label_176da8;
        }
    }
    ctx->pc = 0x176D84u;
label_176d84:
    // 0x176d84: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x176d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_176d88:
    // 0x176d88: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x176d88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_176d8c:
    // 0x176d8c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_176d90:
    if (ctx->pc == 0x176D90u) {
        ctx->pc = 0x176D90u;
            // 0x176d90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x176D94u;
        goto label_176d94;
    }
    ctx->pc = 0x176D8Cu;
    {
        const bool branch_taken_0x176d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176d8c) {
            ctx->pc = 0x176D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176D8Cu;
            // 0x176d90: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x176D94u;
            goto label_176d94;
        }
    }
    ctx->pc = 0x176D94u;
label_176d94:
    // 0x176d94: 0x1812  mflo        $v1
    ctx->pc = 0x176d94u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_176d98:
    // 0x176d98: 0xc05c058  jal         func_170160
label_176d9c:
    if (ctx->pc == 0x176D9Cu) {
        ctx->pc = 0x176D9Cu;
            // 0x176d9c: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->pc = 0x176DA0u;
        goto label_176da0;
    }
    ctx->pc = 0x176D98u;
    SET_GPR_U32(ctx, 31, 0x176DA0u);
    ctx->pc = 0x176D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D98u;
            // 0x176d9c: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170160u;
    if (runtime->hasFunction(0x170160u)) {
        auto targetFn = runtime->lookupFunction(0x170160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DA0u; }
        if (ctx->pc != 0x176DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170160_0x170160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176DA0u; }
        if (ctx->pc != 0x176DA0u) { return; }
    }
    ctx->pc = 0x176DA0u;
label_176da0:
    // 0x176da0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_176da4:
    if (ctx->pc == 0x176DA4u) {
        ctx->pc = 0x176DA4u;
            // 0x176da4: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x176DA8u;
        goto label_176da8;
    }
    ctx->pc = 0x176DA0u;
    {
        const bool branch_taken_0x176da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176DA0u;
            // 0x176da4: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176da0) {
            ctx->pc = 0x176E10u;
            goto label_176e10;
        }
    }
    ctx->pc = 0x176DA8u;
label_176da8:
    // 0x176da8: 0x5a60000b  blezl       $s3, . + 4 + (0xB << 2)
label_176dac:
    if (ctx->pc == 0x176DACu) {
        ctx->pc = 0x176DACu;
            // 0x176dac: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x176DB0u;
        goto label_176db0;
    }
    ctx->pc = 0x176DA8u;
    {
        const bool branch_taken_0x176da8 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x176da8) {
            ctx->pc = 0x176DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176DA8u;
            // 0x176dac: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176DD8u;
            goto label_176dd8;
        }
    }
    ctx->pc = 0x176DB0u;
label_176db0:
    // 0x176db0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x176db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_176db4:
    // 0x176db4: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x176db4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_176db8:
    // 0x176db8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_176dbc:
    if (ctx->pc == 0x176DBCu) {
        ctx->pc = 0x176DBCu;
            // 0x176dbc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x176DC0u;
        goto label_176dc0;
    }
    ctx->pc = 0x176DB8u;
    {
        const bool branch_taken_0x176db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176db8) {
            ctx->pc = 0x176DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176DB8u;
            // 0x176dbc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x176DC0u;
            goto label_176dc0;
        }
    }
    ctx->pc = 0x176DC0u;
label_176dc0:
    // 0x176dc0: 0x2012  mflo        $a0
    ctx->pc = 0x176dc0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_176dc4:
    // 0x176dc4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_176dc8:
    // 0x176dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_176dcc:
    // 0x176dcc: 0x1000000c  b           . + 4 + (0xC << 2)
label_176dd0:
    if (ctx->pc == 0x176DD0u) {
        ctx->pc = 0x176DD0u;
            // 0x176dd0: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->pc = 0x176DD4u;
        goto label_176dd4;
    }
    ctx->pc = 0x176DCCu;
    {
        const bool branch_taken_0x176dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176DCCu;
            // 0x176dd0: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176dcc) {
            ctx->pc = 0x176E00u;
            goto label_176e00;
        }
    }
    ctx->pc = 0x176DD4u;
label_176dd4:
    // 0x176dd4: 0x0  nop
    ctx->pc = 0x176dd4u;
    // NOP
label_176dd8:
    // 0x176dd8: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x176dd8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_176ddc:
    // 0x176ddc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_176de0:
    if (ctx->pc == 0x176DE0u) {
        ctx->pc = 0x176DE0u;
            // 0x176de0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x176DE4u;
        goto label_176de4;
    }
    ctx->pc = 0x176DDCu;
    {
        const bool branch_taken_0x176ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176ddc) {
            ctx->pc = 0x176DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176DDCu;
            // 0x176de0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x176DE4u;
            goto label_176de4;
        }
    }
    ctx->pc = 0x176DE4u;
label_176de4:
    // 0x176de4: 0x2012  mflo        $a0
    ctx->pc = 0x176de4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_176de8:
    // 0x176de8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x176de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_176dec:
    // 0x176dec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x176decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_176df0:
    // 0x176df0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x176df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_176df4:
    // 0x176df4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_176df8:
    // 0x176df8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x176df8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_176dfc:
    // 0x176dfc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x176dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_176e00:
    // 0x176e00: 0xc05c058  jal         func_170160
label_176e04:
    if (ctx->pc == 0x176E04u) {
        ctx->pc = 0x176E04u;
            // 0x176e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176E08u;
        goto label_176e08;
    }
    ctx->pc = 0x176E00u;
    SET_GPR_U32(ctx, 31, 0x176E08u);
    ctx->pc = 0x176E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E00u;
            // 0x176e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170160u;
    if (runtime->hasFunction(0x170160u)) {
        auto targetFn = runtime->lookupFunction(0x170160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E08u; }
        if (ctx->pc != 0x176E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170160_0x170160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E08u; }
        if (ctx->pc != 0x176E08u) { return; }
    }
    ctx->pc = 0x176E08u;
label_176e08:
    // 0x176e08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x176e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_176e0c:
    // 0x176e0c: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x176e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_176e10:
    // 0x176e10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_176e14:
    if (ctx->pc == 0x176E14u) {
        ctx->pc = 0x176E14u;
            // 0x176e14: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x176E18u;
        goto label_176e18;
    }
    ctx->pc = 0x176E10u;
    {
        const bool branch_taken_0x176e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e10) {
            ctx->pc = 0x176E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176E10u;
            // 0x176e14: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x176E18u;
            goto label_176e18;
        }
    }
    ctx->pc = 0x176E18u;
label_176e18:
    // 0x176e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176e1c:
    // 0x176e1c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x176e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_176e20:
    // 0x176e20: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x176e20u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_176e24:
    // 0x176e24: 0x2812  mflo        $a1
    ctx->pc = 0x176e24u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_176e28:
    // 0x176e28: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x176e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_176e2c:
    // 0x176e2c: 0xc05bbe6  jal         func_16EF98
label_176e30:
    if (ctx->pc == 0x176E30u) {
        ctx->pc = 0x176E30u;
            // 0x176e30: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
        ctx->pc = 0x176E34u;
        goto label_176e34;
    }
    ctx->pc = 0x176E2Cu;
    SET_GPR_U32(ctx, 31, 0x176E34u);
    ctx->pc = 0x176E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E2Cu;
            // 0x176e30: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF98u;
    if (runtime->hasFunction(0x16EF98u)) {
        auto targetFn = runtime->lookupFunction(0x16EF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E34u; }
        if (ctx->pc != 0x176E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF98_0x16ef98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E34u; }
        if (ctx->pc != 0x176E34u) { return; }
    }
    ctx->pc = 0x176E34u;
label_176e34:
    // 0x176e34: 0x5a600034  blezl       $s3, . + 4 + (0x34 << 2)
label_176e38:
    if (ctx->pc == 0x176E38u) {
        ctx->pc = 0x176E38u;
            // 0x176e38: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x176E3Cu;
        goto label_176e3c;
    }
    ctx->pc = 0x176E34u;
    {
        const bool branch_taken_0x176e34 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x176e34) {
            ctx->pc = 0x176E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176E34u;
            // 0x176e38: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x176F08u;
            goto label_176f08;
        }
    }
    ctx->pc = 0x176E3Cu;
label_176e3c:
    // 0x176e3c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x176e3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_176e40:
    // 0x176e40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176e44:
    // 0x176e44: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_176e48:
    if (ctx->pc == 0x176E48u) {
        ctx->pc = 0x176E4Cu;
        goto label_176e4c;
    }
    ctx->pc = 0x176E44u;
    {
        const bool branch_taken_0x176e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x176e44) {
            ctx->pc = 0x176E58u;
            goto label_176e58;
        }
    }
    ctx->pc = 0x176E4Cu;
label_176e4c:
    // 0x176e4c: 0x10000019  b           . + 4 + (0x19 << 2)
label_176e50:
    if (ctx->pc == 0x176E50u) {
        ctx->pc = 0x176E50u;
            // 0x176e50: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x176E54u;
        goto label_176e54;
    }
    ctx->pc = 0x176E4Cu;
    {
        const bool branch_taken_0x176e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176E4Cu;
            // 0x176e50: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176e4c) {
            ctx->pc = 0x176EB4u;
            goto label_176eb4;
        }
    }
    ctx->pc = 0x176E54u;
label_176e54:
    // 0x176e54: 0x0  nop
    ctx->pc = 0x176e54u;
    // NOP
label_176e58:
    // 0x176e58: 0xc05c094  jal         func_170250
label_176e5c:
    if (ctx->pc == 0x176E5Cu) {
        ctx->pc = 0x176E5Cu;
            // 0x176e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176E60u;
        goto label_176e60;
    }
    ctx->pc = 0x176E58u;
    SET_GPR_U32(ctx, 31, 0x176E60u);
    ctx->pc = 0x176E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E58u;
            // 0x176e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170250u;
    if (runtime->hasFunction(0x170250u)) {
        auto targetFn = runtime->lookupFunction(0x170250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E60u; }
        if (ctx->pc != 0x176E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170250_0x170250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176E60u; }
        if (ctx->pc != 0x176E60u) { return; }
    }
    ctx->pc = 0x176E60u;
label_176e60:
    // 0x176e60: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_176e64:
    if (ctx->pc == 0x176E64u) {
        ctx->pc = 0x176E64u;
            // 0x176e64: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x176E68u;
        goto label_176e68;
    }
    ctx->pc = 0x176E60u;
    {
        const bool branch_taken_0x176e60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x176e60) {
            ctx->pc = 0x176E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176E60u;
            // 0x176e64: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x176E68u;
            goto label_176e68;
        }
    }
    ctx->pc = 0x176E68u;
label_176e68:
    // 0x176e68: 0x54001a  div         $zero, $v0, $s4
    ctx->pc = 0x176e68u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_176e6c:
    // 0x176e6c: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x176e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_176e70:
    // 0x176e70: 0x1810  mfhi        $v1
    ctx->pc = 0x176e70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_176e74:
    // 0x176e74: 0x54001a  div         $zero, $v0, $s4
    ctx->pc = 0x176e74u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_176e78:
    // 0x176e78: 0x2831823  subu        $v1, $s4, $v1
    ctx->pc = 0x176e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_176e7c:
    // 0x176e7c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x176e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_176e80:
    // 0x176e80: 0x1012  mflo        $v0
    ctx->pc = 0x176e80u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_176e84:
    // 0x176e84: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x176e84u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_176e88:
    // 0x176e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176e8c:
    // 0x176e8c: 0x2010  mfhi        $a0
    ctx->pc = 0x176e8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_176e90:
    // 0x176e90: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x176e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
label_176e94:
    // 0x176e94: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x176e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_176e98:
    // 0x176e98: 0xc05c3ce  jal         func_170F38
label_176e9c:
    if (ctx->pc == 0x176E9Cu) {
        ctx->pc = 0x176E9Cu;
            // 0x176e9c: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x176EA0u;
        goto label_176ea0;
    }
    ctx->pc = 0x176E98u;
    SET_GPR_U32(ctx, 31, 0x176EA0u);
    ctx->pc = 0x176E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176E98u;
            // 0x176e9c: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F38u;
    if (runtime->hasFunction(0x170F38u)) {
        auto targetFn = runtime->lookupFunction(0x170F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EA0u; }
        if (ctx->pc != 0x176EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170F38_0x170f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EA0u; }
        if (ctx->pc != 0x176EA0u) { return; }
    }
    ctx->pc = 0x176EA0u;
label_176ea0:
    // 0x176ea0: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x176ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
label_176ea4:
    // 0x176ea4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x176ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_176ea8:
    // 0x176ea8: 0x24a56818  addiu       $a1, $a1, 0x6818
    ctx->pc = 0x176ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26648));
label_176eac:
    // 0x176eac: 0xc05c3b6  jal         func_170ED8
label_176eb0:
    if (ctx->pc == 0x176EB0u) {
        ctx->pc = 0x176EB0u;
            // 0x176eb0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176EB4u;
        goto label_176eb4;
    }
    ctx->pc = 0x176EACu;
    SET_GPR_U32(ctx, 31, 0x176EB4u);
    ctx->pc = 0x176EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176EACu;
            // 0x176eb0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170ED8u;
    if (runtime->hasFunction(0x170ED8u)) {
        auto targetFn = runtime->lookupFunction(0x170ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EB4u; }
        if (ctx->pc != 0x176EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170ED8_0x170ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EB4u; }
        if (ctx->pc != 0x176EB4u) { return; }
    }
    ctx->pc = 0x176EB4u;
label_176eb4:
    // 0x176eb4: 0xc05c08e  jal         func_170238
label_176eb8:
    if (ctx->pc == 0x176EB8u) {
        ctx->pc = 0x176EB8u;
            // 0x176eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176EBCu;
        goto label_176ebc;
    }
    ctx->pc = 0x176EB4u;
    SET_GPR_U32(ctx, 31, 0x176EBCu);
    ctx->pc = 0x176EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176EB4u;
            // 0x176eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170238u;
    if (runtime->hasFunction(0x170238u)) {
        auto targetFn = runtime->lookupFunction(0x170238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EBCu; }
        if (ctx->pc != 0x176EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170238_0x170238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EBCu; }
        if (ctx->pc != 0x176EBCu) { return; }
    }
    ctx->pc = 0x176EBCu;
label_176ebc:
    // 0x176ebc: 0xc05c07c  jal         func_1701F0
label_176ec0:
    if (ctx->pc == 0x176EC0u) {
        ctx->pc = 0x176EC0u;
            // 0x176ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176EC4u;
        goto label_176ec4;
    }
    ctx->pc = 0x176EBCu;
    SET_GPR_U32(ctx, 31, 0x176EC4u);
    ctx->pc = 0x176EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176EBCu;
            // 0x176ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1701F0u;
    if (runtime->hasFunction(0x1701F0u)) {
        auto targetFn = runtime->lookupFunction(0x1701F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EC4u; }
        if (ctx->pc != 0x176EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001701F0_0x1701f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EC4u; }
        if (ctx->pc != 0x176EC4u) { return; }
    }
    ctx->pc = 0x176EC4u;
label_176ec4:
    // 0x176ec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176ec8:
    // 0x176ec8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x176ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_176ecc:
    // 0x176ecc: 0xc05c034  jal         func_1700D0
label_176ed0:
    if (ctx->pc == 0x176ED0u) {
        ctx->pc = 0x176ED0u;
            // 0x176ed0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176ED4u;
        goto label_176ed4;
    }
    ctx->pc = 0x176ECCu;
    SET_GPR_U32(ctx, 31, 0x176ED4u);
    ctx->pc = 0x176ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176ECCu;
            // 0x176ed0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700D0u;
    if (runtime->hasFunction(0x1700D0u)) {
        auto targetFn = runtime->lookupFunction(0x1700D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176ED4u; }
        if (ctx->pc != 0x176ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700D0_0x1700d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176ED4u; }
        if (ctx->pc != 0x176ED4u) { return; }
    }
    ctx->pc = 0x176ED4u;
label_176ed4:
    // 0x176ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176ed8:
    // 0x176ed8: 0xc05c03c  jal         func_1700F0
label_176edc:
    if (ctx->pc == 0x176EDCu) {
        ctx->pc = 0x176EDCu;
            // 0x176edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176EE0u;
        goto label_176ee0;
    }
    ctx->pc = 0x176ED8u;
    SET_GPR_U32(ctx, 31, 0x176EE0u);
    ctx->pc = 0x176EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176ED8u;
            // 0x176edc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700F0u;
    if (runtime->hasFunction(0x1700F0u)) {
        auto targetFn = runtime->lookupFunction(0x1700F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EE0u; }
        if (ctx->pc != 0x176EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700F0_0x1700f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EE0u; }
        if (ctx->pc != 0x176EE0u) { return; }
    }
    ctx->pc = 0x176EE0u;
label_176ee0:
    // 0x176ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176ee4:
    // 0x176ee4: 0xc05c038  jal         func_1700E0
label_176ee8:
    if (ctx->pc == 0x176EE8u) {
        ctx->pc = 0x176EE8u;
            // 0x176ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176EECu;
        goto label_176eec;
    }
    ctx->pc = 0x176EE4u;
    SET_GPR_U32(ctx, 31, 0x176EECu);
    ctx->pc = 0x176EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176EE4u;
            // 0x176ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700E0u;
    if (runtime->hasFunction(0x1700E0u)) {
        auto targetFn = runtime->lookupFunction(0x1700E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EECu; }
        if (ctx->pc != 0x176EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700E0_0x1700e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176EECu; }
        if (ctx->pc != 0x176EECu) { return; }
    }
    ctx->pc = 0x176EECu;
label_176eec:
    // 0x176eec: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x176eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
label_176ef0:
    // 0x176ef0: 0x24a565c8  addiu       $a1, $a1, 0x65C8
    ctx->pc = 0x176ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26056));
label_176ef4:
    // 0x176ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176ef8:
    // 0x176ef8: 0xc05c030  jal         func_1700C0
label_176efc:
    if (ctx->pc == 0x176EFCu) {
        ctx->pc = 0x176EFCu;
            // 0x176efc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F00u;
        goto label_176f00;
    }
    ctx->pc = 0x176EF8u;
    SET_GPR_U32(ctx, 31, 0x176F00u);
    ctx->pc = 0x176EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176EF8u;
            // 0x176efc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700C0u;
    if (runtime->hasFunction(0x1700C0u)) {
        auto targetFn = runtime->lookupFunction(0x1700C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F00u; }
        if (ctx->pc != 0x176F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700C0_0x1700c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F00u; }
        if (ctx->pc != 0x176F00u) { return; }
    }
    ctx->pc = 0x176F00u;
label_176f00:
    // 0x176f00: 0x10000016  b           . + 4 + (0x16 << 2)
label_176f04:
    if (ctx->pc == 0x176F04u) {
        ctx->pc = 0x176F08u;
        goto label_176f08;
    }
    ctx->pc = 0x176F00u;
    {
        const bool branch_taken_0x176f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176f00) {
            ctx->pc = 0x176F5Cu;
            goto label_176f5c;
        }
    }
    ctx->pc = 0x176F08u;
label_176f08:
    // 0x176f08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_176f0c:
    if (ctx->pc == 0x176F0Cu) {
        ctx->pc = 0x176F10u;
        goto label_176f10;
    }
    ctx->pc = 0x176F08u;
    {
        const bool branch_taken_0x176f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176f08) {
            ctx->pc = 0x176F1Cu;
            goto label_176f1c;
        }
    }
    ctx->pc = 0x176F10u;
label_176f10:
    // 0x176f10: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x176f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_176f14:
    // 0x176f14: 0xc05c3ce  jal         func_170F38
label_176f18:
    if (ctx->pc == 0x176F18u) {
        ctx->pc = 0x176F18u;
            // 0x176f18: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x176F1Cu;
        goto label_176f1c;
    }
    ctx->pc = 0x176F14u;
    SET_GPR_U32(ctx, 31, 0x176F1Cu);
    ctx->pc = 0x176F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F14u;
            // 0x176f18: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F38u;
    if (runtime->hasFunction(0x170F38u)) {
        auto targetFn = runtime->lookupFunction(0x170F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F1Cu; }
        if (ctx->pc != 0x176F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170F38_0x170f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F1Cu; }
        if (ctx->pc != 0x176F1Cu) { return; }
    }
    ctx->pc = 0x176F1Cu;
label_176f1c:
    // 0x176f1c: 0xc05c064  jal         func_170190
label_176f20:
    if (ctx->pc == 0x176F20u) {
        ctx->pc = 0x176F20u;
            // 0x176f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F24u;
        goto label_176f24;
    }
    ctx->pc = 0x176F1Cu;
    SET_GPR_U32(ctx, 31, 0x176F24u);
    ctx->pc = 0x176F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F1Cu;
            // 0x176f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170190u;
    if (runtime->hasFunction(0x170190u)) {
        auto targetFn = runtime->lookupFunction(0x170190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F24u; }
        if (ctx->pc != 0x176F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170190_0x170190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F24u; }
        if (ctx->pc != 0x176F24u) { return; }
    }
    ctx->pc = 0x176F24u;
label_176f24:
    // 0x176f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176f28:
    // 0x176f28: 0xc05c034  jal         func_1700D0
label_176f2c:
    if (ctx->pc == 0x176F2Cu) {
        ctx->pc = 0x176F2Cu;
            // 0x176f2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F30u;
        goto label_176f30;
    }
    ctx->pc = 0x176F28u;
    SET_GPR_U32(ctx, 31, 0x176F30u);
    ctx->pc = 0x176F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F28u;
            // 0x176f2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700D0u;
    if (runtime->hasFunction(0x1700D0u)) {
        auto targetFn = runtime->lookupFunction(0x1700D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F30u; }
        if (ctx->pc != 0x176F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700D0_0x1700d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F30u; }
        if (ctx->pc != 0x176F30u) { return; }
    }
    ctx->pc = 0x176F30u;
label_176f30:
    // 0x176f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176f34:
    // 0x176f34: 0xc05c03c  jal         func_1700F0
label_176f38:
    if (ctx->pc == 0x176F38u) {
        ctx->pc = 0x176F38u;
            // 0x176f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F3Cu;
        goto label_176f3c;
    }
    ctx->pc = 0x176F34u;
    SET_GPR_U32(ctx, 31, 0x176F3Cu);
    ctx->pc = 0x176F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F34u;
            // 0x176f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700F0u;
    if (runtime->hasFunction(0x1700F0u)) {
        auto targetFn = runtime->lookupFunction(0x1700F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F3Cu; }
        if (ctx->pc != 0x176F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700F0_0x1700f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F3Cu; }
        if (ctx->pc != 0x176F3Cu) { return; }
    }
    ctx->pc = 0x176F3Cu;
label_176f3c:
    // 0x176f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176f40:
    // 0x176f40: 0xc05c038  jal         func_1700E0
label_176f44:
    if (ctx->pc == 0x176F44u) {
        ctx->pc = 0x176F44u;
            // 0x176f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F48u;
        goto label_176f48;
    }
    ctx->pc = 0x176F40u;
    SET_GPR_U32(ctx, 31, 0x176F48u);
    ctx->pc = 0x176F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F40u;
            // 0x176f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700E0u;
    if (runtime->hasFunction(0x1700E0u)) {
        auto targetFn = runtime->lookupFunction(0x1700E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F48u; }
        if (ctx->pc != 0x176F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700E0_0x1700e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F48u; }
        if (ctx->pc != 0x176F48u) { return; }
    }
    ctx->pc = 0x176F48u;
label_176f48:
    // 0x176f48: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x176f48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
label_176f4c:
    // 0x176f4c: 0x24a56948  addiu       $a1, $a1, 0x6948
    ctx->pc = 0x176f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26952));
label_176f50:
    // 0x176f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176f54:
    // 0x176f54: 0xc05c030  jal         func_1700C0
label_176f58:
    if (ctx->pc == 0x176F58u) {
        ctx->pc = 0x176F58u;
            // 0x176f58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F5Cu;
        goto label_176f5c;
    }
    ctx->pc = 0x176F54u;
    SET_GPR_U32(ctx, 31, 0x176F5Cu);
    ctx->pc = 0x176F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F54u;
            // 0x176f58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700C0u;
    if (runtime->hasFunction(0x1700C0u)) {
        auto targetFn = runtime->lookupFunction(0x1700C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F5Cu; }
        if (ctx->pc != 0x176F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700C0_0x1700c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F5Cu; }
        if (ctx->pc != 0x176F5Cu) { return; }
    }
    ctx->pc = 0x176F5Cu;
label_176f5c:
    // 0x176f5c: 0xc05c046  jal         func_170118
label_176f60:
    if (ctx->pc == 0x176F60u) {
        ctx->pc = 0x176F60u;
            // 0x176f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F64u;
        goto label_176f64;
    }
    ctx->pc = 0x176F5Cu;
    SET_GPR_U32(ctx, 31, 0x176F64u);
    ctx->pc = 0x176F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F5Cu;
            // 0x176f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170118u;
    if (runtime->hasFunction(0x170118u)) {
        auto targetFn = runtime->lookupFunction(0x170118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F64u; }
        if (ctx->pc != 0x176F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170118_0x170118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F64u; }
        if (ctx->pc != 0x176F64u) { return; }
    }
    ctx->pc = 0x176F64u;
label_176f64:
    // 0x176f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176f68:
    // 0x176f68: 0xc05c04c  jal         func_170130
label_176f6c:
    if (ctx->pc == 0x176F6Cu) {
        ctx->pc = 0x176F6Cu;
            // 0x176f6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F70u;
        goto label_176f70;
    }
    ctx->pc = 0x176F68u;
    SET_GPR_U32(ctx, 31, 0x176F70u);
    ctx->pc = 0x176F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F68u;
            // 0x176f6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170130u;
    if (runtime->hasFunction(0x170130u)) {
        auto targetFn = runtime->lookupFunction(0x170130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F70u; }
        if (ctx->pc != 0x176F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170130_0x170130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F70u; }
        if (ctx->pc != 0x176F70u) { return; }
    }
    ctx->pc = 0x176F70u;
label_176f70:
    // 0x176f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176f74:
    // 0x176f74: 0xc05c064  jal         func_170190
label_176f78:
    if (ctx->pc == 0x176F78u) {
        ctx->pc = 0x176F78u;
            // 0x176f78: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F7Cu;
        goto label_176f7c;
    }
    ctx->pc = 0x176F74u;
    SET_GPR_U32(ctx, 31, 0x176F7Cu);
    ctx->pc = 0x176F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F74u;
            // 0x176f78: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170190u;
    if (runtime->hasFunction(0x170190u)) {
        auto targetFn = runtime->lookupFunction(0x170190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F7Cu; }
        if (ctx->pc != 0x176F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170190_0x170190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F7Cu; }
        if (ctx->pc != 0x176F7Cu) { return; }
    }
    ctx->pc = 0x176F7Cu;
label_176f7c:
    // 0x176f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176f80:
    // 0x176f80: 0xc05c052  jal         func_170148
label_176f84:
    if (ctx->pc == 0x176F84u) {
        ctx->pc = 0x176F84u;
            // 0x176f84: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F88u;
        goto label_176f88;
    }
    ctx->pc = 0x176F80u;
    SET_GPR_U32(ctx, 31, 0x176F88u);
    ctx->pc = 0x176F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F80u;
            // 0x176f84: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170148u;
    if (runtime->hasFunction(0x170148u)) {
        auto targetFn = runtime->lookupFunction(0x170148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F88u; }
        if (ctx->pc != 0x176F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170148_0x170148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F88u; }
        if (ctx->pc != 0x176F88u) { return; }
    }
    ctx->pc = 0x176F88u;
label_176f88:
    // 0x176f88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x176f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_176f8c:
    // 0x176f8c: 0xc05bac6  jal         func_16EB18
label_176f90:
    if (ctx->pc == 0x176F90u) {
        ctx->pc = 0x176F90u;
            // 0x176f90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176F94u;
        goto label_176f94;
    }
    ctx->pc = 0x176F8Cu;
    SET_GPR_U32(ctx, 31, 0x176F94u);
    ctx->pc = 0x176F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F8Cu;
            // 0x176f90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EB18u;
    if (runtime->hasFunction(0x16EB18u)) {
        auto targetFn = runtime->lookupFunction(0x16EB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F94u; }
        if (ctx->pc != 0x176F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EB18_0x16eb18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176F94u; }
        if (ctx->pc != 0x176F94u) { return; }
    }
    ctx->pc = 0x176F94u;
label_176f94:
    // 0x176f94: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x176f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_176f98:
    // 0x176f98: 0xc05baae  jal         func_16EAB8
label_176f9c:
    if (ctx->pc == 0x176F9Cu) {
        ctx->pc = 0x176F9Cu;
            // 0x176f9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176FA0u;
        goto label_176fa0;
    }
    ctx->pc = 0x176F98u;
    SET_GPR_U32(ctx, 31, 0x176FA0u);
    ctx->pc = 0x176F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176F98u;
            // 0x176f9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EAB8u;
    if (runtime->hasFunction(0x16EAB8u)) {
        auto targetFn = runtime->lookupFunction(0x16EAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FA0u; }
        if (ctx->pc != 0x176FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EAB8_0x16eab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FA0u; }
        if (ctx->pc != 0x176FA0u) { return; }
    }
    ctx->pc = 0x176FA0u;
label_176fa0:
    // 0x176fa0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x176fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_176fa4:
    // 0x176fa4: 0xc05baa8  jal         func_16EAA0
label_176fa8:
    if (ctx->pc == 0x176FA8u) {
        ctx->pc = 0x176FA8u;
            // 0x176fa8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176FACu;
        goto label_176fac;
    }
    ctx->pc = 0x176FA4u;
    SET_GPR_U32(ctx, 31, 0x176FACu);
    ctx->pc = 0x176FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FA4u;
            // 0x176fa8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EAA0u;
    if (runtime->hasFunction(0x16EAA0u)) {
        auto targetFn = runtime->lookupFunction(0x16EAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FACu; }
        if (ctx->pc != 0x176FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EAA0_0x16eaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FACu; }
        if (ctx->pc != 0x176FACu) { return; }
    }
    ctx->pc = 0x176FACu;
label_176fac:
    // 0x176fac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x176facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_176fb0:
    // 0x176fb0: 0xc05bb00  jal         func_16EC00
label_176fb4:
    if (ctx->pc == 0x176FB4u) {
        ctx->pc = 0x176FB4u;
            // 0x176fb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176FB8u;
        goto label_176fb8;
    }
    ctx->pc = 0x176FB0u;
    SET_GPR_U32(ctx, 31, 0x176FB8u);
    ctx->pc = 0x176FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FB0u;
            // 0x176fb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EC00u;
    if (runtime->hasFunction(0x16EC00u)) {
        auto targetFn = runtime->lookupFunction(0x16EC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FB8u; }
        if (ctx->pc != 0x176FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EC00_0x16ec00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FB8u; }
        if (ctx->pc != 0x176FB8u) { return; }
    }
    ctx->pc = 0x176FB8u;
label_176fb8:
    // 0x176fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176fbc:
    // 0x176fbc: 0xc05d006  jal         func_174018
label_176fc0:
    if (ctx->pc == 0x176FC0u) {
        ctx->pc = 0x176FC0u;
            // 0x176fc0: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x176FC4u;
        goto label_176fc4;
    }
    ctx->pc = 0x176FBCu;
    SET_GPR_U32(ctx, 31, 0x176FC4u);
    ctx->pc = 0x176FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FBCu;
            // 0x176fc0: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FC4u; }
        if (ctx->pc != 0x176FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FC4u; }
        if (ctx->pc != 0x176FC4u) { return; }
    }
    ctx->pc = 0x176FC4u;
label_176fc4:
    // 0x176fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176fc8:
    // 0x176fc8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x176fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_176fcc:
    // 0x176fcc: 0xc05d4c6  jal         func_175318
label_176fd0:
    if (ctx->pc == 0x176FD0u) {
        ctx->pc = 0x176FD0u;
            // 0x176fd0: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->pc = 0x176FD4u;
        goto label_176fd4;
    }
    ctx->pc = 0x176FCCu;
    SET_GPR_U32(ctx, 31, 0x176FD4u);
    ctx->pc = 0x176FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FCCu;
            // 0x176fd0: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175318u;
    if (runtime->hasFunction(0x175318u)) {
        auto targetFn = runtime->lookupFunction(0x175318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FD4u; }
        if (ctx->pc != 0x176FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175318_0x175318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FD4u; }
        if (ctx->pc != 0x176FD4u) { return; }
    }
    ctx->pc = 0x176FD4u;
label_176fd4:
    // 0x176fd4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x176fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_176fd8:
    // 0x176fd8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_176fdc:
    if (ctx->pc == 0x176FDCu) {
        ctx->pc = 0x176FDCu;
            // 0x176fdc: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x176FE0u;
        goto label_176fe0;
    }
    ctx->pc = 0x176FD8u;
    {
        const bool branch_taken_0x176fd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x176FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176FD8u;
            // 0x176fdc: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176fd8) {
            ctx->pc = 0x176FE8u;
            goto label_176fe8;
        }
    }
    ctx->pc = 0x176FE0u;
label_176fe0:
    // 0x176fe0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_176fe4:
    if (ctx->pc == 0x176FE4u) {
        ctx->pc = 0x176FE8u;
        goto label_176fe8;
    }
    ctx->pc = 0x176FE0u;
    {
        const bool branch_taken_0x176fe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x176fe0) {
            ctx->pc = 0x176FF0u;
            goto label_176ff0;
        }
    }
    ctx->pc = 0x176FE8u;
label_176fe8:
    // 0x176fe8: 0xc05d4b2  jal         func_1752C8
label_176fec:
    if (ctx->pc == 0x176FECu) {
        ctx->pc = 0x176FECu;
            // 0x176fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176FF0u;
        goto label_176ff0;
    }
    ctx->pc = 0x176FE8u;
    SET_GPR_U32(ctx, 31, 0x176FF0u);
    ctx->pc = 0x176FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FE8u;
            // 0x176fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1752C8u;
    if (runtime->hasFunction(0x1752C8u)) {
        auto targetFn = runtime->lookupFunction(0x1752C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FF0u; }
        if (ctx->pc != 0x176FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001752C8_0x1752c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FF0u; }
        if (ctx->pc != 0x176FF0u) { return; }
    }
    ctx->pc = 0x176FF0u;
label_176ff0:
    // 0x176ff0: 0xc05da38  jal         func_1768E0
label_176ff4:
    if (ctx->pc == 0x176FF4u) {
        ctx->pc = 0x176FF4u;
            // 0x176ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176FF8u;
        goto label_176ff8;
    }
    ctx->pc = 0x176FF0u;
    SET_GPR_U32(ctx, 31, 0x176FF8u);
    ctx->pc = 0x176FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176FF0u;
            // 0x176ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1768E0u;
    if (runtime->hasFunction(0x1768E0u)) {
        auto targetFn = runtime->lookupFunction(0x1768E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FF8u; }
        if (ctx->pc != 0x176FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001768E0_0x1768e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176FF8u; }
        if (ctx->pc != 0x176FF8u) { return; }
    }
    ctx->pc = 0x176FF8u;
label_176ff8:
    // 0x176ff8: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x176ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_176ffc:
    // 0x176ffc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_177000:
    if (ctx->pc == 0x177000u) {
        ctx->pc = 0x177000u;
            // 0x177000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177004u;
        goto label_177004;
    }
    ctx->pc = 0x176FFCu;
    {
        const bool branch_taken_0x176ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x176ffc) {
            ctx->pc = 0x177000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x176FFCu;
            // 0x177000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177010u;
            goto label_177010;
        }
    }
    ctx->pc = 0x177004u;
label_177004:
    // 0x177004: 0xc058b14  jal         func_162C50
label_177008:
    if (ctx->pc == 0x177008u) {
        ctx->pc = 0x177008u;
            // 0x177008: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17700Cu;
        goto label_17700c;
    }
    ctx->pc = 0x177004u;
    SET_GPR_U32(ctx, 31, 0x17700Cu);
    ctx->pc = 0x177008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177004u;
            // 0x177008: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162C50u;
    if (runtime->hasFunction(0x162C50u)) {
        auto targetFn = runtime->lookupFunction(0x162C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17700Cu; }
        if (ctx->pc != 0x17700Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162C50_0x162c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17700Cu; }
        if (ctx->pc != 0x17700Cu) { return; }
    }
    ctx->pc = 0x17700Cu;
label_17700c:
    // 0x17700c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17700cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_177010:
    // 0x177010: 0xc05c040  jal         func_170100
label_177014:
    if (ctx->pc == 0x177014u) {
        ctx->pc = 0x177014u;
            // 0x177014: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x177018u;
        goto label_177018;
    }
    ctx->pc = 0x177010u;
    SET_GPR_U32(ctx, 31, 0x177018u);
    ctx->pc = 0x177014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177010u;
            // 0x177014: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170100u;
    if (runtime->hasFunction(0x170100u)) {
        auto targetFn = runtime->lookupFunction(0x170100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177018u; }
        if (ctx->pc != 0x177018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170100_0x170100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177018u; }
        if (ctx->pc != 0x177018u) { return; }
    }
    ctx->pc = 0x177018u;
label_177018:
    // 0x177018: 0x54540007  bnel        $v0, $s4, . + 4 + (0x7 << 2)
label_17701c:
    if (ctx->pc == 0x17701Cu) {
        ctx->pc = 0x17701Cu;
            // 0x17701c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x177020u;
        goto label_177020;
    }
    ctx->pc = 0x177018u;
    {
        const bool branch_taken_0x177018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x177018) {
            ctx->pc = 0x17701Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177018u;
            // 0x17701c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177038u;
            goto label_177038;
        }
    }
    ctx->pc = 0x177020u;
label_177020:
    // 0x177020: 0xc05c0ee  jal         func_1703B8
label_177024:
    if (ctx->pc == 0x177024u) {
        ctx->pc = 0x177024u;
            // 0x177024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177028u;
        goto label_177028;
    }
    ctx->pc = 0x177020u;
    SET_GPR_U32(ctx, 31, 0x177028u);
    ctx->pc = 0x177024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177020u;
            // 0x177024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1703B8u;
    if (runtime->hasFunction(0x1703B8u)) {
        auto targetFn = runtime->lookupFunction(0x1703B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177028u; }
        if (ctx->pc != 0x177028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001703B8_0x1703b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177028u; }
        if (ctx->pc != 0x177028u) { return; }
    }
    ctx->pc = 0x177028u;
label_177028:
    // 0x177028: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x177028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17702c:
    // 0x17702c: 0xc05bb04  jal         func_16EC10
label_177030:
    if (ctx->pc == 0x177030u) {
        ctx->pc = 0x177030u;
            // 0x177030: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177034u;
        goto label_177034;
    }
    ctx->pc = 0x17702Cu;
    SET_GPR_U32(ctx, 31, 0x177034u);
    ctx->pc = 0x177030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17702Cu;
            // 0x177030: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EC10u;
    if (runtime->hasFunction(0x16EC10u)) {
        auto targetFn = runtime->lookupFunction(0x16EC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177034u; }
        if (ctx->pc != 0x177034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EC10_0x16ec10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177034u; }
        if (ctx->pc != 0x177034u) { return; }
    }
    ctx->pc = 0x177034u;
label_177034:
    // 0x177034: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x177034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_177038:
    // 0x177038: 0xc05ba70  jal         func_16E9C0
label_17703c:
    if (ctx->pc == 0x17703Cu) {
        ctx->pc = 0x17703Cu;
            // 0x17703c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x177040u;
        goto label_177040;
    }
    ctx->pc = 0x177038u;
    SET_GPR_U32(ctx, 31, 0x177040u);
    ctx->pc = 0x17703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177038u;
            // 0x17703c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E9C0u;
    if (runtime->hasFunction(0x16E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x16E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177040u; }
        if (ctx->pc != 0x177040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E9C0_0x16e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177040u; }
        if (ctx->pc != 0x177040u) { return; }
    }
    ctx->pc = 0x177040u;
label_177040:
    // 0x177040: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x177040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_177044:
    // 0x177044: 0x8c423f70  lw          $v0, 0x3F70($v0)
    ctx->pc = 0x177044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16240)));
label_177048:
    // 0x177048: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17704c:
    if (ctx->pc == 0x17704Cu) {
        ctx->pc = 0x17704Cu;
            // 0x17704c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177050u;
        goto label_177050;
    }
    ctx->pc = 0x177048u;
    {
        const bool branch_taken_0x177048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177048u;
            // 0x17704c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177048) {
            ctx->pc = 0x177060u;
            goto label_177060;
        }
    }
    ctx->pc = 0x177050u;
label_177050:
    // 0x177050: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x177050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_177054:
    // 0x177054: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x177054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_177058:
    // 0x177058: 0x40f809  jalr        $v0
label_17705c:
    if (ctx->pc == 0x17705Cu) {
        ctx->pc = 0x17705Cu;
            // 0x17705c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177060u;
        goto label_177060;
    }
    ctx->pc = 0x177058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177060u);
        ctx->pc = 0x17705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177058u;
            // 0x17705c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x177060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177060u; }
            if (ctx->pc != 0x177060u) { return; }
        }
        }
    }
    ctx->pc = 0x177060u;
label_177060:
    // 0x177060: 0x10000005  b           . + 4 + (0x5 << 2)
label_177064:
    if (ctx->pc == 0x177064u) {
        ctx->pc = 0x177064u;
            // 0x177064: 0xa2140001  sb          $s4, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
        ctx->pc = 0x177068u;
        goto label_177068;
    }
    ctx->pc = 0x177060u;
    {
        const bool branch_taken_0x177060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177060u;
            // 0x177064: 0xa2140001  sb          $s4, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177060) {
            ctx->pc = 0x177078u;
            goto label_177078;
        }
    }
    ctx->pc = 0x177068u;
label_177068:
    // 0x177068: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_17706c:
    if (ctx->pc == 0x17706Cu) {
        ctx->pc = 0x17706Cu;
            // 0x17706c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x177070u;
        goto label_177070;
    }
    ctx->pc = 0x177068u;
    {
        const bool branch_taken_0x177068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x177068) {
            ctx->pc = 0x17706Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177068u;
            // 0x17706c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17707Cu;
            goto label_17707c;
        }
    }
    ctx->pc = 0x177070u;
label_177070:
    // 0x177070: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x177070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_177074:
    // 0x177074: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x177074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_177078:
    // 0x177078: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x177078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17707c:
    // 0x17707c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x17707cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_177080:
    // 0x177080: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x177080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_177084:
    // 0x177084: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x177084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_177088:
    // 0x177088: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x177088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17708c:
    // 0x17708c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x17708cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_177090:
    // 0x177090: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x177090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_177094:
    // 0x177094: 0x3e00008  jr          $ra
label_177098:
    if (ctx->pc == 0x177098u) {
        ctx->pc = 0x177098u;
            // 0x177098: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17709Cu;
        goto label_17709c;
    }
    ctx->pc = 0x177094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177094u;
            // 0x177098: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17709Cu;
label_17709c:
    // 0x17709c: 0x0  nop
    ctx->pc = 0x17709cu;
    // NOP
label_1770a0:
    // 0x1770a0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1770a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_1770a4:
    // 0x1770a4: 0x24633f70  addiu       $v1, $v1, 0x3F70
    ctx->pc = 0x1770a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16240));
label_1770a8:
    // 0x1770a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1770a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1770ac:
    // 0x1770ac: 0x3e00008  jr          $ra
label_1770b0:
    if (ctx->pc == 0x1770B0u) {
        ctx->pc = 0x1770B0u;
            // 0x1770b0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x1770B4u;
        goto label_1770b4;
    }
    ctx->pc = 0x1770ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1770B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1770ACu;
            // 0x1770b0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1770B4u;
label_1770b4:
    // 0x1770b4: 0x0  nop
    ctx->pc = 0x1770b4u;
    // NOP
}
