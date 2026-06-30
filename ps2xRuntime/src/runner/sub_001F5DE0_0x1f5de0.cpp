#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5DE0
// Address: 0x1f5de0 - 0x1f5ff0
void sub_001F5DE0_0x1f5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5DE0_0x1f5de0");
#endif

    switch (ctx->pc) {
        case 0x1f5de0u: goto label_1f5de0;
        case 0x1f5de4u: goto label_1f5de4;
        case 0x1f5de8u: goto label_1f5de8;
        case 0x1f5decu: goto label_1f5dec;
        case 0x1f5df0u: goto label_1f5df0;
        case 0x1f5df4u: goto label_1f5df4;
        case 0x1f5df8u: goto label_1f5df8;
        case 0x1f5dfcu: goto label_1f5dfc;
        case 0x1f5e00u: goto label_1f5e00;
        case 0x1f5e04u: goto label_1f5e04;
        case 0x1f5e08u: goto label_1f5e08;
        case 0x1f5e0cu: goto label_1f5e0c;
        case 0x1f5e10u: goto label_1f5e10;
        case 0x1f5e14u: goto label_1f5e14;
        case 0x1f5e18u: goto label_1f5e18;
        case 0x1f5e1cu: goto label_1f5e1c;
        case 0x1f5e20u: goto label_1f5e20;
        case 0x1f5e24u: goto label_1f5e24;
        case 0x1f5e28u: goto label_1f5e28;
        case 0x1f5e2cu: goto label_1f5e2c;
        case 0x1f5e30u: goto label_1f5e30;
        case 0x1f5e34u: goto label_1f5e34;
        case 0x1f5e38u: goto label_1f5e38;
        case 0x1f5e3cu: goto label_1f5e3c;
        case 0x1f5e40u: goto label_1f5e40;
        case 0x1f5e44u: goto label_1f5e44;
        case 0x1f5e48u: goto label_1f5e48;
        case 0x1f5e4cu: goto label_1f5e4c;
        case 0x1f5e50u: goto label_1f5e50;
        case 0x1f5e54u: goto label_1f5e54;
        case 0x1f5e58u: goto label_1f5e58;
        case 0x1f5e5cu: goto label_1f5e5c;
        case 0x1f5e60u: goto label_1f5e60;
        case 0x1f5e64u: goto label_1f5e64;
        case 0x1f5e68u: goto label_1f5e68;
        case 0x1f5e6cu: goto label_1f5e6c;
        case 0x1f5e70u: goto label_1f5e70;
        case 0x1f5e74u: goto label_1f5e74;
        case 0x1f5e78u: goto label_1f5e78;
        case 0x1f5e7cu: goto label_1f5e7c;
        case 0x1f5e80u: goto label_1f5e80;
        case 0x1f5e84u: goto label_1f5e84;
        case 0x1f5e88u: goto label_1f5e88;
        case 0x1f5e8cu: goto label_1f5e8c;
        case 0x1f5e90u: goto label_1f5e90;
        case 0x1f5e94u: goto label_1f5e94;
        case 0x1f5e98u: goto label_1f5e98;
        case 0x1f5e9cu: goto label_1f5e9c;
        case 0x1f5ea0u: goto label_1f5ea0;
        case 0x1f5ea4u: goto label_1f5ea4;
        case 0x1f5ea8u: goto label_1f5ea8;
        case 0x1f5eacu: goto label_1f5eac;
        case 0x1f5eb0u: goto label_1f5eb0;
        case 0x1f5eb4u: goto label_1f5eb4;
        case 0x1f5eb8u: goto label_1f5eb8;
        case 0x1f5ebcu: goto label_1f5ebc;
        case 0x1f5ec0u: goto label_1f5ec0;
        case 0x1f5ec4u: goto label_1f5ec4;
        case 0x1f5ec8u: goto label_1f5ec8;
        case 0x1f5eccu: goto label_1f5ecc;
        case 0x1f5ed0u: goto label_1f5ed0;
        case 0x1f5ed4u: goto label_1f5ed4;
        case 0x1f5ed8u: goto label_1f5ed8;
        case 0x1f5edcu: goto label_1f5edc;
        case 0x1f5ee0u: goto label_1f5ee0;
        case 0x1f5ee4u: goto label_1f5ee4;
        case 0x1f5ee8u: goto label_1f5ee8;
        case 0x1f5eecu: goto label_1f5eec;
        case 0x1f5ef0u: goto label_1f5ef0;
        case 0x1f5ef4u: goto label_1f5ef4;
        case 0x1f5ef8u: goto label_1f5ef8;
        case 0x1f5efcu: goto label_1f5efc;
        case 0x1f5f00u: goto label_1f5f00;
        case 0x1f5f04u: goto label_1f5f04;
        case 0x1f5f08u: goto label_1f5f08;
        case 0x1f5f0cu: goto label_1f5f0c;
        case 0x1f5f10u: goto label_1f5f10;
        case 0x1f5f14u: goto label_1f5f14;
        case 0x1f5f18u: goto label_1f5f18;
        case 0x1f5f1cu: goto label_1f5f1c;
        case 0x1f5f20u: goto label_1f5f20;
        case 0x1f5f24u: goto label_1f5f24;
        case 0x1f5f28u: goto label_1f5f28;
        case 0x1f5f2cu: goto label_1f5f2c;
        case 0x1f5f30u: goto label_1f5f30;
        case 0x1f5f34u: goto label_1f5f34;
        case 0x1f5f38u: goto label_1f5f38;
        case 0x1f5f3cu: goto label_1f5f3c;
        case 0x1f5f40u: goto label_1f5f40;
        case 0x1f5f44u: goto label_1f5f44;
        case 0x1f5f48u: goto label_1f5f48;
        case 0x1f5f4cu: goto label_1f5f4c;
        case 0x1f5f50u: goto label_1f5f50;
        case 0x1f5f54u: goto label_1f5f54;
        case 0x1f5f58u: goto label_1f5f58;
        case 0x1f5f5cu: goto label_1f5f5c;
        case 0x1f5f60u: goto label_1f5f60;
        case 0x1f5f64u: goto label_1f5f64;
        case 0x1f5f68u: goto label_1f5f68;
        case 0x1f5f6cu: goto label_1f5f6c;
        case 0x1f5f70u: goto label_1f5f70;
        case 0x1f5f74u: goto label_1f5f74;
        case 0x1f5f78u: goto label_1f5f78;
        case 0x1f5f7cu: goto label_1f5f7c;
        case 0x1f5f80u: goto label_1f5f80;
        case 0x1f5f84u: goto label_1f5f84;
        case 0x1f5f88u: goto label_1f5f88;
        case 0x1f5f8cu: goto label_1f5f8c;
        case 0x1f5f90u: goto label_1f5f90;
        case 0x1f5f94u: goto label_1f5f94;
        case 0x1f5f98u: goto label_1f5f98;
        case 0x1f5f9cu: goto label_1f5f9c;
        case 0x1f5fa0u: goto label_1f5fa0;
        case 0x1f5fa4u: goto label_1f5fa4;
        case 0x1f5fa8u: goto label_1f5fa8;
        case 0x1f5facu: goto label_1f5fac;
        case 0x1f5fb0u: goto label_1f5fb0;
        case 0x1f5fb4u: goto label_1f5fb4;
        case 0x1f5fb8u: goto label_1f5fb8;
        case 0x1f5fbcu: goto label_1f5fbc;
        case 0x1f5fc0u: goto label_1f5fc0;
        case 0x1f5fc4u: goto label_1f5fc4;
        case 0x1f5fc8u: goto label_1f5fc8;
        case 0x1f5fccu: goto label_1f5fcc;
        case 0x1f5fd0u: goto label_1f5fd0;
        case 0x1f5fd4u: goto label_1f5fd4;
        case 0x1f5fd8u: goto label_1f5fd8;
        case 0x1f5fdcu: goto label_1f5fdc;
        case 0x1f5fe0u: goto label_1f5fe0;
        case 0x1f5fe4u: goto label_1f5fe4;
        case 0x1f5fe8u: goto label_1f5fe8;
        case 0x1f5fecu: goto label_1f5fec;
        default: break;
    }

    ctx->pc = 0x1f5de0u;

