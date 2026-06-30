#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443CD0
// Address: 0x443cd0 - 0x444010
void sub_00443CD0_0x443cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443CD0_0x443cd0");
#endif

    switch (ctx->pc) {
        case 0x443cd0u: goto label_443cd0;
        case 0x443cd4u: goto label_443cd4;
        case 0x443cd8u: goto label_443cd8;
        case 0x443cdcu: goto label_443cdc;
        case 0x443ce0u: goto label_443ce0;
        case 0x443ce4u: goto label_443ce4;
        case 0x443ce8u: goto label_443ce8;
        case 0x443cecu: goto label_443cec;
        case 0x443cf0u: goto label_443cf0;
        case 0x443cf4u: goto label_443cf4;
        case 0x443cf8u: goto label_443cf8;
        case 0x443cfcu: goto label_443cfc;
        case 0x443d00u: goto label_443d00;
        case 0x443d04u: goto label_443d04;
        case 0x443d08u: goto label_443d08;
        case 0x443d0cu: goto label_443d0c;
        case 0x443d10u: goto label_443d10;
        case 0x443d14u: goto label_443d14;
        case 0x443d18u: goto label_443d18;
        case 0x443d1cu: goto label_443d1c;
        case 0x443d20u: goto label_443d20;
        case 0x443d24u: goto label_443d24;
        case 0x443d28u: goto label_443d28;
        case 0x443d2cu: goto label_443d2c;
        case 0x443d30u: goto label_443d30;
        case 0x443d34u: goto label_443d34;
        case 0x443d38u: goto label_443d38;
        case 0x443d3cu: goto label_443d3c;
        case 0x443d40u: goto label_443d40;
        case 0x443d44u: goto label_443d44;
        case 0x443d48u: goto label_443d48;
        case 0x443d4cu: goto label_443d4c;
        case 0x443d50u: goto label_443d50;
        case 0x443d54u: goto label_443d54;
        case 0x443d58u: goto label_443d58;
        case 0x443d5cu: goto label_443d5c;
        case 0x443d60u: goto label_443d60;
        case 0x443d64u: goto label_443d64;
        case 0x443d68u: goto label_443d68;
        case 0x443d6cu: goto label_443d6c;
        case 0x443d70u: goto label_443d70;
        case 0x443d74u: goto label_443d74;
        case 0x443d78u: goto label_443d78;
        case 0x443d7cu: goto label_443d7c;
        case 0x443d80u: goto label_443d80;
        case 0x443d84u: goto label_443d84;
        case 0x443d88u: goto label_443d88;
        case 0x443d8cu: goto label_443d8c;
        case 0x443d90u: goto label_443d90;
        case 0x443d94u: goto label_443d94;
        case 0x443d98u: goto label_443d98;
        case 0x443d9cu: goto label_443d9c;
        case 0x443da0u: goto label_443da0;
        case 0x443da4u: goto label_443da4;
        case 0x443da8u: goto label_443da8;
        case 0x443dacu: goto label_443dac;
        case 0x443db0u: goto label_443db0;
        case 0x443db4u: goto label_443db4;
        case 0x443db8u: goto label_443db8;
        case 0x443dbcu: goto label_443dbc;
        case 0x443dc0u: goto label_443dc0;
        case 0x443dc4u: goto label_443dc4;
        case 0x443dc8u: goto label_443dc8;
        case 0x443dccu: goto label_443dcc;
        case 0x443dd0u: goto label_443dd0;
        case 0x443dd4u: goto label_443dd4;
        case 0x443dd8u: goto label_443dd8;
        case 0x443ddcu: goto label_443ddc;
        case 0x443de0u: goto label_443de0;
        case 0x443de4u: goto label_443de4;
        case 0x443de8u: goto label_443de8;
        case 0x443decu: goto label_443dec;
        case 0x443df0u: goto label_443df0;
        case 0x443df4u: goto label_443df4;
        case 0x443df8u: goto label_443df8;
        case 0x443dfcu: goto label_443dfc;
        case 0x443e00u: goto label_443e00;
        case 0x443e04u: goto label_443e04;
        case 0x443e08u: goto label_443e08;
        case 0x443e0cu: goto label_443e0c;
        case 0x443e10u: goto label_443e10;
        case 0x443e14u: goto label_443e14;
        case 0x443e18u: goto label_443e18;
        case 0x443e1cu: goto label_443e1c;
        case 0x443e20u: goto label_443e20;
        case 0x443e24u: goto label_443e24;
        case 0x443e28u: goto label_443e28;
        case 0x443e2cu: goto label_443e2c;
        case 0x443e30u: goto label_443e30;
        case 0x443e34u: goto label_443e34;
        case 0x443e38u: goto label_443e38;
        case 0x443e3cu: goto label_443e3c;
        case 0x443e40u: goto label_443e40;
        case 0x443e44u: goto label_443e44;
        case 0x443e48u: goto label_443e48;
        case 0x443e4cu: goto label_443e4c;
        case 0x443e50u: goto label_443e50;
        case 0x443e54u: goto label_443e54;
        case 0x443e58u: goto label_443e58;
        case 0x443e5cu: goto label_443e5c;
        case 0x443e60u: goto label_443e60;
        case 0x443e64u: goto label_443e64;
        case 0x443e68u: goto label_443e68;
        case 0x443e6cu: goto label_443e6c;
        case 0x443e70u: goto label_443e70;
        case 0x443e74u: goto label_443e74;
        case 0x443e78u: goto label_443e78;
        case 0x443e7cu: goto label_443e7c;
        case 0x443e80u: goto label_443e80;
        case 0x443e84u: goto label_443e84;
        case 0x443e88u: goto label_443e88;
        case 0x443e8cu: goto label_443e8c;
        case 0x443e90u: goto label_443e90;
        case 0x443e94u: goto label_443e94;
        case 0x443e98u: goto label_443e98;
        case 0x443e9cu: goto label_443e9c;
        case 0x443ea0u: goto label_443ea0;
        case 0x443ea4u: goto label_443ea4;
        case 0x443ea8u: goto label_443ea8;
        case 0x443eacu: goto label_443eac;
        case 0x443eb0u: goto label_443eb0;
        case 0x443eb4u: goto label_443eb4;
        case 0x443eb8u: goto label_443eb8;
        case 0x443ebcu: goto label_443ebc;
        case 0x443ec0u: goto label_443ec0;
        case 0x443ec4u: goto label_443ec4;
        case 0x443ec8u: goto label_443ec8;
        case 0x443eccu: goto label_443ecc;
        case 0x443ed0u: goto label_443ed0;
        case 0x443ed4u: goto label_443ed4;
        case 0x443ed8u: goto label_443ed8;
        case 0x443edcu: goto label_443edc;
        case 0x443ee0u: goto label_443ee0;
        case 0x443ee4u: goto label_443ee4;
        case 0x443ee8u: goto label_443ee8;
        case 0x443eecu: goto label_443eec;
        case 0x443ef0u: goto label_443ef0;
        case 0x443ef4u: goto label_443ef4;
        case 0x443ef8u: goto label_443ef8;
        case 0x443efcu: goto label_443efc;
        case 0x443f00u: goto label_443f00;
        case 0x443f04u: goto label_443f04;
        case 0x443f08u: goto label_443f08;
        case 0x443f0cu: goto label_443f0c;
        case 0x443f10u: goto label_443f10;
        case 0x443f14u: goto label_443f14;
        case 0x443f18u: goto label_443f18;
        case 0x443f1cu: goto label_443f1c;
        case 0x443f20u: goto label_443f20;
        case 0x443f24u: goto label_443f24;
        case 0x443f28u: goto label_443f28;
        case 0x443f2cu: goto label_443f2c;
        case 0x443f30u: goto label_443f30;
        case 0x443f34u: goto label_443f34;
        case 0x443f38u: goto label_443f38;
        case 0x443f3cu: goto label_443f3c;
        case 0x443f40u: goto label_443f40;
        case 0x443f44u: goto label_443f44;
        case 0x443f48u: goto label_443f48;
        case 0x443f4cu: goto label_443f4c;
        case 0x443f50u: goto label_443f50;
        case 0x443f54u: goto label_443f54;
        case 0x443f58u: goto label_443f58;
        case 0x443f5cu: goto label_443f5c;
        case 0x443f60u: goto label_443f60;
        case 0x443f64u: goto label_443f64;
        case 0x443f68u: goto label_443f68;
        case 0x443f6cu: goto label_443f6c;
        case 0x443f70u: goto label_443f70;
        case 0x443f74u: goto label_443f74;
        case 0x443f78u: goto label_443f78;
        case 0x443f7cu: goto label_443f7c;
        case 0x443f80u: goto label_443f80;
        case 0x443f84u: goto label_443f84;
        case 0x443f88u: goto label_443f88;
        case 0x443f8cu: goto label_443f8c;
        case 0x443f90u: goto label_443f90;
        case 0x443f94u: goto label_443f94;
        case 0x443f98u: goto label_443f98;
        case 0x443f9cu: goto label_443f9c;
        case 0x443fa0u: goto label_443fa0;
        case 0x443fa4u: goto label_443fa4;
        case 0x443fa8u: goto label_443fa8;
        case 0x443facu: goto label_443fac;
        case 0x443fb0u: goto label_443fb0;
        case 0x443fb4u: goto label_443fb4;
        case 0x443fb8u: goto label_443fb8;
        case 0x443fbcu: goto label_443fbc;
        case 0x443fc0u: goto label_443fc0;
        case 0x443fc4u: goto label_443fc4;
        case 0x443fc8u: goto label_443fc8;
        case 0x443fccu: goto label_443fcc;
        case 0x443fd0u: goto label_443fd0;
        case 0x443fd4u: goto label_443fd4;
        case 0x443fd8u: goto label_443fd8;
        case 0x443fdcu: goto label_443fdc;
        case 0x443fe0u: goto label_443fe0;
        case 0x443fe4u: goto label_443fe4;
        case 0x443fe8u: goto label_443fe8;
        case 0x443fecu: goto label_443fec;
        case 0x443ff0u: goto label_443ff0;
        case 0x443ff4u: goto label_443ff4;
        case 0x443ff8u: goto label_443ff8;
        case 0x443ffcu: goto label_443ffc;
        case 0x444000u: goto label_444000;
        case 0x444004u: goto label_444004;
        case 0x444008u: goto label_444008;
        case 0x44400cu: goto label_44400c;
        default: break;
    }

    ctx->pc = 0x443cd0u;

