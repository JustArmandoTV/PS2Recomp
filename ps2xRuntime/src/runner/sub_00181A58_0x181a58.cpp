#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181A58
// Address: 0x181a58 - 0x181c10
void sub_00181A58_0x181a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181A58_0x181a58");
#endif

    switch (ctx->pc) {
        case 0x181a74u: goto label_181a74;
        case 0x181ad0u: goto label_181ad0;
        case 0x181aecu: goto label_181aec;
        case 0x181b00u: goto label_181b00;
        case 0x181be8u: goto label_181be8;
        case 0x181bf8u: goto label_181bf8;
        default: break;
    }

    ctx->pc = 0x181a58u;

label_181a58:
    // 0x181a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181a5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x181a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181a60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181A60u;
    {
        const bool branch_taken_0x181a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A60u;
            // 0x181a64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a60) {
            ctx->pc = 0x181A80u;
            goto label_181a80;
        }
    }
    ctx->pc = 0x181A68u;
    // 0x181a68: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x181a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x181a6c: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x181A6Cu;
    SET_GPR_U32(ctx, 31, 0x181A74u);
    ctx->pc = 0x181A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181A6Cu;
            // 0x181a70: 0x24a56cf8  addiu       $a1, $a1, 0x6CF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A74u; }
        if (ctx->pc != 0x181A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812C8_0x1812c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181A74u; }
        if (ctx->pc != 0x181A74u) { return; }
    }
    ctx->pc = 0x181A74u;
label_181a74:
    // 0x181a74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181A74u;
    {
        const bool branch_taken_0x181a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A74u;
            // 0x181a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a74) {
            ctx->pc = 0x181A84u;
            goto label_181a84;
        }
    }
    ctx->pc = 0x181A7Cu;
    // 0x181a7c: 0x0  nop
    ctx->pc = 0x181a7cu;
    // NOP
label_181a80:
    // 0x181a80: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x181a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_181a84:
    // 0x181a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181a88: 0x3e00008  jr          $ra
    ctx->pc = 0x181A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A88u;
            // 0x181a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181A90u;
    // 0x181a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181a98: 0x1c800005  bgtz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181A98u;
    {
        const bool branch_taken_0x181a98 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x181A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A98u;
            // 0x181a9c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a98) {
            ctx->pc = 0x181AB0u;
            goto label_181ab0;
        }
    }
    ctx->pc = 0x181AA0u;
    // 0x181aa0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x181aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x181aa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181aa8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x181AA8u;
    {
        const bool branch_taken_0x181aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181AA8u;
            // 0x181aac: 0x24a56d40  addiu       $a1, $a1, 0x6D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181aa8) {
            ctx->pc = 0x181AE4u;
            goto label_181ae4;
        }
    }
    ctx->pc = 0x181AB0u;
label_181ab0:
    // 0x181ab0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x181AB0u;
    {
        const bool branch_taken_0x181ab0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181AB0u;
            // 0x181ab4: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ab0) {
            ctx->pc = 0x181AC8u;
            goto label_181ac8;
        }
    }
    ctx->pc = 0x181AB8u;
    // 0x181ab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181abc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x181ABCu;
    {
        const bool branch_taken_0x181abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181ABCu;
            // 0x181ac0: 0x24a56d70  addiu       $a1, $a1, 0x6D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181abc) {
            ctx->pc = 0x181AE4u;
            goto label_181ae4;
        }
    }
    ctx->pc = 0x181AC4u;
    // 0x181ac4: 0x0  nop
    ctx->pc = 0x181ac4u;
    // NOP
label_181ac8:
    // 0x181ac8: 0xc060532  jal         func_1814C8
    ctx->pc = 0x181AC8u;
    SET_GPR_U32(ctx, 31, 0x181AD0u);
    ctx->pc = 0x1814C8u;
    if (runtime->hasFunction(0x1814C8u)) {
        auto targetFn = runtime->lookupFunction(0x1814C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AD0u; }
        if (ctx->pc != 0x181AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814C8_0x1814c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AD0u; }
        if (ctx->pc != 0x181AD0u) { return; }
    }
    ctx->pc = 0x181AD0u;
