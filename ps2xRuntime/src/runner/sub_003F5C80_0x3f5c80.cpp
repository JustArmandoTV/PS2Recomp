#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F5C80
// Address: 0x3f5c80 - 0x3f5f10
void sub_003F5C80_0x3f5c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5C80_0x3f5c80");
#endif

    switch (ctx->pc) {
        case 0x3f5c80u: goto label_3f5c80;
        case 0x3f5c84u: goto label_3f5c84;
        case 0x3f5c88u: goto label_3f5c88;
        case 0x3f5c8cu: goto label_3f5c8c;
        case 0x3f5c90u: goto label_3f5c90;
        case 0x3f5c94u: goto label_3f5c94;
        case 0x3f5c98u: goto label_3f5c98;
        case 0x3f5c9cu: goto label_3f5c9c;
        case 0x3f5ca0u: goto label_3f5ca0;
        case 0x3f5ca4u: goto label_3f5ca4;
        case 0x3f5ca8u: goto label_3f5ca8;
        case 0x3f5cacu: goto label_3f5cac;
        case 0x3f5cb0u: goto label_3f5cb0;
        case 0x3f5cb4u: goto label_3f5cb4;
        case 0x3f5cb8u: goto label_3f5cb8;
        case 0x3f5cbcu: goto label_3f5cbc;
        case 0x3f5cc0u: goto label_3f5cc0;
        case 0x3f5cc4u: goto label_3f5cc4;
        case 0x3f5cc8u: goto label_3f5cc8;
        case 0x3f5cccu: goto label_3f5ccc;
        case 0x3f5cd0u: goto label_3f5cd0;
        case 0x3f5cd4u: goto label_3f5cd4;
        case 0x3f5cd8u: goto label_3f5cd8;
        case 0x3f5cdcu: goto label_3f5cdc;
        case 0x3f5ce0u: goto label_3f5ce0;
        case 0x3f5ce4u: goto label_3f5ce4;
        case 0x3f5ce8u: goto label_3f5ce8;
        case 0x3f5cecu: goto label_3f5cec;
        case 0x3f5cf0u: goto label_3f5cf0;
        case 0x3f5cf4u: goto label_3f5cf4;
        case 0x3f5cf8u: goto label_3f5cf8;
        case 0x3f5cfcu: goto label_3f5cfc;
        case 0x3f5d00u: goto label_3f5d00;
        case 0x3f5d04u: goto label_3f5d04;
        case 0x3f5d08u: goto label_3f5d08;
        case 0x3f5d0cu: goto label_3f5d0c;
        case 0x3f5d10u: goto label_3f5d10;
        case 0x3f5d14u: goto label_3f5d14;
        case 0x3f5d18u: goto label_3f5d18;
        case 0x3f5d1cu: goto label_3f5d1c;
        case 0x3f5d20u: goto label_3f5d20;
        case 0x3f5d24u: goto label_3f5d24;
        case 0x3f5d28u: goto label_3f5d28;
        case 0x3f5d2cu: goto label_3f5d2c;
        case 0x3f5d30u: goto label_3f5d30;
        case 0x3f5d34u: goto label_3f5d34;
        case 0x3f5d38u: goto label_3f5d38;
        case 0x3f5d3cu: goto label_3f5d3c;
        case 0x3f5d40u: goto label_3f5d40;
        case 0x3f5d44u: goto label_3f5d44;
        case 0x3f5d48u: goto label_3f5d48;
        case 0x3f5d4cu: goto label_3f5d4c;
        case 0x3f5d50u: goto label_3f5d50;
        case 0x3f5d54u: goto label_3f5d54;
        case 0x3f5d58u: goto label_3f5d58;
        case 0x3f5d5cu: goto label_3f5d5c;
        case 0x3f5d60u: goto label_3f5d60;
        case 0x3f5d64u: goto label_3f5d64;
        case 0x3f5d68u: goto label_3f5d68;
        case 0x3f5d6cu: goto label_3f5d6c;
        case 0x3f5d70u: goto label_3f5d70;
        case 0x3f5d74u: goto label_3f5d74;
        case 0x3f5d78u: goto label_3f5d78;
        case 0x3f5d7cu: goto label_3f5d7c;
        case 0x3f5d80u: goto label_3f5d80;
        case 0x3f5d84u: goto label_3f5d84;
        case 0x3f5d88u: goto label_3f5d88;
        case 0x3f5d8cu: goto label_3f5d8c;
        case 0x3f5d90u: goto label_3f5d90;
        case 0x3f5d94u: goto label_3f5d94;
        case 0x3f5d98u: goto label_3f5d98;
        case 0x3f5d9cu: goto label_3f5d9c;
        case 0x3f5da0u: goto label_3f5da0;
        case 0x3f5da4u: goto label_3f5da4;
        case 0x3f5da8u: goto label_3f5da8;
        case 0x3f5dacu: goto label_3f5dac;
        case 0x3f5db0u: goto label_3f5db0;
        case 0x3f5db4u: goto label_3f5db4;
        case 0x3f5db8u: goto label_3f5db8;
        case 0x3f5dbcu: goto label_3f5dbc;
        case 0x3f5dc0u: goto label_3f5dc0;
        case 0x3f5dc4u: goto label_3f5dc4;
        case 0x3f5dc8u: goto label_3f5dc8;
        case 0x3f5dccu: goto label_3f5dcc;
        case 0x3f5dd0u: goto label_3f5dd0;
        case 0x3f5dd4u: goto label_3f5dd4;
        case 0x3f5dd8u: goto label_3f5dd8;
        case 0x3f5ddcu: goto label_3f5ddc;
        case 0x3f5de0u: goto label_3f5de0;
        case 0x3f5de4u: goto label_3f5de4;
        case 0x3f5de8u: goto label_3f5de8;
        case 0x3f5decu: goto label_3f5dec;
        case 0x3f5df0u: goto label_3f5df0;
        case 0x3f5df4u: goto label_3f5df4;
        case 0x3f5df8u: goto label_3f5df8;
        case 0x3f5dfcu: goto label_3f5dfc;
        case 0x3f5e00u: goto label_3f5e00;
        case 0x3f5e04u: goto label_3f5e04;
        case 0x3f5e08u: goto label_3f5e08;
        case 0x3f5e0cu: goto label_3f5e0c;
        case 0x3f5e10u: goto label_3f5e10;
        case 0x3f5e14u: goto label_3f5e14;
        case 0x3f5e18u: goto label_3f5e18;
        case 0x3f5e1cu: goto label_3f5e1c;
        case 0x3f5e20u: goto label_3f5e20;
        case 0x3f5e24u: goto label_3f5e24;
        case 0x3f5e28u: goto label_3f5e28;
        case 0x3f5e2cu: goto label_3f5e2c;
        case 0x3f5e30u: goto label_3f5e30;
        case 0x3f5e34u: goto label_3f5e34;
        case 0x3f5e38u: goto label_3f5e38;
        case 0x3f5e3cu: goto label_3f5e3c;
        case 0x3f5e40u: goto label_3f5e40;
        case 0x3f5e44u: goto label_3f5e44;
        case 0x3f5e48u: goto label_3f5e48;
        case 0x3f5e4cu: goto label_3f5e4c;
        case 0x3f5e50u: goto label_3f5e50;
        case 0x3f5e54u: goto label_3f5e54;
        case 0x3f5e58u: goto label_3f5e58;
        case 0x3f5e5cu: goto label_3f5e5c;
        case 0x3f5e60u: goto label_3f5e60;
        case 0x3f5e64u: goto label_3f5e64;
        case 0x3f5e68u: goto label_3f5e68;
        case 0x3f5e6cu: goto label_3f5e6c;
        case 0x3f5e70u: goto label_3f5e70;
        case 0x3f5e74u: goto label_3f5e74;
        case 0x3f5e78u: goto label_3f5e78;
        case 0x3f5e7cu: goto label_3f5e7c;
        case 0x3f5e80u: goto label_3f5e80;
        case 0x3f5e84u: goto label_3f5e84;
        case 0x3f5e88u: goto label_3f5e88;
        case 0x3f5e8cu: goto label_3f5e8c;
        case 0x3f5e90u: goto label_3f5e90;
        case 0x3f5e94u: goto label_3f5e94;
        case 0x3f5e98u: goto label_3f5e98;
        case 0x3f5e9cu: goto label_3f5e9c;
        case 0x3f5ea0u: goto label_3f5ea0;
        case 0x3f5ea4u: goto label_3f5ea4;
        case 0x3f5ea8u: goto label_3f5ea8;
        case 0x3f5eacu: goto label_3f5eac;
        case 0x3f5eb0u: goto label_3f5eb0;
        case 0x3f5eb4u: goto label_3f5eb4;
        case 0x3f5eb8u: goto label_3f5eb8;
        case 0x3f5ebcu: goto label_3f5ebc;
        case 0x3f5ec0u: goto label_3f5ec0;
        case 0x3f5ec4u: goto label_3f5ec4;
        case 0x3f5ec8u: goto label_3f5ec8;
        case 0x3f5eccu: goto label_3f5ecc;
        case 0x3f5ed0u: goto label_3f5ed0;
        case 0x3f5ed4u: goto label_3f5ed4;
        case 0x3f5ed8u: goto label_3f5ed8;
        case 0x3f5edcu: goto label_3f5edc;
        case 0x3f5ee0u: goto label_3f5ee0;
        case 0x3f5ee4u: goto label_3f5ee4;
        case 0x3f5ee8u: goto label_3f5ee8;
        case 0x3f5eecu: goto label_3f5eec;
        case 0x3f5ef0u: goto label_3f5ef0;
        case 0x3f5ef4u: goto label_3f5ef4;
        case 0x3f5ef8u: goto label_3f5ef8;
        case 0x3f5efcu: goto label_3f5efc;
        case 0x3f5f00u: goto label_3f5f00;
        case 0x3f5f04u: goto label_3f5f04;
        case 0x3f5f08u: goto label_3f5f08;
        case 0x3f5f0cu: goto label_3f5f0c;
        default: break;
    }

    ctx->pc = 0x3f5c80u;