label_443cd0:
    // 0x443cd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x443cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_443cd4:
    // 0x443cd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x443cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_443cd8:
    // 0x443cd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x443cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_443cdc:
    // 0x443cdc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x443cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_443ce0:
    // 0x443ce0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x443ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_443ce4:
    // 0x443ce4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x443ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_443ce8:
    // 0x443ce8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x443ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_443cec:
    // 0x443cec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x443cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_443cf0:
    // 0x443cf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x443cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_443cf4:
    // 0x443cf4: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x443cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_443cf8:
    // 0x443cf8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x443cf8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_443cfc:
    // 0x443cfc: 0x265001a0  addiu       $s0, $s2, 0x1A0
    ctx->pc = 0x443cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
label_443d00:
    // 0x443d00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x443d00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_443d04:
    // 0x443d04: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x443d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_443d08:
    // 0x443d08: 0x849101f4  lh          $s1, 0x1F4($a0)
    ctx->pc = 0x443d08u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 500)));
label_443d0c:
    // 0x443d0c: 0x264200f0  addiu       $v0, $s2, 0xF0
    ctx->pc = 0x443d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_443d10:
    // 0x443d10: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x443d10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_443d14:
    // 0x443d14: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x443d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_443d18:
    // 0x443d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x443d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_443d1c:
    // 0x443d1c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x443d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_443d20:
    // 0x443d20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x443d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443d24:
    // 0x443d24: 0xc0b884c  jal         func_2E2130
