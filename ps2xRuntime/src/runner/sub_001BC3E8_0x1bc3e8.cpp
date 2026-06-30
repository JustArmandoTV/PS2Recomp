#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC3E8
// Address: 0x1bc3e8 - 0x1bc450
void sub_001BC3E8_0x1bc3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC3E8_0x1bc3e8");
#endif

    switch (ctx->pc) {
        case 0x1bc41cu: goto label_1bc41c;
        default: break;
    }

    ctx->pc = 0x1bc3e8u;

    // 0x1bc3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc3ec: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1bc3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bc3f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc3f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bc3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc400: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc404: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bc404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bc408: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bc408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bc40c: 0x24a5b1c0  addiu       $a1, $a1, -0x4E40
    ctx->pc = 0x1bc40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947264));
    // 0x1bc410: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1bc410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bc414: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1BC414u;
    SET_GPR_U32(ctx, 31, 0x1BC41Cu);
    ctx->pc = 0x1BC418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC414u;
            // 0x1bc418: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC41Cu; }
        if (ctx->pc != 0x1BC41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC41Cu; }
        if (ctx->pc != 0x1BC41Cu) { return; }
    }
    ctx->pc = 0x1BC41Cu;
label_1bc41c:
    // 0x1bc41c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC41Cu;
    {
        const bool branch_taken_0x1bc41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC41Cu;
            // 0x1bc420: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc41c) {
            ctx->pc = 0x1BC430u;
            goto label_1bc430;
        }
    }
    ctx->pc = 0x1BC424u;
    // 0x1bc424: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bc424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bc428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC428u;
    {
        const bool branch_taken_0x1bc428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC428u;
            // 0x1bc42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc428) {
            ctx->pc = 0x1BC438u;
            goto label_1bc438;
        }
    }
    ctx->pc = 0x1BC430u;
label_1bc430:
    // 0x1bc430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc434: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bc434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bc438:
    // 0x1bc438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc43c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc43cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc444: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC444u;
            // 0x1bc448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC44Cu;
    // 0x1bc44c: 0x0  nop
    ctx->pc = 0x1bc44cu;
    // NOP
}
