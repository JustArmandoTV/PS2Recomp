#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6D80
// Address: 0x2c6d80 - 0x2c6f00
void sub_002C6D80_0x2c6d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6D80_0x2c6d80");
#endif

    switch (ctx->pc) {
        case 0x2c6d80u: goto label_2c6d80;
        case 0x2c6d84u: goto label_2c6d84;
        case 0x2c6d88u: goto label_2c6d88;
        case 0x2c6d8cu: goto label_2c6d8c;
        case 0x2c6d90u: goto label_2c6d90;
        case 0x2c6d94u: goto label_2c6d94;
        case 0x2c6d98u: goto label_2c6d98;
        case 0x2c6d9cu: goto label_2c6d9c;
        case 0x2c6da0u: goto label_2c6da0;
        case 0x2c6da4u: goto label_2c6da4;
        case 0x2c6da8u: goto label_2c6da8;
        case 0x2c6dacu: goto label_2c6dac;
        case 0x2c6db0u: goto label_2c6db0;
        case 0x2c6db4u: goto label_2c6db4;
        case 0x2c6db8u: goto label_2c6db8;
        case 0x2c6dbcu: goto label_2c6dbc;
        case 0x2c6dc0u: goto label_2c6dc0;
        case 0x2c6dc4u: goto label_2c6dc4;
        case 0x2c6dc8u: goto label_2c6dc8;
        case 0x2c6dccu: goto label_2c6dcc;
        case 0x2c6dd0u: goto label_2c6dd0;
        case 0x2c6dd4u: goto label_2c6dd4;
        case 0x2c6dd8u: goto label_2c6dd8;
        case 0x2c6ddcu: goto label_2c6ddc;
        case 0x2c6de0u: goto label_2c6de0;
        case 0x2c6de4u: goto label_2c6de4;
        case 0x2c6de8u: goto label_2c6de8;
        case 0x2c6decu: goto label_2c6dec;
        case 0x2c6df0u: goto label_2c6df0;
        case 0x2c6df4u: goto label_2c6df4;
        case 0x2c6df8u: goto label_2c6df8;
        case 0x2c6dfcu: goto label_2c6dfc;
        case 0x2c6e00u: goto label_2c6e00;
        case 0x2c6e04u: goto label_2c6e04;
        case 0x2c6e08u: goto label_2c6e08;
        case 0x2c6e0cu: goto label_2c6e0c;
        case 0x2c6e10u: goto label_2c6e10;
        case 0x2c6e14u: goto label_2c6e14;
        case 0x2c6e18u: goto label_2c6e18;
        case 0x2c6e1cu: goto label_2c6e1c;
        case 0x2c6e20u: goto label_2c6e20;
        case 0x2c6e24u: goto label_2c6e24;
        case 0x2c6e28u: goto label_2c6e28;
        case 0x2c6e2cu: goto label_2c6e2c;
        case 0x2c6e30u: goto label_2c6e30;
        case 0x2c6e34u: goto label_2c6e34;
        case 0x2c6e38u: goto label_2c6e38;
        case 0x2c6e3cu: goto label_2c6e3c;
        case 0x2c6e40u: goto label_2c6e40;
        case 0x2c6e44u: goto label_2c6e44;
        case 0x2c6e48u: goto label_2c6e48;
        case 0x2c6e4cu: goto label_2c6e4c;
        case 0x2c6e50u: goto label_2c6e50;
        case 0x2c6e54u: goto label_2c6e54;
        case 0x2c6e58u: goto label_2c6e58;
        case 0x2c6e5cu: goto label_2c6e5c;
        case 0x2c6e60u: goto label_2c6e60;
        case 0x2c6e64u: goto label_2c6e64;
        case 0x2c6e68u: goto label_2c6e68;
        case 0x2c6e6cu: goto label_2c6e6c;
        case 0x2c6e70u: goto label_2c6e70;
        case 0x2c6e74u: goto label_2c6e74;
        case 0x2c6e78u: goto label_2c6e78;
        case 0x2c6e7cu: goto label_2c6e7c;
        case 0x2c6e80u: goto label_2c6e80;
        case 0x2c6e84u: goto label_2c6e84;
        case 0x2c6e88u: goto label_2c6e88;
        case 0x2c6e8cu: goto label_2c6e8c;
        case 0x2c6e90u: goto label_2c6e90;
        case 0x2c6e94u: goto label_2c6e94;
        case 0x2c6e98u: goto label_2c6e98;
        case 0x2c6e9cu: goto label_2c6e9c;
        case 0x2c6ea0u: goto label_2c6ea0;
        case 0x2c6ea4u: goto label_2c6ea4;
        case 0x2c6ea8u: goto label_2c6ea8;
        case 0x2c6eacu: goto label_2c6eac;
        case 0x2c6eb0u: goto label_2c6eb0;
        case 0x2c6eb4u: goto label_2c6eb4;
        case 0x2c6eb8u: goto label_2c6eb8;
        case 0x2c6ebcu: goto label_2c6ebc;
        case 0x2c6ec0u: goto label_2c6ec0;
        case 0x2c6ec4u: goto label_2c6ec4;
        case 0x2c6ec8u: goto label_2c6ec8;
        case 0x2c6eccu: goto label_2c6ecc;
        case 0x2c6ed0u: goto label_2c6ed0;
        case 0x2c6ed4u: goto label_2c6ed4;
        case 0x2c6ed8u: goto label_2c6ed8;
        case 0x2c6edcu: goto label_2c6edc;
        case 0x2c6ee0u: goto label_2c6ee0;
        case 0x2c6ee4u: goto label_2c6ee4;
        case 0x2c6ee8u: goto label_2c6ee8;
        case 0x2c6eecu: goto label_2c6eec;
        case 0x2c6ef0u: goto label_2c6ef0;
        case 0x2c6ef4u: goto label_2c6ef4;
        case 0x2c6ef8u: goto label_2c6ef8;
        case 0x2c6efcu: goto label_2c6efc;
        default: break;
    }

    ctx->pc = 0x2c6d80u;

