#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00392B30
// Address: 0x392b30 - 0x393000
void sub_00392B30_0x392b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392B30_0x392b30");
#endif

    switch (ctx->pc) {
        case 0x392b30u: goto label_392b30;
        case 0x392b34u: goto label_392b34;
        case 0x392b38u: goto label_392b38;
        case 0x392b3cu: goto label_392b3c;
        case 0x392b40u: goto label_392b40;
        case 0x392b44u: goto label_392b44;
        case 0x392b48u: goto label_392b48;
        case 0x392b4cu: goto label_392b4c;
        case 0x392b50u: goto label_392b50;
        case 0x392b54u: goto label_392b54;
        case 0x392b58u: goto label_392b58;
        case 0x392b5cu: goto label_392b5c;
        case 0x392b60u: goto label_392b60;
        case 0x392b64u: goto label_392b64;
        case 0x392b68u: goto label_392b68;
        case 0x392b6cu: goto label_392b6c;
        case 0x392b70u: goto label_392b70;
        case 0x392b74u: goto label_392b74;
        case 0x392b78u: goto label_392b78;
        case 0x392b7cu: goto label_392b7c;
        case 0x392b80u: goto label_392b80;
        case 0x392b84u: goto label_392b84;
        case 0x392b88u: goto label_392b88;
        case 0x392b8cu: goto label_392b8c;
        case 0x392b90u: goto label_392b90;
        case 0x392b94u: goto label_392b94;
        case 0x392b98u: goto label_392b98;
        case 0x392b9cu: goto label_392b9c;
        case 0x392ba0u: goto label_392ba0;
        case 0x392ba4u: goto label_392ba4;
        case 0x392ba8u: goto label_392ba8;
        case 0x392bacu: goto label_392bac;
        case 0x392bb0u: goto label_392bb0;
        case 0x392bb4u: goto label_392bb4;
        case 0x392bb8u: goto label_392bb8;
        case 0x392bbcu: goto label_392bbc;
        case 0x392bc0u: goto label_392bc0;
        case 0x392bc4u: goto label_392bc4;
        case 0x392bc8u: goto label_392bc8;
        case 0x392bccu: goto label_392bcc;
        case 0x392bd0u: goto label_392bd0;
        case 0x392bd4u: goto label_392bd4;
        case 0x392bd8u: goto label_392bd8;
        case 0x392bdcu: goto label_392bdc;
        case 0x392be0u: goto label_392be0;
        case 0x392be4u: goto label_392be4;
        case 0x392be8u: goto label_392be8;
        case 0x392becu: goto label_392bec;
        case 0x392bf0u: goto label_392bf0;
        case 0x392bf4u: goto label_392bf4;
        case 0x392bf8u: goto label_392bf8;
        case 0x392bfcu: goto label_392bfc;
        case 0x392c00u: goto label_392c00;
        case 0x392c04u: goto label_392c04;
        case 0x392c08u: goto label_392c08;
        case 0x392c0cu: goto label_392c0c;
        case 0x392c10u: goto label_392c10;
        case 0x392c14u: goto label_392c14;
        case 0x392c18u: goto label_392c18;
        case 0x392c1cu: goto label_392c1c;
        case 0x392c20u: goto label_392c20;
        case 0x392c24u: goto label_392c24;
        case 0x392c28u: goto label_392c28;
        case 0x392c2cu: goto label_392c2c;
        case 0x392c30u: goto label_392c30;
        case 0x392c34u: goto label_392c34;
        case 0x392c38u: goto label_392c38;
        case 0x392c3cu: goto label_392c3c;
        case 0x392c40u: goto label_392c40;
        case 0x392c44u: goto label_392c44;
        case 0x392c48u: goto label_392c48;
        case 0x392c4cu: goto label_392c4c;
        case 0x392c50u: goto label_392c50;
        case 0x392c54u: goto label_392c54;
        case 0x392c58u: goto label_392c58;
        case 0x392c5cu: goto label_392c5c;
        case 0x392c60u: goto label_392c60;
        case 0x392c64u: goto label_392c64;
        case 0x392c68u: goto label_392c68;
        case 0x392c6cu: goto label_392c6c;
        case 0x392c70u: goto label_392c70;
        case 0x392c74u: goto label_392c74;
        case 0x392c78u: goto label_392c78;
        case 0x392c7cu: goto label_392c7c;
        case 0x392c80u: goto label_392c80;
        case 0x392c84u: goto label_392c84;
        case 0x392c88u: goto label_392c88;
        case 0x392c8cu: goto label_392c8c;
        case 0x392c90u: goto label_392c90;
        case 0x392c94u: goto label_392c94;
        case 0x392c98u: goto label_392c98;
        case 0x392c9cu: goto label_392c9c;
        case 0x392ca0u: goto label_392ca0;
        case 0x392ca4u: goto label_392ca4;
        case 0x392ca8u: goto label_392ca8;
        case 0x392cacu: goto label_392cac;
        case 0x392cb0u: goto label_392cb0;
        case 0x392cb4u: goto label_392cb4;
        case 0x392cb8u: goto label_392cb8;
        case 0x392cbcu: goto label_392cbc;
        case 0x392cc0u: goto label_392cc0;
        case 0x392cc4u: goto label_392cc4;
        case 0x392cc8u: goto label_392cc8;
        case 0x392cccu: goto label_392ccc;
        case 0x392cd0u: goto label_392cd0;
        case 0x392cd4u: goto label_392cd4;
        case 0x392cd8u: goto label_392cd8;
        case 0x392cdcu: goto label_392cdc;
        case 0x392ce0u: goto label_392ce0;
        case 0x392ce4u: goto label_392ce4;
        case 0x392ce8u: goto label_392ce8;
        case 0x392cecu: goto label_392cec;
        case 0x392cf0u: goto label_392cf0;
        case 0x392cf4u: goto label_392cf4;
        case 0x392cf8u: goto label_392cf8;
        case 0x392cfcu: goto label_392cfc;
        case 0x392d00u: goto label_392d00;
        case 0x392d04u: goto label_392d04;
        case 0x392d08u: goto label_392d08;
        case 0x392d0cu: goto label_392d0c;
        case 0x392d10u: goto label_392d10;
        case 0x392d14u: goto label_392d14;
        case 0x392d18u: goto label_392d18;
        case 0x392d1cu: goto label_392d1c;
        case 0x392d20u: goto label_392d20;
        case 0x392d24u: goto label_392d24;
        case 0x392d28u: goto label_392d28;
        case 0x392d2cu: goto label_392d2c;
        case 0x392d30u: goto label_392d30;
        case 0x392d34u: goto label_392d34;
        case 0x392d38u: goto label_392d38;
        case 0x392d3cu: goto label_392d3c;
        case 0x392d40u: goto label_392d40;
        case 0x392d44u: goto label_392d44;
        case 0x392d48u: goto label_392d48;
        case 0x392d4cu: goto label_392d4c;
        case 0x392d50u: goto label_392d50;
        case 0x392d54u: goto label_392d54;
        case 0x392d58u: goto label_392d58;
        case 0x392d5cu: goto label_392d5c;
        case 0x392d60u: goto label_392d60;
        case 0x392d64u: goto label_392d64;
        case 0x392d68u: goto label_392d68;
        case 0x392d6cu: goto label_392d6c;
        case 0x392d70u: goto label_392d70;
        case 0x392d74u: goto label_392d74;
        case 0x392d78u: goto label_392d78;
        case 0x392d7cu: goto label_392d7c;
        case 0x392d80u: goto label_392d80;
        case 0x392d84u: goto label_392d84;
        case 0x392d88u: goto label_392d88;
        case 0x392d8cu: goto label_392d8c;
        case 0x392d90u: goto label_392d90;
        case 0x392d94u: goto label_392d94;
        case 0x392d98u: goto label_392d98;
        case 0x392d9cu: goto label_392d9c;
        case 0x392da0u: goto label_392da0;
        case 0x392da4u: goto label_392da4;
        case 0x392da8u: goto label_392da8;
        case 0x392dacu: goto label_392dac;
        case 0x392db0u: goto label_392db0;
        case 0x392db4u: goto label_392db4;
        case 0x392db8u: goto label_392db8;
        case 0x392dbcu: goto label_392dbc;
        case 0x392dc0u: goto label_392dc0;
        case 0x392dc4u: goto label_392dc4;
        case 0x392dc8u: goto label_392dc8;
        case 0x392dccu: goto label_392dcc;
        case 0x392dd0u: goto label_392dd0;
        case 0x392dd4u: goto label_392dd4;
        case 0x392dd8u: goto label_392dd8;
        case 0x392ddcu: goto label_392ddc;
        case 0x392de0u: goto label_392de0;
        case 0x392de4u: goto label_392de4;
        case 0x392de8u: goto label_392de8;
        case 0x392decu: goto label_392dec;
        case 0x392df0u: goto label_392df0;
        case 0x392df4u: goto label_392df4;
        case 0x392df8u: goto label_392df8;
        case 0x392dfcu: goto label_392dfc;
        case 0x392e00u: goto label_392e00;
        case 0x392e04u: goto label_392e04;
        case 0x392e08u: goto label_392e08;
        case 0x392e0cu: goto label_392e0c;
        case 0x392e10u: goto label_392e10;
        case 0x392e14u: goto label_392e14;
        case 0x392e18u: goto label_392e18;
        case 0x392e1cu: goto label_392e1c;
        case 0x392e20u: goto label_392e20;
        case 0x392e24u: goto label_392e24;
        case 0x392e28u: goto label_392e28;
        case 0x392e2cu: goto label_392e2c;
        case 0x392e30u: goto label_392e30;
        case 0x392e34u: goto label_392e34;
        case 0x392e38u: goto label_392e38;
        case 0x392e3cu: goto label_392e3c;
        case 0x392e40u: goto label_392e40;
        case 0x392e44u: goto label_392e44;
        case 0x392e48u: goto label_392e48;
        case 0x392e4cu: goto label_392e4c;
        case 0x392e50u: goto label_392e50;
        case 0x392e54u: goto label_392e54;
        case 0x392e58u: goto label_392e58;
        case 0x392e5cu: goto label_392e5c;
        case 0x392e60u: goto label_392e60;
        case 0x392e64u: goto label_392e64;
        case 0x392e68u: goto label_392e68;
        case 0x392e6cu: goto label_392e6c;
        case 0x392e70u: goto label_392e70;
        case 0x392e74u: goto label_392e74;
        case 0x392e78u: goto label_392e78;
        case 0x392e7cu: goto label_392e7c;
        case 0x392e80u: goto label_392e80;
        case 0x392e84u: goto label_392e84;
        case 0x392e88u: goto label_392e88;
        case 0x392e8cu: goto label_392e8c;
        case 0x392e90u: goto label_392e90;
        case 0x392e94u: goto label_392e94;
        case 0x392e98u: goto label_392e98;
        case 0x392e9cu: goto label_392e9c;
        case 0x392ea0u: goto label_392ea0;
        case 0x392ea4u: goto label_392ea4;
        case 0x392ea8u: goto label_392ea8;
        case 0x392eacu: goto label_392eac;
        case 0x392eb0u: goto label_392eb0;
        case 0x392eb4u: goto label_392eb4;
        case 0x392eb8u: goto label_392eb8;
        case 0x392ebcu: goto label_392ebc;
        case 0x392ec0u: goto label_392ec0;
        case 0x392ec4u: goto label_392ec4;
        case 0x392ec8u: goto label_392ec8;
        case 0x392eccu: goto label_392ecc;
        case 0x392ed0u: goto label_392ed0;
        case 0x392ed4u: goto label_392ed4;
        case 0x392ed8u: goto label_392ed8;
        case 0x392edcu: goto label_392edc;
        case 0x392ee0u: goto label_392ee0;
        case 0x392ee4u: goto label_392ee4;
        case 0x392ee8u: goto label_392ee8;
        case 0x392eecu: goto label_392eec;
        case 0x392ef0u: goto label_392ef0;
        case 0x392ef4u: goto label_392ef4;
        case 0x392ef8u: goto label_392ef8;
        case 0x392efcu: goto label_392efc;
        case 0x392f00u: goto label_392f00;
        case 0x392f04u: goto label_392f04;
        case 0x392f08u: goto label_392f08;
        case 0x392f0cu: goto label_392f0c;
        case 0x392f10u: goto label_392f10;
        case 0x392f14u: goto label_392f14;
        case 0x392f18u: goto label_392f18;
        case 0x392f1cu: goto label_392f1c;
        case 0x392f20u: goto label_392f20;
        case 0x392f24u: goto label_392f24;
        case 0x392f28u: goto label_392f28;
        case 0x392f2cu: goto label_392f2c;
        case 0x392f30u: goto label_392f30;
        case 0x392f34u: goto label_392f34;
        case 0x392f38u: goto label_392f38;
        case 0x392f3cu: goto label_392f3c;
        case 0x392f40u: goto label_392f40;
        case 0x392f44u: goto label_392f44;
        case 0x392f48u: goto label_392f48;
        case 0x392f4cu: goto label_392f4c;
        case 0x392f50u: goto label_392f50;
        case 0x392f54u: goto label_392f54;
        case 0x392f58u: goto label_392f58;
        case 0x392f5cu: goto label_392f5c;
        case 0x392f60u: goto label_392f60;
        case 0x392f64u: goto label_392f64;
        case 0x392f68u: goto label_392f68;
        case 0x392f6cu: goto label_392f6c;
        case 0x392f70u: goto label_392f70;
        case 0x392f74u: goto label_392f74;
        case 0x392f78u: goto label_392f78;
        case 0x392f7cu: goto label_392f7c;
        case 0x392f80u: goto label_392f80;
        case 0x392f84u: goto label_392f84;
        case 0x392f88u: goto label_392f88;
        case 0x392f8cu: goto label_392f8c;
        case 0x392f90u: goto label_392f90;
        case 0x392f94u: goto label_392f94;
        case 0x392f98u: goto label_392f98;
        case 0x392f9cu: goto label_392f9c;
        case 0x392fa0u: goto label_392fa0;
        case 0x392fa4u: goto label_392fa4;
        case 0x392fa8u: goto label_392fa8;
        case 0x392facu: goto label_392fac;
        case 0x392fb0u: goto label_392fb0;
        case 0x392fb4u: goto label_392fb4;
        case 0x392fb8u: goto label_392fb8;
        case 0x392fbcu: goto label_392fbc;
        case 0x392fc0u: goto label_392fc0;
        case 0x392fc4u: goto label_392fc4;
        case 0x392fc8u: goto label_392fc8;
        case 0x392fccu: goto label_392fcc;
        case 0x392fd0u: goto label_392fd0;
        case 0x392fd4u: goto label_392fd4;
        case 0x392fd8u: goto label_392fd8;
        case 0x392fdcu: goto label_392fdc;
        case 0x392fe0u: goto label_392fe0;
        case 0x392fe4u: goto label_392fe4;
        case 0x392fe8u: goto label_392fe8;
        case 0x392fecu: goto label_392fec;
        case 0x392ff0u: goto label_392ff0;
        case 0x392ff4u: goto label_392ff4;
        case 0x392ff8u: goto label_392ff8;
        case 0x392ffcu: goto label_392ffc;
        default: break;
    }

    ctx->pc = 0x392b30u;

