#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0CA0
// Address: 0x2c0ca0 - 0x2c1030
void sub_002C0CA0_0x2c0ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0CA0_0x2c0ca0");
#endif

    switch (ctx->pc) {
        case 0x2c0ca0u: goto label_2c0ca0;
        case 0x2c0ca4u: goto label_2c0ca4;
        case 0x2c0ca8u: goto label_2c0ca8;
        case 0x2c0cacu: goto label_2c0cac;
        case 0x2c0cb0u: goto label_2c0cb0;
        case 0x2c0cb4u: goto label_2c0cb4;
        case 0x2c0cb8u: goto label_2c0cb8;
        case 0x2c0cbcu: goto label_2c0cbc;
        case 0x2c0cc0u: goto label_2c0cc0;
        case 0x2c0cc4u: goto label_2c0cc4;
        case 0x2c0cc8u: goto label_2c0cc8;
        case 0x2c0cccu: goto label_2c0ccc;
        case 0x2c0cd0u: goto label_2c0cd0;
        case 0x2c0cd4u: goto label_2c0cd4;
        case 0x2c0cd8u: goto label_2c0cd8;
        case 0x2c0cdcu: goto label_2c0cdc;
        case 0x2c0ce0u: goto label_2c0ce0;
        case 0x2c0ce4u: goto label_2c0ce4;
        case 0x2c0ce8u: goto label_2c0ce8;
        case 0x2c0cecu: goto label_2c0cec;
        case 0x2c0cf0u: goto label_2c0cf0;
        case 0x2c0cf4u: goto label_2c0cf4;
        case 0x2c0cf8u: goto label_2c0cf8;
        case 0x2c0cfcu: goto label_2c0cfc;
        case 0x2c0d00u: goto label_2c0d00;
        case 0x2c0d04u: goto label_2c0d04;
        case 0x2c0d08u: goto label_2c0d08;
        case 0x2c0d0cu: goto label_2c0d0c;
        case 0x2c0d10u: goto label_2c0d10;
        case 0x2c0d14u: goto label_2c0d14;
        case 0x2c0d18u: goto label_2c0d18;
        case 0x2c0d1cu: goto label_2c0d1c;
        case 0x2c0d20u: goto label_2c0d20;
        case 0x2c0d24u: goto label_2c0d24;
        case 0x2c0d28u: goto label_2c0d28;
        case 0x2c0d2cu: goto label_2c0d2c;
        case 0x2c0d30u: goto label_2c0d30;
        case 0x2c0d34u: goto label_2c0d34;
        case 0x2c0d38u: goto label_2c0d38;
        case 0x2c0d3cu: goto label_2c0d3c;
        case 0x2c0d40u: goto label_2c0d40;
        case 0x2c0d44u: goto label_2c0d44;
        case 0x2c0d48u: goto label_2c0d48;
        case 0x2c0d4cu: goto label_2c0d4c;
        case 0x2c0d50u: goto label_2c0d50;
        case 0x2c0d54u: goto label_2c0d54;
        case 0x2c0d58u: goto label_2c0d58;
        case 0x2c0d5cu: goto label_2c0d5c;
        case 0x2c0d60u: goto label_2c0d60;
        case 0x2c0d64u: goto label_2c0d64;
        case 0x2c0d68u: goto label_2c0d68;
        case 0x2c0d6cu: goto label_2c0d6c;
        case 0x2c0d70u: goto label_2c0d70;
        case 0x2c0d74u: goto label_2c0d74;
        case 0x2c0d78u: goto label_2c0d78;
        case 0x2c0d7cu: goto label_2c0d7c;
        case 0x2c0d80u: goto label_2c0d80;
        case 0x2c0d84u: goto label_2c0d84;
        case 0x2c0d88u: goto label_2c0d88;
        case 0x2c0d8cu: goto label_2c0d8c;
        case 0x2c0d90u: goto label_2c0d90;
        case 0x2c0d94u: goto label_2c0d94;
        case 0x2c0d98u: goto label_2c0d98;
        case 0x2c0d9cu: goto label_2c0d9c;
        case 0x2c0da0u: goto label_2c0da0;
        case 0x2c0da4u: goto label_2c0da4;
        case 0x2c0da8u: goto label_2c0da8;
        case 0x2c0dacu: goto label_2c0dac;
        case 0x2c0db0u: goto label_2c0db0;
        case 0x2c0db4u: goto label_2c0db4;
        case 0x2c0db8u: goto label_2c0db8;
        case 0x2c0dbcu: goto label_2c0dbc;
        case 0x2c0dc0u: goto label_2c0dc0;
        case 0x2c0dc4u: goto label_2c0dc4;
        case 0x2c0dc8u: goto label_2c0dc8;
        case 0x2c0dccu: goto label_2c0dcc;
        case 0x2c0dd0u: goto label_2c0dd0;
        case 0x2c0dd4u: goto label_2c0dd4;
        case 0x2c0dd8u: goto label_2c0dd8;
        case 0x2c0ddcu: goto label_2c0ddc;
        case 0x2c0de0u: goto label_2c0de0;
        case 0x2c0de4u: goto label_2c0de4;
        case 0x2c0de8u: goto label_2c0de8;
        case 0x2c0decu: goto label_2c0dec;
        case 0x2c0df0u: goto label_2c0df0;
        case 0x2c0df4u: goto label_2c0df4;
        case 0x2c0df8u: goto label_2c0df8;
        case 0x2c0dfcu: goto label_2c0dfc;
        case 0x2c0e00u: goto label_2c0e00;
        case 0x2c0e04u: goto label_2c0e04;
        case 0x2c0e08u: goto label_2c0e08;
        case 0x2c0e0cu: goto label_2c0e0c;
        case 0x2c0e10u: goto label_2c0e10;
        case 0x2c0e14u: goto label_2c0e14;
        case 0x2c0e18u: goto label_2c0e18;
        case 0x2c0e1cu: goto label_2c0e1c;
        case 0x2c0e20u: goto label_2c0e20;
        case 0x2c0e24u: goto label_2c0e24;
        case 0x2c0e28u: goto label_2c0e28;
        case 0x2c0e2cu: goto label_2c0e2c;
        case 0x2c0e30u: goto label_2c0e30;
        case 0x2c0e34u: goto label_2c0e34;
        case 0x2c0e38u: goto label_2c0e38;
        case 0x2c0e3cu: goto label_2c0e3c;
        case 0x2c0e40u: goto label_2c0e40;
        case 0x2c0e44u: goto label_2c0e44;
        case 0x2c0e48u: goto label_2c0e48;
        case 0x2c0e4cu: goto label_2c0e4c;
        case 0x2c0e50u: goto label_2c0e50;
        case 0x2c0e54u: goto label_2c0e54;
        case 0x2c0e58u: goto label_2c0e58;
        case 0x2c0e5cu: goto label_2c0e5c;
        case 0x2c0e60u: goto label_2c0e60;
        case 0x2c0e64u: goto label_2c0e64;
        case 0x2c0e68u: goto label_2c0e68;
        case 0x2c0e6cu: goto label_2c0e6c;
        case 0x2c0e70u: goto label_2c0e70;
        case 0x2c0e74u: goto label_2c0e74;
        case 0x2c0e78u: goto label_2c0e78;
        case 0x2c0e7cu: goto label_2c0e7c;
        case 0x2c0e80u: goto label_2c0e80;
        case 0x2c0e84u: goto label_2c0e84;
        case 0x2c0e88u: goto label_2c0e88;
        case 0x2c0e8cu: goto label_2c0e8c;
        case 0x2c0e90u: goto label_2c0e90;
        case 0x2c0e94u: goto label_2c0e94;
        case 0x2c0e98u: goto label_2c0e98;
        case 0x2c0e9cu: goto label_2c0e9c;
        case 0x2c0ea0u: goto label_2c0ea0;
        case 0x2c0ea4u: goto label_2c0ea4;
        case 0x2c0ea8u: goto label_2c0ea8;
        case 0x2c0eacu: goto label_2c0eac;
        case 0x2c0eb0u: goto label_2c0eb0;
        case 0x2c0eb4u: goto label_2c0eb4;
        case 0x2c0eb8u: goto label_2c0eb8;
        case 0x2c0ebcu: goto label_2c0ebc;
        case 0x2c0ec0u: goto label_2c0ec0;
        case 0x2c0ec4u: goto label_2c0ec4;
        case 0x2c0ec8u: goto label_2c0ec8;
        case 0x2c0eccu: goto label_2c0ecc;
        case 0x2c0ed0u: goto label_2c0ed0;
        case 0x2c0ed4u: goto label_2c0ed4;
        case 0x2c0ed8u: goto label_2c0ed8;
        case 0x2c0edcu: goto label_2c0edc;
        case 0x2c0ee0u: goto label_2c0ee0;
        case 0x2c0ee4u: goto label_2c0ee4;
        case 0x2c0ee8u: goto label_2c0ee8;
        case 0x2c0eecu: goto label_2c0eec;
        case 0x2c0ef0u: goto label_2c0ef0;
        case 0x2c0ef4u: goto label_2c0ef4;
        case 0x2c0ef8u: goto label_2c0ef8;
        case 0x2c0efcu: goto label_2c0efc;
        case 0x2c0f00u: goto label_2c0f00;
        case 0x2c0f04u: goto label_2c0f04;
        case 0x2c0f08u: goto label_2c0f08;
        case 0x2c0f0cu: goto label_2c0f0c;
        case 0x2c0f10u: goto label_2c0f10;
        case 0x2c0f14u: goto label_2c0f14;
        case 0x2c0f18u: goto label_2c0f18;
        case 0x2c0f1cu: goto label_2c0f1c;
        case 0x2c0f20u: goto label_2c0f20;
        case 0x2c0f24u: goto label_2c0f24;
        case 0x2c0f28u: goto label_2c0f28;
        case 0x2c0f2cu: goto label_2c0f2c;
        case 0x2c0f30u: goto label_2c0f30;
        case 0x2c0f34u: goto label_2c0f34;
        case 0x2c0f38u: goto label_2c0f38;
        case 0x2c0f3cu: goto label_2c0f3c;
        case 0x2c0f40u: goto label_2c0f40;
        case 0x2c0f44u: goto label_2c0f44;
        case 0x2c0f48u: goto label_2c0f48;
        case 0x2c0f4cu: goto label_2c0f4c;
        case 0x2c0f50u: goto label_2c0f50;
        case 0x2c0f54u: goto label_2c0f54;
        case 0x2c0f58u: goto label_2c0f58;
        case 0x2c0f5cu: goto label_2c0f5c;
        case 0x2c0f60u: goto label_2c0f60;
        case 0x2c0f64u: goto label_2c0f64;
        case 0x2c0f68u: goto label_2c0f68;
        case 0x2c0f6cu: goto label_2c0f6c;
        case 0x2c0f70u: goto label_2c0f70;
        case 0x2c0f74u: goto label_2c0f74;
        case 0x2c0f78u: goto label_2c0f78;
        case 0x2c0f7cu: goto label_2c0f7c;
        case 0x2c0f80u: goto label_2c0f80;
        case 0x2c0f84u: goto label_2c0f84;
        case 0x2c0f88u: goto label_2c0f88;
        case 0x2c0f8cu: goto label_2c0f8c;
        case 0x2c0f90u: goto label_2c0f90;
        case 0x2c0f94u: goto label_2c0f94;
        case 0x2c0f98u: goto label_2c0f98;
        case 0x2c0f9cu: goto label_2c0f9c;
        case 0x2c0fa0u: goto label_2c0fa0;
        case 0x2c0fa4u: goto label_2c0fa4;
        case 0x2c0fa8u: goto label_2c0fa8;
        case 0x2c0facu: goto label_2c0fac;
        case 0x2c0fb0u: goto label_2c0fb0;
        case 0x2c0fb4u: goto label_2c0fb4;
        case 0x2c0fb8u: goto label_2c0fb8;
        case 0x2c0fbcu: goto label_2c0fbc;
        case 0x2c0fc0u: goto label_2c0fc0;
        case 0x2c0fc4u: goto label_2c0fc4;
        case 0x2c0fc8u: goto label_2c0fc8;
        case 0x2c0fccu: goto label_2c0fcc;
        case 0x2c0fd0u: goto label_2c0fd0;
        case 0x2c0fd4u: goto label_2c0fd4;
        case 0x2c0fd8u: goto label_2c0fd8;
        case 0x2c0fdcu: goto label_2c0fdc;
        case 0x2c0fe0u: goto label_2c0fe0;
        case 0x2c0fe4u: goto label_2c0fe4;
        case 0x2c0fe8u: goto label_2c0fe8;
        case 0x2c0fecu: goto label_2c0fec;
        case 0x2c0ff0u: goto label_2c0ff0;
        case 0x2c0ff4u: goto label_2c0ff4;
        case 0x2c0ff8u: goto label_2c0ff8;
        case 0x2c0ffcu: goto label_2c0ffc;
        case 0x2c1000u: goto label_2c1000;
        case 0x2c1004u: goto label_2c1004;
        case 0x2c1008u: goto label_2c1008;
        case 0x2c100cu: goto label_2c100c;
        case 0x2c1010u: goto label_2c1010;
        case 0x2c1014u: goto label_2c1014;
        case 0x2c1018u: goto label_2c1018;
        case 0x2c101cu: goto label_2c101c;
        case 0x2c1020u: goto label_2c1020;
        case 0x2c1024u: goto label_2c1024;
        case 0x2c1028u: goto label_2c1028;
        case 0x2c102cu: goto label_2c102c;
        default: break;
    }

    ctx->pc = 0x2c0ca0u;

