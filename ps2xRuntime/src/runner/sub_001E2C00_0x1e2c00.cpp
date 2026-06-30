#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2C00
// Address: 0x1e2c00 - 0x1e2f30
void sub_001E2C00_0x1e2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2C00_0x1e2c00");
#endif

    switch (ctx->pc) {
        case 0x1e2c00u: goto label_1e2c00;
        case 0x1e2c04u: goto label_1e2c04;
        case 0x1e2c08u: goto label_1e2c08;
        case 0x1e2c0cu: goto label_1e2c0c;
        case 0x1e2c10u: goto label_1e2c10;
        case 0x1e2c14u: goto label_1e2c14;
        case 0x1e2c18u: goto label_1e2c18;
        case 0x1e2c1cu: goto label_1e2c1c;
        case 0x1e2c20u: goto label_1e2c20;
        case 0x1e2c24u: goto label_1e2c24;
        case 0x1e2c28u: goto label_1e2c28;
        case 0x1e2c2cu: goto label_1e2c2c;
        case 0x1e2c30u: goto label_1e2c30;
        case 0x1e2c34u: goto label_1e2c34;
        case 0x1e2c38u: goto label_1e2c38;
        case 0x1e2c3cu: goto label_1e2c3c;
        case 0x1e2c40u: goto label_1e2c40;
        case 0x1e2c44u: goto label_1e2c44;
        case 0x1e2c48u: goto label_1e2c48;
        case 0x1e2c4cu: goto label_1e2c4c;
        case 0x1e2c50u: goto label_1e2c50;
        case 0x1e2c54u: goto label_1e2c54;
        case 0x1e2c58u: goto label_1e2c58;
        case 0x1e2c5cu: goto label_1e2c5c;
        case 0x1e2c60u: goto label_1e2c60;
        case 0x1e2c64u: goto label_1e2c64;
        case 0x1e2c68u: goto label_1e2c68;
        case 0x1e2c6cu: goto label_1e2c6c;
        case 0x1e2c70u: goto label_1e2c70;
        case 0x1e2c74u: goto label_1e2c74;
        case 0x1e2c78u: goto label_1e2c78;
        case 0x1e2c7cu: goto label_1e2c7c;
        case 0x1e2c80u: goto label_1e2c80;
        case 0x1e2c84u: goto label_1e2c84;
        case 0x1e2c88u: goto label_1e2c88;
        case 0x1e2c8cu: goto label_1e2c8c;
        case 0x1e2c90u: goto label_1e2c90;
        case 0x1e2c94u: goto label_1e2c94;
        case 0x1e2c98u: goto label_1e2c98;
        case 0x1e2c9cu: goto label_1e2c9c;
        case 0x1e2ca0u: goto label_1e2ca0;
        case 0x1e2ca4u: goto label_1e2ca4;
        case 0x1e2ca8u: goto label_1e2ca8;
        case 0x1e2cacu: goto label_1e2cac;
        case 0x1e2cb0u: goto label_1e2cb0;
        case 0x1e2cb4u: goto label_1e2cb4;
        case 0x1e2cb8u: goto label_1e2cb8;
        case 0x1e2cbcu: goto label_1e2cbc;
        case 0x1e2cc0u: goto label_1e2cc0;
        case 0x1e2cc4u: goto label_1e2cc4;
        case 0x1e2cc8u: goto label_1e2cc8;
        case 0x1e2cccu: goto label_1e2ccc;
        case 0x1e2cd0u: goto label_1e2cd0;
        case 0x1e2cd4u: goto label_1e2cd4;
        case 0x1e2cd8u: goto label_1e2cd8;
        case 0x1e2cdcu: goto label_1e2cdc;
        case 0x1e2ce0u: goto label_1e2ce0;
        case 0x1e2ce4u: goto label_1e2ce4;
        case 0x1e2ce8u: goto label_1e2ce8;
        case 0x1e2cecu: goto label_1e2cec;
        case 0x1e2cf0u: goto label_1e2cf0;
        case 0x1e2cf4u: goto label_1e2cf4;
        case 0x1e2cf8u: goto label_1e2cf8;
        case 0x1e2cfcu: goto label_1e2cfc;
        case 0x1e2d00u: goto label_1e2d00;
        case 0x1e2d04u: goto label_1e2d04;
        case 0x1e2d08u: goto label_1e2d08;
        case 0x1e2d0cu: goto label_1e2d0c;
        case 0x1e2d10u: goto label_1e2d10;
        case 0x1e2d14u: goto label_1e2d14;
        case 0x1e2d18u: goto label_1e2d18;
        case 0x1e2d1cu: goto label_1e2d1c;
        case 0x1e2d20u: goto label_1e2d20;
        case 0x1e2d24u: goto label_1e2d24;
        case 0x1e2d28u: goto label_1e2d28;
        case 0x1e2d2cu: goto label_1e2d2c;
        case 0x1e2d30u: goto label_1e2d30;
        case 0x1e2d34u: goto label_1e2d34;
        case 0x1e2d38u: goto label_1e2d38;
        case 0x1e2d3cu: goto label_1e2d3c;
        case 0x1e2d40u: goto label_1e2d40;
        case 0x1e2d44u: goto label_1e2d44;
        case 0x1e2d48u: goto label_1e2d48;
        case 0x1e2d4cu: goto label_1e2d4c;
        case 0x1e2d50u: goto label_1e2d50;
        case 0x1e2d54u: goto label_1e2d54;
        case 0x1e2d58u: goto label_1e2d58;
        case 0x1e2d5cu: goto label_1e2d5c;
        case 0x1e2d60u: goto label_1e2d60;
        case 0x1e2d64u: goto label_1e2d64;
        case 0x1e2d68u: goto label_1e2d68;
        case 0x1e2d6cu: goto label_1e2d6c;
        case 0x1e2d70u: goto label_1e2d70;
        case 0x1e2d74u: goto label_1e2d74;
        case 0x1e2d78u: goto label_1e2d78;
        case 0x1e2d7cu: goto label_1e2d7c;
        case 0x1e2d80u: goto label_1e2d80;
        case 0x1e2d84u: goto label_1e2d84;
        case 0x1e2d88u: goto label_1e2d88;
        case 0x1e2d8cu: goto label_1e2d8c;
        case 0x1e2d90u: goto label_1e2d90;
        case 0x1e2d94u: goto label_1e2d94;
        case 0x1e2d98u: goto label_1e2d98;
        case 0x1e2d9cu: goto label_1e2d9c;
        case 0x1e2da0u: goto label_1e2da0;
        case 0x1e2da4u: goto label_1e2da4;
        case 0x1e2da8u: goto label_1e2da8;
        case 0x1e2dacu: goto label_1e2dac;
        case 0x1e2db0u: goto label_1e2db0;
        case 0x1e2db4u: goto label_1e2db4;
        case 0x1e2db8u: goto label_1e2db8;
        case 0x1e2dbcu: goto label_1e2dbc;
        case 0x1e2dc0u: goto label_1e2dc0;
        case 0x1e2dc4u: goto label_1e2dc4;
        case 0x1e2dc8u: goto label_1e2dc8;
        case 0x1e2dccu: goto label_1e2dcc;
        case 0x1e2dd0u: goto label_1e2dd0;
        case 0x1e2dd4u: goto label_1e2dd4;
        case 0x1e2dd8u: goto label_1e2dd8;
        case 0x1e2ddcu: goto label_1e2ddc;
        case 0x1e2de0u: goto label_1e2de0;
        case 0x1e2de4u: goto label_1e2de4;
        case 0x1e2de8u: goto label_1e2de8;
        case 0x1e2decu: goto label_1e2dec;
        case 0x1e2df0u: goto label_1e2df0;
        case 0x1e2df4u: goto label_1e2df4;
        case 0x1e2df8u: goto label_1e2df8;
        case 0x1e2dfcu: goto label_1e2dfc;
        case 0x1e2e00u: goto label_1e2e00;
        case 0x1e2e04u: goto label_1e2e04;
        case 0x1e2e08u: goto label_1e2e08;
        case 0x1e2e0cu: goto label_1e2e0c;
        case 0x1e2e10u: goto label_1e2e10;
        case 0x1e2e14u: goto label_1e2e14;
        case 0x1e2e18u: goto label_1e2e18;
        case 0x1e2e1cu: goto label_1e2e1c;
        case 0x1e2e20u: goto label_1e2e20;
        case 0x1e2e24u: goto label_1e2e24;
        case 0x1e2e28u: goto label_1e2e28;
        case 0x1e2e2cu: goto label_1e2e2c;
        case 0x1e2e30u: goto label_1e2e30;
        case 0x1e2e34u: goto label_1e2e34;
        case 0x1e2e38u: goto label_1e2e38;
        case 0x1e2e3cu: goto label_1e2e3c;
        case 0x1e2e40u: goto label_1e2e40;
        case 0x1e2e44u: goto label_1e2e44;
        case 0x1e2e48u: goto label_1e2e48;
        case 0x1e2e4cu: goto label_1e2e4c;
        case 0x1e2e50u: goto label_1e2e50;
        case 0x1e2e54u: goto label_1e2e54;
        case 0x1e2e58u: goto label_1e2e58;
        case 0x1e2e5cu: goto label_1e2e5c;
        case 0x1e2e60u: goto label_1e2e60;
        case 0x1e2e64u: goto label_1e2e64;
        case 0x1e2e68u: goto label_1e2e68;
        case 0x1e2e6cu: goto label_1e2e6c;
        case 0x1e2e70u: goto label_1e2e70;
        case 0x1e2e74u: goto label_1e2e74;
        case 0x1e2e78u: goto label_1e2e78;
        case 0x1e2e7cu: goto label_1e2e7c;
        case 0x1e2e80u: goto label_1e2e80;
        case 0x1e2e84u: goto label_1e2e84;
        case 0x1e2e88u: goto label_1e2e88;
        case 0x1e2e8cu: goto label_1e2e8c;
        case 0x1e2e90u: goto label_1e2e90;
        case 0x1e2e94u: goto label_1e2e94;
        case 0x1e2e98u: goto label_1e2e98;
        case 0x1e2e9cu: goto label_1e2e9c;
        case 0x1e2ea0u: goto label_1e2ea0;
        case 0x1e2ea4u: goto label_1e2ea4;
        case 0x1e2ea8u: goto label_1e2ea8;
        case 0x1e2eacu: goto label_1e2eac;
        case 0x1e2eb0u: goto label_1e2eb0;
        case 0x1e2eb4u: goto label_1e2eb4;
        case 0x1e2eb8u: goto label_1e2eb8;
        case 0x1e2ebcu: goto label_1e2ebc;
        case 0x1e2ec0u: goto label_1e2ec0;
        case 0x1e2ec4u: goto label_1e2ec4;
        case 0x1e2ec8u: goto label_1e2ec8;
        case 0x1e2eccu: goto label_1e2ecc;
        case 0x1e2ed0u: goto label_1e2ed0;
        case 0x1e2ed4u: goto label_1e2ed4;
        case 0x1e2ed8u: goto label_1e2ed8;
        case 0x1e2edcu: goto label_1e2edc;
        case 0x1e2ee0u: goto label_1e2ee0;
        case 0x1e2ee4u: goto label_1e2ee4;
        case 0x1e2ee8u: goto label_1e2ee8;
        case 0x1e2eecu: goto label_1e2eec;
        case 0x1e2ef0u: goto label_1e2ef0;
        case 0x1e2ef4u: goto label_1e2ef4;
        case 0x1e2ef8u: goto label_1e2ef8;
        case 0x1e2efcu: goto label_1e2efc;
        case 0x1e2f00u: goto label_1e2f00;
        case 0x1e2f04u: goto label_1e2f04;
        case 0x1e2f08u: goto label_1e2f08;
        case 0x1e2f0cu: goto label_1e2f0c;
        case 0x1e2f10u: goto label_1e2f10;
        case 0x1e2f14u: goto label_1e2f14;
        case 0x1e2f18u: goto label_1e2f18;
        case 0x1e2f1cu: goto label_1e2f1c;
        case 0x1e2f20u: goto label_1e2f20;
        case 0x1e2f24u: goto label_1e2f24;
        case 0x1e2f28u: goto label_1e2f28;
        case 0x1e2f2cu: goto label_1e2f2c;
        default: break;
    }

    ctx->pc = 0x1e2c00u;

