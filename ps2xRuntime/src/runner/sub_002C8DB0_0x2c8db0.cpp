#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8DB0
// Address: 0x2c8db0 - 0x2c8f20
void sub_002C8DB0_0x2c8db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8DB0_0x2c8db0");
#endif

    switch (ctx->pc) {
        case 0x2c8db0u: goto label_2c8db0;
        case 0x2c8db4u: goto label_2c8db4;
        case 0x2c8db8u: goto label_2c8db8;
        case 0x2c8dbcu: goto label_2c8dbc;
        case 0x2c8dc0u: goto label_2c8dc0;
        case 0x2c8dc4u: goto label_2c8dc4;
        case 0x2c8dc8u: goto label_2c8dc8;
        case 0x2c8dccu: goto label_2c8dcc;
        case 0x2c8dd0u: goto label_2c8dd0;
        case 0x2c8dd4u: goto label_2c8dd4;
        case 0x2c8dd8u: goto label_2c8dd8;
        case 0x2c8ddcu: goto label_2c8ddc;
        case 0x2c8de0u: goto label_2c8de0;
        case 0x2c8de4u: goto label_2c8de4;
        case 0x2c8de8u: goto label_2c8de8;
        case 0x2c8decu: goto label_2c8dec;
        case 0x2c8df0u: goto label_2c8df0;
        case 0x2c8df4u: goto label_2c8df4;
        case 0x2c8df8u: goto label_2c8df8;
        case 0x2c8dfcu: goto label_2c8dfc;
        case 0x2c8e00u: goto label_2c8e00;
        case 0x2c8e04u: goto label_2c8e04;
        case 0x2c8e08u: goto label_2c8e08;
        case 0x2c8e0cu: goto label_2c8e0c;
        case 0x2c8e10u: goto label_2c8e10;
        case 0x2c8e14u: goto label_2c8e14;
        case 0x2c8e18u: goto label_2c8e18;
        case 0x2c8e1cu: goto label_2c8e1c;
        case 0x2c8e20u: goto label_2c8e20;
        case 0x2c8e24u: goto label_2c8e24;
        case 0x2c8e28u: goto label_2c8e28;
        case 0x2c8e2cu: goto label_2c8e2c;
        case 0x2c8e30u: goto label_2c8e30;
        case 0x2c8e34u: goto label_2c8e34;
        case 0x2c8e38u: goto label_2c8e38;
        case 0x2c8e3cu: goto label_2c8e3c;
        case 0x2c8e40u: goto label_2c8e40;
        case 0x2c8e44u: goto label_2c8e44;
        case 0x2c8e48u: goto label_2c8e48;
        case 0x2c8e4cu: goto label_2c8e4c;
        case 0x2c8e50u: goto label_2c8e50;
        case 0x2c8e54u: goto label_2c8e54;
        case 0x2c8e58u: goto label_2c8e58;
        case 0x2c8e5cu: goto label_2c8e5c;
        case 0x2c8e60u: goto label_2c8e60;
        case 0x2c8e64u: goto label_2c8e64;
        case 0x2c8e68u: goto label_2c8e68;
        case 0x2c8e6cu: goto label_2c8e6c;
        case 0x2c8e70u: goto label_2c8e70;
        case 0x2c8e74u: goto label_2c8e74;
        case 0x2c8e78u: goto label_2c8e78;
        case 0x2c8e7cu: goto label_2c8e7c;
        case 0x2c8e80u: goto label_2c8e80;
        case 0x2c8e84u: goto label_2c8e84;
        case 0x2c8e88u: goto label_2c8e88;
        case 0x2c8e8cu: goto label_2c8e8c;
        case 0x2c8e90u: goto label_2c8e90;
        case 0x2c8e94u: goto label_2c8e94;
        case 0x2c8e98u: goto label_2c8e98;
        case 0x2c8e9cu: goto label_2c8e9c;
        case 0x2c8ea0u: goto label_2c8ea0;
        case 0x2c8ea4u: goto label_2c8ea4;
        case 0x2c8ea8u: goto label_2c8ea8;
        case 0x2c8eacu: goto label_2c8eac;
        case 0x2c8eb0u: goto label_2c8eb0;
        case 0x2c8eb4u: goto label_2c8eb4;
        case 0x2c8eb8u: goto label_2c8eb8;
        case 0x2c8ebcu: goto label_2c8ebc;
        case 0x2c8ec0u: goto label_2c8ec0;
        case 0x2c8ec4u: goto label_2c8ec4;
        case 0x2c8ec8u: goto label_2c8ec8;
        case 0x2c8eccu: goto label_2c8ecc;
        case 0x2c8ed0u: goto label_2c8ed0;
        case 0x2c8ed4u: goto label_2c8ed4;
        case 0x2c8ed8u: goto label_2c8ed8;
        case 0x2c8edcu: goto label_2c8edc;
        case 0x2c8ee0u: goto label_2c8ee0;
        case 0x2c8ee4u: goto label_2c8ee4;
        case 0x2c8ee8u: goto label_2c8ee8;
        case 0x2c8eecu: goto label_2c8eec;
        case 0x2c8ef0u: goto label_2c8ef0;
        case 0x2c8ef4u: goto label_2c8ef4;
        case 0x2c8ef8u: goto label_2c8ef8;
        case 0x2c8efcu: goto label_2c8efc;
        case 0x2c8f00u: goto label_2c8f00;
        case 0x2c8f04u: goto label_2c8f04;
        case 0x2c8f08u: goto label_2c8f08;
        case 0x2c8f0cu: goto label_2c8f0c;
        case 0x2c8f10u: goto label_2c8f10;
        case 0x2c8f14u: goto label_2c8f14;
        case 0x2c8f18u: goto label_2c8f18;
        case 0x2c8f1cu: goto label_2c8f1c;
        default: break;
    }

    ctx->pc = 0x2c8db0u;

