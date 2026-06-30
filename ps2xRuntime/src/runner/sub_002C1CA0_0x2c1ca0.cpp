#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1CA0
// Address: 0x2c1ca0 - 0x2c1f90
void sub_002C1CA0_0x2c1ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1CA0_0x2c1ca0");
#endif

    switch (ctx->pc) {
        case 0x2c1ca0u: goto label_2c1ca0;
        case 0x2c1ca4u: goto label_2c1ca4;
        case 0x2c1ca8u: goto label_2c1ca8;
        case 0x2c1cacu: goto label_2c1cac;
        case 0x2c1cb0u: goto label_2c1cb0;
        case 0x2c1cb4u: goto label_2c1cb4;
        case 0x2c1cb8u: goto label_2c1cb8;
        case 0x2c1cbcu: goto label_2c1cbc;
        case 0x2c1cc0u: goto label_2c1cc0;
        case 0x2c1cc4u: goto label_2c1cc4;
        case 0x2c1cc8u: goto label_2c1cc8;
        case 0x2c1cccu: goto label_2c1ccc;
        case 0x2c1cd0u: goto label_2c1cd0;
        case 0x2c1cd4u: goto label_2c1cd4;
        case 0x2c1cd8u: goto label_2c1cd8;
        case 0x2c1cdcu: goto label_2c1cdc;
        case 0x2c1ce0u: goto label_2c1ce0;
        case 0x2c1ce4u: goto label_2c1ce4;
        case 0x2c1ce8u: goto label_2c1ce8;
        case 0x2c1cecu: goto label_2c1cec;
        case 0x2c1cf0u: goto label_2c1cf0;
        case 0x2c1cf4u: goto label_2c1cf4;
        case 0x2c1cf8u: goto label_2c1cf8;
        case 0x2c1cfcu: goto label_2c1cfc;
        case 0x2c1d00u: goto label_2c1d00;
        case 0x2c1d04u: goto label_2c1d04;
        case 0x2c1d08u: goto label_2c1d08;
        case 0x2c1d0cu: goto label_2c1d0c;
        case 0x2c1d10u: goto label_2c1d10;
        case 0x2c1d14u: goto label_2c1d14;
        case 0x2c1d18u: goto label_2c1d18;
        case 0x2c1d1cu: goto label_2c1d1c;
        case 0x2c1d20u: goto label_2c1d20;
        case 0x2c1d24u: goto label_2c1d24;
        case 0x2c1d28u: goto label_2c1d28;
        case 0x2c1d2cu: goto label_2c1d2c;
        case 0x2c1d30u: goto label_2c1d30;
        case 0x2c1d34u: goto label_2c1d34;
        case 0x2c1d38u: goto label_2c1d38;
        case 0x2c1d3cu: goto label_2c1d3c;
        case 0x2c1d40u: goto label_2c1d40;
        case 0x2c1d44u: goto label_2c1d44;
        case 0x2c1d48u: goto label_2c1d48;
        case 0x2c1d4cu: goto label_2c1d4c;
        case 0x2c1d50u: goto label_2c1d50;
        case 0x2c1d54u: goto label_2c1d54;
        case 0x2c1d58u: goto label_2c1d58;
        case 0x2c1d5cu: goto label_2c1d5c;
        case 0x2c1d60u: goto label_2c1d60;
        case 0x2c1d64u: goto label_2c1d64;
        case 0x2c1d68u: goto label_2c1d68;
        case 0x2c1d6cu: goto label_2c1d6c;
        case 0x2c1d70u: goto label_2c1d70;
        case 0x2c1d74u: goto label_2c1d74;
        case 0x2c1d78u: goto label_2c1d78;
        case 0x2c1d7cu: goto label_2c1d7c;
        case 0x2c1d80u: goto label_2c1d80;
        case 0x2c1d84u: goto label_2c1d84;
        case 0x2c1d88u: goto label_2c1d88;
        case 0x2c1d8cu: goto label_2c1d8c;
        case 0x2c1d90u: goto label_2c1d90;
        case 0x2c1d94u: goto label_2c1d94;
        case 0x2c1d98u: goto label_2c1d98;
        case 0x2c1d9cu: goto label_2c1d9c;
        case 0x2c1da0u: goto label_2c1da0;
        case 0x2c1da4u: goto label_2c1da4;
        case 0x2c1da8u: goto label_2c1da8;
        case 0x2c1dacu: goto label_2c1dac;
        case 0x2c1db0u: goto label_2c1db0;
        case 0x2c1db4u: goto label_2c1db4;
        case 0x2c1db8u: goto label_2c1db8;
        case 0x2c1dbcu: goto label_2c1dbc;
        case 0x2c1dc0u: goto label_2c1dc0;
        case 0x2c1dc4u: goto label_2c1dc4;
        case 0x2c1dc8u: goto label_2c1dc8;
        case 0x2c1dccu: goto label_2c1dcc;
        case 0x2c1dd0u: goto label_2c1dd0;
        case 0x2c1dd4u: goto label_2c1dd4;
        case 0x2c1dd8u: goto label_2c1dd8;
        case 0x2c1ddcu: goto label_2c1ddc;
        case 0x2c1de0u: goto label_2c1de0;
        case 0x2c1de4u: goto label_2c1de4;
        case 0x2c1de8u: goto label_2c1de8;
        case 0x2c1decu: goto label_2c1dec;
        case 0x2c1df0u: goto label_2c1df0;
        case 0x2c1df4u: goto label_2c1df4;
        case 0x2c1df8u: goto label_2c1df8;
        case 0x2c1dfcu: goto label_2c1dfc;
        case 0x2c1e00u: goto label_2c1e00;
        case 0x2c1e04u: goto label_2c1e04;
        case 0x2c1e08u: goto label_2c1e08;
        case 0x2c1e0cu: goto label_2c1e0c;
        case 0x2c1e10u: goto label_2c1e10;
        case 0x2c1e14u: goto label_2c1e14;
        case 0x2c1e18u: goto label_2c1e18;
        case 0x2c1e1cu: goto label_2c1e1c;
        case 0x2c1e20u: goto label_2c1e20;
        case 0x2c1e24u: goto label_2c1e24;
        case 0x2c1e28u: goto label_2c1e28;
        case 0x2c1e2cu: goto label_2c1e2c;
        case 0x2c1e30u: goto label_2c1e30;
        case 0x2c1e34u: goto label_2c1e34;
        case 0x2c1e38u: goto label_2c1e38;
        case 0x2c1e3cu: goto label_2c1e3c;
        case 0x2c1e40u: goto label_2c1e40;
        case 0x2c1e44u: goto label_2c1e44;
        case 0x2c1e48u: goto label_2c1e48;
        case 0x2c1e4cu: goto label_2c1e4c;
        case 0x2c1e50u: goto label_2c1e50;
        case 0x2c1e54u: goto label_2c1e54;
        case 0x2c1e58u: goto label_2c1e58;
        case 0x2c1e5cu: goto label_2c1e5c;
        case 0x2c1e60u: goto label_2c1e60;
        case 0x2c1e64u: goto label_2c1e64;
        case 0x2c1e68u: goto label_2c1e68;
        case 0x2c1e6cu: goto label_2c1e6c;
        case 0x2c1e70u: goto label_2c1e70;
        case 0x2c1e74u: goto label_2c1e74;
        case 0x2c1e78u: goto label_2c1e78;
        case 0x2c1e7cu: goto label_2c1e7c;
        case 0x2c1e80u: goto label_2c1e80;
        case 0x2c1e84u: goto label_2c1e84;
        case 0x2c1e88u: goto label_2c1e88;
        case 0x2c1e8cu: goto label_2c1e8c;
        case 0x2c1e90u: goto label_2c1e90;
        case 0x2c1e94u: goto label_2c1e94;
        case 0x2c1e98u: goto label_2c1e98;
        case 0x2c1e9cu: goto label_2c1e9c;
        case 0x2c1ea0u: goto label_2c1ea0;
        case 0x2c1ea4u: goto label_2c1ea4;
        case 0x2c1ea8u: goto label_2c1ea8;
        case 0x2c1eacu: goto label_2c1eac;
        case 0x2c1eb0u: goto label_2c1eb0;
        case 0x2c1eb4u: goto label_2c1eb4;
        case 0x2c1eb8u: goto label_2c1eb8;
        case 0x2c1ebcu: goto label_2c1ebc;
        case 0x2c1ec0u: goto label_2c1ec0;
        case 0x2c1ec4u: goto label_2c1ec4;
        case 0x2c1ec8u: goto label_2c1ec8;
        case 0x2c1eccu: goto label_2c1ecc;
        case 0x2c1ed0u: goto label_2c1ed0;
        case 0x2c1ed4u: goto label_2c1ed4;
        case 0x2c1ed8u: goto label_2c1ed8;
        case 0x2c1edcu: goto label_2c1edc;
        case 0x2c1ee0u: goto label_2c1ee0;
        case 0x2c1ee4u: goto label_2c1ee4;
        case 0x2c1ee8u: goto label_2c1ee8;
        case 0x2c1eecu: goto label_2c1eec;
        case 0x2c1ef0u: goto label_2c1ef0;
        case 0x2c1ef4u: goto label_2c1ef4;
        case 0x2c1ef8u: goto label_2c1ef8;
        case 0x2c1efcu: goto label_2c1efc;
        case 0x2c1f00u: goto label_2c1f00;
        case 0x2c1f04u: goto label_2c1f04;
        case 0x2c1f08u: goto label_2c1f08;
        case 0x2c1f0cu: goto label_2c1f0c;
        case 0x2c1f10u: goto label_2c1f10;
        case 0x2c1f14u: goto label_2c1f14;
        case 0x2c1f18u: goto label_2c1f18;
        case 0x2c1f1cu: goto label_2c1f1c;
        case 0x2c1f20u: goto label_2c1f20;
        case 0x2c1f24u: goto label_2c1f24;
        case 0x2c1f28u: goto label_2c1f28;
        case 0x2c1f2cu: goto label_2c1f2c;
        case 0x2c1f30u: goto label_2c1f30;
        case 0x2c1f34u: goto label_2c1f34;
        case 0x2c1f38u: goto label_2c1f38;
        case 0x2c1f3cu: goto label_2c1f3c;
        case 0x2c1f40u: goto label_2c1f40;
        case 0x2c1f44u: goto label_2c1f44;
        case 0x2c1f48u: goto label_2c1f48;
        case 0x2c1f4cu: goto label_2c1f4c;
        case 0x2c1f50u: goto label_2c1f50;
        case 0x2c1f54u: goto label_2c1f54;
        case 0x2c1f58u: goto label_2c1f58;
        case 0x2c1f5cu: goto label_2c1f5c;
        case 0x2c1f60u: goto label_2c1f60;
        case 0x2c1f64u: goto label_2c1f64;
        case 0x2c1f68u: goto label_2c1f68;
        case 0x2c1f6cu: goto label_2c1f6c;
        case 0x2c1f70u: goto label_2c1f70;
        case 0x2c1f74u: goto label_2c1f74;
        case 0x2c1f78u: goto label_2c1f78;
        case 0x2c1f7cu: goto label_2c1f7c;
        case 0x2c1f80u: goto label_2c1f80;
        case 0x2c1f84u: goto label_2c1f84;
        case 0x2c1f88u: goto label_2c1f88;
        case 0x2c1f8cu: goto label_2c1f8c;
        default: break;
    }

    ctx->pc = 0x2c1ca0u;