label_1e2c00:
    // 0x1e2c00: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1e2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1e2c04:
    // 0x1e2c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e2c08:
    // 0x1e2c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e2c0c:
    // 0x1e2c0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e2c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2c10:
    // 0x1e2c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2c14:
    // 0x1e2c14: 0xc08d250  jal         func_234940
label_1e2c18:
    if (ctx->pc == 0x1E2C18u) {
        ctx->pc = 0x1E2C18u;
            // 0x1e2c18: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E2C1Cu;
        goto label_1e2c1c;
    }
    ctx->pc = 0x1E2C14u;
    SET_GPR_U32(ctx, 31, 0x1E2C1Cu);
    ctx->pc = 0x1E2C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C14u;
            // 0x1e2c18: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234940u;
    if (runtime->hasFunction(0x234940u)) {
        auto targetFn = runtime->lookupFunction(0x234940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C1Cu; }
        if (ctx->pc != 0x1E2C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234940_0x234940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C1Cu; }
        if (ctx->pc != 0x1E2C1Cu) { return; }
    }
    ctx->pc = 0x1E2C1Cu;
label_1e2c1c:
    // 0x1e2c1c: 0x3c02c11c  lui         $v0, 0xC11C
    ctx->pc = 0x1e2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49436 << 16));
label_1e2c20:
    // 0x1e2c20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e2c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e2c24:
    // 0x1e2c24: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e2c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e2c28:
    // 0x1e2c28: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1e2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1e2c2c:
    // 0x1e2c2c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1e2c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1e2c30:
    // 0x1e2c30: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1e2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_1e2c34:
    // 0x1e2c34: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1e2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_1e2c38:
    // 0x1e2c38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e2c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1e2c3c:
    // 0x1e2c3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e2c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e2c40:
    // 0x1e2c40: 0xc08d2b0  jal         func_234AC0