label_3f5c80:
    // 0x3f5c80: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x3f5c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_3f5c84:
    // 0x3f5c84: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3f5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3f5c88:
    // 0x3f5c88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f5c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f5c8c:
    // 0x3f5c8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f5c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f5c90:
    // 0x3f5c90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f5c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f5c94:
    // 0x3f5c94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f5c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f5c98:
    // 0x3f5c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f5c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f5c9c:
    // 0x3f5c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f5ca0:
    // 0x3f5ca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f5ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5ca4:
    // 0x3f5ca4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3f5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3f5ca8:
    // 0x3f5ca8: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x3f5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3f5cac:
    // 0x3f5cac: 0x8c520130  lw          $s2, 0x130($v0)
    ctx->pc = 0x3f5cacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_3f5cb0:
    // 0x3f5cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f5cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f5cb4:
    // 0x3f5cb4: 0x2441004  sllv        $v0, $a0, $s2
    ctx->pc = 0x3f5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 18) & 0x1F));
label_3f5cb8:
    // 0x3f5cb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3f5cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f5cbc:
    // 0x3f5cbc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3f5cc0:
    if (ctx->pc == 0x3F5CC0u) {
        ctx->pc = 0x3F5CC0u;
            // 0x3f5cc0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CC4u;
        goto label_3f5cc4;
    }
    ctx->pc = 0x3F5CBCu;
    {
        const bool branch_taken_0x3f5cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5CBCu;
            // 0x3f5cc0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5cbc) {
            ctx->pc = 0x3F5D18u;
            goto label_3f5d18;
        }
    }
    ctx->pc = 0x3F5CC4u;
