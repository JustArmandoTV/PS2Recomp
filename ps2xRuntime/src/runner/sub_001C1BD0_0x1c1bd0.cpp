#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1BD0
// Address: 0x1c1bd0 - 0x1c1ff8
void sub_001C1BD0_0x1c1bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1BD0_0x1c1bd0");
#endif

    switch (ctx->pc) {
        case 0x1c1bd0u: goto label_1c1bd0;
        case 0x1c1bd4u: goto label_1c1bd4;
        case 0x1c1bd8u: goto label_1c1bd8;
        case 0x1c1bdcu: goto label_1c1bdc;
        case 0x1c1be0u: goto label_1c1be0;
        case 0x1c1be4u: goto label_1c1be4;
        case 0x1c1be8u: goto label_1c1be8;
        case 0x1c1becu: goto label_1c1bec;
        case 0x1c1bf0u: goto label_1c1bf0;
        case 0x1c1bf4u: goto label_1c1bf4;
        case 0x1c1bf8u: goto label_1c1bf8;
        case 0x1c1bfcu: goto label_1c1bfc;
        case 0x1c1c00u: goto label_1c1c00;
        case 0x1c1c04u: goto label_1c1c04;
        case 0x1c1c08u: goto label_1c1c08;
        case 0x1c1c0cu: goto label_1c1c0c;
        case 0x1c1c10u: goto label_1c1c10;
        case 0x1c1c14u: goto label_1c1c14;
        case 0x1c1c18u: goto label_1c1c18;
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c20u: goto label_1c1c20;
        case 0x1c1c24u: goto label_1c1c24;
        case 0x1c1c28u: goto label_1c1c28;
        case 0x1c1c2cu: goto label_1c1c2c;
        case 0x1c1c30u: goto label_1c1c30;
        case 0x1c1c34u: goto label_1c1c34;
        case 0x1c1c38u: goto label_1c1c38;
        case 0x1c1c3cu: goto label_1c1c3c;
        case 0x1c1c40u: goto label_1c1c40;
        case 0x1c1c44u: goto label_1c1c44;
        case 0x1c1c48u: goto label_1c1c48;
        case 0x1c1c4cu: goto label_1c1c4c;
        case 0x1c1c50u: goto label_1c1c50;
        case 0x1c1c54u: goto label_1c1c54;
        case 0x1c1c58u: goto label_1c1c58;
        case 0x1c1c5cu: goto label_1c1c5c;
        case 0x1c1c60u: goto label_1c1c60;
        case 0x1c1c64u: goto label_1c1c64;
        case 0x1c1c68u: goto label_1c1c68;
        case 0x1c1c6cu: goto label_1c1c6c;
        case 0x1c1c70u: goto label_1c1c70;
        case 0x1c1c74u: goto label_1c1c74;
        case 0x1c1c78u: goto label_1c1c78;
        case 0x1c1c7cu: goto label_1c1c7c;
        case 0x1c1c80u: goto label_1c1c80;
        case 0x1c1c84u: goto label_1c1c84;
        case 0x1c1c88u: goto label_1c1c88;
        case 0x1c1c8cu: goto label_1c1c8c;
        case 0x1c1c90u: goto label_1c1c90;
        case 0x1c1c94u: goto label_1c1c94;
        case 0x1c1c98u: goto label_1c1c98;
        case 0x1c1c9cu: goto label_1c1c9c;
        case 0x1c1ca0u: goto label_1c1ca0;
        case 0x1c1ca4u: goto label_1c1ca4;
        case 0x1c1ca8u: goto label_1c1ca8;
        case 0x1c1cacu: goto label_1c1cac;
        case 0x1c1cb0u: goto label_1c1cb0;
        case 0x1c1cb4u: goto label_1c1cb4;
        case 0x1c1cb8u: goto label_1c1cb8;
        case 0x1c1cbcu: goto label_1c1cbc;
        case 0x1c1cc0u: goto label_1c1cc0;
        case 0x1c1cc4u: goto label_1c1cc4;
        case 0x1c1cc8u: goto label_1c1cc8;
        case 0x1c1cccu: goto label_1c1ccc;
        case 0x1c1cd0u: goto label_1c1cd0;
        case 0x1c1cd4u: goto label_1c1cd4;
        case 0x1c1cd8u: goto label_1c1cd8;
        case 0x1c1cdcu: goto label_1c1cdc;
        case 0x1c1ce0u: goto label_1c1ce0;
        case 0x1c1ce4u: goto label_1c1ce4;
        case 0x1c1ce8u: goto label_1c1ce8;
        case 0x1c1cecu: goto label_1c1cec;
        case 0x1c1cf0u: goto label_1c1cf0;
        case 0x1c1cf4u: goto label_1c1cf4;
        case 0x1c1cf8u: goto label_1c1cf8;
        case 0x1c1cfcu: goto label_1c1cfc;
        case 0x1c1d00u: goto label_1c1d00;
        case 0x1c1d04u: goto label_1c1d04;
        case 0x1c1d08u: goto label_1c1d08;
        case 0x1c1d0cu: goto label_1c1d0c;
        case 0x1c1d10u: goto label_1c1d10;
        case 0x1c1d14u: goto label_1c1d14;
        case 0x1c1d18u: goto label_1c1d18;
        case 0x1c1d1cu: goto label_1c1d1c;
        case 0x1c1d20u: goto label_1c1d20;
        case 0x1c1d24u: goto label_1c1d24;
        case 0x1c1d28u: goto label_1c1d28;
        case 0x1c1d2cu: goto label_1c1d2c;
        case 0x1c1d30u: goto label_1c1d30;
        case 0x1c1d34u: goto label_1c1d34;
        case 0x1c1d38u: goto label_1c1d38;
        case 0x1c1d3cu: goto label_1c1d3c;
        case 0x1c1d40u: goto label_1c1d40;
        case 0x1c1d44u: goto label_1c1d44;
        case 0x1c1d48u: goto label_1c1d48;
        case 0x1c1d4cu: goto label_1c1d4c;
        case 0x1c1d50u: goto label_1c1d50;
        case 0x1c1d54u: goto label_1c1d54;
        case 0x1c1d58u: goto label_1c1d58;
        case 0x1c1d5cu: goto label_1c1d5c;
        case 0x1c1d60u: goto label_1c1d60;
        case 0x1c1d64u: goto label_1c1d64;
        case 0x1c1d68u: goto label_1c1d68;
        case 0x1c1d6cu: goto label_1c1d6c;
        case 0x1c1d70u: goto label_1c1d70;
        case 0x1c1d74u: goto label_1c1d74;
        case 0x1c1d78u: goto label_1c1d78;
        case 0x1c1d7cu: goto label_1c1d7c;
        case 0x1c1d80u: goto label_1c1d80;
        case 0x1c1d84u: goto label_1c1d84;
        case 0x1c1d88u: goto label_1c1d88;
        case 0x1c1d8cu: goto label_1c1d8c;
        case 0x1c1d90u: goto label_1c1d90;
        case 0x1c1d94u: goto label_1c1d94;
        case 0x1c1d98u: goto label_1c1d98;
        case 0x1c1d9cu: goto label_1c1d9c;
        case 0x1c1da0u: goto label_1c1da0;
        case 0x1c1da4u: goto label_1c1da4;
        case 0x1c1da8u: goto label_1c1da8;
        case 0x1c1dacu: goto label_1c1dac;
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1db4u: goto label_1c1db4;
        case 0x1c1db8u: goto label_1c1db8;
        case 0x1c1dbcu: goto label_1c1dbc;
        case 0x1c1dc0u: goto label_1c1dc0;
        case 0x1c1dc4u: goto label_1c1dc4;
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dccu: goto label_1c1dcc;
        case 0x1c1dd0u: goto label_1c1dd0;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1dd8u: goto label_1c1dd8;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de0u: goto label_1c1de0;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1decu: goto label_1c1dec;
        case 0x1c1df0u: goto label_1c1df0;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1df8u: goto label_1c1df8;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e00u: goto label_1c1e00;
        case 0x1c1e04u: goto label_1c1e04;
        case 0x1c1e08u: goto label_1c1e08;
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e18u: goto label_1c1e18;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e20u: goto label_1c1e20;
        case 0x1c1e24u: goto label_1c1e24;
        case 0x1c1e28u: goto label_1c1e28;
        case 0x1c1e2cu: goto label_1c1e2c;
        case 0x1c1e30u: goto label_1c1e30;
        case 0x1c1e34u: goto label_1c1e34;
        case 0x1c1e38u: goto label_1c1e38;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e40u: goto label_1c1e40;
        case 0x1c1e44u: goto label_1c1e44;
        case 0x1c1e48u: goto label_1c1e48;
        case 0x1c1e4cu: goto label_1c1e4c;
        case 0x1c1e50u: goto label_1c1e50;
        case 0x1c1e54u: goto label_1c1e54;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1e5cu: goto label_1c1e5c;
        case 0x1c1e60u: goto label_1c1e60;
        case 0x1c1e64u: goto label_1c1e64;
        case 0x1c1e68u: goto label_1c1e68;
        case 0x1c1e6cu: goto label_1c1e6c;
        case 0x1c1e70u: goto label_1c1e70;
        case 0x1c1e74u: goto label_1c1e74;
        case 0x1c1e78u: goto label_1c1e78;
        case 0x1c1e7cu: goto label_1c1e7c;
        case 0x1c1e80u: goto label_1c1e80;
        case 0x1c1e84u: goto label_1c1e84;
        case 0x1c1e88u: goto label_1c1e88;
        case 0x1c1e8cu: goto label_1c1e8c;
        case 0x1c1e90u: goto label_1c1e90;
        case 0x1c1e94u: goto label_1c1e94;
        case 0x1c1e98u: goto label_1c1e98;
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1ea0u: goto label_1c1ea0;
        case 0x1c1ea4u: goto label_1c1ea4;
        case 0x1c1ea8u: goto label_1c1ea8;
        case 0x1c1eacu: goto label_1c1eac;
        case 0x1c1eb0u: goto label_1c1eb0;
        case 0x1c1eb4u: goto label_1c1eb4;
        case 0x1c1eb8u: goto label_1c1eb8;
        case 0x1c1ebcu: goto label_1c1ebc;
        case 0x1c1ec0u: goto label_1c1ec0;
        case 0x1c1ec4u: goto label_1c1ec4;
        case 0x1c1ec8u: goto label_1c1ec8;
        case 0x1c1eccu: goto label_1c1ecc;
        case 0x1c1ed0u: goto label_1c1ed0;
        case 0x1c1ed4u: goto label_1c1ed4;
        case 0x1c1ed8u: goto label_1c1ed8;
        case 0x1c1edcu: goto label_1c1edc;
        case 0x1c1ee0u: goto label_1c1ee0;
        case 0x1c1ee4u: goto label_1c1ee4;
        case 0x1c1ee8u: goto label_1c1ee8;
        case 0x1c1eecu: goto label_1c1eec;
        case 0x1c1ef0u: goto label_1c1ef0;
        case 0x1c1ef4u: goto label_1c1ef4;
        case 0x1c1ef8u: goto label_1c1ef8;
        case 0x1c1efcu: goto label_1c1efc;
        case 0x1c1f00u: goto label_1c1f00;
        case 0x1c1f04u: goto label_1c1f04;
        case 0x1c1f08u: goto label_1c1f08;
        case 0x1c1f0cu: goto label_1c1f0c;
        case 0x1c1f10u: goto label_1c1f10;
        case 0x1c1f14u: goto label_1c1f14;
        case 0x1c1f18u: goto label_1c1f18;
        case 0x1c1f1cu: goto label_1c1f1c;
        case 0x1c1f20u: goto label_1c1f20;
        case 0x1c1f24u: goto label_1c1f24;
        case 0x1c1f28u: goto label_1c1f28;
        case 0x1c1f2cu: goto label_1c1f2c;
        case 0x1c1f30u: goto label_1c1f30;
        case 0x1c1f34u: goto label_1c1f34;
        case 0x1c1f38u: goto label_1c1f38;
        case 0x1c1f3cu: goto label_1c1f3c;
        case 0x1c1f40u: goto label_1c1f40;
        case 0x1c1f44u: goto label_1c1f44;
        case 0x1c1f48u: goto label_1c1f48;
        case 0x1c1f4cu: goto label_1c1f4c;
        case 0x1c1f50u: goto label_1c1f50;
        case 0x1c1f54u: goto label_1c1f54;
        case 0x1c1f58u: goto label_1c1f58;
        case 0x1c1f5cu: goto label_1c1f5c;
        case 0x1c1f60u: goto label_1c1f60;
        case 0x1c1f64u: goto label_1c1f64;
        case 0x1c1f68u: goto label_1c1f68;
        case 0x1c1f6cu: goto label_1c1f6c;
        case 0x1c1f70u: goto label_1c1f70;
        case 0x1c1f74u: goto label_1c1f74;
        case 0x1c1f78u: goto label_1c1f78;
        case 0x1c1f7cu: goto label_1c1f7c;
        case 0x1c1f80u: goto label_1c1f80;
        case 0x1c1f84u: goto label_1c1f84;
        case 0x1c1f88u: goto label_1c1f88;
        case 0x1c1f8cu: goto label_1c1f8c;
        case 0x1c1f90u: goto label_1c1f90;
        case 0x1c1f94u: goto label_1c1f94;
        case 0x1c1f98u: goto label_1c1f98;
        case 0x1c1f9cu: goto label_1c1f9c;
        case 0x1c1fa0u: goto label_1c1fa0;
        case 0x1c1fa4u: goto label_1c1fa4;
        case 0x1c1fa8u: goto label_1c1fa8;
        case 0x1c1facu: goto label_1c1fac;
        case 0x1c1fb0u: goto label_1c1fb0;
        case 0x1c1fb4u: goto label_1c1fb4;
        case 0x1c1fb8u: goto label_1c1fb8;
        case 0x1c1fbcu: goto label_1c1fbc;
        case 0x1c1fc0u: goto label_1c1fc0;
        case 0x1c1fc4u: goto label_1c1fc4;
        case 0x1c1fc8u: goto label_1c1fc8;
        case 0x1c1fccu: goto label_1c1fcc;
        case 0x1c1fd0u: goto label_1c1fd0;
        case 0x1c1fd4u: goto label_1c1fd4;
        case 0x1c1fd8u: goto label_1c1fd8;
        case 0x1c1fdcu: goto label_1c1fdc;
        case 0x1c1fe0u: goto label_1c1fe0;
        case 0x1c1fe4u: goto label_1c1fe4;
        case 0x1c1fe8u: goto label_1c1fe8;
        case 0x1c1fecu: goto label_1c1fec;
        case 0x1c1ff0u: goto label_1c1ff0;
        case 0x1c1ff4u: goto label_1c1ff4;
        default: break;
    }

    ctx->pc = 0x1c1bd0u;