label_2c6d80:
    // 0x2c6d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c6d84:
    // 0x2c6d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c6d88:
    // 0x2c6d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c6d8c:
    // 0x2c6d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c6d90:
    // 0x2c6d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d94:
    // 0x2c6d94: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c6d98:
    if (ctx->pc == 0x2C6D98u) {
        ctx->pc = 0x2C6D98u;
            // 0x2c6d98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D9Cu;
        goto label_2c6d9c;
    }
    ctx->pc = 0x2C6D94u;
    {
        const bool branch_taken_0x2c6d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D94u;
            // 0x2c6d98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d94) {
            ctx->pc = 0x2C6EDCu;
            goto label_2c6edc;
        }
    }
    ctx->pc = 0x2C6D9Cu;
label_2c6d9c:
    // 0x2c6d9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c6da0:
    // 0x2c6da0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c6da4:
    // 0x2c6da4: 0x24630a30  addiu       $v1, $v1, 0xA30
    ctx->pc = 0x2c6da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2608));
label_2c6da8:
    // 0x2c6da8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c6da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c6dac:
    // 0x2c6dac: 0x24420a68  addiu       $v0, $v0, 0xA68
    ctx->pc = 0x2c6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
label_2c6db0:
    // 0x2c6db0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c6db4:
    // 0x2c6db4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c6db8:
    // 0x2c6db8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c6db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c6dbc:
    // 0x2c6dbc: 0xc0407c0  jal         func_101F00
