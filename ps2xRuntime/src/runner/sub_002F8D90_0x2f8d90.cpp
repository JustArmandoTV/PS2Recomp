#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F8D90
// Address: 0x2f8d90 - 0x2f9020
void sub_002F8D90_0x2f8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8D90_0x2f8d90");
#endif

    switch (ctx->pc) {
        case 0x2f8d90u: goto label_2f8d90;
        case 0x2f8d94u: goto label_2f8d94;
        case 0x2f8d98u: goto label_2f8d98;
        case 0x2f8d9cu: goto label_2f8d9c;
        case 0x2f8da0u: goto label_2f8da0;
        case 0x2f8da4u: goto label_2f8da4;
        case 0x2f8da8u: goto label_2f8da8;
        case 0x2f8dacu: goto label_2f8dac;
        case 0x2f8db0u: goto label_2f8db0;
        case 0x2f8db4u: goto label_2f8db4;
        case 0x2f8db8u: goto label_2f8db8;
        case 0x2f8dbcu: goto label_2f8dbc;
        case 0x2f8dc0u: goto label_2f8dc0;
        case 0x2f8dc4u: goto label_2f8dc4;
        case 0x2f8dc8u: goto label_2f8dc8;
        case 0x2f8dccu: goto label_2f8dcc;
        case 0x2f8dd0u: goto label_2f8dd0;
        case 0x2f8dd4u: goto label_2f8dd4;
        case 0x2f8dd8u: goto label_2f8dd8;
        case 0x2f8ddcu: goto label_2f8ddc;
        case 0x2f8de0u: goto label_2f8de0;
        case 0x2f8de4u: goto label_2f8de4;
        case 0x2f8de8u: goto label_2f8de8;
        case 0x2f8decu: goto label_2f8dec;
        case 0x2f8df0u: goto label_2f8df0;
        case 0x2f8df4u: goto label_2f8df4;
        case 0x2f8df8u: goto label_2f8df8;
        case 0x2f8dfcu: goto label_2f8dfc;
        case 0x2f8e00u: goto label_2f8e00;
        case 0x2f8e04u: goto label_2f8e04;
        case 0x2f8e08u: goto label_2f8e08;
        case 0x2f8e0cu: goto label_2f8e0c;
        case 0x2f8e10u: goto label_2f8e10;
        case 0x2f8e14u: goto label_2f8e14;
        case 0x2f8e18u: goto label_2f8e18;
        case 0x2f8e1cu: goto label_2f8e1c;
        case 0x2f8e20u: goto label_2f8e20;
        case 0x2f8e24u: goto label_2f8e24;
        case 0x2f8e28u: goto label_2f8e28;
        case 0x2f8e2cu: goto label_2f8e2c;
        case 0x2f8e30u: goto label_2f8e30;
        case 0x2f8e34u: goto label_2f8e34;
        case 0x2f8e38u: goto label_2f8e38;
        case 0x2f8e3cu: goto label_2f8e3c;
        case 0x2f8e40u: goto label_2f8e40;
        case 0x2f8e44u: goto label_2f8e44;
        case 0x2f8e48u: goto label_2f8e48;
        case 0x2f8e4cu: goto label_2f8e4c;
        case 0x2f8e50u: goto label_2f8e50;
        case 0x2f8e54u: goto label_2f8e54;
        case 0x2f8e58u: goto label_2f8e58;
        case 0x2f8e5cu: goto label_2f8e5c;
        case 0x2f8e60u: goto label_2f8e60;
        case 0x2f8e64u: goto label_2f8e64;
        case 0x2f8e68u: goto label_2f8e68;
        case 0x2f8e6cu: goto label_2f8e6c;
        case 0x2f8e70u: goto label_2f8e70;
        case 0x2f8e74u: goto label_2f8e74;
        case 0x2f8e78u: goto label_2f8e78;
        case 0x2f8e7cu: goto label_2f8e7c;
        case 0x2f8e80u: goto label_2f8e80;
        case 0x2f8e84u: goto label_2f8e84;
        case 0x2f8e88u: goto label_2f8e88;
        case 0x2f8e8cu: goto label_2f8e8c;
        case 0x2f8e90u: goto label_2f8e90;
        case 0x2f8e94u: goto label_2f8e94;
        case 0x2f8e98u: goto label_2f8e98;
        case 0x2f8e9cu: goto label_2f8e9c;
        case 0x2f8ea0u: goto label_2f8ea0;
        case 0x2f8ea4u: goto label_2f8ea4;
        case 0x2f8ea8u: goto label_2f8ea8;
        case 0x2f8eacu: goto label_2f8eac;
        case 0x2f8eb0u: goto label_2f8eb0;
        case 0x2f8eb4u: goto label_2f8eb4;
        case 0x2f8eb8u: goto label_2f8eb8;
        case 0x2f8ebcu: goto label_2f8ebc;
        case 0x2f8ec0u: goto label_2f8ec0;
        case 0x2f8ec4u: goto label_2f8ec4;
        case 0x2f8ec8u: goto label_2f8ec8;
        case 0x2f8eccu: goto label_2f8ecc;
        case 0x2f8ed0u: goto label_2f8ed0;
        case 0x2f8ed4u: goto label_2f8ed4;
        case 0x2f8ed8u: goto label_2f8ed8;
        case 0x2f8edcu: goto label_2f8edc;
        case 0x2f8ee0u: goto label_2f8ee0;
        case 0x2f8ee4u: goto label_2f8ee4;
        case 0x2f8ee8u: goto label_2f8ee8;
        case 0x2f8eecu: goto label_2f8eec;
        case 0x2f8ef0u: goto label_2f8ef0;
        case 0x2f8ef4u: goto label_2f8ef4;
        case 0x2f8ef8u: goto label_2f8ef8;
        case 0x2f8efcu: goto label_2f8efc;
        case 0x2f8f00u: goto label_2f8f00;
        case 0x2f8f04u: goto label_2f8f04;
        case 0x2f8f08u: goto label_2f8f08;
        case 0x2f8f0cu: goto label_2f8f0c;
        case 0x2f8f10u: goto label_2f8f10;
        case 0x2f8f14u: goto label_2f8f14;
        case 0x2f8f18u: goto label_2f8f18;
        case 0x2f8f1cu: goto label_2f8f1c;
        case 0x2f8f20u: goto label_2f8f20;
        case 0x2f8f24u: goto label_2f8f24;
        case 0x2f8f28u: goto label_2f8f28;
        case 0x2f8f2cu: goto label_2f8f2c;
        case 0x2f8f30u: goto label_2f8f30;
        case 0x2f8f34u: goto label_2f8f34;
        case 0x2f8f38u: goto label_2f8f38;
        case 0x2f8f3cu: goto label_2f8f3c;
        case 0x2f8f40u: goto label_2f8f40;
        case 0x2f8f44u: goto label_2f8f44;
        case 0x2f8f48u: goto label_2f8f48;
        case 0x2f8f4cu: goto label_2f8f4c;
        case 0x2f8f50u: goto label_2f8f50;
        case 0x2f8f54u: goto label_2f8f54;
        case 0x2f8f58u: goto label_2f8f58;
        case 0x2f8f5cu: goto label_2f8f5c;
        case 0x2f8f60u: goto label_2f8f60;
        case 0x2f8f64u: goto label_2f8f64;
        case 0x2f8f68u: goto label_2f8f68;
        case 0x2f8f6cu: goto label_2f8f6c;
        case 0x2f8f70u: goto label_2f8f70;
        case 0x2f8f74u: goto label_2f8f74;
        case 0x2f8f78u: goto label_2f8f78;
        case 0x2f8f7cu: goto label_2f8f7c;
        case 0x2f8f80u: goto label_2f8f80;
        case 0x2f8f84u: goto label_2f8f84;
        case 0x2f8f88u: goto label_2f8f88;
        case 0x2f8f8cu: goto label_2f8f8c;
        case 0x2f8f90u: goto label_2f8f90;
        case 0x2f8f94u: goto label_2f8f94;
        case 0x2f8f98u: goto label_2f8f98;
        case 0x2f8f9cu: goto label_2f8f9c;
        case 0x2f8fa0u: goto label_2f8fa0;
        case 0x2f8fa4u: goto label_2f8fa4;
        case 0x2f8fa8u: goto label_2f8fa8;
        case 0x2f8facu: goto label_2f8fac;
        case 0x2f8fb0u: goto label_2f8fb0;
        case 0x2f8fb4u: goto label_2f8fb4;
        case 0x2f8fb8u: goto label_2f8fb8;
        case 0x2f8fbcu: goto label_2f8fbc;
        case 0x2f8fc0u: goto label_2f8fc0;
        case 0x2f8fc4u: goto label_2f8fc4;
        case 0x2f8fc8u: goto label_2f8fc8;
        case 0x2f8fccu: goto label_2f8fcc;
        case 0x2f8fd0u: goto label_2f8fd0;
        case 0x2f8fd4u: goto label_2f8fd4;
        case 0x2f8fd8u: goto label_2f8fd8;
        case 0x2f8fdcu: goto label_2f8fdc;
        case 0x2f8fe0u: goto label_2f8fe0;
        case 0x2f8fe4u: goto label_2f8fe4;
        case 0x2f8fe8u: goto label_2f8fe8;
        case 0x2f8fecu: goto label_2f8fec;
        case 0x2f8ff0u: goto label_2f8ff0;
        case 0x2f8ff4u: goto label_2f8ff4;
        case 0x2f8ff8u: goto label_2f8ff8;
        case 0x2f8ffcu: goto label_2f8ffc;
        case 0x2f9000u: goto label_2f9000;
        case 0x2f9004u: goto label_2f9004;
        case 0x2f9008u: goto label_2f9008;
        case 0x2f900cu: goto label_2f900c;
        case 0x2f9010u: goto label_2f9010;
        case 0x2f9014u: goto label_2f9014;
        case 0x2f9018u: goto label_2f9018;
        case 0x2f901cu: goto label_2f901c;
        default: break;
    }

    ctx->pc = 0x2f8d90u;

