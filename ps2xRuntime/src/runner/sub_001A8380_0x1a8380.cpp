#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8380
// Address: 0x1a8380 - 0x1a83b8
void sub_001A8380_0x1a8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8380_0x1a8380");
#endif

    switch (ctx->pc) {
        case 0x1a8380u: goto label_1a8380;
        case 0x1a8384u: goto label_1a8384;
        case 0x1a8388u: goto label_1a8388;
        case 0x1a838cu: goto label_1a838c;
        case 0x1a8390u: goto label_1a8390;
        case 0x1a8394u: goto label_1a8394;
        case 0x1a8398u: goto label_1a8398;
        case 0x1a839cu: goto label_1a839c;
        case 0x1a83a0u: goto label_1a83a0;
        case 0x1a83a4u: goto label_1a83a4;
        case 0x1a83a8u: goto label_1a83a8;
        case 0x1a83acu: goto label_1a83ac;
        case 0x1a83b0u: goto label_1a83b0;
        case 0x1a83b4u: goto label_1a83b4;
        default: break;
    }

    ctx->pc = 0x1a8380u;

label_1a8380:
    // 0x1a8380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a8384:
    // 0x1a8384: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a8384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8388:
    // 0x1a8388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a838c:
    // 0x1a838c: 0x40f809  jalr        $v0
label_1a8390:
    if (ctx->pc == 0x1A8390u) {
        ctx->pc = 0x1A8390u;
            // 0x1a8390: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8394u;
        goto label_1a8394;
    }
    ctx->pc = 0x1A838Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8394u);
        ctx->pc = 0x1A8390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A838Cu;
            // 0x1a8390: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8394u; }
            if (ctx->pc != 0x1A8394u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8394u;
label_1a8394:
    // 0x1a8394: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a8394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8398:
    // 0x1a8398: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a8398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a839c:
    // 0x1a839c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1a839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1a83a0:
    // 0x1a83a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a83a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a83a4:
    // 0x1a83a4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1a83a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1a83a8:
    // 0x1a83a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a83a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a83ac:
    // 0x1a83ac: 0x3e00008  jr          $ra
label_1a83b0:
    if (ctx->pc == 0x1A83B0u) {
        ctx->pc = 0x1A83B0u;
            // 0x1a83b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A83B4u;
        goto label_1a83b4;
    }
    ctx->pc = 0x1A83ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A83B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83ACu;
            // 0x1a83b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A83B4u;
label_1a83b4:
    // 0x1a83b4: 0x0  nop
    ctx->pc = 0x1a83b4u;
    // NOP
}
