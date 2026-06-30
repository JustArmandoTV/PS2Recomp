#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B8D30
// Address: 0x3b8d30 - 0x3b8e60
void sub_003B8D30_0x3b8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8D30_0x3b8d30");
#endif

    switch (ctx->pc) {
        case 0x3b8d30u: goto label_3b8d30;
        case 0x3b8d34u: goto label_3b8d34;
        case 0x3b8d38u: goto label_3b8d38;
        case 0x3b8d3cu: goto label_3b8d3c;
        case 0x3b8d40u: goto label_3b8d40;
        case 0x3b8d44u: goto label_3b8d44;
        case 0x3b8d48u: goto label_3b8d48;
        case 0x3b8d4cu: goto label_3b8d4c;
        case 0x3b8d50u: goto label_3b8d50;
        case 0x3b8d54u: goto label_3b8d54;
        case 0x3b8d58u: goto label_3b8d58;
        case 0x3b8d5cu: goto label_3b8d5c;
        case 0x3b8d60u: goto label_3b8d60;
        case 0x3b8d64u: goto label_3b8d64;
        case 0x3b8d68u: goto label_3b8d68;
        case 0x3b8d6cu: goto label_3b8d6c;
        case 0x3b8d70u: goto label_3b8d70;
        case 0x3b8d74u: goto label_3b8d74;
        case 0x3b8d78u: goto label_3b8d78;
        case 0x3b8d7cu: goto label_3b8d7c;
        case 0x3b8d80u: goto label_3b8d80;
        case 0x3b8d84u: goto label_3b8d84;
        case 0x3b8d88u: goto label_3b8d88;
        case 0x3b8d8cu: goto label_3b8d8c;
        case 0x3b8d90u: goto label_3b8d90;
        case 0x3b8d94u: goto label_3b8d94;
        case 0x3b8d98u: goto label_3b8d98;
        case 0x3b8d9cu: goto label_3b8d9c;
        case 0x3b8da0u: goto label_3b8da0;
        case 0x3b8da4u: goto label_3b8da4;
        case 0x3b8da8u: goto label_3b8da8;
        case 0x3b8dacu: goto label_3b8dac;
        case 0x3b8db0u: goto label_3b8db0;
        case 0x3b8db4u: goto label_3b8db4;
        case 0x3b8db8u: goto label_3b8db8;
        case 0x3b8dbcu: goto label_3b8dbc;
        case 0x3b8dc0u: goto label_3b8dc0;
        case 0x3b8dc4u: goto label_3b8dc4;
        case 0x3b8dc8u: goto label_3b8dc8;
        case 0x3b8dccu: goto label_3b8dcc;
        case 0x3b8dd0u: goto label_3b8dd0;
        case 0x3b8dd4u: goto label_3b8dd4;
        case 0x3b8dd8u: goto label_3b8dd8;
        case 0x3b8ddcu: goto label_3b8ddc;
        case 0x3b8de0u: goto label_3b8de0;
        case 0x3b8de4u: goto label_3b8de4;
        case 0x3b8de8u: goto label_3b8de8;
        case 0x3b8decu: goto label_3b8dec;
        case 0x3b8df0u: goto label_3b8df0;
        case 0x3b8df4u: goto label_3b8df4;
        case 0x3b8df8u: goto label_3b8df8;
        case 0x3b8dfcu: goto label_3b8dfc;
        case 0x3b8e00u: goto label_3b8e00;
        case 0x3b8e04u: goto label_3b8e04;
        case 0x3b8e08u: goto label_3b8e08;
        case 0x3b8e0cu: goto label_3b8e0c;
        case 0x3b8e10u: goto label_3b8e10;
        case 0x3b8e14u: goto label_3b8e14;
        case 0x3b8e18u: goto label_3b8e18;
        case 0x3b8e1cu: goto label_3b8e1c;
        case 0x3b8e20u: goto label_3b8e20;
        case 0x3b8e24u: goto label_3b8e24;
        case 0x3b8e28u: goto label_3b8e28;
        case 0x3b8e2cu: goto label_3b8e2c;
        case 0x3b8e30u: goto label_3b8e30;
        case 0x3b8e34u: goto label_3b8e34;
        case 0x3b8e38u: goto label_3b8e38;
        case 0x3b8e3cu: goto label_3b8e3c;
        case 0x3b8e40u: goto label_3b8e40;
        case 0x3b8e44u: goto label_3b8e44;
        case 0x3b8e48u: goto label_3b8e48;
        case 0x3b8e4cu: goto label_3b8e4c;
        case 0x3b8e50u: goto label_3b8e50;
        case 0x3b8e54u: goto label_3b8e54;
        case 0x3b8e58u: goto label_3b8e58;
        case 0x3b8e5cu: goto label_3b8e5c;
        default: break;
    }

    ctx->pc = 0x3b8d30u;