label_3f5cc4:
    // 0x3f5cc4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3f5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f5cc8:
    // 0x3f5cc8: 0xc04f278  jal         func_13C9E0
label_3f5ccc:
    if (ctx->pc == 0x3F5CCCu) {
        ctx->pc = 0x3F5CCCu;
            // 0x3f5ccc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x3F5CD0u;
        goto label_3f5cd0;
    }
    ctx->pc = 0x3F5CC8u;
    SET_GPR_U32(ctx, 31, 0x3F5CD0u);
    ctx->pc = 0x3F5CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5CC8u;
            // 0x3f5ccc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5CD0u; }
        if (ctx->pc != 0x3F5CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5CD0u; }
        if (ctx->pc != 0x3F5CD0u) { return; }
    }
    ctx->pc = 0x3F5CD0u;
label_3f5cd0:
    // 0x3f5cd0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3f5cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3f5cd4:
    // 0x3f5cd4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3f5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3f5cd8:
    // 0x3f5cd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3f5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3f5cdc:
    // 0x3f5cdc: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3f5cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3f5ce0:
    // 0x3f5ce0: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x3f5ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5ce4:
    // 0x3f5ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f5ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f5ce8:
    // 0x3f5ce8: 0x0  nop
    ctx->pc = 0x3f5ce8u;
    // NOP
label_3f5cec:
    // 0x3f5cec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3f5cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f5cf0:
    // 0x3f5cf0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5cf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f5cf4:
    // 0x3f5cf4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3f5cf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3f5cf8:
    // 0x3f5cf8: 0xc04f29c  jal         func_13CA70
label_3f5cfc:
    if (ctx->pc == 0x3F5CFCu) {
        ctx->pc = 0x3F5CFCu;
            // 0x3f5cfc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3F5D00u;
        goto label_3f5d00;
    }
    ctx->pc = 0x3F5CF8u;
    SET_GPR_U32(ctx, 31, 0x3F5D00u);
    ctx->pc = 0x3F5CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5CF8u;
            // 0x3f5cfc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D00u; }
        if (ctx->pc != 0x3F5D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D00u; }
        if (ctx->pc != 0x3F5D00u) { return; }
    }
    ctx->pc = 0x3F5D00u;
