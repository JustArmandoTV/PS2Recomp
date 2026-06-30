#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D6630
// Address: 0x3d6630 - 0x3d6690
void sub_003D6630_0x3d6630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6630_0x3d6630");
#endif

    switch (ctx->pc) {
        case 0x3d6670u: goto label_3d6670;
        default: break;
    }

    ctx->pc = 0x3d6630u;

    // 0x3d6630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d6630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d6634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d6634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d6638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d6638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d663c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d663cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6640: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3D6640u;
    {
        const bool branch_taken_0x3d6640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6640) {
            ctx->pc = 0x3D6644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6640u;
            // 0x3d6644: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D6674u;
            goto label_3d6674;
        }
    }
    ctx->pc = 0x3D6648u;
    // 0x3d6648: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d6648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3d664c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3d664cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3d6650: 0x24429500  addiu       $v0, $v0, -0x6B00
    ctx->pc = 0x3d6650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939904));
    // 0x3d6654: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3d6654u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3d6658: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d6658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3d665c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3d6660: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6660u;
    {
        const bool branch_taken_0x3d6660 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D6664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D6660u;
            // 0x3d6664: 0xac406ea8  sw          $zero, 0x6EA8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28328), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6660) {
            ctx->pc = 0x3D6670u;
            goto label_3d6670;
        }
    }
    ctx->pc = 0x3D6668u;
    // 0x3d6668: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3D6668u;
    SET_GPR_U32(ctx, 31, 0x3D6670u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6670u; }
        if (ctx->pc != 0x3D6670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D6670u; }
        if (ctx->pc != 0x3D6670u) { return; }
    }
    ctx->pc = 0x3D6670u;
label_3d6670:
    // 0x3d6670: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d6670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6674:
    // 0x3d6674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d6674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d6678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d667c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D667Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D667Cu;
            // 0x3d6680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D6684u;
    // 0x3d6684: 0x0  nop
    ctx->pc = 0x3d6684u;
    // NOP
    // 0x3d6688: 0x0  nop
    ctx->pc = 0x3d6688u;
    // NOP
    // 0x3d668c: 0x0  nop
    ctx->pc = 0x3d668cu;
    // NOP
}