label_2c6dc0:
    if (ctx->pc == 0x2C6DC0u) {
        ctx->pc = 0x2C6DC0u;
            // 0x2c6dc0: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
        ctx->pc = 0x2C6DC4u;
        goto label_2c6dc4;
    }
    ctx->pc = 0x2C6DBCu;
    SET_GPR_U32(ctx, 31, 0x2C6DC4u);
    ctx->pc = 0x2C6DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DBCu;
            // 0x2c6dc0: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DC4u; }
        if (ctx->pc != 0x2C6DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DC4u; }
        if (ctx->pc != 0x2C6DC4u) { return; }
    }
    ctx->pc = 0x2C6DC4u;
label_2c6dc4:
    // 0x2c6dc4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c6dc8:
    // 0x2c6dc8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c6dcc:
    if (ctx->pc == 0x2C6DCCu) {
        ctx->pc = 0x2C6DCCu;
            // 0x2c6dcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C6DD0u;
        goto label_2c6dd0;
    }
    ctx->pc = 0x2C6DC8u;
    {
        const bool branch_taken_0x2c6dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6dc8) {
            ctx->pc = 0x2C6DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DC8u;
            // 0x2c6dcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6DF0u;
            goto label_2c6df0;
        }
    }
    ctx->pc = 0x2C6DD0u;
label_2c6dd0:
    // 0x2c6dd0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c6dd4:
    // 0x2c6dd4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c6dd8:
    if (ctx->pc == 0x2C6DD8u) {
        ctx->pc = 0x2C6DD8u;
            // 0x2c6dd8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C6DDCu;
        goto label_2c6ddc;
    }
    ctx->pc = 0x2C6DD4u;
    {
        const bool branch_taken_0x2c6dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6dd4) {
            ctx->pc = 0x2C6DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DD4u;
            // 0x2c6dd8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6DECu;
            goto label_2c6dec;
        }
    }
    ctx->pc = 0x2C6DDCu;
label_2c6ddc:
    // 0x2c6ddc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c6ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c6de0:
    // 0x2c6de0: 0xc0407c0  jal         func_101F00
label_2c6de4:
    if (ctx->pc == 0x2C6DE4u) {
        ctx->pc = 0x2C6DE4u;
            // 0x2c6de4: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->pc = 0x2C6DE8u;
        goto label_2c6de8;
    }
    ctx->pc = 0x2C6DE0u;
    SET_GPR_U32(ctx, 31, 0x2C6DE8u);
    ctx->pc = 0x2C6DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DE0u;
            // 0x2c6de4: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DE8u; }
        if (ctx->pc != 0x2C6DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DE8u; }
        if (ctx->pc != 0x2C6DE8u) { return; }
    }
    ctx->pc = 0x2C6DE8u;
label_2c6de8:
    // 0x2c6de8: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c6de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c6dec:
    // 0x2c6dec: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c6decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c6df0:
    // 0x2c6df0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c6df4:
    if (ctx->pc == 0x2C6DF4u) {
        ctx->pc = 0x2C6DF4u;
            // 0x2c6df4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C6DF8u;
        goto label_2c6df8;
    }
    ctx->pc = 0x2C6DF0u;
    {
        const bool branch_taken_0x2c6df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6df0) {
            ctx->pc = 0x2C6DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DF0u;
            // 0x2c6df4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6E20u;
            goto label_2c6e20;
        }
    }
    ctx->pc = 0x2C6DF8u;
label_2c6df8:
    // 0x2c6df8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c6dfc:
    if (ctx->pc == 0x2C6DFCu) {
        ctx->pc = 0x2C6E00u;
        goto label_2c6e00;
    }
    ctx->pc = 0x2C6DF8u;
    {
        const bool branch_taken_0x2c6df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6df8) {
            ctx->pc = 0x2C6E1Cu;
            goto label_2c6e1c;
        }
    }
    ctx->pc = 0x2C6E00u;