label_443d28:
    if (ctx->pc == 0x443D28u) {
        ctx->pc = 0x443D28u;
            // 0x443d28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443D2Cu;
        goto label_443d2c;
    }
    ctx->pc = 0x443D24u;
    SET_GPR_U32(ctx, 31, 0x443D2Cu);
    ctx->pc = 0x443D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443D24u;
            // 0x443d28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443D2Cu; }
        if (ctx->pc != 0x443D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443D2Cu; }
        if (ctx->pc != 0x443D2Cu) { return; }
    }
    ctx->pc = 0x443D2Cu;
label_443d2c:
    // 0x443d2c: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x443d2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
label_443d30:
    // 0x443d30: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_443d34:
    if (ctx->pc == 0x443D34u) {
        ctx->pc = 0x443D34u;
            // 0x443d34: 0x264200f0  addiu       $v0, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x443D38u;
        goto label_443d38;
    }
    ctx->pc = 0x443D30u;
    {
        const bool branch_taken_0x443d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x443d30) {
            ctx->pc = 0x443D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x443D30u;
            // 0x443d34: 0x264200f0  addiu       $v0, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x443D50u;
            goto label_443d50;
        }
    }
    ctx->pc = 0x443D38u;
label_443d38:
    // 0x443d38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x443d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_443d3c:
    // 0x443d3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x443d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_443d40:
    // 0x443d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x443d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_443d44:
    // 0x443d44: 0xc0b89e4  jal         func_2E2790
