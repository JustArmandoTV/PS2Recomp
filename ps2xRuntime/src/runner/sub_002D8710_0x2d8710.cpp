#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D8710
// Address: 0x2d8710 - 0x2d8760
void sub_002D8710_0x2d8710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8710_0x2d8710");
#endif

    switch (ctx->pc) {
        case 0x2d8754u: goto label_2d8754;
        default: break;
    }

    ctx->pc = 0x2d8710u;

    // 0x2d8710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d8710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d8714: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d8714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d871c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d871cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d8720: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2d8720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d8724: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d8724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d8728: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D8728u;
    {
        const bool branch_taken_0x2d8728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8728) {
            ctx->pc = 0x2D872Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8728u;
            // 0x2d872c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8758u;
            goto label_2d8758;
        }
    }
    ctx->pc = 0x2D8730u;
    // 0x2d8730: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d8730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d8734: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d8734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d8738: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2d8738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2d873c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d873cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d8740: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d8740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8744: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2d8744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2d8748: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2d8748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2d874c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2D874Cu;
    SET_GPR_U32(ctx, 31, 0x2D8754u);
    ctx->pc = 0x2D8750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D874Cu;
            // 0x2d8750: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8754u; }
        if (ctx->pc != 0x2D8754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8754u; }
        if (ctx->pc != 0x2D8754u) { return; }
    }
    ctx->pc = 0x2D8754u;
label_2d8754:
    // 0x2d8754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8758:
    // 0x2d8758: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8758u;
            // 0x2d875c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8760u;
}