label_2c6e00:
    // 0x2c6e00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c6e04:
    if (ctx->pc == 0x2C6E04u) {
        ctx->pc = 0x2C6E08u;
        goto label_2c6e08;
    }
    ctx->pc = 0x2C6E00u;
    {
        const bool branch_taken_0x2c6e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e00) {
            ctx->pc = 0x2C6E1Cu;
            goto label_2c6e1c;
        }
    }
    ctx->pc = 0x2C6E08u;
label_2c6e08:
    // 0x2c6e08: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c6e0c:
    // 0x2c6e0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c6e10:
    if (ctx->pc == 0x2C6E10u) {
        ctx->pc = 0x2C6E14u;
        goto label_2c6e14;
    }
    ctx->pc = 0x2C6E0Cu;
    {
        const bool branch_taken_0x2c6e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e0c) {
            ctx->pc = 0x2C6E1Cu;
            goto label_2c6e1c;
        }
    }
    ctx->pc = 0x2C6E14u;
label_2c6e14:
    // 0x2c6e14: 0xc0400a8  jal         func_1002A0
label_2c6e18:
    if (ctx->pc == 0x2C6E18u) {
        ctx->pc = 0x2C6E1Cu;
        goto label_2c6e1c;
    }
    ctx->pc = 0x2C6E14u;
    SET_GPR_U32(ctx, 31, 0x2C6E1Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E1Cu; }
        if (ctx->pc != 0x2C6E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E1Cu; }
        if (ctx->pc != 0x2C6E1Cu) { return; }
    }
    ctx->pc = 0x2C6E1Cu;
label_2c6e1c:
    // 0x2c6e1c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c6e20:
    // 0x2c6e20: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c6e24:
    if (ctx->pc == 0x2C6E24u) {
        ctx->pc = 0x2C6E24u;
            // 0x2c6e24: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C6E28u;
        goto label_2c6e28;
    }
    ctx->pc = 0x2C6E20u;
    {
        const bool branch_taken_0x2c6e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e20) {
            ctx->pc = 0x2C6E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E20u;
            // 0x2c6e24: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6E50u;
            goto label_2c6e50;
        }
    }
    ctx->pc = 0x2C6E28u;
label_2c6e28:
    // 0x2c6e28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c6e2c:
    if (ctx->pc == 0x2C6E2Cu) {
        ctx->pc = 0x2C6E30u;
        goto label_2c6e30;
    }
    ctx->pc = 0x2C6E28u;
    {
        const bool branch_taken_0x2c6e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e28) {
            ctx->pc = 0x2C6E4Cu;
            goto label_2c6e4c;
        }
    }
    ctx->pc = 0x2C6E30u;
label_2c6e30:
    // 0x2c6e30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c6e34:
    if (ctx->pc == 0x2C6E34u) {
        ctx->pc = 0x2C6E38u;
        goto label_2c6e38;
    }
    ctx->pc = 0x2C6E30u;
    {
        const bool branch_taken_0x2c6e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e30) {
            ctx->pc = 0x2C6E4Cu;
            goto label_2c6e4c;
        }
    }
    ctx->pc = 0x2C6E38u;
label_2c6e38:
    // 0x2c6e38: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c6e3c:
    // 0x2c6e3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c6e40:
    if (ctx->pc == 0x2C6E40u) {
        ctx->pc = 0x2C6E44u;
        goto label_2c6e44;
    }
    ctx->pc = 0x2C6E3Cu;
    {
        const bool branch_taken_0x2c6e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e3c) {
            ctx->pc = 0x2C6E4Cu;
            goto label_2c6e4c;
        }
    }
    ctx->pc = 0x2C6E44u;
label_2c6e44:
    // 0x2c6e44: 0xc0400a8  jal         func_1002A0
label_2c6e48:
    if (ctx->pc == 0x2C6E48u) {
        ctx->pc = 0x2C6E4Cu;
        goto label_2c6e4c;
    }
    ctx->pc = 0x2C6E44u;
    SET_GPR_U32(ctx, 31, 0x2C6E4Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E4Cu; }
        if (ctx->pc != 0x2C6E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E4Cu; }
        if (ctx->pc != 0x2C6E4Cu) { return; }
    }
    ctx->pc = 0x2C6E4Cu;