label_2c8db0:
    // 0x2c8db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8db4:
    // 0x2c8db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c8db8:
    // 0x2c8db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c8dbc:
    // 0x2c8dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c8dc0:
    // 0x2c8dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c8dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8dc4:
    // 0x2c8dc4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2c8dc8:
    if (ctx->pc == 0x2C8DC8u) {
        ctx->pc = 0x2C8DC8u;
            // 0x2c8dc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DCCu;
        goto label_2c8dcc;
    }
    ctx->pc = 0x2C8DC4u;
    {
        const bool branch_taken_0x2c8dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8DC4u;
            // 0x2c8dc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8dc4) {
            ctx->pc = 0x2C8E08u;
            goto label_2c8e08;
        }
    }
    ctx->pc = 0x2C8DCCu;
label_2c8dcc:
    // 0x2c8dcc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2c8dd0:
    if (ctx->pc == 0x2C8DD0u) {
        ctx->pc = 0x2C8DD0u;
            // 0x2c8dd0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C8DD4u;
        goto label_2c8dd4;
    }
    ctx->pc = 0x2C8DCCu;
    {
        const bool branch_taken_0x2c8dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8dcc) {
            ctx->pc = 0x2C8DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8DCCu;
            // 0x2c8dd0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8DF4u;
            goto label_2c8df4;
        }
    }
    ctx->pc = 0x2C8DD4u;
label_2c8dd4:
    // 0x2c8dd4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2c8dd8:
    if (ctx->pc == 0x2C8DD8u) {
        ctx->pc = 0x2C8DDCu;
        goto label_2c8ddc;
    }
    ctx->pc = 0x2C8DD4u;
    {
        const bool branch_taken_0x2c8dd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8dd4) {
            ctx->pc = 0x2C8DF0u;
            goto label_2c8df0;
        }
    }
    ctx->pc = 0x2C8DDCu;
label_2c8ddc:
    // 0x2c8ddc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c8de0:
    // 0x2c8de0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c8de4:
    if (ctx->pc == 0x2C8DE4u) {
        ctx->pc = 0x2C8DE8u;
        goto label_2c8de8;
    }
    ctx->pc = 0x2C8DE0u;
    {
        const bool branch_taken_0x2c8de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8de0) {
            ctx->pc = 0x2C8DF0u;
            goto label_2c8df0;
        }
    }
    ctx->pc = 0x2C8DE8u;
label_2c8de8:
    // 0x2c8de8: 0xc0400a8  jal         func_1002A0