label_2f8d90:
    // 0x2f8d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2f8d94:
    // 0x2f8d94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f8d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2f8d98:
    // 0x2f8d98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f8d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f8d9c:
    // 0x2f8d9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f8d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f8da0:
    // 0x2f8da0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f8da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f8da4:
    // 0x2f8da4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f8da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f8da8:
    // 0x2f8da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f8dac:
    // 0x2f8dac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f8dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f8db0:
    // 0x2f8db0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f8db4:
    // 0x2f8db4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f8db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f8db8:
    // 0x2f8db8: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x2f8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_2f8dbc:
    // 0x2f8dbc: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x2f8dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2f8dc0:
    // 0x2f8dc0: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x2f8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_2f8dc4:
    // 0x2f8dc4: 0x8062010d  lb          $v0, 0x10D($v1)
    ctx->pc = 0x2f8dc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 269)));
label_2f8dc8:
    // 0x2f8dc8: 0xa062010e  sb          $v0, 0x10E($v1)
    ctx->pc = 0x2f8dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 270), (uint8_t)GPR_U32(ctx, 2));
label_2f8dcc:
    // 0x2f8dcc: 0xa060010d  sb          $zero, 0x10D($v1)
    ctx->pc = 0x2f8dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 269), (uint8_t)GPR_U32(ctx, 0));