label_1f5de0:
    // 0x1f5de0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x1f5de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_1f5de4:
    // 0x1f5de4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f5de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f5de8:
    // 0x1f5de8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f5de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f5dec:
    // 0x1f5dec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f5decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f5df0:
    // 0x1f5df0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f5df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f5df4:
    // 0x1f5df4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f5df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f5df8:
    // 0x1f5df8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f5dfc:
    // 0x1f5dfc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f5dfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e00:
    // 0x1f5e00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f5e04:
    // 0x1f5e04: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f5e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f5e08:
    // 0x1f5e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5e0c:
    // 0x1f5e0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f5e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e10:
    // 0x1f5e10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5e14:
    // 0x1f5e14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f5e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e18:
    // 0x1f5e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5e1c:
    // 0x1f5e1c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f5e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e20:
    // 0x1f5e20: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1f5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f5e24:
    // 0x1f5e24: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f5e28:
    // 0x1f5e28: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f5e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f5e2c:
    // 0x1f5e2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f5e30:
    if (ctx->pc == 0x1F5E30u) {
        ctx->pc = 0x1F5E30u;
            // 0x1f5e30: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F5E34u;
        goto label_1f5e34;
    }
    ctx->pc = 0x1F5E2Cu;
    {
        const bool branch_taken_0x1f5e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E2Cu;
            // 0x1f5e30: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e2c) {
            ctx->pc = 0x1F5E5Cu;
            goto label_1f5e5c;
        }
    }
    ctx->pc = 0x1F5E34u;
