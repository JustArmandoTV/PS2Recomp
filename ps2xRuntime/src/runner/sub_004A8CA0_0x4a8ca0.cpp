#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A8CA0
// Address: 0x4a8ca0 - 0x4a8f70
void sub_004A8CA0_0x4a8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8CA0_0x4a8ca0");
#endif

    switch (ctx->pc) {
        case 0x4a8ca0u: goto label_4a8ca0;
        case 0x4a8ca4u: goto label_4a8ca4;
        case 0x4a8ca8u: goto label_4a8ca8;
        case 0x4a8cacu: goto label_4a8cac;
        case 0x4a8cb0u: goto label_4a8cb0;
        case 0x4a8cb4u: goto label_4a8cb4;
        case 0x4a8cb8u: goto label_4a8cb8;
        case 0x4a8cbcu: goto label_4a8cbc;
        case 0x4a8cc0u: goto label_4a8cc0;
        case 0x4a8cc4u: goto label_4a8cc4;
        case 0x4a8cc8u: goto label_4a8cc8;
        case 0x4a8cccu: goto label_4a8ccc;
        case 0x4a8cd0u: goto label_4a8cd0;
        case 0x4a8cd4u: goto label_4a8cd4;
        case 0x4a8cd8u: goto label_4a8cd8;
        case 0x4a8cdcu: goto label_4a8cdc;
        case 0x4a8ce0u: goto label_4a8ce0;
        case 0x4a8ce4u: goto label_4a8ce4;
        case 0x4a8ce8u: goto label_4a8ce8;
        case 0x4a8cecu: goto label_4a8cec;
        case 0x4a8cf0u: goto label_4a8cf0;
        case 0x4a8cf4u: goto label_4a8cf4;
        case 0x4a8cf8u: goto label_4a8cf8;
        case 0x4a8cfcu: goto label_4a8cfc;
        case 0x4a8d00u: goto label_4a8d00;
        case 0x4a8d04u: goto label_4a8d04;
        case 0x4a8d08u: goto label_4a8d08;
        case 0x4a8d0cu: goto label_4a8d0c;
        case 0x4a8d10u: goto label_4a8d10;
        case 0x4a8d14u: goto label_4a8d14;
        case 0x4a8d18u: goto label_4a8d18;
        case 0x4a8d1cu: goto label_4a8d1c;
        case 0x4a8d20u: goto label_4a8d20;
        case 0x4a8d24u: goto label_4a8d24;
        case 0x4a8d28u: goto label_4a8d28;
        case 0x4a8d2cu: goto label_4a8d2c;
        case 0x4a8d30u: goto label_4a8d30;
        case 0x4a8d34u: goto label_4a8d34;
        case 0x4a8d38u: goto label_4a8d38;
        case 0x4a8d3cu: goto label_4a8d3c;
        case 0x4a8d40u: goto label_4a8d40;
        case 0x4a8d44u: goto label_4a8d44;
        case 0x4a8d48u: goto label_4a8d48;
        case 0x4a8d4cu: goto label_4a8d4c;
        case 0x4a8d50u: goto label_4a8d50;
        case 0x4a8d54u: goto label_4a8d54;
        case 0x4a8d58u: goto label_4a8d58;
        case 0x4a8d5cu: goto label_4a8d5c;
        case 0x4a8d60u: goto label_4a8d60;
        case 0x4a8d64u: goto label_4a8d64;
        case 0x4a8d68u: goto label_4a8d68;
        case 0x4a8d6cu: goto label_4a8d6c;
        case 0x4a8d70u: goto label_4a8d70;
        case 0x4a8d74u: goto label_4a8d74;
        case 0x4a8d78u: goto label_4a8d78;
        case 0x4a8d7cu: goto label_4a8d7c;
        case 0x4a8d80u: goto label_4a8d80;
        case 0x4a8d84u: goto label_4a8d84;
        case 0x4a8d88u: goto label_4a8d88;
        case 0x4a8d8cu: goto label_4a8d8c;
        case 0x4a8d90u: goto label_4a8d90;
        case 0x4a8d94u: goto label_4a8d94;
        case 0x4a8d98u: goto label_4a8d98;
        case 0x4a8d9cu: goto label_4a8d9c;
        case 0x4a8da0u: goto label_4a8da0;
        case 0x4a8da4u: goto label_4a8da4;
        case 0x4a8da8u: goto label_4a8da8;
        case 0x4a8dacu: goto label_4a8dac;
        case 0x4a8db0u: goto label_4a8db0;
        case 0x4a8db4u: goto label_4a8db4;
        case 0x4a8db8u: goto label_4a8db8;
        case 0x4a8dbcu: goto label_4a8dbc;
        case 0x4a8dc0u: goto label_4a8dc0;
        case 0x4a8dc4u: goto label_4a8dc4;
        case 0x4a8dc8u: goto label_4a8dc8;
        case 0x4a8dccu: goto label_4a8dcc;
        case 0x4a8dd0u: goto label_4a8dd0;
        case 0x4a8dd4u: goto label_4a8dd4;
        case 0x4a8dd8u: goto label_4a8dd8;
        case 0x4a8ddcu: goto label_4a8ddc;
        case 0x4a8de0u: goto label_4a8de0;
        case 0x4a8de4u: goto label_4a8de4;
        case 0x4a8de8u: goto label_4a8de8;
        case 0x4a8decu: goto label_4a8dec;
        case 0x4a8df0u: goto label_4a8df0;
        case 0x4a8df4u: goto label_4a8df4;
        case 0x4a8df8u: goto label_4a8df8;
        case 0x4a8dfcu: goto label_4a8dfc;
        case 0x4a8e00u: goto label_4a8e00;
        case 0x4a8e04u: goto label_4a8e04;
        case 0x4a8e08u: goto label_4a8e08;
        case 0x4a8e0cu: goto label_4a8e0c;
        case 0x4a8e10u: goto label_4a8e10;
        case 0x4a8e14u: goto label_4a8e14;
        case 0x4a8e18u: goto label_4a8e18;
        case 0x4a8e1cu: goto label_4a8e1c;
        case 0x4a8e20u: goto label_4a8e20;
        case 0x4a8e24u: goto label_4a8e24;
        case 0x4a8e28u: goto label_4a8e28;
        case 0x4a8e2cu: goto label_4a8e2c;
        case 0x4a8e30u: goto label_4a8e30;
        case 0x4a8e34u: goto label_4a8e34;
        case 0x4a8e38u: goto label_4a8e38;
        case 0x4a8e3cu: goto label_4a8e3c;
        case 0x4a8e40u: goto label_4a8e40;
        case 0x4a8e44u: goto label_4a8e44;
        case 0x4a8e48u: goto label_4a8e48;
        case 0x4a8e4cu: goto label_4a8e4c;
        case 0x4a8e50u: goto label_4a8e50;
        case 0x4a8e54u: goto label_4a8e54;
        case 0x4a8e58u: goto label_4a8e58;
        case 0x4a8e5cu: goto label_4a8e5c;
        case 0x4a8e60u: goto label_4a8e60;
        case 0x4a8e64u: goto label_4a8e64;
        case 0x4a8e68u: goto label_4a8e68;
        case 0x4a8e6cu: goto label_4a8e6c;
        case 0x4a8e70u: goto label_4a8e70;
        case 0x4a8e74u: goto label_4a8e74;
        case 0x4a8e78u: goto label_4a8e78;
        case 0x4a8e7cu: goto label_4a8e7c;
        case 0x4a8e80u: goto label_4a8e80;
        case 0x4a8e84u: goto label_4a8e84;
        case 0x4a8e88u: goto label_4a8e88;
        case 0x4a8e8cu: goto label_4a8e8c;
        case 0x4a8e90u: goto label_4a8e90;
        case 0x4a8e94u: goto label_4a8e94;
        case 0x4a8e98u: goto label_4a8e98;
        case 0x4a8e9cu: goto label_4a8e9c;
        case 0x4a8ea0u: goto label_4a8ea0;
        case 0x4a8ea4u: goto label_4a8ea4;
        case 0x4a8ea8u: goto label_4a8ea8;
        case 0x4a8eacu: goto label_4a8eac;
        case 0x4a8eb0u: goto label_4a8eb0;
        case 0x4a8eb4u: goto label_4a8eb4;
        case 0x4a8eb8u: goto label_4a8eb8;
        case 0x4a8ebcu: goto label_4a8ebc;
        case 0x4a8ec0u: goto label_4a8ec0;
        case 0x4a8ec4u: goto label_4a8ec4;
        case 0x4a8ec8u: goto label_4a8ec8;
        case 0x4a8eccu: goto label_4a8ecc;
        case 0x4a8ed0u: goto label_4a8ed0;
        case 0x4a8ed4u: goto label_4a8ed4;
        case 0x4a8ed8u: goto label_4a8ed8;
        case 0x4a8edcu: goto label_4a8edc;
        case 0x4a8ee0u: goto label_4a8ee0;
        case 0x4a8ee4u: goto label_4a8ee4;
        case 0x4a8ee8u: goto label_4a8ee8;
        case 0x4a8eecu: goto label_4a8eec;
        case 0x4a8ef0u: goto label_4a8ef0;
        case 0x4a8ef4u: goto label_4a8ef4;
        case 0x4a8ef8u: goto label_4a8ef8;
        case 0x4a8efcu: goto label_4a8efc;
        case 0x4a8f00u: goto label_4a8f00;
        case 0x4a8f04u: goto label_4a8f04;
        case 0x4a8f08u: goto label_4a8f08;
        case 0x4a8f0cu: goto label_4a8f0c;
        case 0x4a8f10u: goto label_4a8f10;
        case 0x4a8f14u: goto label_4a8f14;
        case 0x4a8f18u: goto label_4a8f18;
        case 0x4a8f1cu: goto label_4a8f1c;
        case 0x4a8f20u: goto label_4a8f20;
        case 0x4a8f24u: goto label_4a8f24;
        case 0x4a8f28u: goto label_4a8f28;
        case 0x4a8f2cu: goto label_4a8f2c;
        case 0x4a8f30u: goto label_4a8f30;
        case 0x4a8f34u: goto label_4a8f34;
        case 0x4a8f38u: goto label_4a8f38;
        case 0x4a8f3cu: goto label_4a8f3c;
        case 0x4a8f40u: goto label_4a8f40;
        case 0x4a8f44u: goto label_4a8f44;
        case 0x4a8f48u: goto label_4a8f48;
        case 0x4a8f4cu: goto label_4a8f4c;
        case 0x4a8f50u: goto label_4a8f50;
        case 0x4a8f54u: goto label_4a8f54;
        case 0x4a8f58u: goto label_4a8f58;
        case 0x4a8f5cu: goto label_4a8f5c;
        case 0x4a8f60u: goto label_4a8f60;
        case 0x4a8f64u: goto label_4a8f64;
        case 0x4a8f68u: goto label_4a8f68;
        case 0x4a8f6cu: goto label_4a8f6c;
        default: break;
    }

    ctx->pc = 0x4a8ca0u;