label_3b8d30:
    // 0x3b8d30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3b8d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3b8d34:
    // 0x3b8d34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b8d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3b8d38:
    // 0x3b8d38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3b8d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3b8d3c:
    // 0x3b8d3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3b8d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3b8d40:
    // 0x3b8d40: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x3b8d40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b8d44:
    // 0x3b8d44: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3b8d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3b8d48:
    // 0x3b8d48: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3b8d48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3b8d4c:
    // 0x3b8d4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b8d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3b8d50:
    // 0x3b8d50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b8d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3b8d54:
    // 0x3b8d54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b8d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b8d58:
    // 0x3b8d58: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b8d58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b8d5c:
    // 0x3b8d5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b8d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b8d60:
    // 0x3b8d60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b8d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b8d64:
    // 0x3b8d64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b8d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b8d68:
    // 0x3b8d68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b8d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b8d6c:
    // 0x3b8d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b8d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b8d70:
    // 0x3b8d70: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3b8d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b8d74:
    // 0x3b8d74: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3b8d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3b8d78:
    // 0x3b8d78: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3b8d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b8d7c:
    // 0x3b8d7c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3b8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b8d80:
    // 0x3b8d80: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3b8d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b8d84:
    // 0x3b8d84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b8d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b8d88:
    // 0x3b8d88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8d8c:
    // 0x3b8d8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b8d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8d90:
    // 0x3b8d90: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_3b8d94:
    if (ctx->pc == 0x3B8D94u) {
        ctx->pc = 0x3B8D94u;
            // 0x3b8d94: 0xafab00ac  sw          $t3, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
        ctx->pc = 0x3B8D98u;
        goto label_3b8d98;
    }
    ctx->pc = 0x3B8D90u;
    {
        const bool branch_taken_0x3b8d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8D90u;
            // 0x3b8d94: 0xafab00ac  sw          $t3, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8d90) {
            ctx->pc = 0x3B8E24u;
            goto label_3b8e24;
        }
    }
    ctx->pc = 0x3B8D98u;
label_3b8d98:
    // 0x3b8d98: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x3b8d98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3b8d9c:
    // 0x3b8d9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3b8da0:
    if (ctx->pc == 0x3B8DA0u) {
        ctx->pc = 0x3B8DA0u;
            // 0x3b8da0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8DA4u;
        goto label_3b8da4;
    }
    ctx->pc = 0x3B8D9Cu;
    {
        const bool branch_taken_0x3b8d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8D9Cu;
            // 0x3b8da0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8d9c) {
            ctx->pc = 0x3B8DC8u;
            goto label_3b8dc8;
        }
    }
    ctx->pc = 0x3B8DA4u;
label_3b8da4:
    // 0x3b8da4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3b8da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b8da8:
    // 0x3b8da8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3b8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3b8dac:
    // 0x3b8dac: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b8dacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b8db0:
    // 0x3b8db0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3b8db0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8db4:
    // 0x3b8db4: 0x0  nop
    ctx->pc = 0x3b8db4u;
    // NOP
label_3b8db8:
    // 0x3b8db8: 0x0  nop
    ctx->pc = 0x3b8db8u;
    // NOP
label_3b8dbc:
    // 0x3b8dbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3b8dc0:
    if (ctx->pc == 0x3B8DC0u) {
        ctx->pc = 0x3B8DC4u;
        goto label_3b8dc4;
    }
    ctx->pc = 0x3B8DBCu;
    {
        const bool branch_taken_0x3b8dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8dbc) {
            ctx->pc = 0x3B8DA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b8da8;
        }
    }
    ctx->pc = 0x3B8DC4u;
label_3b8dc4:
    // 0x3b8dc4: 0x0  nop
    ctx->pc = 0x3b8dc4u;
    // NOP
label_3b8dc8:
    // 0x3b8dc8: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x3b8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b8dcc:
    // 0x3b8dcc: 0xc040138  jal         func_1004E0
label_3b8dd0:
    if (ctx->pc == 0x3B8DD0u) {
        ctx->pc = 0x3B8DD0u;
            // 0x3b8dd0: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x3B8DD4u;
        goto label_3b8dd4;
    }
    ctx->pc = 0x3B8DCCu;
    SET_GPR_U32(ctx, 31, 0x3B8DD4u);
    ctx->pc = 0x3B8DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8DCCu;
            // 0x3b8dd0: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8DD4u; }
        if (ctx->pc != 0x3B8DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8DD4u; }
        if (ctx->pc != 0x3B8DD4u) { return; }
    }
    ctx->pc = 0x3B8DD4u;