label_2f8dd0:
    // 0x2f8dd0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2f8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f8dd4:
    // 0x2f8dd4: 0x909300d8  lbu         $s3, 0xD8($a0)
    ctx->pc = 0x2f8dd4u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
label_2f8dd8:
    // 0x2f8dd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f8ddc:
    if (ctx->pc == 0x2F8DDCu) {
        ctx->pc = 0x2F8DDCu;
            // 0x2f8ddc: 0x26340004  addiu       $s4, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2F8DE0u;
        goto label_2f8de0;
    }
    ctx->pc = 0x2F8DD8u;
    {
        const bool branch_taken_0x2f8dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8DD8u;
            // 0x2f8ddc: 0x26340004  addiu       $s4, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8dd8) {
            ctx->pc = 0x2F8E08u;
            goto label_2f8e08;
        }
    }
    ctx->pc = 0x2F8DE0u;
label_2f8de0:
    // 0x2f8de0: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2f8de0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f8de4:
    // 0x2f8de4: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x2f8de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_2f8de8:
    // 0x2f8de8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8dec:
    // 0x2f8dec: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f8decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f8df0:
    // 0x2f8df0: 0x320f809  jalr        $t9
label_2f8df4:
    if (ctx->pc == 0x2F8DF4u) {
        ctx->pc = 0x2F8DF8u;
        goto label_2f8df8;
    }
    ctx->pc = 0x2F8DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8DF8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8DF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8DF8u; }
            if (ctx->pc != 0x2F8DF8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8DF8u;
label_2f8df8:
    // 0x2f8df8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2f8df8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2f8dfc:
    // 0x2f8dfc: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x2f8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_2f8e00:
    // 0x2f8e00: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_2f8e04:
    if (ctx->pc == 0x2F8E04u) {
        ctx->pc = 0x2F8E04u;
            // 0x2f8e04: 0x8ea40030  lw          $a0, 0x30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
        ctx->pc = 0x2F8E08u;
        goto label_2f8e08;
    }
    ctx->pc = 0x2F8E00u;
    {
        const bool branch_taken_0x2f8e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e00) {
            ctx->pc = 0x2F8E04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8E00u;
            // 0x2f8e04: 0x8ea40030  lw          $a0, 0x30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8de8;
        }
    }
    ctx->pc = 0x2F8E08u;
label_2f8e08:
    // 0x2f8e08: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2f8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f8e0c:
    // 0x2f8e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8e10:
    // 0x2f8e10: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x2f8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_2f8e14:
    // 0x2f8e14: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2f8e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_2f8e18:
    // 0x2f8e18: 0xa2420018  sb          $v0, 0x18($s2)
    ctx->pc = 0x2f8e18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 24), (uint8_t)GPR_U32(ctx, 2));
