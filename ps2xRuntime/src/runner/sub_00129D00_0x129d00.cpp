#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129D00
// Address: 0x129d00 - 0x129da8
void sub_00129D00_0x129d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129D00_0x129d00");
#endif

    switch (ctx->pc) {
        case 0x129d2cu: goto label_129d2c;
        case 0x129d58u: goto label_129d58;
        case 0x129d64u: goto label_129d64;
        case 0x129d94u: goto label_129d94;
        default: break;
    }

    ctx->pc = 0x129d00u;

    // 0x129d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129d04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129d08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x129d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x129d0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x129d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x129d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x129d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d18: 0x8c8e004c  lw          $t6, 0x4C($a0)
    ctx->pc = 0x129d18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x129d1c: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x129D1Cu;
    {
        const bool branch_taken_0x129d1c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x129D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D1Cu;
            // 0x129d20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d1c) {
            ctx->pc = 0x129D3Cu;
            goto label_129d3c;
        }
    }
    ctx->pc = 0x129D24u;
    // 0x129d24: 0xc04982e  jal         func_1260B8
    ctx->pc = 0x129D24u;
    SET_GPR_U32(ctx, 31, 0x129D2Cu);
    ctx->pc = 0x129D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129D24u;
            // 0x129d28: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1260B8u;
    if (runtime->hasFunction(0x1260B8u)) {
        auto targetFn = runtime->lookupFunction(0x1260B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D2Cu; }
        if (ctx->pc != 0x129D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001260B8_0x1260b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D2Cu; }
        if (ctx->pc != 0x129D2Cu) { return; }
    }
    ctx->pc = 0x129D2Cu;
label_129d2c:
    // 0x129d2c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x129d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x129d30: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x129d30u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x129D34u;
    {
        const bool branch_taken_0x129d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D34u;
            // 0x129d38: 0x40702d  daddu       $t6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d34) {
            ctx->pc = 0x129D64u;
            goto label_129d64;
        }
    }
    ctx->pc = 0x129D3Cu;
label_129d3c:
    // 0x129d3c: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x129d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x129d40: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x129d40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x129d44: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x129d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x129d48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x129D48u;
    {
        const bool branch_taken_0x129d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D48u;
            // 0x129d4c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d48) {
            ctx->pc = 0x129D7Cu;
            goto label_129d7c;
        }
    }
    ctx->pc = 0x129D50u;
    // 0x129d50: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x129d50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129d54: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x129d54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
label_129d58:
    // 0x129d58: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x129d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x129d5c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x129d5cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d60: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x129d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_129d64:
    // 0x129d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129d68: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x129d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x129d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x129d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129d74: 0x3e00008  jr          $ra
    ctx->pc = 0x129D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D74u;
            // 0x129d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129D7Cu;
label_129d7c:
    // 0x129d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d80: 0x22f8004  sllv        $s0, $t7, $s1
    ctx->pc = 0x129d80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 17) & 0x1F));
    // 0x129d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129d88: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x129d88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x129d8c: 0xc04982e  jal         func_1260B8
    ctx->pc = 0x129D8Cu;
    SET_GPR_U32(ctx, 31, 0x129D94u);
    ctx->pc = 0x129D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129D8Cu;
            // 0x129d90: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1260B8u;
    if (runtime->hasFunction(0x1260B8u)) {
        auto targetFn = runtime->lookupFunction(0x1260B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D94u; }
        if (ctx->pc != 0x129D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001260B8_0x1260b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D94u; }
        if (ctx->pc != 0x129D94u) { return; }
    }
    ctx->pc = 0x129D94u;
label_129d94:
    // 0x129d94: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x129D94u;
    {
        const bool branch_taken_0x129d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D94u;
            // 0x129d98: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d94) {
            ctx->pc = 0x129D64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129d64;
        }
    }
    ctx->pc = 0x129D9Cu;
    // 0x129d9c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x129d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x129da0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x129DA0u;
    {
        const bool branch_taken_0x129da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DA0u;
            // 0x129da4: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129da0) {
            ctx->pc = 0x129D58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129d58;
        }
    }
    ctx->pc = 0x129DA8u;
}