label_2c0ca0:
    // 0x2c0ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c0ca4:
    // 0x2c0ca4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c0ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c0ca8:
    // 0x2c0ca8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c0ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c0cac:
    // 0x2c0cac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c0cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c0cb0:
    // 0x2c0cb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c0cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c0cb4:
    // 0x2c0cb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c0cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0cb8:
    // 0x2c0cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c0cbc:
    // 0x2c0cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c0cc0:
    // 0x2c0cc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c0cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0cc4:
    // 0x2c0cc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c0cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c0cc8:
    // 0x2c0cc8: 0xc10ca68  jal         func_4329A0
label_2c0ccc:
    if (ctx->pc == 0x2C0CCCu) {
        ctx->pc = 0x2C0CCCu;
            // 0x2c0ccc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2C0CD0u;
        goto label_2c0cd0;
    }
    ctx->pc = 0x2C0CC8u;
    SET_GPR_U32(ctx, 31, 0x2C0CD0u);
    ctx->pc = 0x2C0CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0CC8u;
            // 0x2c0ccc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CD0u; }
        if (ctx->pc != 0x2C0CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0CD0u; }
        if (ctx->pc != 0x2C0CD0u) { return; }
    }
    ctx->pc = 0x2C0CD0u;
label_2c0cd0:
    // 0x2c0cd0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0cd4:
    // 0x2c0cd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0cd8:
    // 0x2c0cd8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_2c0cdc:
    // 0x2c0cdc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c0ce0:
    // 0x2c0ce0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c0ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2c0ce4:
    // 0x2c0ce4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_2c0ce8:
    // 0x2c0ce8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c0ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2c0cec:
    // 0x2c0cec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c0cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c0cf0:
    // 0x2c0cf0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_2c0cf4:
    // 0x2c0cf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c0cf8:
    // 0x2c0cf8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c0cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_2c0cfc:
    // 0x2c0cfc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c0cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c0d00:
    // 0x2c0d00: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_2c0d04:
    // 0x2c0d04: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c0d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_2c0d08:
    // 0x2c0d08: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c0d08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_2c0d0c:
    // 0x2c0d0c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_2c0d10:
    // 0x2c0d10: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_2c0d14:
    // 0x2c0d14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c0d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2c0d18:
    // 0x2c0d18: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c0d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2c0d1c:
    // 0x2c0d1c: 0xc0582cc  jal         func_160B30
