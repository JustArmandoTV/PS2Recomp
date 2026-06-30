#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5A98
// Address: 0x1a5a98 - 0x1a5b28
void sub_001A5A98_0x1a5a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5A98_0x1a5a98");
#endif

    switch (ctx->pc) {
        case 0x1a5ac0u: goto label_1a5ac0;
        default: break;
    }

    ctx->pc = 0x1a5a98u;

    // 0x1a5a98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5a9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a5a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5aa0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a5aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a5aa4: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1a5aa8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a5aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a5aac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5ab0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a5ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ab4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1a5ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a5ab8: 0xc0696ca  jal         func_1A5B28
    ctx->pc = 0x1A5AB8u;
    SET_GPR_U32(ctx, 31, 0x1A5AC0u);
    ctx->pc = 0x1A5ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AB8u;
            // 0x1a5abc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5B28u;
    if (runtime->hasFunction(0x1A5B28u)) {
        auto targetFn = runtime->lookupFunction(0x1A5B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5AC0u; }
        if (ctx->pc != 0x1A5AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5B28_0x1a5b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5AC0u; }
        if (ctx->pc != 0x1A5AC0u) { return; }
    }
    ctx->pc = 0x1A5AC0u;
label_1a5ac0:
    // 0x1a5ac0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5ac4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a5ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5ac8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1a5ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a5acc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5ACCu;
    {
        const bool branch_taken_0x1a5acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5acc) {
            ctx->pc = 0x1A5AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5ACCu;
            // 0x1a5ad0: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5AECu;
            goto label_1a5aec;
        }
    }
    ctx->pc = 0x1A5AD4u;
    // 0x1a5ad4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a5ad8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5adc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a5adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5ae0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5AE0u;
    {
        const bool branch_taken_0x1a5ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ae0) {
            ctx->pc = 0x1A5AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AE0u;
            // 0x1a5ae4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5B18u;
            goto label_1a5b18;
        }
    }
    ctx->pc = 0x1A5AE8u;
    // 0x1a5ae8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a5ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5aec:
    // 0x1a5aec: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1a5aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a5af0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5AF0u;
    {
        const bool branch_taken_0x1a5af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5af0) {
            ctx->pc = 0x1A5AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AF0u;
            // 0x1a5af4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5B10u;
            goto label_1a5b10;
        }
    }
    ctx->pc = 0x1A5AF8u;
    // 0x1a5af8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1a5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a5afc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a5b00: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a5b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a5b04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5B04u;
    {
        const bool branch_taken_0x1a5b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b04) {
            ctx->pc = 0x1A5B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B04u;
            // 0x1a5b08: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5B18u;
            goto label_1a5b18;
        }
    }
    ctx->pc = 0x1A5B0Cu;
    // 0x1a5b0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a5b10:
    // 0x1a5b10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a5b14: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a5b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5b18:
    // 0x1a5b18: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a5b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a5b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B1Cu;
            // 0x1a5b20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5B24u;
    // 0x1a5b24: 0x0  nop
    ctx->pc = 0x1a5b24u;
    // NOP
}