label_3f5d00:
    // 0x3f5d00: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3f5d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3f5d04:
    // 0x3f5d04: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3f5d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f5d08:
    // 0x3f5d08: 0xc04cd60  jal         func_133580
label_3f5d0c:
    if (ctx->pc == 0x3F5D0Cu) {
        ctx->pc = 0x3F5D0Cu;
            // 0x3f5d0c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3F5D10u;
        goto label_3f5d10;
    }
    ctx->pc = 0x3F5D08u;
    SET_GPR_U32(ctx, 31, 0x3F5D10u);
    ctx->pc = 0x3F5D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5D08u;
            // 0x3f5d0c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D10u; }
        if (ctx->pc != 0x3F5D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D10u; }
        if (ctx->pc != 0x3F5D10u) { return; }
    }
    ctx->pc = 0x3F5D10u;
label_3f5d10:
    // 0x3f5d10: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f5d14:
    if (ctx->pc == 0x3F5D14u) {
        ctx->pc = 0x3F5D14u;
            // 0x3f5d14: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->pc = 0x3F5D18u;
        goto label_3f5d18;
    }
    ctx->pc = 0x3F5D10u;
    {
        const bool branch_taken_0x3f5d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5D10u;
            // 0x3f5d14: 0x121180  sll         $v0, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5d10) {
            ctx->pc = 0x3F5D28u;
            goto label_3f5d28;
        }
    }
    ctx->pc = 0x3F5D18u;
label_3f5d18:
    // 0x3f5d18: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3f5d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3f5d1c:
    // 0x3f5d1c: 0xc04f278  jal         func_13C9E0
label_3f5d20:
    if (ctx->pc == 0x3F5D20u) {
        ctx->pc = 0x3F5D20u;
            // 0x3f5d20: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x3F5D24u;
        goto label_3f5d24;
    }
    ctx->pc = 0x3F5D1Cu;
    SET_GPR_U32(ctx, 31, 0x3F5D24u);
    ctx->pc = 0x3F5D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5D1Cu;
            // 0x3f5d20: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D24u; }
        if (ctx->pc != 0x3F5D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D24u; }
        if (ctx->pc != 0x3F5D24u) { return; }
    }
    ctx->pc = 0x3F5D24u;
label_3f5d24:
    // 0x3f5d24: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x3f5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_3f5d28:
    // 0x3f5d28: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3f5d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3f5d2c:
    // 0x3f5d2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3f5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3f5d30:
    // 0x3f5d30: 0xc04cce8  jal         func_1333A0
label_3f5d34:
    if (ctx->pc == 0x3F5D34u) {
        ctx->pc = 0x3F5D34u;
            // 0x3f5d34: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->pc = 0x3F5D38u;
        goto label_3f5d38;
    }
    ctx->pc = 0x3F5D30u;
    SET_GPR_U32(ctx, 31, 0x3F5D38u);
    ctx->pc = 0x3F5D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5D30u;
            // 0x3f5d34: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D38u; }
        if (ctx->pc != 0x3F5D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D38u; }
        if (ctx->pc != 0x3F5D38u) { return; }
    }
    ctx->pc = 0x3F5D38u;
label_3f5d38:
    // 0x3f5d38: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3f5d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3f5d3c:
    // 0x3f5d3c: 0xc04ce80  jal         func_133A00
label_3f5d40:
    if (ctx->pc == 0x3F5D40u) {
        ctx->pc = 0x3F5D40u;
            // 0x3f5d40: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x3F5D44u;
        goto label_3f5d44;
    }
    ctx->pc = 0x3F5D3Cu;
    SET_GPR_U32(ctx, 31, 0x3F5D44u);
    ctx->pc = 0x3F5D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5D3Cu;
            // 0x3f5d40: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D44u; }
        if (ctx->pc != 0x3F5D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D44u; }
        if (ctx->pc != 0x3F5D44u) { return; }
    }
    ctx->pc = 0x3F5D44u;
label_3f5d44:
    // 0x3f5d44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f5d48:
    // 0x3f5d48: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x3f5d48u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_3f5d4c:
    // 0x3f5d4c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3f5d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3f5d50:
    // 0x3f5d50: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x3f5d50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5d54:
    // 0x3f5d54: 0xc07698c  jal         func_1DA630