label_2c1ca0:
    // 0x2c1ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2c1ca4:
    // 0x2c1ca4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2c1ca8:
    // 0x2c1ca8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c1ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c1cac:
    // 0x2c1cac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2c1cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c1cb0:
    // 0x2c1cb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c1cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c1cb4:
    // 0x2c1cb4: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2c1cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_2c1cb8:
    // 0x2c1cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c1cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c1cbc:
    // 0x2c1cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c1cc0:
    // 0x2c1cc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1cc4:
    // 0x2c1cc4: 0xc0aeaf4  jal         func_2BABD0
label_2c1cc8:
    if (ctx->pc == 0x2C1CC8u) {
        ctx->pc = 0x2C1CC8u;
            // 0x2c1cc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C1CCCu;
        goto label_2c1ccc;
    }
    ctx->pc = 0x2C1CC4u;
    SET_GPR_U32(ctx, 31, 0x2C1CCCu);
    ctx->pc = 0x2C1CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CC4u;
            // 0x2c1cc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CCCu; }
        if (ctx->pc != 0x2C1CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CCCu; }
        if (ctx->pc != 0x2C1CCCu) { return; }
    }
    ctx->pc = 0x2C1CCCu;
label_2c1ccc:
    // 0x2c1ccc: 0xc0b08d0  jal         func_2C2340