label_443d48:
    if (ctx->pc == 0x443D48u) {
        ctx->pc = 0x443D48u;
            // 0x443d48: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x443D4Cu;
        goto label_443d4c;
    }
    ctx->pc = 0x443D44u;
    SET_GPR_U32(ctx, 31, 0x443D4Cu);
    ctx->pc = 0x443D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443D44u;
            // 0x443d48: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443D4Cu; }
        if (ctx->pc != 0x443D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443D4Cu; }
        if (ctx->pc != 0x443D4Cu) { return; }
    }
    ctx->pc = 0x443D4Cu;
label_443d4c:
    // 0x443d4c: 0x264200f0  addiu       $v0, $s2, 0xF0
    ctx->pc = 0x443d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_443d50:
    // 0x443d50: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x443d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_443d54:
    // 0x443d54: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x443d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_443d58:
    // 0x443d58: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x443d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_443d5c:
    // 0x443d5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x443d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443d60:
    // 0x443d60: 0xc0b82c4  jal         func_2E0B10
label_443d64:
    if (ctx->pc == 0x443D64u) {
        ctx->pc = 0x443D64u;
            // 0x443d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443D68u;
        goto label_443d68;
    }
    ctx->pc = 0x443D60u;
    SET_GPR_U32(ctx, 31, 0x443D68u);
    ctx->pc = 0x443D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443D60u;
            // 0x443d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443D68u; }
        if (ctx->pc != 0x443D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443D68u; }
        if (ctx->pc != 0x443D68u) { return; }
    }
    ctx->pc = 0x443D68u;
label_443d68:
    // 0x443d68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x443d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_443d6c:
    // 0x443d6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x443d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_443d70:
    // 0x443d70: 0xa6030050  sh          $v1, 0x50($s0)
    ctx->pc = 0x443d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 3));
label_443d74:
    // 0x443d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x443d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_443d78:
    // 0x443d78: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x443d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_443d7c:
    // 0x443d7c: 0x3c033fb1  lui         $v1, 0x3FB1
    ctx->pc = 0x443d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16305 << 16));
label_443d80:
    // 0x443d80: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x443d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_443d84:
    // 0x443d84: 0x3462c71c  ori         $v0, $v1, 0xC71C
    ctx->pc = 0x443d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50972);
label_443d88:
    // 0x443d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x443d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_443d8c:
    // 0x443d8c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x443d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_443d90:
    // 0x443d90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x443d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_443d94:
    // 0x443d94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x443d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_443d98:
    // 0x443d98: 0xc0b8160  jal         func_2E0580
label_443d9c:
    if (ctx->pc == 0x443D9Cu) {
        ctx->pc = 0x443D9Cu;
            // 0x443d9c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x443DA0u;
        goto label_443da0;
    }
    ctx->pc = 0x443D98u;
    SET_GPR_U32(ctx, 31, 0x443DA0u);
    ctx->pc = 0x443D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443D98u;
            // 0x443d9c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443DA0u; }
        if (ctx->pc != 0x443DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443DA0u; }
        if (ctx->pc != 0x443DA0u) { return; }
    }
    ctx->pc = 0x443DA0u;
label_443da0:
    // 0x443da0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x443da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_443da4:
    // 0x443da4: 0xc04cc04  jal         func_133010
label_443da8:
    if (ctx->pc == 0x443DA8u) {
        ctx->pc = 0x443DA8u;
            // 0x443da8: 0x26440270  addiu       $a0, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->pc = 0x443DACu;
        goto label_443dac;
    }
    ctx->pc = 0x443DA4u;
    SET_GPR_U32(ctx, 31, 0x443DACu);
    ctx->pc = 0x443DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443DA4u;
            // 0x443da8: 0x26440270  addiu       $a0, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443DACu; }
        if (ctx->pc != 0x443DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443DACu; }
        if (ctx->pc != 0x443DACu) { return; }
    }
    ctx->pc = 0x443DACu;
label_443dac:
    // 0x443dac: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x443dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_443db0:
    // 0x443db0: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x443db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_443db4:
    // 0x443db4: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x443db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_443db8:
    // 0x443db8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x443db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_443dbc:
    // 0x443dbc: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x443dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_443dc0:
    // 0x443dc0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x443dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_443dc4:
    // 0x443dc4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x443dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_443dc8:
    // 0x443dc8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x443dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_443dcc:
    // 0x443dcc: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x443dccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_443dd0:
    // 0x443dd0: 0xc0892a0  jal         func_224A80
