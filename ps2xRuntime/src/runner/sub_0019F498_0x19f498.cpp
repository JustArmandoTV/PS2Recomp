#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F498
// Address: 0x19f498 - 0x19f4f8
void sub_0019F498_0x19f498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F498_0x19f498");
#endif

    switch (ctx->pc) {
        case 0x19f4acu: goto label_19f4ac;
        case 0x19f4dcu: goto label_19f4dc;
        default: break;
    }

    ctx->pc = 0x19f498u;

    // 0x19f498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f4a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19f4a4: 0xc067cf4  jal         func_19F3D0
    ctx->pc = 0x19F4A4u;
    SET_GPR_U32(ctx, 31, 0x19F4ACu);
    ctx->pc = 0x19F4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4A4u;
            // 0x19f4a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D0u;
    if (runtime->hasFunction(0x19F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x19F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4ACu; }
        if (ctx->pc != 0x19F4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3D0_0x19f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4ACu; }
        if (ctx->pc != 0x19F4ACu) { return; }
    }
    ctx->pc = 0x19F4ACu;
label_19f4ac:
    // 0x19f4ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f4b0: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F4B0u;
    {
        const bool branch_taken_0x19f4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f4b0) {
            ctx->pc = 0x19F4B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4B0u;
            // 0x19f4b4: 0x8e0303f0  lw          $v1, 0x3F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F4C0u;
            goto label_19f4c0;
        }
    }
    ctx->pc = 0x19F4B8u;
    // 0x19f4b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19F4B8u;
    {
        const bool branch_taken_0x19f4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4B8u;
            // 0x19f4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4b8) {
            ctx->pc = 0x19F4E8u;
            goto label_19f4e8;
        }
    }
    ctx->pc = 0x19F4C0u;
label_19f4c0:
    // 0x19f4c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4c4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19F4C4u;
    {
        const bool branch_taken_0x19f4c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4C4u;
            // 0x19f4c8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4c4) {
            ctx->pc = 0x19F4E8u;
            goto label_19f4e8;
        }
    }
    ctx->pc = 0x19F4CCu;
    // 0x19f4cc: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x19f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x19f4d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19f4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f4d4: 0xc06e68c  jal         func_1B9A30
    ctx->pc = 0x19F4D4u;
    SET_GPR_U32(ctx, 31, 0x19F4DCu);
    ctx->pc = 0x19F4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4D4u;
            // 0x19f4d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9A30u;
    if (runtime->hasFunction(0x1B9A30u)) {
        auto targetFn = runtime->lookupFunction(0x1B9A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4DCu; }
        if (ctx->pc != 0x19F4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9A30_0x1b9a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F4DCu; }
        if (ctx->pc != 0x19F4DCu) { return; }
    }
    ctx->pc = 0x19F4DCu;
label_19f4dc:
    // 0x19f4dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f4e0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x19f4e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x19f4e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19f4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19f4e8:
    // 0x19f4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f4ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F4F0u;
            // 0x19f4f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F4F8u;
}