label_2c6e4c:
    // 0x2c6e4c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c6e50:
    // 0x2c6e50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c6e54:
    if (ctx->pc == 0x2C6E54u) {
        ctx->pc = 0x2C6E58u;
        goto label_2c6e58;
    }
    ctx->pc = 0x2C6E50u;
    {
        const bool branch_taken_0x2c6e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e50) {
            ctx->pc = 0x2C6E6Cu;
            goto label_2c6e6c;
        }
    }
    ctx->pc = 0x2C6E58u;
label_2c6e58:
    // 0x2c6e58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c6e5c:
    // 0x2c6e5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c6e60:
    // 0x2c6e60: 0x24630a20  addiu       $v1, $v1, 0xA20
    ctx->pc = 0x2c6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2592));
label_2c6e64:
    // 0x2c6e64: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c6e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c6e68:
    // 0x2c6e68: 0xac400df0  sw          $zero, 0xDF0($v0)
    ctx->pc = 0x2c6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3568), GPR_U32(ctx, 0));
label_2c6e6c:
    // 0x2c6e6c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c6e70:
    if (ctx->pc == 0x2C6E70u) {
        ctx->pc = 0x2C6E70u;
            // 0x2c6e70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C6E74u;
        goto label_2c6e74;
    }
    ctx->pc = 0x2C6E6Cu;
    {
        const bool branch_taken_0x2c6e6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e6c) {
            ctx->pc = 0x2C6E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E6Cu;
            // 0x2c6e70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EC8u;
            goto label_2c6ec8;
        }
    }
    ctx->pc = 0x2C6E74u;
label_2c6e74:
    // 0x2c6e74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c6e78:
    // 0x2c6e78: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c6e7c:
    // 0x2c6e7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c6e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c6e80:
    // 0x2c6e80: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c6e84:
    // 0x2c6e84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c6e88:
    if (ctx->pc == 0x2C6E88u) {
        ctx->pc = 0x2C6E88u;
            // 0x2c6e88: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C6E8Cu;
        goto label_2c6e8c;
    }
    ctx->pc = 0x2C6E84u;
    {
        const bool branch_taken_0x2c6e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e84) {
            ctx->pc = 0x2C6E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E84u;
            // 0x2c6e88: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EA0u;
            goto label_2c6ea0;
        }
    }
    ctx->pc = 0x2C6E8Cu;
label_2c6e8c:
    // 0x2c6e8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c6e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c6e90:
    // 0x2c6e90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c6e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c6e94:
    // 0x2c6e94: 0x320f809  jalr        $t9
label_2c6e98:
    if (ctx->pc == 0x2C6E98u) {
        ctx->pc = 0x2C6E98u;
            // 0x2c6e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C6E9Cu;
        goto label_2c6e9c;
    }
    ctx->pc = 0x2C6E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C6E9Cu);
        ctx->pc = 0x2C6E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E94u;
            // 0x2c6e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6E9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E9Cu; }
            if (ctx->pc != 0x2C6E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C6E9Cu;
label_2c6e9c:
    // 0x2c6e9c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c6ea0:
    // 0x2c6ea0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c6ea4:
    if (ctx->pc == 0x2C6EA4u) {
        ctx->pc = 0x2C6EA4u;
            // 0x2c6ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EA8u;
        goto label_2c6ea8;
    }
    ctx->pc = 0x2C6EA0u;
    {
        const bool branch_taken_0x2c6ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ea0) {
            ctx->pc = 0x2C6EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6EA0u;
            // 0x2c6ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EBCu;
            goto label_2c6ebc;
        }
    }
    ctx->pc = 0x2C6EA8u;