label_443dd4:
    if (ctx->pc == 0x443DD4u) {
        ctx->pc = 0x443DD4u;
            // 0x443dd4: 0xe7a300bc  swc1        $f3, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x443DD8u;
        goto label_443dd8;
    }
    ctx->pc = 0x443DD0u;
    SET_GPR_U32(ctx, 31, 0x443DD8u);
    ctx->pc = 0x443DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443DD0u;
            // 0x443dd4: 0xe7a300bc  swc1        $f3, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443DD8u; }
        if (ctx->pc != 0x443DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443DD8u; }
        if (ctx->pc != 0x443DD8u) { return; }
    }
    ctx->pc = 0x443DD8u;
label_443dd8:
    // 0x443dd8: 0x3c023fb1  lui         $v0, 0x3FB1
    ctx->pc = 0x443dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16305 << 16));
label_443ddc:
    // 0x443ddc: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x443ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_443de0:
    // 0x443de0: 0x3442c71c  ori         $v0, $v0, 0xC71C
    ctx->pc = 0x443de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50972);
label_443de4:
    // 0x443de4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x443de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_443de8:
    // 0x443de8: 0xae420200  sw          $v0, 0x200($s2)
    ctx->pc = 0x443de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 2));
label_443dec:
    // 0x443dec: 0xc04cc90  jal         func_133240
label_443df0:
    if (ctx->pc == 0x443DF0u) {
        ctx->pc = 0x443DF0u;
            // 0x443df0: 0x26450270  addiu       $a1, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->pc = 0x443DF4u;
        goto label_443df4;
    }
    ctx->pc = 0x443DECu;
    SET_GPR_U32(ctx, 31, 0x443DF4u);
    ctx->pc = 0x443DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443DECu;
            // 0x443df0: 0x26450270  addiu       $a1, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443DF4u; }
        if (ctx->pc != 0x443DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443DF4u; }
        if (ctx->pc != 0x443DF4u) { return; }
    }
    ctx->pc = 0x443DF4u;
label_443df4:
    // 0x443df4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x443df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_443df8:
    // 0x443df8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x443df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_443dfc:
    // 0x443dfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x443dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443e00:
    // 0x443e00: 0xc04cc7c  jal         func_1331F0
label_443e04:
    if (ctx->pc == 0x443E04u) {
        ctx->pc = 0x443E04u;
            // 0x443e04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443E08u;
        goto label_443e08;
    }
    ctx->pc = 0x443E00u;
    SET_GPR_U32(ctx, 31, 0x443E08u);
    ctx->pc = 0x443E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443E00u;
            // 0x443e04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E08u; }
        if (ctx->pc != 0x443E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E08u; }
        if (ctx->pc != 0x443E08u) { return; }
    }
    ctx->pc = 0x443E08u;
label_443e08:
    // 0x443e08: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x443e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_443e0c:
    // 0x443e0c: 0xc04cc44  jal         func_133110
label_443e10:
    if (ctx->pc == 0x443E10u) {
        ctx->pc = 0x443E10u;
            // 0x443e10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443E14u;
        goto label_443e14;
    }
    ctx->pc = 0x443E0Cu;
    SET_GPR_U32(ctx, 31, 0x443E14u);
    ctx->pc = 0x443E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443E0Cu;
            // 0x443e10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E14u; }
        if (ctx->pc != 0x443E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E14u; }
        if (ctx->pc != 0x443E14u) { return; }
    }
    ctx->pc = 0x443E14u;
label_443e14:
    // 0x443e14: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x443e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_443e18:
    // 0x443e18: 0x265000f0  addiu       $s0, $s2, 0xF0
    ctx->pc = 0x443e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_443e1c:
    // 0x443e1c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x443e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_443e20:
    // 0x443e20: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x443e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_443e24:
    // 0x443e24: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x443e24u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_443e28:
    // 0x443e28: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x443e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_443e2c:
    // 0x443e2c: 0x46000344  c1          0x344
    ctx->pc = 0x443e2cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_443e30:
    // 0x443e30: 0x0  nop
    ctx->pc = 0x443e30u;
    // NOP
label_443e34:
    // 0x443e34: 0x0  nop
    ctx->pc = 0x443e34u;
    // NOP
label_443e38:
    // 0x443e38: 0xc04780a  jal         func_11E028