label_4a8ca0:
    // 0x4a8ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a8ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a8ca4:
    // 0x4a8ca4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4a8ca8:
    // 0x4a8ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a8cac:
    // 0x4a8cac: 0x24425170  addiu       $v0, $v0, 0x5170
    ctx->pc = 0x4a8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20848));
label_4a8cb0:
    // 0x4a8cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a8cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a8cb4:
    // 0x4a8cb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a8cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a8cb8:
    // 0x4a8cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a8cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8cbc:
    // 0x4a8cbc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x4a8cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4a8cc0:
    // 0x4a8cc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a8cc4:
    // 0x4a8cc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4a8cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a8cc8:
    // 0x4a8cc8: 0xc0732d4  jal         func_1CCB50
label_4a8ccc:
    if (ctx->pc == 0x4A8CCCu) {
        ctx->pc = 0x4A8CCCu;
            // 0x4a8ccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8CD0u;
        goto label_4a8cd0;
    }
    ctx->pc = 0x4A8CC8u;
    SET_GPR_U32(ctx, 31, 0x4A8CD0u);
    ctx->pc = 0x4A8CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8CC8u;
            // 0x4a8ccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCB50u;
    if (runtime->hasFunction(0x1CCB50u)) {
        auto targetFn = runtime->lookupFunction(0x1CCB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8CD0u; }
        if (ctx->pc != 0x4A8CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCB50_0x1ccb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8CD0u; }
        if (ctx->pc != 0x4A8CD0u) { return; }
    }
    ctx->pc = 0x4A8CD0u;