label_1e2c44:
    if (ctx->pc == 0x1E2C44u) {
        ctx->pc = 0x1E2C44u;
            // 0x1e2c44: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->pc = 0x1E2C48u;
        goto label_1e2c48;
    }
    ctx->pc = 0x1E2C40u;
    SET_GPR_U32(ctx, 31, 0x1E2C48u);
    ctx->pc = 0x1E2C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C40u;
            // 0x1e2c44: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234AC0u;
    if (runtime->hasFunction(0x234AC0u)) {
        auto targetFn = runtime->lookupFunction(0x234AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C48u; }
        if (ctx->pc != 0x1E2C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234AC0_0x234ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C48u; }
        if (ctx->pc != 0x1E2C48u) { return; }
    }
    ctx->pc = 0x1E2C48u;
label_1e2c48:
    // 0x1e2c48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e2c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e2c4c:
    // 0x1e2c4c: 0xc08d2c4  jal         func_234B10
label_1e2c50:
    if (ctx->pc == 0x1E2C50u) {
        ctx->pc = 0x1E2C50u;
            // 0x1e2c50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E2C54u;
        goto label_1e2c54;
    }
    ctx->pc = 0x1E2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E2C54u);
    ctx->pc = 0x1E2C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C4Cu;
            // 0x1e2c50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234B10u;
    if (runtime->hasFunction(0x234B10u)) {
        auto targetFn = runtime->lookupFunction(0x234B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C54u; }
        if (ctx->pc != 0x1E2C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234B10_0x234b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C54u; }
        if (ctx->pc != 0x1E2C54u) { return; }
    }
    ctx->pc = 0x1E2C54u;