label_443e3c:
    if (ctx->pc == 0x443E3Cu) {
        ctx->pc = 0x443E40u;
        goto label_443e40;
    }
    ctx->pc = 0x443E38u;
    SET_GPR_U32(ctx, 31, 0x443E40u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E40u; }
        if (ctx->pc != 0x443E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E40u; }
        if (ctx->pc != 0x443E40u) { return; }
    }
    ctx->pc = 0x443E40u;
label_443e40:
    // 0x443e40: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x443e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_443e44:
    // 0x443e44: 0xc7ad00c8  lwc1        $f13, 0xC8($sp)
    ctx->pc = 0x443e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_443e48:
    // 0x443e48: 0xc04780a  jal         func_11E028
label_443e4c:
    if (ctx->pc == 0x443E4Cu) {
        ctx->pc = 0x443E4Cu;
            // 0x443e4c: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x443E50u;
        goto label_443e50;
    }
    ctx->pc = 0x443E48u;
    SET_GPR_U32(ctx, 31, 0x443E50u);
    ctx->pc = 0x443E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443E48u;
            // 0x443e4c: 0x46000547  neg.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E50u; }
        if (ctx->pc != 0x443E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E50u; }
        if (ctx->pc != 0x443E50u) { return; }
    }
    ctx->pc = 0x443E50u;
label_443e50:
    // 0x443e50: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x443e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_443e54:
    // 0x443e54: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x443e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_443e58:
    // 0x443e58: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x443e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_443e5c:
    // 0x443e5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x443e5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_443e60:
    // 0x443e60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x443e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_443e64:
    // 0x443e64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x443e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_443e68:
    // 0x443e68: 0x0  nop
    ctx->pc = 0x443e68u;
    // NOP
label_443e6c:
    // 0x443e6c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x443e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_443e70:
    // 0x443e70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x443e70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_443e74:
    // 0x443e74: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x443e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_443e78:
    // 0x443e78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x443e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443e7c:
    // 0x443e7c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x443e7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_443e80:
    // 0x443e80: 0xc04c970  jal         func_1325C0
label_443e84:
    if (ctx->pc == 0x443E84u) {
        ctx->pc = 0x443E84u;
            // 0x443e84: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x443E88u;
        goto label_443e88;
    }
    ctx->pc = 0x443E80u;
    SET_GPR_U32(ctx, 31, 0x443E88u);
    ctx->pc = 0x443E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443E80u;
            // 0x443e84: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E88u; }
        if (ctx->pc != 0x443E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443E88u; }
        if (ctx->pc != 0x443E88u) { return; }
    }
    ctx->pc = 0x443E88u;
label_443e88:
    // 0x443e88: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x443e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_443e8c:
    // 0x443e8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x443e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_443e90:
    // 0x443e90: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x443e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_443e94:
    // 0x443e94: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x443e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_443e98:
    // 0x443e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x443e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_443e9c:
    // 0x443e9c: 0x0  nop
    ctx->pc = 0x443e9cu;
    // NOP
label_443ea0:
    // 0x443ea0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x443ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_443ea4:
    // 0x443ea4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x443ea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_443ea8:
    // 0x443ea8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x443ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443eac:
    // 0x443eac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x443eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_443eb0:
    // 0x443eb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x443eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_443eb4:
    // 0x443eb4: 0xc04c970  jal         func_1325C0
label_443eb8:
    if (ctx->pc == 0x443EB8u) {
        ctx->pc = 0x443EB8u;
            // 0x443eb8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x443EBCu;
        goto label_443ebc;
    }
    ctx->pc = 0x443EB4u;
    SET_GPR_U32(ctx, 31, 0x443EBCu);
    ctx->pc = 0x443EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443EB4u;
            // 0x443eb8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443EBCu; }
        if (ctx->pc != 0x443EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443EBCu; }
        if (ctx->pc != 0x443EBCu) { return; }
    }
    ctx->pc = 0x443EBCu;
label_443ebc:
    // 0x443ebc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x443ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_443ec0:
    // 0x443ec0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x443ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_443ec4:
    // 0x443ec4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x443ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_443ec8:
    // 0x443ec8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x443ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_443ecc:
    // 0x443ecc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x443eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_443ed0:
    // 0x443ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x443ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_443ed4:
    // 0x443ed4: 0xc04c970  jal         func_1325C0
label_443ed8:
    if (ctx->pc == 0x443ED8u) {
        ctx->pc = 0x443ED8u;
            // 0x443ed8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x443EDCu;
        goto label_443edc;
    }
    ctx->pc = 0x443ED4u;
    SET_GPR_U32(ctx, 31, 0x443EDCu);
    ctx->pc = 0x443ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443ED4u;
            // 0x443ed8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443EDCu; }
        if (ctx->pc != 0x443EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443EDCu; }
        if (ctx->pc != 0x443EDCu) { return; }
    }
    ctx->pc = 0x443EDCu;