label_2c1cd0:
    if (ctx->pc == 0x2C1CD0u) {
        ctx->pc = 0x2C1CD0u;
            // 0x2c1cd0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C1CD4u;
        goto label_2c1cd4;
    }
    ctx->pc = 0x2C1CCCu;
    SET_GPR_U32(ctx, 31, 0x2C1CD4u);
    ctx->pc = 0x2C1CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CCCu;
            // 0x2c1cd0: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2340u;
    if (runtime->hasFunction(0x2C2340u)) {
        auto targetFn = runtime->lookupFunction(0x2C2340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CD4u; }
        if (ctx->pc != 0x2C1CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2340_0x2c2340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CD4u; }
        if (ctx->pc != 0x2C1CD4u) { return; }
    }
    ctx->pc = 0x2C1CD4u;
label_2c1cd4:
    // 0x2c1cd4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c1cd8:
    // 0x2c1cd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1cdc:
    // 0x2c1cdc: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x2c1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
label_2c1ce0:
    // 0x2c1ce0: 0x24421648  addiu       $v0, $v0, 0x1648
    ctx->pc = 0x2c1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5704));
label_2c1ce4:
    // 0x2c1ce4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c1ce8:
    // 0x2c1ce8: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2c1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c1cec:
    // 0x2c1cec: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c1cf0:
    // 0x2c1cf0: 0xc0b08c8  jal         func_2C2320
label_2c1cf4:
    if (ctx->pc == 0x2C1CF4u) {
        ctx->pc = 0x2C1CF4u;
            // 0x2c1cf4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2C1CF8u;
        goto label_2c1cf8;
    }
    ctx->pc = 0x2C1CF0u;
    SET_GPR_U32(ctx, 31, 0x2C1CF8u);
    ctx->pc = 0x2C1CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CF0u;
            // 0x2c1cf4: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2320u;
    if (runtime->hasFunction(0x2C2320u)) {
        auto targetFn = runtime->lookupFunction(0x2C2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CF8u; }
        if (ctx->pc != 0x2C1CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2320_0x2c2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1CF8u; }
        if (ctx->pc != 0x2C1CF8u) { return; }
    }
    ctx->pc = 0x2C1CF8u;
label_2c1cf8:
    // 0x2c1cf8: 0xc0b08c8  jal         func_2C2320
label_2c1cfc:
    if (ctx->pc == 0x2C1CFCu) {
        ctx->pc = 0x2C1CFCu;
            // 0x2c1cfc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C1D00u;
        goto label_2c1d00;
    }
    ctx->pc = 0x2C1CF8u;
    SET_GPR_U32(ctx, 31, 0x2C1D00u);
    ctx->pc = 0x2C1CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1CF8u;
            // 0x2c1cfc: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2320u;
    if (runtime->hasFunction(0x2C2320u)) {
        auto targetFn = runtime->lookupFunction(0x2C2320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D00u; }
        if (ctx->pc != 0x2C1D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2320_0x2c2320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D00u; }
        if (ctx->pc != 0x2C1D00u) { return; }
    }
    ctx->pc = 0x2C1D00u;
label_2c1d00:
    // 0x2c1d00: 0xc0b0548  jal         func_2C1520
label_2c1d04:
    if (ctx->pc == 0x2C1D04u) {
        ctx->pc = 0x2C1D04u;
            // 0x2c1d04: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x2C1D08u;
        goto label_2c1d08;
    }
    ctx->pc = 0x2C1D00u;
    SET_GPR_U32(ctx, 31, 0x2C1D08u);
    ctx->pc = 0x2C1D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D00u;
            // 0x2c1d04: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C1520u;
    if (runtime->hasFunction(0x2C1520u)) {
        auto targetFn = runtime->lookupFunction(0x2C1520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D08u; }
        if (ctx->pc != 0x2C1D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C1520_0x2c1520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D08u; }
        if (ctx->pc != 0x2C1D08u) { return; }
    }
    ctx->pc = 0x2C1D08u;