label_392b30:
    // 0x392b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x392b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_392b34:
    // 0x392b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x392b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_392b38:
    // 0x392b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x392b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_392b3c:
    // 0x392b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x392b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_392b40:
    // 0x392b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x392b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392b44:
    // 0x392b44: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_392b48:
    if (ctx->pc == 0x392B48u) {
        ctx->pc = 0x392B48u;
            // 0x392b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392B4Cu;
        goto label_392b4c;
    }
    ctx->pc = 0x392B44u;
    {
        const bool branch_taken_0x392b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x392B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392B44u;
            // 0x392b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392b44) {
            ctx->pc = 0x392C78u;
            goto label_392c78;
        }
    }
    ctx->pc = 0x392B4Cu;
label_392b4c:
    // 0x392b4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x392b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_392b50:
    // 0x392b50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x392b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_392b54:
    // 0x392b54: 0x24637ee0  addiu       $v1, $v1, 0x7EE0
    ctx->pc = 0x392b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32480));
label_392b58:
    // 0x392b58: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x392b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_392b5c:
    // 0x392b5c: 0x24427f18  addiu       $v0, $v0, 0x7F18
    ctx->pc = 0x392b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32536));
label_392b60:
    // 0x392b60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x392b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_392b64:
    // 0x392b64: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x392b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_392b68:
    // 0x392b68: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x392b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_392b6c:
    // 0x392b6c: 0xc0407c0  jal         func_101F00
