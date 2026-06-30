#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5C70
// Address: 0x4a5c70 - 0x4a5fb0
void sub_004A5C70_0x4a5c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5C70_0x4a5c70");
#endif

    switch (ctx->pc) {
        case 0x4a5c70u: goto label_4a5c70;
        case 0x4a5c74u: goto label_4a5c74;
        case 0x4a5c78u: goto label_4a5c78;
        case 0x4a5c7cu: goto label_4a5c7c;
        case 0x4a5c80u: goto label_4a5c80;
        case 0x4a5c84u: goto label_4a5c84;
        case 0x4a5c88u: goto label_4a5c88;
        case 0x4a5c8cu: goto label_4a5c8c;
        case 0x4a5c90u: goto label_4a5c90;
        case 0x4a5c94u: goto label_4a5c94;
        case 0x4a5c98u: goto label_4a5c98;
        case 0x4a5c9cu: goto label_4a5c9c;
        case 0x4a5ca0u: goto label_4a5ca0;
        case 0x4a5ca4u: goto label_4a5ca4;
        case 0x4a5ca8u: goto label_4a5ca8;
        case 0x4a5cacu: goto label_4a5cac;
        case 0x4a5cb0u: goto label_4a5cb0;
        case 0x4a5cb4u: goto label_4a5cb4;
        case 0x4a5cb8u: goto label_4a5cb8;
        case 0x4a5cbcu: goto label_4a5cbc;
        case 0x4a5cc0u: goto label_4a5cc0;
        case 0x4a5cc4u: goto label_4a5cc4;
        case 0x4a5cc8u: goto label_4a5cc8;
        case 0x4a5cccu: goto label_4a5ccc;
        case 0x4a5cd0u: goto label_4a5cd0;
        case 0x4a5cd4u: goto label_4a5cd4;
        case 0x4a5cd8u: goto label_4a5cd8;
        case 0x4a5cdcu: goto label_4a5cdc;
        case 0x4a5ce0u: goto label_4a5ce0;
        case 0x4a5ce4u: goto label_4a5ce4;
        case 0x4a5ce8u: goto label_4a5ce8;
        case 0x4a5cecu: goto label_4a5cec;
        case 0x4a5cf0u: goto label_4a5cf0;
        case 0x4a5cf4u: goto label_4a5cf4;
        case 0x4a5cf8u: goto label_4a5cf8;
        case 0x4a5cfcu: goto label_4a5cfc;
        case 0x4a5d00u: goto label_4a5d00;
        case 0x4a5d04u: goto label_4a5d04;
        case 0x4a5d08u: goto label_4a5d08;
        case 0x4a5d0cu: goto label_4a5d0c;
        case 0x4a5d10u: goto label_4a5d10;
        case 0x4a5d14u: goto label_4a5d14;
        case 0x4a5d18u: goto label_4a5d18;
        case 0x4a5d1cu: goto label_4a5d1c;
        case 0x4a5d20u: goto label_4a5d20;
        case 0x4a5d24u: goto label_4a5d24;
        case 0x4a5d28u: goto label_4a5d28;
        case 0x4a5d2cu: goto label_4a5d2c;
        case 0x4a5d30u: goto label_4a5d30;
        case 0x4a5d34u: goto label_4a5d34;
        case 0x4a5d38u: goto label_4a5d38;
        case 0x4a5d3cu: goto label_4a5d3c;
        case 0x4a5d40u: goto label_4a5d40;
        case 0x4a5d44u: goto label_4a5d44;
        case 0x4a5d48u: goto label_4a5d48;
        case 0x4a5d4cu: goto label_4a5d4c;
        case 0x4a5d50u: goto label_4a5d50;
        case 0x4a5d54u: goto label_4a5d54;
        case 0x4a5d58u: goto label_4a5d58;
        case 0x4a5d5cu: goto label_4a5d5c;
        case 0x4a5d60u: goto label_4a5d60;
        case 0x4a5d64u: goto label_4a5d64;
        case 0x4a5d68u: goto label_4a5d68;
        case 0x4a5d6cu: goto label_4a5d6c;
        case 0x4a5d70u: goto label_4a5d70;
        case 0x4a5d74u: goto label_4a5d74;
        case 0x4a5d78u: goto label_4a5d78;
        case 0x4a5d7cu: goto label_4a5d7c;
        case 0x4a5d80u: goto label_4a5d80;
        case 0x4a5d84u: goto label_4a5d84;
        case 0x4a5d88u: goto label_4a5d88;
        case 0x4a5d8cu: goto label_4a5d8c;
        case 0x4a5d90u: goto label_4a5d90;
        case 0x4a5d94u: goto label_4a5d94;
        case 0x4a5d98u: goto label_4a5d98;
        case 0x4a5d9cu: goto label_4a5d9c;
        case 0x4a5da0u: goto label_4a5da0;
        case 0x4a5da4u: goto label_4a5da4;
        case 0x4a5da8u: goto label_4a5da8;
        case 0x4a5dacu: goto label_4a5dac;
        case 0x4a5db0u: goto label_4a5db0;
        case 0x4a5db4u: goto label_4a5db4;
        case 0x4a5db8u: goto label_4a5db8;
        case 0x4a5dbcu: goto label_4a5dbc;
        case 0x4a5dc0u: goto label_4a5dc0;
        case 0x4a5dc4u: goto label_4a5dc4;
        case 0x4a5dc8u: goto label_4a5dc8;
        case 0x4a5dccu: goto label_4a5dcc;
        case 0x4a5dd0u: goto label_4a5dd0;
        case 0x4a5dd4u: goto label_4a5dd4;
        case 0x4a5dd8u: goto label_4a5dd8;
        case 0x4a5ddcu: goto label_4a5ddc;
        case 0x4a5de0u: goto label_4a5de0;
        case 0x4a5de4u: goto label_4a5de4;
        case 0x4a5de8u: goto label_4a5de8;
        case 0x4a5decu: goto label_4a5dec;
        case 0x4a5df0u: goto label_4a5df0;
        case 0x4a5df4u: goto label_4a5df4;
        case 0x4a5df8u: goto label_4a5df8;
        case 0x4a5dfcu: goto label_4a5dfc;
        case 0x4a5e00u: goto label_4a5e00;
        case 0x4a5e04u: goto label_4a5e04;
        case 0x4a5e08u: goto label_4a5e08;
        case 0x4a5e0cu: goto label_4a5e0c;
        case 0x4a5e10u: goto label_4a5e10;
        case 0x4a5e14u: goto label_4a5e14;
        case 0x4a5e18u: goto label_4a5e18;
        case 0x4a5e1cu: goto label_4a5e1c;
        case 0x4a5e20u: goto label_4a5e20;
        case 0x4a5e24u: goto label_4a5e24;
        case 0x4a5e28u: goto label_4a5e28;
        case 0x4a5e2cu: goto label_4a5e2c;
        case 0x4a5e30u: goto label_4a5e30;
        case 0x4a5e34u: goto label_4a5e34;
        case 0x4a5e38u: goto label_4a5e38;
        case 0x4a5e3cu: goto label_4a5e3c;
        case 0x4a5e40u: goto label_4a5e40;
        case 0x4a5e44u: goto label_4a5e44;
        case 0x4a5e48u: goto label_4a5e48;
        case 0x4a5e4cu: goto label_4a5e4c;
        case 0x4a5e50u: goto label_4a5e50;
        case 0x4a5e54u: goto label_4a5e54;
        case 0x4a5e58u: goto label_4a5e58;
        case 0x4a5e5cu: goto label_4a5e5c;
        case 0x4a5e60u: goto label_4a5e60;
        case 0x4a5e64u: goto label_4a5e64;
        case 0x4a5e68u: goto label_4a5e68;
        case 0x4a5e6cu: goto label_4a5e6c;
        case 0x4a5e70u: goto label_4a5e70;
        case 0x4a5e74u: goto label_4a5e74;
        case 0x4a5e78u: goto label_4a5e78;
        case 0x4a5e7cu: goto label_4a5e7c;
        case 0x4a5e80u: goto label_4a5e80;
        case 0x4a5e84u: goto label_4a5e84;
        case 0x4a5e88u: goto label_4a5e88;
        case 0x4a5e8cu: goto label_4a5e8c;
        case 0x4a5e90u: goto label_4a5e90;
        case 0x4a5e94u: goto label_4a5e94;
        case 0x4a5e98u: goto label_4a5e98;
        case 0x4a5e9cu: goto label_4a5e9c;
        case 0x4a5ea0u: goto label_4a5ea0;
        case 0x4a5ea4u: goto label_4a5ea4;
        case 0x4a5ea8u: goto label_4a5ea8;
        case 0x4a5eacu: goto label_4a5eac;
        case 0x4a5eb0u: goto label_4a5eb0;
        case 0x4a5eb4u: goto label_4a5eb4;
        case 0x4a5eb8u: goto label_4a5eb8;
        case 0x4a5ebcu: goto label_4a5ebc;
        case 0x4a5ec0u: goto label_4a5ec0;
        case 0x4a5ec4u: goto label_4a5ec4;
        case 0x4a5ec8u: goto label_4a5ec8;
        case 0x4a5eccu: goto label_4a5ecc;
        case 0x4a5ed0u: goto label_4a5ed0;
        case 0x4a5ed4u: goto label_4a5ed4;
        case 0x4a5ed8u: goto label_4a5ed8;
        case 0x4a5edcu: goto label_4a5edc;
        case 0x4a5ee0u: goto label_4a5ee0;
        case 0x4a5ee4u: goto label_4a5ee4;
        case 0x4a5ee8u: goto label_4a5ee8;
        case 0x4a5eecu: goto label_4a5eec;
        case 0x4a5ef0u: goto label_4a5ef0;
        case 0x4a5ef4u: goto label_4a5ef4;
        case 0x4a5ef8u: goto label_4a5ef8;
        case 0x4a5efcu: goto label_4a5efc;
        case 0x4a5f00u: goto label_4a5f00;
        case 0x4a5f04u: goto label_4a5f04;
        case 0x4a5f08u: goto label_4a5f08;
        case 0x4a5f0cu: goto label_4a5f0c;
        case 0x4a5f10u: goto label_4a5f10;
        case 0x4a5f14u: goto label_4a5f14;
        case 0x4a5f18u: goto label_4a5f18;
        case 0x4a5f1cu: goto label_4a5f1c;
        case 0x4a5f20u: goto label_4a5f20;
        case 0x4a5f24u: goto label_4a5f24;
        case 0x4a5f28u: goto label_4a5f28;
        case 0x4a5f2cu: goto label_4a5f2c;
        case 0x4a5f30u: goto label_4a5f30;
        case 0x4a5f34u: goto label_4a5f34;
        case 0x4a5f38u: goto label_4a5f38;
        case 0x4a5f3cu: goto label_4a5f3c;
        case 0x4a5f40u: goto label_4a5f40;
        case 0x4a5f44u: goto label_4a5f44;
        case 0x4a5f48u: goto label_4a5f48;
        case 0x4a5f4cu: goto label_4a5f4c;
        case 0x4a5f50u: goto label_4a5f50;
        case 0x4a5f54u: goto label_4a5f54;
        case 0x4a5f58u: goto label_4a5f58;
        case 0x4a5f5cu: goto label_4a5f5c;
        case 0x4a5f60u: goto label_4a5f60;
        case 0x4a5f64u: goto label_4a5f64;
        case 0x4a5f68u: goto label_4a5f68;
        case 0x4a5f6cu: goto label_4a5f6c;
        case 0x4a5f70u: goto label_4a5f70;
        case 0x4a5f74u: goto label_4a5f74;
        case 0x4a5f78u: goto label_4a5f78;
        case 0x4a5f7cu: goto label_4a5f7c;
        case 0x4a5f80u: goto label_4a5f80;
        case 0x4a5f84u: goto label_4a5f84;
        case 0x4a5f88u: goto label_4a5f88;
        case 0x4a5f8cu: goto label_4a5f8c;
        case 0x4a5f90u: goto label_4a5f90;
        case 0x4a5f94u: goto label_4a5f94;
        case 0x4a5f98u: goto label_4a5f98;
        case 0x4a5f9cu: goto label_4a5f9c;
        case 0x4a5fa0u: goto label_4a5fa0;
        case 0x4a5fa4u: goto label_4a5fa4;
        case 0x4a5fa8u: goto label_4a5fa8;
        case 0x4a5facu: goto label_4a5fac;
        default: break;
    }

    ctx->pc = 0x4a5c70u;

