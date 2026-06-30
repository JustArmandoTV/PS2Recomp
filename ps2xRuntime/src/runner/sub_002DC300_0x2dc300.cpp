#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DC300
// Address: 0x2dc300 - 0x2dc350
void sub_002DC300_0x2dc300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC300_0x2dc300");
#endif

    switch (ctx->pc) {
        case 0x2dc344u: goto label_2dc344;
        default: break;
    }

    ctx->pc = 0x2dc300u;

    // 0x2dc300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc304: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2dc304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc30c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2dc30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2dc310: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2dc310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2dc314: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2dc314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2dc318: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC318u;
    {
        const bool branch_taken_0x2dc318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc318) {
            ctx->pc = 0x2DC31Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC318u;
            // 0x2dc31c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC348u;
            goto label_2dc348;
        }
    }
    ctx->pc = 0x2DC320u;
    // 0x2dc320: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dc320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2dc324: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2dc324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2dc328: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2dc328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2dc32c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2dc32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2dc330: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2dc330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dc334: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2dc334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2dc338: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2dc338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2dc33c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2DC33Cu;
    SET_GPR_U32(ctx, 31, 0x2DC344u);
    ctx->pc = 0x2DC340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC33Cu;
            // 0x2dc340: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC344u; }
        if (ctx->pc != 0x2DC344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC344u; }
        if (ctx->pc != 0x2DC344u) { return; }
    }
    ctx->pc = 0x2DC344u;
label_2dc344:
    // 0x2dc344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc348:
    // 0x2dc348: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC348u;
            // 0x2dc34c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC350u;
}