label_4a8cd0:
    // 0x4a8cd0: 0x2002026  xor         $a0, $s0, $zero
    ctx->pc = 0x4a8cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 0));
label_4a8cd4:
    // 0x4a8cd4: 0xc05d716  jal         func_175C58
label_4a8cd8:
    if (ctx->pc == 0x4A8CD8u) {
        ctx->pc = 0x4A8CD8u;
            // 0x4a8cd8: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4A8CDCu;
        goto label_4a8cdc;
    }
    ctx->pc = 0x4A8CD4u;
    SET_GPR_U32(ctx, 31, 0x4A8CDCu);
    ctx->pc = 0x4A8CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8CD4u;
            // 0x4a8cd8: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x175C58u;
    if (runtime->hasFunction(0x175C58u)) {
        auto targetFn = runtime->lookupFunction(0x175C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8CDCu; }
        if (ctx->pc != 0x4A8CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C58_0x175c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8CDCu; }
        if (ctx->pc != 0x4A8CDCu) { return; }
    }
    ctx->pc = 0x4A8CDCu;
label_4a8cdc:
    // 0x4a8cdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a8ce0:
    // 0x4a8ce0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a8ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8ce4:
    // 0x4a8ce4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4a8ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4a8ce8:
    // 0x4a8ce8: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x4a8ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a8cec:
    // 0x4a8cec: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4a8cecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4a8cf0:
    // 0x4a8cf0: 0x320f809  jalr        $t9