label_2c6ea8:
    // 0x2c6ea8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c6ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c6eac:
    // 0x2c6eac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c6eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c6eb0:
    // 0x2c6eb0: 0x320f809  jalr        $t9
label_2c6eb4:
    if (ctx->pc == 0x2C6EB4u) {
        ctx->pc = 0x2C6EB4u;
            // 0x2c6eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C6EB8u;
        goto label_2c6eb8;
    }
    ctx->pc = 0x2C6EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C6EB8u);
        ctx->pc = 0x2C6EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6EB0u;
            // 0x2c6eb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6EB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EB8u; }
            if (ctx->pc != 0x2C6EB8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C6EB8u;
label_2c6eb8:
    // 0x2c6eb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ebc:
    // 0x2c6ebc: 0xc075bf8  jal         func_1D6FE0
label_2c6ec0:
    if (ctx->pc == 0x2C6EC0u) {
        ctx->pc = 0x2C6EC0u;
            // 0x2c6ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EC4u;
        goto label_2c6ec4;
    }
    ctx->pc = 0x2C6EBCu;
    SET_GPR_U32(ctx, 31, 0x2C6EC4u);
    ctx->pc = 0x2C6EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6EBCu;
            // 0x2c6ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EC4u; }
        if (ctx->pc != 0x2C6EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EC4u; }
        if (ctx->pc != 0x2C6EC4u) { return; }
    }
    ctx->pc = 0x2C6EC4u;
label_2c6ec4:
    // 0x2c6ec4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c6ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c6ec8:
    // 0x2c6ec8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c6ec8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c6ecc:
    // 0x2c6ecc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c6ed0:
    if (ctx->pc == 0x2C6ED0u) {
        ctx->pc = 0x2C6ED0u;
            // 0x2c6ed0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6ED4u;
        goto label_2c6ed4;
    }
    ctx->pc = 0x2C6ECCu;
    {
        const bool branch_taken_0x2c6ecc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c6ecc) {
            ctx->pc = 0x2C6ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6ECCu;
            // 0x2c6ed0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6EE0u;
            goto label_2c6ee0;
        }
    }
    ctx->pc = 0x2C6ED4u;
label_2c6ed4:
    // 0x2c6ed4: 0xc0400a8  jal         func_1002A0
label_2c6ed8:
    if (ctx->pc == 0x2C6ED8u) {
        ctx->pc = 0x2C6ED8u;
            // 0x2c6ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EDCu;
        goto label_2c6edc;
    }
    ctx->pc = 0x2C6ED4u;
    SET_GPR_U32(ctx, 31, 0x2C6EDCu);
    ctx->pc = 0x2C6ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6ED4u;
            // 0x2c6ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EDCu; }
        if (ctx->pc != 0x2C6EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EDCu; }
        if (ctx->pc != 0x2C6EDCu) { return; }
    }
    ctx->pc = 0x2C6EDCu;
label_2c6edc:
    // 0x2c6edc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c6edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ee0:
    // 0x2c6ee0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6ee4:
    // 0x2c6ee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c6ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6ee8:
    // 0x2c6ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6eec:
    // 0x2c6eec: 0x3e00008  jr          $ra
label_2c6ef0:
    if (ctx->pc == 0x2C6EF0u) {
        ctx->pc = 0x2C6EF0u;
            // 0x2c6ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C6EF4u;
        goto label_2c6ef4;
    }
    ctx->pc = 0x2C6EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6EECu;
            // 0x2c6ef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6EF4u;
label_2c6ef4:
    // 0x2c6ef4: 0x0  nop
    ctx->pc = 0x2c6ef4u;
    // NOP
label_2c6ef8:
    // 0x2c6ef8: 0x0  nop
    ctx->pc = 0x2c6ef8u;
    // NOP
label_2c6efc:
    // 0x2c6efc: 0x0  nop
    ctx->pc = 0x2c6efcu;
    // NOP
}