label_2c1d08:
    // 0x2c1d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1d0c:
    // 0x2c1d0c: 0xc0aeac0  jal         func_2BAB00
label_2c1d10:
    if (ctx->pc == 0x2C1D10u) {
        ctx->pc = 0x2C1D10u;
            // 0x2c1d10: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->pc = 0x2C1D14u;
        goto label_2c1d14;
    }
    ctx->pc = 0x2C1D0Cu;
    SET_GPR_U32(ctx, 31, 0x2C1D14u);
    ctx->pc = 0x2C1D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D0Cu;
            // 0x2c1d10: 0xae2000a4  sw          $zero, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D14u; }
        if (ctx->pc != 0x2C1D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D14u; }
        if (ctx->pc != 0x2C1D14u) { return; }
    }
    ctx->pc = 0x2C1D14u;
label_2c1d14:
    // 0x2c1d14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1d18:
    // 0x2c1d18: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2c1d1c:
    if (ctx->pc == 0x2C1D1Cu) {
        ctx->pc = 0x2C1D20u;
        goto label_2c1d20;
    }
    ctx->pc = 0x2C1D18u;
    {
        const bool branch_taken_0x2c1d18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1d18) {
            ctx->pc = 0x2C1D98u;
            goto label_2c1d98;
        }
    }
    ctx->pc = 0x2C1D20u;
label_2c1d20:
    // 0x2c1d20: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2c1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2c1d24:
    // 0x2c1d24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2c1d28:
    // 0x2c1d28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2c1d2c:
    // 0x2c1d2c: 0xc040138  jal         func_1004E0
label_2c1d30:
    if (ctx->pc == 0x2C1D30u) {
        ctx->pc = 0x2C1D30u;
            // 0x2c1d30: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2C1D34u;
        goto label_2c1d34;
    }
    ctx->pc = 0x2C1D2Cu;
    SET_GPR_U32(ctx, 31, 0x2C1D34u);
    ctx->pc = 0x2C1D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D2Cu;
            // 0x2c1d30: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D34u; }
        if (ctx->pc != 0x2C1D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D34u; }
        if (ctx->pc != 0x2C1D34u) { return; }
    }
    ctx->pc = 0x2C1D34u;
label_2c1d34:
    // 0x2c1d34: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c1d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c1d38:
    // 0x2c1d38: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c1d38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2c1d3c:
    // 0x2c1d3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1d40:
    // 0x2c1d40: 0x24a52180  addiu       $a1, $a1, 0x2180
    ctx->pc = 0x2c1d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
label_2c1d44:
    // 0x2c1d44: 0x24c62090  addiu       $a2, $a2, 0x2090
    ctx->pc = 0x2c1d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8336));
label_2c1d48:
    // 0x2c1d48: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2c1d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_2c1d4c:
    // 0x2c1d4c: 0xc040840  jal         func_102100
label_2c1d50:
    if (ctx->pc == 0x2C1D50u) {
        ctx->pc = 0x2C1D50u;
            // 0x2c1d50: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D54u;
        goto label_2c1d54;
    }
    ctx->pc = 0x2C1D4Cu;
    SET_GPR_U32(ctx, 31, 0x2C1D54u);
    ctx->pc = 0x2C1D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D4Cu;
            // 0x2c1d50: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D54u; }
        if (ctx->pc != 0x2C1D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D54u; }
        if (ctx->pc != 0x2C1D54u) { return; }
    }
    ctx->pc = 0x2C1D54u;
label_2c1d54:
    // 0x2c1d54: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2c1d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_2c1d58:
    // 0x2c1d58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c1d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1d5c:
    // 0x2c1d5c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2c1d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c1d60:
    // 0x2c1d60: 0xc0b0820  jal         func_2C2080
label_2c1d64:
    if (ctx->pc == 0x2C1D64u) {
        ctx->pc = 0x2C1D64u;
            // 0x2c1d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D68u;
        goto label_2c1d68;
    }
    ctx->pc = 0x2C1D60u;
    SET_GPR_U32(ctx, 31, 0x2C1D68u);
    ctx->pc = 0x2C1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D60u;
            // 0x2c1d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2080u;
    if (runtime->hasFunction(0x2C2080u)) {
        auto targetFn = runtime->lookupFunction(0x2C2080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D68u; }
        if (ctx->pc != 0x2C1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2080_0x2c2080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D68u; }
        if (ctx->pc != 0x2C1D68u) { return; }
    }
    ctx->pc = 0x2C1D68u;
label_2c1d68:
    // 0x2c1d68: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2c1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c1d6c:
    // 0x2c1d6c: 0xc0b0820  jal         func_2C2080
label_2c1d70:
    if (ctx->pc == 0x2C1D70u) {
        ctx->pc = 0x2C1D70u;
            // 0x2c1d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D74u;
        goto label_2c1d74;
    }
    ctx->pc = 0x2C1D6Cu;
    SET_GPR_U32(ctx, 31, 0x2C1D74u);
    ctx->pc = 0x2C1D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D6Cu;
            // 0x2c1d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2080u;
    if (runtime->hasFunction(0x2C2080u)) {
        auto targetFn = runtime->lookupFunction(0x2C2080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D74u; }
        if (ctx->pc != 0x2C1D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2080_0x2c2080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D74u; }
        if (ctx->pc != 0x2C1D74u) { return; }
    }
    ctx->pc = 0x2C1D74u;
