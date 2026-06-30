#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB540
// Address: 0x1bb540 - 0x1bb5a8
void sub_001BB540_0x1bb540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB540_0x1bb540");
#endif

    switch (ctx->pc) {
        case 0x1bb574u: goto label_1bb574;
        default: break;
    }

    ctx->pc = 0x1bb540u;

    // 0x1bb540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bb544: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1bb544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bb548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb54c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bb54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bb550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bb554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bb554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bb558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bb55c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bb55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bb560: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1bb560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1bb564: 0x24a5b170  addiu       $a1, $a1, -0x4E90
    ctx->pc = 0x1bb564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947184));
    // 0x1bb568: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1bb568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bb56c: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1BB56Cu;
    SET_GPR_U32(ctx, 31, 0x1BB574u);
    ctx->pc = 0x1BB570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB56Cu;
            // 0x1bb570: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB574u; }
        if (ctx->pc != 0x1BB574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB574u; }
        if (ctx->pc != 0x1BB574u) { return; }
    }
    ctx->pc = 0x1BB574u;
label_1bb574:
    // 0x1bb574: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB574u;
    {
        const bool branch_taken_0x1bb574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB574u;
            // 0x1bb578: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb574) {
            ctx->pc = 0x1BB588u;
            goto label_1bb588;
        }
    }
    ctx->pc = 0x1BB57Cu;
    // 0x1bb57c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bb57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1bb580: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB580u;
    {
        const bool branch_taken_0x1bb580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB580u;
            // 0x1bb584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb580) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB588u;
label_1bb588:
    // 0x1bb588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb58c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bb58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bb590:
    // 0x1bb590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bb594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bb598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb59c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB59Cu;
            // 0x1bb5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB5A4u;
    // 0x1bb5a4: 0x0  nop
    ctx->pc = 0x1bb5a4u;
    // NOP
}