label_2c0d20:
    if (ctx->pc == 0x2C0D20u) {
        ctx->pc = 0x2C0D20u;
            // 0x2c0d20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0D24u;
        goto label_2c0d24;
    }
    ctx->pc = 0x2C0D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C0D24u);
    ctx->pc = 0x2C0D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D1Cu;
            // 0x2c0d20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D24u; }
        if (ctx->pc != 0x2C0D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0D24u; }
        if (ctx->pc != 0x2C0D24u) { return; }
    }
    ctx->pc = 0x2C0D24u;
label_2c0d24:
    // 0x2c0d24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0d28:
    // 0x2c0d28: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_2c0d2c:
    // 0x2c0d2c: 0x246317a8  addiu       $v1, $v1, 0x17A8
    ctx->pc = 0x2c0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6056));
label_2c0d30:
    // 0x2c0d30: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_2c0d34:
    // 0x2c0d34: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c0d34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_2c0d38:
    // 0x2c0d38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c0d3c:
    // 0x2c0d3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0d40:
    // 0x2c0d40: 0xac440d70  sw          $a0, 0xD70($v0)
    ctx->pc = 0x2c0d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3440), GPR_U32(ctx, 4));
label_2c0d44:
    // 0x2c0d44: 0x246317c0  addiu       $v1, $v1, 0x17C0
    ctx->pc = 0x2c0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6080));
