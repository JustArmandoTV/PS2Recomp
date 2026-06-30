#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5B60
// Address: 0x1c5b60 - 0x1c5c40
void sub_001C5B60_0x1c5b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5B60_0x1c5b60");
#endif

    switch (ctx->pc) {
        case 0x1c5bacu: goto label_1c5bac;
        case 0x1c5bf0u: goto label_1c5bf0;
        default: break;
    }

    ctx->pc = 0x1c5b60u;

label_1c5b60:
    // 0x1c5b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5b64: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1c5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1c5b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5b6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c5b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b70: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1c5b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b74: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1c5b74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5b7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c5b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b80: 0x807164a  j           func_1C5928
    ctx->pc = 0x1C5B80u;
    ctx->pc = 0x1C5B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B80u;
            // 0x1c5b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5928u;
    if (runtime->hasFunction(0x1C5928u)) {
        auto targetFn = runtime->lookupFunction(0x1C5928u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C5928_0x1c5928(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5B88u;
    // 0x1c5b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c5b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c5b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c5b94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c5b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5b9c: 0x18e00023  blez        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C5B9Cu;
    {
        const bool branch_taken_0x1c5b9c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C5BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B9Cu;
            // 0x1c5ba0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b9c) {
            ctx->pc = 0x1C5C2Cu;
            goto label_1c5c2c;
        }
    }
    ctx->pc = 0x1C5BA4u;
    // 0x1c5ba4: 0xc0716d8  jal         func_1C5B60
    ctx->pc = 0x1C5BA4u;
    SET_GPR_U32(ctx, 31, 0x1C5BACu);
    ctx->pc = 0x1C5B60u;
    goto label_1c5b60;
    ctx->pc = 0x1C5BACu;
label_1c5bac:
    // 0x1c5bac: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5bacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c5bb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5bb8: 0x24c6bf90  addiu       $a2, $a2, -0x4070
    ctx->pc = 0x1c5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950800));
    // 0x1c5bbc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c5bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5bc0: 0x2405017e  addiu       $a1, $zero, 0x17E
    ctx->pc = 0x1c5bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    // 0x1c5bc4: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5BC4u;
    {
        const bool branch_taken_0x1c5bc4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C5BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BC4u;
            // 0x1c5bc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bc4) {
            ctx->pc = 0x1C5BE8u;
            goto label_1c5be8;
        }
    }
    ctx->pc = 0x1C5BCCu;
    // 0x1c5bcc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c5bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5bd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5bd8: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c5bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    // 0x1c5bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5be0: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C5BE0u;
    ctx->pc = 0x1C5BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BE0u;
            // 0x1c5be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5BE8u;
label_1c5be8:
    // 0x1c5be8: 0xc07173c  jal         func_1C5CF0
    ctx->pc = 0x1C5BE8u;
    SET_GPR_U32(ctx, 31, 0x1C5BF0u);
    ctx->pc = 0x1C5CF0u;
    if (runtime->hasFunction(0x1C5CF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C5CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5BF0u; }
        if (ctx->pc != 0x1C5BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5CF0_0x1c5cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5BF0u; }
        if (ctx->pc != 0x1C5BF0u) { return; }
    }
    ctx->pc = 0x1C5BF0u;
label_1c5bf0:
    // 0x1c5bf0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c5bf4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c5bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c5bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5bfc: 0x2484bee8  addiu       $a0, $a0, -0x4118
    ctx->pc = 0x1c5bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950632));
    // 0x1c5c00: 0x24c6bf80  addiu       $a2, $a2, -0x4080
    ctx->pc = 0x1c5c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950784));
    // 0x1c5c04: 0x24050183  addiu       $a1, $zero, 0x183
    ctx->pc = 0x1c5c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 387));
    // 0x1c5c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5c0c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5C0Cu;
    {
        const bool branch_taken_0x1c5c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C0Cu;
            // 0x1c5c10: 0x2408ff31  addiu       $t0, $zero, -0xCF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967089));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c0c) {
            ctx->pc = 0x1C5C28u;
            goto label_1c5c28;
        }
    }
    ctx->pc = 0x1C5C14u;
    // 0x1c5c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5c18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5c1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5c20: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C5C20u;
    ctx->pc = 0x1C5C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C20u;
            // 0x1c5c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C5C28u;
label_1c5c28:
    // 0x1c5c28: 0x1012c0  sll         $v0, $s0, 11
    ctx->pc = 0x1c5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_1c5c2c:
    // 0x1c5c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C38u;
            // 0x1c5c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5C40u;
}
