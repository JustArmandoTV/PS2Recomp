#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00159D60
// Address: 0x159d60 - 0x15a030
void sub_00159D60_0x159d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159D60_0x159d60");
#endif

    switch (ctx->pc) {
        case 0x159e6cu: goto label_159e6c;
        case 0x159ea4u: goto label_159ea4;
        case 0x159edcu: goto label_159edc;
        case 0x159f14u: goto label_159f14;
        case 0x159f38u: goto label_159f38;
        case 0x159f4cu: goto label_159f4c;
        case 0x159f78u: goto label_159f78;
        case 0x159ff0u: goto label_159ff0;
        default: break;
    }

    ctx->pc = 0x159d60u;

    // 0x159d60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x159d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x159d64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x159d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x159d68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x159d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x159d6c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x159d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x159d70: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x159d70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x159d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x159d78: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x159d78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d7c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x159d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x159d80: 0x24046d00  addiu       $a0, $zero, 0x6D00
    ctx->pc = 0x159d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27904));
    // 0x159d84: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x159d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x159d88: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x159d88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x159d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x159d90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x159d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x159d94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x159d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x159d98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x159d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x159d9c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x159d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159da0: 0x94c3000a  lhu         $v1, 0xA($a2)
    ctx->pc = 0x159da0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x159da4: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x159da4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x159da8: 0x94c50008  lhu         $a1, 0x8($a2)
    ctx->pc = 0x159da8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159dac: 0x24e72310  addiu       $a3, $a3, 0x2310
    ctx->pc = 0x159dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8976));
    // 0x159db0: 0x94d4000c  lhu         $s4, 0xC($a2)
    ctx->pc = 0x159db0u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x159db4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x159db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x159db8: 0x94c3001a  lhu         $v1, 0x1A($a2)
    ctx->pc = 0x159db8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x159dbc: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x159dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x159dc0: 0x94d3000e  lhu         $s3, 0xE($a2)
    ctx->pc = 0x159dc0u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x159dc4: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x159dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x159dc8: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x159dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x159dcc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x159dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x159dd0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x159dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x159dd4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x159dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x159dd8: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x159dd8u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159ddc: 0x10a40042  beq         $a1, $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x159DDCu;
    {
        const bool branch_taken_0x159ddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x159DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159DDCu;
            // 0x159de0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ddc) {
            ctx->pc = 0x159EE8u;
            goto label_159ee8;
        }
    }
    ctx->pc = 0x159DE4u;
    // 0x159de4: 0x24036c00  addiu       $v1, $zero, 0x6C00
    ctx->pc = 0x159de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x159de8: 0x50a30040  beql        $a1, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x159DE8u;
    {
        const bool branch_taken_0x159de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159de8) {
            ctx->pc = 0x159DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159DE8u;
            // 0x159dec: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159EECu;
            goto label_159eec;
        }
    }
    ctx->pc = 0x159DF0u;
    // 0x159df0: 0x24036b00  addiu       $v1, $zero, 0x6B00
    ctx->pc = 0x159df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27392));
    // 0x159df4: 0x50a3002f  beql        $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x159DF4u;
    {
        const bool branch_taken_0x159df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159df4) {
            ctx->pc = 0x159DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159DF4u;
            // 0x159df8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159EB4u;
            goto label_159eb4;
        }
    }
    ctx->pc = 0x159DFCu;
    // 0x159dfc: 0x24036a00  addiu       $v1, $zero, 0x6A00
    ctx->pc = 0x159dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x159e00: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x159E00u;
    {
        const bool branch_taken_0x159e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159e00) {
            ctx->pc = 0x159EB0u;
            goto label_159eb0;
        }
    }
    ctx->pc = 0x159E08u;
    // 0x159e08: 0x24036900  addiu       $v1, $zero, 0x6900
    ctx->pc = 0x159e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26880));
    // 0x159e0c: 0x50a3001b  beql        $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x159E0Cu;
    {
        const bool branch_taken_0x159e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159e0c) {
            ctx->pc = 0x159E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159E0Cu;
            // 0x159e10: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159E7Cu;
            goto label_159e7c;
        }
    }
    ctx->pc = 0x159E14u;
    // 0x159e14: 0x24036800  addiu       $v1, $zero, 0x6800
    ctx->pc = 0x159e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x159e18: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x159E18u;
    {
        const bool branch_taken_0x159e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159e18) {
            ctx->pc = 0x159E78u;
            goto label_159e78;
        }
    }
    ctx->pc = 0x159E20u;
    // 0x159e20: 0x24036700  addiu       $v1, $zero, 0x6700
    ctx->pc = 0x159e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26368));
    // 0x159e24: 0x50a30007  beql        $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x159E24u;
    {
        const bool branch_taken_0x159e24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159e24) {
            ctx->pc = 0x159E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159E24u;
            // 0x159e28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159E44u;
            goto label_159e44;
        }
    }
    ctx->pc = 0x159E2Cu;
    // 0x159e2c: 0x24036600  addiu       $v1, $zero, 0x6600
    ctx->pc = 0x159e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x159e30: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159E30u;
    {
        const bool branch_taken_0x159e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159e30) {
            ctx->pc = 0x159E40u;
            goto label_159e40;
        }
    }
    ctx->pc = 0x159E38u;
    // 0x159e38: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x159E38u;
    {
        const bool branch_taken_0x159e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159E38u;
            // 0x159e3c: 0x7ba300b0  lq          $v1, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e38) {
            ctx->pc = 0x159F20u;
            goto label_159f20;
        }
    }
    ctx->pc = 0x159E40u;