label_443edc:
    // 0x443edc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x443edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_443ee0:
    // 0x443ee0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x443ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_443ee4:
    // 0x443ee4: 0xc04c72c  jal         func_131CB0
label_443ee8:
    if (ctx->pc == 0x443EE8u) {
        ctx->pc = 0x443EE8u;
            // 0x443ee8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x443EECu;
        goto label_443eec;
    }
    ctx->pc = 0x443EE4u;
    SET_GPR_U32(ctx, 31, 0x443EECu);
    ctx->pc = 0x443EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443EE4u;
            // 0x443ee8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443EECu; }
        if (ctx->pc != 0x443EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443EECu; }
        if (ctx->pc != 0x443EECu) { return; }
    }
    ctx->pc = 0x443EECu;
label_443eec:
    // 0x443eec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x443eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_443ef0:
    // 0x443ef0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x443ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_443ef4:
    // 0x443ef4: 0xc04c72c  jal         func_131CB0
label_443ef8:
    if (ctx->pc == 0x443EF8u) {
        ctx->pc = 0x443EF8u;
            // 0x443ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443EFCu;
        goto label_443efc;
    }
    ctx->pc = 0x443EF4u;
    SET_GPR_U32(ctx, 31, 0x443EFCu);
    ctx->pc = 0x443EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443EF4u;
            // 0x443ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443EFCu; }
        if (ctx->pc != 0x443EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443EFCu; }
        if (ctx->pc != 0x443EFCu) { return; }
    }
    ctx->pc = 0x443EFCu;
label_443efc:
    // 0x443efc: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x443efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_443f00:
    // 0x443f00: 0xc04c74c  jal         func_131D30
label_443f04:
    if (ctx->pc == 0x443F04u) {
        ctx->pc = 0x443F04u;
            // 0x443f04: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x443F08u;
        goto label_443f08;
    }
    ctx->pc = 0x443F00u;
    SET_GPR_U32(ctx, 31, 0x443F08u);
    ctx->pc = 0x443F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443F00u;
            // 0x443f04: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443F08u; }
        if (ctx->pc != 0x443F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443F08u; }
        if (ctx->pc != 0x443F08u) { return; }
    }
    ctx->pc = 0x443F08u;
label_443f08:
    // 0x443f08: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x443f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_443f0c:
    // 0x443f0c: 0xc04c74c  jal         func_131D30
label_443f10:
    if (ctx->pc == 0x443F10u) {
        ctx->pc = 0x443F10u;
            // 0x443f10: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x443F14u;
        goto label_443f14;
    }
    ctx->pc = 0x443F0Cu;
    SET_GPR_U32(ctx, 31, 0x443F14u);
    ctx->pc = 0x443F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443F0Cu;
            // 0x443f10: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443F14u; }
        if (ctx->pc != 0x443F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443F14u; }
        if (ctx->pc != 0x443F14u) { return; }
    }
    ctx->pc = 0x443F14u;
label_443f14:
    // 0x443f14: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x443f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_443f18:
    // 0x443f18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x443f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_443f1c:
    // 0x443f1c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x443f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_443f20:
    // 0x443f20: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x443f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_443f24:
    // 0x443f24: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x443f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_443f28:
    // 0x443f28: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x443f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_443f2c:
    // 0x443f2c: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x443f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_443f30:
    // 0x443f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x443f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_443f34:
    // 0x443f34: 0x3c033fb1  lui         $v1, 0x3FB1
    ctx->pc = 0x443f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16305 << 16));
label_443f38:
    // 0x443f38: 0x3463c71c  ori         $v1, $v1, 0xC71C
    ctx->pc = 0x443f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50972);
