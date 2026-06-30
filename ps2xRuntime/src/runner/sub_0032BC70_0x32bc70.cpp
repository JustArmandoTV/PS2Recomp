#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032BC70
// Address: 0x32bc70 - 0x32bcd0
void sub_0032BC70_0x32bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BC70_0x32bc70");
#endif

    switch (ctx->pc) {
        case 0x32bcb0u: goto label_32bcb0;
        default: break;
    }

    ctx->pc = 0x32bc70u;

    // 0x32bc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bc74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32bc78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32bc7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32bc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bc80: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x32BC80u;
    {
        const bool branch_taken_0x32bc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bc80) {
            ctx->pc = 0x32BC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32BC80u;
            // 0x32bc84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32BCB4u;
            goto label_32bcb4;
        }
    }
    ctx->pc = 0x32BC88u;
    // 0x32bc88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x32bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x32bc8c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x32bc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x32bc90: 0x24424898  addiu       $v0, $v0, 0x4898
    ctx->pc = 0x32bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18584));
    // 0x32bc94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32bc94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32bc98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32bc9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x32bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x32bca0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BCA0u;
    {
        const bool branch_taken_0x32bca0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x32BCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BCA0u;
            // 0x32bca4: 0xac403e50  sw          $zero, 0x3E50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bca0) {
            ctx->pc = 0x32BCB0u;
            goto label_32bcb0;
        }
    }
    ctx->pc = 0x32BCA8u;
    // 0x32bca8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x32BCA8u;
    SET_GPR_U32(ctx, 31, 0x32BCB0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BCB0u; }
        if (ctx->pc != 0x32BCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BCB0u; }
        if (ctx->pc != 0x32BCB0u) { return; }
    }
    ctx->pc = 0x32BCB0u;
label_32bcb0:
    // 0x32bcb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32bcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32bcb4:
    // 0x32bcb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32bcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bcb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bcb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x32BCBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BCBCu;
            // 0x32bcc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32BCC4u;
    // 0x32bcc4: 0x0  nop
    ctx->pc = 0x32bcc4u;
    // NOP
    // 0x32bcc8: 0x0  nop
    ctx->pc = 0x32bcc8u;
    // NOP
    // 0x32bccc: 0x0  nop
    ctx->pc = 0x32bcccu;
    // NOP
}
