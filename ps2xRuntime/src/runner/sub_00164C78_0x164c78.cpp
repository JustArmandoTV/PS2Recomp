#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164C78
// Address: 0x164c78 - 0x164df0
void sub_00164C78_0x164c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164C78_0x164c78");
#endif

    switch (ctx->pc) {
        case 0x164c9cu: goto label_164c9c;
        case 0x164ce8u: goto label_164ce8;
        case 0x164d18u: goto label_164d18;
        case 0x164d48u: goto label_164d48;
        case 0x164d78u: goto label_164d78;
        case 0x164da8u: goto label_164da8;
        default: break;
    }

    ctx->pc = 0x164c78u;

    // 0x164c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164c80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x164c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164c88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x164c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164c90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x164c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x164c94: 0xc0591d0  jal         func_164740
    ctx->pc = 0x164C94u;
    SET_GPR_U32(ctx, 31, 0x164C9Cu);
    ctx->pc = 0x164C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164C94u;
            // 0x164c98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164740u;
    if (runtime->hasFunction(0x164740u)) {
        auto targetFn = runtime->lookupFunction(0x164740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C9Cu; }
        if (ctx->pc != 0x164C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164740_0x164740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C9Cu; }
        if (ctx->pc != 0x164C9Cu) { return; }
    }
    ctx->pc = 0x164C9Cu;
label_164c9c:
    // 0x164c9c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x164c9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164ca0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x164ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x164ca4: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x164ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x164ca8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x164ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x164cac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x164cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x164cb0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164cb4: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x164CB4u;
    {
        const bool branch_taken_0x164cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x164CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CB4u;
            // 0x164cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cb4) {
            ctx->pc = 0x164CE0u;
            goto label_164ce0;
        }
    }
    ctx->pc = 0x164CBCu;
    // 0x164cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164cc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x164cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ccc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164cccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164cd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164cd4: 0x8059238  j           func_1648E0
    ctx->pc = 0x164CD4u;
    ctx->pc = 0x164CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164CD4u;
            // 0x164cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1648E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1648E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x164CDCu;
    // 0x164cdc: 0x0  nop
    ctx->pc = 0x164cdcu;
    // NOP
label_164ce0:
    // 0x164ce0: 0xc05977e  jal         func_165DF8
    ctx->pc = 0x164CE0u;
    SET_GPR_U32(ctx, 31, 0x164CE8u);
    ctx->pc = 0x164CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164CE0u;
            // 0x164ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165DF8u;
    if (runtime->hasFunction(0x165DF8u)) {
        auto targetFn = runtime->lookupFunction(0x165DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CE8u; }
        if (ctx->pc != 0x164CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00165DF8_0x165df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164CE8u; }
        if (ctx->pc != 0x164CE8u) { return; }
    }
    ctx->pc = 0x164CE8u;