label_181ad0:
    // 0x181ad0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x181ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x181ad4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x181ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181ad8: 0x24a56d98  addiu       $a1, $a1, 0x6D98
    ctx->pc = 0x181ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28056));
    // 0x181adc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181ADCu;
    {
        const bool branch_taken_0x181adc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x181AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181ADCu;
            // 0x181ae0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181adc) {
            ctx->pc = 0x181AF8u;
            goto label_181af8;
        }
    }
    ctx->pc = 0x181AE4u;
label_181ae4:
    // 0x181ae4: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x181AE4u;
    SET_GPR_U32(ctx, 31, 0x181AECu);
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AECu; }
        if (ctx->pc != 0x181AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812C8_0x1812c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AECu; }
        if (ctx->pc != 0x181AECu) { return; }
    }
    ctx->pc = 0x181AECu;
label_181aec:
    // 0x181aec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x181AECu;
    {
        const bool branch_taken_0x181aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181AECu;
            // 0x181af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181aec) {
            ctx->pc = 0x181B04u;
            goto label_181b04;
        }
    }
    ctx->pc = 0x181AF4u;
    // 0x181af4: 0x0  nop
    ctx->pc = 0x181af4u;
    // NOP
label_181af8:
    // 0x181af8: 0xc060550  jal         func_181540
    ctx->pc = 0x181AF8u;
    SET_GPR_U32(ctx, 31, 0x181B00u);
    ctx->pc = 0x181AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181AF8u;
            // 0x181afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181540u;
    if (runtime->hasFunction(0x181540u)) {
        auto targetFn = runtime->lookupFunction(0x181540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B00u; }
        if (ctx->pc != 0x181B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181540_0x181540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181B00u; }
        if (ctx->pc != 0x181B00u) { return; }
    }
    ctx->pc = 0x181B00u;
