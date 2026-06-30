#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037B560
// Address: 0x37b560 - 0x37b5c0
void sub_0037B560_0x37b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B560_0x37b560");
#endif

    switch (ctx->pc) {
        case 0x37b5a0u: goto label_37b5a0;
        default: break;
    }

    ctx->pc = 0x37b560u;

    // 0x37b560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37b568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37b568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37b56c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b570: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x37B570u;
    {
        const bool branch_taken_0x37b570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b570) {
            ctx->pc = 0x37B574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37B570u;
            // 0x37b574: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37B5A4u;
            goto label_37b5a4;
        }
    }
    ctx->pc = 0x37B578u;
    // 0x37b578: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37b578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37b57c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x37b57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37b580: 0x24427420  addiu       $v0, $v0, 0x7420
    ctx->pc = 0x37b580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29728));
    // 0x37b584: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37b584u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37b588: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b58c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x37b590: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B590u;
    {
        const bool branch_taken_0x37b590 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x37B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B590u;
            // 0x37b594: 0xac406098  sw          $zero, 0x6098($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b590) {
            ctx->pc = 0x37B5A0u;
            goto label_37b5a0;
        }
    }
    ctx->pc = 0x37B598u;
    // 0x37b598: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x37B598u;
    SET_GPR_U32(ctx, 31, 0x37B5A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B5A0u; }
        if (ctx->pc != 0x37B5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37B5A0u; }
        if (ctx->pc != 0x37B5A0u) { return; }
    }
    ctx->pc = 0x37B5A0u;
label_37b5a0:
    // 0x37b5a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37b5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37b5a4:
    // 0x37b5a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37b5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b5a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x37B5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37B5ACu;
            // 0x37b5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37B5B4u;
    // 0x37b5b4: 0x0  nop
    ctx->pc = 0x37b5b4u;
    // NOP
    // 0x37b5b8: 0x0  nop
    ctx->pc = 0x37b5b8u;
    // NOP
    // 0x37b5bc: 0x0  nop
    ctx->pc = 0x37b5bcu;
    // NOP
}