label_1f5e34:
    // 0x1f5e34: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f5e38:
    // 0x1f5e38: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f5e3c:
    // 0x1f5e3c: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x1f5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
label_1f5e40:
    // 0x1f5e40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f5e44:
    // 0x1f5e44: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f5e48:
    // 0x1f5e48: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f5e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f5e4c:
    // 0x1f5e4c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f5e50:
    // 0x1f5e50: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f5e54:
    // 0x1f5e54: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f5e58:
    // 0x1f5e58: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f5e5c:
    // 0x1f5e5c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1f5e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f5e60:
    // 0x1f5e60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f5e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5e64:
    // 0x1f5e64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f5e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f5e68:
    // 0x1f5e68: 0x320f809  jalr        $t9
label_1f5e6c:
    if (ctx->pc == 0x1F5E6Cu) {
        ctx->pc = 0x1F5E70u;
        goto label_1f5e70;
    }
    ctx->pc = 0x1F5E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5E70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5E70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E70u; }
            if (ctx->pc != 0x1F5E70u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5E70u;
label_1f5e70:
    // 0x1f5e70: 0xafb5028c  sw          $s5, 0x28C($sp)
    ctx->pc = 0x1f5e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 21));
label_1f5e74:
    // 0x1f5e74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e78:
    // 0x1f5e78: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1f5e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1f5e7c:
    // 0x1f5e7c: 0xafa30288  sw          $v1, 0x288($sp)
    ctx->pc = 0x1f5e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 3));
label_1f5e80:
    // 0x1f5e80: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f5e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f5e84:
    // 0x1f5e84: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1f5e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5e88:
    // 0x1f5e88: 0x8c76000c  lw          $s6, 0xC($v1)
    ctx->pc = 0x1f5e88u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f5e8c:
    // 0x1f5e8c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f5e90:
    // 0x1f5e90: 0x320f809  jalr        $t9
label_1f5e94:
    if (ctx->pc == 0x1F5E94u) {
        ctx->pc = 0x1F5E94u;
            // 0x1f5e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E98u;
        goto label_1f5e98;
    }
    ctx->pc = 0x1F5E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5E98u);
        ctx->pc = 0x1F5E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E90u;
            // 0x1f5e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5E98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E98u; }
            if (ctx->pc != 0x1F5E98u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5E98u;
label_1f5e98:
    // 0x1f5e98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5e9c:
    // 0x1f5e9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5ea0:
    // 0x1f5ea0: 0x12030035  beq         $s0, $v1, . + 4 + (0x35 << 2)
label_1f5ea4:
    if (ctx->pc == 0x1F5EA4u) {
        ctx->pc = 0x1F5EA8u;
        goto label_1f5ea8;
    }
    ctx->pc = 0x1F5EA0u;
    {
        const bool branch_taken_0x1f5ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f5ea0) {
            ctx->pc = 0x1F5F78u;
            goto label_1f5f78;
        }
    }
    ctx->pc = 0x1F5EA8u;
label_1f5ea8:
    // 0x1f5ea8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f5eac:
    // 0x1f5eac: 0x27a4029c  addiu       $a0, $sp, 0x29C
    ctx->pc = 0x1f5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