label_4a5c70:
    // 0x4a5c70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a5c74:
    // 0x4a5c74: 0x3e00008  jr          $ra
label_4a5c78:
    if (ctx->pc == 0x4A5C78u) {
        ctx->pc = 0x4A5C78u;
            // 0x4a5c78: 0x8c42e3f0  lw          $v0, -0x1C10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960112)));
        ctx->pc = 0x4A5C7Cu;
        goto label_4a5c7c;
    }
    ctx->pc = 0x4A5C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5C74u;
            // 0x4a5c78: 0x8c42e3f0  lw          $v0, -0x1C10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5C7Cu;
label_4a5c7c:
    // 0x4a5c7c: 0x0  nop
    ctx->pc = 0x4a5c7cu;
    // NOP
label_4a5c80:
    // 0x4a5c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a5c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a5c84:
    // 0x4a5c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a5c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a5c88:
    // 0x4a5c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a5c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a5c8c:
    // 0x4a5c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a5c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a5c90:
    // 0x4a5c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a5c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a5c94:
    // 0x4a5c94: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_4a5c98:
    if (ctx->pc == 0x4A5C98u) {
        ctx->pc = 0x4A5C98u;
            // 0x4a5c98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5C9Cu;
        goto label_4a5c9c;
    }
    ctx->pc = 0x4A5C94u;
    {
        const bool branch_taken_0x4a5c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5C94u;
            // 0x4a5c98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5c94) {
            ctx->pc = 0x4A5CFCu;
            goto label_4a5cfc;
        }
    }
    ctx->pc = 0x4A5C9Cu;