label_392b70:
    if (ctx->pc == 0x392B70u) {
        ctx->pc = 0x392B70u;
            // 0x392b70: 0x24a52c90  addiu       $a1, $a1, 0x2C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11408));
        ctx->pc = 0x392B74u;
        goto label_392b74;
    }
    ctx->pc = 0x392B6Cu;
    SET_GPR_U32(ctx, 31, 0x392B74u);
    ctx->pc = 0x392B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392B6Cu;
            // 0x392b70: 0x24a52c90  addiu       $a1, $a1, 0x2C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392B74u; }
        if (ctx->pc != 0x392B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392B74u; }
        if (ctx->pc != 0x392B74u) { return; }
    }
    ctx->pc = 0x392B74u;
label_392b74:
    // 0x392b74: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x392b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_392b78:
    // 0x392b78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_392b7c:
    if (ctx->pc == 0x392B7Cu) {
        ctx->pc = 0x392B7Cu;
            // 0x392b7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x392B80u;
        goto label_392b80;
    }
    ctx->pc = 0x392B78u;
    {
        const bool branch_taken_0x392b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392b78) {
            ctx->pc = 0x392B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392B78u;
            // 0x392b7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392B8Cu;
            goto label_392b8c;
        }
    }
    ctx->pc = 0x392B80u;
label_392b80:
    // 0x392b80: 0xc07507c  jal         func_1D41F0
label_392b84:
    if (ctx->pc == 0x392B84u) {
        ctx->pc = 0x392B84u;
            // 0x392b84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x392B88u;
        goto label_392b88;
    }
    ctx->pc = 0x392B80u;
    SET_GPR_U32(ctx, 31, 0x392B88u);
    ctx->pc = 0x392B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392B80u;
            // 0x392b84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392B88u; }
        if (ctx->pc != 0x392B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392B88u; }
        if (ctx->pc != 0x392B88u) { return; }
    }
    ctx->pc = 0x392B88u;
label_392b88:
    // 0x392b88: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x392b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_392b8c:
    // 0x392b8c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_392b90:
    if (ctx->pc == 0x392B90u) {
        ctx->pc = 0x392B90u;
            // 0x392b90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x392B94u;
        goto label_392b94;
    }
    ctx->pc = 0x392B8Cu;
    {
        const bool branch_taken_0x392b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392b8c) {
            ctx->pc = 0x392B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392B8Cu;
            // 0x392b90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392BBCu;
            goto label_392bbc;
        }
    }
    ctx->pc = 0x392B94u;
label_392b94:
    // 0x392b94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_392b98:
    if (ctx->pc == 0x392B98u) {
        ctx->pc = 0x392B9Cu;
        goto label_392b9c;
    }
    ctx->pc = 0x392B94u;
    {
        const bool branch_taken_0x392b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392b94) {
            ctx->pc = 0x392BB8u;
            goto label_392bb8;
        }
    }
    ctx->pc = 0x392B9Cu;
label_392b9c:
    // 0x392b9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_392ba0:
    if (ctx->pc == 0x392BA0u) {
        ctx->pc = 0x392BA4u;
        goto label_392ba4;
    }
    ctx->pc = 0x392B9Cu;
    {
        const bool branch_taken_0x392b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392b9c) {
            ctx->pc = 0x392BB8u;
            goto label_392bb8;
        }
    }
    ctx->pc = 0x392BA4u;
label_392ba4:
    // 0x392ba4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x392ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_392ba8:
    // 0x392ba8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_392bac:
    if (ctx->pc == 0x392BACu) {
        ctx->pc = 0x392BB0u;
        goto label_392bb0;
    }
    ctx->pc = 0x392BA8u;
    {
        const bool branch_taken_0x392ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392ba8) {
            ctx->pc = 0x392BB8u;
            goto label_392bb8;
        }
    }
    ctx->pc = 0x392BB0u;
label_392bb0:
    // 0x392bb0: 0xc0400a8  jal         func_1002A0
label_392bb4:
    if (ctx->pc == 0x392BB4u) {
        ctx->pc = 0x392BB8u;
        goto label_392bb8;
    }
    ctx->pc = 0x392BB0u;
    SET_GPR_U32(ctx, 31, 0x392BB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392BB8u; }
        if (ctx->pc != 0x392BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392BB8u; }
        if (ctx->pc != 0x392BB8u) { return; }
    }
    ctx->pc = 0x392BB8u;
label_392bb8:
    // 0x392bb8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x392bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_392bbc:
    // 0x392bbc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_392bc0:
    if (ctx->pc == 0x392BC0u) {
        ctx->pc = 0x392BC0u;
            // 0x392bc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x392BC4u;
        goto label_392bc4;
    }
    ctx->pc = 0x392BBCu;
    {
        const bool branch_taken_0x392bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392bbc) {
            ctx->pc = 0x392BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392BBCu;
            // 0x392bc0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392BECu;
            goto label_392bec;
        }
    }
    ctx->pc = 0x392BC4u;
label_392bc4:
    // 0x392bc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_392bc8:
    if (ctx->pc == 0x392BC8u) {
        ctx->pc = 0x392BCCu;
        goto label_392bcc;
    }
    ctx->pc = 0x392BC4u;
    {
        const bool branch_taken_0x392bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392bc4) {
            ctx->pc = 0x392BE8u;
            goto label_392be8;
        }
    }
    ctx->pc = 0x392BCCu;
label_392bcc:
    // 0x392bcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_392bd0:
    if (ctx->pc == 0x392BD0u) {
        ctx->pc = 0x392BD4u;
        goto label_392bd4;
    }
    ctx->pc = 0x392BCCu;
    {
        const bool branch_taken_0x392bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392bcc) {
            ctx->pc = 0x392BE8u;
            goto label_392be8;
        }
    }
    ctx->pc = 0x392BD4u;