label_2f8e1c:
    // 0x2f8e1c: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x2f8e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2f8e20:
    // 0x2f8e20: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f8e24:
    if (ctx->pc == 0x2F8E24u) {
        ctx->pc = 0x2F8E24u;
            // 0x2f8e24: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x2F8E28u;
        goto label_2f8e28;
    }
    ctx->pc = 0x2F8E20u;
    {
        const bool branch_taken_0x2f8e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e20) {
            ctx->pc = 0x2F8E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8E20u;
            // 0x2f8e24: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8E3Cu;
            goto label_2f8e3c;
        }
    }
    ctx->pc = 0x2F8E28u;
label_2f8e28:
    // 0x2f8e28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8e28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8e2c:
    // 0x2f8e2c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f8e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f8e30:
    // 0x2f8e30: 0x320f809  jalr        $t9
label_2f8e34:
    if (ctx->pc == 0x2F8E34u) {
        ctx->pc = 0x2F8E38u;
        goto label_2f8e38;
    }
    ctx->pc = 0x2F8E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8E38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E38u; }
            if (ctx->pc != 0x2F8E38u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8E38u;
label_2f8e38:
    // 0x2f8e38: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f8e3c:
    // 0x2f8e3c: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x2f8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_2f8e40:
    // 0x2f8e40: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x2f8e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2f8e44:
    // 0x2f8e44: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2f8e48:
    if (ctx->pc == 0x2F8E48u) {
        ctx->pc = 0x2F8E48u;
            // 0x2f8e48: 0x2a610002  slti        $at, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x2F8E4Cu;
        goto label_2f8e4c;
    }
    ctx->pc = 0x2F8E44u;
    {
        const bool branch_taken_0x2f8e44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e44) {
            ctx->pc = 0x2F8E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8E44u;
            // 0x2f8e48: 0x2a610002  slti        $at, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8E64u;
            goto label_2f8e64;
        }
    }
    ctx->pc = 0x2F8E4Cu;
label_2f8e4c:
    // 0x2f8e4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8e50:
    // 0x2f8e50: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f8e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f8e54:
    // 0x2f8e54: 0x320f809  jalr        $t9
label_2f8e58:
    if (ctx->pc == 0x2F8E58u) {
        ctx->pc = 0x2F8E5Cu;
        goto label_2f8e5c;
    }
    ctx->pc = 0x2F8E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8E5Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8E5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8E5Cu; }
            if (ctx->pc != 0x2F8E5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F8E5Cu;
label_2f8e5c:
    // 0x2f8e5c: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x2f8e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_2f8e60:
    // 0x2f8e60: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x2f8e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f8e64:
    // 0x2f8e64: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_2f8e68:
    if (ctx->pc == 0x2F8E68u) {
        ctx->pc = 0x2F8E68u;
            // 0x2f8e68: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F8E6Cu;
        goto label_2f8e6c;
    }
    ctx->pc = 0x2F8E64u;
    {
        const bool branch_taken_0x2f8e64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8E64u;
            // 0x2f8e68: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8e64) {
            ctx->pc = 0x2F8EC8u;
            goto label_2f8ec8;
        }
    }
    ctx->pc = 0x2F8E6Cu;
label_2f8e6c:
    // 0x2f8e6c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x2f8e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2f8e70:
    // 0x2f8e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f8e74:
    // 0x2f8e74: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2f8e78:
    if (ctx->pc == 0x2F8E78u) {
        ctx->pc = 0x2F8E7Cu;
        goto label_2f8e7c;
    }
    ctx->pc = 0x2F8E74u;
    {
        const bool branch_taken_0x2f8e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8e74) {
            ctx->pc = 0x2F8EB8u;
            goto label_2f8eb8;
        }
    }
    ctx->pc = 0x2F8E7Cu;
label_2f8e7c:
    // 0x2f8e7c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2f8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f8e80:
    // 0x2f8e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8e84:
    // 0x2f8e84: 0x0  nop
    ctx->pc = 0x2f8e84u;
    // NOP
label_2f8e88:
    // 0x2f8e88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8e8c:
    // 0x2f8e8c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2f8e90:
    if (ctx->pc == 0x2F8E90u) {
        ctx->pc = 0x2F8E94u;
        goto label_2f8e94;
    }
    ctx->pc = 0x2F8E8Cu;
    {
        const bool branch_taken_0x2f8e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f8e8c) {
            ctx->pc = 0x2F8EA8u;
            goto label_2f8ea8;
        }
    }
    ctx->pc = 0x2F8E94u;
label_2f8e94:
    // 0x2f8e94: 0x32a500ff  andi        $a1, $s5, 0xFF
    ctx->pc = 0x2f8e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_2f8e98:
    // 0x2f8e98: 0xc0be1dc  jal         func_2F8770