label_1c1bd0:
    // 0x1c1bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1bd4:
    // 0x1c1bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1bd8:
    // 0x1c1bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1bdc:
    // 0x1c1bdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1be0:
    // 0x1c1be0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1be4:
    // 0x1c1be4: 0xc071236  jal         func_1C48D8
label_1c1be8:
    if (ctx->pc == 0x1C1BE8u) {
        ctx->pc = 0x1C1BE8u;
            // 0x1c1be8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BECu;
        goto label_1c1bec;
    }
    ctx->pc = 0x1C1BE4u;
    SET_GPR_U32(ctx, 31, 0x1C1BECu);
    ctx->pc = 0x1C1BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1BE4u;
            // 0x1c1be8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BECu; }
        if (ctx->pc != 0x1C1BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1BECu; }
        if (ctx->pc != 0x1C1BECu) { return; }
    }
    ctx->pc = 0x1C1BECu;
label_1c1bec:
    // 0x1c1bec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1bf0:
    // 0x1c1bf0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1bf4:
    // 0x1c1bf4: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1bf8:
    // 0x1c1bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1bfc:
    // 0x1c1bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c00:
    // 0x1c1c00: 0x24c6ba30  addiu       $a2, $a2, -0x45D0
    ctx->pc = 0x1c1c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949424));
