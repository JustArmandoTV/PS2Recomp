#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00105CF0
// Address: 0x105cf0 - 0x105e90
void sub_00105CF0_0x105cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105CF0_0x105cf0");
#endif

    switch (ctx->pc) {
        case 0x105d60u: goto label_105d60;
        case 0x105d84u: goto label_105d84;
        case 0x105dbcu: goto label_105dbc;
        case 0x105dc8u: goto label_105dc8;
        case 0x105e4cu: goto label_105e4c;
        default: break;
    }

    ctx->pc = 0x105cf0u;

    // 0x105cf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x105cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x105cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105cf8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x105cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x105cfc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x105cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x105d00: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x105d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x105d04: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x105d04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d08: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x105d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x105d0c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x105d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x105d10: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x105d10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d14: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x105d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x105d18: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x105d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d1c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x105d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x105d20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x105d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x105d24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x105d24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d28: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x105d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x105d2c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x105d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d30: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x105d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x105d34: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x105d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x105d38: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x105d38u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x105d3c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x105d3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x105d40: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x105D40u;
    {
        const bool branch_taken_0x105d40 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x105D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D40u;
            // 0x105d44: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d40) {
            ctx->pc = 0x105D78u;
            goto label_105d78;
        }
    }
    ctx->pc = 0x105D48u;
    // 0x105d48: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x105D48u;
    {
        const bool branch_taken_0x105d48 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x105d48) {
            ctx->pc = 0x105D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105D48u;
            // 0x105d4c: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105E24u;
            goto label_105e24;
        }
    }
    ctx->pc = 0x105D50u;
    // 0x105d50: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x105D50u;
    {
        const bool branch_taken_0x105d50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x105d50) {
            ctx->pc = 0x105D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105D50u;
            // 0x105d54: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105E24u;
            goto label_105e24;
        }
    }
    ctx->pc = 0x105D58u;
    // 0x105d58: 0xc041a12  jal         func_106848
    ctx->pc = 0x105D58u;
    SET_GPR_U32(ctx, 31, 0x105D60u);
    ctx->pc = 0x105D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D58u;
            // 0x105d5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D60u; }
        if (ctx->pc != 0x105D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D60u; }
        if (ctx->pc != 0x105D60u) { return; }
    }
    ctx->pc = 0x105D60u;
label_105d60:
    // 0x105d60: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x105d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105d64: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x105d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x105d68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x105d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x105d6c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x105d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x105d70: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x105D70u;
    {
        const bool branch_taken_0x105d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D70u;
            // 0x105d74: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d70) {
            ctx->pc = 0x105E20u;
            goto label_105e20;
        }
    }
    ctx->pc = 0x105D78u;
label_105d78:
    // 0x105d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d7c: 0xc041a12  jal         func_106848
    ctx->pc = 0x105D7Cu;
    SET_GPR_U32(ctx, 31, 0x105D84u);
    ctx->pc = 0x105D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D7Cu;
            // 0x105d80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D84u; }
        if (ctx->pc != 0x105D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D84u; }
        if (ctx->pc != 0x105D84u) { return; }
    }
    ctx->pc = 0x105D84u;
label_105d84:
    // 0x105d84: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x105d84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x105d88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x105d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105d8c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x105d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x105d90: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x105d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x105d94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105d98: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x105d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x105d9c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x105d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105da0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x105da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x105da4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x105da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105da8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x105da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dac: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x105dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105db0: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x105db0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105db4: 0xc041632  jal         func_1058C8
    ctx->pc = 0x105DB4u;
    SET_GPR_U32(ctx, 31, 0x105DBCu);
    ctx->pc = 0x105DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105DB4u;
            // 0x105db8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1058C8u;
    if (runtime->hasFunction(0x1058C8u)) {
        auto targetFn = runtime->lookupFunction(0x1058C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DBCu; }
        if (ctx->pc != 0x105DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001058C8_0x1058c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DBCu; }
        if (ctx->pc != 0x105DBCu) { return; }
    }
    ctx->pc = 0x105DBCu;
label_105dbc:
    // 0x105dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dc0: 0xc041a12  jal         func_106848
    ctx->pc = 0x105DC0u;
    SET_GPR_U32(ctx, 31, 0x105DC8u);
    ctx->pc = 0x105DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105DC0u;
            // 0x105dc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DC8u; }
        if (ctx->pc != 0x105DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DC8u; }
        if (ctx->pc != 0x105DC8u) { return; }
    }
    ctx->pc = 0x105DC8u;
label_105dc8:
    // 0x105dc8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x105dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x105dcc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x105dd0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x105dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x105dd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dd8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x105dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ddc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x105ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105de0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x105de0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105de4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x105de4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105de8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x105de8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105dec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x105decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x105df0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x105df0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105df4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x105df4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105df8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x105df8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105dfc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x105dfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105e00: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x105e00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105e04: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x105e04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105e08: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x105e08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105e0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105e0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105e10: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x105e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105e14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105e18: 0x8041632  j           func_1058C8
    ctx->pc = 0x105E18u;
    ctx->pc = 0x105E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E18u;
            // 0x105e1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1058C8u;
    if (runtime->hasFunction(0x1058C8u)) {
        auto targetFn = runtime->lookupFunction(0x1058C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001058C8_0x1058c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x105E20u;
label_105e20:
    // 0x105e20: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x105e20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_105e24:
    // 0x105e24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e28: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x105e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x105e2c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x105e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e30: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x105e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e34: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x105e34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e38: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x105e38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e3c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x105e3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e44: 0xc041632  jal         func_1058C8
    ctx->pc = 0x105E44u;
    SET_GPR_U32(ctx, 31, 0x105E4Cu);
    ctx->pc = 0x105E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E44u;
            // 0x105e48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1058C8u;
    if (runtime->hasFunction(0x1058C8u)) {
        auto targetFn = runtime->lookupFunction(0x1058C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E4Cu; }
        if (ctx->pc != 0x105E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001058C8_0x1058c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E4Cu; }
        if (ctx->pc != 0x105E4Cu) { return; }
    }
    ctx->pc = 0x105E4Cu;
label_105e4c:
    // 0x105e4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105e50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x105e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x105e54: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x105e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x105e58: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x105e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x105e5c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x105e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x105e60: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x105e60u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105e64: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x105e64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105e68: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x105e68u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105e6c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x105e6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105e70: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x105e70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105e74: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x105e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105e78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105e7c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x105e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105e80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105e84: 0x3e00008  jr          $ra
    ctx->pc = 0x105E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E84u;
            // 0x105e88: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105E8Cu;
    // 0x105e8c: 0x0  nop
    ctx->pc = 0x105e8cu;
    // NOP
}