label_2f8e9c:
    if (ctx->pc == 0x2F8E9Cu) {
        ctx->pc = 0x2F8E9Cu;
            // 0x2f8e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8EA0u;
        goto label_2f8ea0;
    }
    ctx->pc = 0x2F8E98u;
    SET_GPR_U32(ctx, 31, 0x2F8EA0u);
    ctx->pc = 0x2F8E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8E98u;
            // 0x2f8e9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8770u;
    if (runtime->hasFunction(0x2F8770u)) {
        auto targetFn = runtime->lookupFunction(0x2F8770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EA0u; }
        if (ctx->pc != 0x2F8EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8770_0x2f8770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EA0u; }
        if (ctx->pc != 0x2F8EA0u) { return; }
    }
    ctx->pc = 0x2F8EA0u;
label_2f8ea0:
    // 0x2f8ea0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f8ea4:
    if (ctx->pc == 0x2F8EA4u) {
        ctx->pc = 0x2F8EA8u;
        goto label_2f8ea8;
    }
    ctx->pc = 0x2F8EA0u;
    {
        const bool branch_taken_0x2f8ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ea0) {
            ctx->pc = 0x2F8EB8u;
            goto label_2f8eb8;
        }
    }
    ctx->pc = 0x2F8EA8u;
label_2f8ea8:
    // 0x2f8ea8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2f8ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2f8eac:
    // 0x2f8eac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8eb0:
    // 0x2f8eb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2f8eb4:
    if (ctx->pc == 0x2F8EB4u) {
        ctx->pc = 0x2F8EB8u;
        goto label_2f8eb8;
    }
    ctx->pc = 0x2F8EB0u;
    {
        const bool branch_taken_0x2f8eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8eb0) {
            ctx->pc = 0x2F8E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8e88;
        }
    }
    ctx->pc = 0x2F8EB8u;
label_2f8eb8:
    // 0x2f8eb8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2f8eb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2f8ebc:
    // 0x2f8ebc: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x2f8ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2f8ec0:
    // 0x2f8ec0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2f8ec4:
    if (ctx->pc == 0x2F8EC4u) {
        ctx->pc = 0x2F8EC4u;
            // 0x2f8ec4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x2F8EC8u;
        goto label_2f8ec8;
    }
    ctx->pc = 0x2F8EC0u;
    {
        const bool branch_taken_0x2f8ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8EC0u;
            // 0x2f8ec4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ec0) {
            ctx->pc = 0x2F8E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8e70;
        }
    }
    ctx->pc = 0x2F8EC8u;
label_2f8ec8:
    // 0x2f8ec8: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x2f8ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2f8ecc:
    // 0x2f8ecc: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_2f8ed0:
    if (ctx->pc == 0x2F8ED0u) {
        ctx->pc = 0x2F8ED0u;
            // 0x2f8ed0: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x2F8ED4u;
        goto label_2f8ed4;
    }
    ctx->pc = 0x2F8ECCu;
    {
        const bool branch_taken_0x2f8ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ecc) {
            ctx->pc = 0x2F8ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8ECCu;
            // 0x2f8ed0: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8EF0u;
            goto label_2f8ef0;
        }
    }
    ctx->pc = 0x2F8ED4u;
label_2f8ed4:
    // 0x2f8ed4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f8ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f8ed8:
    // 0x2f8ed8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f8ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f8edc:
    // 0x2f8edc: 0x320f809  jalr        $t9
label_2f8ee0:
    if (ctx->pc == 0x2F8EE0u) {
        ctx->pc = 0x2F8EE4u;
        goto label_2f8ee4;
    }
    ctx->pc = 0x2F8EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8EE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8EE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EE4u; }
            if (ctx->pc != 0x2F8EE4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8EE4u;
label_2f8ee4:
    // 0x2f8ee4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f8ee8:
    // 0x2f8ee8: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x2f8ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_2f8eec:
    // 0x2f8eec: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x2f8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2f8ef0:
    // 0x2f8ef0: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x2f8ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2f8ef4:
    // 0x2f8ef4: 0xc04a508  jal         func_129420
label_2f8ef8:
    if (ctx->pc == 0x2F8EF8u) {
        ctx->pc = 0x2F8EF8u;
            // 0x2f8ef8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F8EFCu;
        goto label_2f8efc;
    }
    ctx->pc = 0x2F8EF4u;
    SET_GPR_U32(ctx, 31, 0x2F8EFCu);
    ctx->pc = 0x2F8EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8EF4u;
            // 0x2f8ef8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EFCu; }
        if (ctx->pc != 0x2F8EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8EFCu; }
        if (ctx->pc != 0x2F8EFCu) { return; }
    }
    ctx->pc = 0x2F8EFCu;
label_2f8efc:
    // 0x2f8efc: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x2f8efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_2f8f00:
    // 0x2f8f00: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x2f8f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_2f8f04:
    // 0x2f8f04: 0xc04a508  jal         func_129420