label_1c1c04:
    // 0x1c1c04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c08:
    // 0x1c1c08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c1c0c:
    if (ctx->pc == 0x1C1C0Cu) {
        ctx->pc = 0x1C1C0Cu;
            // 0x1c1c0c: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1C10u;
        goto label_1c1c10;
    }
    ctx->pc = 0x1C1C08u;
    {
        const bool branch_taken_0x1c1c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C08u;
            // 0x1c1c0c: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c08) {
            ctx->pc = 0x1C1C30u;
            goto label_1c1c30;
        }
    }
    ctx->pc = 0x1C1C10u;
label_1c1c10:
    // 0x1c1c10: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1c1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1c1c14:
    // 0x1c1c14: 0x40f809  jalr        $v0
label_1c1c18:
    if (ctx->pc == 0x1C1C18u) {
        ctx->pc = 0x1C1C1Cu;
        goto label_1c1c1c;
    }
    ctx->pc = 0x1C1C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1C1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C1Cu; }
            if (ctx->pc != 0x1C1C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1C1Cu;
label_1c1c1c:
    // 0x1c1c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1c20:
    // 0x1c1c20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1c20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1c24:
    // 0x1c1c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1c28:
    // 0x1c1c28: 0x3e00008  jr          $ra
label_1c1c2c:
    if (ctx->pc == 0x1C1C2Cu) {
        ctx->pc = 0x1C1C2Cu;
            // 0x1c1c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1C30u;
        goto label_1c1c30;
    }
    ctx->pc = 0x1C1C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C28u;
            // 0x1c1c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1C30u;
label_1c1c30:
    // 0x1c1c30: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1c34:
    // 0x1c1c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1c38:
    // 0x1c1c38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1c3c:
    // 0x1c1c3c: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1c40:
    // 0x1c1c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1c44:
    // 0x1c1c44: 0x240501a8  addiu       $a1, $zero, 0x1A8
    ctx->pc = 0x1c1c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_1c1c48:
    // 0x1c1c48: 0x80711fe  j           func_1C47F8
label_1c1c4c:
    if (ctx->pc == 0x1C1C4Cu) {
        ctx->pc = 0x1C1C4Cu;
            // 0x1c1c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1C50u;
        goto label_1c1c50;
    }
    ctx->pc = 0x1C1C48u;
    ctx->pc = 0x1C1C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C48u;
            // 0x1c1c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1C50u;
label_1c1c50:
    // 0x1c1c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1c54:
    // 0x1c1c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1c58:
    // 0x1c1c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c5c:
    // 0x1c1c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1c60:
    // 0x1c1c60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c64:
    // 0x1c1c64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c1c68:
    // 0x1c1c68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c1c6c:
    // 0x1c1c6c: 0xc071236  jal         func_1C48D8
label_1c1c70:
    if (ctx->pc == 0x1C1C70u) {
        ctx->pc = 0x1C1C70u;
            // 0x1c1c70: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C74u;
        goto label_1c1c74;
    }
    ctx->pc = 0x1C1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1C74u);
    ctx->pc = 0x1C1C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C6Cu;
            // 0x1c1c70: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C74u; }
        if (ctx->pc != 0x1C1C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1C74u; }
        if (ctx->pc != 0x1C1C74u) { return; }
    }
    ctx->pc = 0x1C1C74u;