label_392bd4:
    // 0x392bd4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x392bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_392bd8:
    // 0x392bd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_392bdc:
    if (ctx->pc == 0x392BDCu) {
        ctx->pc = 0x392BE0u;
        goto label_392be0;
    }
    ctx->pc = 0x392BD8u;
    {
        const bool branch_taken_0x392bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392bd8) {
            ctx->pc = 0x392BE8u;
            goto label_392be8;
        }
    }
    ctx->pc = 0x392BE0u;
label_392be0:
    // 0x392be0: 0xc0400a8  jal         func_1002A0
label_392be4:
    if (ctx->pc == 0x392BE4u) {
        ctx->pc = 0x392BE8u;
        goto label_392be8;
    }
    ctx->pc = 0x392BE0u;
    SET_GPR_U32(ctx, 31, 0x392BE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392BE8u; }
        if (ctx->pc != 0x392BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392BE8u; }
        if (ctx->pc != 0x392BE8u) { return; }
    }
    ctx->pc = 0x392BE8u;
label_392be8:
    // 0x392be8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x392be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_392bec:
    // 0x392bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_392bf0:
    if (ctx->pc == 0x392BF0u) {
        ctx->pc = 0x392BF4u;
        goto label_392bf4;
    }
    ctx->pc = 0x392BECu;
    {
        const bool branch_taken_0x392bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392bec) {
            ctx->pc = 0x392C08u;
            goto label_392c08;
        }
    }
    ctx->pc = 0x392BF4u;
label_392bf4:
    // 0x392bf4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x392bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_392bf8:
    // 0x392bf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x392bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_392bfc:
    // 0x392bfc: 0x24637ec8  addiu       $v1, $v1, 0x7EC8
    ctx->pc = 0x392bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32456));
label_392c00:
    // 0x392c00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x392c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_392c04:
    // 0x392c04: 0xac406128  sw          $zero, 0x6128($v0)
    ctx->pc = 0x392c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24872), GPR_U32(ctx, 0));
label_392c08:
    // 0x392c08: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_392c0c:
    if (ctx->pc == 0x392C0Cu) {
        ctx->pc = 0x392C0Cu;
            // 0x392c0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x392C10u;
        goto label_392c10;
    }
    ctx->pc = 0x392C08u;
    {
        const bool branch_taken_0x392c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x392c08) {
            ctx->pc = 0x392C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392C08u;
            // 0x392c0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392C64u;
            goto label_392c64;
        }
    }
    ctx->pc = 0x392C10u;
label_392c10:
    // 0x392c10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x392c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_392c14:
    // 0x392c14: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x392c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_392c18:
    // 0x392c18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x392c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_392c1c:
    // 0x392c1c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x392c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_392c20:
    // 0x392c20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_392c24:
    if (ctx->pc == 0x392C24u) {
        ctx->pc = 0x392C24u;
            // 0x392c24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x392C28u;
        goto label_392c28;
    }
    ctx->pc = 0x392C20u;
    {
        const bool branch_taken_0x392c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392c20) {
            ctx->pc = 0x392C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392C20u;
            // 0x392c24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392C3Cu;
            goto label_392c3c;
        }
    }
    ctx->pc = 0x392C28u;
label_392c28:
    // 0x392c28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x392c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_392c2c:
    // 0x392c2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x392c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_392c30:
    // 0x392c30: 0x320f809  jalr        $t9
label_392c34:
    if (ctx->pc == 0x392C34u) {
        ctx->pc = 0x392C34u;
            // 0x392c34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x392C38u;
        goto label_392c38;
    }
    ctx->pc = 0x392C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392C38u);
        ctx->pc = 0x392C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392C30u;
            // 0x392c34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392C38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392C38u; }
            if (ctx->pc != 0x392C38u) { return; }
        }
        }
    }
    ctx->pc = 0x392C38u;
label_392c38:
    // 0x392c38: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x392c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_392c3c:
    // 0x392c3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_392c40:
    if (ctx->pc == 0x392C40u) {
        ctx->pc = 0x392C40u;
            // 0x392c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392C44u;
        goto label_392c44;
    }
    ctx->pc = 0x392C3Cu;
    {
        const bool branch_taken_0x392c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392c3c) {
            ctx->pc = 0x392C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392C3Cu;
            // 0x392c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392C58u;
            goto label_392c58;
        }
    }
    ctx->pc = 0x392C44u;
label_392c44:
    // 0x392c44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x392c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_392c48:
    // 0x392c48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x392c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_392c4c:
    // 0x392c4c: 0x320f809  jalr        $t9
label_392c50:
    if (ctx->pc == 0x392C50u) {
        ctx->pc = 0x392C50u;
            // 0x392c50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x392C54u;
        goto label_392c54;
    }
    ctx->pc = 0x392C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392C54u);
        ctx->pc = 0x392C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392C4Cu;
            // 0x392c50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392C54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392C54u; }
            if (ctx->pc != 0x392C54u) { return; }
        }
        }
    }
    ctx->pc = 0x392C54u;
label_392c54:
    // 0x392c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x392c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392c58:
    // 0x392c58: 0xc075bf8  jal         func_1D6FE0
label_392c5c:
    if (ctx->pc == 0x392C5Cu) {
        ctx->pc = 0x392C5Cu;
            // 0x392c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392C60u;
        goto label_392c60;
    }
    ctx->pc = 0x392C58u;
    SET_GPR_U32(ctx, 31, 0x392C60u);
    ctx->pc = 0x392C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392C58u;
            // 0x392c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392C60u; }
        if (ctx->pc != 0x392C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392C60u; }
        if (ctx->pc != 0x392C60u) { return; }
    }
    ctx->pc = 0x392C60u;
label_392c60:
    // 0x392c60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x392c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_392c64:
    // 0x392c64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x392c64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_392c68:
    // 0x392c68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_392c6c:
    if (ctx->pc == 0x392C6Cu) {
        ctx->pc = 0x392C6Cu;
            // 0x392c6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392C70u;
        goto label_392c70;
    }
    ctx->pc = 0x392C68u;
    {
        const bool branch_taken_0x392c68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x392c68) {
            ctx->pc = 0x392C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392C68u;
            // 0x392c6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392C7Cu;
            goto label_392c7c;
        }
    }
    ctx->pc = 0x392C70u;
label_392c70:
    // 0x392c70: 0xc0400a8  jal         func_1002A0
label_392c74:
    if (ctx->pc == 0x392C74u) {
        ctx->pc = 0x392C74u;
            // 0x392c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392C78u;
        goto label_392c78;
    }
    ctx->pc = 0x392C70u;
    SET_GPR_U32(ctx, 31, 0x392C78u);
    ctx->pc = 0x392C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392C70u;
            // 0x392c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392C78u; }
        if (ctx->pc != 0x392C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392C78u; }
        if (ctx->pc != 0x392C78u) { return; }
    }
    ctx->pc = 0x392C78u;
label_392c78:
    // 0x392c78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x392c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392c7c:
    // 0x392c7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x392c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_392c80:
    // 0x392c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x392c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_392c84:
    // 0x392c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_392c88:
    // 0x392c88: 0x3e00008  jr          $ra
label_392c8c:
    if (ctx->pc == 0x392C8Cu) {
        ctx->pc = 0x392C8Cu;
            // 0x392c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x392C90u;
        goto label_392c90;
    }
    ctx->pc = 0x392C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392C88u;
            // 0x392c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x392C90u;
label_392c90:
    // 0x392c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x392c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_392c94:
    // 0x392c94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x392c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_392c98:
    // 0x392c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x392c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_392c9c:
    // 0x392c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x392c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_392ca0:
    // 0x392ca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392ca4:
    // 0x392ca4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_392ca8:
    if (ctx->pc == 0x392CA8u) {
        ctx->pc = 0x392CA8u;
            // 0x392ca8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392CACu;
        goto label_392cac;
    }
    ctx->pc = 0x392CA4u;
    {
        const bool branch_taken_0x392ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392CA4u;
            // 0x392ca8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ca4) {
            ctx->pc = 0x392D6Cu;
            goto label_392d6c;
        }
    }
    ctx->pc = 0x392CACu;