label_2f8f08:
    if (ctx->pc == 0x2F8F08u) {
        ctx->pc = 0x2F8F08u;
            // 0x2f8f08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F8F0Cu;
        goto label_2f8f0c;
    }
    ctx->pc = 0x2F8F04u;
    SET_GPR_U32(ctx, 31, 0x2F8F0Cu);
    ctx->pc = 0x2F8F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F04u;
            // 0x2f8f08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F0Cu; }
        if (ctx->pc != 0x2F8F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F0Cu; }
        if (ctx->pc != 0x2F8F0Cu) { return; }
    }
    ctx->pc = 0x2F8F0Cu;
label_2f8f0c:
    // 0x2f8f0c: 0x264400e8  addiu       $a0, $s2, 0xE8
    ctx->pc = 0x2f8f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
label_2f8f10:
    // 0x2f8f10: 0x262500e8  addiu       $a1, $s1, 0xE8
    ctx->pc = 0x2f8f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
label_2f8f14:
    // 0x2f8f14: 0xc04a508  jal         func_129420
label_2f8f18:
    if (ctx->pc == 0x2F8F18u) {
        ctx->pc = 0x2F8F18u;
            // 0x2f8f18: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x2F8F1Cu;
        goto label_2f8f1c;
    }
    ctx->pc = 0x2F8F14u;
    SET_GPR_U32(ctx, 31, 0x2F8F1Cu);
    ctx->pc = 0x2F8F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F14u;
            // 0x2f8f18: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F1Cu; }
        if (ctx->pc != 0x2F8F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F1Cu; }
        if (ctx->pc != 0x2F8F1Cu) { return; }
    }
    ctx->pc = 0x2F8F1Cu;
label_2f8f1c:
    // 0x2f8f1c: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x2f8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_2f8f20:
    // 0x2f8f20: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2f8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2f8f24:
    // 0x2f8f24: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x2f8f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
label_2f8f28:
    // 0x2f8f28: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2f8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2f8f2c:
    // 0x2f8f2c: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
label_2f8f30:
    if (ctx->pc == 0x2F8F30u) {
        ctx->pc = 0x2F8F30u;
            // 0x2f8f30: 0x9222001a  lbu         $v0, 0x1A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
        ctx->pc = 0x2F8F34u;
        goto label_2f8f34;
    }
    ctx->pc = 0x2F8F2Cu;
    {
        const bool branch_taken_0x2f8f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8f2c) {
            ctx->pc = 0x2F8F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F2Cu;
            // 0x2f8f30: 0x9222001a  lbu         $v0, 0x1A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8F98u;
            goto label_2f8f98;
        }
    }
    ctx->pc = 0x2F8F34u;
label_2f8f34:
    // 0x2f8f34: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2f8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2f8f38:
    // 0x2f8f38: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_2f8f3c:
    if (ctx->pc == 0x2F8F3Cu) {
        ctx->pc = 0x2F8F3Cu;
            // 0x2f8f3c: 0x923000d8  lbu         $s0, 0xD8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->pc = 0x2F8F40u;
        goto label_2f8f40;
    }
    ctx->pc = 0x2F8F38u;
    {
        const bool branch_taken_0x2f8f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8f38) {
            ctx->pc = 0x2F8F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F38u;
            // 0x2f8f3c: 0x923000d8  lbu         $s0, 0xD8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8F64u;
            goto label_2f8f64;
        }
    }
    ctx->pc = 0x2F8F40u;
label_2f8f40:
    // 0x2f8f40: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2f8f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2f8f44:
    // 0x2f8f44: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_2f8f48:
    if (ctx->pc == 0x2F8F48u) {
        ctx->pc = 0x2F8F48u;
            // 0x2f8f48: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x2F8F4Cu;
        goto label_2f8f4c;
    }
    ctx->pc = 0x2F8F44u;
    {
        const bool branch_taken_0x2f8f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f8f44) {
            ctx->pc = 0x2F8F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F44u;
            // 0x2f8f48: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8F54u;
            goto label_2f8f54;
        }
    }
    ctx->pc = 0x2F8F4Cu;
label_2f8f4c:
    // 0x2f8f4c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2f8f50:
    if (ctx->pc == 0x2F8F50u) {
        ctx->pc = 0x2F8F50u;
            // 0x2f8f50: 0x8e4300c8  lw          $v1, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->pc = 0x2F8F54u;
        goto label_2f8f54;
    }
    ctx->pc = 0x2F8F4Cu;
    {
        const bool branch_taken_0x2f8f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F4Cu;
            // 0x2f8f50: 0x8e4300c8  lw          $v1, 0xC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8f4c) {
            ctx->pc = 0x2F8FB8u;
            goto label_2f8fb8;
        }
    }
    ctx->pc = 0x2F8F54u;
label_2f8f54:
    // 0x2f8f54: 0xc0ce708  jal         func_339C20