label_1c1c74:
    // 0x1c1c74: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1c78:
    // 0x1c1c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c7c:
    // 0x1c1c7c: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1c80:
    // 0x1c1c80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c84:
    // 0x1c1c84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c1c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c88:
    // 0x1c1c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c8c:
    // 0x1c1c8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c1c90:
    if (ctx->pc == 0x1C1C90u) {
        ctx->pc = 0x1C1C90u;
            // 0x1c1c90: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1C94u;
        goto label_1c1c94;
    }
    ctx->pc = 0x1C1C8Cu;
    {
        const bool branch_taken_0x1c1c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1C8Cu;
            // 0x1c1c90: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c8c) {
            ctx->pc = 0x1C1CB8u;
            goto label_1c1cb8;
        }
    }
    ctx->pc = 0x1C1C94u;
label_1c1c94:
    // 0x1c1c94: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1c1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1c1c98:
    // 0x1c1c98: 0x40f809  jalr        $v0
label_1c1c9c:
    if (ctx->pc == 0x1C1C9Cu) {
        ctx->pc = 0x1C1CA0u;
        goto label_1c1ca0;
    }
    ctx->pc = 0x1C1C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1CA0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1CA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1CA0u; }
            if (ctx->pc != 0x1C1CA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1CA0u;
label_1c1ca0:
    // 0x1c1ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1ca4:
    // 0x1c1ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1ca8:
    // 0x1c1ca8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1ca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1cac:
    // 0x1c1cac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1cb0:
    // 0x1c1cb0: 0x3e00008  jr          $ra
label_1c1cb4:
    if (ctx->pc == 0x1C1CB4u) {
        ctx->pc = 0x1C1CB4u;
            // 0x1c1cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1CB8u;
        goto label_1c1cb8;
    }
    ctx->pc = 0x1C1CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CB0u;
            // 0x1c1cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1CB8u;
label_1c1cb8:
    // 0x1c1cb8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1cbc:
    // 0x1c1cbc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1cc0:
    // 0x1c1cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1cc4:
    // 0x1c1cc4: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1cc8:
    // 0x1c1cc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1ccc:
    // 0x1c1ccc: 0x24c6ba40  addiu       $a2, $a2, -0x45C0
    ctx->pc = 0x1c1cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949440));
label_1c1cd0:
    // 0x1c1cd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1cd4:
    // 0x1c1cd4: 0x240501b8  addiu       $a1, $zero, 0x1B8
    ctx->pc = 0x1c1cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
label_1c1cd8:
    // 0x1c1cd8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1cdc:
    // 0x1c1cdc: 0x80711fe  j           func_1C47F8
label_1c1ce0:
    if (ctx->pc == 0x1C1CE0u) {
        ctx->pc = 0x1C1CE0u;
            // 0x1c1ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1CE4u;
        goto label_1c1ce4;
    }
    ctx->pc = 0x1C1CDCu;
    ctx->pc = 0x1C1CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1CDCu;
            // 0x1c1ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1CE4u;
label_1c1ce4:
    // 0x1c1ce4: 0x0  nop
    ctx->pc = 0x1c1ce4u;
    // NOP
label_1c1ce8:
    // 0x1c1ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1cec:
    // 0x1c1cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1cf0:
    // 0x1c1cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cf4:
    // 0x1c1cf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1cf8:
    // 0x1c1cf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cfc:
    // 0x1c1cfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c1d00:
    // 0x1c1d00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c1d04:
    // 0x1c1d04: 0xc071236  jal         func_1C48D8