label_4a5c9c:
    // 0x4a5c9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4a5ca0:
    // 0x4a5ca0: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x4a5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
label_4a5ca4:
    // 0x4a5ca4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4a5ca8:
    // 0x4a5ca8: 0x8e0500e4  lw          $a1, 0xE4($s0)
    ctx->pc = 0x4a5ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_4a5cac:
    // 0x4a5cac: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
label_4a5cb0:
    if (ctx->pc == 0x4A5CB0u) {
        ctx->pc = 0x4A5CB4u;
        goto label_4a5cb4;
    }
    ctx->pc = 0x4A5CACu;
    {
        const bool branch_taken_0x4a5cac = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x4a5cac) {
            ctx->pc = 0x4A5CC4u;
            goto label_4a5cc4;
        }
    }
    ctx->pc = 0x4A5CB4u;
label_4a5cb4:
    // 0x4a5cb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a5cb8:
    // 0x4a5cb8: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4a5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4a5cbc:
    // 0x4a5cbc: 0xc074678  jal         func_1D19E0
label_4a5cc0:
    if (ctx->pc == 0x4A5CC0u) {
        ctx->pc = 0x4A5CC0u;
            // 0x4a5cc0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A5CC4u;
        goto label_4a5cc4;
    }
    ctx->pc = 0x4A5CBCu;
    SET_GPR_U32(ctx, 31, 0x4A5CC4u);
    ctx->pc = 0x4A5CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5CBCu;
            // 0x4a5cc0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D19E0u;
    if (runtime->hasFunction(0x1D19E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D19E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5CC4u; }
        if (ctx->pc != 0x4A5CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D19E0_0x1d19e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5CC4u; }
        if (ctx->pc != 0x4A5CC4u) { return; }
    }
    ctx->pc = 0x4A5CC4u;
label_4a5cc4:
    // 0x4a5cc4: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_4a5cc8:
    if (ctx->pc == 0x4A5CC8u) {
        ctx->pc = 0x4A5CC8u;
            // 0x4a5cc8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4A5CCCu;
        goto label_4a5ccc;
    }
    ctx->pc = 0x4A5CC4u;
    {
        const bool branch_taken_0x4a5cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5cc4) {
            ctx->pc = 0x4A5CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5CC4u;
            // 0x4a5cc8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5CE8u;
            goto label_4a5ce8;
        }
    }
    ctx->pc = 0x4A5CCCu;
label_4a5ccc:
    // 0x4a5ccc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4a5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4a5cd0:
    // 0x4a5cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a5cd4:
    // 0x4a5cd4: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x4a5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
label_4a5cd8:
    // 0x4a5cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a5cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5cdc:
    // 0x4a5cdc: 0xc075bf8  jal         func_1D6FE0
label_4a5ce0:
    if (ctx->pc == 0x4A5CE0u) {
        ctx->pc = 0x4A5CE0u;
            // 0x4a5ce0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4A5CE4u;
        goto label_4a5ce4;
    }
    ctx->pc = 0x4A5CDCu;
    SET_GPR_U32(ctx, 31, 0x4A5CE4u);
    ctx->pc = 0x4A5CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5CDCu;
            // 0x4a5ce0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5CE4u; }
        if (ctx->pc != 0x4A5CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5CE4u; }
        if (ctx->pc != 0x4A5CE4u) { return; }
    }
    ctx->pc = 0x4A5CE4u;
label_4a5ce4:
    // 0x4a5ce4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4a5ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4a5ce8:
    // 0x4a5ce8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a5ce8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4a5cec:
    // 0x4a5cec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4a5cf0:
    if (ctx->pc == 0x4A5CF0u) {
        ctx->pc = 0x4A5CF0u;
            // 0x4a5cf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5CF4u;
        goto label_4a5cf4;
    }
    ctx->pc = 0x4A5CECu;
    {
        const bool branch_taken_0x4a5cec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a5cec) {
            ctx->pc = 0x4A5CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5CECu;
            // 0x4a5cf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5D00u;
            goto label_4a5d00;
        }
    }
    ctx->pc = 0x4A5CF4u;
label_4a5cf4:
    // 0x4a5cf4: 0xc0400a8  jal         func_1002A0