label_2f8f58:
    if (ctx->pc == 0x2F8F58u) {
        ctx->pc = 0x2F8F58u;
            // 0x2f8f58: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x2F8F5Cu;
        goto label_2f8f5c;
    }
    ctx->pc = 0x2F8F54u;
    SET_GPR_U32(ctx, 31, 0x2F8F5Cu);
    ctx->pc = 0x2F8F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F54u;
            // 0x2f8f58: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x339C20u;
    if (runtime->hasFunction(0x339C20u)) {
        auto targetFn = runtime->lookupFunction(0x339C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F5Cu; }
        if (ctx->pc != 0x2F8F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00339C20_0x339c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F5Cu; }
        if (ctx->pc != 0x2F8F5Cu) { return; }
    }
    ctx->pc = 0x2F8F5Cu;
label_2f8f5c:
    // 0x2f8f5c: 0x10000015  b           . + 4 + (0x15 << 2)
label_2f8f60:
    if (ctx->pc == 0x2F8F60u) {
        ctx->pc = 0x2F8F64u;
        goto label_2f8f64;
    }
    ctx->pc = 0x2F8F5Cu;
    {
        const bool branch_taken_0x2f8f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8f5c) {
            ctx->pc = 0x2F8FB4u;
            goto label_2f8fb4;
        }
    }
    ctx->pc = 0x2F8F64u;
label_2f8f64:
    // 0x2f8f64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f8f64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8f68:
    // 0x2f8f68: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2f8f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2f8f6c:
    // 0x2f8f6c: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2f8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2f8f70:
    // 0x2f8f70: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2f8f74:
    // 0x2f8f74: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2f8f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f8f78:
    // 0x2f8f78: 0xc0ce4cc  jal         func_339330
label_2f8f7c:
    if (ctx->pc == 0x2F8F7Cu) {
        ctx->pc = 0x2F8F7Cu;
            // 0x2f8f7c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x2F8F80u;
        goto label_2f8f80;
    }
    ctx->pc = 0x2F8F78u;
    SET_GPR_U32(ctx, 31, 0x2F8F80u);
    ctx->pc = 0x2F8F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F78u;
            // 0x2f8f7c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x339330u;
    if (runtime->hasFunction(0x339330u)) {
        auto targetFn = runtime->lookupFunction(0x339330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F80u; }
        if (ctx->pc != 0x2F8F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00339330_0x339330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8F80u; }
        if (ctx->pc != 0x2F8F80u) { return; }
    }
    ctx->pc = 0x2F8F80u;
label_2f8f80:
    // 0x2f8f80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2f8f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2f8f84:
    // 0x2f8f84: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x2f8f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2f8f88:
    // 0x2f8f88: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_2f8f8c:
    if (ctx->pc == 0x2F8F8Cu) {
        ctx->pc = 0x2F8F8Cu;
            // 0x2f8f8c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x2F8F90u;
        goto label_2f8f90;
    }
    ctx->pc = 0x2F8F88u;
    {
        const bool branch_taken_0x2f8f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f8f88) {
            ctx->pc = 0x2F8F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8F88u;
            // 0x2f8f8c: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F8F6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8f6c;
        }
    }
    ctx->pc = 0x2F8F90u;
label_2f8f90:
    // 0x2f8f90: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f8f94:
    if (ctx->pc == 0x2F8F94u) {
        ctx->pc = 0x2F8F98u;
        goto label_2f8f98;
    }
    ctx->pc = 0x2F8F90u;
    {
        const bool branch_taken_0x2f8f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8f90) {
            ctx->pc = 0x2F8FB4u;
            goto label_2f8fb4;
        }
    }
    ctx->pc = 0x2F8F98u;
label_2f8f98:
    // 0x2f8f98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f8f9c:
    if (ctx->pc == 0x2F8F9Cu) {
        ctx->pc = 0x2F8FA0u;
        goto label_2f8fa0;
    }
    ctx->pc = 0x2F8F98u;
    {
        const bool branch_taken_0x2f8f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8f98) {
            ctx->pc = 0x2F8FB4u;
            goto label_2f8fb4;
        }
    }
    ctx->pc = 0x2F8FA0u;
label_2f8fa0:
    // 0x2f8fa0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f8fa4:
    // 0x2f8fa4: 0x8c441d90  lw          $a0, 0x1D90($v0)
    ctx->pc = 0x2f8fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7568)));
label_2f8fa8:
    // 0x2f8fa8: 0x8e4600c8  lw          $a2, 0xC8($s2)
    ctx->pc = 0x2f8fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2f8fac:
    // 0x2f8fac: 0xc14f8cc  jal         func_53E330