label_3f5d58:
    if (ctx->pc == 0x3F5D58u) {
        ctx->pc = 0x3F5D58u;
            // 0x3f5d58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5D5Cu;
        goto label_3f5d5c;
    }
    ctx->pc = 0x3F5D54u;
    SET_GPR_U32(ctx, 31, 0x3F5D5Cu);
    ctx->pc = 0x3F5D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5D54u;
            // 0x3f5d58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D5Cu; }
        if (ctx->pc != 0x3F5D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D5Cu; }
        if (ctx->pc != 0x3F5D5Cu) { return; }
    }
    ctx->pc = 0x3F5D5Cu;
label_3f5d5c:
    // 0x3f5d5c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f5d60:
    // 0x3f5d60: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3f5d64:
    if (ctx->pc == 0x3F5D64u) {
        ctx->pc = 0x3F5D68u;
        goto label_3f5d68;
    }
    ctx->pc = 0x3F5D60u;
    {
        const bool branch_taken_0x3f5d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f5d60) {
            ctx->pc = 0x3F5D70u;
            goto label_3f5d70;
        }
    }
    ctx->pc = 0x3F5D68u;
label_3f5d68:
    // 0x3f5d68: 0x10000035  b           . + 4 + (0x35 << 2)
label_3f5d6c:
    if (ctx->pc == 0x3F5D6Cu) {
        ctx->pc = 0x3F5D6Cu;
            // 0x3f5d6c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3F5D70u;
        goto label_3f5d70;
    }
    ctx->pc = 0x3F5D68u;
    {
        const bool branch_taken_0x3f5d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5D68u;
            // 0x3f5d6c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5d68) {
            ctx->pc = 0x3F5E40u;
            goto label_3f5e40;
        }
    }
    ctx->pc = 0x3F5D70u;
label_3f5d70:
    // 0x3f5d70: 0xc0576f4  jal         func_15DBD0
label_3f5d74:
    if (ctx->pc == 0x3F5D74u) {
        ctx->pc = 0x3F5D78u;
        goto label_3f5d78;
    }
    ctx->pc = 0x3F5D70u;
    SET_GPR_U32(ctx, 31, 0x3F5D78u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D78u; }
        if (ctx->pc != 0x3F5D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D78u; }
        if (ctx->pc != 0x3F5D78u) { return; }
    }
    ctx->pc = 0x3F5D78u;
label_3f5d78:
    // 0x3f5d78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d7c:
    // 0x3f5d7c: 0xc076984  jal         func_1DA610
label_3f5d80:
    if (ctx->pc == 0x3F5D80u) {
        ctx->pc = 0x3F5D80u;
            // 0x3f5d80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5D84u;
        goto label_3f5d84;
    }
    ctx->pc = 0x3F5D7Cu;
    SET_GPR_U32(ctx, 31, 0x3F5D84u);
    ctx->pc = 0x3F5D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5D7Cu;
            // 0x3f5d80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D84u; }
        if (ctx->pc != 0x3F5D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5D84u; }
        if (ctx->pc != 0x3F5D84u) { return; }
    }
    ctx->pc = 0x3F5D84u;
label_3f5d84:
    // 0x3f5d84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3f5d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d88:
    // 0x3f5d88: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3f5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3f5d8c:
    // 0x3f5d8c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3f5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3f5d90:
    // 0x3f5d90: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3f5d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3f5d94:
    // 0x3f5d94: 0xc442fa70  lwc1        $f2, -0x590($v0)
    ctx->pc = 0x3f5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f5d98:
    // 0x3f5d98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3f5d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5d9c:
    // 0x3f5d9c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3f5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3f5da0:
    // 0x3f5da0: 0xc441fa78  lwc1        $f1, -0x588($v0)
    ctx->pc = 0x3f5da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5da4:
    // 0x3f5da4: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x3f5da4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3f5da8:
    // 0x3f5da8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3f5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3f5dac:
    // 0x3f5dac: 0xc440fa7c  lwc1        $f0, -0x584($v0)
    ctx->pc = 0x3f5dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5db0:
    // 0x3f5db0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x3f5db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3f5db4:
    // 0x3f5db4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3f5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3f5db8:
    // 0x3f5db8: 0x8c42fa74  lw          $v0, -0x58C($v0)
    ctx->pc = 0x3f5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965876)));
label_3f5dbc:
    // 0x3f5dbc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x3f5dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_3f5dc0:
    // 0x3f5dc0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x3f5dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_3f5dc4:
    // 0x3f5dc4: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x3f5dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5dc8:
    // 0x3f5dc8: 0xc04cca0  jal         func_133280