label_159e40:
    // 0x159e40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x159e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_159e44:
    // 0x159e44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159e48: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x159e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e4c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x159e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e50: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x159e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x159e54: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x159e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x159e58: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x159e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e5c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159e5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e60: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159e60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e64: 0xc056704  jal         func_159C10
    ctx->pc = 0x159E64u;
    SET_GPR_U32(ctx, 31, 0x159E6Cu);
    ctx->pc = 0x159E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E64u;
            // 0x159e68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159C10u;
    if (runtime->hasFunction(0x159C10u)) {
        auto targetFn = runtime->lookupFunction(0x159C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E6Cu; }
        if (ctx->pc != 0x159E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159C10_0x159c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159E6Cu; }
        if (ctx->pc != 0x159E6Cu) { return; }
    }
    ctx->pc = 0x159E6Cu;
label_159e6c:
    // 0x159e6c: 0x26b50100  addiu       $s5, $s5, 0x100
    ctx->pc = 0x159e6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x159e70: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x159E70u;
    {
        const bool branch_taken_0x159e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159E70u;
            // 0x159e74: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159e70) {
            ctx->pc = 0x159F1Cu;
            goto label_159f1c;
        }
    }
    ctx->pc = 0x159E78u;
label_159e78:
    // 0x159e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_159e7c:
    // 0x159e7c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x159e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e80: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x159e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e88: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x159e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x159e8c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x159e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x159e90: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x159e90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159e94: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e98: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159e98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159e9c: 0xc056704  jal         func_159C10
    ctx->pc = 0x159E9Cu;
    SET_GPR_U32(ctx, 31, 0x159EA4u);
    ctx->pc = 0x159EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159E9Cu;
            // 0x159ea0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159C10u;
    if (runtime->hasFunction(0x159C10u)) {
        auto targetFn = runtime->lookupFunction(0x159C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EA4u; }
        if (ctx->pc != 0x159EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159C10_0x159c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EA4u; }
        if (ctx->pc != 0x159EA4u) { return; }
    }
    ctx->pc = 0x159EA4u;
label_159ea4:
    // 0x159ea4: 0x26b50100  addiu       $s5, $s5, 0x100
    ctx->pc = 0x159ea4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x159ea8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x159EA8u;
    {
        const bool branch_taken_0x159ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159EA8u;
            // 0x159eac: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ea8) {
            ctx->pc = 0x159F1Cu;
            goto label_159f1c;
        }
    }
    ctx->pc = 0x159EB0u;