label_4a8cf4:
    if (ctx->pc == 0x4A8CF4u) {
        ctx->pc = 0x4A8CF4u;
            // 0x4a8cf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A8CF8u;
        goto label_4a8cf8;
    }
    ctx->pc = 0x4A8CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A8CF8u);
        ctx->pc = 0x4A8CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8CF0u;
            // 0x4a8cf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A8CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A8CF8u; }
            if (ctx->pc != 0x4A8CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A8CF8u;
label_4a8cf8:
    // 0x4a8cf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a8cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8cfc:
    // 0x4a8cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a8cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8d00:
    // 0x4a8d00: 0x3e00008  jr          $ra
label_4a8d04:
    if (ctx->pc == 0x4A8D04u) {
        ctx->pc = 0x4A8D04u;
            // 0x4a8d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4A8D08u;
        goto label_4a8d08;
    }
    ctx->pc = 0x4A8D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8D00u;
            // 0x4a8d04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A8D08u;
label_4a8d08:
    // 0x4a8d08: 0x0  nop
    ctx->pc = 0x4a8d08u;
    // NOP
label_4a8d0c:
    // 0x4a8d0c: 0x0  nop
    ctx->pc = 0x4a8d0cu;
    // NOP
label_4a8d10:
    // 0x4a8d10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4a8d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4a8d14:
    // 0x4a8d14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a8d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4a8d18:
    // 0x4a8d18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a8d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4a8d1c:
    // 0x4a8d1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a8d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a8d20:
    // 0x4a8d20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a8d24:
    // 0x4a8d24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a8d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a8d28:
    // 0x4a8d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a8d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a8d2c:
    // 0x4a8d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a8d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a8d30:
    // 0x4a8d30: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x4a8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4a8d34:
    // 0x4a8d34: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_4a8d38:
    if (ctx->pc == 0x4A8D38u) {
        ctx->pc = 0x4A8D38u;
            // 0x4a8d38: 0x24900064  addiu       $s0, $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
        ctx->pc = 0x4A8D3Cu;
        goto label_4a8d3c;
    }
    ctx->pc = 0x4A8D34u;
    {
        const bool branch_taken_0x4a8d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8D34u;
            // 0x4a8d38: 0x24900064  addiu       $s0, $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8d34) {
            ctx->pc = 0x4A8DA8u;
            goto label_4a8da8;
        }
    }
    ctx->pc = 0x4A8D3Cu;
label_4a8d3c:
    // 0x4a8d3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4a8d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4a8d40:
    // 0x4a8d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a8d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8d44:
    // 0x4a8d44: 0xc12a7a0  jal         func_4A9E80
label_4a8d48:
    if (ctx->pc == 0x4A8D48u) {
        ctx->pc = 0x4A8D48u;
            // 0x4a8d48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8D4Cu;
        goto label_4a8d4c;
    }
    ctx->pc = 0x4A8D44u;
    SET_GPR_U32(ctx, 31, 0x4A8D4Cu);
    ctx->pc = 0x4A8D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8D44u;
            // 0x4a8d48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8D4Cu; }
        if (ctx->pc != 0x4A8D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8D4Cu; }
        if (ctx->pc != 0x4A8D4Cu) { return; }
    }
    ctx->pc = 0x4A8D4Cu;
label_4a8d4c:
    // 0x4a8d4c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x4a8d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4a8d50:
    // 0x4a8d50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4a8d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4a8d54:
    // 0x4a8d54: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x4a8d54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4a8d58:
    // 0x4a8d58: 0x8fb20094  lw          $s2, 0x94($sp)
    ctx->pc = 0x4a8d58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4a8d5c:
    // 0x4a8d5c: 0x8fb1009c  lw          $s1, 0x9C($sp)
    ctx->pc = 0x4a8d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_4a8d60:
    // 0x4a8d60: 0x8fb400a0  lw          $s4, 0xA0($sp)
    ctx->pc = 0x4a8d60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_4a8d64:
    // 0x4a8d64: 0x8fb500a4  lw          $s5, 0xA4($sp)
    ctx->pc = 0x4a8d64u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_4a8d68:
    // 0x4a8d68: 0xc12a7a0  jal         func_4A9E80
label_4a8d6c:
    if (ctx->pc == 0x4A8D6Cu) {
        ctx->pc = 0x4A8D6Cu;
            // 0x4a8d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8D70u;
        goto label_4a8d70;
    }
    ctx->pc = 0x4A8D68u;
    SET_GPR_U32(ctx, 31, 0x4A8D70u);
    ctx->pc = 0x4A8D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8D68u;
            // 0x4a8d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8D70u; }
        if (ctx->pc != 0x4A8D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8D70u; }
        if (ctx->pc != 0x4A8D70u) { return; }
    }
    ctx->pc = 0x4A8D70u;
label_4a8d70:
    // 0x4a8d70: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x4a8d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4a8d74:
    // 0x4a8d74: 0xc12a458  jal         func_4A9160
label_4a8d78:
    if (ctx->pc == 0x4A8D78u) {
        ctx->pc = 0x4A8D78u;
            // 0x4a8d78: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x4A8D7Cu;
        goto label_4a8d7c;
    }
    ctx->pc = 0x4A8D74u;
    SET_GPR_U32(ctx, 31, 0x4A8D7Cu);
    ctx->pc = 0x4A8D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8D74u;
            // 0x4a8d78: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9160u;
    if (runtime->hasFunction(0x4A9160u)) {
        auto targetFn = runtime->lookupFunction(0x4A9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8D7Cu; }
        if (ctx->pc != 0x4A8D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9160_0x4a9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8D7Cu; }
        if (ctx->pc != 0x4A8D7Cu) { return; }
    }
    ctx->pc = 0x4A8D7Cu;