label_2c0d48:
    // 0x2c0d48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0d4c:
    // 0x2c0d4c: 0x244217f8  addiu       $v0, $v0, 0x17F8
    ctx->pc = 0x2c0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6136));
label_2c0d50:
    // 0x2c0d50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c0d50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2c0d54:
    // 0x2c0d54: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_2c0d58:
    // 0x2c0d58: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c0d58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_2c0d5c:
    // 0x2c0d5c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_2c0d60:
    // 0x2c0d60: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_2c0d64:
    // 0x2c0d64: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c0d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_2c0d68:
    // 0x2c0d68: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c0d68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_2c0d6c:
    // 0x2c0d6c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c0d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_2c0d70:
    // 0x2c0d70: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c0d70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_2c0d74:
    // 0x2c0d74: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_2c0d78:
    // 0x2c0d78: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_2c0d7c:
    // 0x2c0d7c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_2c0d80:
    // 0x2c0d80: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c0d80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_2c0d84:
    // 0x2c0d84: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_2c0d88:
    if (ctx->pc == 0x2C0D88u) {
        ctx->pc = 0x2C0D8Cu;
        goto label_2c0d8c;
    }
    ctx->pc = 0x2C0D84u;
    {
        const bool branch_taken_0x2c0d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0d84) {
            ctx->pc = 0x2C0E18u;
            goto label_2c0e18;
        }
    }
    ctx->pc = 0x2C0D8Cu;
label_2c0d8c:
    // 0x2c0d8c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2c0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2c0d90:
    // 0x2c0d90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2c0d94:
    // 0x2c0d94: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2c0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2c0d98:
    // 0x2c0d98: 0xc040138  jal         func_1004E0
label_2c0d9c:
    if (ctx->pc == 0x2C0D9Cu) {
        ctx->pc = 0x2C0D9Cu;
            // 0x2c0d9c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2C0DA0u;
        goto label_2c0da0;
    }
    ctx->pc = 0x2C0D98u;
    SET_GPR_U32(ctx, 31, 0x2C0DA0u);
    ctx->pc = 0x2C0D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0D98u;
            // 0x2c0d9c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DA0u; }
        if (ctx->pc != 0x2C0DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DA0u; }
        if (ctx->pc != 0x2C0DA0u) { return; }
    }
    ctx->pc = 0x2C0DA0u;
label_2c0da0:
    // 0x2c0da0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c0da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c0da4:
    // 0x2c0da4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c0da4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2c0da8:
    // 0x2c0da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c0da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0dac:
    // 0x2c0dac: 0x24a50e40  addiu       $a1, $a1, 0xE40
    ctx->pc = 0x2c0dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3648));
label_2c0db0:
    // 0x2c0db0: 0x24c60a20  addiu       $a2, $a2, 0xA20
    ctx->pc = 0x2c0db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2592));
label_2c0db4:
    // 0x2c0db4: 0x24070240  addiu       $a3, $zero, 0x240
    ctx->pc = 0x2c0db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_2c0db8:
    // 0x2c0db8: 0xc040840  jal         func_102100
label_2c0dbc:
    if (ctx->pc == 0x2C0DBCu) {
        ctx->pc = 0x2C0DBCu;
            // 0x2c0dbc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DC0u;
        goto label_2c0dc0;
    }
    ctx->pc = 0x2C0DB8u;
    SET_GPR_U32(ctx, 31, 0x2C0DC0u);
    ctx->pc = 0x2C0DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0DB8u;
            // 0x2c0dbc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DC0u; }
        if (ctx->pc != 0x2C0DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DC0u; }
        if (ctx->pc != 0x2C0DC0u) { return; }
    }
    ctx->pc = 0x2C0DC0u;
label_2c0dc0:
    // 0x2c0dc0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_2c0dc4:
    // 0x2c0dc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c0dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0dc8:
    // 0x2c0dc8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c0dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_2c0dcc:
    // 0x2c0dcc: 0xc0788fc  jal         func_1E23F0