label_3f5dcc:
    if (ctx->pc == 0x3F5DCCu) {
        ctx->pc = 0x3F5DCCu;
            // 0x3f5dcc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->pc = 0x3F5DD0u;
        goto label_3f5dd0;
    }
    ctx->pc = 0x3F5DC8u;
    SET_GPR_U32(ctx, 31, 0x3F5DD0u);
    ctx->pc = 0x3F5DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5DC8u;
            // 0x3f5dcc: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5DD0u; }
        if (ctx->pc != 0x3F5DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5DD0u; }
        if (ctx->pc != 0x3F5DD0u) { return; }
    }
    ctx->pc = 0x3F5DD0u;
label_3f5dd0:
    // 0x3f5dd0: 0xc076980  jal         func_1DA600
label_3f5dd4:
    if (ctx->pc == 0x3F5DD4u) {
        ctx->pc = 0x3F5DD4u;
            // 0x3f5dd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5DD8u;
        goto label_3f5dd8;
    }
    ctx->pc = 0x3F5DD0u;
    SET_GPR_U32(ctx, 31, 0x3F5DD8u);
    ctx->pc = 0x3F5DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5DD0u;
            // 0x3f5dd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5DD8u; }
        if (ctx->pc != 0x3F5DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5DD8u; }
        if (ctx->pc != 0x3F5DD8u) { return; }
    }
    ctx->pc = 0x3F5DD8u;
label_3f5dd8:
    // 0x3f5dd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3f5dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3f5ddc:
    // 0x3f5ddc: 0xc04cc34  jal         func_1330D0
label_3f5de0:
    if (ctx->pc == 0x3F5DE0u) {
        ctx->pc = 0x3F5DE0u;
            // 0x3f5de0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5DE4u;
        goto label_3f5de4;
    }
    ctx->pc = 0x3F5DDCu;
    SET_GPR_U32(ctx, 31, 0x3F5DE4u);
    ctx->pc = 0x3F5DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5DDCu;
            // 0x3f5de0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5DE4u; }
        if (ctx->pc != 0x3F5DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5DE4u; }
        if (ctx->pc != 0x3F5DE4u) { return; }
    }
    ctx->pc = 0x3F5DE4u;
label_3f5de4:
    // 0x3f5de4: 0x3c034874  lui         $v1, 0x4874
    ctx->pc = 0x3f5de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18548 << 16));
label_3f5de8:
    // 0x3f5de8: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x3f5de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_3f5dec:
    // 0x3f5dec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f5decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f5df0:
    // 0x3f5df0: 0x0  nop
    ctx->pc = 0x3f5df0u;
    // NOP
label_3f5df4:
    // 0x3f5df4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3f5df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f5df8:
    // 0x3f5df8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3f5dfc:
    if (ctx->pc == 0x3F5DFCu) {
        ctx->pc = 0x3F5DFCu;
            // 0x3f5dfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E00u;
        goto label_3f5e00;
    }
    ctx->pc = 0x3F5DF8u;
    {
        const bool branch_taken_0x3f5df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f5df8) {
            ctx->pc = 0x3F5DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5DF8u;
            // 0x3f5dfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5E08u;
            goto label_3f5e08;
        }
    }
    ctx->pc = 0x3F5E00u;
label_3f5e00:
    // 0x3f5e00: 0x1000000f  b           . + 4 + (0xF << 2)
label_3f5e04:
    if (ctx->pc == 0x3F5E04u) {
        ctx->pc = 0x3F5E04u;
            // 0x3f5e04: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3F5E08u;
        goto label_3f5e08;
    }
    ctx->pc = 0x3F5E00u;
    {
        const bool branch_taken_0x3f5e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5E00u;
            // 0x3f5e04: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5e00) {
            ctx->pc = 0x3F5E40u;
            goto label_3f5e40;
        }
    }
    ctx->pc = 0x3F5E08u;
label_3f5e08:
    // 0x3f5e08: 0xc07697c  jal         func_1DA5F0
label_3f5e0c:
    if (ctx->pc == 0x3F5E0Cu) {
        ctx->pc = 0x3F5E10u;
        goto label_3f5e10;
    }
    ctx->pc = 0x3F5E08u;
    SET_GPR_U32(ctx, 31, 0x3F5E10u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E10u; }
        if (ctx->pc != 0x3F5E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E10u; }
        if (ctx->pc != 0x3F5E10u) { return; }
    }
    ctx->pc = 0x3F5E10u;
label_3f5e10:
    // 0x3f5e10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f5e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5e14:
    // 0x3f5e14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f5e18:
    // 0x3f5e18: 0xc04cd60  jal         func_133580