label_4a8d7c:
    // 0x4a8d7c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x4a8d7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_4a8d80:
    // 0x4a8d80: 0x16950007  bne         $s4, $s5, . + 4 + (0x7 << 2)
label_4a8d84:
    if (ctx->pc == 0x4A8D84u) {
        ctx->pc = 0x4A8D88u;
        goto label_4a8d88;
    }
    ctx->pc = 0x4A8D80u;
    {
        const bool branch_taken_0x4a8d80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        if (branch_taken_0x4a8d80) {
            ctx->pc = 0x4A8DA0u;
            goto label_4a8da0;
        }
    }
    ctx->pc = 0x4A8D88u;
label_4a8d88:
    // 0x4a8d88: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4a8d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4a8d8c:
    // 0x4a8d8c: 0x16710002  bne         $s3, $s1, . + 4 + (0x2 << 2)
label_4a8d90:
    if (ctx->pc == 0x4A8D90u) {
        ctx->pc = 0x4A8D94u;
        goto label_4a8d94;
    }
    ctx->pc = 0x4A8D8Cu;
    {
        const bool branch_taken_0x4a8d8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        if (branch_taken_0x4a8d8c) {
            ctx->pc = 0x4A8D98u;
            goto label_4a8d98;
        }
    }
    ctx->pc = 0x4A8D94u;
label_4a8d94:
    // 0x4a8d94: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4a8d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a8d98:
    // 0x4a8d98: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x4a8d98u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a8d9c:
    // 0x4a8d9c: 0x26950200  addiu       $s5, $s4, 0x200
    ctx->pc = 0x4a8d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
label_4a8da0:
    // 0x4a8da0: 0x1690fff4  bne         $s4, $s0, . + 4 + (-0xC << 2)
label_4a8da4:
    if (ctx->pc == 0x4A8DA4u) {
        ctx->pc = 0x4A8DA8u;
        goto label_4a8da8;
    }
    ctx->pc = 0x4A8DA0u;
    {
        const bool branch_taken_0x4a8da0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        if (branch_taken_0x4a8da0) {
            ctx->pc = 0x4A8D74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a8d74;
        }
    }
    ctx->pc = 0x4A8DA8u;
label_4a8da8:
    // 0x4a8da8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a8da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4a8dac:
    // 0x4a8dac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a8dacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a8db0:
    // 0x4a8db0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a8db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8db4:
    // 0x4a8db4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a8db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8db8:
    // 0x4a8db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a8db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8dbc:
    // 0x4a8dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a8dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8dc0:
    // 0x4a8dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a8dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8dc4:
    // 0x4a8dc4: 0x3e00008  jr          $ra
label_4a8dc8:
    if (ctx->pc == 0x4A8DC8u) {
        ctx->pc = 0x4A8DC8u;
            // 0x4a8dc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4A8DCCu;
        goto label_4a8dcc;
    }
    ctx->pc = 0x4A8DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8DC4u;
            // 0x4a8dc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A8DCCu;
label_4a8dcc:
    // 0x4a8dcc: 0x0  nop
    ctx->pc = 0x4a8dccu;
    // NOP
label_4a8dd0:
    // 0x4a8dd0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x4a8dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_4a8dd4:
    // 0x4a8dd4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4a8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4a8dd8:
    // 0x4a8dd8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4a8dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4a8ddc:
    // 0x4a8ddc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4a8ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4a8de0:
    // 0x4a8de0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4a8de0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8de4:
    // 0x4a8de4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a8de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4a8de8:
    // 0x4a8de8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a8de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a8dec:
    // 0x4a8dec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a8decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a8df0:
    // 0x4a8df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a8df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a8df4:
    // 0x4a8df4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a8df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a8df8:
    // 0x4a8df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a8df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a8dfc:
    // 0x4a8dfc: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x4a8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4a8e00:
    // 0x4a8e00: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
label_4a8e04:
    if (ctx->pc == 0x4A8E04u) {
        ctx->pc = 0x4A8E04u;
            // 0x4a8e04: 0x26f50064  addiu       $s5, $s7, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 100));
        ctx->pc = 0x4A8E08u;
        goto label_4a8e08;
    }
    ctx->pc = 0x4A8E00u;
    {
        const bool branch_taken_0x4a8e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8E00u;
            // 0x4a8e04: 0x26f50064  addiu       $s5, $s7, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8e00) {
            ctx->pc = 0x4A8F40u;
            goto label_4a8f40;
        }
    }
    ctx->pc = 0x4A8E08u;
label_4a8e08:
    // 0x4a8e08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4a8e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4a8e0c:
    // 0x4a8e0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a8e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a8e10:
    // 0x4a8e10: 0xc12a7a0  jal         func_4A9E80