label_1e2c54:
    // 0x1e2c54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e2c58:
    // 0x1e2c58: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_1e2c5c:
    // 0x1e2c5c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e2c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e2c60:
    // 0x1e2c60: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e2c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_1e2c64:
    // 0x1e2c64: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1e2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_1e2c68:
    // 0x1e2c68: 0x24050330  addiu       $a1, $zero, 0x330
    ctx->pc = 0x1e2c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
label_1e2c6c:
    // 0x1e2c6c: 0xc0a7a88  jal         func_29EA20
label_1e2c70:
    if (ctx->pc == 0x1E2C70u) {
        ctx->pc = 0x1E2C70u;
            // 0x1e2c70: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x1E2C74u;
        goto label_1e2c74;
    }
    ctx->pc = 0x1E2C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E2C74u);
    ctx->pc = 0x1E2C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C6Cu;
            // 0x1e2c70: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C74u; }
        if (ctx->pc != 0x1E2C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C74u; }
        if (ctx->pc != 0x1E2C74u) { return; }
    }
    ctx->pc = 0x1E2C74u;
label_1e2c74:
    // 0x1e2c74: 0x24030330  addiu       $v1, $zero, 0x330
    ctx->pc = 0x1e2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
label_1e2c78:
    // 0x1e2c78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2c7c:
    // 0x1e2c7c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1e2c80:
    if (ctx->pc == 0x1E2C80u) {
        ctx->pc = 0x1E2C80u;
            // 0x1e2c80: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1E2C84u;
        goto label_1e2c84;
    }
    ctx->pc = 0x1E2C7Cu;
    {
        const bool branch_taken_0x1e2c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C7Cu;
            // 0x1e2c80: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c7c) {
            ctx->pc = 0x1E2C94u;
            goto label_1e2c94;
        }
    }
    ctx->pc = 0x1E2C84u;
label_1e2c84:
    // 0x1e2c84: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e2c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e2c88:
    // 0x1e2c88: 0xc08cc8c  jal         func_233230
label_1e2c8c:
    if (ctx->pc == 0x1E2C8Cu) {
        ctx->pc = 0x1E2C8Cu;
            // 0x1e2c8c: 0x34069e98  ori         $a2, $zero, 0x9E98 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40600);
        ctx->pc = 0x1E2C90u;
        goto label_1e2c90;
    }
    ctx->pc = 0x1E2C88u;
    SET_GPR_U32(ctx, 31, 0x1E2C90u);
    ctx->pc = 0x1E2C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C88u;
            // 0x1e2c8c: 0x34069e98  ori         $a2, $zero, 0x9E98 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40600);
        ctx->in_delay_slot = false;
    ctx->pc = 0x233230u;
    if (runtime->hasFunction(0x233230u)) {
        auto targetFn = runtime->lookupFunction(0x233230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C90u; }
        if (ctx->pc != 0x1E2C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233230_0x233230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2C90u; }
        if (ctx->pc != 0x1E2C90u) { return; }
    }
    ctx->pc = 0x1E2C90u;
label_1e2c90:
    // 0x1e2c90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2c94:
    // 0x1e2c94: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1e2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_1e2c98:
    // 0x1e2c98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e2c9c:
    // 0x1e2c9c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e2ca0:
    // 0x1e2ca0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1e2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e2ca4:
    // 0x1e2ca4: 0xc0a7a88  jal         func_29EA20
label_1e2ca8:
    if (ctx->pc == 0x1E2CA8u) {
        ctx->pc = 0x1E2CA8u;
            // 0x1e2ca8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x1E2CACu;
        goto label_1e2cac;
    }
    ctx->pc = 0x1E2CA4u;
    SET_GPR_U32(ctx, 31, 0x1E2CACu);
    ctx->pc = 0x1E2CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2CA4u;
            // 0x1e2ca8: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2CACu; }
        if (ctx->pc != 0x1E2CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2CACu; }
        if (ctx->pc != 0x1E2CACu) { return; }
    }
    ctx->pc = 0x1E2CACu;