label_2c8dec:
    if (ctx->pc == 0x2C8DECu) {
        ctx->pc = 0x2C8DF0u;
        goto label_2c8df0;
    }
    ctx->pc = 0x2C8DE8u;
    SET_GPR_U32(ctx, 31, 0x2C8DF0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8DF0u; }
        if (ctx->pc != 0x2C8DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8DF0u; }
        if (ctx->pc != 0x2C8DF0u) { return; }
    }
    ctx->pc = 0x2C8DF0u;
label_2c8df0:
    // 0x2c8df0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c8df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c8df4:
    // 0x2c8df4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8df4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c8df8:
    // 0x2c8df8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c8dfc:
    if (ctx->pc == 0x2C8DFCu) {
        ctx->pc = 0x2C8DFCu;
            // 0x2c8dfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E00u;
        goto label_2c8e00;
    }
    ctx->pc = 0x2C8DF8u;
    {
        const bool branch_taken_0x2c8df8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c8df8) {
            ctx->pc = 0x2C8DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8DF8u;
            // 0x2c8dfc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8E0Cu;
            goto label_2c8e0c;
        }
    }
    ctx->pc = 0x2C8E00u;
label_2c8e00:
    // 0x2c8e00: 0xc0400a8  jal         func_1002A0
label_2c8e04:
    if (ctx->pc == 0x2C8E04u) {
        ctx->pc = 0x2C8E04u;
            // 0x2c8e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E08u;
        goto label_2c8e08;
    }
    ctx->pc = 0x2C8E00u;
    SET_GPR_U32(ctx, 31, 0x2C8E08u);
    ctx->pc = 0x2C8E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E00u;
            // 0x2c8e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E08u; }
        if (ctx->pc != 0x2C8E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E08u; }
        if (ctx->pc != 0x2C8E08u) { return; }
    }
    ctx->pc = 0x2C8E08u;
label_2c8e08:
    // 0x2c8e08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c8e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e0c:
    // 0x2c8e0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8e10:
    // 0x2c8e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8e14:
    // 0x2c8e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8e18:
    // 0x2c8e18: 0x3e00008  jr          $ra
label_2c8e1c:
    if (ctx->pc == 0x2C8E1Cu) {
        ctx->pc = 0x2C8E1Cu;
            // 0x2c8e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C8E20u;
        goto label_2c8e20;
    }
    ctx->pc = 0x2C8E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E18u;
            // 0x2c8e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8E20u;
label_2c8e20:
    // 0x2c8e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c8e24:
    // 0x2c8e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c8e28:
    // 0x2c8e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c8e2c:
    // 0x2c8e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c8e30:
    // 0x2c8e30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e34:
    // 0x2c8e34: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_2c8e38:
    if (ctx->pc == 0x2C8E38u) {
        ctx->pc = 0x2C8E38u;
            // 0x2c8e38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E3Cu;
        goto label_2c8e3c;
    }
    ctx->pc = 0x2C8E34u;
    {
        const bool branch_taken_0x2c8e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E34u;
            // 0x2c8e38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e34) {
            ctx->pc = 0x2C8EFCu;
            goto label_2c8efc;
        }
    }
    ctx->pc = 0x2C8E3Cu;
label_2c8e3c:
    // 0x2c8e3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2c8e40:
    // 0x2c8e40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c8e44:
    // 0x2c8e44: 0x2463ac00  addiu       $v1, $v1, -0x5400
    ctx->pc = 0x2c8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945792));
label_2c8e48:
    // 0x2c8e48: 0x2442ac40  addiu       $v0, $v0, -0x53C0
    ctx->pc = 0x2c8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945856));
label_2c8e4c:
    // 0x2c8e4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c8e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c8e50:
    // 0x2c8e50: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c8e54:
    // 0x2c8e54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c8e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8e58:
    // 0x2c8e58: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c8e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c8e5c:
    // 0x2c8e5c: 0x320f809  jalr        $t9