label_2c0dd0:
    if (ctx->pc == 0x2C0DD0u) {
        ctx->pc = 0x2C0DD0u;
            // 0x2c0dd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DD4u;
        goto label_2c0dd4;
    }
    ctx->pc = 0x2C0DCCu;
    SET_GPR_U32(ctx, 31, 0x2C0DD4u);
    ctx->pc = 0x2C0DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0DCCu;
            // 0x2c0dd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DD4u; }
        if (ctx->pc != 0x2C0DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DD4u; }
        if (ctx->pc != 0x2C0DD4u) { return; }
    }
    ctx->pc = 0x2C0DD4u;
label_2c0dd4:
    // 0x2c0dd4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_2c0dd8:
    // 0x2c0dd8: 0xc0788fc  jal         func_1E23F0
label_2c0ddc:
    if (ctx->pc == 0x2C0DDCu) {
        ctx->pc = 0x2C0DDCu;
            // 0x2c0ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0DE0u;
        goto label_2c0de0;
    }
    ctx->pc = 0x2C0DD8u;
    SET_GPR_U32(ctx, 31, 0x2C0DE0u);
    ctx->pc = 0x2C0DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0DD8u;
            // 0x2c0ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DE0u; }
        if (ctx->pc != 0x2C0DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0DE0u; }
        if (ctx->pc != 0x2C0DE0u) { return; }
    }
    ctx->pc = 0x2C0DE0u;
label_2c0de0:
    // 0x2c0de0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c0de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0de4:
    // 0x2c0de4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_2c0de8:
    // 0x2c0de8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c0de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_2c0dec:
    // 0x2c0dec: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c0decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_2c0df0:
    // 0x2c0df0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c0df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0df4:
    // 0x2c0df4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_2c0df8:
    // 0x2c0df8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c0df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2c0dfc:
    // 0x2c0dfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2c0e00:
    // 0x2c0e00: 0xc0a997c  jal         func_2A65F0
label_2c0e04:
    if (ctx->pc == 0x2C0E04u) {
        ctx->pc = 0x2C0E04u;
            // 0x2c0e04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2C0E08u;
        goto label_2c0e08;
    }
    ctx->pc = 0x2C0E00u;
    SET_GPR_U32(ctx, 31, 0x2C0E08u);
    ctx->pc = 0x2C0E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E00u;
            // 0x2c0e04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E08u; }
        if (ctx->pc != 0x2C0E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E08u; }
        if (ctx->pc != 0x2C0E08u) { return; }
    }
    ctx->pc = 0x2C0E08u;
label_2c0e08:
    // 0x2c0e08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c0e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c0e0c:
    // 0x2c0e0c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c0e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c0e10:
    // 0x2c0e10: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2c0e14:
    if (ctx->pc == 0x2C0E14u) {
        ctx->pc = 0x2C0E14u;
            // 0x2c0e14: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->pc = 0x2C0E18u;
        goto label_2c0e18;
    }
    ctx->pc = 0x2C0E10u;
    {
        const bool branch_taken_0x2c0e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E10u;
            // 0x2c0e14: 0x26520240  addiu       $s2, $s2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e10) {
            ctx->pc = 0x2C0DE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0de4;
        }
    }
    ctx->pc = 0x2C0E18u;
label_2c0e18:
    // 0x2c0e18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c0e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c0e1c:
    // 0x2c0e1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c0e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c0e20:
    // 0x2c0e20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c0e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c0e24:
    // 0x2c0e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c0e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0e28:
    // 0x2c0e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0e2c:
    // 0x2c0e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0e30:
    // 0x2c0e30: 0x3e00008  jr          $ra
label_2c0e34:
    if (ctx->pc == 0x2C0E34u) {
        ctx->pc = 0x2C0E34u;
            // 0x2c0e34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C0E38u;
        goto label_2c0e38;
    }
    ctx->pc = 0x2C0E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E30u;
            // 0x2c0e34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0E38u;
label_2c0e38:
    // 0x2c0e38: 0x0  nop
    ctx->pc = 0x2c0e38u;
    // NOP
label_2c0e3c:
    // 0x2c0e3c: 0x0  nop
    ctx->pc = 0x2c0e3cu;
    // NOP
label_2c0e40:
    // 0x2c0e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c0e44:
    // 0x2c0e44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0e48:
    // 0x2c0e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c0e4c:
    // 0x2c0e4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c0e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c0e50:
    // 0x2c0e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c0e54:
    // 0x2c0e54: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c0e58:
    // 0x2c0e58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0e5c:
    // 0x2c0e5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c0e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c0e60:
    // 0x2c0e60: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c0e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_2c0e64:
    // 0x2c0e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0e68:
    // 0x2c0e68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2c0e6c:
    // 0x2c0e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0e70:
    // 0x2c0e70: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c0e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_2c0e74:
    // 0x2c0e74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c0e74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2c0e78:
    // 0x2c0e78: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c0e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_2c0e7c:
    // 0x2c0e7c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c0e7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2c0e80:
    // 0x2c0e80: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c0e80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_2c0e84:
    // 0x2c0e84: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c0e84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_2c0e88:
    // 0x2c0e88: 0xc04cbd8  jal         func_132F60