label_1e2cac:
    // 0x1e2cac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1e2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e2cb0:
    // 0x1e2cb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e2cb4:
    // 0x1e2cb4: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_1e2cb8:
    if (ctx->pc == 0x1E2CB8u) {
        ctx->pc = 0x1E2CB8u;
            // 0x1e2cb8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1E2CBCu;
        goto label_1e2cbc;
    }
    ctx->pc = 0x1E2CB4u;
    {
        const bool branch_taken_0x1e2cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2CB4u;
            // 0x1e2cb8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cb4) {
            ctx->pc = 0x1E2D88u;
            goto label_1e2d88;
        }
    }
    ctx->pc = 0x1E2CBCu;
label_1e2cbc:
    // 0x1e2cbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2cc0:
    // 0x1e2cc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2cc4:
    // 0x1e2cc4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1e2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1e2cc8:
    // 0x1e2cc8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1e2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1e2ccc:
    // 0x1e2ccc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e2cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1e2cd0:
    // 0x1e2cd0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e2cd4:
    // 0x1e2cd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e2cd8:
    // 0x1e2cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2cdc:
    // 0x1e2cdc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2ce0:
    // 0x1e2ce0: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1e2ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_1e2ce4:
    // 0x1e2ce4: 0x2442d410  addiu       $v0, $v0, -0x2BF0
    ctx->pc = 0x1e2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956048));
label_1e2ce8:
    // 0x1e2ce8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2cec:
    // 0x1e2cec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e2cf0:
    // 0x1e2cf0: 0x2463d400  addiu       $v1, $v1, -0x2C00
    ctx->pc = 0x1e2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956032));
label_1e2cf4:
    // 0x1e2cf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2cf8:
    // 0x1e2cf8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e2cfc:
    // 0x1e2cfc: 0x2442d3f0  addiu       $v0, $v0, -0x2C10
    ctx->pc = 0x1e2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956016));
label_1e2d00:
    // 0x1e2d00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2d04:
    // 0x1e2d04: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1e2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1e2d08:
    // 0x1e2d08: 0x2463d3e0  addiu       $v1, $v1, -0x2C20
    ctx->pc = 0x1e2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956000));
label_1e2d0c:
    // 0x1e2d0c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2d10:
    // 0x1e2d10: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1e2d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1e2d14:
    // 0x1e2d14: 0x2442d380  addiu       $v0, $v0, -0x2C80
    ctx->pc = 0x1e2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955904));
label_1e2d18:
    // 0x1e2d18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2d1c:
    // 0x1e2d1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e2d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e2d20:
    // 0x1e2d20: 0x2463d390  addiu       $v1, $v1, -0x2C70
    ctx->pc = 0x1e2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955920));
label_1e2d24:
    // 0x1e2d24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2d28:
    // 0x1e2d28: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1e2d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1e2d2c:
    // 0x1e2d2c: 0x2442d3a0  addiu       $v0, $v0, -0x2C60
    ctx->pc = 0x1e2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955936));
label_1e2d30:
    // 0x1e2d30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2d34:
    // 0x1e2d34: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e2d38:
    // 0x1e2d38: 0x2463d3b0  addiu       $v1, $v1, -0x2C50
    ctx->pc = 0x1e2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955952));
label_1e2d3c:
    // 0x1e2d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2d40:
    // 0x1e2d40: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1e2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1e2d44:
    // 0x1e2d44: 0x2442d3c0  addiu       $v0, $v0, -0x2C40
    ctx->pc = 0x1e2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955968));
label_1e2d48:
    // 0x1e2d48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2d4c:
    // 0x1e2d4c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1e2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1e2d50:
    // 0x1e2d50: 0x24635750  addiu       $v1, $v1, 0x5750
    ctx->pc = 0x1e2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22352));
label_1e2d54:
    // 0x1e2d54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2d58:
    // 0x1e2d58: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1e2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1e2d5c:
    // 0x1e2d5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e2d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1e2d60:
    // 0x1e2d60: 0x24425760  addiu       $v0, $v0, 0x5760
    ctx->pc = 0x1e2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
label_1e2d64:
    // 0x1e2d64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2d68:
    // 0x1e2d68: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e2d6c:
    // 0x1e2d6c: 0x24845770  addiu       $a0, $a0, 0x5770
    ctx->pc = 0x1e2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22384));
label_1e2d70:
    // 0x1e2d70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2d74:
    // 0x1e2d74: 0x24635780  addiu       $v1, $v1, 0x5780
    ctx->pc = 0x1e2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22400));
label_1e2d78:
    // 0x1e2d78: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1e2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_1e2d7c:
    // 0x1e2d7c: 0x24425790  addiu       $v0, $v0, 0x5790
    ctx->pc = 0x1e2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22416));
