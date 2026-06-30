#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6198
// Address: 0x1c6198 - 0x1c61f0
void sub_001C6198_0x1c6198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6198_0x1c6198");
#endif

    ctx->pc = 0x1c6198u;

    // 0x1c6198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c619c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c619cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c61a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c61a4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1c61a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1c61a8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1c61a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61ac: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1c61acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c61b0: 0x25050004  addiu       $a1, $t0, 0x4
    ctx->pc = 0x1c61b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1c61b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1c61b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c61b8: 0x71203  sra         $v0, $a3, 8
    ctx->pc = 0x1c61b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 8));
    // 0x1c61bc: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1c61bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1c61c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c61c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c61c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c61c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c61cc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c61ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c61d0: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1c61d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1c61d4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1c61d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1c61d8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1c61d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1c61dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c61dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c61e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c61e4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1c61e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1c61e8: 0x8071784  j           func_1C5E10
    ctx->pc = 0x1C61E8u;
    ctx->pc = 0x1C61ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C61E8u;
            // 0x1c61ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5E10u;
    if (runtime->hasFunction(0x1C5E10u)) {
        auto targetFn = runtime->lookupFunction(0x1C5E10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C5E10_0x1c5e10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C61F0u;
}