label_2c1d74:
    // 0x2c1d74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c1d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1d78:
    // 0x2c1d78: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2c1d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c1d7c:
    // 0x2c1d7c: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2c1d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_2c1d80:
    // 0x2c1d80: 0xc0b0818  jal         func_2C2060
label_2c1d84:
    if (ctx->pc == 0x2C1D84u) {
        ctx->pc = 0x2C1D84u;
            // 0x2c1d84: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->pc = 0x2C1D88u;
        goto label_2c1d88;
    }
    ctx->pc = 0x2C1D80u;
    SET_GPR_U32(ctx, 31, 0x2C1D88u);
    ctx->pc = 0x2C1D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D80u;
            // 0x2c1d84: 0xafb3006c  sw          $s3, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C2060u;
    if (runtime->hasFunction(0x2C2060u)) {
        auto targetFn = runtime->lookupFunction(0x2C2060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D88u; }
        if (ctx->pc != 0x2C1D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C2060_0x2c2060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1D88u; }
        if (ctx->pc != 0x2C1D88u) { return; }
    }
    ctx->pc = 0x2C1D88u;
label_2c1d88:
    // 0x2c1d88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2c1d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2c1d8c:
    // 0x2c1d8c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2c1d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c1d90:
    // 0x2c1d90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2c1d94:
    if (ctx->pc == 0x2C1D94u) {
        ctx->pc = 0x2C1D94u;
            // 0x2c1d94: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->pc = 0x2C1D98u;
        goto label_2c1d98;
    }
    ctx->pc = 0x2C1D90u;
    {
        const bool branch_taken_0x2c1d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1D90u;
            // 0x2c1d94: 0x26730090  addiu       $s3, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1d90) {
            ctx->pc = 0x2C1D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c1d78;
        }
    }
    ctx->pc = 0x2C1D98u;
label_2c1d98:
    // 0x2c1d98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1d9c:
    // 0x2c1d9c: 0x244215c0  addiu       $v0, $v0, 0x15C0
    ctx->pc = 0x2c1d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
label_2c1da0:
    // 0x2c1da0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2c1da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2c1da4:
    // 0x2c1da4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c1da8:
    // 0x2c1da8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2c1da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_2c1dac:
    // 0x2c1dac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1db0:
    // 0x2c1db0: 0x244215f8  addiu       $v0, $v0, 0x15F8
    ctx->pc = 0x2c1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5624));
label_2c1db4:
    // 0x2c1db4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c1db8:
    // 0x2c1db8: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x2c1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_2c1dbc:
    // 0x2c1dbc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2c1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2c1dc0:
    // 0x2c1dc0: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x2c1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
label_2c1dc4:
    // 0x2c1dc4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2c1dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_2c1dc8:
    // 0x2c1dc8: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x2c1dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_2c1dcc:
    // 0x2c1dcc: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2c1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_2c1dd0:
    // 0x2c1dd0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2c1dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_2c1dd4:
    // 0x2c1dd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2c1dd8:
    // 0x2c1dd8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2c1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2c1ddc:
    // 0x2c1ddc: 0xc0a7a88  jal         func_29EA20
label_2c1de0:
    if (ctx->pc == 0x2C1DE0u) {
        ctx->pc = 0x2C1DE0u;
            // 0x2c1de0: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x2C1DE4u;
        goto label_2c1de4;
    }
    ctx->pc = 0x2C1DDCu;
    SET_GPR_U32(ctx, 31, 0x2C1DE4u);
    ctx->pc = 0x2C1DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DDCu;
            // 0x2c1de0: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DE4u; }
        if (ctx->pc != 0x2C1DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1DE4u; }
        if (ctx->pc != 0x2C1DE4u) { return; }
    }
    ctx->pc = 0x2C1DE4u;
label_2c1de4:
    // 0x2c1de4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2c1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2c1de8:
    // 0x2c1de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1dec:
    // 0x2c1dec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2c1df0:
    if (ctx->pc == 0x2C1DF0u) {
        ctx->pc = 0x2C1DF0u;
            // 0x2c1df0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2C1DF4u;
        goto label_2c1df4;
    }
    ctx->pc = 0x2C1DECu;
    {
        const bool branch_taken_0x2c1dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DECu;
            // 0x2c1df0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1dec) {
            ctx->pc = 0x2C1E08u;
            goto label_2c1e08;
        }
    }
    ctx->pc = 0x2C1DF4u;
label_2c1df4:
    // 0x2c1df4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2c1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2c1df8:
    // 0x2c1df8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x2c1df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c1dfc:
    // 0x2c1dfc: 0xc0804bc  jal         func_2012F0
label_2c1e00:
    if (ctx->pc == 0x2C1E00u) {
        ctx->pc = 0x2C1E00u;
            // 0x2c1e00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C1E04u;
        goto label_2c1e04;
    }
    ctx->pc = 0x2C1DFCu;
    SET_GPR_U32(ctx, 31, 0x2C1E04u);
    ctx->pc = 0x2C1E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1DFCu;
            // 0x2c1e00: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E04u; }
        if (ctx->pc != 0x2C1E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E04u; }
        if (ctx->pc != 0x2C1E04u) { return; }
    }
    ctx->pc = 0x2C1E04u;
label_2c1e04:
    // 0x2c1e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1e08:
    // 0x2c1e08: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x2c1e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_2c1e0c:
    // 0x2c1e0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c1e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1e10:
    // 0x2c1e10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c1e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c1e14:
    // 0x2c1e14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c1e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c1e18:
    // 0x2c1e18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c1e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1e1c:
    // 0x2c1e1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1e20:
    // 0x2c1e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c1e24:
    // 0x2c1e24: 0x3e00008  jr          $ra