label_2c0e8c:
    if (ctx->pc == 0x2C0E8Cu) {
        ctx->pc = 0x2C0E8Cu;
            // 0x2c0e8c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2C0E90u;
        goto label_2c0e90;
    }
    ctx->pc = 0x2C0E88u;
    SET_GPR_U32(ctx, 31, 0x2C0E90u);
    ctx->pc = 0x2C0E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E88u;
            // 0x2c0e8c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E90u; }
        if (ctx->pc != 0x2C0E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E90u; }
        if (ctx->pc != 0x2C0E90u) { return; }
    }
    ctx->pc = 0x2C0E90u;
label_2c0e90:
    // 0x2c0e90: 0xc04c968  jal         func_1325A0
label_2c0e94:
    if (ctx->pc == 0x2C0E94u) {
        ctx->pc = 0x2C0E94u;
            // 0x2c0e94: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2C0E98u;
        goto label_2c0e98;
    }
    ctx->pc = 0x2C0E90u;
    SET_GPR_U32(ctx, 31, 0x2C0E98u);
    ctx->pc = 0x2C0E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0E90u;
            // 0x2c0e94: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E98u; }
        if (ctx->pc != 0x2C0E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0E98u; }
        if (ctx->pc != 0x2C0E98u) { return; }
    }
    ctx->pc = 0x2C0E98u;
label_2c0e98:
    // 0x2c0e98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c0e9c:
    // 0x2c0e9c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x2c0e9cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_2c0ea0:
    // 0x2c0ea0: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x2c0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2c0ea4:
    // 0x2c0ea4: 0x3c09006b  lui         $t1, 0x6B
    ctx->pc = 0x2c0ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)107 << 16));
label_2c0ea8:
    // 0x2c0ea8: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2c0ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_2c0eac:
    // 0x2c0eac: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2c0eacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_2c0eb0:
    // 0x2c0eb0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0eb4:
    // 0x2c0eb4: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x2c0eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
label_2c0eb8:
    // 0x2c0eb8: 0x8c8b0788  lw          $t3, 0x788($a0)
    ctx->pc = 0x2c0eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
label_2c0ebc:
    // 0x2c0ebc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c0ec0:
    // 0x2c0ec0: 0x2529a340  addiu       $t1, $t1, -0x5CC0
    ctx->pc = 0x2c0ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943552));
label_2c0ec4:
    // 0x2c0ec4: 0x2508cfe0  addiu       $t0, $t0, -0x3020
    ctx->pc = 0x2c0ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954976));
label_2c0ec8:
    // 0x2c0ec8: 0x24e724a0  addiu       $a3, $a3, 0x24A0
    ctx->pc = 0x2c0ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9376));
label_2c0ecc:
    // 0x2c0ecc: 0x24632460  addiu       $v1, $v1, 0x2460
    ctx->pc = 0x2c0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9312));
label_2c0ed0:
    // 0x2c0ed0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2c0ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_2c0ed4:
    // 0x2c0ed4: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x2c0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
label_2c0ed8:
    // 0x2c0ed8: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x2c0ed8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2c0edc:
    // 0x2c0edc: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2c0ee0:
    // 0x2c0ee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0ee4:
    // 0x2c0ee4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2c0ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2c0ee8:
    // 0x2c0ee8: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x2c0ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
label_2c0eec:
    // 0x2c0eec: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x2c0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
label_2c0ef0:
    // 0x2c0ef0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2c0ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2c0ef4:
    // 0x2c0ef4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2c0ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_2c0ef8:
    // 0x2c0ef8: 0xae080078  sw          $t0, 0x78($s0)
    ctx->pc = 0x2c0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 8));
label_2c0efc:
    // 0x2c0efc: 0xae070078  sw          $a3, 0x78($s0)
    ctx->pc = 0x2c0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 7));
label_2c0f00:
    // 0x2c0f00: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x2c0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_2c0f04:
    // 0x2c0f04: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2c0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_2c0f08:
    // 0x2c0f08: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2c0f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_2c0f0c:
    // 0x2c0f0c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x2c0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_2c0f10:
    // 0x2c0f10: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2c0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_2c0f14:
    // 0x2c0f14: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x2c0f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_2c0f18:
    // 0x2c0f18: 0xc04a576  jal         func_1295D8
label_2c0f1c:
    if (ctx->pc == 0x2C0F1Cu) {
        ctx->pc = 0x2C0F1Cu;
            // 0x2c0f1c: 0xae000234  sw          $zero, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
        ctx->pc = 0x2C0F20u;
        goto label_2c0f20;
    }
    ctx->pc = 0x2C0F18u;
    SET_GPR_U32(ctx, 31, 0x2C0F20u);
    ctx->pc = 0x2C0F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F18u;
            // 0x2c0f1c: 0xae000234  sw          $zero, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F20u; }
        if (ctx->pc != 0x2C0F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F20u; }
        if (ctx->pc != 0x2C0F20u) { return; }
    }
    ctx->pc = 0x2C0F20u;
label_2c0f20:
    // 0x2c0f20: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x2c0f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_2c0f24:
    // 0x2c0f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0f28:
    // 0x2c0f28: 0xc04a576  jal         func_1295D8
