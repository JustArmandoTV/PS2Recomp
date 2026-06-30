#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107B78
// Address: 0x107b78 - 0x107c18
void sub_00107B78_0x107b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107B78_0x107b78");
#endif

    switch (ctx->pc) {
        case 0x107b94u: goto label_107b94;
        default: break;
    }

    ctx->pc = 0x107b78u;

    // 0x107b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x107b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x107b7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x107b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107b84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x107b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x107b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x107b8c: 0xc045968  jal         func_1165A0
    ctx->pc = 0x107B8Cu;
    SET_GPR_U32(ctx, 31, 0x107B94u);
    ctx->pc = 0x107B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107B8Cu;
            // 0x107b90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107B94u; }
        if (ctx->pc != 0x107B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107B94u; }
        if (ctx->pc != 0x107B94u) { return; }
    }
    ctx->pc = 0x107B94u;
label_107b94:
    // 0x107b94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x107b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b98: 0x101f02  srl         $v1, $s0, 28
    ctx->pc = 0x107b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x107b9c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x107b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x107ba0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107BA0u;
    {
        const bool branch_taken_0x107ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107BA0u;
            // 0x107ba4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ba0) {
            ctx->pc = 0x107BBCu;
            goto label_107bbc;
        }
    }
    ctx->pc = 0x107BA8u;
    // 0x107ba8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x107ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x107bac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x107bb0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x107bb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x107bb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x107BB4u;
    {
        const bool branch_taken_0x107bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107BB4u;
            // 0x107bb8: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bb4) {
            ctx->pc = 0x107BC4u;
            goto label_107bc4;
        }
    }
    ctx->pc = 0x107BBCu;
label_107bbc:
    // 0x107bbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x107bc0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x107bc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_107bc4:
    // 0x107bc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107bc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x107bcc: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x107bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x107bd0: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x107bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x107bd4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x107bd4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x107bd8: 0x112103  sra         $a0, $s1, 4
    ctx->pc = 0x107bd8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 4));
    // 0x107bdc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x107bdcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x107be0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107be4: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x107be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x107be8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x107be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x107bec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x107becu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x107bf0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x107BF0u;
    {
        const bool branch_taken_0x107bf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107BF0u;
            // 0x107bf4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bf0) {
            ctx->pc = 0x107C08u;
            goto label_107c08;
        }
    }
    ctx->pc = 0x107BF8u;
    // 0x107bf8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107c00: 0x804597c  j           func_1165F0
    ctx->pc = 0x107C00u;
    ctx->pc = 0x107C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107C00u;
            // 0x107c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x107C08u;
label_107c08:
    // 0x107c08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107c10: 0x3e00008  jr          $ra
    ctx->pc = 0x107C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C10u;
            // 0x107c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107C18u;
}
