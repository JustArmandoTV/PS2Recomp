#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00435D30
// Address: 0x435d30 - 0x435d90
void sub_00435D30_0x435d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435D30_0x435d30");
#endif

    switch (ctx->pc) {
        case 0x435d70u: goto label_435d70;
        default: break;
    }

    ctx->pc = 0x435d30u;

    // 0x435d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x435d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x435d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x435d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x435d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x435d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x435d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x435d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435d40: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x435D40u;
    {
        const bool branch_taken_0x435d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x435d40) {
            ctx->pc = 0x435D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x435D40u;
            // 0x435d44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x435D74u;
            goto label_435d74;
        }
    }
    ctx->pc = 0x435D48u;
    // 0x435d48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x435d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x435d4c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x435d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x435d50: 0x2442cb98  addiu       $v0, $v0, -0x3468
    ctx->pc = 0x435d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953880));
    // 0x435d54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x435d54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x435d58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x435d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x435d5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x435d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x435d60: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x435D60u;
    {
        const bool branch_taken_0x435d60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x435D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435D60u;
            // 0x435d64: 0xac400d10  sw          $zero, 0xD10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435d60) {
            ctx->pc = 0x435D70u;
            goto label_435d70;
        }
    }
    ctx->pc = 0x435D68u;
    // 0x435d68: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x435D68u;
    SET_GPR_U32(ctx, 31, 0x435D70u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435D70u; }
        if (ctx->pc != 0x435D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x435D70u; }
        if (ctx->pc != 0x435D70u) { return; }
    }
    ctx->pc = 0x435D70u;
label_435d70:
    // 0x435d70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x435d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_435d74:
    // 0x435d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x435d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435d78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x435d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x435D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x435D7Cu;
            // 0x435d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x435D84u;
    // 0x435d84: 0x0  nop
    ctx->pc = 0x435d84u;
    // NOP
    // 0x435d88: 0x0  nop
    ctx->pc = 0x435d88u;
    // NOP
    // 0x435d8c: 0x0  nop
    ctx->pc = 0x435d8cu;
    // NOP
}