label_1c1d08:
    if (ctx->pc == 0x1C1D08u) {
        ctx->pc = 0x1C1D08u;
            // 0x1c1d08: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D0Cu;
        goto label_1c1d0c;
    }
    ctx->pc = 0x1C1D04u;
    SET_GPR_U32(ctx, 31, 0x1C1D0Cu);
    ctx->pc = 0x1C1D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D04u;
            // 0x1c1d08: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D0Cu; }
        if (ctx->pc != 0x1C1D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D0Cu; }
        if (ctx->pc != 0x1C1D0Cu) { return; }
    }
    ctx->pc = 0x1C1D0Cu;
label_1c1d0c:
    // 0x1c1d0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1d10:
    // 0x1c1d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d14:
    // 0x1c1d14: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1d18:
    // 0x1c1d18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d1c:
    // 0x1c1d1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c1d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d20:
    // 0x1c1d20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d24:
    // 0x1c1d24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c1d28:
    if (ctx->pc == 0x1C1D28u) {
        ctx->pc = 0x1C1D28u;
            // 0x1c1d28: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1D2Cu;
        goto label_1c1d2c;
    }
    ctx->pc = 0x1C1D24u;
    {
        const bool branch_taken_0x1c1d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D24u;
            // 0x1c1d28: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d24) {
            ctx->pc = 0x1C1D50u;
            goto label_1c1d50;
        }
    }
    ctx->pc = 0x1C1D2Cu;
label_1c1d2c:
    // 0x1c1d2c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1c1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1c1d30:
    // 0x1c1d30: 0x40f809  jalr        $v0
label_1c1d34:
    if (ctx->pc == 0x1C1D34u) {
        ctx->pc = 0x1C1D38u;
        goto label_1c1d38;
    }
    ctx->pc = 0x1C1D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1D38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D38u; }
            if (ctx->pc != 0x1C1D38u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1D38u;
label_1c1d38:
    // 0x1c1d38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1d3c:
    // 0x1c1d3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1d40:
    // 0x1c1d40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1d44:
    // 0x1c1d44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1d48:
    // 0x1c1d48: 0x3e00008  jr          $ra
label_1c1d4c:
    if (ctx->pc == 0x1C1D4Cu) {
        ctx->pc = 0x1C1D4Cu;
            // 0x1c1d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1D50u;
        goto label_1c1d50;
    }
    ctx->pc = 0x1C1D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D48u;
            // 0x1c1d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1D50u;
label_1c1d50:
    // 0x1c1d50: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1d54:
    // 0x1c1d54: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1d58:
    // 0x1c1d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1d5c:
    // 0x1c1d5c: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1d60:
    // 0x1c1d60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1d64:
    // 0x1c1d64: 0x24c6ba50  addiu       $a2, $a2, -0x45B0
    ctx->pc = 0x1c1d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949456));
label_1c1d68:
    // 0x1c1d68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1d6c:
    // 0x1c1d6c: 0x240501c7  addiu       $a1, $zero, 0x1C7
    ctx->pc = 0x1c1d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 455));
label_1c1d70:
    // 0x1c1d70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1d74:
    // 0x1c1d74: 0x80711fe  j           func_1C47F8
label_1c1d78:
    if (ctx->pc == 0x1C1D78u) {
        ctx->pc = 0x1C1D78u;
            // 0x1c1d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1D7Cu;
        goto label_1c1d7c;
    }
    ctx->pc = 0x1C1D74u;
    ctx->pc = 0x1C1D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D74u;
            // 0x1c1d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1D7Cu;
label_1c1d7c:
    // 0x1c1d7c: 0x0  nop
    ctx->pc = 0x1c1d7cu;
    // NOP
label_1c1d80:
    // 0x1c1d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1d84:
    // 0x1c1d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1d88:
    // 0x1c1d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c1d8c:
    // 0x1c1d8c: 0xc071236  jal         func_1C48D8
label_1c1d90:
    if (ctx->pc == 0x1C1D90u) {
        ctx->pc = 0x1C1D90u;
            // 0x1c1d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D94u;
        goto label_1c1d94;
    }
    ctx->pc = 0x1C1D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D94u);
    ctx->pc = 0x1C1D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1D8Cu;
            // 0x1c1d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D94u; }
        if (ctx->pc != 0x1C1D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1D94u; }
        if (ctx->pc != 0x1C1D94u) { return; }
    }
    ctx->pc = 0x1C1D94u;
label_1c1d94:
    // 0x1c1d94: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1d98:
    // 0x1c1d98: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1d98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1d9c:
    // 0x1c1d9c: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1da0:
    // 0x1c1da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1da4:
    // 0x1c1da4: 0x240501d6  addiu       $a1, $zero, 0x1D6
    ctx->pc = 0x1c1da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
label_1c1da8:
    // 0x1c1da8: 0x24c6ba60  addiu       $a2, $a2, -0x45A0
    ctx->pc = 0x1c1da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949472));
label_1c1dac:
    // 0x1c1dac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1db0:
    // 0x1c1db0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c1db4:
    if (ctx->pc == 0x1C1DB4u) {
        ctx->pc = 0x1C1DB4u;
            // 0x1c1db4: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1DB8u;
        goto label_1c1db8;
    }
    ctx->pc = 0x1C1DB0u;
    {
        const bool branch_taken_0x1c1db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DB0u;
            // 0x1c1db4: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1db0) {
            ctx->pc = 0x1C1DD0u;
            goto label_1c1dd0;
        }
    }
    ctx->pc = 0x1C1DB8u;
label_1c1db8:
    // 0x1c1db8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1c1dbc:
    // 0x1c1dbc: 0x40f809  jalr        $v0
