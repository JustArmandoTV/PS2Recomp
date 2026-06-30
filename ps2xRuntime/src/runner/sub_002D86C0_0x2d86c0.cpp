#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D86C0
// Address: 0x2d86c0 - 0x2d8710
void sub_002D86C0_0x2d86c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D86C0_0x2d86c0");
#endif

    switch (ctx->pc) {
        case 0x2d8704u: goto label_2d8704;
        default: break;
    }

    ctx->pc = 0x2d86c0u;

    // 0x2d86c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d86c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d86c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d86c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d86c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d86c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d86cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d86ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d86d0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2d86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d86d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d86d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d86d8: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D86D8u;
    {
        const bool branch_taken_0x2d86d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d86d8) {
            ctx->pc = 0x2D86DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D86D8u;
            // 0x2d86dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D8708u;
            goto label_2d8708;
        }
    }
    ctx->pc = 0x2D86E0u;
    // 0x2d86e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d86e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2d86e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d86e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2d86e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2d86ec: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2d86ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d86f0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d86f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d86f4: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2d86f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2d86f8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2d86f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2d86fc: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2D86FCu;
    SET_GPR_U32(ctx, 31, 0x2D8704u);
    ctx->pc = 0x2D8700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D86FCu;
            // 0x2d8700: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8704u; }
        if (ctx->pc != 0x2D8704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8704u; }
        if (ctx->pc != 0x2D8704u) { return; }
    }
    ctx->pc = 0x2D8704u;
label_2d8704:
    // 0x2d8704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8708:
    // 0x2d8708: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D870Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8708u;
            // 0x2d870c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8710u;
}