label_159eb0:
    // 0x159eb0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x159eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_159eb4:
    // 0x159eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159eb8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x159eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ebc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x159ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ec0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x159ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159ec4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159ec4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ec8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x159ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ecc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x159eccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ed0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159ed0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ed4: 0xc056704  jal         func_159C10
    ctx->pc = 0x159ED4u;
    SET_GPR_U32(ctx, 31, 0x159EDCu);
    ctx->pc = 0x159ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159ED4u;
            // 0x159ed8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159C10u;
    if (runtime->hasFunction(0x159C10u)) {
        auto targetFn = runtime->lookupFunction(0x159C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EDCu; }
        if (ctx->pc != 0x159EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159C10_0x159c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159EDCu; }
        if (ctx->pc != 0x159EDCu) { return; }
    }
    ctx->pc = 0x159EDCu;
label_159edc:
    // 0x159edc: 0x26b50200  addiu       $s5, $s5, 0x200
    ctx->pc = 0x159edcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 512));
    // 0x159ee0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x159EE0u;
    {
        const bool branch_taken_0x159ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159EE0u;
            // 0x159ee4: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ee0) {
            ctx->pc = 0x159F1Cu;
            goto label_159f1c;
        }
    }
    ctx->pc = 0x159EE8u;
label_159ee8:
    // 0x159ee8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x159ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_159eec:
    // 0x159eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159ef0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x159ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ef4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x159ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159ef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x159ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159efc: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x159efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x159f00: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x159f00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f04: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159f04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f08: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159f08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f0c: 0xc056704  jal         func_159C10
    ctx->pc = 0x159F0Cu;
    SET_GPR_U32(ctx, 31, 0x159F14u);
    ctx->pc = 0x159F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F0Cu;
            // 0x159f10: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159C10u;
    if (runtime->hasFunction(0x159C10u)) {
        auto targetFn = runtime->lookupFunction(0x159C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F14u; }
        if (ctx->pc != 0x159F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159C10_0x159c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F14u; }
        if (ctx->pc != 0x159F14u) { return; }
    }
    ctx->pc = 0x159F14u;
label_159f14:
    // 0x159f14: 0x26b50400  addiu       $s5, $s5, 0x400
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1024));
    // 0x159f18: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x159f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_159f1c:
    // 0x159f1c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x159f1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_159f20:
    // 0x159f20: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x159F20u;
    {
        const bool branch_taken_0x159f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f20) {
            ctx->pc = 0x159F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159F20u;
            // 0x159f24: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159FCCu;
            goto label_159fcc;
        }
    }
    ctx->pc = 0x159F28u;
    // 0x159f28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x159f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159f2c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x159F2Cu;
    {
        const bool branch_taken_0x159f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159F2Cu;
            // 0x159f30: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f2c) {
            ctx->pc = 0x159FF0u;
            goto label_159ff0;
        }
    }
    ctx->pc = 0x159F34u;
    // 0x159f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_159f38:
    // 0x159f38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x159f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x159f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f40: 0x27a700dc  addiu       $a3, $sp, 0xDC
    ctx->pc = 0x159f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x159f44: 0xc0566d4  jal         func_159B50
    ctx->pc = 0x159F44u;
    SET_GPR_U32(ctx, 31, 0x159F4Cu);
    ctx->pc = 0x159F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F44u;
            // 0x159f48: 0x27a800d8  addiu       $t0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159B50u;
    if (runtime->hasFunction(0x159B50u)) {
        auto targetFn = runtime->lookupFunction(0x159B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F4Cu; }
        if (ctx->pc != 0x159F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159B50_0x159b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F4Cu; }
        if (ctx->pc != 0x159F4Cu) { return; }
    }
    ctx->pc = 0x159F4Cu;