label_2c1e28:
    if (ctx->pc == 0x2C1E28u) {
        ctx->pc = 0x2C1E28u;
            // 0x2c1e28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2C1E2Cu;
        goto label_2c1e2c;
    }
    ctx->pc = 0x2C1E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E24u;
            // 0x2c1e28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1E2Cu;
label_2c1e2c:
    // 0x2c1e2c: 0x0  nop
    ctx->pc = 0x2c1e2cu;
    // NOP
label_2c1e30:
    // 0x2c1e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c1e34:
    // 0x2c1e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c1e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c1e38:
    // 0x2c1e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c1e3c:
    // 0x2c1e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c1e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c1e40:
    // 0x2c1e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c1e44:
    // 0x2c1e44: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c1e48:
    if (ctx->pc == 0x2C1E48u) {
        ctx->pc = 0x2C1E48u;
            // 0x2c1e48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E4Cu;
        goto label_2c1e4c;
    }
    ctx->pc = 0x2C1E44u;
    {
        const bool branch_taken_0x2c1e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E44u;
            // 0x2c1e48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1e44) {
            ctx->pc = 0x2C1F78u;
            goto label_2c1f78;
        }
    }
    ctx->pc = 0x2C1E4Cu;
label_2c1e4c:
    // 0x2c1e4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c1e50:
    // 0x2c1e50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1e54:
    // 0x2c1e54: 0x24631610  addiu       $v1, $v1, 0x1610
    ctx->pc = 0x2c1e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
label_2c1e58:
    // 0x2c1e58: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c1e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c1e5c:
    // 0x2c1e5c: 0x24421648  addiu       $v0, $v0, 0x1648
    ctx->pc = 0x2c1e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5704));
label_2c1e60:
    // 0x2c1e60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c1e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c1e64:
    // 0x2c1e64: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c1e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c1e68:
    // 0x2c1e68: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c1e6c:
    // 0x2c1e6c: 0xc0407c0  jal         func_101F00
label_2c1e70:
    if (ctx->pc == 0x2C1E70u) {
        ctx->pc = 0x2C1E70u;
            // 0x2c1e70: 0x24a52090  addiu       $a1, $a1, 0x2090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8336));
        ctx->pc = 0x2C1E74u;
        goto label_2c1e74;
    }
    ctx->pc = 0x2C1E6Cu;
    SET_GPR_U32(ctx, 31, 0x2C1E74u);
    ctx->pc = 0x2C1E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E6Cu;
            // 0x2c1e70: 0x24a52090  addiu       $a1, $a1, 0x2090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E74u; }
        if (ctx->pc != 0x2C1E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E74u; }
        if (ctx->pc != 0x2C1E74u) { return; }
    }
    ctx->pc = 0x2C1E74u;
label_2c1e74:
    // 0x2c1e74: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c1e78:
    // 0x2c1e78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c1e7c:
    if (ctx->pc == 0x2C1E7Cu) {
        ctx->pc = 0x2C1E7Cu;
            // 0x2c1e7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C1E80u;
        goto label_2c1e80;
    }
    ctx->pc = 0x2C1E78u;
    {
        const bool branch_taken_0x2c1e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e78) {
            ctx->pc = 0x2C1E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E78u;
            // 0x2c1e7c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1E8Cu;
            goto label_2c1e8c;
        }
    }
    ctx->pc = 0x2C1E80u;
label_2c1e80:
    // 0x2c1e80: 0xc07507c  jal         func_1D41F0
label_2c1e84:
    if (ctx->pc == 0x2C1E84u) {
        ctx->pc = 0x2C1E84u;
            // 0x2c1e84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C1E88u;
        goto label_2c1e88;
    }
    ctx->pc = 0x2C1E80u;
    SET_GPR_U32(ctx, 31, 0x2C1E88u);
    ctx->pc = 0x2C1E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E80u;
            // 0x2c1e84: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E88u; }
        if (ctx->pc != 0x2C1E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1E88u; }
        if (ctx->pc != 0x2C1E88u) { return; }
    }
    ctx->pc = 0x2C1E88u;
label_2c1e88:
    // 0x2c1e88: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c1e8c:
    // 0x2c1e8c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c1e90:
    if (ctx->pc == 0x2C1E90u) {
        ctx->pc = 0x2C1E90u;
            // 0x2c1e90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C1E94u;
        goto label_2c1e94;
    }
    ctx->pc = 0x2C1E8Cu;
    {
        const bool branch_taken_0x2c1e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e8c) {
            ctx->pc = 0x2C1E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1E8Cu;
            // 0x2c1e90: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1EBCu;
            goto label_2c1ebc;
        }
    }
    ctx->pc = 0x2C1E94u;
label_2c1e94:
    // 0x2c1e94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c1e98:
    if (ctx->pc == 0x2C1E98u) {
        ctx->pc = 0x2C1E9Cu;
        goto label_2c1e9c;
    }
    ctx->pc = 0x2C1E94u;
    {
        const bool branch_taken_0x2c1e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e94) {
            ctx->pc = 0x2C1EB8u;
            goto label_2c1eb8;
        }
    }
    ctx->pc = 0x2C1E9Cu;
label_2c1e9c:
    // 0x2c1e9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1ea0:
    if (ctx->pc == 0x2C1EA0u) {
        ctx->pc = 0x2C1EA4u;
        goto label_2c1ea4;
    }
    ctx->pc = 0x2C1E9Cu;
    {
        const bool branch_taken_0x2c1e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1e9c) {
            ctx->pc = 0x2C1EB8u;
            goto label_2c1eb8;
        }
    }
    ctx->pc = 0x2C1EA4u;
