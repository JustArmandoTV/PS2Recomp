#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A83B8
// Address: 0x1a83b8 - 0x1a83f0
void sub_001A83B8_0x1a83b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A83B8_0x1a83b8");
#endif

    switch (ctx->pc) {
        case 0x1a83b8u: goto label_1a83b8;
        case 0x1a83bcu: goto label_1a83bc;
        case 0x1a83c0u: goto label_1a83c0;
        case 0x1a83c4u: goto label_1a83c4;
        case 0x1a83c8u: goto label_1a83c8;
        case 0x1a83ccu: goto label_1a83cc;
        case 0x1a83d0u: goto label_1a83d0;
        case 0x1a83d4u: goto label_1a83d4;
        case 0x1a83d8u: goto label_1a83d8;
        case 0x1a83dcu: goto label_1a83dc;
        case 0x1a83e0u: goto label_1a83e0;
        case 0x1a83e4u: goto label_1a83e4;
        case 0x1a83e8u: goto label_1a83e8;
        case 0x1a83ecu: goto label_1a83ec;
        default: break;
    }

    ctx->pc = 0x1a83b8u;

label_1a83b8:
    // 0x1a83b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a83b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a83bc:
    // 0x1a83bc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a83bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a83c0:
    // 0x1a83c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a83c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a83c4:
    // 0x1a83c4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1a83c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1a83c8:
    // 0x1a83c8: 0x40f809  jalr        $v0
label_1a83cc:
    if (ctx->pc == 0x1A83CCu) {
        ctx->pc = 0x1A83CCu;
            // 0x1a83cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A83D0u;
        goto label_1a83d0;
    }
    ctx->pc = 0x1A83C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A83D0u);
        ctx->pc = 0x1A83CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83C8u;
            // 0x1a83cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A83D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A83D0u; }
            if (ctx->pc != 0x1A83D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A83D0u;
label_1a83d0:
    // 0x1a83d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a83d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a83d4:
    // 0x1a83d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a83d8:
    // 0x1a83d8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1a83d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1a83dc:
    // 0x1a83dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a83dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a83e0:
    // 0x1a83e0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1a83e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1a83e4:
    // 0x1a83e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a83e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a83e8:
    // 0x1a83e8: 0x3e00008  jr          $ra
label_1a83ec:
    if (ctx->pc == 0x1A83ECu) {
        ctx->pc = 0x1A83ECu;
            // 0x1a83ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A83F0u;
        goto label_fallthrough_0x1a83e8;
    }
    ctx->pc = 0x1A83E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A83ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83E8u;
            // 0x1a83ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a83e8:
    ctx->pc = 0x1A83F0u;
}