label_1c1dc0:
    if (ctx->pc == 0x1C1DC0u) {
        ctx->pc = 0x1C1DC4u;
        goto label_1c1dc4;
    }
    ctx->pc = 0x1C1DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1DC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1DC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DC4u; }
            if (ctx->pc != 0x1C1DC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1DC4u;
label_1c1dc4:
    // 0x1c1dc4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c1dc8:
    if (ctx->pc == 0x1C1DC8u) {
        ctx->pc = 0x1C1DC8u;
            // 0x1c1dc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C1DCCu;
        goto label_1c1dcc;
    }
    ctx->pc = 0x1C1DC4u;
    {
        const bool branch_taken_0x1c1dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DC4u;
            // 0x1c1dc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1dc4) {
            ctx->pc = 0x1C1DE4u;
            goto label_1c1de4;
        }
    }
    ctx->pc = 0x1C1DCCu;
label_1c1dcc:
    // 0x1c1dcc: 0x0  nop
    ctx->pc = 0x1c1dccu;
    // NOP
label_1c1dd0:
    // 0x1c1dd0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1dd4:
    // 0x1c1dd4: 0xc0711fe  jal         func_1C47F8
label_1c1dd8:
    if (ctx->pc == 0x1C1DD8u) {
        ctx->pc = 0x1C1DD8u;
            // 0x1c1dd8: 0x2484b948  addiu       $a0, $a0, -0x46B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
        ctx->pc = 0x1C1DDCu;
        goto label_1c1ddc;
    }
    ctx->pc = 0x1C1DD4u;
    SET_GPR_U32(ctx, 31, 0x1C1DDCu);
    ctx->pc = 0x1C1DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DD4u;
            // 0x1c1dd8: 0x2484b948  addiu       $a0, $a0, -0x46B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DDCu; }
        if (ctx->pc != 0x1C1DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1DDCu; }
        if (ctx->pc != 0x1C1DDCu) { return; }
    }
    ctx->pc = 0x1C1DDCu;
label_1c1ddc:
    // 0x1c1ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1de0:
    // 0x1c1de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1de4:
    // 0x1c1de4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1de8:
    // 0x1c1de8: 0x3e00008  jr          $ra
label_1c1dec:
    if (ctx->pc == 0x1C1DECu) {
        ctx->pc = 0x1C1DECu;
            // 0x1c1dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1DF0u;
        goto label_1c1df0;
    }
    ctx->pc = 0x1C1DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DE8u;
            // 0x1c1dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1DF0u;
label_1c1df0:
    // 0x1c1df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1df4:
    // 0x1c1df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1df8:
    // 0x1c1df8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c1dfc:
    // 0x1c1dfc: 0xc071236  jal         func_1C48D8
label_1c1e00:
    if (ctx->pc == 0x1C1E00u) {
        ctx->pc = 0x1C1E00u;
            // 0x1c1e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E04u;
        goto label_1c1e04;
    }
    ctx->pc = 0x1C1DFCu;
    SET_GPR_U32(ctx, 31, 0x1C1E04u);
    ctx->pc = 0x1C1E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1DFCu;
            // 0x1c1e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E04u; }
        if (ctx->pc != 0x1C1E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E04u; }
        if (ctx->pc != 0x1C1E04u) { return; }
    }
    ctx->pc = 0x1C1E04u;
label_1c1e04:
    // 0x1c1e04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1e08:
    // 0x1c1e08: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1e08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1e0c:
    // 0x1c1e0c: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1e10:
    // 0x1c1e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e14:
    // 0x1c1e14: 0x24c6ba78  addiu       $a2, $a2, -0x4588
    ctx->pc = 0x1c1e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949496));
label_1c1e18:
    // 0x1c1e18: 0x240501e6  addiu       $a1, $zero, 0x1E6
    ctx->pc = 0x1c1e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 486));
label_1c1e1c:
    // 0x1c1e1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e20:
    // 0x1c1e20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c1e24:
    if (ctx->pc == 0x1C1E24u) {
        ctx->pc = 0x1C1E24u;
            // 0x1c1e24: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1E28u;
        goto label_1c1e28;
    }
    ctx->pc = 0x1C1E20u;
    {
        const bool branch_taken_0x1c1e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E20u;
            // 0x1c1e24: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e20) {
            ctx->pc = 0x1C1E48u;
            goto label_1c1e48;
        }
    }
    ctx->pc = 0x1C1E28u;
label_1c1e28:
    // 0x1c1e28: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1c1e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1c1e2c:
    // 0x1c1e2c: 0x40f809  jalr        $v0
label_1c1e30:
    if (ctx->pc == 0x1C1E30u) {
        ctx->pc = 0x1C1E34u;
        goto label_1c1e34;
    }
    ctx->pc = 0x1C1E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1E34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1E34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E34u; }
            if (ctx->pc != 0x1C1E34u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1E34u;
label_1c1e34:
    // 0x1c1e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1e38:
    // 0x1c1e38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1e3c:
    // 0x1c1e3c: 0x3e00008  jr          $ra
label_1c1e40:
    if (ctx->pc == 0x1C1E40u) {
        ctx->pc = 0x1C1E40u;
            // 0x1c1e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1E44u;
        goto label_1c1e44;
    }
    ctx->pc = 0x1C1E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E3Cu;
            // 0x1c1e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1E44u;
label_1c1e44:
    // 0x1c1e44: 0x0  nop
    ctx->pc = 0x1c1e44u;
    // NOP
label_1c1e48:
    // 0x1c1e48: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1e4c:
    // 0x1c1e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1e50:
    // 0x1c1e50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1e54:
    // 0x1c1e54: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1e58:
    // 0x1c1e58: 0x80711fe  j           func_1C47F8
label_1c1e5c:
    if (ctx->pc == 0x1C1E5Cu) {
        ctx->pc = 0x1C1E5Cu;
            // 0x1c1e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1E60u;
        goto label_1c1e60;
    }
    ctx->pc = 0x1C1E58u;
    ctx->pc = 0x1C1E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E58u;
            // 0x1c1e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1E60u;
label_1c1e60:
    // 0x1c1e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1e64:
    // 0x1c1e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1e68:
    // 0x1c1e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e6c:
    // 0x1c1e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1e70:
    // 0x1c1e70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1e74:
    // 0x1c1e74: 0xc071236  jal         func_1C48D8
label_1c1e78:
    if (ctx->pc == 0x1C1E78u) {
        ctx->pc = 0x1C1E78u;
            // 0x1c1e78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E7Cu;
        goto label_1c1e7c;
    }
    ctx->pc = 0x1C1E74u;
    SET_GPR_U32(ctx, 31, 0x1C1E7Cu);
    ctx->pc = 0x1C1E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E74u;
            // 0x1c1e78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E7Cu; }
        if (ctx->pc != 0x1C1E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1E7Cu; }
        if (ctx->pc != 0x1C1E7Cu) { return; }
    }
    ctx->pc = 0x1C1E7Cu;