label_2c1ea4:
    // 0x2c1ea4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c1ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c1ea8:
    // 0x2c1ea8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c1eac:
    if (ctx->pc == 0x2C1EACu) {
        ctx->pc = 0x2C1EB0u;
        goto label_2c1eb0;
    }
    ctx->pc = 0x2C1EA8u;
    {
        const bool branch_taken_0x2c1ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ea8) {
            ctx->pc = 0x2C1EB8u;
            goto label_2c1eb8;
        }
    }
    ctx->pc = 0x2C1EB0u;
label_2c1eb0:
    // 0x2c1eb0: 0xc0400a8  jal         func_1002A0
label_2c1eb4:
    if (ctx->pc == 0x2C1EB4u) {
        ctx->pc = 0x2C1EB8u;
        goto label_2c1eb8;
    }
    ctx->pc = 0x2C1EB0u;
    SET_GPR_U32(ctx, 31, 0x2C1EB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EB8u; }
        if (ctx->pc != 0x2C1EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EB8u; }
        if (ctx->pc != 0x2C1EB8u) { return; }
    }
    ctx->pc = 0x2C1EB8u;
label_2c1eb8:
    // 0x2c1eb8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c1ebc:
    // 0x2c1ebc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c1ec0:
    if (ctx->pc == 0x2C1EC0u) {
        ctx->pc = 0x2C1EC0u;
            // 0x2c1ec0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C1EC4u;
        goto label_2c1ec4;
    }
    ctx->pc = 0x2C1EBCu;
    {
        const bool branch_taken_0x2c1ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ebc) {
            ctx->pc = 0x2C1EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1EBCu;
            // 0x2c1ec0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1EECu;
            goto label_2c1eec;
        }
    }
    ctx->pc = 0x2C1EC4u;
label_2c1ec4:
    // 0x2c1ec4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c1ec8:
    if (ctx->pc == 0x2C1EC8u) {
        ctx->pc = 0x2C1ECCu;
        goto label_2c1ecc;
    }
    ctx->pc = 0x2C1EC4u;
    {
        const bool branch_taken_0x2c1ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ec4) {
            ctx->pc = 0x2C1EE8u;
            goto label_2c1ee8;
        }
    }
    ctx->pc = 0x2C1ECCu;
label_2c1ecc:
    // 0x2c1ecc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1ed0:
    if (ctx->pc == 0x2C1ED0u) {
        ctx->pc = 0x2C1ED4u;
        goto label_2c1ed4;
    }
    ctx->pc = 0x2C1ECCu;
    {
        const bool branch_taken_0x2c1ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ecc) {
            ctx->pc = 0x2C1EE8u;
            goto label_2c1ee8;
        }
    }
    ctx->pc = 0x2C1ED4u;
label_2c1ed4:
    // 0x2c1ed4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c1ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c1ed8:
    // 0x2c1ed8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c1edc:
    if (ctx->pc == 0x2C1EDCu) {
        ctx->pc = 0x2C1EE0u;
        goto label_2c1ee0;
    }
    ctx->pc = 0x2C1ED8u;
    {
        const bool branch_taken_0x2c1ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1ed8) {
            ctx->pc = 0x2C1EE8u;
            goto label_2c1ee8;
        }
    }
    ctx->pc = 0x2C1EE0u;
label_2c1ee0:
    // 0x2c1ee0: 0xc0400a8  jal         func_1002A0
label_2c1ee4:
    if (ctx->pc == 0x2C1EE4u) {
        ctx->pc = 0x2C1EE8u;
        goto label_2c1ee8;
    }
    ctx->pc = 0x2C1EE0u;
    SET_GPR_U32(ctx, 31, 0x2C1EE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EE8u; }
        if (ctx->pc != 0x2C1EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1EE8u; }
        if (ctx->pc != 0x2C1EE8u) { return; }
    }
    ctx->pc = 0x2C1EE8u;
label_2c1ee8:
    // 0x2c1ee8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c1eec:
    // 0x2c1eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c1ef0:
    if (ctx->pc == 0x2C1EF0u) {
        ctx->pc = 0x2C1EF4u;
        goto label_2c1ef4;
    }
    ctx->pc = 0x2C1EECu;
    {
        const bool branch_taken_0x2c1eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1eec) {
            ctx->pc = 0x2C1F08u;
            goto label_2c1f08;
        }
    }
    ctx->pc = 0x2C1EF4u;
label_2c1ef4:
    // 0x2c1ef4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c1ef8:
    // 0x2c1ef8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c1efc:
    // 0x2c1efc: 0x246315b0  addiu       $v1, $v1, 0x15B0
    ctx->pc = 0x2c1efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5552));
label_2c1f00:
    // 0x2c1f00: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c1f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c1f04:
    // 0x2c1f04: 0xac400e20  sw          $zero, 0xE20($v0)
    ctx->pc = 0x2c1f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3616), GPR_U32(ctx, 0));
label_2c1f08:
    // 0x2c1f08: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c1f0c:
    if (ctx->pc == 0x2C1F0Cu) {
        ctx->pc = 0x2C1F0Cu;
            // 0x2c1f0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C1F10u;
        goto label_2c1f10;
    }
    ctx->pc = 0x2C1F08u;
    {
        const bool branch_taken_0x2c1f08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f08) {
            ctx->pc = 0x2C1F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F08u;
            // 0x2c1f0c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1F64u;
            goto label_2c1f64;
        }
    }
    ctx->pc = 0x2C1F10u;