label_3b8dd4:
    // 0x3b8dd4: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x3b8dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3b8dd8:
    // 0x3b8dd8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b8dd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b8ddc:
    // 0x3b8ddc: 0x26c80001  addiu       $t0, $s6, 0x1
    ctx->pc = 0x3b8ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b8de0:
    // 0x3b8de0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b8de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b8de4:
    // 0x3b8de4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b8de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b8de8:
    // 0x3b8de8: 0xc0ee488  jal         func_3B9220
label_3b8dec:
    if (ctx->pc == 0x3B8DECu) {
        ctx->pc = 0x3B8DECu;
            // 0x3b8dec: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8DF0u;
        goto label_3b8df0;
    }
    ctx->pc = 0x3B8DE8u;
    SET_GPR_U32(ctx, 31, 0x3B8DF0u);
    ctx->pc = 0x3B8DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8DE8u;
            // 0x3b8dec: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9220u;
    if (runtime->hasFunction(0x3B9220u)) {
        auto targetFn = runtime->lookupFunction(0x3B9220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8DF0u; }
        if (ctx->pc != 0x3B8DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9220_0x3b9220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8DF0u; }
        if (ctx->pc != 0x3B8DF0u) { return; }
    }
    ctx->pc = 0x3B8DF0u;
label_3b8df0:
    // 0x3b8df0: 0x8e990048  lw          $t9, 0x48($s4)
    ctx->pc = 0x3b8df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_3b8df4:
    // 0x3b8df4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b8df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b8df8:
    // 0x3b8df8: 0x8fab00ac  lw          $t3, 0xAC($sp)
    ctx->pc = 0x3b8df8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_3b8dfc:
    // 0x3b8dfc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3b8dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b8e00:
    // 0x3b8e00: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b8e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b8e04:
    // 0x3b8e04: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x3b8e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3b8e08:
    // 0x3b8e08: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3b8e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3b8e0c:
    // 0x3b8e0c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x3b8e0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b8e10:
    // 0x3b8e10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b8e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b8e14:
    // 0x3b8e14: 0x320f809  jalr        $t9
label_3b8e18:
    if (ctx->pc == 0x3B8E18u) {
        ctx->pc = 0x3B8E18u;
            // 0x3b8e18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8E1Cu;
        goto label_3b8e1c;
    }
    ctx->pc = 0x3B8E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B8E1Cu);
        ctx->pc = 0x3B8E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8E14u;
            // 0x3b8e18: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B8E1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B8E1Cu; }
            if (ctx->pc != 0x3B8E1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B8E1Cu;
label_3b8e1c:
    // 0x3b8e1c: 0xc04008c  jal         func_100230
label_3b8e20:
    if (ctx->pc == 0x3B8E20u) {
        ctx->pc = 0x3B8E20u;
            // 0x3b8e20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8E24u;
        goto label_3b8e24;
    }
    ctx->pc = 0x3B8E1Cu;
    SET_GPR_U32(ctx, 31, 0x3B8E24u);
    ctx->pc = 0x3B8E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8E1Cu;
            // 0x3b8e20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8E24u; }
        if (ctx->pc != 0x3B8E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B8E24u; }
        if (ctx->pc != 0x3B8E24u) { return; }
    }
    ctx->pc = 0x3B8E24u;
label_3b8e24:
    // 0x3b8e24: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b8e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3b8e28:
    // 0x3b8e28: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3b8e28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b8e2c:
    // 0x3b8e2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3b8e2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b8e30:
    // 0x3b8e30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3b8e30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b8e34:
    // 0x3b8e34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b8e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b8e38:
    // 0x3b8e38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b8e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b8e3c:
    // 0x3b8e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b8e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b8e40:
    // 0x3b8e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b8e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b8e44:
    // 0x3b8e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b8e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b8e48:
    // 0x3b8e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b8e4c:
    // 0x3b8e4c: 0x3e00008  jr          $ra
label_3b8e50:
    if (ctx->pc == 0x3B8E50u) {
        ctx->pc = 0x3B8E50u;
            // 0x3b8e50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3B8E54u;
        goto label_3b8e54;
    }
    ctx->pc = 0x3B8E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8E4Cu;
            // 0x3b8e50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B8E54u;
label_3b8e54:
    // 0x3b8e54: 0x0  nop
    ctx->pc = 0x3b8e54u;
    // NOP
label_3b8e58:
    // 0x3b8e58: 0x0  nop
    ctx->pc = 0x3b8e58u;
    // NOP
label_3b8e5c:
    // 0x3b8e5c: 0x0  nop
    ctx->pc = 0x3b8e5cu;
    // NOP
}