label_4a5cf8:
    if (ctx->pc == 0x4A5CF8u) {
        ctx->pc = 0x4A5CF8u;
            // 0x4a5cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5CFCu;
        goto label_4a5cfc;
    }
    ctx->pc = 0x4A5CF4u;
    SET_GPR_U32(ctx, 31, 0x4A5CFCu);
    ctx->pc = 0x4A5CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5CF4u;
            // 0x4a5cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5CFCu; }
        if (ctx->pc != 0x4A5CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5CFCu; }
        if (ctx->pc != 0x4A5CFCu) { return; }
    }
    ctx->pc = 0x4A5CFCu;
label_4a5cfc:
    // 0x4a5cfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a5cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a5d00:
    // 0x4a5d00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a5d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a5d04:
    // 0x4a5d04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a5d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a5d08:
    // 0x4a5d08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a5d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a5d0c:
    // 0x4a5d0c: 0x3e00008  jr          $ra
label_4a5d10:
    if (ctx->pc == 0x4A5D10u) {
        ctx->pc = 0x4A5D10u;
            // 0x4a5d10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A5D14u;
        goto label_4a5d14;
    }
    ctx->pc = 0x4A5D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5D0Cu;
            // 0x4a5d10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5D14u;
label_4a5d14:
    // 0x4a5d14: 0x0  nop
    ctx->pc = 0x4a5d14u;
    // NOP
label_4a5d18:
    // 0x4a5d18: 0x0  nop
    ctx->pc = 0x4a5d18u;
    // NOP
label_4a5d1c:
    // 0x4a5d1c: 0x0  nop
    ctx->pc = 0x4a5d1cu;
    // NOP
label_4a5d20:
    // 0x4a5d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a5d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a5d24:
    // 0x4a5d24: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4a5d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_4a5d28:
    // 0x4a5d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a5d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a5d2c:
    // 0x4a5d2c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4a5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4a5d30:
    // 0x4a5d30: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x4a5d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_4a5d34:
    // 0x4a5d34: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x4a5d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_4a5d38:
    // 0x4a5d38: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x4a5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4a5d3c:
    // 0x4a5d3c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4a5d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4a5d40:
    // 0x4a5d40: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4a5d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4a5d44:
    // 0x4a5d44: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x4a5d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_4a5d48:
    // 0x4a5d48: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4a5d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a5d4c:
    // 0x4a5d4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a5d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a5d50:
    // 0x4a5d50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a5d54:
    // 0x4a5d54: 0x8c631160  lw          $v1, 0x1160($v1)
    ctx->pc = 0x4a5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4448)));
label_4a5d58:
    // 0x4a5d58: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4a5d58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4a5d5c:
    // 0x4a5d5c: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_4a5d60:
    if (ctx->pc == 0x4A5D60u) {
        ctx->pc = 0x4A5D60u;
            // 0x4a5d60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4A5D64u;
        goto label_4a5d64;
    }
    ctx->pc = 0x4A5D5Cu;
    {
        const bool branch_taken_0x4a5d5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5d5c) {
            ctx->pc = 0x4A5D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5D5Cu;
            // 0x4a5d60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5D80u;
            goto label_4a5d80;
        }
    }
    ctx->pc = 0x4A5D64u;
label_4a5d64:
    // 0x4a5d64: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x4a5d64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4a5d68:
    // 0x4a5d68: 0x2c610004  sltiu       $at, $v1, 0x4
    ctx->pc = 0x4a5d68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_4a5d6c:
    // 0x4a5d6c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4a5d70:
    if (ctx->pc == 0x4A5D70u) {
        ctx->pc = 0x4A5D74u;
        goto label_4a5d74;
    }
    ctx->pc = 0x4A5D6Cu;
    {
        const bool branch_taken_0x4a5d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5d6c) {
            ctx->pc = 0x4A5D7Cu;
            goto label_4a5d7c;
        }
    }
    ctx->pc = 0x4A5D74u;
label_4a5d74:
    // 0x4a5d74: 0xc0b9250  jal         func_2E4940
label_4a5d78:
    if (ctx->pc == 0x4A5D78u) {
        ctx->pc = 0x4A5D7Cu;
        goto label_4a5d7c;
    }
    ctx->pc = 0x4A5D74u;
    SET_GPR_U32(ctx, 31, 0x4A5D7Cu);
    ctx->pc = 0x2E4940u;
    if (runtime->hasFunction(0x2E4940u)) {
        auto targetFn = runtime->lookupFunction(0x2E4940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5D7Cu; }
        if (ctx->pc != 0x4A5D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4940_0x2e4940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5D7Cu; }
        if (ctx->pc != 0x4A5D7Cu) { return; }
    }
    ctx->pc = 0x4A5D7Cu;
label_4a5d7c:
    // 0x4a5d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a5d80:
    // 0x4a5d80: 0x3e00008  jr          $ra
label_4a5d84:
    if (ctx->pc == 0x4A5D84u) {
        ctx->pc = 0x4A5D84u;
            // 0x4a5d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4A5D88u;
        goto label_4a5d88;
    }
    ctx->pc = 0x4A5D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5D80u;
            // 0x4a5d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5D88u;
label_4a5d88:
    // 0x4a5d88: 0x0  nop
    ctx->pc = 0x4a5d88u;
    // NOP
label_4a5d8c:
    // 0x4a5d8c: 0x0  nop
    ctx->pc = 0x4a5d8cu;
    // NOP
label_4a5d90:
    // 0x4a5d90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a5d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a5d94:
    // 0x4a5d94: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4a5d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_4a5d98:
    // 0x4a5d98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a5d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4a5d9c:
    // 0x4a5d9c: 0x24a50e84  addiu       $a1, $a1, 0xE84
    ctx->pc = 0x4a5d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3716));
label_4a5da0:
    // 0x4a5da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a5da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a5da4:
    // 0x4a5da4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a5da8:
    // 0x4a5da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a5dac:
    // 0x4a5dac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a5dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a5db0:
    // 0x4a5db0: 0x8c8600b8  lw          $a2, 0xB8($a0)
    ctx->pc = 0x4a5db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_4a5db4:
    // 0x4a5db4: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x4a5db4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4a5db8:
    // 0x4a5db8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4a5db8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4a5dbc:
    // 0x4a5dbc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4a5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4a5dc0:
    // 0x4a5dc0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x4a5dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a5dc4:
    // 0x4a5dc4: 0x1062006b  beq         $v1, $v0, . + 4 + (0x6B << 2)