label_392cac:
    // 0x392cac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x392cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_392cb0:
    // 0x392cb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x392cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_392cb4:
    // 0x392cb4: 0x24637f80  addiu       $v1, $v1, 0x7F80
    ctx->pc = 0x392cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32640));
label_392cb8:
    // 0x392cb8: 0x24427fc0  addiu       $v0, $v0, 0x7FC0
    ctx->pc = 0x392cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32704));
label_392cbc:
    // 0x392cbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x392cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_392cc0:
    // 0x392cc0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x392cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_392cc4:
    // 0x392cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x392cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_392cc8:
    // 0x392cc8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x392cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_392ccc:
    // 0x392ccc: 0x320f809  jalr        $t9
label_392cd0:
    if (ctx->pc == 0x392CD0u) {
        ctx->pc = 0x392CD4u;
        goto label_392cd4;
    }
    ctx->pc = 0x392CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392CD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x392CD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392CD4u; }
            if (ctx->pc != 0x392CD4u) { return; }
        }
        }
    }
    ctx->pc = 0x392CD4u;
label_392cd4:
    // 0x392cd4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_392cd8:
    if (ctx->pc == 0x392CD8u) {
        ctx->pc = 0x392CD8u;
            // 0x392cd8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x392CDCu;
        goto label_392cdc;
    }
    ctx->pc = 0x392CD4u;
    {
        const bool branch_taken_0x392cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x392cd4) {
            ctx->pc = 0x392CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392CD4u;
            // 0x392cd8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392D58u;
            goto label_392d58;
        }
    }
    ctx->pc = 0x392CDCu;
label_392cdc:
    // 0x392cdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x392cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_392ce0:
    // 0x392ce0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x392ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_392ce4:
    // 0x392ce4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x392ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_392ce8:
    // 0x392ce8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x392ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_392cec:
    // 0x392cec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x392cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_392cf0:
    // 0x392cf0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x392cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_392cf4:
    // 0x392cf4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x392cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_392cf8:
    // 0x392cf8: 0xc0aecc4  jal         func_2BB310
label_392cfc:
    if (ctx->pc == 0x392CFCu) {
        ctx->pc = 0x392CFCu;
            // 0x392cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x392D00u;
        goto label_392d00;
    }
    ctx->pc = 0x392CF8u;
    SET_GPR_U32(ctx, 31, 0x392D00u);
    ctx->pc = 0x392CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392CF8u;
            // 0x392cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D00u; }
        if (ctx->pc != 0x392D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D00u; }
        if (ctx->pc != 0x392D00u) { return; }
    }
    ctx->pc = 0x392D00u;
label_392d00:
    // 0x392d00: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x392d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_392d04:
    // 0x392d04: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x392d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_392d08:
    // 0x392d08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_392d0c:
    if (ctx->pc == 0x392D0Cu) {
        ctx->pc = 0x392D0Cu;
            // 0x392d0c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x392D10u;
        goto label_392d10;
    }
    ctx->pc = 0x392D08u;
    {
        const bool branch_taken_0x392d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392d08) {
            ctx->pc = 0x392D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392D08u;
            // 0x392d0c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392D24u;
            goto label_392d24;
        }
    }
    ctx->pc = 0x392D10u;
label_392d10:
    // 0x392d10: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x392d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_392d14:
    // 0x392d14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x392d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_392d18:
    // 0x392d18: 0x320f809  jalr        $t9
label_392d1c:
    if (ctx->pc == 0x392D1Cu) {
        ctx->pc = 0x392D1Cu;
            // 0x392d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x392D20u;
        goto label_392d20;
    }
    ctx->pc = 0x392D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392D20u);
        ctx->pc = 0x392D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392D18u;
            // 0x392d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392D20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392D20u; }
            if (ctx->pc != 0x392D20u) { return; }
        }
        }
    }
    ctx->pc = 0x392D20u;
label_392d20:
    // 0x392d20: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x392d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_392d24:
    // 0x392d24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x392d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392d28:
    // 0x392d28: 0xc0aec9c  jal         func_2BB270
label_392d2c:
    if (ctx->pc == 0x392D2Cu) {
        ctx->pc = 0x392D2Cu;
            // 0x392d2c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x392D30u;
        goto label_392d30;
    }
    ctx->pc = 0x392D28u;
    SET_GPR_U32(ctx, 31, 0x392D30u);
    ctx->pc = 0x392D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392D28u;
            // 0x392d2c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D30u; }
        if (ctx->pc != 0x392D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D30u; }
        if (ctx->pc != 0x392D30u) { return; }
    }
    ctx->pc = 0x392D30u;
label_392d30:
    // 0x392d30: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x392d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_392d34:
    // 0x392d34: 0xc0aec88  jal         func_2BB220
label_392d38:
    if (ctx->pc == 0x392D38u) {
        ctx->pc = 0x392D38u;
            // 0x392d38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x392D3Cu;
        goto label_392d3c;
    }
    ctx->pc = 0x392D34u;
    SET_GPR_U32(ctx, 31, 0x392D3Cu);
    ctx->pc = 0x392D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392D34u;
            // 0x392d38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D3Cu; }
        if (ctx->pc != 0x392D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D3Cu; }
        if (ctx->pc != 0x392D3Cu) { return; }
    }
    ctx->pc = 0x392D3Cu;
label_392d3c:
    // 0x392d3c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x392d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_392d40:
    // 0x392d40: 0xc0aec0c  jal         func_2BB030
label_392d44:
    if (ctx->pc == 0x392D44u) {
        ctx->pc = 0x392D44u;
            // 0x392d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392D48u;
        goto label_392d48;
    }
    ctx->pc = 0x392D40u;
    SET_GPR_U32(ctx, 31, 0x392D48u);
    ctx->pc = 0x392D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392D40u;
            // 0x392d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D48u; }
        if (ctx->pc != 0x392D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D48u; }
        if (ctx->pc != 0x392D48u) { return; }
    }
    ctx->pc = 0x392D48u;
label_392d48:
    // 0x392d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392d4c:
    // 0x392d4c: 0xc0aeaa8  jal         func_2BAAA0
label_392d50:
    if (ctx->pc == 0x392D50u) {
        ctx->pc = 0x392D50u;
            // 0x392d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392D54u;
        goto label_392d54;
    }
    ctx->pc = 0x392D4Cu;
    SET_GPR_U32(ctx, 31, 0x392D54u);
    ctx->pc = 0x392D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392D4Cu;
            // 0x392d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D54u; }
        if (ctx->pc != 0x392D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D54u; }
        if (ctx->pc != 0x392D54u) { return; }
    }
    ctx->pc = 0x392D54u;
label_392d54:
    // 0x392d54: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x392d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_392d58:
    // 0x392d58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x392d58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_392d5c:
    // 0x392d5c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_392d60:
    if (ctx->pc == 0x392D60u) {
        ctx->pc = 0x392D60u;
            // 0x392d60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392D64u;
        goto label_392d64;
    }
    ctx->pc = 0x392D5Cu;
    {
        const bool branch_taken_0x392d5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x392d5c) {
            ctx->pc = 0x392D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392D5Cu;
            // 0x392d60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392D70u;
            goto label_392d70;
        }
    }
    ctx->pc = 0x392D64u;
label_392d64:
    // 0x392d64: 0xc0400a8  jal         func_1002A0