label_2c0f2c:
    if (ctx->pc == 0x2C0F2Cu) {
        ctx->pc = 0x2C0F2Cu;
            // 0x2c0f2c: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x2C0F30u;
        goto label_2c0f30;
    }
    ctx->pc = 0x2C0F28u;
    SET_GPR_U32(ctx, 31, 0x2C0F30u);
    ctx->pc = 0x2C0F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F28u;
            // 0x2c0f2c: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F30u; }
        if (ctx->pc != 0x2C0F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F30u; }
        if (ctx->pc != 0x2C0F30u) { return; }
    }
    ctx->pc = 0x2C0F30u;
label_2c0f30:
    // 0x2c0f30: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2c0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_2c0f34:
    // 0x2c0f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c0f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0f38:
    // 0x2c0f38: 0xc04a576  jal         func_1295D8
label_2c0f3c:
    if (ctx->pc == 0x2C0F3Cu) {
        ctx->pc = 0x2C0F3Cu;
            // 0x2c0f3c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2C0F40u;
        goto label_2c0f40;
    }
    ctx->pc = 0x2C0F38u;
    SET_GPR_U32(ctx, 31, 0x2C0F40u);
    ctx->pc = 0x2C0F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F38u;
            // 0x2c0f3c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F40u; }
        if (ctx->pc != 0x2C0F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F40u; }
        if (ctx->pc != 0x2C0F40u) { return; }
    }
    ctx->pc = 0x2C0F40u;
label_2c0f40:
    // 0x2c0f40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c0f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0f44:
    // 0x2c0f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0f48:
    // 0x2c0f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0f4c:
    // 0x2c0f4c: 0x3e00008  jr          $ra
label_2c0f50:
    if (ctx->pc == 0x2C0F50u) {
        ctx->pc = 0x2C0F50u;
            // 0x2c0f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C0F54u;
        goto label_2c0f54;
    }
    ctx->pc = 0x2C0F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F4Cu;
            // 0x2c0f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0F54u;
label_2c0f54:
    // 0x2c0f54: 0x0  nop
    ctx->pc = 0x2c0f54u;
    // NOP
label_2c0f58:
    // 0x2c0f58: 0x0  nop
    ctx->pc = 0x2c0f58u;
    // NOP
label_2c0f5c:
    // 0x2c0f5c: 0x0  nop
    ctx->pc = 0x2c0f5cu;
    // NOP
label_2c0f60:
    // 0x2c0f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c0f64:
    // 0x2c0f64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c0f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c0f68:
    // 0x2c0f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c0f6c:
    // 0x2c0f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c0f70:
    // 0x2c0f70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c0f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c0f74:
    // 0x2c0f74: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_2c0f78:
    if (ctx->pc == 0x2C0F78u) {
        ctx->pc = 0x2C0F78u;
            // 0x2c0f78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F7Cu;
        goto label_2c0f7c;
    }
    ctx->pc = 0x2C0F74u;
    {
        const bool branch_taken_0x2c0f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F74u;
            // 0x2c0f78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f74) {
            ctx->pc = 0x2C100Cu;
            goto label_2c100c;
        }
    }
    ctx->pc = 0x2C0F7Cu;
label_2c0f7c:
    // 0x2c0f7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c0f80:
    // 0x2c0f80: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x2c0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
label_2c0f84:
    // 0x2c0f84: 0xc0d37dc  jal         func_34DF70
label_2c0f88:
    if (ctx->pc == 0x2C0F88u) {
        ctx->pc = 0x2C0F88u;
            // 0x2c0f88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0F8Cu;
        goto label_2c0f8c;
    }
    ctx->pc = 0x2C0F84u;
    SET_GPR_U32(ctx, 31, 0x2C0F8Cu);
    ctx->pc = 0x2C0F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F84u;
            // 0x2c0f88: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F8Cu; }
        if (ctx->pc != 0x2C0F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0F8Cu; }
        if (ctx->pc != 0x2C0F8Cu) { return; }
    }
    ctx->pc = 0x2C0F8Cu;
label_2c0f8c:
    // 0x2c0f8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2c0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c0f90:
    // 0x2c0f90: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2c0f94:
    if (ctx->pc == 0x2C0F94u) {
        ctx->pc = 0x2C0F94u;
            // 0x2c0f94: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2C0F98u;
        goto label_2c0f98;
    }
    ctx->pc = 0x2C0F90u;
    {
        const bool branch_taken_0x2c0f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0f90) {
            ctx->pc = 0x2C0F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0F90u;
            // 0x2c0f94: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0FB4u;
            goto label_2c0fb4;
        }
    }
    ctx->pc = 0x2C0F98u;
label_2c0f98:
    // 0x2c0f98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2c0f9c:
    if (ctx->pc == 0x2C0F9Cu) {
        ctx->pc = 0x2C0FA0u;
        goto label_2c0fa0;
    }
    ctx->pc = 0x2C0F98u;
    {
        const bool branch_taken_0x2c0f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0f98) {
            ctx->pc = 0x2C0FB0u;
            goto label_2c0fb0;
        }
    }
    ctx->pc = 0x2C0FA0u;
label_2c0fa0:
    // 0x2c0fa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c0fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c0fa4:
    // 0x2c0fa4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c0fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c0fa8:
    // 0x2c0fa8: 0x320f809  jalr        $t9
label_2c0fac:
    if (ctx->pc == 0x2C0FACu) {
        ctx->pc = 0x2C0FACu;
            // 0x2c0fac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C0FB0u;
        goto label_2c0fb0;
    }
    ctx->pc = 0x2C0FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C0FB0u);
        ctx->pc = 0x2C0FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FA8u;
            // 0x2c0fac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C0FB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FB0u; }
            if (ctx->pc != 0x2C0FB0u) { return; }
        }
        }
    }
    ctx->pc = 0x2C0FB0u;