label_4a8e14:
    if (ctx->pc == 0x4A8E14u) {
        ctx->pc = 0x4A8E14u;
            // 0x4a8e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8E18u;
        goto label_4a8e18;
    }
    ctx->pc = 0x4A8E10u;
    SET_GPR_U32(ctx, 31, 0x4A8E18u);
    ctx->pc = 0x4A8E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8E10u;
            // 0x4a8e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8E18u; }
        if (ctx->pc != 0x4A8E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8E18u; }
        if (ctx->pc != 0x4A8E18u) { return; }
    }
    ctx->pc = 0x4A8E18u;
label_4a8e18:
    // 0x4a8e18: 0x8fb200f0  lw          $s2, 0xF0($sp)
    ctx->pc = 0x4a8e18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4a8e1c:
    // 0x4a8e1c: 0x8fb000f4  lw          $s0, 0xF4($sp)
    ctx->pc = 0x4a8e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_4a8e20:
    // 0x4a8e20: 0x8fb600f8  lw          $s6, 0xF8($sp)
    ctx->pc = 0x4a8e20u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_4a8e24:
    // 0x4a8e24: 0x8fb100fc  lw          $s1, 0xFC($sp)
    ctx->pc = 0x4a8e24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_4a8e28:
    // 0x4a8e28: 0x8fb30100  lw          $s3, 0x100($sp)
    ctx->pc = 0x4a8e28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_4a8e2c:
    // 0x4a8e2c: 0x8fb40104  lw          $s4, 0x104($sp)
    ctx->pc = 0x4a8e2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_4a8e30:
    // 0x4a8e30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a8e34:
    // 0x4a8e34: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4a8e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a8e38:
    // 0x4a8e38: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4a8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4a8e3c:
    // 0x4a8e3c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x4a8e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a8e40:
    // 0x4a8e40: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x4a8e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a8e44:
    // 0x4a8e44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4a8e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4a8e48:
    // 0x4a8e48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x4a8e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_4a8e4c:
    // 0x4a8e4c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x4a8e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a8e50:
    // 0x4a8e50: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x4a8e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a8e54:
    // 0x4a8e54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4a8e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a8e58:
    // 0x4a8e58: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_4a8e5c:
    if (ctx->pc == 0x4A8E5Cu) {
        ctx->pc = 0x4A8E60u;
        goto label_4a8e60;
    }
    ctx->pc = 0x4A8E58u;
    {
        const bool branch_taken_0x4a8e58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a8e58) {
            ctx->pc = 0x4A8EF8u;
            goto label_4a8ef8;
        }
    }
    ctx->pc = 0x4A8E60u;
label_4a8e60:
    // 0x4a8e60: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a8e64:
    // 0x4a8e64: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x4a8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4a8e68:
    // 0x4a8e68: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x4a8e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_4a8e6c:
    // 0x4a8e6c: 0x90620060  lbu         $v0, 0x60($v1)
    ctx->pc = 0x4a8e6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 96)));
label_4a8e70:
    // 0x4a8e70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a8e74:
    // 0x4a8e74: 0xa0620060  sb          $v0, 0x60($v1)
    ctx->pc = 0x4a8e74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 2));
label_4a8e78:
    // 0x4a8e78: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4a8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a8e7c:
    // 0x4a8e7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4a8e80:
    if (ctx->pc == 0x4A8E80u) {
        ctx->pc = 0x4A8E84u;
        goto label_4a8e84;
    }
    ctx->pc = 0x4A8E7Cu;
    {
        const bool branch_taken_0x4a8e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8e7c) {
            ctx->pc = 0x4A8E98u;
            goto label_4a8e98;
        }
    }
    ctx->pc = 0x4A8E84u;
label_4a8e84:
    // 0x4a8e84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a8e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a8e88:
    // 0x4a8e88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4a8e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4a8e8c:
    // 0x4a8e8c: 0x320f809  jalr        $t9
label_4a8e90:
    if (ctx->pc == 0x4A8E90u) {
        ctx->pc = 0x4A8E90u;
            // 0x4a8e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A8E94u;
        goto label_4a8e94;
    }
    ctx->pc = 0x4A8E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A8E94u);
        ctx->pc = 0x4A8E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8E8Cu;
            // 0x4a8e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A8E94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A8E94u; }
            if (ctx->pc != 0x4A8E94u) { return; }
        }
        }
    }
    ctx->pc = 0x4A8E94u;
label_4a8e94:
    // 0x4a8e94: 0x0  nop
    ctx->pc = 0x4a8e94u;
    // NOP
label_4a8e98:
    // 0x4a8e98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4a8e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4a8e9c:
    // 0x4a8e9c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x4a8e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4a8ea0:
    // 0x4a8ea0: 0xafb20110  sw          $s2, 0x110($sp)
    ctx->pc = 0x4a8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 18));