label_392d68:
    if (ctx->pc == 0x392D68u) {
        ctx->pc = 0x392D68u;
            // 0x392d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392D6Cu;
        goto label_392d6c;
    }
    ctx->pc = 0x392D64u;
    SET_GPR_U32(ctx, 31, 0x392D6Cu);
    ctx->pc = 0x392D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392D64u;
            // 0x392d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D6Cu; }
        if (ctx->pc != 0x392D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392D6Cu; }
        if (ctx->pc != 0x392D6Cu) { return; }
    }
    ctx->pc = 0x392D6Cu;
label_392d6c:
    // 0x392d6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x392d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392d70:
    // 0x392d70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x392d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_392d74:
    // 0x392d74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x392d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_392d78:
    // 0x392d78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_392d7c:
    // 0x392d7c: 0x3e00008  jr          $ra
label_392d80:
    if (ctx->pc == 0x392D80u) {
        ctx->pc = 0x392D80u;
            // 0x392d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x392D84u;
        goto label_392d84;
    }
    ctx->pc = 0x392D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392D7Cu;
            // 0x392d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x392D84u;
label_392d84:
    // 0x392d84: 0x0  nop
    ctx->pc = 0x392d84u;
    // NOP
label_392d88:
    // 0x392d88: 0x0  nop
    ctx->pc = 0x392d88u;
    // NOP
label_392d8c:
    // 0x392d8c: 0x0  nop
    ctx->pc = 0x392d8cu;
    // NOP
label_392d90:
    // 0x392d90: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x392d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_392d94:
    // 0x392d94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x392d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_392d98:
    // 0x392d98: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x392d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_392d9c:
    // 0x392d9c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x392d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_392da0:
    // 0x392da0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x392da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_392da4:
    // 0x392da4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x392da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_392da8:
    // 0x392da8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x392da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_392dac:
    // 0x392dac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x392dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_392db0:
    // 0x392db0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x392db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_392db4:
    // 0x392db4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x392db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_392db8:
    // 0x392db8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x392db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_392dbc:
    // 0x392dbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x392dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_392dc0:
    // 0x392dc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x392dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_392dc4:
    // 0x392dc4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x392dc4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_392dc8:
    // 0x392dc8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_392dcc:
    if (ctx->pc == 0x392DCCu) {
        ctx->pc = 0x392DCCu;
            // 0x392dcc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392DD0u;
        goto label_392dd0;
    }
    ctx->pc = 0x392DC8u;
    {
        const bool branch_taken_0x392dc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x392DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392DC8u;
            // 0x392dcc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392dc8) {
            ctx->pc = 0x392E18u;
            goto label_392e18;
        }
    }
    ctx->pc = 0x392DD0u;
label_392dd0:
    // 0x392dd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x392dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_392dd4:
    // 0x392dd4: 0x50a3007b  beql        $a1, $v1, . + 4 + (0x7B << 2)
label_392dd8:
    if (ctx->pc == 0x392DD8u) {
        ctx->pc = 0x392DD8u;
            // 0x392dd8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x392DDCu;
        goto label_392ddc;
    }
    ctx->pc = 0x392DD4u;
    {
        const bool branch_taken_0x392dd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x392dd4) {
            ctx->pc = 0x392DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392DD4u;
            // 0x392dd8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392FC4u;
            goto label_392fc4;
        }
    }
    ctx->pc = 0x392DDCu;
label_392ddc:
    // 0x392ddc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x392ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_392de0:
    // 0x392de0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_392de4:
    if (ctx->pc == 0x392DE4u) {
        ctx->pc = 0x392DE8u;
        goto label_392de8;
    }
    ctx->pc = 0x392DE0u;
    {
        const bool branch_taken_0x392de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x392de0) {
            ctx->pc = 0x392DF0u;
            goto label_392df0;
        }
    }
    ctx->pc = 0x392DE8u;
label_392de8:
    // 0x392de8: 0x10000075  b           . + 4 + (0x75 << 2)
label_392dec:
    if (ctx->pc == 0x392DECu) {
        ctx->pc = 0x392DF0u;
        goto label_392df0;
    }
    ctx->pc = 0x392DE8u;
    {
        const bool branch_taken_0x392de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392de8) {
            ctx->pc = 0x392FC0u;
            goto label_392fc0;
        }
    }
    ctx->pc = 0x392DF0u;
label_392df0:
    // 0x392df0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x392df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_392df4:
    // 0x392df4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x392df4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_392df8:
    // 0x392df8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x392df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_392dfc:
    // 0x392dfc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x392dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_392e00:
    // 0x392e00: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x392e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_392e04:
    // 0x392e04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x392e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_392e08:
    // 0x392e08: 0x320f809  jalr        $t9
label_392e0c:
    if (ctx->pc == 0x392E0Cu) {
        ctx->pc = 0x392E0Cu;
            // 0x392e0c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x392E10u;
        goto label_392e10;
    }
    ctx->pc = 0x392E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392E10u);
        ctx->pc = 0x392E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392E08u;
            // 0x392e0c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392E10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392E10u; }
            if (ctx->pc != 0x392E10u) { return; }
        }
        }
    }
    ctx->pc = 0x392E10u;
label_392e10:
    // 0x392e10: 0x1000006b  b           . + 4 + (0x6B << 2)
label_392e14:
    if (ctx->pc == 0x392E14u) {
        ctx->pc = 0x392E18u;
        goto label_392e18;
    }
    ctx->pc = 0x392E10u;
    {
        const bool branch_taken_0x392e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392e10) {
            ctx->pc = 0x392FC0u;
            goto label_392fc0;
        }
    }
    ctx->pc = 0x392E18u;
label_392e18:
    // 0x392e18: 0x8eb70070  lw          $s7, 0x70($s5)
    ctx->pc = 0x392e18u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_392e1c:
    // 0x392e1c: 0x12e00068  beqz        $s7, . + 4 + (0x68 << 2)
label_392e20:
    if (ctx->pc == 0x392E20u) {
        ctx->pc = 0x392E24u;
        goto label_392e24;
    }
    ctx->pc = 0x392E1Cu;
    {
        const bool branch_taken_0x392e1c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x392e1c) {
            ctx->pc = 0x392FC0u;
            goto label_392fc0;
        }
    }
    ctx->pc = 0x392E24u;
label_392e24:
    // 0x392e24: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x392e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_392e28:
    // 0x392e28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x392e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_392e2c:
    // 0x392e2c: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x392e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_392e30:
    // 0x392e30: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x392e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_392e34:
    // 0x392e34: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x392e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_392e38:
    // 0x392e38: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x392e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_392e3c:
    // 0x392e3c: 0x8cb60130  lw          $s6, 0x130($a1)
    ctx->pc = 0x392e3cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_392e40:
    // 0x392e40: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x392e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_392e44:
    // 0x392e44: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x392e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_392e48:
    // 0x392e48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x392e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_392e4c:
    // 0x392e4c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x392e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_392e50:
    // 0x392e50: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x392e50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_392e54:
    // 0x392e54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x392e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_392e58:
    // 0x392e58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x392e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_392e5c:
    // 0x392e5c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x392e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_392e60:
    // 0x392e60: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x392e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_392e64:
    // 0x392e64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x392e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_392e68:
    // 0x392e68: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x392e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_392e6c:
    // 0x392e6c: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x392e6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_392e70:
    // 0x392e70: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x392e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_392e74:
    // 0x392e74: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x392e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_392e78:
    // 0x392e78: 0xc04e738  jal         func_139CE0