label_2c0fb0:
    // 0x2c0fb0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2c0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2c0fb4:
    // 0x2c0fb4: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2c0fb8:
    if (ctx->pc == 0x2C0FB8u) {
        ctx->pc = 0x2C0FB8u;
            // 0x2c0fb8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C0FBCu;
        goto label_2c0fbc;
    }
    ctx->pc = 0x2C0FB4u;
    {
        const bool branch_taken_0x2c0fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fb4) {
            ctx->pc = 0x2C0FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FB4u;
            // 0x2c0fb8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0FF8u;
            goto label_2c0ff8;
        }
    }
    ctx->pc = 0x2C0FBCu;
label_2c0fbc:
    // 0x2c0fbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0fc0:
    // 0x2c0fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c0fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0fc4:
    // 0x2c0fc4: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2c0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2c0fc8:
    // 0x2c0fc8: 0xc0d37dc  jal         func_34DF70
label_2c0fcc:
    if (ctx->pc == 0x2C0FCCu) {
        ctx->pc = 0x2C0FCCu;
            // 0x2c0fcc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0FD0u;
        goto label_2c0fd0;
    }
    ctx->pc = 0x2C0FC8u;
    SET_GPR_U32(ctx, 31, 0x2C0FD0u);
    ctx->pc = 0x2C0FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FC8u;
            // 0x2c0fcc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FD0u; }
        if (ctx->pc != 0x2C0FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0FD0u; }
        if (ctx->pc != 0x2C0FD0u) { return; }
    }
    ctx->pc = 0x2C0FD0u;
label_2c0fd0:
    // 0x2c0fd0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2c0fd4:
    if (ctx->pc == 0x2C0FD4u) {
        ctx->pc = 0x2C0FD8u;
        goto label_2c0fd8;
    }
    ctx->pc = 0x2C0FD0u;
    {
        const bool branch_taken_0x2c0fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fd0) {
            ctx->pc = 0x2C0FF4u;
            goto label_2c0ff4;
        }
    }
    ctx->pc = 0x2C0FD8u;
label_2c0fd8:
    // 0x2c0fd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0fdc:
    // 0x2c0fdc: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2c0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2c0fe0:
    // 0x2c0fe0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2c0fe4:
    if (ctx->pc == 0x2C0FE4u) {
        ctx->pc = 0x2C0FE4u;
            // 0x2c0fe4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C0FE8u;
        goto label_2c0fe8;
    }
    ctx->pc = 0x2C0FE0u;
    {
        const bool branch_taken_0x2c0fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FE0u;
            // 0x2c0fe4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fe0) {
            ctx->pc = 0x2C0FF4u;
            goto label_2c0ff4;
        }
    }
    ctx->pc = 0x2C0FE8u;
label_2c0fe8:
    // 0x2c0fe8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0fec:
    // 0x2c0fec: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2c0ff0:
    // 0x2c0ff0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c0ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c0ff4:
    // 0x2c0ff4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c0ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c0ff8:
    // 0x2c0ff8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c0ff8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c0ffc:
    // 0x2c0ffc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c1000:
    if (ctx->pc == 0x2C1000u) {
        ctx->pc = 0x2C1000u;
            // 0x2c1000: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1004u;
        goto label_2c1004;
    }
    ctx->pc = 0x2C0FFCu;
    {
        const bool branch_taken_0x2c0ffc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c0ffc) {
            ctx->pc = 0x2C1000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0FFCu;
            // 0x2c1000: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1010u;
            goto label_2c1010;
        }
    }
    ctx->pc = 0x2C1004u;
label_2c1004:
    // 0x2c1004: 0xc0400a8  jal         func_1002A0
label_2c1008:
    if (ctx->pc == 0x2C1008u) {
        ctx->pc = 0x2C1008u;
            // 0x2c1008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C100Cu;
        goto label_2c100c;
    }
    ctx->pc = 0x2C1004u;
    SET_GPR_U32(ctx, 31, 0x2C100Cu);
    ctx->pc = 0x2C1008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1004u;
            // 0x2c1008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C100Cu; }
        if (ctx->pc != 0x2C100Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C100Cu; }
        if (ctx->pc != 0x2C100Cu) { return; }
    }
    ctx->pc = 0x2C100Cu;
label_2c100c:
    // 0x2c100c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c100cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1010:
    // 0x2c1010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c1010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1014:
    // 0x2c1014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1018:
    // 0x2c1018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c101c:
    // 0x2c101c: 0x3e00008  jr          $ra
label_2c1020:
    if (ctx->pc == 0x2C1020u) {
        ctx->pc = 0x2C1020u;
            // 0x2c1020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C1024u;
        goto label_2c1024;
    }
    ctx->pc = 0x2C101Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C101Cu;
            // 0x2c1020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1024u;
label_2c1024:
    // 0x2c1024: 0x0  nop
    ctx->pc = 0x2c1024u;
    // NOP
label_2c1028:
    // 0x2c1028: 0x0  nop
    ctx->pc = 0x2c1028u;
    // NOP
label_2c102c:
    // 0x2c102c: 0x0  nop
    ctx->pc = 0x2c102cu;
    // NOP
}