label_1e2d80:
    // 0x1e2d80: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1e2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1e2d84:
    // 0x1e2d84: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1e2d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1e2d88:
    // 0x1e2d88: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1e2d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e2d8c:
    // 0x1e2d8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2d90:
    // 0x1e2d90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2d94:
    // 0x1e2d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2d98:
    // 0x1e2d98: 0xc08d134  jal         func_2344D0
label_1e2d9c:
    if (ctx->pc == 0x1E2D9Cu) {
        ctx->pc = 0x1E2D9Cu;
            // 0x1e2d9c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DA0u;
        goto label_1e2da0;
    }
    ctx->pc = 0x1E2D98u;
    SET_GPR_U32(ctx, 31, 0x1E2DA0u);
    ctx->pc = 0x1E2D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D98u;
            // 0x1e2d9c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2344D0u;
    if (runtime->hasFunction(0x2344D0u)) {
        auto targetFn = runtime->lookupFunction(0x2344D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DA0u; }
        if (ctx->pc != 0x1E2DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002344D0_0x2344d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DA0u; }
        if (ctx->pc != 0x1E2DA0u) { return; }
    }
    ctx->pc = 0x1E2DA0u;
label_1e2da0:
    // 0x1e2da0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1e2da0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1e2da4:
    // 0x1e2da4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1e2da8:
    if (ctx->pc == 0x1E2DA8u) {
        ctx->pc = 0x1E2DA8u;
            // 0x1e2da8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1E2DACu;
        goto label_1e2dac;
    }
    ctx->pc = 0x1E2DA4u;
    {
        const bool branch_taken_0x1e2da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2da4) {
            ctx->pc = 0x1E2DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DA4u;
            // 0x1e2da8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2DE8u;
            goto label_1e2de8;
        }
    }
    ctx->pc = 0x1E2DACu;
label_1e2dac:
    // 0x1e2dac: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x1e2dacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_1e2db0:
    // 0x1e2db0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e2db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e2db4:
    // 0x1e2db4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1e2db4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_1e2db8:
    // 0x1e2db8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e2db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1e2dbc:
    // 0x1e2dbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2dbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e2dc0:
    // 0x1e2dc0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1e2dc4:
    if (ctx->pc == 0x1E2DC4u) {
        ctx->pc = 0x1E2DC8u;
        goto label_1e2dc8;
    }
    ctx->pc = 0x1E2DC0u;
    {
        const bool branch_taken_0x1e2dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2dc0) {
            ctx->pc = 0x1E2DE4u;
            goto label_1e2de4;
        }
    }
    ctx->pc = 0x1E2DC8u;
label_1e2dc8:
    // 0x1e2dc8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1e2dcc:
    if (ctx->pc == 0x1E2DCCu) {
        ctx->pc = 0x1E2DD0u;
        goto label_1e2dd0;
    }
    ctx->pc = 0x1E2DC8u;
    {
        const bool branch_taken_0x1e2dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2dc8) {
            ctx->pc = 0x1E2DE4u;
            goto label_1e2de4;
        }
    }
    ctx->pc = 0x1E2DD0u;
label_1e2dd0:
    // 0x1e2dd0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e2dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e2dd4:
    // 0x1e2dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2dd8:
    // 0x1e2dd8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e2dd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e2ddc:
    // 0x1e2ddc: 0x320f809  jalr        $t9