label_4a8ea4:
    // 0x4a8ea4: 0xafb00114  sw          $s0, 0x114($sp)
    ctx->pc = 0x4a8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 16));
label_4a8ea8:
    // 0x4a8ea8: 0xafb60118  sw          $s6, 0x118($sp)
    ctx->pc = 0x4a8ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 22));
label_4a8eac:
    // 0x4a8eac: 0xafb1011c  sw          $s1, 0x11C($sp)
    ctx->pc = 0x4a8eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 17));
label_4a8eb0:
    // 0x4a8eb0: 0xafb30120  sw          $s3, 0x120($sp)
    ctx->pc = 0x4a8eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 19));
label_4a8eb4:
    // 0x4a8eb4: 0xc12a410  jal         func_4A9040
label_4a8eb8:
    if (ctx->pc == 0x4A8EB8u) {
        ctx->pc = 0x4A8EB8u;
            // 0x4a8eb8: 0xafb40124  sw          $s4, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 20));
        ctx->pc = 0x4A8EBCu;
        goto label_4a8ebc;
    }
    ctx->pc = 0x4A8EB4u;
    SET_GPR_U32(ctx, 31, 0x4A8EBCu);
    ctx->pc = 0x4A8EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8EB4u;
            // 0x4a8eb8: 0xafb40124  sw          $s4, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9040u;
    if (runtime->hasFunction(0x4A9040u)) {
        auto targetFn = runtime->lookupFunction(0x4A9040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8EBCu; }
        if (ctx->pc != 0x4A8EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9040_0x4a9040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8EBCu; }
        if (ctx->pc != 0x4A8EBCu) { return; }
    }
    ctx->pc = 0x4A8EBCu;
label_4a8ebc:
    // 0x4a8ebc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4a8ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4a8ec0:
    // 0x4a8ec0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a8ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a8ec4:
    // 0x4a8ec4: 0xc12a3ec  jal         func_4A8FB0
label_4a8ec8:
    if (ctx->pc == 0x4A8EC8u) {
        ctx->pc = 0x4A8EC8u;
            // 0x4a8ec8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4A8ECCu;
        goto label_4a8ecc;
    }
    ctx->pc = 0x4A8EC4u;
    SET_GPR_U32(ctx, 31, 0x4A8ECCu);
    ctx->pc = 0x4A8EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8EC4u;
            // 0x4a8ec8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (runtime->hasFunction(0x4A8FB0u)) {
        auto targetFn = runtime->lookupFunction(0x4A8FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8ECCu; }
        if (ctx->pc != 0x4A8ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8FB0_0x4a8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8ECCu; }
        if (ctx->pc != 0x4A8ECCu) { return; }
    }
    ctx->pc = 0x4A8ECCu;
label_4a8ecc:
    // 0x4a8ecc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4a8eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4a8ed0:
    // 0x4a8ed0: 0xc12a3dc  jal         func_4A8F70
label_4a8ed4:
    if (ctx->pc == 0x4A8ED4u) {
        ctx->pc = 0x4A8ED4u;
            // 0x4a8ed4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4A8ED8u;
        goto label_4a8ed8;
    }
    ctx->pc = 0x4A8ED0u;
    SET_GPR_U32(ctx, 31, 0x4A8ED8u);
    ctx->pc = 0x4A8ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8ED0u;
            // 0x4a8ed4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A8F70u;
    if (runtime->hasFunction(0x4A8F70u)) {
        auto targetFn = runtime->lookupFunction(0x4A8F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8ED8u; }
        if (ctx->pc != 0x4A8ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8F70_0x4a8f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8ED8u; }
        if (ctx->pc != 0x4A8ED8u) { return; }
    }
    ctx->pc = 0x4A8ED8u;
label_4a8ed8:
    // 0x4a8ed8: 0x8fb00134  lw          $s0, 0x134($sp)
    ctx->pc = 0x4a8ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_4a8edc:
    // 0x4a8edc: 0x8fb60138  lw          $s6, 0x138($sp)
    ctx->pc = 0x4a8edcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_4a8ee0:
    // 0x4a8ee0: 0x8fb1013c  lw          $s1, 0x13C($sp)
    ctx->pc = 0x4a8ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4a8ee4:
    // 0x4a8ee4: 0x8fb30140  lw          $s3, 0x140($sp)
    ctx->pc = 0x4a8ee4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4a8ee8:
    // 0x4a8ee8: 0x8fb40144  lw          $s4, 0x144($sp)
    ctx->pc = 0x4a8ee8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_4a8eec:
    // 0x4a8eec: 0x1000000c  b           . + 4 + (0xC << 2)
label_4a8ef0:
    if (ctx->pc == 0x4A8EF0u) {
        ctx->pc = 0x4A8EF0u;
            // 0x4a8ef0: 0x8fb20130  lw          $s2, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->pc = 0x4A8EF4u;
        goto label_4a8ef4;
    }
    ctx->pc = 0x4A8EECu;
    {
        const bool branch_taken_0x4a8eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8EECu;
            // 0x4a8ef0: 0x8fb20130  lw          $s2, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8eec) {
            ctx->pc = 0x4A8F20u;
            goto label_4a8f20;
        }
    }
    ctx->pc = 0x4A8EF4u;