label_181b00:
    // 0x181b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x181b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181b04:
    // 0x181b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181b08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x181B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B0Cu;
            // 0x181b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181B14u;
    // 0x181b14: 0x0  nop
    ctx->pc = 0x181b14u;
    // NOP
    // 0x181b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181b1c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x181b1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181b24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181b28: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x181B28u;
    {
        const bool branch_taken_0x181b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B28u;
            // 0x181b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b28) {
            ctx->pc = 0x181C00u;
            goto label_181c00;
        }
    }
    ctx->pc = 0x181B30u;
    // 0x181b30: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x181b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x181b34: 0x10a2002e  beq         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x181B34u;
    {
        const bool branch_taken_0x181b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x181B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B34u;
            // 0x181b38: 0x28a200ce  slti        $v0, $a1, 0xCE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)206) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b34) {
            ctx->pc = 0x181BF0u;
            goto label_181bf0;
        }
    }
    ctx->pc = 0x181B3Cu;
    // 0x181b3c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x181B3Cu;
    {
        const bool branch_taken_0x181b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B3Cu;
            // 0x181b40: 0x2402012d  addiu       $v0, $zero, 0x12D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b3c) {
            ctx->pc = 0x181B90u;
            goto label_181b90;
        }
    }
    ctx->pc = 0x181B44u;
    // 0x181b44: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x181b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x181b48: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x181B48u;
    {
        const bool branch_taken_0x181b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x181B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B48u;
            // 0x181b4c: 0x28a200cb  slti        $v0, $a1, 0xCB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)203) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b48) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181B50u;
    // 0x181b50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x181B50u;
    {
        const bool branch_taken_0x181b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B50u;
            // 0x181b54: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b50) {
            ctx->pc = 0x181B78u;
            goto label_181b78;
        }
    }
    ctx->pc = 0x181B58u;
    // 0x181b58: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x181b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x181b5c: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x181B5Cu;
    {
        const bool branch_taken_0x181b5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x181B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B5Cu;
            // 0x181b60: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b5c) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181B64u;
    // 0x181b64: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x181B64u;
    {
        const bool branch_taken_0x181b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x181b64) {
            ctx->pc = 0x181BE0u;
            goto label_181be0;
        }
    }
    ctx->pc = 0x181B6Cu;
    // 0x181b6c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x181B6Cu;
    {
        const bool branch_taken_0x181b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B6Cu;
            // 0x181b70: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b6c) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181B74u;
    // 0x181b74: 0x0  nop
    ctx->pc = 0x181b74u;
    // NOP
label_181b78:
    // 0x181b78: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x181B78u;
    {
        const bool branch_taken_0x181b78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x181B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B78u;
            // 0x181b7c: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b78) {
            ctx->pc = 0x181BF0u;
            goto label_181bf0;
        }
    }
    ctx->pc = 0x181B80u;
    // 0x181b80: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x181B80u;
    {
        const bool branch_taken_0x181b80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x181B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B80u;
            // 0x181b84: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b80) {
            ctx->pc = 0x181C00u;
            goto label_181c00;
        }
    }
    ctx->pc = 0x181B88u;
    // 0x181b88: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x181B88u;
    {
        const bool branch_taken_0x181b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B88u;
            // 0x181b8c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b88) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181B90u;
label_181b90:
    // 0x181b90: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x181B90u;
    {
        const bool branch_taken_0x181b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x181B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B90u;
            // 0x181b94: 0x28a2012e  slti        $v0, $a1, 0x12E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)302) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b90) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181B98u;
    // 0x181b98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x181B98u;
    {
        const bool branch_taken_0x181b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181B98u;
            // 0x181b9c: 0x2402012e  addiu       $v0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b98) {
            ctx->pc = 0x181BC0u;
            goto label_181bc0;
        }
    }
    ctx->pc = 0x181BA0u;
    // 0x181ba0: 0x2402012b  addiu       $v0, $zero, 0x12B
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x181ba4: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x181BA4u;
    {
        const bool branch_taken_0x181ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x181BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BA4u;
            // 0x181ba8: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ba4) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181BACu;
    // 0x181bac: 0x50a20013  beql        $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x181BACu;
    {
        const bool branch_taken_0x181bac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x181bac) {
            ctx->pc = 0x181BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181BACu;
            // 0x181bb0: 0x8c660008  lw          $a2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181BB4u;
    // 0x181bb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x181BB4u;
    {
        const bool branch_taken_0x181bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BB4u;
            // 0x181bb8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bb4) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181BBCu;
    // 0x181bbc: 0x0  nop
    ctx->pc = 0x181bbcu;
    // NOP
label_181bc0:
    // 0x181bc0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181BC0u;
    {
        const bool branch_taken_0x181bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x181BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BC0u;
            // 0x181bc4: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bc0) {
            ctx->pc = 0x181BD8u;
            goto label_181bd8;
        }
    }
    ctx->pc = 0x181BC8u;
    // 0x181bc8: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x181BC8u;
    {
        const bool branch_taken_0x181bc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x181BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BC8u;
            // 0x181bcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bc8) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181BD0u;
    // 0x181bd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181BD0u;
    {
        const bool branch_taken_0x181bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BD0u;
            // 0x181bd4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bd0) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181BD8u;
label_181bd8:
    // 0x181bd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181BD8u;
    {
        const bool branch_taken_0x181bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BD8u;
            // 0x181bdc: 0x8c660008  lw          $a2, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181bd8) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181BE0u;
label_181be0:
    // 0x181be0: 0xc060696  jal         func_181A58
    ctx->pc = 0x181BE0u;
    SET_GPR_U32(ctx, 31, 0x181BE8u);
    ctx->pc = 0x181A58u;
    goto label_181a58;
    ctx->pc = 0x181BE8u;
label_181be8:
    // 0x181be8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x181BE8u;
    {
        const bool branch_taken_0x181be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BE8u;
            // 0x181bec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181be8) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181BF0u;
label_181bf0:
    // 0x181bf0: 0xc06052a  jal         func_1814A8
    ctx->pc = 0x181BF0u;
    SET_GPR_U32(ctx, 31, 0x181BF8u);
    ctx->pc = 0x1814A8u;
    if (runtime->hasFunction(0x1814A8u)) {
        auto targetFn = runtime->lookupFunction(0x1814A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BF8u; }
        if (ctx->pc != 0x181BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001814A8_0x1814a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BF8u; }
        if (ctx->pc != 0x181BF8u) { return; }
    }
    ctx->pc = 0x181BF8u;
label_181bf8:
    // 0x181bf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x181bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181bfc:
    // 0x181bfc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x181bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_181c00:
    // 0x181c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181c04: 0x3e00008  jr          $ra
    ctx->pc = 0x181C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C04u;
            // 0x181c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181C0Cu;
    // 0x181c0c: 0x0  nop
    ctx->pc = 0x181c0cu;
    // NOP
}