label_3f5e1c:
    if (ctx->pc == 0x3F5E1Cu) {
        ctx->pc = 0x3F5E1Cu;
            // 0x3f5e1c: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x3F5E20u;
        goto label_3f5e20;
    }
    ctx->pc = 0x3F5E18u;
    SET_GPR_U32(ctx, 31, 0x3F5E20u);
    ctx->pc = 0x3F5E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5E18u;
            // 0x3f5e1c: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E20u; }
        if (ctx->pc != 0x3F5E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E20u; }
        if (ctx->pc != 0x3F5E20u) { return; }
    }
    ctx->pc = 0x3F5E20u;
label_3f5e20:
    // 0x3f5e20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f5e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f5e24:
    // 0x3f5e24: 0xc04c650  jal         func_131940
label_3f5e28:
    if (ctx->pc == 0x3F5E28u) {
        ctx->pc = 0x3F5E28u;
            // 0x3f5e28: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3F5E2Cu;
        goto label_3f5e2c;
    }
    ctx->pc = 0x3F5E24u;
    SET_GPR_U32(ctx, 31, 0x3F5E2Cu);
    ctx->pc = 0x3F5E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5E24u;
            // 0x3f5e28: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E2Cu; }
        if (ctx->pc != 0x3F5E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E2Cu; }
        if (ctx->pc != 0x3F5E2Cu) { return; }
    }
    ctx->pc = 0x3F5E2Cu;
label_3f5e2c:
    // 0x3f5e2c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x3f5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_3f5e30:
    // 0x3f5e30: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3f5e30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f5e34:
    // 0x3f5e34: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x3f5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_3f5e38:
    // 0x3f5e38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3f5e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f5e3c:
    // 0x3f5e3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3f5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f5e40:
    // 0x3f5e40: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3f5e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3f5e44:
    // 0x3f5e44: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_3f5e48:
    if (ctx->pc == 0x3F5E48u) {
        ctx->pc = 0x3F5E48u;
            // 0x3f5e48: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x3F5E4Cu;
        goto label_3f5e4c;
    }
    ctx->pc = 0x3F5E44u;
    {
        const bool branch_taken_0x3f5e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5E44u;
            // 0x3f5e48: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5e44) {
            ctx->pc = 0x3F5EE8u;
            goto label_3f5ee8;
        }
    }
    ctx->pc = 0x3F5E4Cu;
label_3f5e4c:
    // 0x3f5e4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f5e50:
    // 0x3f5e50: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3f5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3f5e54:
    // 0x3f5e54: 0x8c53e378  lw          $s3, -0x1C88($v0)
    ctx->pc = 0x3f5e54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3f5e58:
    // 0x3f5e58: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3f5e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f5e5c:
    // 0x3f5e5c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x3f5e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3f5e60:
    // 0x3f5e60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3f5e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3f5e64:
    // 0x3f5e64: 0x8c52e370  lw          $s2, -0x1C90($v0)
    ctx->pc = 0x3f5e64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3f5e68:
    // 0x3f5e68: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3f5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3f5e6c:
    // 0x3f5e6c: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x3f5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3f5e70:
    // 0x3f5e70: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3f5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3f5e74:
    // 0x3f5e74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f5e78:
    // 0x3f5e78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f5e7c:
    // 0x3f5e7c: 0xc04cd60  jal         func_133580
label_3f5e80:
    if (ctx->pc == 0x3F5E80u) {
        ctx->pc = 0x3F5E80u;
            // 0x3f5e80: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3F5E84u;
        goto label_3f5e84;
    }
    ctx->pc = 0x3F5E7Cu;
    SET_GPR_U32(ctx, 31, 0x3F5E84u);
    ctx->pc = 0x3F5E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5E7Cu;
            // 0x3f5e80: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E84u; }
        if (ctx->pc != 0x3F5E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E84u; }
        if (ctx->pc != 0x3F5E84u) { return; }
    }
    ctx->pc = 0x3F5E84u;
label_3f5e84:
    // 0x3f5e84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3f5e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5e88:
    // 0x3f5e88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f5e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f5e8c:
    // 0x3f5e8c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3f5e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3f5e90:
    // 0x3f5e90: 0xc04e4a4  jal         func_139290
label_3f5e94:
    if (ctx->pc == 0x3F5E94u) {
        ctx->pc = 0x3F5E94u;
            // 0x3f5e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5E98u;
        goto label_3f5e98;
    }
    ctx->pc = 0x3F5E90u;
    SET_GPR_U32(ctx, 31, 0x3F5E98u);
    ctx->pc = 0x3F5E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5E90u;
            // 0x3f5e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E98u; }
        if (ctx->pc != 0x3F5E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5E98u; }
        if (ctx->pc != 0x3F5E98u) { return; }
    }
    ctx->pc = 0x3F5E98u;