label_2c1f10:
    // 0x2c1f10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c1f14:
    // 0x2c1f14: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c1f18:
    // 0x2c1f18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c1f1c:
    // 0x2c1f1c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c1f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c1f20:
    // 0x2c1f20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c1f24:
    if (ctx->pc == 0x2C1F24u) {
        ctx->pc = 0x2C1F24u;
            // 0x2c1f24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C1F28u;
        goto label_2c1f28;
    }
    ctx->pc = 0x2C1F20u;
    {
        const bool branch_taken_0x2c1f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f20) {
            ctx->pc = 0x2C1F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F20u;
            // 0x2c1f24: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1F3Cu;
            goto label_2c1f3c;
        }
    }
    ctx->pc = 0x2C1F28u;
label_2c1f28:
    // 0x2c1f28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c1f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c1f2c:
    // 0x2c1f2c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c1f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c1f30:
    // 0x2c1f30: 0x320f809  jalr        $t9
label_2c1f34:
    if (ctx->pc == 0x2C1F34u) {
        ctx->pc = 0x2C1F34u;
            // 0x2c1f34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C1F38u;
        goto label_2c1f38;
    }
    ctx->pc = 0x2C1F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C1F38u);
        ctx->pc = 0x2C1F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F30u;
            // 0x2c1f34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1F38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F38u; }
            if (ctx->pc != 0x2C1F38u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1F38u;
label_2c1f38:
    // 0x2c1f38: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c1f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c1f3c:
    // 0x2c1f3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c1f40:
    if (ctx->pc == 0x2C1F40u) {
        ctx->pc = 0x2C1F40u;
            // 0x2c1f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F44u;
        goto label_2c1f44;
    }
    ctx->pc = 0x2C1F3Cu;
    {
        const bool branch_taken_0x2c1f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1f3c) {
            ctx->pc = 0x2C1F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F3Cu;
            // 0x2c1f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1F58u;
            goto label_2c1f58;
        }
    }
    ctx->pc = 0x2C1F44u;
label_2c1f44:
    // 0x2c1f44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c1f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c1f48:
    // 0x2c1f48: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c1f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c1f4c:
    // 0x2c1f4c: 0x320f809  jalr        $t9
label_2c1f50:
    if (ctx->pc == 0x2C1F50u) {
        ctx->pc = 0x2C1F50u;
            // 0x2c1f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C1F54u;
        goto label_2c1f54;
    }
    ctx->pc = 0x2C1F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C1F54u);
        ctx->pc = 0x2C1F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F4Cu;
            // 0x2c1f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C1F54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F54u; }
            if (ctx->pc != 0x2C1F54u) { return; }
        }
        }
    }
    ctx->pc = 0x2C1F54u;
label_2c1f54:
    // 0x2c1f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c1f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f58:
    // 0x2c1f58: 0xc075bf8  jal         func_1D6FE0
label_2c1f5c:
    if (ctx->pc == 0x2C1F5Cu) {
        ctx->pc = 0x2C1F5Cu;
            // 0x2c1f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F60u;
        goto label_2c1f60;
    }
    ctx->pc = 0x2C1F58u;
    SET_GPR_U32(ctx, 31, 0x2C1F60u);
    ctx->pc = 0x2C1F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F58u;
            // 0x2c1f5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F60u; }
        if (ctx->pc != 0x2C1F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F60u; }
        if (ctx->pc != 0x2C1F60u) { return; }
    }
    ctx->pc = 0x2C1F60u;
label_2c1f60:
    // 0x2c1f60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c1f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c1f64:
    // 0x2c1f64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c1f64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c1f68:
    // 0x2c1f68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c1f6c:
    if (ctx->pc == 0x2C1F6Cu) {
        ctx->pc = 0x2C1F6Cu;
            // 0x2c1f6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F70u;
        goto label_2c1f70;
    }
    ctx->pc = 0x2C1F68u;
    {
        const bool branch_taken_0x2c1f68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c1f68) {
            ctx->pc = 0x2C1F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F68u;
            // 0x2c1f6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1F7Cu;
            goto label_2c1f7c;
        }
    }
    ctx->pc = 0x2C1F70u;
label_2c1f70:
    // 0x2c1f70: 0xc0400a8  jal         func_1002A0
label_2c1f74:
    if (ctx->pc == 0x2C1F74u) {
        ctx->pc = 0x2C1F74u;
            // 0x2c1f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C1F78u;
        goto label_2c1f78;
    }
    ctx->pc = 0x2C1F70u;
    SET_GPR_U32(ctx, 31, 0x2C1F78u);
    ctx->pc = 0x2C1F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F70u;
            // 0x2c1f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F78u; }
        if (ctx->pc != 0x2C1F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1F78u; }
        if (ctx->pc != 0x2C1F78u) { return; }
    }
    ctx->pc = 0x2C1F78u;
label_2c1f78:
    // 0x2c1f78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c1f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c1f7c:
    // 0x2c1f7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c1f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c1f80:
    // 0x2c1f80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1f84:
    // 0x2c1f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c1f88:
    // 0x2c1f88: 0x3e00008  jr          $ra
label_2c1f8c:
    if (ctx->pc == 0x2C1F8Cu) {
        ctx->pc = 0x2C1F8Cu;
            // 0x2c1f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C1F90u;
        goto label_fallthrough_0x2c1f88;
    }
    ctx->pc = 0x2C1F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1F88u;
            // 0x2c1f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c1f88:
    ctx->pc = 0x2C1F90u;
}