label_4a8ef4:
    // 0x4a8ef4: 0x0  nop
    ctx->pc = 0x4a8ef4u;
    // NOP
label_4a8ef8:
    // 0x4a8ef8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4a8ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4a8efc:
    // 0x4a8efc: 0x16740008  bne         $s3, $s4, . + 4 + (0x8 << 2)
label_4a8f00:
    if (ctx->pc == 0x4A8F00u) {
        ctx->pc = 0x4A8F04u;
        goto label_4a8f04;
    }
    ctx->pc = 0x4A8EFCu;
    {
        const bool branch_taken_0x4a8efc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x4a8efc) {
            ctx->pc = 0x4A8F20u;
            goto label_4a8f20;
        }
    }
    ctx->pc = 0x4A8F04u;
label_4a8f04:
    // 0x4a8f04: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4a8f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4a8f08:
    // 0x4a8f08: 0x16510003  bne         $s2, $s1, . + 4 + (0x3 << 2)
label_4a8f0c:
    if (ctx->pc == 0x4A8F0Cu) {
        ctx->pc = 0x4A8F10u;
        goto label_4a8f10;
    }
    ctx->pc = 0x4A8F08u;
    {
        const bool branch_taken_0x4a8f08 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x4a8f08) {
            ctx->pc = 0x4A8F18u;
            goto label_4a8f18;
        }
    }
    ctx->pc = 0x4A8F10u;
label_4a8f10:
    // 0x4a8f10: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4a8f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8f14:
    // 0x4a8f14: 0x0  nop
    ctx->pc = 0x4a8f14u;
    // NOP
label_4a8f18:
    // 0x4a8f18: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x4a8f18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a8f1c:
    // 0x4a8f1c: 0x26740200  addiu       $s4, $s3, 0x200
    ctx->pc = 0x4a8f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_4a8f20:
    // 0x4a8f20: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x4a8f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
label_4a8f24:
    // 0x4a8f24: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4a8f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4a8f28:
    // 0x4a8f28: 0xc12a7a0  jal         func_4A9E80
label_4a8f2c:
    if (ctx->pc == 0x4A8F2Cu) {
        ctx->pc = 0x4A8F2Cu;
            // 0x4a8f2c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A8F30u;
        goto label_4a8f30;
    }
    ctx->pc = 0x4A8F28u;
    SET_GPR_U32(ctx, 31, 0x4A8F30u);
    ctx->pc = 0x4A8F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8F28u;
            // 0x4a8f2c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9E80u;
    if (runtime->hasFunction(0x4A9E80u)) {
        auto targetFn = runtime->lookupFunction(0x4A9E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8F30u; }
        if (ctx->pc != 0x4A8F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9E80_0x4a9e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A8F30u; }
        if (ctx->pc != 0x4A8F30u) { return; }
    }
    ctx->pc = 0x4A8F30u;
label_4a8f30:
    // 0x4a8f30: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x4a8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_4a8f34:
    // 0x4a8f34: 0x1663ffbe  bne         $s3, $v1, . + 4 + (-0x42 << 2)
label_4a8f38:
    if (ctx->pc == 0x4A8F38u) {
        ctx->pc = 0x4A8F3Cu;
        goto label_4a8f3c;
    }
    ctx->pc = 0x4A8F34u;
    {
        const bool branch_taken_0x4a8f34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a8f34) {
            ctx->pc = 0x4A8E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a8e30;
        }
    }
    ctx->pc = 0x4A8F3Cu;
label_4a8f3c:
    // 0x4a8f3c: 0x0  nop
    ctx->pc = 0x4a8f3cu;
    // NOP
label_4a8f40:
    // 0x4a8f40: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4a8f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4a8f44:
    // 0x4a8f44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4a8f44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a8f48:
    // 0x4a8f48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4a8f48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a8f4c:
    // 0x4a8f4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a8f4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a8f50:
    // 0x4a8f50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a8f50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a8f54:
    // 0x4a8f54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a8f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8f58:
    // 0x4a8f58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a8f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8f5c:
    // 0x4a8f5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a8f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8f60:
    // 0x4a8f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a8f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8f64:
    // 0x4a8f64: 0x3e00008  jr          $ra
label_4a8f68:
    if (ctx->pc == 0x4A8F68u) {
        ctx->pc = 0x4A8F68u;
            // 0x4a8f68: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x4A8F6Cu;
        goto label_4a8f6c;
    }
    ctx->pc = 0x4A8F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A8F64u;
            // 0x4a8f68: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A8F6Cu;
label_4a8f6c:
    // 0x4a8f6c: 0x0  nop
    ctx->pc = 0x4a8f6cu;
    // NOP
}