label_2c8e60:
    if (ctx->pc == 0x2C8E60u) {
        ctx->pc = 0x2C8E64u;
        goto label_2c8e64;
    }
    ctx->pc = 0x2C8E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8E64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E64u; }
            if (ctx->pc != 0x2C8E64u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8E64u;
label_2c8e64:
    // 0x2c8e64: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_2c8e68:
    if (ctx->pc == 0x2C8E68u) {
        ctx->pc = 0x2C8E68u;
            // 0x2c8e68: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C8E6Cu;
        goto label_2c8e6c;
    }
    ctx->pc = 0x2C8E64u;
    {
        const bool branch_taken_0x2c8e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e64) {
            ctx->pc = 0x2C8E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E64u;
            // 0x2c8e68: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8EE8u;
            goto label_2c8ee8;
        }
    }
    ctx->pc = 0x2C8E6Cu;
label_2c8e6c:
    // 0x2c8e6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c8e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c8e70:
    // 0x2c8e70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c8e74:
    // 0x2c8e74: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c8e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2c8e78:
    // 0x2c8e78: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2c8e7c:
    // 0x2c8e7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c8e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c8e80:
    // 0x2c8e80: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c8e84:
    // 0x2c8e84: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2c8e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2c8e88:
    // 0x2c8e88: 0xc0aecc4  jal         func_2BB310
label_2c8e8c:
    if (ctx->pc == 0x2C8E8Cu) {
        ctx->pc = 0x2C8E8Cu;
            // 0x2c8e8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C8E90u;
        goto label_2c8e90;
    }
    ctx->pc = 0x2C8E88u;
    SET_GPR_U32(ctx, 31, 0x2C8E90u);
    ctx->pc = 0x2C8E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E88u;
            // 0x2c8e8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E90u; }
        if (ctx->pc != 0x2C8E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E90u; }
        if (ctx->pc != 0x2C8E90u) { return; }
    }
    ctx->pc = 0x2C8E90u;
label_2c8e90:
    // 0x2c8e90: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c8e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2c8e94:
    // 0x2c8e94: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2c8e98:
    // 0x2c8e98: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c8e9c:
    if (ctx->pc == 0x2C8E9Cu) {
        ctx->pc = 0x2C8E9Cu;
            // 0x2c8e9c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x2C8EA0u;
        goto label_2c8ea0;
    }
    ctx->pc = 0x2C8E98u;
    {
        const bool branch_taken_0x2c8e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e98) {
            ctx->pc = 0x2C8E9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E98u;
            // 0x2c8e9c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8EB4u;
            goto label_2c8eb4;
        }
    }
    ctx->pc = 0x2C8EA0u;
label_2c8ea0:
    // 0x2c8ea0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2c8ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2c8ea4:
    // 0x2c8ea4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c8ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c8ea8:
    // 0x2c8ea8: 0x320f809  jalr        $t9
label_2c8eac:
    if (ctx->pc == 0x2C8EACu) {
        ctx->pc = 0x2C8EACu;
            // 0x2c8eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C8EB0u;
        goto label_2c8eb0;
    }
    ctx->pc = 0x2C8EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C8EB0u);
        ctx->pc = 0x2C8EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EA8u;
            // 0x2c8eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8EB0u; }
            if (ctx->pc != 0x2C8EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8EB0u;
label_2c8eb0:
    // 0x2c8eb0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c8eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2c8eb4:
    // 0x2c8eb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c8eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c8eb8:
    // 0x2c8eb8: 0xc0aec9c  jal         func_2BB270
label_2c8ebc:
    if (ctx->pc == 0x2C8EBCu) {
        ctx->pc = 0x2C8EBCu;
            // 0x2c8ebc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2C8EC0u;
        goto label_2c8ec0;
    }
    ctx->pc = 0x2C8EB8u;
    SET_GPR_U32(ctx, 31, 0x2C8EC0u);
    ctx->pc = 0x2C8EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EB8u;
            // 0x2c8ebc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8EC0u; }
        if (ctx->pc != 0x2C8EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8EC0u; }
        if (ctx->pc != 0x2C8EC0u) { return; }
    }
    ctx->pc = 0x2C8EC0u;
label_2c8ec0:
    // 0x2c8ec0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c8ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2c8ec4:
    // 0x2c8ec4: 0xc0aec88  jal         func_2BB220
label_2c8ec8:
    if (ctx->pc == 0x2C8EC8u) {
        ctx->pc = 0x2C8EC8u;
            // 0x2c8ec8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2C8ECCu;
        goto label_2c8ecc;
    }
    ctx->pc = 0x2C8EC4u;
    SET_GPR_U32(ctx, 31, 0x2C8ECCu);
    ctx->pc = 0x2C8EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EC4u;
            // 0x2c8ec8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8ECCu; }
        if (ctx->pc != 0x2C8ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8ECCu; }
        if (ctx->pc != 0x2C8ECCu) { return; }
    }
    ctx->pc = 0x2C8ECCu;