label_3f5e98:
    // 0x3f5e98: 0xc04e738  jal         func_139CE0
label_3f5e9c:
    if (ctx->pc == 0x3F5E9Cu) {
        ctx->pc = 0x3F5E9Cu;
            // 0x3f5e9c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x3F5EA0u;
        goto label_3f5ea0;
    }
    ctx->pc = 0x3F5E98u;
    SET_GPR_U32(ctx, 31, 0x3F5EA0u);
    ctx->pc = 0x3F5E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5E98u;
            // 0x3f5e9c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5EA0u; }
        if (ctx->pc != 0x3F5EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5EA0u; }
        if (ctx->pc != 0x3F5EA0u) { return; }
    }
    ctx->pc = 0x3F5EA0u;
label_3f5ea0:
    // 0x3f5ea0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3f5ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f5ea4:
    // 0x3f5ea4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3f5ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3f5ea8:
    // 0x3f5ea8: 0x320f809  jalr        $t9
label_3f5eac:
    if (ctx->pc == 0x3F5EACu) {
        ctx->pc = 0x3F5EACu;
            // 0x3f5eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5EB0u;
        goto label_3f5eb0;
    }
    ctx->pc = 0x3F5EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F5EB0u);
        ctx->pc = 0x3F5EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5EA8u;
            // 0x3f5eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F5EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F5EB0u; }
            if (ctx->pc != 0x3F5EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F5EB0u;
label_3f5eb0:
    // 0x3f5eb0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3f5eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5eb4:
    // 0x3f5eb4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3f5eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_3f5eb8:
    // 0x3f5eb8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3f5eb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5ebc:
    // 0x3f5ebc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f5ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5ec0:
    // 0x3f5ec0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3f5ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f5ec4:
    // 0x3f5ec4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x3f5ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f5ec8:
    // 0x3f5ec8: 0xc04cfcc  jal         func_133F30
label_3f5ecc:
    if (ctx->pc == 0x3F5ECCu) {
        ctx->pc = 0x3F5ECCu;
            // 0x3f5ecc: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x3F5ED0u;
        goto label_3f5ed0;
    }
    ctx->pc = 0x3F5EC8u;
    SET_GPR_U32(ctx, 31, 0x3F5ED0u);
    ctx->pc = 0x3F5ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5EC8u;
            // 0x3f5ecc: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5ED0u; }
        if (ctx->pc != 0x3F5ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5ED0u; }
        if (ctx->pc != 0x3F5ED0u) { return; }
    }
    ctx->pc = 0x3F5ED0u;
label_3f5ed0:
    // 0x3f5ed0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3f5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f5ed4:
    // 0x3f5ed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3f5ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f5ed8:
    // 0x3f5ed8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f5ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f5edc:
    // 0x3f5edc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3f5edcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3f5ee0:
    // 0x3f5ee0: 0xc0550f8  jal         func_1543E0
label_3f5ee4:
    if (ctx->pc == 0x3F5EE4u) {
        ctx->pc = 0x3F5EE4u;
            // 0x3f5ee4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F5EE8u;
        goto label_3f5ee8;
    }
    ctx->pc = 0x3F5EE0u;
    SET_GPR_U32(ctx, 31, 0x3F5EE8u);
    ctx->pc = 0x3F5EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5EE0u;
            // 0x3f5ee4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543E0u;
    if (runtime->hasFunction(0x1543E0u)) {
        auto targetFn = runtime->lookupFunction(0x1543E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5EE8u; }
        if (ctx->pc != 0x3F5EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543E0_0x1543e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5EE8u; }
        if (ctx->pc != 0x3F5EE8u) { return; }
    }
    ctx->pc = 0x3F5EE8u;
label_3f5ee8:
    // 0x3f5ee8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f5ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f5eec:
    // 0x3f5eec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f5eecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f5ef0:
    // 0x3f5ef0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f5ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f5ef4:
    // 0x3f5ef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f5ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f5ef8:
    // 0x3f5ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f5ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f5efc:
    // 0x3f5efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f5efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f5f00:
    // 0x3f5f00: 0x3e00008  jr          $ra
label_3f5f04:
    if (ctx->pc == 0x3F5F04u) {
        ctx->pc = 0x3F5F04u;
            // 0x3f5f04: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x3F5F08u;
        goto label_3f5f08;
    }
    ctx->pc = 0x3F5F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F5F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5F00u;
            // 0x3f5f04: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F5F08u;
label_3f5f08:
    // 0x3f5f08: 0x0  nop
    ctx->pc = 0x3f5f08u;
    // NOP
label_3f5f0c:
    // 0x3f5f0c: 0x0  nop
    ctx->pc = 0x3f5f0cu;
    // NOP
}