label_1c1e7c:
    // 0x1c1e7c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1e80:
    // 0x1c1e80: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1e80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1e84:
    // 0x1c1e84: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1e88:
    // 0x1c1e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e8c:
    // 0x1c1e8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e90:
    // 0x1c1e90: 0x24c6ba90  addiu       $a2, $a2, -0x4570
    ctx->pc = 0x1c1e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949520));
label_1c1e94:
    // 0x1c1e94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e98:
    // 0x1c1e98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c1e9c:
    if (ctx->pc == 0x1C1E9Cu) {
        ctx->pc = 0x1C1E9Cu;
            // 0x1c1e9c: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1EA0u;
        goto label_1c1ea0;
    }
    ctx->pc = 0x1C1E98u;
    {
        const bool branch_taken_0x1c1e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1E98u;
            // 0x1c1e9c: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e98) {
            ctx->pc = 0x1C1EC0u;
            goto label_1c1ec0;
        }
    }
    ctx->pc = 0x1C1EA0u;
label_1c1ea0:
    // 0x1c1ea0: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x1c1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c1ea4:
    // 0x1c1ea4: 0x40f809  jalr        $v0
label_1c1ea8:
    if (ctx->pc == 0x1C1EA8u) {
        ctx->pc = 0x1C1EACu;
        goto label_1c1eac;
    }
    ctx->pc = 0x1C1EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1EACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EACu; }
            if (ctx->pc != 0x1C1EACu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1EACu;
label_1c1eac:
    // 0x1c1eac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1eb0:
    // 0x1c1eb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1eb4:
    // 0x1c1eb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1eb8:
    // 0x1c1eb8: 0x3e00008  jr          $ra
label_1c1ebc:
    if (ctx->pc == 0x1C1EBCu) {
        ctx->pc = 0x1C1EBCu;
            // 0x1c1ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1EC0u;
        goto label_1c1ec0;
    }
    ctx->pc = 0x1C1EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EB8u;
            // 0x1c1ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1EC0u;
label_1c1ec0:
    // 0x1c1ec0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1ec4:
    // 0x1c1ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1ec8:
    // 0x1c1ec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1ecc:
    // 0x1c1ecc: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1ed0:
    // 0x1c1ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1ed4:
    // 0x1c1ed4: 0x240501f6  addiu       $a1, $zero, 0x1F6
    ctx->pc = 0x1c1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
label_1c1ed8:
    // 0x1c1ed8: 0x80711fe  j           func_1C47F8
label_1c1edc:
    if (ctx->pc == 0x1C1EDCu) {
        ctx->pc = 0x1C1EDCu;
            // 0x1c1edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1EE0u;
        goto label_1c1ee0;
    }
    ctx->pc = 0x1C1ED8u;
    ctx->pc = 0x1C1EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1ED8u;
            // 0x1c1edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1EE0u;
label_1c1ee0:
    // 0x1c1ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1ee4:
    // 0x1c1ee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1ee8:
    // 0x1c1ee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1eec:
    // 0x1c1eec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1ef0:
    // 0x1c1ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1ef4:
    // 0x1c1ef4: 0xc071236  jal         func_1C48D8
label_1c1ef8:
    if (ctx->pc == 0x1C1EF8u) {
        ctx->pc = 0x1C1EF8u;
            // 0x1c1ef8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1EFCu;
        goto label_1c1efc;
    }
    ctx->pc = 0x1C1EF4u;
    SET_GPR_U32(ctx, 31, 0x1C1EFCu);
    ctx->pc = 0x1C1EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1EF4u;
            // 0x1c1ef8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EFCu; }
        if (ctx->pc != 0x1C1EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1EFCu; }
        if (ctx->pc != 0x1C1EFCu) { return; }
    }
    ctx->pc = 0x1C1EFCu;
label_1c1efc:
    // 0x1c1efc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1f00:
    // 0x1c1f00: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1f00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1f04:
    // 0x1c1f04: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1f08:
    // 0x1c1f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f0c:
    // 0x1c1f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f10:
    // 0x1c1f10: 0x24c6baa8  addiu       $a2, $a2, -0x4558
    ctx->pc = 0x1c1f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949544));
label_1c1f14:
    // 0x1c1f14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f18:
    // 0x1c1f18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c1f1c:
    if (ctx->pc == 0x1C1F1Cu) {
        ctx->pc = 0x1C1F1Cu;
            // 0x1c1f1c: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1F20u;
        goto label_1c1f20;
    }
    ctx->pc = 0x1C1F18u;
    {
        const bool branch_taken_0x1c1f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F18u;
            // 0x1c1f1c: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f18) {
            ctx->pc = 0x1C1F40u;
            goto label_1c1f40;
        }
    }
    ctx->pc = 0x1C1F20u;