label_2f8fb0:
    if (ctx->pc == 0x2F8FB0u) {
        ctx->pc = 0x2F8FB0u;
            // 0x2f8fb0: 0x8e2500c8  lw          $a1, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->pc = 0x2F8FB4u;
        goto label_2f8fb4;
    }
    ctx->pc = 0x2F8FACu;
    SET_GPR_U32(ctx, 31, 0x2F8FB4u);
    ctx->pc = 0x2F8FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8FACu;
            // 0x2f8fb0: 0x8e2500c8  lw          $a1, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E330u;
    if (runtime->hasFunction(0x53E330u)) {
        auto targetFn = runtime->lookupFunction(0x53E330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8FB4u; }
        if (ctx->pc != 0x2F8FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0053E330_0x53e330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8FB4u; }
        if (ctx->pc != 0x2F8FB4u) { return; }
    }
    ctx->pc = 0x2F8FB4u;
label_2f8fb4:
    // 0x2f8fb4: 0x8e4300c8  lw          $v1, 0xC8($s2)
    ctx->pc = 0x2f8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2f8fb8:
    // 0x2f8fb8: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x2f8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_2f8fbc:
    // 0x2f8fbc: 0x24640940  addiu       $a0, $v1, 0x940
    ctx->pc = 0x2f8fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2368));
label_2f8fc0:
    // 0x2f8fc0: 0xc142b7c  jal         func_50ADF0
label_2f8fc4:
    if (ctx->pc == 0x2F8FC4u) {
        ctx->pc = 0x2F8FC4u;
            // 0x2f8fc4: 0x24450970  addiu       $a1, $v0, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
        ctx->pc = 0x2F8FC8u;
        goto label_2f8fc8;
    }
    ctx->pc = 0x2F8FC0u;
    SET_GPR_U32(ctx, 31, 0x2F8FC8u);
    ctx->pc = 0x2F8FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8FC0u;
            // 0x2f8fc4: 0x24450970  addiu       $a1, $v0, 0x970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50ADF0u;
    if (runtime->hasFunction(0x50ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x50ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8FC8u; }
        if (ctx->pc != 0x2F8FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050ADF0_0x50adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8FC8u; }
        if (ctx->pc != 0x2F8FC8u) { return; }
    }
    ctx->pc = 0x2F8FC8u;
label_2f8fc8:
    // 0x2f8fc8: 0xc0be25c  jal         func_2F8970
label_2f8fcc:
    if (ctx->pc == 0x2F8FCCu) {
        ctx->pc = 0x2F8FCCu;
            // 0x2f8fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F8FD0u;
        goto label_2f8fd0;
    }
    ctx->pc = 0x2F8FC8u;
    SET_GPR_U32(ctx, 31, 0x2F8FD0u);
    ctx->pc = 0x2F8FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8FC8u;
            // 0x2f8fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8970u;
    if (runtime->hasFunction(0x2F8970u)) {
        auto targetFn = runtime->lookupFunction(0x2F8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8FD0u; }
        if (ctx->pc != 0x2F8FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8970_0x2f8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8FD0u; }
        if (ctx->pc != 0x2F8FD0u) { return; }
    }
    ctx->pc = 0x2F8FD0u;
label_2f8fd0:
    // 0x2f8fd0: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x2f8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_2f8fd4:
    // 0x2f8fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f8fd8:
    // 0x2f8fd8: 0x8e4400c8  lw          $a0, 0xC8($s2)
    ctx->pc = 0x2f8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2f8fdc:
    // 0x2f8fdc: 0xc4a00544  lwc1        $f0, 0x544($a1)
    ctx->pc = 0x2f8fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f8fe0:
    // 0x2f8fe0: 0xe4800544  swc1        $f0, 0x544($a0)
    ctx->pc = 0x2f8fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1348), bits); }
label_2f8fe4:
    // 0x2f8fe4: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x2f8fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
label_2f8fe8:
    // 0x2f8fe8: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x2f8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
label_2f8fec:
    // 0x2f8fec: 0xa24300dd  sb          $v1, 0xDD($s2)
    ctx->pc = 0x2f8fecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 3));
label_2f8ff0:
    // 0x2f8ff0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f8ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2f8ff4:
    // 0x2f8ff4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f8ff4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8ff8:
    // 0x2f8ff8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f8ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f8ffc:
    // 0x2f8ffc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f8ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f9000:
    // 0x2f9000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f9004:
    // 0x2f9004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9008:
    // 0x2f9008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f9008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f900c:
    // 0x2f900c: 0x3e00008  jr          $ra
label_2f9010:
    if (ctx->pc == 0x2F9010u) {
        ctx->pc = 0x2F9010u;
            // 0x2f9010: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2F9014u;
        goto label_2f9014;
    }
    ctx->pc = 0x2F900Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F900Cu;
            // 0x2f9010: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9014u;
label_2f9014:
    // 0x2f9014: 0x0  nop
    ctx->pc = 0x2f9014u;
    // NOP
label_2f9018:
    // 0x2f9018: 0x0  nop
    ctx->pc = 0x2f9018u;
    // NOP
label_2f901c:
    // 0x2f901c: 0x0  nop
    ctx->pc = 0x2f901cu;
    // NOP
}