label_392e7c:
    if (ctx->pc == 0x392E7Cu) {
        ctx->pc = 0x392E7Cu;
            // 0x392e7c: 0x26b40084  addiu       $s4, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->pc = 0x392E80u;
        goto label_392e80;
    }
    ctx->pc = 0x392E78u;
    SET_GPR_U32(ctx, 31, 0x392E80u);
    ctx->pc = 0x392E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392E78u;
            // 0x392e7c: 0x26b40084  addiu       $s4, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392E80u; }
        if (ctx->pc != 0x392E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392E80u; }
        if (ctx->pc != 0x392E80u) { return; }
    }
    ctx->pc = 0x392E80u;
label_392e80:
    // 0x392e80: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x392e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_392e84:
    // 0x392e84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x392e84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392e88:
    // 0x392e88: 0xc4546120  lwc1        $f20, 0x6120($v0)
    ctx->pc = 0x392e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_392e8c:
    // 0x392e8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x392e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392e90:
    // 0x392e90: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x392e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_392e94:
    // 0x392e94: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x392e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_392e98:
    // 0x392e98: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x392e98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_392e9c:
    // 0x392e9c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x392e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_392ea0:
    // 0x392ea0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x392ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_392ea4:
    // 0x392ea4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x392ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_392ea8:
    // 0x392ea8: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x392ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_392eac:
    // 0x392eac: 0xc0d639c  jal         func_358E70
label_392eb0:
    if (ctx->pc == 0x392EB0u) {
        ctx->pc = 0x392EB0u;
            // 0x392eb0: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x392EB4u;
        goto label_392eb4;
    }
    ctx->pc = 0x392EACu;
    SET_GPR_U32(ctx, 31, 0x392EB4u);
    ctx->pc = 0x392EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392EACu;
            // 0x392eb0: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EB4u; }
        if (ctx->pc != 0x392EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EB4u; }
        if (ctx->pc != 0x392EB4u) { return; }
    }
    ctx->pc = 0x392EB4u;
label_392eb4:
    // 0x392eb4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_392eb8:
    if (ctx->pc == 0x392EB8u) {
        ctx->pc = 0x392EBCu;
        goto label_392ebc;
    }
    ctx->pc = 0x392EB4u;
    {
        const bool branch_taken_0x392eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392eb4) {
            ctx->pc = 0x392F80u;
            goto label_392f80;
        }
    }
    ctx->pc = 0x392EBCu;
label_392ebc:
    // 0x392ebc: 0xc0d1c14  jal         func_347050
label_392ec0:
    if (ctx->pc == 0x392EC0u) {
        ctx->pc = 0x392EC0u;
            // 0x392ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392EC4u;
        goto label_392ec4;
    }
    ctx->pc = 0x392EBCu;
    SET_GPR_U32(ctx, 31, 0x392EC4u);
    ctx->pc = 0x392EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392EBCu;
            // 0x392ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EC4u; }
        if (ctx->pc != 0x392EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EC4u; }
        if (ctx->pc != 0x392EC4u) { return; }
    }
    ctx->pc = 0x392EC4u;
label_392ec4:
    // 0x392ec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x392ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392ec8:
    // 0x392ec8: 0xc04f278  jal         func_13C9E0
label_392ecc:
    if (ctx->pc == 0x392ECCu) {
        ctx->pc = 0x392ECCu;
            // 0x392ecc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x392ED0u;
        goto label_392ed0;
    }
    ctx->pc = 0x392EC8u;
    SET_GPR_U32(ctx, 31, 0x392ED0u);
    ctx->pc = 0x392ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392EC8u;
            // 0x392ecc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392ED0u; }
        if (ctx->pc != 0x392ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392ED0u; }
        if (ctx->pc != 0x392ED0u) { return; }
    }
    ctx->pc = 0x392ED0u;
label_392ed0:
    // 0x392ed0: 0xc0d1c10  jal         func_347040
label_392ed4:
    if (ctx->pc == 0x392ED4u) {
        ctx->pc = 0x392ED4u;
            // 0x392ed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392ED8u;
        goto label_392ed8;
    }
    ctx->pc = 0x392ED0u;
    SET_GPR_U32(ctx, 31, 0x392ED8u);
    ctx->pc = 0x392ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392ED0u;
            // 0x392ed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392ED8u; }
        if (ctx->pc != 0x392ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392ED8u; }
        if (ctx->pc != 0x392ED8u) { return; }
    }
    ctx->pc = 0x392ED8u;
label_392ed8:
    // 0x392ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x392ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392edc:
    // 0x392edc: 0xc04ce80  jal         func_133A00
label_392ee0:
    if (ctx->pc == 0x392EE0u) {
        ctx->pc = 0x392EE0u;
            // 0x392ee0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x392EE4u;
        goto label_392ee4;
    }
    ctx->pc = 0x392EDCu;
    SET_GPR_U32(ctx, 31, 0x392EE4u);
    ctx->pc = 0x392EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392EDCu;
            // 0x392ee0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EE4u; }
        if (ctx->pc != 0x392EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EE4u; }
        if (ctx->pc != 0x392EE4u) { return; }
    }
    ctx->pc = 0x392EE4u;
label_392ee4:
    // 0x392ee4: 0xc0d4108  jal         func_350420
label_392ee8:
    if (ctx->pc == 0x392EE8u) {
        ctx->pc = 0x392EECu;
        goto label_392eec;
    }
    ctx->pc = 0x392EE4u;
    SET_GPR_U32(ctx, 31, 0x392EECu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EECu; }
        if (ctx->pc != 0x392EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EECu; }
        if (ctx->pc != 0x392EECu) { return; }
    }
    ctx->pc = 0x392EECu;
label_392eec:
    // 0x392eec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x392eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392ef0:
    // 0x392ef0: 0xc0d4104  jal         func_350410
label_392ef4:
    if (ctx->pc == 0x392EF4u) {
        ctx->pc = 0x392EF4u;
            // 0x392ef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392EF8u;
        goto label_392ef8;
    }
    ctx->pc = 0x392EF0u;
    SET_GPR_U32(ctx, 31, 0x392EF8u);
    ctx->pc = 0x392EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392EF0u;
            // 0x392ef4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EF8u; }
        if (ctx->pc != 0x392EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392EF8u; }
        if (ctx->pc != 0x392EF8u) { return; }
    }
    ctx->pc = 0x392EF8u;
label_392ef8:
    // 0x392ef8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x392ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_392efc:
    // 0x392efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392f00:
    // 0x392f00: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x392f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_392f04:
    // 0x392f04: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x392f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_392f08:
    // 0x392f08: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x392f08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392f0c:
    // 0x392f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x392f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392f10:
    // 0x392f10: 0xc0d40ac  jal         func_3502B0
label_392f14:
    if (ctx->pc == 0x392F14u) {
        ctx->pc = 0x392F14u;
            // 0x392f14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x392F18u;
        goto label_392f18;
    }
    ctx->pc = 0x392F10u;
    SET_GPR_U32(ctx, 31, 0x392F18u);
    ctx->pc = 0x392F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392F10u;
            // 0x392f14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F18u; }
        if (ctx->pc != 0x392F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F18u; }
        if (ctx->pc != 0x392F18u) { return; }
    }
    ctx->pc = 0x392F18u;
label_392f18:
    // 0x392f18: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x392f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_392f1c:
    // 0x392f1c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_392f20:
    if (ctx->pc == 0x392F20u) {
        ctx->pc = 0x392F20u;
            // 0x392f20: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x392F24u;
        goto label_392f24;
    }
    ctx->pc = 0x392F1Cu;
    {
        const bool branch_taken_0x392f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x392F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392F1Cu;
            // 0x392f20: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f1c) {
            ctx->pc = 0x392F80u;
            goto label_392f80;
        }
    }
    ctx->pc = 0x392F24u;