label_2c8ecc:
    // 0x2c8ecc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2c8eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2c8ed0:
    // 0x2c8ed0: 0xc0aec0c  jal         func_2BB030
label_2c8ed4:
    if (ctx->pc == 0x2C8ED4u) {
        ctx->pc = 0x2C8ED4u;
            // 0x2c8ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8ED8u;
        goto label_2c8ed8;
    }
    ctx->pc = 0x2C8ED0u;
    SET_GPR_U32(ctx, 31, 0x2C8ED8u);
    ctx->pc = 0x2C8ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8ED0u;
            // 0x2c8ed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8ED8u; }
        if (ctx->pc != 0x2C8ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8ED8u; }
        if (ctx->pc != 0x2C8ED8u) { return; }
    }
    ctx->pc = 0x2C8ED8u;
label_2c8ed8:
    // 0x2c8ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8edc:
    // 0x2c8edc: 0xc0aeaa8  jal         func_2BAAA0
label_2c8ee0:
    if (ctx->pc == 0x2C8EE0u) {
        ctx->pc = 0x2C8EE0u;
            // 0x2c8ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EE4u;
        goto label_2c8ee4;
    }
    ctx->pc = 0x2C8EDCu;
    SET_GPR_U32(ctx, 31, 0x2C8EE4u);
    ctx->pc = 0x2C8EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EDCu;
            // 0x2c8ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8EE4u; }
        if (ctx->pc != 0x2C8EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8EE4u; }
        if (ctx->pc != 0x2C8EE4u) { return; }
    }
    ctx->pc = 0x2C8EE4u;
label_2c8ee4:
    // 0x2c8ee4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c8ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c8ee8:
    // 0x2c8ee8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8ee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c8eec:
    // 0x2c8eec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c8ef0:
    if (ctx->pc == 0x2C8EF0u) {
        ctx->pc = 0x2C8EF0u;
            // 0x2c8ef0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EF4u;
        goto label_2c8ef4;
    }
    ctx->pc = 0x2C8EECu;
    {
        const bool branch_taken_0x2c8eec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c8eec) {
            ctx->pc = 0x2C8EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EECu;
            // 0x2c8ef0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F00u;
            goto label_2c8f00;
        }
    }
    ctx->pc = 0x2C8EF4u;
label_2c8ef4:
    // 0x2c8ef4: 0xc0400a8  jal         func_1002A0
label_2c8ef8:
    if (ctx->pc == 0x2C8EF8u) {
        ctx->pc = 0x2C8EF8u;
            // 0x2c8ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EFCu;
        goto label_2c8efc;
    }
    ctx->pc = 0x2C8EF4u;
    SET_GPR_U32(ctx, 31, 0x2C8EFCu);
    ctx->pc = 0x2C8EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EF4u;
            // 0x2c8ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8EFCu; }
        if (ctx->pc != 0x2C8EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8EFCu; }
        if (ctx->pc != 0x2C8EFCu) { return; }
    }
    ctx->pc = 0x2C8EFCu;
label_2c8efc:
    // 0x2c8efc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f00:
    // 0x2c8f00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8f04:
    // 0x2c8f04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8f08:
    // 0x2c8f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8f0c:
    // 0x2c8f0c: 0x3e00008  jr          $ra
label_2c8f10:
    if (ctx->pc == 0x2C8F10u) {
        ctx->pc = 0x2C8F10u;
            // 0x2c8f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C8F14u;
        goto label_2c8f14;
    }
    ctx->pc = 0x2C8F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F0Cu;
            // 0x2c8f10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8F14u;
label_2c8f14:
    // 0x2c8f14: 0x0  nop
    ctx->pc = 0x2c8f14u;
    // NOP
label_2c8f18:
    // 0x2c8f18: 0x0  nop
    ctx->pc = 0x2c8f18u;
    // NOP
label_2c8f1c:
    // 0x2c8f1c: 0x0  nop
    ctx->pc = 0x2c8f1cu;
    // NOP
}