label_159f4c:
    // 0x159f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159f50: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159f50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f54: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x159f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x159f58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x159f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f5c: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x159f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x159f60: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x159f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f64: 0x8fa900d8  lw          $t1, 0xD8($sp)
    ctx->pc = 0x159f64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x159f68: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x159f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f6c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159f6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f70: 0xc0570d0  jal         func_15C340
    ctx->pc = 0x159F70u;
    SET_GPR_U32(ctx, 31, 0x159F78u);
    ctx->pc = 0x159F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159F70u;
            // 0x159f74: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C340u;
    if (runtime->hasFunction(0x15C340u)) {
        auto targetFn = runtime->lookupFunction(0x15C340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F78u; }
        if (ctx->pc != 0x159F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C340_0x15c340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159F78u; }
        if (ctx->pc != 0x159F78u) { return; }
    }
    ctx->pc = 0x159F78u;
label_159f78:
    // 0x159f78: 0x2932018  mult        $a0, $s4, $s3
    ctx->pc = 0x159f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x159f7c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x159f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x159f80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x159f80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159f84: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x159f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x159f88: 0x14a042  srl         $s4, $s4, 1
    ctx->pc = 0x159f88u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x159f8c: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x159f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x159f90: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x159f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x159f94: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x159f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x159f98: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x159F98u;
    {
        const bool branch_taken_0x159f98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159F98u;
            // 0x159f9c: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f98) {
            ctx->pc = 0x15A000u;
            goto label_15a000;
        }
    }
    ctx->pc = 0x159FA0u;
    // 0x159fa0: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x159fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x159fa4: 0x52600017  beql        $s3, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x159FA4u;
    {
        const bool branch_taken_0x159fa4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x159fa4) {
            ctx->pc = 0x159FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159FA4u;
            // 0x159fa8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A004u;
            goto label_15a004;
        }
    }
    ctx->pc = 0x159FACu;
    // 0x159fac: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x159facu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x159fb0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x159fb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x159fb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x159fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x159fb8: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x159fb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x159fbc: 0x5460ffde  bnel        $v1, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x159FBCu;
    {
        const bool branch_taken_0x159fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x159fbc) {
            ctx->pc = 0x159FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159FBCu;
            // 0x159fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_159f38;
        }
    }
    ctx->pc = 0x159FC4u;
    // 0x159fc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x159FC4u;
    {
        const bool branch_taken_0x159fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159FC4u;
            // 0x159fc8: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fc4) {
            ctx->pc = 0x159FF4u;
            goto label_159ff4;
        }
    }
    ctx->pc = 0x159FCCu;
label_159fcc:
    // 0x159fcc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x159fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fd0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x159fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fd4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x159fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fd8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x159fd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fdc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x159fdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fe0: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x159fe0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fe4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x159fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159fe8: 0xc0570d0  jal         func_15C340
    ctx->pc = 0x159FE8u;
    SET_GPR_U32(ctx, 31, 0x159FF0u);
    ctx->pc = 0x159FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159FE8u;
            // 0x159fec: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C340u;
    if (runtime->hasFunction(0x15C340u)) {
        auto targetFn = runtime->lookupFunction(0x15C340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FF0u; }
        if (ctx->pc != 0x159FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C340_0x15c340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159FF0u; }
        if (ctx->pc != 0x159FF0u) { return; }
    }
    ctx->pc = 0x159FF0u;
label_159ff0:
    // 0x159ff0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x159ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_159ff4:
    // 0x159ff4: 0xdc83ffe0  ld          $v1, -0x20($a0)
    ctx->pc = 0x159ff4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x159ff8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x159ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x159ffc: 0xfc83ffe0  sd          $v1, -0x20($a0)
    ctx->pc = 0x159ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294967264), GPR_U64(ctx, 3));
label_15a000:
    // 0x15a000: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x15a000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_15a004:
    // 0x15a004: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x15a004u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15a008: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x15a008u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15a00c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15a00cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15a010: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x15a010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a014: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15a014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a018: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15a018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a01c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15a01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a020: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15a020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a024: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15a024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a028: 0x3e00008  jr          $ra
    ctx->pc = 0x15A028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A028u;
            // 0x15a02c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A030u;
}
