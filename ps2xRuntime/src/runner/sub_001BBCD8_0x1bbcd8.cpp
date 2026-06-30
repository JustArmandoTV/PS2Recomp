#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBCD8
// Address: 0x1bbcd8 - 0x1bbd30
void sub_001BBCD8_0x1bbcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBCD8_0x1bbcd8");
#endif

    switch (ctx->pc) {
        case 0x1bbcf4u: goto label_1bbcf4;
        default: break;
    }

    ctx->pc = 0x1bbcd8u;

    // 0x1bbcd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbcdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbce0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bbce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbcec: 0xc06e868  jal         func_1BA1A0
    ctx->pc = 0x1BBCECu;
    SET_GPR_U32(ctx, 31, 0x1BBCF4u);
    ctx->pc = 0x1BBCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCECu;
            // 0x1bbcf0: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA1A0u;
    if (runtime->hasFunction(0x1BA1A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCF4u; }
        if (ctx->pc != 0x1BBCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA1A0_0x1ba1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCF4u; }
        if (ctx->pc != 0x1BBCF4u) { return; }
    }
    ctx->pc = 0x1BBCF4u;
label_1bbcf4:
    // 0x1bbcf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bbcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBCF8u;
    {
        const bool branch_taken_0x1bbcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCF8u;
            // 0x1bbcfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbcf8) {
            ctx->pc = 0x1BBD18u;
            goto label_1bbd18;
        }
    }
    ctx->pc = 0x1BBD00u;
    // 0x1bbd00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbd00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbd04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbd08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbd0c: 0x806edb0  j           func_1BB6C0
    ctx->pc = 0x1BBD0Cu;
    ctx->pc = 0x1BBD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD0Cu;
            // 0x1bbd10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB6C0u;
    if (runtime->hasFunction(0x1BB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB6C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BB6C0_0x1bb6c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BBD14u;
    // 0x1bbd14: 0x0  nop
    ctx->pc = 0x1bbd14u;
    // NOP
label_1bbd18:
    // 0x1bbd18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbd1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbd20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbd24: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD24u;
            // 0x1bbd28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBD2Cu;
    // 0x1bbd2c: 0x0  nop
    ctx->pc = 0x1bbd2cu;
    // NOP
}