label_4a5dc8:
    if (ctx->pc == 0x4A5DC8u) {
        ctx->pc = 0x4A5DC8u;
            // 0x4a5dc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5DCCu;
        goto label_4a5dcc;
    }
    ctx->pc = 0x4A5DC4u;
    {
        const bool branch_taken_0x4a5dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A5DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5DC4u;
            // 0x4a5dc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5dc4) {
            ctx->pc = 0x4A5F74u;
            goto label_4a5f74;
        }
    }
    ctx->pc = 0x4A5DCCu;
label_4a5dcc:
    // 0x4a5dcc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4a5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a5dd0:
    // 0x4a5dd0: 0x5062003d  beql        $v1, $v0, . + 4 + (0x3D << 2)
label_4a5dd4:
    if (ctx->pc == 0x4A5DD4u) {
        ctx->pc = 0x4A5DD4u;
            // 0x4a5dd4: 0xc62100e0  lwc1        $f1, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4A5DD8u;
        goto label_4a5dd8;
    }
    ctx->pc = 0x4A5DD0u;
    {
        const bool branch_taken_0x4a5dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a5dd0) {
            ctx->pc = 0x4A5DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5DD0u;
            // 0x4a5dd4: 0xc62100e0  lwc1        $f1, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5EC8u;
            goto label_4a5ec8;
        }
    }
    ctx->pc = 0x4A5DD8u;
label_4a5dd8:
    // 0x4a5dd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4a5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a5ddc:
    // 0x4a5ddc: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_4a5de0:
    if (ctx->pc == 0x4A5DE0u) {
        ctx->pc = 0x4A5DE0u;
            // 0x4a5de0: 0xc62100e0  lwc1        $f1, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4A5DE4u;
        goto label_4a5de4;
    }
    ctx->pc = 0x4A5DDCu;
    {
        const bool branch_taken_0x4a5ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a5ddc) {
            ctx->pc = 0x4A5DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5DDCu;
            // 0x4a5de0: 0xc62100e0  lwc1        $f1, 0xE0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5E08u;
            goto label_4a5e08;
        }
    }
    ctx->pc = 0x4A5DE4u;
label_4a5de4:
    // 0x4a5de4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a5de8:
    // 0x4a5de8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_4a5dec:
    if (ctx->pc == 0x4A5DECu) {
        ctx->pc = 0x4A5DECu;
            // 0x4a5dec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4A5DF0u;
        goto label_4a5df0;
    }
    ctx->pc = 0x4A5DE8u;
    {
        const bool branch_taken_0x4a5de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a5de8) {
            ctx->pc = 0x4A5DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5DE8u;
            // 0x4a5dec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5DF8u;
            goto label_4a5df8;
        }
    }
    ctx->pc = 0x4A5DF0u;
label_4a5df0:
    // 0x4a5df0: 0x10000066  b           . + 4 + (0x66 << 2)
label_4a5df4:
    if (ctx->pc == 0x4A5DF4u) {
        ctx->pc = 0x4A5DF4u;
            // 0x4a5df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5DF8u;
        goto label_4a5df8;
    }
    ctx->pc = 0x4A5DF0u;
    {
        const bool branch_taken_0x4a5df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5DF0u;
            // 0x4a5df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5df0) {
            ctx->pc = 0x4A5F8Cu;
            goto label_4a5f8c;
        }
    }
    ctx->pc = 0x4A5DF8u;
label_4a5df8:
    // 0x4a5df8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4a5df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4a5dfc:
    // 0x4a5dfc: 0x320f809  jalr        $t9
label_4a5e00:
    if (ctx->pc == 0x4A5E00u) {
        ctx->pc = 0x4A5E04u;
        goto label_4a5e04;
    }
    ctx->pc = 0x4A5DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A5E04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A5E04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A5E04u; }
            if (ctx->pc != 0x4A5E04u) { return; }
        }
        }
    }
    ctx->pc = 0x4A5E04u;
label_4a5e04:
    // 0x4a5e04: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x4a5e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a5e08:
    // 0x4a5e08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a5e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a5e0c:
    // 0x4a5e0c: 0x0  nop
    ctx->pc = 0x4a5e0cu;
    // NOP
label_4a5e10:
    // 0x4a5e10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4a5e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a5e14:
    // 0x4a5e14: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_4a5e18:
    if (ctx->pc == 0x4A5E18u) {
        ctx->pc = 0x4A5E18u;
            // 0x4a5e18: 0x820611aa  lb          $a2, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->pc = 0x4A5E1Cu;
        goto label_4a5e1c;
    }
    ctx->pc = 0x4A5E14u;
    {
        const bool branch_taken_0x4a5e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a5e14) {
            ctx->pc = 0x4A5E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5E14u;
            // 0x4a5e18: 0x820611aa  lb          $a2, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5E34u;
            goto label_4a5e34;
        }
    }
    ctx->pc = 0x4A5E1Cu;
label_4a5e1c:
    // 0x4a5e1c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a5e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a5e20:
    // 0x4a5e20: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4a5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4a5e24:
    // 0x4a5e24: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4a5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a5e28:
    // 0x4a5e28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a5e28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4a5e2c:
    // 0x4a5e2c: 0x10000056  b           . + 4 + (0x56 << 2)
label_4a5e30:
    if (ctx->pc == 0x4A5E30u) {
        ctx->pc = 0x4A5E30u;
            // 0x4a5e30: 0xe62000e0  swc1        $f0, 0xE0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
        ctx->pc = 0x4A5E34u;
        goto label_4a5e34;
    }
    ctx->pc = 0x4A5E2Cu;
    {
        const bool branch_taken_0x4a5e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5E2Cu;
            // 0x4a5e30: 0xe62000e0  swc1        $f0, 0xE0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5e2c) {
            ctx->pc = 0x4A5F88u;
            goto label_4a5f88;
        }
    }
    ctx->pc = 0x4A5E34u;