label_164ce8:
    // 0x164ce8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164CE8u;
    {
        const bool branch_taken_0x164ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CE8u;
            // 0x164cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ce8) {
            ctx->pc = 0x164D10u;
            goto label_164d10;
        }
    }
    ctx->pc = 0x164CF0u;
    // 0x164cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164cf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164cfc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x164cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164d04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164d08: 0x80596e2  j           func_165B88
    ctx->pc = 0x164D08u;
    ctx->pc = 0x164D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D08u;
            // 0x164d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165B88u;
    {
        auto targetFn = runtime->lookupFunction(0x165B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x164D10u;
label_164d10:
    // 0x164d10: 0xc05998a  jal         func_166628
    ctx->pc = 0x164D10u;
    SET_GPR_U32(ctx, 31, 0x164D18u);
    ctx->pc = 0x164D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D10u;
            // 0x164d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166628u;
    if (runtime->hasFunction(0x166628u)) {
        auto targetFn = runtime->lookupFunction(0x166628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D18u; }
        if (ctx->pc != 0x164D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166628_0x166628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D18u; }
        if (ctx->pc != 0x164D18u) { return; }
    }
    ctx->pc = 0x164D18u;
label_164d18:
    // 0x164d18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164D18u;
    {
        const bool branch_taken_0x164d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D18u;
            // 0x164d1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d18) {
            ctx->pc = 0x164D40u;
            goto label_164d40;
        }
    }
    ctx->pc = 0x164D20u;
    // 0x164d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164d2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x164d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164d30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164d34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164d38: 0x805981e  j           func_166078
    ctx->pc = 0x164D38u;
    ctx->pc = 0x164D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D38u;
            // 0x164d3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166078u;
    {
        auto targetFn = runtime->lookupFunction(0x166078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x164D40u;
label_164d40:
    // 0x164d40: 0xc058cba  jal         func_1632E8
    ctx->pc = 0x164D40u;
    SET_GPR_U32(ctx, 31, 0x164D48u);
    ctx->pc = 0x164D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D40u;
            // 0x164d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1632E8u;
    if (runtime->hasFunction(0x1632E8u)) {
        auto targetFn = runtime->lookupFunction(0x1632E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D48u; }
        if (ctx->pc != 0x164D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001632E8_0x1632e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D48u; }
        if (ctx->pc != 0x164D48u) { return; }
    }
    ctx->pc = 0x164D48u;
label_164d48:
    // 0x164d48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164D48u;
    {
        const bool branch_taken_0x164d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D48u;
            // 0x164d4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d48) {
            ctx->pc = 0x164D70u;
            goto label_164d70;
        }
    }
    ctx->pc = 0x164D50u;
    // 0x164d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164d5c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x164d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164d64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164d68: 0x8058d1c  j           func_163470
    ctx->pc = 0x164D68u;
    ctx->pc = 0x164D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D68u;
            // 0x164d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163470u;
    {
        auto targetFn = runtime->lookupFunction(0x163470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x164D70u;
label_164d70:
    // 0x164d70: 0xc058f00  jal         func_163C00
    ctx->pc = 0x164D70u;
    SET_GPR_U32(ctx, 31, 0x164D78u);
    ctx->pc = 0x164D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D70u;
            // 0x164d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163C00u;
    if (runtime->hasFunction(0x163C00u)) {
        auto targetFn = runtime->lookupFunction(0x163C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D78u; }
        if (ctx->pc != 0x164D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00163C00_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D78u; }
        if (ctx->pc != 0x164D78u) { return; }
    }
    ctx->pc = 0x164D78u;
label_164d78:
    // 0x164d78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164D78u;
    {
        const bool branch_taken_0x164d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D78u;
            // 0x164d7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d78) {
            ctx->pc = 0x164DA0u;
            goto label_164da0;
        }
    }
    ctx->pc = 0x164D80u;
    // 0x164d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164d84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164d8c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x164d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164d94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164d98: 0x8058f5e  j           func_163D78
    ctx->pc = 0x164D98u;
    ctx->pc = 0x164D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D98u;
            // 0x164d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x163D78u;
    {
        auto targetFn = runtime->lookupFunction(0x163D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x164DA0u;
label_164da0:
    // 0x164da0: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x164DA0u;
    SET_GPR_U32(ctx, 31, 0x164DA8u);
    ctx->pc = 0x164DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164DA0u;
            // 0x164da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162DE0u;
    if (runtime->hasFunction(0x162DE0u)) {
        auto targetFn = runtime->lookupFunction(0x162DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DA8u; }
        if (ctx->pc != 0x164DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162DE0_0x162de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DA8u; }
        if (ctx->pc != 0x164DA8u) { return; }
    }
    ctx->pc = 0x164DA8u;
label_164da8:
    // 0x164da8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164DA8u;
    {
        const bool branch_taken_0x164da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164DA8u;
            // 0x164dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164da8) {
            ctx->pc = 0x164DD0u;
            goto label_164dd0;
        }
    }
    ctx->pc = 0x164DB0u;
    // 0x164db0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164db4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x164db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164dbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x164dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164dc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164dc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164dc8: 0x8058b4c  j           func_162D30
    ctx->pc = 0x164DC8u;
    ctx->pc = 0x164DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164DC8u;
            // 0x164dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162D30u;
    {
        auto targetFn = runtime->lookupFunction(0x162D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x164DD0u;
label_164dd0:
    // 0x164dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164dd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164dd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164ddc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164ddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164de0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164de4: 0x3e00008  jr          $ra
    ctx->pc = 0x164DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164DE4u;
            // 0x164de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164DECu;
    // 0x164dec: 0x0  nop
    ctx->pc = 0x164decu;
    // NOP
}