label_1e2de0:
    if (ctx->pc == 0x1E2DE0u) {
        ctx->pc = 0x1E2DE0u;
            // 0x1e2de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E2DE4u;
        goto label_1e2de4;
    }
    ctx->pc = 0x1E2DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2DE4u);
        ctx->pc = 0x1E2DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DDCu;
            // 0x1e2de0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E2DE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DE4u; }
            if (ctx->pc != 0x1E2DE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E2DE4u;
label_1e2de4:
    // 0x1e2de4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1e2de8:
    // 0x1e2de8: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x1e2de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1e2dec:
    // 0x1e2dec: 0xc078c50  jal         func_1E3140
label_1e2df0:
    if (ctx->pc == 0x1E2DF0u) {
        ctx->pc = 0x1E2DF0u;
            // 0x1e2df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DF4u;
        goto label_1e2df4;
    }
    ctx->pc = 0x1E2DECu;
    SET_GPR_U32(ctx, 31, 0x1E2DF4u);
    ctx->pc = 0x1E2DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DECu;
            // 0x1e2df0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3140u;
    if (runtime->hasFunction(0x1E3140u)) {
        auto targetFn = runtime->lookupFunction(0x1E3140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DF4u; }
        if (ctx->pc != 0x1E2DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3140_0x1e3140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2DF4u; }
        if (ctx->pc != 0x1E2DF4u) { return; }
    }
    ctx->pc = 0x1E2DF4u;
label_1e2df4:
    // 0x1e2df4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2df8:
    // 0x1e2df8: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x1e2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_1e2dfc:
    // 0x1e2dfc: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1e2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1e2e00:
    // 0x1e2e00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2e04:
    // 0x1e2e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2e08:
    // 0x1e2e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2e0c:
    // 0x1e2e0c: 0x3e00008  jr          $ra
label_1e2e10:
    if (ctx->pc == 0x1E2E10u) {
        ctx->pc = 0x1E2E10u;
            // 0x1e2e10: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1E2E14u;
        goto label_1e2e14;
    }
    ctx->pc = 0x1E2E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E0Cu;
            // 0x1e2e10: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2E14u;
label_1e2e14:
    // 0x1e2e14: 0x0  nop
    ctx->pc = 0x1e2e14u;
    // NOP
label_1e2e18:
    // 0x1e2e18: 0x0  nop
    ctx->pc = 0x1e2e18u;
    // NOP
label_1e2e1c:
    // 0x1e2e1c: 0x0  nop
    ctx->pc = 0x1e2e1cu;
    // NOP
label_1e2e20:
    // 0x1e2e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e2e24:
    // 0x1e2e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e2e28:
    // 0x1e2e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e2e2c:
    // 0x1e2e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2e30:
    // 0x1e2e30: 0x5200003b  beql        $s0, $zero, . + 4 + (0x3B << 2)
label_1e2e34:
    if (ctx->pc == 0x1E2E34u) {
        ctx->pc = 0x1E2E34u;
            // 0x1e2e34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E38u;
        goto label_1e2e38;
    }
    ctx->pc = 0x1E2E30u;
    {
        const bool branch_taken_0x1e2e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2e30) {
            ctx->pc = 0x1E2E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E30u;
            // 0x1e2e34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2F20u;
            goto label_1e2f20;
        }
    }
    ctx->pc = 0x1E2E38u;
label_1e2e38:
    // 0x1e2e38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2e3c:
    // 0x1e2e3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2e40:
    // 0x1e2e40: 0x2463d380  addiu       $v1, $v1, -0x2C80
    ctx->pc = 0x1e2e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955904));
label_1e2e44:
    // 0x1e2e44: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x1e2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
label_1e2e48:
    // 0x1e2e48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e2e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1e2e4c:
    // 0x1e2e4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2e50:
    // 0x1e2e50: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e2e54:
    // 0x1e2e54: 0x2463d3a0  addiu       $v1, $v1, -0x2C60
    ctx->pc = 0x1e2e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955936));
label_1e2e58:
    // 0x1e2e58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2e5c:
    // 0x1e2e5c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e2e60:
    // 0x1e2e60: 0x2442d3b0  addiu       $v0, $v0, -0x2C50
    ctx->pc = 0x1e2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955952));
label_1e2e64:
    // 0x1e2e64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e2e68:
    // 0x1e2e68: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1e2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1e2e6c:
    // 0x1e2e6c: 0x2463d3c0  addiu       $v1, $v1, -0x2C40
    ctx->pc = 0x1e2e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955968));
label_1e2e70:
    // 0x1e2e70: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1e2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1e2e74:
    // 0x1e2e74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e2e78:
    if (ctx->pc == 0x1E2E78u) {
        ctx->pc = 0x1E2E78u;
            // 0x1e2e78: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x1E2E7Cu;
        goto label_1e2e7c;
    }
    ctx->pc = 0x1E2E74u;
    {
        const bool branch_taken_0x1e2e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E74u;
            // 0x1e2e78: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e74) {
            ctx->pc = 0x1E2E88u;
            goto label_1e2e88;
        }
    }
    ctx->pc = 0x1E2E7Cu;
label_1e2e7c:
    // 0x1e2e7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2e80:
    // 0x1e2e80: 0x2442d3e0  addiu       $v0, $v0, -0x2C20
    ctx->pc = 0x1e2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956000));
label_1e2e84:
    // 0x1e2e84: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1e2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1e2e88:
    // 0x1e2e88: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e2e8c:
    // 0x1e2e8c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1e2e90:
    if (ctx->pc == 0x1E2E90u) {
        ctx->pc = 0x1E2E90u;
            // 0x1e2e90: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x1E2E94u;
        goto label_1e2e94;
    }
    ctx->pc = 0x1E2E8Cu;
    {
        const bool branch_taken_0x1e2e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2e8c) {
            ctx->pc = 0x1E2E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E8Cu;
            // 0x1e2e90: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2EA4u;
            goto label_1e2ea4;
        }
    }
    ctx->pc = 0x1E2E94u;
label_1e2e94:
    // 0x1e2e94: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2e98:
    // 0x1e2e98: 0x2442d3f0  addiu       $v0, $v0, -0x2C10
    ctx->pc = 0x1e2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956016));