label_4a5e34:
    // 0x4a5e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a5e38:
    // 0x4a5e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a5e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5e3c:
    // 0x4a5e3c: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x4a5e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4a5e40:
    // 0x4a5e40: 0xc0762b4  jal         func_1D8AD0
label_4a5e44:
    if (ctx->pc == 0x4A5E44u) {
        ctx->pc = 0x4A5E44u;
            // 0x4a5e44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A5E48u;
        goto label_4a5e48;
    }
    ctx->pc = 0x4A5E40u;
    SET_GPR_U32(ctx, 31, 0x4A5E48u);
    ctx->pc = 0x4A5E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5E40u;
            // 0x4a5e44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5E48u; }
        if (ctx->pc != 0x4A5E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5E48u; }
        if (ctx->pc != 0x4A5E48u) { return; }
    }
    ctx->pc = 0x4A5E48u;
label_4a5e48:
    // 0x4a5e48: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a5e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a5e4c:
    // 0x4a5e4c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4a5e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4a5e50:
    // 0x4a5e50: 0x320f809  jalr        $t9
label_4a5e54:
    if (ctx->pc == 0x4A5E54u) {
        ctx->pc = 0x4A5E54u;
            // 0x4a5e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5E58u;
        goto label_4a5e58;
    }
    ctx->pc = 0x4A5E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A5E58u);
        ctx->pc = 0x4A5E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5E50u;
            // 0x4a5e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A5E58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A5E58u; }
            if (ctx->pc != 0x4A5E58u) { return; }
        }
        }
    }
    ctx->pc = 0x4A5E58u;
label_4a5e58:
    // 0x4a5e58: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x4a5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_4a5e5c:
    // 0x4a5e5c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x4a5e5cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a5e60:
    // 0x4a5e60: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x4a5e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_4a5e64:
    // 0x4a5e64: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x4a5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a5e68:
    // 0x4a5e68: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4a5e6c:
    if (ctx->pc == 0x4A5E6Cu) {
        ctx->pc = 0x4A5E6Cu;
            // 0x4a5e6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5E70u;
        goto label_4a5e70;
    }
    ctx->pc = 0x4A5E68u;
    {
        const bool branch_taken_0x4a5e68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A5E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5E68u;
            // 0x4a5e6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5e68) {
            ctx->pc = 0x4A5E80u;
            goto label_4a5e80;
        }
    }
    ctx->pc = 0x4A5E70u;
label_4a5e70:
    // 0x4a5e70: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4a5e70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a5e74:
    // 0x4a5e74: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a5e78:
    if (ctx->pc == 0x4A5E78u) {
        ctx->pc = 0x4A5E7Cu;
        goto label_4a5e7c;
    }
    ctx->pc = 0x4A5E74u;
    {
        const bool branch_taken_0x4a5e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5e74) {
            ctx->pc = 0x4A5E80u;
            goto label_4a5e80;
        }
    }
    ctx->pc = 0x4A5E7Cu;
label_4a5e7c:
    // 0x4a5e7c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x4a5e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a5e80:
    // 0x4a5e80: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4a5e84:
    if (ctx->pc == 0x4A5E84u) {
        ctx->pc = 0x4A5E88u;
        goto label_4a5e88;
    }
    ctx->pc = 0x4A5E80u;
    {
        const bool branch_taken_0x4a5e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5e80) {
            ctx->pc = 0x4A5E9Cu;
            goto label_4a5e9c;
        }
    }
    ctx->pc = 0x4A5E88u;
label_4a5e88:
    // 0x4a5e88: 0xc075eb4  jal         func_1D7AD0
label_4a5e8c:
    if (ctx->pc == 0x4A5E8Cu) {
        ctx->pc = 0x4A5E8Cu;
            // 0x4a5e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5E90u;
        goto label_4a5e90;
    }
    ctx->pc = 0x4A5E88u;
    SET_GPR_U32(ctx, 31, 0x4A5E90u);
    ctx->pc = 0x4A5E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5E88u;
            // 0x4a5e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5E90u; }
        if (ctx->pc != 0x4A5E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5E90u; }
        if (ctx->pc != 0x4A5E90u) { return; }
    }
    ctx->pc = 0x4A5E90u;
label_4a5e90:
    // 0x4a5e90: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a5e94:
    if (ctx->pc == 0x4A5E94u) {
        ctx->pc = 0x4A5E98u;
        goto label_4a5e98;
    }
    ctx->pc = 0x4A5E90u;
    {
        const bool branch_taken_0x4a5e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5e90) {
            ctx->pc = 0x4A5E9Cu;
            goto label_4a5e9c;
        }
    }
    ctx->pc = 0x4A5E98u;
label_4a5e98:
    // 0x4a5e98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a5e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5e9c:
    // 0x4a5e9c: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_4a5ea0:
    if (ctx->pc == 0x4A5EA0u) {
        ctx->pc = 0x4A5EA0u;
            // 0x4a5ea0: 0x922400e4  lbu         $a0, 0xE4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->pc = 0x4A5EA4u;
        goto label_4a5ea4;
    }
    ctx->pc = 0x4A5E9Cu;
    {
        const bool branch_taken_0x4a5e9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5e9c) {
            ctx->pc = 0x4A5EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5E9Cu;
            // 0x4a5ea0: 0x922400e4  lbu         $a0, 0xE4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5EB8u;
            goto label_4a5eb8;
        }
    }
    ctx->pc = 0x4A5EA4u;
label_4a5ea4:
    // 0x4a5ea4: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4a5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a5ea8:
    // 0x4a5ea8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a5eac:
    // 0x4a5eac: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
label_4a5eb0:
    if (ctx->pc == 0x4A5EB0u) {
        ctx->pc = 0x4A5EB4u;
        goto label_4a5eb4;
    }
    ctx->pc = 0x4A5EACu;
    {
        const bool branch_taken_0x4a5eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a5eac) {
            ctx->pc = 0x4A5F88u;
            goto label_4a5f88;
        }
    }
    ctx->pc = 0x4A5EB4u;
label_4a5eb4:
    // 0x4a5eb4: 0x922400e4  lbu         $a0, 0xE4($s1)
    ctx->pc = 0x4a5eb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_4a5eb8:
    // 0x4a5eb8: 0xc072a56  jal         func_1CA958
