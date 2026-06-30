#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038FFD0
// Address: 0x38ffd0 - 0x390030
void sub_0038FFD0_0x38ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FFD0_0x38ffd0");
#endif

    switch (ctx->pc) {
        case 0x390010u: goto label_390010;
        default: break;
    }

    ctx->pc = 0x38ffd0u;

    // 0x38ffd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38ffd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38ffd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38ffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38ffdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ffdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ffe0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x38FFE0u;
    {
        const bool branch_taken_0x38ffe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ffe0) {
            ctx->pc = 0x38FFE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38FFE0u;
            // 0x38ffe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390014u;
            goto label_390014;
        }
    }
    ctx->pc = 0x38FFE8u;
    // 0x38ffe8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x38ffec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x38ffecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x38fff0: 0x24427dd0  addiu       $v0, $v0, 0x7DD0
    ctx->pc = 0x38fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32208));
    // 0x38fff4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x38fff4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x38fff8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x38fffc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38fffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x390000: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x390000u;
    {
        const bool branch_taken_0x390000 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x390004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390000u;
            // 0x390004: 0xac406120  sw          $zero, 0x6120($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390000) {
            ctx->pc = 0x390010u;
            goto label_390010;
        }
    }
    ctx->pc = 0x390008u;
    // 0x390008: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x390008u;
    SET_GPR_U32(ctx, 31, 0x390010u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390010u; }
        if (ctx->pc != 0x390010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390010u; }
        if (ctx->pc != 0x390010u) { return; }
    }
    ctx->pc = 0x390010u;
label_390010:
    // 0x390010: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x390010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390014:
    // 0x390014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x390014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39001c: 0x3e00008  jr          $ra
    ctx->pc = 0x39001Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39001Cu;
            // 0x390020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x390024u;
    // 0x390024: 0x0  nop
    ctx->pc = 0x390024u;
    // NOP
    // 0x390028: 0x0  nop
    ctx->pc = 0x390028u;
    // NOP
    // 0x39002c: 0x0  nop
    ctx->pc = 0x39002cu;
    // NOP
}
