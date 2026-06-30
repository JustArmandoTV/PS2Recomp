#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6B90
// Address: 0x1c6b90 - 0x1c6c68
void sub_001C6B90_0x1c6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6B90_0x1c6b90");
#endif

    switch (ctx->pc) {
        case 0x1c6bc8u: goto label_1c6bc8;
        case 0x1c6bd4u: goto label_1c6bd4;
        case 0x1c6be4u: goto label_1c6be4;
        default: break;
    }

    ctx->pc = 0x1c6b90u;

    // 0x1c6b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6b94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6b98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6b98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6ba0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c6ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6ba8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c6ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c6bac: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1c6bacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6bb0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C6BB0u;
    {
        const bool branch_taken_0x1c6bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BB0u;
            // 0x1c6bb4: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bb0) {
            ctx->pc = 0x1C6C18u;
            goto label_1c6c18;
        }
    }
    ctx->pc = 0x1C6BB8u;
    // 0x1c6bb8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1c6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c6bbc: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C6BBCu;
    {
        const bool branch_taken_0x1c6bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6bbc) {
            ctx->pc = 0x1C6BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BBCu;
            // 0x1c6bc0: 0x82220001  lb          $v0, 0x1($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6C10u;
            goto label_1c6c10;
        }
    }
    ctx->pc = 0x1C6BC4u;
    // 0x1c6bc4: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1c6bc8:
    // 0x1c6bc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c6bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c6bcc: 0xc071a92  jal         func_1C6A48
    ctx->pc = 0x1C6BCCu;
    SET_GPR_U32(ctx, 31, 0x1C6BD4u);
    ctx->pc = 0x1C6BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BCCu;
            // 0x1c6bd0: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A48u;
    if (runtime->hasFunction(0x1C6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BD4u; }
        if (ctx->pc != 0x1C6BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A48_0x1c6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BD4u; }
        if (ctx->pc != 0x1C6BD4u) { return; }
    }
    ctx->pc = 0x1C6BD4u;
label_1c6bd4:
    // 0x1c6bd4: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x1c6bd4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6bd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bdc: 0xc071a92  jal         func_1C6A48
    ctx->pc = 0x1C6BDCu;
    SET_GPR_U32(ctx, 31, 0x1C6BE4u);
    ctx->pc = 0x1C6BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BDCu;
            // 0x1c6be0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A48u;
    if (runtime->hasFunction(0x1C6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BE4u; }
        if (ctx->pc != 0x1C6BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A48_0x1c6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BE4u; }
        if (ctx->pc != 0x1C6BE4u) { return; }
    }
    ctx->pc = 0x1C6BE4u;
label_1c6be4:
    // 0x1c6be4: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C6BE4u;
    {
        const bool branch_taken_0x1c6be4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BE4u;
            // 0x1c6be8: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6be4) {
            ctx->pc = 0x1C6C48u;
            goto label_1c6c48;
        }
    }
    ctx->pc = 0x1C6BECu;
    // 0x1c6bec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c6becu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c6bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf4: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x1c6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c6bf8: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x1c6bf8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1c6bfc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6BFCu;
    {
        const bool branch_taken_0x1c6bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6bfc) {
            ctx->pc = 0x1C6C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BFCu;
            // 0x1c6c00: 0x82430000  lb          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6C1Cu;
            goto label_1c6c1c;
        }
    }
    ctx->pc = 0x1C6C04u;
    // 0x1c6c04: 0x5465fff0  bnel        $v1, $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C6C04u;
    {
        const bool branch_taken_0x1c6c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c6c04) {
            ctx->pc = 0x1C6C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C04u;
            // 0x1c6c08: 0x42600  sll         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6bc8;
        }
    }
    ctx->pc = 0x1C6C0Cu;
    // 0x1c6c0c: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x1c6c0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1c6c10:
    // 0x1c6c10: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C6C10u;
    {
        const bool branch_taken_0x1c6c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c10) {
            ctx->pc = 0x1C6C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C10u;
            // 0x1c6c14: 0x42600  sll         $a0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6bc8;
        }
    }
    ctx->pc = 0x1C6C18u;
label_1c6c18:
    // 0x1c6c18: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1c6c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1c6c1c:
    // 0x1c6c1c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6C1Cu;
    {
        const bool branch_taken_0x1c6c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C1Cu;
            // 0x1c6c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c1c) {
            ctx->pc = 0x1C6C4Cu;
            goto label_1c6c4c;
        }
    }
    ctx->pc = 0x1C6C24u;
    // 0x1c6c24: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1c6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c6c28: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6C28u;
    {
        const bool branch_taken_0x1c6c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C28u;
            // 0x1c6c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c28) {
            ctx->pc = 0x1C6C4Cu;
            goto label_1c6c4c;
        }
    }
    ctx->pc = 0x1C6C30u;
    // 0x1c6c30: 0x82420001  lb          $v0, 0x1($s2)
    ctx->pc = 0x1c6c30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1c6c34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6C34u;
    {
        const bool branch_taken_0x1c6c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c34) {
            ctx->pc = 0x1C6C38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C34u;
            // 0x1c6c38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6C4Cu;
            goto label_1c6c4c;
        }
    }
    ctx->pc = 0x1C6C3Cu;
    // 0x1c6c3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6C3Cu;
    {
        const bool branch_taken_0x1c6c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C3Cu;
            // 0x1c6c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c3c) {
            ctx->pc = 0x1C6C4Cu;
            goto label_1c6c4c;
        }
    }
    ctx->pc = 0x1C6C44u;
    // 0x1c6c44: 0x0  nop
    ctx->pc = 0x1c6c44u;
    // NOP
label_1c6c48:
    // 0x1c6c48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c4c:
    // 0x1c6c4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6c54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6c54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C5Cu;
            // 0x1c6c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6C64u;
    // 0x1c6c64: 0x0  nop
    ctx->pc = 0x1c6c64u;
    // NOP
}