label_443f3c:
    // 0x443f3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x443f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_443f40:
    // 0x443f40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x443f40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_443f44:
    // 0x443f44: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x443f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_443f48:
    // 0x443f48: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x443f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_443f4c:
    // 0x443f4c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x443f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_443f50:
    // 0x443f50: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x443f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_443f54:
    // 0x443f54: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x443f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_443f58:
    // 0x443f58: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x443f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_443f5c:
    // 0x443f5c: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x443f5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_443f60:
    // 0x443f60: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x443f60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_443f64:
    // 0x443f64: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x443f64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_443f68:
    // 0x443f68: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x443f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_443f6c:
    // 0x443f6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x443f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_443f70:
    // 0x443f70: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x443f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_443f74:
    // 0x443f74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x443f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_443f78:
    // 0x443f78: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x443f78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_443f7c:
    // 0x443f7c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x443f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_443f80:
    // 0x443f80: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x443f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_443f84:
    // 0x443f84: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x443f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_443f88:
    // 0x443f88: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x443f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_443f8c:
    // 0x443f8c: 0x46022842  mul.s       $f1, $f5, $f2
    ctx->pc = 0x443f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_443f90:
    // 0x443f90: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x443f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_443f94:
    // 0x443f94: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x443f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_443f98:
    // 0x443f98: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x443f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_443f9c:
    // 0x443f9c: 0x8e500050  lw          $s0, 0x50($s2)
    ctx->pc = 0x443f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_443fa0:
    // 0x443fa0: 0xc088b74  jal         func_222DD0
label_443fa4:
    if (ctx->pc == 0x443FA4u) {
        ctx->pc = 0x443FA4u;
            // 0x443fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x443FA8u;
        goto label_443fa8;
    }
    ctx->pc = 0x443FA0u;
    SET_GPR_U32(ctx, 31, 0x443FA8u);
    ctx->pc = 0x443FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443FA0u;
            // 0x443fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443FA8u; }
        if (ctx->pc != 0x443FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443FA8u; }
        if (ctx->pc != 0x443FA8u) { return; }
    }
    ctx->pc = 0x443FA8u;
label_443fa8:
    // 0x443fa8: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x443fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_443fac:
    // 0x443fac: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x443facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_443fb0:
    // 0x443fb0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x443fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_443fb4:
    // 0x443fb4: 0x320f809  jalr        $t9
label_443fb8:
    if (ctx->pc == 0x443FB8u) {
        ctx->pc = 0x443FB8u;
            // 0x443fb8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x443FBCu;
        goto label_443fbc;
    }
    ctx->pc = 0x443FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x443FBCu);
        ctx->pc = 0x443FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443FB4u;
            // 0x443fb8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x443FBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x443FBCu; }
            if (ctx->pc != 0x443FBCu) { return; }
        }
        }
    }
    ctx->pc = 0x443FBCu;
label_443fbc:
    // 0x443fbc: 0xae400260  sw          $zero, 0x260($s2)
    ctx->pc = 0x443fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 0));
label_443fc0:
    // 0x443fc0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x443fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_443fc4:
    // 0x443fc4: 0xae400258  sw          $zero, 0x258($s2)
    ctx->pc = 0x443fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 0));
label_443fc8:
    // 0x443fc8: 0x26430264  addiu       $v1, $s2, 0x264
    ctx->pc = 0x443fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 612));
label_443fcc:
    // 0x443fcc: 0xae400254  sw          $zero, 0x254($s2)
    ctx->pc = 0x443fccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 596), GPR_U32(ctx, 0));
label_443fd0:
    // 0x443fd0: 0xae400250  sw          $zero, 0x250($s2)
    ctx->pc = 0x443fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 0));
label_443fd4:
    // 0x443fd4: 0xae44025c  sw          $a0, 0x25C($s2)
    ctx->pc = 0x443fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 604), GPR_U32(ctx, 4));
label_443fd8:
    // 0x443fd8: 0xb0600007  sdl         $zero, 0x7($v1)
    ctx->pc = 0x443fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_443fdc:
    // 0x443fdc: 0xb4600000  sdr         $zero, 0x0($v1)
    ctx->pc = 0x443fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_443fe0:
    // 0x443fe0: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x443fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
label_443fe4:
    // 0x443fe4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x443fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_443fe8:
    // 0x443fe8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x443fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_443fec:
    // 0x443fec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x443fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_443ff0:
    // 0x443ff0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x443ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_443ff4:
    // 0x443ff4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x443ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_443ff8:
    // 0x443ff8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x443ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_443ffc:
    // 0x443ffc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x443ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_444000:
    // 0x444000: 0x3e00008  jr          $ra
label_444004:
    if (ctx->pc == 0x444004u) {
        ctx->pc = 0x444004u;
            // 0x444004: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x444008u;
        goto label_444008;
    }
    ctx->pc = 0x444000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x444000u;
            // 0x444004: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x444008u;
label_444008:
    // 0x444008: 0x0  nop
    ctx->pc = 0x444008u;
    // NOP
label_44400c:
    // 0x44400c: 0x0  nop
    ctx->pc = 0x44400cu;
    // NOP
}