label_4a5ebc:
    if (ctx->pc == 0x4A5EBCu) {
        ctx->pc = 0x4A5EC0u;
        goto label_4a5ec0;
    }
    ctx->pc = 0x4A5EB8u;
    SET_GPR_U32(ctx, 31, 0x4A5EC0u);
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5EC0u; }
        if (ctx->pc != 0x4A5EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5EC0u; }
        if (ctx->pc != 0x4A5EC0u) { return; }
    }
    ctx->pc = 0x4A5EC0u;
label_4a5ec0:
    // 0x4a5ec0: 0x10000031  b           . + 4 + (0x31 << 2)
label_4a5ec4:
    if (ctx->pc == 0x4A5EC4u) {
        ctx->pc = 0x4A5EC8u;
        goto label_4a5ec8;
    }
    ctx->pc = 0x4A5EC0u;
    {
        const bool branch_taken_0x4a5ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5ec0) {
            ctx->pc = 0x4A5F88u;
            goto label_4a5f88;
        }
    }
    ctx->pc = 0x4A5EC8u;
label_4a5ec8:
    // 0x4a5ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a5ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a5ecc:
    // 0x4a5ecc: 0x0  nop
    ctx->pc = 0x4a5eccu;
    // NOP
label_4a5ed0:
    // 0x4a5ed0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4a5ed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a5ed4:
    // 0x4a5ed4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_4a5ed8:
    if (ctx->pc == 0x4A5ED8u) {
        ctx->pc = 0x4A5ED8u;
            // 0x4a5ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5EDCu;
        goto label_4a5edc;
    }
    ctx->pc = 0x4A5ED4u;
    {
        const bool branch_taken_0x4a5ed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a5ed4) {
            ctx->pc = 0x4A5ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5ED4u;
            // 0x4a5ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5EF4u;
            goto label_4a5ef4;
        }
    }
    ctx->pc = 0x4A5EDCu;
label_4a5edc:
    // 0x4a5edc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a5ee0:
    // 0x4a5ee0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4a5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4a5ee4:
    // 0x4a5ee4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4a5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a5ee8:
    // 0x4a5ee8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a5ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4a5eec:
    // 0x4a5eec: 0x10000026  b           . + 4 + (0x26 << 2)
label_4a5ef0:
    if (ctx->pc == 0x4A5EF0u) {
        ctx->pc = 0x4A5EF0u;
            // 0x4a5ef0: 0xe62000e0  swc1        $f0, 0xE0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
        ctx->pc = 0x4A5EF4u;
        goto label_4a5ef4;
    }
    ctx->pc = 0x4A5EECu;
    {
        const bool branch_taken_0x4a5eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5EECu;
            // 0x4a5ef0: 0xe62000e0  swc1        $f0, 0xE0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5eec) {
            ctx->pc = 0x4A5F88u;
            goto label_4a5f88;
        }
    }
    ctx->pc = 0x4A5EF4u;
label_4a5ef4:
    // 0x4a5ef4: 0xc07626c  jal         func_1D89B0
label_4a5ef8:
    if (ctx->pc == 0x4A5EF8u) {
        ctx->pc = 0x4A5EF8u;
            // 0x4a5ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5EFCu;
        goto label_4a5efc;
    }
    ctx->pc = 0x4A5EF4u;
    SET_GPR_U32(ctx, 31, 0x4A5EFCu);
    ctx->pc = 0x4A5EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5EF4u;
            // 0x4a5ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5EFCu; }
        if (ctx->pc != 0x4A5EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5EFCu; }
        if (ctx->pc != 0x4A5EFCu) { return; }
    }
    ctx->pc = 0x4A5EFCu;
label_4a5efc:
    // 0x4a5efc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a5efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a5f00:
    // 0x4a5f00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4a5f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4a5f04:
    // 0x4a5f04: 0x320f809  jalr        $t9
label_4a5f08:
    if (ctx->pc == 0x4A5F08u) {
        ctx->pc = 0x4A5F08u;
            // 0x4a5f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5F0Cu;
        goto label_4a5f0c;
    }
    ctx->pc = 0x4A5F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A5F0Cu);
        ctx->pc = 0x4A5F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5F04u;
            // 0x4a5f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A5F0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A5F0Cu; }
            if (ctx->pc != 0x4A5F0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A5F0Cu;
label_4a5f0c:
    // 0x4a5f0c: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x4a5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a5f10:
    // 0x4a5f10: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x4a5f10u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a5f14:
    // 0x4a5f14: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4a5f18:
    if (ctx->pc == 0x4A5F18u) {
        ctx->pc = 0x4A5F18u;
            // 0x4a5f18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5F1Cu;
        goto label_4a5f1c;
    }
    ctx->pc = 0x4A5F14u;
    {
        const bool branch_taken_0x4a5f14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A5F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5F14u;
            // 0x4a5f18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5f14) {
            ctx->pc = 0x4A5F2Cu;
            goto label_4a5f2c;
        }
    }
    ctx->pc = 0x4A5F1Cu;
label_4a5f1c:
    // 0x4a5f1c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4a5f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a5f20:
    // 0x4a5f20: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a5f24:
    if (ctx->pc == 0x4A5F24u) {
        ctx->pc = 0x4A5F28u;
        goto label_4a5f28;
    }
    ctx->pc = 0x4A5F20u;
    {
        const bool branch_taken_0x4a5f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5f20) {
            ctx->pc = 0x4A5F2Cu;
            goto label_4a5f2c;
        }
    }
    ctx->pc = 0x4A5F28u;
label_4a5f28:
    // 0x4a5f28: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x4a5f28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a5f2c:
    // 0x4a5f2c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4a5f30:
    if (ctx->pc == 0x4A5F30u) {
        ctx->pc = 0x4A5F34u;
        goto label_4a5f34;
    }
    ctx->pc = 0x4A5F2Cu;
    {
        const bool branch_taken_0x4a5f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5f2c) {
            ctx->pc = 0x4A5F48u;
            goto label_4a5f48;
        }
    }
    ctx->pc = 0x4A5F34u;
label_4a5f34:
    // 0x4a5f34: 0xc075eb4  jal         func_1D7AD0