label_392f24:
    // 0x392f24: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x392f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_392f28:
    // 0x392f28: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x392f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_392f2c:
    // 0x392f2c: 0xc0e4c00  jal         func_393000
label_392f30:
    if (ctx->pc == 0x392F30u) {
        ctx->pc = 0x392F30u;
            // 0x392f30: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->pc = 0x392F34u;
        goto label_392f34;
    }
    ctx->pc = 0x392F2Cu;
    SET_GPR_U32(ctx, 31, 0x392F34u);
    ctx->pc = 0x392F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392F2Cu;
            // 0x392f30: 0x27a6012c  addiu       $a2, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x393000u;
    if (runtime->hasFunction(0x393000u)) {
        auto targetFn = runtime->lookupFunction(0x393000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F34u; }
        if (ctx->pc != 0x392F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00393000_0x393000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F34u; }
        if (ctx->pc != 0x392F34u) { return; }
    }
    ctx->pc = 0x392F34u;
label_392f34:
    // 0x392f34: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x392f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_392f38:
    // 0x392f38: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x392f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_392f3c:
    // 0x392f3c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x392f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_392f40:
    // 0x392f40: 0xc04e4a4  jal         func_139290
label_392f44:
    if (ctx->pc == 0x392F44u) {
        ctx->pc = 0x392F44u;
            // 0x392f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392F48u;
        goto label_392f48;
    }
    ctx->pc = 0x392F40u;
    SET_GPR_U32(ctx, 31, 0x392F48u);
    ctx->pc = 0x392F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392F40u;
            // 0x392f44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F48u; }
        if (ctx->pc != 0x392F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F48u; }
        if (ctx->pc != 0x392F48u) { return; }
    }
    ctx->pc = 0x392F48u;
label_392f48:
    // 0x392f48: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x392f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_392f4c:
    // 0x392f4c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x392f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_392f50:
    // 0x392f50: 0xc04cd60  jal         func_133580
label_392f54:
    if (ctx->pc == 0x392F54u) {
        ctx->pc = 0x392F54u;
            // 0x392f54: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x392F58u;
        goto label_392f58;
    }
    ctx->pc = 0x392F50u;
    SET_GPR_U32(ctx, 31, 0x392F58u);
    ctx->pc = 0x392F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392F50u;
            // 0x392f54: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F58u; }
        if (ctx->pc != 0x392F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F58u; }
        if (ctx->pc != 0x392F58u) { return; }
    }
    ctx->pc = 0x392F58u;
label_392f58:
    // 0x392f58: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x392f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_392f5c:
    // 0x392f5c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x392f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_392f60:
    // 0x392f60: 0x320f809  jalr        $t9
label_392f64:
    if (ctx->pc == 0x392F64u) {
        ctx->pc = 0x392F64u;
            // 0x392f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392F68u;
        goto label_392f68;
    }
    ctx->pc = 0x392F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x392F68u);
        ctx->pc = 0x392F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392F60u;
            // 0x392f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x392F68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x392F68u; }
            if (ctx->pc != 0x392F68u) { return; }
        }
        }
    }
    ctx->pc = 0x392F68u;
label_392f68:
    // 0x392f68: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x392f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_392f6c:
    // 0x392f6c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x392f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_392f70:
    // 0x392f70: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x392f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_392f74:
    // 0x392f74: 0xc054fd4  jal         func_153F50
label_392f78:
    if (ctx->pc == 0x392F78u) {
        ctx->pc = 0x392F78u;
            // 0x392f78: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392F7Cu;
        goto label_392f7c;
    }
    ctx->pc = 0x392F74u;
    SET_GPR_U32(ctx, 31, 0x392F7Cu);
    ctx->pc = 0x392F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392F74u;
            // 0x392f78: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F7Cu; }
        if (ctx->pc != 0x392F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392F7Cu; }
        if (ctx->pc != 0x392F7Cu) { return; }
    }
    ctx->pc = 0x392F7Cu;
label_392f7c:
    // 0x392f7c: 0x0  nop
    ctx->pc = 0x392f7cu;
    // NOP
label_392f80:
    // 0x392f80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x392f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_392f84:
    // 0x392f84: 0x277182b  sltu        $v1, $s3, $s7
    ctx->pc = 0x392f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_392f88:
    // 0x392f88: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
label_392f8c:
    if (ctx->pc == 0x392F8Cu) {
        ctx->pc = 0x392F8Cu;
            // 0x392f8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x392F90u;
        goto label_392f90;
    }
    ctx->pc = 0x392F88u;
    {
        const bool branch_taken_0x392f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x392F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392F88u;
            // 0x392f8c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f88) {
            ctx->pc = 0x392E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_392e90;
        }
    }
    ctx->pc = 0x392F90u;
label_392f90:
    // 0x392f90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x392f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_392f94:
    // 0x392f94: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x392f94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_392f98:
    // 0x392f98: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_392f9c:
    if (ctx->pc == 0x392F9Cu) {
        ctx->pc = 0x392F9Cu;
            // 0x392f9c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x392FA0u;
        goto label_392fa0;
    }
    ctx->pc = 0x392F98u;
    {
        const bool branch_taken_0x392f98 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x392F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392F98u;
            // 0x392f9c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392f98) {
            ctx->pc = 0x392FC0u;
            goto label_392fc0;
        }
    }
    ctx->pc = 0x392FA0u;
label_392fa0:
    // 0x392fa0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x392fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_392fa4:
    // 0x392fa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x392fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_392fa8:
    // 0x392fa8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x392fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_392fac:
    // 0x392fac: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x392facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_392fb0:
    // 0x392fb0: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x392fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_392fb4:
    // 0x392fb4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x392fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_392fb8:
    // 0x392fb8: 0xc055ea8  jal         func_157AA0
label_392fbc:
    if (ctx->pc == 0x392FBCu) {
        ctx->pc = 0x392FBCu;
            // 0x392fbc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x392FC0u;
        goto label_392fc0;
    }
    ctx->pc = 0x392FB8u;
    SET_GPR_U32(ctx, 31, 0x392FC0u);
    ctx->pc = 0x392FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x392FB8u;
            // 0x392fbc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392FC0u; }
        if (ctx->pc != 0x392FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x392FC0u; }
        if (ctx->pc != 0x392FC0u) { return; }
    }
    ctx->pc = 0x392FC0u;
label_392fc0:
    // 0x392fc0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x392fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_392fc4:
    // 0x392fc4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x392fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_392fc8:
    // 0x392fc8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x392fc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_392fcc:
    // 0x392fcc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x392fccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_392fd0:
    // 0x392fd0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x392fd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_392fd4:
    // 0x392fd4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x392fd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_392fd8:
    // 0x392fd8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x392fd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_392fdc:
    // 0x392fdc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x392fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_392fe0:
    // 0x392fe0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x392fe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_392fe4:
    // 0x392fe4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x392fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_392fe8:
    // 0x392fe8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x392fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_392fec:
    // 0x392fec: 0x3e00008  jr          $ra
label_392ff0:
    if (ctx->pc == 0x392FF0u) {
        ctx->pc = 0x392FF0u;
            // 0x392ff0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x392FF4u;
        goto label_392ff4;
    }
    ctx->pc = 0x392FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392FECu;
            // 0x392ff0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x392FF4u;
label_392ff4:
    // 0x392ff4: 0x0  nop
    ctx->pc = 0x392ff4u;
    // NOP
label_392ff8:
    // 0x392ff8: 0x0  nop
    ctx->pc = 0x392ff8u;
    // NOP
label_392ffc:
    // 0x392ffc: 0x0  nop
    ctx->pc = 0x392ffcu;
    // NOP
}