label_1c1f20:
    // 0x1c1f20: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1c1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1c1f24:
    // 0x1c1f24: 0x40f809  jalr        $v0
label_1c1f28:
    if (ctx->pc == 0x1C1F28u) {
        ctx->pc = 0x1C1F2Cu;
        goto label_1c1f2c;
    }
    ctx->pc = 0x1C1F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1F2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1F2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F2Cu; }
            if (ctx->pc != 0x1C1F2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C1F2Cu;
label_1c1f2c:
    // 0x1c1f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1f30:
    // 0x1c1f30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1f34:
    // 0x1c1f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1f38:
    // 0x1c1f38: 0x3e00008  jr          $ra
label_1c1f3c:
    if (ctx->pc == 0x1C1F3Cu) {
        ctx->pc = 0x1C1F3Cu;
            // 0x1c1f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1F40u;
        goto label_1c1f40;
    }
    ctx->pc = 0x1C1F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F38u;
            // 0x1c1f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1F40u;
label_1c1f40:
    // 0x1c1f40: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1f44:
    // 0x1c1f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1f48:
    // 0x1c1f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1f4c:
    // 0x1c1f4c: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1f50:
    // 0x1c1f50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1f54:
    // 0x1c1f54: 0x24050205  addiu       $a1, $zero, 0x205
    ctx->pc = 0x1c1f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
label_1c1f58:
    // 0x1c1f58: 0x80711fe  j           func_1C47F8
label_1c1f5c:
    if (ctx->pc == 0x1C1F5Cu) {
        ctx->pc = 0x1C1F5Cu;
            // 0x1c1f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1F60u;
        goto label_1c1f60;
    }
    ctx->pc = 0x1C1F58u;
    ctx->pc = 0x1C1F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F58u;
            // 0x1c1f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1F60u;
label_1c1f60:
    // 0x1c1f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1f64:
    // 0x1c1f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1f68:
    // 0x1c1f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f6c:
    // 0x1c1f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1f70:
    // 0x1c1f70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f74:
    // 0x1c1f74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c1f78:
    // 0x1c1f78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c1f7c:
    // 0x1c1f7c: 0xc071236  jal         func_1C48D8
label_1c1f80:
    if (ctx->pc == 0x1C1F80u) {
        ctx->pc = 0x1C1F80u;
            // 0x1c1f80: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F84u;
        goto label_1c1f84;
    }
    ctx->pc = 0x1C1F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1F84u);
    ctx->pc = 0x1C1F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F7Cu;
            // 0x1c1f80: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F84u; }
        if (ctx->pc != 0x1C1F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F84u; }
        if (ctx->pc != 0x1C1F84u) { return; }
    }
    ctx->pc = 0x1C1F84u;
label_1c1f84:
    // 0x1c1f84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1f88:
    // 0x1c1f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f8c:
    // 0x1c1f8c: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1f90:
    // 0x1c1f90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f94:
    // 0x1c1f94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c1f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f98:
    // 0x1c1f98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f9c:
    // 0x1c1f9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c1fa0:
    if (ctx->pc == 0x1C1FA0u) {
        ctx->pc = 0x1C1FA0u;
            // 0x1c1fa0: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1FA4u;
        goto label_1c1fa4;
    }
    ctx->pc = 0x1C1F9Cu;
    {
        const bool branch_taken_0x1c1f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F9Cu;
            // 0x1c1fa0: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f9c) {
            ctx->pc = 0x1C1FC8u;
            goto label_1c1fc8;
        }
    }
    ctx->pc = 0x1C1FA4u;
label_1c1fa4:
    // 0x1c1fa4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1c1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1c1fa8:
    // 0x1c1fa8: 0x40f809  jalr        $v0
label_1c1fac:
    if (ctx->pc == 0x1C1FACu) {
        ctx->pc = 0x1C1FB0u;
        goto label_1c1fb0;
    }
    ctx->pc = 0x1C1FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1FB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1FB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1FB0u; }
            if (ctx->pc != 0x1C1FB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1FB0u;
label_1c1fb0:
    // 0x1c1fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1fb4:
    // 0x1c1fb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1fb8:
    // 0x1c1fb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1fbc:
    // 0x1c1fbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1fc0:
    // 0x1c1fc0: 0x3e00008  jr          $ra
label_1c1fc4:
    if (ctx->pc == 0x1C1FC4u) {
        ctx->pc = 0x1C1FC4u;
            // 0x1c1fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1FC8u;
        goto label_1c1fc8;
    }
    ctx->pc = 0x1C1FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1FC0u;
            // 0x1c1fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1FC8u;
label_1c1fc8:
    // 0x1c1fc8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1fcc:
    // 0x1c1fcc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1fccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1fd0:
    // 0x1c1fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1fd4:
    // 0x1c1fd4: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c1fd8:
    // 0x1c1fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1fdc:
    // 0x1c1fdc: 0x24c6bac0  addiu       $a2, $a2, -0x4540
    ctx->pc = 0x1c1fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949568));
label_1c1fe0:
    // 0x1c1fe0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1fe4:
    // 0x1c1fe4: 0x24050214  addiu       $a1, $zero, 0x214
    ctx->pc = 0x1c1fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
label_1c1fe8:
    // 0x1c1fe8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c1fec:
    // 0x1c1fec: 0x80711fe  j           func_1C47F8
label_1c1ff0:
    if (ctx->pc == 0x1C1FF0u) {
        ctx->pc = 0x1C1FF0u;
            // 0x1c1ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1FF4u;
        goto label_1c1ff4;
    }
    ctx->pc = 0x1C1FECu;
    ctx->pc = 0x1C1FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1FECu;
            // 0x1c1ff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1FF4u;
label_1c1ff4:
    // 0x1c1ff4: 0x0  nop
    ctx->pc = 0x1c1ff4u;
    // NOP
}