label_4a5f38:
    if (ctx->pc == 0x4A5F38u) {
        ctx->pc = 0x4A5F38u;
            // 0x4a5f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5F3Cu;
        goto label_4a5f3c;
    }
    ctx->pc = 0x4A5F34u;
    SET_GPR_U32(ctx, 31, 0x4A5F3Cu);
    ctx->pc = 0x4A5F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5F34u;
            // 0x4a5f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5F3Cu; }
        if (ctx->pc != 0x4A5F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5F3Cu; }
        if (ctx->pc != 0x4A5F3Cu) { return; }
    }
    ctx->pc = 0x4A5F3Cu;
label_4a5f3c:
    // 0x4a5f3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a5f40:
    if (ctx->pc == 0x4A5F40u) {
        ctx->pc = 0x4A5F44u;
        goto label_4a5f44;
    }
    ctx->pc = 0x4A5F3Cu;
    {
        const bool branch_taken_0x4a5f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5f3c) {
            ctx->pc = 0x4A5F48u;
            goto label_4a5f48;
        }
    }
    ctx->pc = 0x4A5F44u;
label_4a5f44:
    // 0x4a5f44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a5f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5f48:
    // 0x4a5f48: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_4a5f4c:
    if (ctx->pc == 0x4A5F4Cu) {
        ctx->pc = 0x4A5F4Cu;
            // 0x4a5f4c: 0x922400e4  lbu         $a0, 0xE4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->pc = 0x4A5F50u;
        goto label_4a5f50;
    }
    ctx->pc = 0x4A5F48u;
    {
        const bool branch_taken_0x4a5f48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5f48) {
            ctx->pc = 0x4A5F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5F48u;
            // 0x4a5f4c: 0x922400e4  lbu         $a0, 0xE4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5F64u;
            goto label_4a5f64;
        }
    }
    ctx->pc = 0x4A5F50u;
label_4a5f50:
    // 0x4a5f50: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4a5f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a5f54:
    // 0x4a5f54: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a5f58:
    // 0x4a5f58: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_4a5f5c:
    if (ctx->pc == 0x4A5F5Cu) {
        ctx->pc = 0x4A5F60u;
        goto label_4a5f60;
    }
    ctx->pc = 0x4A5F58u;
    {
        const bool branch_taken_0x4a5f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a5f58) {
            ctx->pc = 0x4A5F88u;
            goto label_4a5f88;
        }
    }
    ctx->pc = 0x4A5F60u;
label_4a5f60:
    // 0x4a5f60: 0x922400e4  lbu         $a0, 0xE4($s1)
    ctx->pc = 0x4a5f60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_4a5f64:
    // 0x4a5f64: 0xc072aaa  jal         func_1CAAA8
label_4a5f68:
    if (ctx->pc == 0x4A5F68u) {
        ctx->pc = 0x4A5F6Cu;
        goto label_4a5f6c;
    }
    ctx->pc = 0x4A5F64u;
    SET_GPR_U32(ctx, 31, 0x4A5F6Cu);
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5F6Cu; }
        if (ctx->pc != 0x4A5F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5F6Cu; }
        if (ctx->pc != 0x4A5F6Cu) { return; }
    }
    ctx->pc = 0x4A5F6Cu;
label_4a5f6c:
    // 0x4a5f6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_4a5f70:
    if (ctx->pc == 0x4A5F70u) {
        ctx->pc = 0x4A5F74u;
        goto label_4a5f74;
    }
    ctx->pc = 0x4A5F6Cu;
    {
        const bool branch_taken_0x4a5f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5f6c) {
            ctx->pc = 0x4A5F88u;
            goto label_4a5f88;
        }
    }
    ctx->pc = 0x4A5F74u;
label_4a5f74:
    // 0x4a5f74: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a5f78:
    // 0x4a5f78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a5f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a5f7c:
    // 0x4a5f7c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4a5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4a5f80:
    // 0x4a5f80: 0xc057b7c  jal         func_15EDF0
label_4a5f84:
    if (ctx->pc == 0x4A5F84u) {
        ctx->pc = 0x4A5F84u;
            // 0x4a5f84: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A5F88u;
        goto label_4a5f88;
    }
    ctx->pc = 0x4A5F80u;
    SET_GPR_U32(ctx, 31, 0x4A5F88u);
    ctx->pc = 0x4A5F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5F80u;
            // 0x4a5f84: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5F88u; }
        if (ctx->pc != 0x4A5F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5F88u; }
        if (ctx->pc != 0x4A5F88u) { return; }
    }
    ctx->pc = 0x4A5F88u;
label_4a5f88:
    // 0x4a5f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a5f8c:
    // 0x4a5f8c: 0xc0b93ac  jal         func_2E4EB0
label_4a5f90:
    if (ctx->pc == 0x4A5F90u) {
        ctx->pc = 0x4A5F94u;
        goto label_4a5f94;
    }
    ctx->pc = 0x4A5F8Cu;
    SET_GPR_U32(ctx, 31, 0x4A5F94u);
    ctx->pc = 0x2E4EB0u;
    if (runtime->hasFunction(0x2E4EB0u)) {
        auto targetFn = runtime->lookupFunction(0x2E4EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5F94u; }
        if (ctx->pc != 0x4A5F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4EB0_0x2e4eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5F94u; }
        if (ctx->pc != 0x4A5F94u) { return; }
    }
    ctx->pc = 0x4A5F94u;
label_4a5f94:
    // 0x4a5f94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a5f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4a5f98:
    // 0x4a5f98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a5f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a5f9c:
    // 0x4a5f9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a5f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a5fa0:
    // 0x4a5fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a5fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a5fa4:
    // 0x4a5fa4: 0x3e00008  jr          $ra
label_4a5fa8:
    if (ctx->pc == 0x4A5FA8u) {
        ctx->pc = 0x4A5FA8u;
            // 0x4a5fa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4A5FACu;
        goto label_4a5fac;
    }
    ctx->pc = 0x4A5FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5FA4u;
            // 0x4a5fa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5FACu;
label_4a5fac:
    // 0x4a5fac: 0x0  nop
    ctx->pc = 0x4a5facu;
    // NOP
}