label_1f5eb0:
    // 0x1f5eb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f5eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5eb4:
    // 0x1f5eb4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f5eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f5eb8:
    // 0x1f5eb8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1f5eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ebc:
    // 0x1f5ebc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f5ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ec0:
    // 0x1f5ec0: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1f5ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5ec4:
    // 0x1f5ec4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f5ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f5ec8:
    // 0x1f5ec8: 0x320f809  jalr        $t9
label_1f5ecc:
    if (ctx->pc == 0x1F5ECCu) {
        ctx->pc = 0x1F5ECCu;
            // 0x1f5ecc: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5ED0u;
        goto label_1f5ed0;
    }
    ctx->pc = 0x1F5EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5ED0u);
        ctx->pc = 0x1F5ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EC8u;
            // 0x1f5ecc: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5ED0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5ED0u; }
            if (ctx->pc != 0x1F5ED0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5ED0u;
label_1f5ed0:
    // 0x1f5ed0: 0x27a2029c  addiu       $v0, $sp, 0x29C
    ctx->pc = 0x1f5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
label_1f5ed4:
    // 0x1f5ed4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f5ed4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5ed8:
    // 0x1f5ed8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1f5edc:
    if (ctx->pc == 0x1F5EDCu) {
        ctx->pc = 0x1F5EE0u;
        goto label_1f5ee0;
    }
    ctx->pc = 0x1F5ED8u;
    {
        const bool branch_taken_0x1f5ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ed8) {
            ctx->pc = 0x1F5F50u;
            goto label_1f5f50;
        }
    }
    ctx->pc = 0x1F5EE0u;
label_1f5ee0:
    // 0x1f5ee0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f5ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f5ee4:
    // 0x1f5ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ee8:
    // 0x1f5ee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5eec:
    // 0x1f5eec: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f5eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f5ef0:
    // 0x1f5ef0: 0x320f809  jalr        $t9
label_1f5ef4:
    if (ctx->pc == 0x1F5EF4u) {
        ctx->pc = 0x1F5EF4u;
            // 0x1f5ef4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1F5EF8u;
        goto label_1f5ef8;
    }
    ctx->pc = 0x1F5EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5EF8u);
        ctx->pc = 0x1F5EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EF0u;
            // 0x1f5ef4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5EF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EF8u; }
            if (ctx->pc != 0x1F5EF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5EF8u;
label_1f5ef8:
    // 0x1f5ef8: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x1f5ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_1f5efc:
    // 0x1f5efc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1f5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1f5f00:
    // 0x1f5f00: 0xafb00284  sw          $s0, 0x284($sp)
    ctx->pc = 0x1f5f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 16));
label_1f5f04:
    // 0x1f5f04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f5f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f08:
    // 0x1f5f08: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1f5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f5f0c:
    // 0x1f5f0c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f5f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f10:
    // 0x1f5f10: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1f5f10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f5f14:
    // 0x1f5f14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f5f18:
    // 0x1f5f18: 0x2c81821  addu        $v1, $s6, $t0
    ctx->pc = 0x1f5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
label_1f5f1c:
    // 0x1f5f1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f5f20:
    // 0x1f5f20: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1f5f20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1f5f24:
    // 0x1f5f24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f5f28:
    // 0x1f5f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5f2c:
    // 0x1f5f2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f5f30:
    // 0x1f5f30: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f5f34:
    // 0x1f5f34: 0x8c4209a4  lw          $v0, 0x9A4($v0)
    ctx->pc = 0x1f5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2468)));
label_1f5f38:
    // 0x1f5f38: 0x40f809  jalr        $v0
label_1f5f3c:
    if (ctx->pc == 0x1F5F3Cu) {
        ctx->pc = 0x1F5F3Cu;
            // 0x1f5f3c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F40u;
        goto label_1f5f40;
    }
    ctx->pc = 0x1F5F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5F40u);
        ctx->pc = 0x1F5F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F38u;
            // 0x1f5f3c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F40u; }
            if (ctx->pc != 0x1F5F40u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5F40u;
label_1f5f40:
    // 0x1f5f40: 0x82430004  lb          $v1, 0x4($s2)
    ctx->pc = 0x1f5f40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_1f5f44:
    // 0x1f5f44: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_1f5f48:
    if (ctx->pc == 0x1F5F48u) {
        ctx->pc = 0x1F5F4Cu;
        goto label_1f5f4c;
    }
    ctx->pc = 0x1F5F44u;
    {
        const bool branch_taken_0x1f5f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5f44) {
            ctx->pc = 0x1F5F78u;
            goto label_1f5f78;
        }
    }
    ctx->pc = 0x1F5F4Cu;