label_1e2e9c:
    // 0x1e2e9c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1e2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1e2ea0:
    // 0x1e2ea0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1e2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1e2ea4:
    // 0x1e2ea4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1e2ea8:
    if (ctx->pc == 0x1E2EA8u) {
        ctx->pc = 0x1E2EA8u;
            // 0x1e2ea8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1E2EACu;
        goto label_1e2eac;
    }
    ctx->pc = 0x1E2EA4u;
    {
        const bool branch_taken_0x1e2ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ea4) {
            ctx->pc = 0x1E2EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2EA4u;
            // 0x1e2ea8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2EBCu;
            goto label_1e2ebc;
        }
    }
    ctx->pc = 0x1E2EACu;
label_1e2eac:
    // 0x1e2eac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2eb0:
    // 0x1e2eb0: 0x2442d400  addiu       $v0, $v0, -0x2C00
    ctx->pc = 0x1e2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956032));
label_1e2eb4:
    // 0x1e2eb4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1e2eb8:
    // 0x1e2eb8: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1e2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1e2ebc:
    // 0x1e2ebc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e2ec0:
    if (ctx->pc == 0x1E2EC0u) {
        ctx->pc = 0x1E2EC4u;
        goto label_1e2ec4;
    }
    ctx->pc = 0x1E2EBCu;
    {
        const bool branch_taken_0x1e2ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ebc) {
            ctx->pc = 0x1E2ED0u;
            goto label_1e2ed0;
        }
    }
    ctx->pc = 0x1E2EC4u;
label_1e2ec4:
    // 0x1e2ec4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2ec8:
    // 0x1e2ec8: 0x2442d410  addiu       $v0, $v0, -0x2BF0
    ctx->pc = 0x1e2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956048));
label_1e2ecc:
    // 0x1e2ecc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e2ed0:
    // 0x1e2ed0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_1e2ed4:
    if (ctx->pc == 0x1E2ED4u) {
        ctx->pc = 0x1E2ED4u;
            // 0x1e2ed4: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x1E2ED8u;
        goto label_1e2ed8;
    }
    ctx->pc = 0x1E2ED0u;
    {
        const bool branch_taken_0x1e2ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ed0) {
            ctx->pc = 0x1E2ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2ED0u;
            // 0x1e2ed4: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2EF8u;
            goto label_1e2ef8;
        }
    }
    ctx->pc = 0x1E2ED8u;
label_1e2ed8:
    // 0x1e2ed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2edc:
    // 0x1e2edc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e2ee0:
    // 0x1e2ee0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1e2ee4:
    if (ctx->pc == 0x1E2EE4u) {
        ctx->pc = 0x1E2EE4u;
            // 0x1e2ee4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E2EE8u;
        goto label_1e2ee8;
    }
    ctx->pc = 0x1E2EE0u;
    {
        const bool branch_taken_0x1e2ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2EE0u;
            // 0x1e2ee4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ee0) {
            ctx->pc = 0x1E2EF4u;
            goto label_1e2ef4;
        }
    }
    ctx->pc = 0x1E2EE8u;
label_1e2ee8:
    // 0x1e2ee8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e2eec:
    // 0x1e2eec: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e2ef0:
    // 0x1e2ef0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e2ef4:
    // 0x1e2ef4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e2ef8:
    // 0x1e2ef8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2ef8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e2efc:
    // 0x1e2efc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e2f00:
    if (ctx->pc == 0x1E2F00u) {
        ctx->pc = 0x1E2F04u;
        goto label_1e2f04;
    }
    ctx->pc = 0x1E2EFCu;
    {
        const bool branch_taken_0x1e2efc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e2efc) {
            ctx->pc = 0x1E2F1Cu;
            goto label_1e2f1c;
        }
    }
    ctx->pc = 0x1E2F04u;
label_1e2f04:
    // 0x1e2f04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e2f08:
    // 0x1e2f08: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1e2f08u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1e2f0c:
    // 0x1e2f0c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e2f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e2f10:
    // 0x1e2f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f14:
    // 0x1e2f14: 0xc0a7ab4  jal         func_29EAD0
label_1e2f18:
    if (ctx->pc == 0x1E2F18u) {
        ctx->pc = 0x1E2F18u;
            // 0x1e2f18: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x1E2F1Cu;
        goto label_1e2f1c;
    }
    ctx->pc = 0x1E2F14u;
    SET_GPR_U32(ctx, 31, 0x1E2F1Cu);
    ctx->pc = 0x1E2F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F14u;
            // 0x1e2f18: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F1Cu; }
        if (ctx->pc != 0x1E2F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F1Cu; }
        if (ctx->pc != 0x1E2F1Cu) { return; }
    }
    ctx->pc = 0x1E2F1Cu;
label_1e2f1c:
    // 0x1e2f1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f20:
    // 0x1e2f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2f24:
    // 0x1e2f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2f28:
    // 0x1e2f28: 0x3e00008  jr          $ra
label_1e2f2c:
    if (ctx->pc == 0x1E2F2Cu) {
        ctx->pc = 0x1E2F2Cu;
            // 0x1e2f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E2F30u;
        goto label_fallthrough_0x1e2f28;
    }
    ctx->pc = 0x1E2F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F28u;
            // 0x1e2f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e2f28:
    ctx->pc = 0x1E2F30u;
}
