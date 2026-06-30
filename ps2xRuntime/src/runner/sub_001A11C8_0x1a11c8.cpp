#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A11C8
// Address: 0x1a11c8 - 0x1a1220
void sub_001A11C8_0x1a11c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A11C8_0x1a11c8");
#endif

    switch (ctx->pc) {
        case 0x1a11c8u: goto label_1a11c8;
        case 0x1a11ccu: goto label_1a11cc;
        case 0x1a11d0u: goto label_1a11d0;
        case 0x1a11d4u: goto label_1a11d4;
        case 0x1a11d8u: goto label_1a11d8;
        case 0x1a11dcu: goto label_1a11dc;
        case 0x1a11e0u: goto label_1a11e0;
        case 0x1a11e4u: goto label_1a11e4;
        case 0x1a11e8u: goto label_1a11e8;
        case 0x1a11ecu: goto label_1a11ec;
        case 0x1a11f0u: goto label_1a11f0;
        case 0x1a11f4u: goto label_1a11f4;
        case 0x1a11f8u: goto label_1a11f8;
        case 0x1a11fcu: goto label_1a11fc;
        case 0x1a1200u: goto label_1a1200;
        case 0x1a1204u: goto label_1a1204;
        case 0x1a1208u: goto label_1a1208;
        case 0x1a120cu: goto label_1a120c;
        case 0x1a1210u: goto label_1a1210;
        case 0x1a1214u: goto label_1a1214;
        case 0x1a1218u: goto label_1a1218;
        case 0x1a121cu: goto label_1a121c;
        default: break;
    }

    ctx->pc = 0x1a11c8u;

label_1a11c8:
    // 0x1a11c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a11c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a11cc:
    // 0x1a11cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a11ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a11d0:
    // 0x1a11d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a11d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a11d4:
    // 0x1a11d4: 0xc0685d4  jal         func_1A1750
label_1a11d8:
    if (ctx->pc == 0x1A11D8u) {
        ctx->pc = 0x1A11D8u;
            // 0x1a11d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A11DCu;
        goto label_1a11dc;
    }
    ctx->pc = 0x1A11D4u;
    SET_GPR_U32(ctx, 31, 0x1A11DCu);
    ctx->pc = 0x1A11D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11D4u;
            // 0x1a11d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11DCu; }
        if (ctx->pc != 0x1A11DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A11DCu; }
        if (ctx->pc != 0x1A11DCu) { return; }
    }
    ctx->pc = 0x1A11DCu;
label_1a11dc:
    // 0x1a11dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a11e0:
    // 0x1a11e0: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_1a11e4:
    if (ctx->pc == 0x1A11E4u) {
        ctx->pc = 0x1A11E4u;
            // 0x1a11e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A11E8u;
        goto label_1a11e8;
    }
    ctx->pc = 0x1A11E0u;
    {
        const bool branch_taken_0x1a11e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a11e0) {
            ctx->pc = 0x1A11E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11E0u;
            // 0x1a11e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1210u;
            goto label_1a1210;
        }
    }
    ctx->pc = 0x1A11E8u;
label_1a11e8:
    // 0x1a11e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a11ec:
    // 0x1a11ec: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1a11ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a11f0:
    // 0x1a11f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a11f4:
    if (ctx->pc == 0x1A11F4u) {
        ctx->pc = 0x1A11F4u;
            // 0x1a11f4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1A11F8u;
        goto label_1a11f8;
    }
    ctx->pc = 0x1A11F0u;
    {
        const bool branch_taken_0x1a11f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A11F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11F0u;
            // 0x1a11f4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11f0) {
            ctx->pc = 0x1A120Cu;
            goto label_1a120c;
        }
    }
    ctx->pc = 0x1A11F8u;
label_1a11f8:
    // 0x1a11f8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1a11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a11fc:
    // 0x1a11fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a1200:
    if (ctx->pc == 0x1A1200u) {
        ctx->pc = 0x1A1200u;
            // 0x1a1200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1204u;
        goto label_1a1204;
    }
    ctx->pc = 0x1A11FCu;
    {
        const bool branch_taken_0x1a11fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11fc) {
            ctx->pc = 0x1A1200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11FCu;
            // 0x1a1200: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1210u;
            goto label_1a1210;
        }
    }
    ctx->pc = 0x1A1204u;
label_1a1204:
    // 0x1a1204: 0x40f809  jalr        $v0
label_1a1208:
    if (ctx->pc == 0x1A1208u) {
        ctx->pc = 0x1A120Cu;
        goto label_1a120c;
    }
    ctx->pc = 0x1A1204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A120Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A120Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A120Cu; }
            if (ctx->pc != 0x1A120Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1A120Cu;
label_1a120c:
    // 0x1a120c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a120cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1210:
    // 0x1a1210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a1210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1214:
    // 0x1a1214: 0x3e00008  jr          $ra
label_1a1218:
    if (ctx->pc == 0x1A1218u) {
        ctx->pc = 0x1A1218u;
            // 0x1a1218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A121Cu;
        goto label_1a121c;
    }
    ctx->pc = 0x1A1214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1214u;
            // 0x1a1218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A121Cu;
label_1a121c:
    // 0x1a121c: 0x0  nop
    ctx->pc = 0x1a121cu;
    // NOP
}