label_1f5f4c:
    // 0x1f5f4c: 0x0  nop
    ctx->pc = 0x1f5f4cu;
    // NOP
label_1f5f50:
    // 0x1f5f50: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f5f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f5f54:
    // 0x1f5f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f58:
    // 0x1f5f58: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f5f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f5f5c:
    // 0x1f5f5c: 0x320f809  jalr        $t9
label_1f5f60:
    if (ctx->pc == 0x1F5F60u) {
        ctx->pc = 0x1F5F60u;
            // 0x1f5f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F64u;
        goto label_1f5f64;
    }
    ctx->pc = 0x1F5F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5F64u);
        ctx->pc = 0x1F5F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F5Cu;
            // 0x1f5f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5F64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F64u; }
            if (ctx->pc != 0x1F5F64u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5F64u;
label_1f5f64:
    // 0x1f5f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f68:
    // 0x1f5f68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5f6c:
    // 0x1f5f6c: 0x5603ffcf  bnel        $s0, $v1, . + 4 + (-0x31 << 2)
label_1f5f70:
    if (ctx->pc == 0x1F5F70u) {
        ctx->pc = 0x1F5F70u;
            // 0x1f5f70: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x1F5F74u;
        goto label_1f5f74;
    }
    ctx->pc = 0x1F5F6Cu;
    {
        const bool branch_taken_0x1f5f6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5f6c) {
            ctx->pc = 0x1F5F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F6Cu;
            // 0x1f5f70: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5EACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5eac;
        }
    }
    ctx->pc = 0x1F5F74u;
label_1f5f74:
    // 0x1f5f74: 0x0  nop
    ctx->pc = 0x1f5f74u;
    // NOP
label_1f5f78:
    // 0x1f5f78: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f5f7c:
    // 0x1f5f7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f5f80:
    // 0x1f5f80: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1f5f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1f5f84:
    // 0x1f5f84: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f5f88:
    // 0x1f5f88: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f5f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f5f8c:
    // 0x1f5f8c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f5f8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f5f90:
    // 0x1f5f90: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f5f94:
    if (ctx->pc == 0x1F5F94u) {
        ctx->pc = 0x1F5F94u;
            // 0x1f5f94: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F5F98u;
        goto label_1f5f98;
    }
    ctx->pc = 0x1F5F90u;
    {
        const bool branch_taken_0x1f5f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F90u;
            // 0x1f5f94: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f90) {
            ctx->pc = 0x1F5FC0u;
            goto label_1f5fc0;
        }
    }
    ctx->pc = 0x1F5F98u;
label_1f5f98:
    // 0x1f5f98: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f5f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f5f9c:
    // 0x1f5f9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f5fa0:
    // 0x1f5fa0: 0x2463af88  addiu       $v1, $v1, -0x5078
    ctx->pc = 0x1f5fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946696));
label_1f5fa4:
    // 0x1f5fa4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f5fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f5fa8:
    // 0x1f5fa8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f5fac:
    // 0x1f5fac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f5facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f5fb0:
    // 0x1f5fb0: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f5fb4:
    // 0x1f5fb4: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f5fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f5fb8:
    // 0x1f5fb8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f5fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f5fbc:
    // 0x1f5fbc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f5fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f5fc0:
    // 0x1f5fc0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f5fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5fc4:
    // 0x1f5fc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f5fc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5fc8:
    // 0x1f5fc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5fc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f5fcc:
    // 0x1f5fcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f5fccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5fd0:
    // 0x1f5fd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5fd4:
    // 0x1f5fd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5fd8:
    // 0x1f5fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5fdc:
    // 0x1f5fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5fe0:
    // 0x1f5fe0: 0x3e00008  jr          $ra
label_1f5fe4:
    if (ctx->pc == 0x1F5FE4u) {
        ctx->pc = 0x1F5FE4u;
            // 0x1f5fe4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x1F5FE8u;
        goto label_1f5fe8;
    }
    ctx->pc = 0x1F5FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5FE0u;
            // 0x1f5fe4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5FE8u;
label_1f5fe8:
    // 0x1f5fe8: 0x0  nop
    ctx->pc = 0x1f5fe8u;
    // NOP
label_1f5fec:
    // 0x1f5fec: 0x0  nop
    ctx->pc = 0x1f5fecu;
    // NOP
}
